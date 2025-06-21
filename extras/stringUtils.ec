public import IMPORT_STATIC "ecrt"

#include <stdarg.h>

String stripUrlPath(const char *url)
{
   /*
    * Return the input url up to and excluding the first '/' after the "://" of
    * the protocol.
    * If the string passed in does not contain a protocol specifier, return null.
    *
    * It is the caller's responsibility to dispose of the new string that is
    * created in due time.
    * */
   char * out = null;
   const char * path = null;
   const char * protocolMark = SearchString(url, 0, "://", false, false);
   if(protocolMark && protocolMark[3])
   {
      path = SearchString(protocolMark, 3, "/", false , false);
      if(path)
      {
         int len = (int)(path-url);
         out = new char[len+1];
         memcpy(out, url, len);
         out[len] = 0;
      }
      else
         out = CopyString(url);
   }
   return (String) out;
}

char * sprintfNew(const char *fmt, ...)
{
   String destination;
   va_list args;
   va_list argsCp;
   va_start(args, fmt);
   va_copy(argsCp, args);

   // Get the size right
   destination = new0 char[vsnprintf(null, 0, fmt, argsCp) + 1];
   va_end(argsCp);

   // Actually format the string
   vsprintf(destination, fmt, args);
   va_end(args);

   return destination;
}

String sprintfNamedNew(const String fmtStr, Map<String, String> subMap){
   /*
    * Search fmtStr for markers of the form "%{name}" and replace them with subMap["name"].
    * If no match is found in subMap, the marker is copied to the output.
    * The parameters inside the Map are only used if there is a matching marker in the fmtStr.
    *
    * The input Map values are required to be strings, so this is not very
    * general, but if the format string is changed, only new inputs need to be added to the Map.
    *
    * Note that the name can contain any character except '}'.
    *
    * Note that a marker must have at least one character between the braces, so fmtStr
    * can contain at most Strlen(fmtStr)/%4 markers.
    *
    * Note that a percent sign immediately before the marker does not escape it.
    * */

   const String fmtCursor = fmtStr;
   int fmtLen = strlen(fmtStr);
   //Bet that we have the maximum numberof markers, with 16 chars in each
   //substitution, then add the fntLen to that.
   int allocated = 16*fmtLen%4 + 3 + fmtLen;
   String result = new0 char[allocated];
   int resPos = -1; //resPos must be pre-incremented when adding characters.
   int count;
   const String subst = null;
   int subLen = 0;

   for(; fmtCursor[0] != '\0';++fmtCursor)
   {
      if (fmtCursor[0] != '%' || (fmtCursor[1] != '{') ) // && fmtCursor[1] != '%') )
      {
         /* result[++resPos] = fmtCursor[0]; */
         // We did not find name: put back the marker.
         subst = fmtCursor;
         subLen = 1;
         count = 0;
      }
      else if (fmtCursor[1] == '{')
      {
         // Extract the marker name
         String name = null;
         // count-up to and excluding the next '}'.
         for (count=2;fmtCursor[count] != '}';++count);
         name = new0  char[count];
         // Copy the name between braces.
         memcpy(name, fmtCursor + 2, count -2);
         subst = subMap[name];
         delete name;
         if(subst)
         {  // We found name: just set the correct length.
            subLen = strlen(subst);
         }
         else
         {
            // We did not find name: put back the marker.
            subst = fmtCursor;
            // The count does not include the ending '}', so +1
            subLen = count + 1;
         }
      }
         // Proceed with the substitution.
      if((allocated - resPos - subLen) <= 2)
         {
            int reallocated = 2*(allocated + subLen);
            result = renew0 result char[reallocated];
            allocated = reallocated;
         }
         memcpy(result+(++resPos), subst, subLen);
         // Increment position in the result,
         // allowing for the next pre-increment.
         resPos+=subLen - 1;
         // Move input pointer to the mark-ending '}'.
         fmtCursor+=count;
   }
   return result;
}

bool stringStartsWith(const String buffer, const String prefix)
{
   /*
    * Check if buffer starts with prefix.
    * Assumptions:
    *  - A null string cannot have a prefix.
    *  - A null prefix is found in any non-null string.
    *  - An empty (but non-null) prefix is found in any non-null string.
    * */
   if(buffer && prefix && buffer != prefix)
      for (;buffer[0] != '\0' && buffer[0] == prefix[0]; buffer++, prefix++);
   return buffer && (!prefix || prefix[0] == '\0' || prefix[0] == buffer[0] );
}

bool stringIsUrl(const String buffer)
{
/*
 * Check if the buffer starts with a known url protocol specifier.
 * Passing in a null buffer will return false.
 * */
   int n;
   const String knownProt[] = {"http://", "https://", "fp://", "fttps://", null};
   if(!buffer)
      return false;
   for (n = 0; knownProt[n] != null && !stringStartsWith(buffer, knownProt[n]); n++);
   return knownProt[n] != null;
}

String fileReadLine(File fSource)
{
   /*
    * Read a full line of text from file fSource, allocating enough memory to
    * contain it.
    *
    * Return the text in a newly allocated String: it is the caller's
    * responsibility to dispose of such string at an appropriate time.
    * */

   String outStr = null;
   if (!fSource.Eof())
   {
      int bLen = MAX_LOCATION+1 ;
      char * rBuffer= new0 char[bLen];
      int c = 0;
      char ch = 0;
      while(fSource.Getc(&ch))
      {
         if (ch =='\n')
         {
            break;
         }
         else if (ch != '\r')
         {  // Warnin: this logic breaks in OSes that use '\r' as terminator.
            if (c == bLen-1)
            {
               bLen += MAX_LOCATION;
               renew0 rBuffer char[bLen];
            }
            rBuffer[c++] = ch;
         }
      }
      // Do not use MAX_LOCATION chars or more for short strings.
      if (strlen(rBuffer))
         outStr = CopyString(rBuffer);
      delete rBuffer;
   }
   return outStr;
}

JSONResult loadFromString(String payload, Class objClass, void * * fillObj)
{
   /*
    * Replace the contents of a file with the String payload,
    * then invoke parser.GetObject to fill the given object fillObj.
    */
   JSONResult result;
   TempFile tmp { buffer = (byte *)payload, size = strlen(payload) };
   ECONParser parser { tmp };
   result = parser.GetObject(objClass, fillObj);
   tmp.StealBuffer();  // Avoid freeing payload.
   delete tmp;
   delete parser;
   return result;
}

public String getTimestamp(DateTime dateTime)
{
   char dateString[1024];
   DateTime gt;
   //dateTime.GetLocalTime();
   gt = dateTime.global;
   sprintf(dateString, "%04d-%02d-%02dT%02d:%02d:%02dZ" , gt.year, gt.month, gt.day, gt.hour, gt.minute, gt.second);
   return CopyString(dateString);
}

String stringToUpper(const String input, String destination)
{
   /*
    * Convert input to upper case and put the result into destination: return destination.
    *
    * It is the caller's responsibility to provide a destination of suitable
    * size, unless destination is null, in which case enough memory is
    * allocated and made the callers responsibility by returning it.
    *
    * If input is null, no memory is allocated and if destination is not null,
    * it is set to the empty string.
    * */

   if(input && !destination)
      destination = new char[strlen(input)+1];
   if(input)
   {
      char * cursor = destination;
      while(input[0] != '\0')
      {
         cursor[0] = (char)toupper(input[0]);
         ++cursor;
         ++input;
      }
   }
   else if(destination)
      destination[0] = '\0';

   return destination;
}

String stringToLower(const String input, String destination)
{
   /*
    * Convert input to lower case and put the result into destination: return destination.
    *
    * It is the caller's responsibility to provide a destination of suitable
    * size, unless destination is null, in which case enough memory is
    * allocated and made the callers responsibility by returning it.
    *
    * If input is null, no memory is allocated and if destination is not null,
    * it is set to the empty string.
    * */
   if(input && !destination)
      destination = new char[strlen(input)+1];
   if(input)
   {
      char * cursor = destination;
      while(input[0] != '\0')
      {
         cursor[0] = (char)tolower(input[0]);
         ++cursor;
         ++input;
      }
   }
   else if(destination)
      destination[0] = '\0';

   return destination;
}

bool compareMediaType(const String sample, const String pattern)
{
   /*
    * Fairly general comparison of mediatype strings.
    *
    * Since mediaTypes with and without spaces between parameters have been
    * observed this specialized function compare strings, skipping ' ' characters:
    * it will start matching case-insensitively until the first '=',
    * then switch to case sensitive until the next ';'
    * and so on until the end of the strings or the first mismatch.
    * if two strings match (minus spaces) the two pointers will reach the null termination.
    * */
   bool name = true;
   if(!sample || !pattern)
      return false;

   while(sample[0] || pattern[0])
   {
      if(sample[0] == ' ')
         ++sample;
      else if(pattern[0]== ' ')
         ++pattern;
      else
      {
         if (sample[0] == '=')
            name = false;
         else if(sample[0] == ';')
            name = true;

         if( (name && tolower(sample[0]) != tolower(pattern[0])) || (!name && sample[0] != pattern[0])  )
            break;

         ++sample;
         ++pattern;
      }
   }
   return sample[0] == '\0' &&  pattern[0] == '\0';
}
