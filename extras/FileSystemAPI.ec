#ifdef EC_STATIC
public import static "ecrt"
#else
public import "ecrt"
#endif

// global apis should be implemented in respective objects like FileSystemPath
// and some compiler directive could be used (or always be on) to allow less verbose code
// i.e.:
//    String dir = FileSystemPath::createTemporaryDir("baseName");
//    vs
//    Global FileSystemPath; // the compiler directive
//    String dir = createTemporaryDir("baseName");
// there could be a shorthand?:
//    FileSystemPath dir = ::createTemporaryDir("baseName");

public class FileSystemPath : String // FilePath
{
public:
   int OnCompare(FileSystemPath b)
   {
      return fstrcmp(this, b);
   }

   FileSystemPath ::expandRelativePath(FileSystemPath relativePath)
   {
      FileSystemPath result = new char[MAX_LOCATION];
      GetWorkingDir(result, MAX_DIRECTORY);
      PathCat(result, relativePath);
      return result;
   }

   FileSystemPath ::createTemporaryDir(const String baseName)
   {
      FileSystemPath result = new char[MAX_LOCATION];
      ((String)result)[0] = '\0';
      CreateTemporaryDir(result, baseName);
      return result;
   }

   property bool minimal { get { return this && ((String)this)[0]; } }

   FileAttribs exists()
   {
      FileAttribs result { };
      if(this && ((String)this)[0])
         result = FileExists(this);
      return result;
   }

   bool noSuchFile()
   {
      bool result = true;
      if(this && ((String)this)[0] && FileExists(this))
         result = false;
      return result;
   }

   bool makeDir()
   {
      if(this && ((String)this)[0] && !exists())
         return MakeDir(this);
      return false;
   }

   void destroyDir()
   {
      if(exists().isDirectory)
      {
         DestroyDirInterator i { };
         i.iterate(this);
         delete i;
      }
   }

   void deleteFile()
   {
      if(exists().isFile)
         DeleteFile(this);
   }

   bool existDirOrExistFileParentDir()
   {
      FileAttribs attribs;
      if((attribs = exists()).isFile)
      {
         StripLastDirectory(this, this);
      }
      return attribs;
   }

   FileSystemPath copyPath()
   {
      char * copy = this ? new char[MAX_LOCATION] : null;
      strncpy(copy, this, MAX_LOCATION);
      copy[MAX_LOCATION-1] = '\0';
      return copy;
   }

   FileSystemPath copySlashPath()
   {
      char * copy = this ? new char[MAX_LOCATION] : null;
      strncpy(copy, this, MAX_LOCATION);
      copy[MAX_LOCATION-1] = '\0';
      MakeSlashPath(copy);
      return copy;
   }

   FileSystemPath copySystemPath()
   {
      char * copy = this ? new char[MAX_LOCATION] : null;
      strncpy(copy, this, MAX_LOCATION);
      copy[MAX_LOCATION-1] = '\0';
      MakeSystemPath(copy);
      return copy;
   }

#if 0
   void ValidPathBufCopy(char *output, const char *input)
   {
   #ifdef __WIN32__
      bool volumePath = false;
   #endif
      strcpy(output, input);
      TrimLSpaces(output, output);
      TrimRSpaces(output, output);
      MakeSystemPath(output);
   #ifdef __WIN32__
      if(output[0] && output[1] == ':')
      {
         output[1] = '_';
         volumePath = true;
      }
   #endif
      {
         const char * chars = "*|:\",<>?";
         char ch, * s = output, * o = output;
         while((ch = *s++)) { if(!strchr(chars, ch)) *o++ = ch; }
         *o = '\0';
      }
   #ifdef __WIN32__
      if(volumePath && output[0])
         output[1] = ':';
   #endif
   }

   void RemoveTrailingPathSeparator(char *path)
   {
      int len;
      len = (int)strlen(path);
      if(len>1 && path[len-1] == DIR_SEP)
         path[--len] = '\0';
   }

   void BasicValidatePathBoxPath(PathBox pathBox)
   {
      char path[MAX_LOCATION];
      ValidPathBufCopy(path, pathBox.path);
      RemoveTrailingPathSeparator(path);
      pathBox.path = path;
   }
#endif
}

public void copyFile(const FileSystemPath srcPath, FileSystemPath dstPath)
{
   // FIXME: Warning -- Need const methods
   if(((FileSystemPath)(void *)srcPath).exists().isFile && dstPath.noSuchFile())
   {
      File fIn = FileOpen(srcPath, read);
      if(fIn)
      {
         File fOut = FileOpen(dstPath, write);
         if(fOut)
         {
            fileDataCopy(fIn, fOut);
            delete fOut;
         }
         delete fIn;
      }
   }
}

public void fileDataCopy(File input, File output)
{
   byte buffer[65536];
   input.Seek(0, start);
   for(;!input.Eof();)
   {
      uint count = input.Read(buffer, 1, sizeof(buffer));
      if(count)
         output.Write(buffer, 1, count);
   }
}

public char * copyPath(const char * path)
{
   char * copy = path ? new char[MAX_LOCATION] : null;
   if(path)
   {
      strncpy(copy, path, MAX_LOCATION);
      copy[MAX_LOCATION-1] = '\0';
   }
   return copy;
}

public char * copyPathCat(const char * path, const char * addedPath)
{
   char * copy = (path || addedPath) ? new char[MAX_LOCATION] : null;
   if(path || addedPath)
   {
      if(path)
      {
         strncpy(copy, path, MAX_LOCATION);
         copy[MAX_LOCATION-1] = '\0';
      }
      else
         copy[0] = '\0';
      if(addedPath)
         PathCatSlash(copy, addedPath);
   }
   return copy;
}

public class FileSystemIterator
{
public:
   bool iterateStartPath;

   virtual bool onInit(const FileSystemPath path, const String name, FileStats stats)
   {
      return false;
   }

   virtual bool onFile(const FileSystemPath path, const String name, FileStats stats)
   {
      return true;
   }

   virtual bool onFolder(const FileSystemPath path, const String name, FileStats stats)
   {
      return true;
   }

   virtual bool onVolume(const FileSystemPath path, const String name, FileStats stats)
   {
      return true;
   }

   virtual void outFolder(const FileSystemPath path, const String name, FileStats stats, bool isRoot)
   {
   }
}

public class NormalFileSystemIterator : FileSystemIterator
{
public:
   Array<StackFrame> stack { };

   char * extensions;
   property char * extensions { set { delete extensions; if(value) extensions = CopyString(value); } }

   ~NormalFileSystemIterator()
   {
      delete extensions;
   }

   void iterate(const char * startPath)
   {
      StackFrame frame;
      char slashPath[MAX_LOCATION];
      char name[MAX_FILENAME];
      FileStats stats { };
      GetLastDirectory(startPath, name);
      strcpy(slashPath, startPath);
      MakeSlashPath(slashPath);
      FileGetStats(slashPath, &stats);

      if(onInit(slashPath, name, stats))
      {
         frame = stack.firstIterator.data;
      }
      else
      {
         frame = StackFrame { };
         stack.Add(frame);
         frame.path = CopyString(startPath);
         frame.listing = FileListing { startPath, extensions = extensions };  // there should be a sorted = true/false
      }

      if(iterateStartPath)
      {
         //FileAttribs attribs = FileExists(startPath);
         // || attribs.isCDROM || attribs.isRemote || attribs.isRemovable || attribs.isServer || attribs.isShare || attribs.isSystem || attribs.isTemporary
         if(stats.attribs.isDrive)
            onVolume(slashPath, name, stats);
         else if(stats.attribs.isDirectory)
            onFolder(slashPath, name, stats);
         else if(stats.attribs.isFile)
            onFile(slashPath, name, stats);
      }

      while(stack.count)
      {
         if(frame.listing.Find())
         {
            //const char * name = frame.listing.name;
            //bool isDirectory = frame.listing.stats.attribs.isDirectory;
            //bool peek = frame.listing.stats.attribs.isDirectory && onFolder(frame.listing.path);
	    strcpy(slashPath, frame.listing.path);
            MakeSlashPath(slashPath);
            if(!frame.listing.stats.attribs.isDirectory)
            {
               //const char * path = frame.listing.path;
               //onFile(frame.listing.path);
	       onFile(slashPath, frame.listing.name, frame.listing.stats);
            }
            else if(frame.listing.stats.attribs.isDirectory && onFolder(slashPath, frame.listing.name, frame.listing.stats))
            {
               StackFrame newFrame { };
               stack.Add(newFrame);
               newFrame.path = CopyString(slashPath);
               newFrame.listing = FileListing { newFrame.path, extensions = frame.listing.extensions };
               frame = newFrame;
            }
         }
         else
         {
            StackFrame parentFrame = stack.count > 1 ? stack[stack.count - 2] : null;
            if(parentFrame)
            {
               GetLastDirectory(parentFrame.listing.path, name);
               strcpy(slashPath, parentFrame.listing.path);
               MakeSlashPath(slashPath);
            }
            else
            {
               GetLastDirectory(startPath, name);
               strcpy(slashPath, startPath);
               MakeSlashPath(slashPath);
            }
            outFolder(slashPath, name, parentFrame ? parentFrame.listing.stats : stats, parentFrame != null);
            stack.lastIterator.Remove();
            delete frame;
            if(stack.count)
               frame = stack.lastIterator.data;
            else
               delete frame; //frame = null;
         }
      }
   }
}



#if 0
static class IteratorThread : Thread
{
   void temp()
   {
      //listing = FileListing { dir, extensions = filter.extensions };  // there should be a sorted = true/false
   }
}
#endif

public class StackFrame
{
   int tag;
   char * path;
   FileListing listing;

   ~StackFrame()
   {
      delete path;
      //delete listing;
   }
};

public class DestroyDirInterator : NormalFileSystemIterator
{
   bool preserveRootFolder;

   void outFolder(const FileSystemPath path, const String name, FileStats stats, bool isRoot)
   {
      if(!(preserveRootFolder && isRoot))
         RemoveDir(path);
   }

   bool onFile(const FileSystemPath path, const String name, FileStats stats)
   {
      DeleteFile(path);
      return true;
   }
}
