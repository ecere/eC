/* Code generated from eC source file: File.ec */
#if defined(_WIN32)
#define __runtimePlatform 1
#elif defined(__APPLE__)
#define __runtimePlatform 3
#else
#define __runtimePlatform 2
#endif
#if defined(__GNUC__) || defined(__clang__)
#if defined(__clang__) && defined(__WIN32__)
#define int64 long long
#define uint64 unsigned long long
#if defined(_WIN64)
#define ssize_t long long
#else
#define ssize_t long
#endif
#else
typedef long long int64;
typedef unsigned long long uint64;
#endif
#ifndef _WIN32
#define __declspec(x)
#endif
#elif defined(__TINYC__)
#include <stdarg.h>
#define __builtin_va_list va_list
#define __builtin_va_start va_start
#define __builtin_va_end va_end
#ifdef _WIN32
#define strcasecmp stricmp
#define strncasecmp strnicmp
#define __declspec(x) __attribute__((x))
#else
#define __declspec(x)
#endif
typedef long long int64;
typedef unsigned long long uint64;
#else
typedef __int64 int64;
typedef unsigned __int64 uint64;
#endif
#ifdef __BIG_ENDIAN__
#define __ENDIAN_PAD(x) (8 - (x))
#else
#define __ENDIAN_PAD(x) 0
#endif
#if defined(_WIN32)
#   if defined(__clang__) && defined(__WIN32__)
#      define eC_stdcall __stdcall
#      define eC_gcc_struct
#   elif defined(__GNUC__) || defined(__TINYC__)
#      define eC_stdcall __attribute__((__stdcall__))
#      define eC_gcc_struct __attribute__((gcc_struct))
#   else
#      define eC_stdcall __stdcall
#      define eC_gcc_struct
#   endif
#else
#   define eC_stdcall
#   define eC_gcc_struct
#endif
#include <stdint.h>
#include <sys/types.h>
void exit(int status);

void * calloc(size_t nmemb, size_t size);

void free(void * ptr);

void * malloc(size_t size);

void * realloc(void * ptr, size_t size);

long int strtol(const char * nptr, char ** endptr, int base);

long long int strtoll(const char * nptr, char ** endptr, int base);

unsigned long long int strtoull(const char * nptr, char ** endptr, int base);

typedef __builtin_va_list va_list;

typedef void FILE;

FILE * bsl_stdin(void);

FILE * bsl_stdout(void);

FILE * bsl_stderr(void);

char * fgets(char * s, int size, FILE * stream);

FILE * fopen(const char * path, const char * mode);

int fclose(FILE * fp);

int fflush(FILE * stream);

int fgetc(FILE * stream);

int fprintf(FILE * stream, const char * format, ...);

int fputc(int c, FILE * stream);

size_t fread(void * ptr, size_t size, size_t nmemb, FILE * stream);

size_t fwrite(const void * ptr, size_t size, size_t nmemb, FILE * stream);

int vsnprintf(char *, size_t, const char *, va_list args);

int snprintf(char * str, size_t, const char * format, ...);

int fseek(FILE * stream, long offset, int whence);

long ftell(FILE * stream);

int feof(FILE * stream);

int ferror(FILE * stream);

int fileno(FILE * stream);

FILE * eC_stdin(void);

FILE * eC_stdout(void);

unsigned int FILE_GetSize(FILE * input);

unsigned int FILE_Lock(FILE * input, FILE * output, int type, uint64 start, uint64 length, unsigned int wait);

void FILE_set_buffered(FILE * input, FILE * output, unsigned int value);

unsigned int FILE_FileExists(const char * fileName);

unsigned int FILE_FileGetSize(const char * fileName, unsigned int * size);

void FILE_FileFixCase(char * file);

void FILE_FileOpen(const char * fileName, int mode, FILE ** input, FILE ** output);

int FILE_Seek64(FILE * f, long long offset, int origin);

struct __eCNameSpace__eC__files__File
{
FILE * input, * output;
} eC_gcc_struct;

struct __eCNameSpace__eC__files__FileStats
{
unsigned int attribs;
uint64 size;
int64 accessed;
int64 modified;
int64 created;
} eC_gcc_struct;

struct __eCNameSpace__eC__types__Instance * __eCNameSpace__eC__files__CreateTemporaryFile(char * tempFileName, const char * template)
{
return (((void *)0));
}

void __eCNameSpace__eC__files__CreateTemporaryDir(char * tempFileName, const char * template)
{
}

struct __eCNameSpace__eC__containers__BTNode;

struct __eCNameSpace__eC__containers__OldList
{
void *  first;
void *  last;
int count;
unsigned int offset;
unsigned int circ;
} eC_gcc_struct;

struct __eCNameSpace__eC__types__DataValue
{
union
{
char c;
unsigned char uc;
short s;
unsigned short us;
int i;
unsigned int ui;
void *  p;
float f;
double d;
long long i64;
uint64 ui64;
} eC_gcc_struct __anon1;
} eC_gcc_struct;

struct __eCNameSpace__eC__types__SerialBuffer
{
unsigned char *  _buffer;
size_t count;
size_t _size;
size_t pos;
} eC_gcc_struct;

extern void *  __eCNameSpace__eC__types__eSystem_New(unsigned int size);

extern void *  __eCNameSpace__eC__types__eSystem_New0(unsigned int size);

extern void *  __eCNameSpace__eC__types__eSystem_Renew(void *  memory, unsigned int size);

extern void *  __eCNameSpace__eC__types__eSystem_Renew0(void *  memory, unsigned int size);

extern void __eCNameSpace__eC__types__eSystem_Delete(void *  memory);

extern void __eCNameSpace__eC__types__PrintSize(char *  string, uint64 size, int prec);

extern double strtod(const char * , char * * );

extern char *  strstr(const char * , const char * );

extern void __eCNameSpace__eC__types__PrintBigSize(char *  string, double size, int prec);

struct __eCNameSpace__eC__files__TempFile
{
unsigned char *  buffer;
size_t size;
size_t position;
unsigned int eof;
int openMode;
size_t allocated;
} eC_gcc_struct;

extern int fputs(const char * , void *  stream);

extern size_t strlen(const char * );

extern int atoi(const char * );

extern unsigned long strtoul(const char *  nptr, char * *  endptr, int base);

extern double __eCNameSpace__eC__types__FloatFromString(const char *  string);

extern void __eCNameSpace__eC__types__ChangeCh(char *  string, char ch1, char ch2);

extern char *  __eCNameSpace__eC__types__CopyString(const char *  string);

extern char *  strcpy(char * , const char * );

struct __eCNameSpace__eC__types__BitMember;

struct __eCNameSpace__eC__types__GlobalFunction;

unsigned int __eCNameSpace__eC__files__FileExists(const char * fileName)
{
return FILE_FileExists(fileName);
}

unsigned int __eCNameSpace__eC__files__FileGetSize(const char * fileName, unsigned int * size)
{
unsigned int result = 0;

if(size)
{
*size = 0;
if(fileName)
{
result = FILE_FileGetSize(fileName, size);
}
}
return result;
}

void __eCNameSpace__eC__files__FileFixCase(char * file)
{
FILE_FileFixCase(file);
}

unsigned int FILE_FileGetStats(const char * fileName, struct __eCNameSpace__eC__files__FileStats * stats);

void __eCNameSpace__eC__files__MakeSlashPath(char * p)
{
__eCNameSpace__eC__files__FileFixCase(p);
if(__runtimePlatform == 1)
__eCNameSpace__eC__types__ChangeCh(p, '\\', '/');
}

void __eCNameSpace__eC__files__MakeSystemPath(char * p)
{
__eCNameSpace__eC__files__FileFixCase(p);
}

unsigned int __eCNameSpace__eC__files__FileGetStats(const char * fileName, struct __eCNameSpace__eC__files__FileStats * stats)
{
unsigned int result = 0;

if(stats && fileName)
{
return FILE_FileGetStats(fileName, stats);
}
return result;
}

char * __eCNameSpace__eC__files__CopyUnixPath(const char * p)
{
char * d = __eCNameSpace__eC__types__CopyString(p);

if(d)
__eCNameSpace__eC__files__MakeSlashPath(d);
return d;
}

char * __eCNameSpace__eC__files__GetSlashPathBuffer(char * d, const char * p)
{
if(d != p)
strcpy(d, p ? p : "");
__eCNameSpace__eC__files__MakeSlashPath(d);
return d;
}

char * __eCNameSpace__eC__files__CopySystemPath(const char * p)
{
char * d = __eCNameSpace__eC__types__CopyString(p);

if(d)
__eCNameSpace__eC__files__MakeSystemPath(d);
return d;
}

char * __eCNameSpace__eC__files__GetSystemPathBuffer(char * d, const char * p)
{
if(d != p)
strcpy(d, p ? p : "");
__eCNameSpace__eC__files__MakeSystemPath(d);
return d;
}

struct __eCNameSpace__eC__types__Property;

static __attribute__((unused)) struct __eCNameSpace__eC__types__Property * __eCProp___eCNameSpace__eC__files__File_input, * __eCPropM___eCNameSpace__eC__files__File_input;

static __attribute__((unused)) struct __eCNameSpace__eC__types__Property * __eCProp___eCNameSpace__eC__files__File_output, * __eCPropM___eCNameSpace__eC__files__File_output;

static __attribute__((unused)) struct __eCNameSpace__eC__types__Property * __eCProp___eCNameSpace__eC__files__File_buffered, * __eCPropM___eCNameSpace__eC__files__File_buffered;

static __attribute__((unused)) struct __eCNameSpace__eC__types__Property * __eCProp___eCNameSpace__eC__files__File_eof, * __eCPropM___eCNameSpace__eC__files__File_eof;

struct __eCNameSpace__eC__types__Class;

struct __eCNameSpace__eC__types__Instance
{
void * *  _vTbl;
struct __eCNameSpace__eC__types__Class * _class;
int _refCount;
} eC_gcc_struct;

extern long long __eCNameSpace__eC__types__eClass_GetProperty(struct __eCNameSpace__eC__types__Class * _class, const char *  name);

extern void __eCNameSpace__eC__types__eClass_SetProperty(struct __eCNameSpace__eC__types__Class * _class, const char *  name, long long value);

extern unsigned int __eCNameSpace__eC__types__eClass_IsDerived(struct __eCNameSpace__eC__types__Class * _class, struct __eCNameSpace__eC__types__Class * from);

extern void __eCNameSpace__eC__types__eEnum_AddFixedValue(struct __eCNameSpace__eC__types__Class * _class, const char *  string, long long value);

extern struct __eCNameSpace__eC__types__Property * __eCNameSpace__eC__types__eClass_AddProperty(struct __eCNameSpace__eC__types__Class * _class, const char *  name, const char *  dataType, void *  setStmt, void *  getStmt, int declMode);

extern struct __eCNameSpace__eC__types__BitMember * __eCNameSpace__eC__types__eClass_AddBitMember(struct __eCNameSpace__eC__types__Class * _class, const char *  name, const char *  type, int bitSize, int bitPos, int declMode);

extern void *  __eCNameSpace__eC__types__eInstance_New(struct __eCNameSpace__eC__types__Class * _class);

extern int __eCVMethodID___eCNameSpace__eC__files__FileSystem_Open;

extern int __eCVMethodID___eCNameSpace__eC__files__FileSystem_Exists;

extern int __eCVMethodID___eCNameSpace__eC__files__FileSystem_GetSize;

extern int __eCVMethodID___eCNameSpace__eC__files__FileSystem_Stats;

extern int __eCVMethodID___eCNameSpace__eC__files__FileSystem_FixCase;

extern int __eCVMethodID___eCNameSpace__eC__files__FileSystem_Find;

extern int __eCVMethodID___eCNameSpace__eC__files__FileSystem_FindNext;

extern int __eCVMethodID___eCNameSpace__eC__files__FileSystem_CloseDir;

extern int __eCVMethodID___eCNameSpace__eC__files__FileSystem_OpenArchive;

extern int __eCVMethodID___eCNameSpace__eC__files__FileSystem_QuerySize;

extern int __eCVMethodID___eCNameSpace__eC__files__File_Seek;

extern int __eCVMethodID___eCNameSpace__eC__files__File_Tell;

extern int __eCVMethodID___eCNameSpace__eC__files__File_Read;

extern int __eCVMethodID___eCNameSpace__eC__files__File_Write;

extern int __eCVMethodID___eCNameSpace__eC__files__File_Getc;

extern int __eCVMethodID___eCNameSpace__eC__files__File_Putc;

extern int __eCVMethodID___eCNameSpace__eC__files__File_Puts;

extern int __eCVMethodID___eCNameSpace__eC__files__File_Eof;

extern int __eCVMethodID___eCNameSpace__eC__files__File_Truncate;

extern int __eCVMethodID___eCNameSpace__eC__files__File_GetSize;

extern int __eCVMethodID___eCNameSpace__eC__files__File_CloseInput;

extern int __eCVMethodID___eCNameSpace__eC__files__File_CloseOutput;

extern int __eCVMethodID___eCNameSpace__eC__files__File_Lock;

extern int __eCVMethodID___eCNameSpace__eC__files__File_Unlock;

extern int __eCVMethodID___eCNameSpace__eC__files__File_Close;

struct __eCNameSpace__eC__types__Property
{
struct __eCNameSpace__eC__types__Property * prev;
struct __eCNameSpace__eC__types__Property * next;
const char *  name;
unsigned int isProperty;
int memberAccess;
int id;
struct __eCNameSpace__eC__types__Class * _class;
const char *  dataTypeString;
struct __eCNameSpace__eC__types__Class * dataTypeClass;
struct __eCNameSpace__eC__types__Instance * dataType;
void (*  Set)(void * , int);
int (*  Get)(void * );
unsigned int (*  IsSet)(void * );
void *  data;
void *  symbol;
int vid;
unsigned int conversion;
unsigned int watcherOffset;
const char *  category;
unsigned int compiled;
unsigned int selfWatchable;
unsigned int isWatchable;
} eC_gcc_struct;

extern void __eCNameSpace__eC__types__eInstance_FireSelfWatchers(struct __eCNameSpace__eC__types__Instance * instance, struct __eCNameSpace__eC__types__Property * _property);

extern void __eCNameSpace__eC__types__eInstance_SetMethod(struct __eCNameSpace__eC__types__Instance * instance, const char *  name, void *  function);

extern void __eCNameSpace__eC__types__eInstance_IncRef(struct __eCNameSpace__eC__types__Instance * instance);

extern void __eCNameSpace__eC__types__eInstance_StopWatching(struct __eCNameSpace__eC__types__Instance * instance, struct __eCNameSpace__eC__types__Property * _property, struct __eCNameSpace__eC__types__Instance * object);

extern void __eCNameSpace__eC__types__eInstance_Watch(struct __eCNameSpace__eC__types__Instance * instance, struct __eCNameSpace__eC__types__Property * _property, void *  object, void (*  callback)(void * , void * ));

extern void __eCNameSpace__eC__types__eInstance_FireWatchers(struct __eCNameSpace__eC__types__Instance * instance, struct __eCNameSpace__eC__types__Property * _property);

struct __eCNameSpace__eC__types__Instance * __eCNameSpace__eC__files__httpFileSystem;

void *  __eCProp___eCNameSpace__eC__files__File_Get_input(struct __eCNameSpace__eC__types__Instance * this);

void __eCProp___eCNameSpace__eC__files__File_Set_input(struct __eCNameSpace__eC__types__Instance * this, void *  value);

void *  __eCProp___eCNameSpace__eC__files__File_Get_output(struct __eCNameSpace__eC__types__Instance * this);

void __eCProp___eCNameSpace__eC__files__File_Set_output(struct __eCNameSpace__eC__types__Instance * this, void *  value);

void __eCProp___eCNameSpace__eC__files__File_Set_buffered(struct __eCNameSpace__eC__types__Instance * this, unsigned int value);

extern void __eCNameSpace__eC__types__eInstance_DecRef(struct __eCNameSpace__eC__types__Instance * instance);

extern int __eCVMethodID___eCNameSpace__eC__types__IOChannel_WriteData;

unsigned int __eCConstructor___eCNameSpace__eC__files__ConsoleFile(struct __eCNameSpace__eC__types__Instance * this)
{
__eCProp___eCNameSpace__eC__files__File_Set_input(this, eC_stdin());
__eCProp___eCNameSpace__eC__files__File_Set_output(this, eC_stdout());
return 1;
}

void __eCDestructor___eCNameSpace__eC__files__ConsoleFile(struct __eCNameSpace__eC__types__Instance * this)
{
{
__eCProp___eCNameSpace__eC__files__File_Set_input(this, (((void *)0)));
__eCProp___eCNameSpace__eC__files__File_Set_output(this, (((void *)0)));
}
}

struct __eCNameSpace__eC__files__BinaryTree;

struct __eCNameSpace__eC__files__BinaryTree
{
struct __eCNameSpace__eC__containers__BTNode * root;
int count;
int (*  CompareKey)(struct __eCNameSpace__eC__files__BinaryTree * tree, uintptr_t a, uintptr_t b);
void (*  FreeKey)(void *  key);
} eC_gcc_struct;

struct __eCNameSpace__eC__types__DataMember;

struct __eCNameSpace__eC__types__DataMember
{
struct __eCNameSpace__eC__types__DataMember * prev;
struct __eCNameSpace__eC__types__DataMember * next;
const char *  name;
unsigned int isProperty;
int memberAccess;
int id;
struct __eCNameSpace__eC__types__Class * _class;
const char *  dataTypeString;
struct __eCNameSpace__eC__types__Class * dataTypeClass;
struct __eCNameSpace__eC__types__Instance * dataType;
int type;
int offset;
int memberID;
struct __eCNameSpace__eC__containers__OldList members;
struct __eCNameSpace__eC__files__BinaryTree membersAlpha;
int memberOffset;
short structAlignment;
short pointerAlignment;
} eC_gcc_struct;

extern struct __eCNameSpace__eC__types__DataMember * __eCNameSpace__eC__types__eClass_AddDataMember(struct __eCNameSpace__eC__types__Class * _class, const char *  name, const char *  type, unsigned int size, unsigned int alignment, int declMode);

struct __eCNameSpace__eC__types__Method;

struct __eCNameSpace__eC__types__ClassTemplateArgument
{
union
{
struct
{
const char *  dataTypeString;
struct __eCNameSpace__eC__types__Class * dataTypeClass;
} eC_gcc_struct __anon1;
struct __eCNameSpace__eC__types__DataValue expression;
struct
{
const char *  memberString;
union
{
struct __eCNameSpace__eC__types__DataMember * member;
struct __eCNameSpace__eC__types__Property * prop;
struct __eCNameSpace__eC__types__Method * method;
} eC_gcc_struct __anon1;
} eC_gcc_struct __anon2;
} eC_gcc_struct __anon1;
} eC_gcc_struct;

struct __eCNameSpace__eC__types__Method
{
const char *  name;
struct __eCNameSpace__eC__types__Method * parent;
struct __eCNameSpace__eC__types__Method * left;
struct __eCNameSpace__eC__types__Method * right;
int depth;
int (*  function)();
int vid;
int type;
struct __eCNameSpace__eC__types__Class * _class;
void *  symbol;
const char *  dataTypeString;
struct __eCNameSpace__eC__types__Instance * dataType;
int memberAccess;
} eC_gcc_struct;

extern struct __eCNameSpace__eC__types__Method * __eCNameSpace__eC__types__eClass_AddMethod(struct __eCNameSpace__eC__types__Class * _class, const char *  name, const char *  type, void *  function, int declMode);

extern struct __eCNameSpace__eC__types__Method * __eCNameSpace__eC__types__eClass_AddVirtualMethod(struct __eCNameSpace__eC__types__Class * _class, const char *  name, const char *  type, void *  function, int declMode);

struct __eCNameSpace__eC__types__Module;

extern struct __eCNameSpace__eC__types__Class * __eCNameSpace__eC__types__eSystem_RegisterClass(int type, const char *  name, const char *  baseName, int size, int sizeClass, unsigned int (*  Constructor)(void * ), void (*  Destructor)(void * ), struct __eCNameSpace__eC__types__Instance * module, int declMode, int inheritanceAccess);

extern struct __eCNameSpace__eC__types__Instance * __thisModule;

extern struct __eCNameSpace__eC__types__GlobalFunction * __eCNameSpace__eC__types__eSystem_RegisterFunction(const char *  name, const char *  type, void *  func, struct __eCNameSpace__eC__types__Instance * module, int declMode);

struct __eCNameSpace__eC__types__NameSpace;

struct __eCNameSpace__eC__types__NameSpace
{
const char *  name;
struct __eCNameSpace__eC__types__NameSpace *  btParent;
struct __eCNameSpace__eC__types__NameSpace *  left;
struct __eCNameSpace__eC__types__NameSpace *  right;
int depth;
struct __eCNameSpace__eC__types__NameSpace *  parent;
struct __eCNameSpace__eC__files__BinaryTree nameSpaces;
struct __eCNameSpace__eC__files__BinaryTree classes;
struct __eCNameSpace__eC__files__BinaryTree defines;
struct __eCNameSpace__eC__files__BinaryTree functions;
} eC_gcc_struct;

struct __eCNameSpace__eC__types__Class
{
struct __eCNameSpace__eC__types__Class * prev;
struct __eCNameSpace__eC__types__Class * next;
const char *  name;
int offset;
int structSize;
void * *  _vTbl;
int vTblSize;
unsigned int (*  Constructor)(void * );
void (*  Destructor)(void * );
int offsetClass;
int sizeClass;
struct __eCNameSpace__eC__types__Class * base;
struct __eCNameSpace__eC__files__BinaryTree methods;
struct __eCNameSpace__eC__files__BinaryTree members;
struct __eCNameSpace__eC__files__BinaryTree prop;
struct __eCNameSpace__eC__containers__OldList membersAndProperties;
struct __eCNameSpace__eC__files__BinaryTree classProperties;
struct __eCNameSpace__eC__containers__OldList derivatives;
int memberID;
int startMemberID;
int type;
struct __eCNameSpace__eC__types__Instance * module;
struct __eCNameSpace__eC__types__NameSpace *  nameSpace;
const char *  dataTypeString;
struct __eCNameSpace__eC__types__Instance * dataType;
int typeSize;
int defaultAlignment;
void (*  Initialize)();
int memberOffset;
struct __eCNameSpace__eC__containers__OldList selfWatchers;
const char *  designerClass;
unsigned int noExpansion;
const char *  defaultProperty;
unsigned int comRedefinition;
int count;
int isRemote;
unsigned int internalDecl;
void *  data;
unsigned int computeSize;
short structAlignment;
short pointerAlignment;
int destructionWatchOffset;
unsigned int fixed;
struct __eCNameSpace__eC__containers__OldList delayedCPValues;
int inheritanceAccess;
const char *  fullName;
void *  symbol;
struct __eCNameSpace__eC__containers__OldList conversions;
struct __eCNameSpace__eC__containers__OldList templateParams;
struct __eCNameSpace__eC__types__ClassTemplateArgument *  templateArgs;
struct __eCNameSpace__eC__types__Class * templateClass;
struct __eCNameSpace__eC__containers__OldList templatized;
int numParams;
unsigned int isInstanceClass;
unsigned int byValueSystemClass;
void *  bindingsClass;
} eC_gcc_struct;

struct __eCNameSpace__eC__types__Application
{
int argc;
const char * *  argv;
int exitCode;
unsigned int isGUIApp;
struct __eCNameSpace__eC__containers__OldList allModules;
char *  parsedCommand;
struct __eCNameSpace__eC__types__NameSpace systemNameSpace;
} eC_gcc_struct;

static struct __eCNameSpace__eC__types__Class * __eCClass___eCNameSpace__eC__files__FileSize;

static struct __eCNameSpace__eC__types__Class * __eCClass___eCNameSpace__eC__files__FileSize64;

static struct __eCNameSpace__eC__types__Class * __eCClass___eCNameSpace__eC__files__FileSystem;

static struct __eCNameSpace__eC__types__Class * __eCClass___eCNameSpace__eC__files__FileOpenMode;

static struct __eCNameSpace__eC__types__Class * __eCClass___eCNameSpace__eC__files__FileSeekMode;

static struct __eCNameSpace__eC__types__Class * __eCClass___eCNameSpace__eC__files__FileLock;

static struct __eCNameSpace__eC__types__Class * __eCClass___eCNameSpace__eC__files__File;

static struct __eCNameSpace__eC__types__Class * __eCClass___eCNameSpace__eC__files__ConsoleFile;

static struct __eCNameSpace__eC__types__Class * __eCClass___eCNameSpace__eC__files__FileAttribs;

static struct __eCNameSpace__eC__types__Class * __eCClass___eCNameSpace__eC__files__SecSince1970;

static struct __eCNameSpace__eC__types__Class * __eCClass___eCNameSpace__eC__files__FileStats;

int __eCMethod___eCNameSpace__eC__files__FileSize_OnCompare(struct __eCNameSpace__eC__types__Class * class, unsigned int * this, unsigned int * data2)
{
int result = 0;

if(&(*this) && &(*data2))
{
if((*this) > (*data2))
result = 1;
else if((*this) < (*data2))
result = -1;
}
return result;
}

const char * __eCMethod___eCNameSpace__eC__files__FileSize_OnGetString(struct __eCNameSpace__eC__types__Class * class, unsigned int * this, char * string, void * fieldData, unsigned int * onType)
{
__eCNameSpace__eC__types__PrintSize(string, *(unsigned int *)this, 2);
return string;
}

unsigned int __eCMethod___eCNameSpace__eC__files__FileSize_OnGetDataFromString(struct __eCNameSpace__eC__types__Class * class, unsigned int * this, const char * string)
{
char * end;
double value = strtod(string, &end);
unsigned int multiplier = 1;

if(strstr(end, "GB") || strstr(end, "gb"))
multiplier = (unsigned int)1024 * 1024 * 1024;
else if(strstr(end, "MB") || strstr(end, "mb"))
multiplier = (unsigned int)1024 * 1024;
else if(strstr(end, "KB") || strstr(end, "kb"))
multiplier = 1024;
(*this) = (unsigned int)((double)multiplier * value);
return 1;
}

int __eCMethod___eCNameSpace__eC__files__FileSize64_OnCompare(struct __eCNameSpace__eC__types__Class * class, uint64 * this, uint64 * data2)
{
int result = 0;

if(&(*this) && &(*data2))
{
if((*this) > (*data2))
result = 1;
else if((*this) < (*data2))
result = -1;
}
return result;
}

const char * __eCMethod___eCNameSpace__eC__files__FileSize64_OnGetString(struct __eCNameSpace__eC__types__Class * class, uint64 * this, char * string, void * fieldData, unsigned int * onType)
{
__eCNameSpace__eC__types__PrintBigSize(string, *(uint64 *)this, 2);
return string;
}

unsigned int __eCMethod___eCNameSpace__eC__files__FileSize64_OnGetDataFromString(struct __eCNameSpace__eC__types__Class * class, uint64 * this, const char * string)
{
char * end;
double value = strtod(string, &end);
uint64 multiplier = 1;

if(strstr(end, "PB") || strstr(end, "pb"))
multiplier = (uint64)1024 * 1024 * 1024 * 1024;
else if(strstr(end, "TB") || strstr(end, "tb"))
multiplier = (uint64)1024 * 1024 * 1024 * 1024;
else if(strstr(end, "GB") || strstr(end, "gb"))
multiplier = (uint64)1024 * 1024 * 1024;
else if(strstr(end, "MB") || strstr(end, "mb"))
multiplier = (uint64)1024 * 1024;
else if(strstr(end, "KB") || strstr(end, "kb"))
multiplier = 1024;
(*this) = (uint64)((double)multiplier * value);
return 1;
}

extern int __eCNameSpace__eC__types__PrintStdArgsToBuffer(char *  buffer, int maxLen, struct __eCNameSpace__eC__types__Class * class, const void * object, __builtin_va_list args);

extern struct __eCNameSpace__eC__types__Class * __eCClass___eCNameSpace__eC__files__TempFile;

extern struct __eCNameSpace__eC__types__Class * __eCClass___eCNameSpace__eC__types__Instance;

extern struct __eCNameSpace__eC__types__Class * __eCClass___eCNameSpace__eC__types__Module;

struct __eCNameSpace__eC__types__Module
{
struct __eCNameSpace__eC__types__Instance * application;
struct __eCNameSpace__eC__containers__OldList classes;
struct __eCNameSpace__eC__containers__OldList defines;
struct __eCNameSpace__eC__containers__OldList functions;
struct __eCNameSpace__eC__containers__OldList modules;
struct __eCNameSpace__eC__types__Instance * prev;
struct __eCNameSpace__eC__types__Instance * next;
const char *  name;
void *  library;
void *  Unload;
int importType;
int origImportType;
struct __eCNameSpace__eC__types__NameSpace privateNameSpace;
struct __eCNameSpace__eC__types__NameSpace publicNameSpace;
} eC_gcc_struct;

void __eCDestructor___eCNameSpace__eC__files__File(struct __eCNameSpace__eC__types__Instance * this)
{
__attribute__((unused)) struct __eCNameSpace__eC__files__File * __eCPointer___eCNameSpace__eC__files__File = (struct __eCNameSpace__eC__files__File *)(this ? (((char *)this) + __eCClass___eCNameSpace__eC__files__File->offset) : 0);

{
if(__eCPointer___eCNameSpace__eC__files__File->output && __eCPointer___eCNameSpace__eC__files__File->output != __eCPointer___eCNameSpace__eC__files__File->input)
{
fclose(__eCPointer___eCNameSpace__eC__files__File->output);
}
if(__eCPointer___eCNameSpace__eC__files__File->input)
{
fclose(__eCPointer___eCNameSpace__eC__files__File->input);
}
__eCPointer___eCNameSpace__eC__files__File->input = (((void *)0));
__eCPointer___eCNameSpace__eC__files__File->output = (((void *)0));
}
}

size_t __eCMethod___eCNameSpace__eC__files__File_ReadData(struct __eCNameSpace__eC__types__Instance * this, unsigned char * bytes, size_t numBytes)
{
__attribute__((unused)) struct __eCNameSpace__eC__files__File * __eCPointer___eCNameSpace__eC__files__File = (struct __eCNameSpace__eC__files__File *)(this ? (((char *)this) + __eCClass___eCNameSpace__eC__files__File->offset) : 0);

return (__extension__ ({
size_t (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, void *  buffer, size_t size, size_t count);

__internal_VirtualMethod = ((size_t (*)(struct __eCNameSpace__eC__types__Instance *, void *  buffer, size_t size, size_t count))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = this;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Read]);
__internal_VirtualMethod ? __internal_VirtualMethod(this, bytes, 1, numBytes) : (size_t)1;
}));
}

size_t __eCMethod___eCNameSpace__eC__files__File_WriteData(struct __eCNameSpace__eC__types__Instance * this, const unsigned char * bytes, size_t numBytes)
{
__attribute__((unused)) struct __eCNameSpace__eC__files__File * __eCPointer___eCNameSpace__eC__files__File = (struct __eCNameSpace__eC__files__File *)(this ? (((char *)this) + __eCClass___eCNameSpace__eC__files__File->offset) : 0);

return (__extension__ ({
size_t (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const void *  buffer, size_t size, size_t count);

__internal_VirtualMethod = ((size_t (*)(struct __eCNameSpace__eC__types__Instance *, const void *  buffer, size_t size, size_t count))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = this;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Write]);
__internal_VirtualMethod ? __internal_VirtualMethod(this, bytes, 1, numBytes) : (size_t)1;
}));
}

const char * __eCMethod___eCNameSpace__eC__files__File_OnGetString(struct __eCNameSpace__eC__types__Class * class, struct __eCNameSpace__eC__types__Instance * this, char * tempString, void * fieldData, unsigned int * onType)
{
__attribute__((unused)) struct __eCNameSpace__eC__files__File * __eCPointer___eCNameSpace__eC__files__File = (struct __eCNameSpace__eC__files__File *)(this ? (((char *)this) + __eCClass___eCNameSpace__eC__files__File->offset) : 0);

if((struct __eCNameSpace__eC__types__Instance *)this)
{
__eCNameSpace__eC__types__PrintSize(tempString, (__extension__ ({
uint64 (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *);

__internal_VirtualMethod = ((uint64 (*)(struct __eCNameSpace__eC__types__Instance *))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = this;

__internal_ClassInst ? __internal_ClassInst->_vTbl : class->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_GetSize]);
__internal_VirtualMethod ? __internal_VirtualMethod(this) : (uint64)1;
})), 2);
return tempString;
}
return (((void *)0));
}

unsigned int __eCMethod___eCNameSpace__eC__files__File_Seek(struct __eCNameSpace__eC__types__Instance * this, long long pos, int mode)
{
__attribute__((unused)) struct __eCNameSpace__eC__files__File * __eCPointer___eCNameSpace__eC__files__File = (struct __eCNameSpace__eC__files__File *)(this ? (((char *)this) + __eCClass___eCNameSpace__eC__files__File->offset) : 0);
unsigned int fmode = 0;

switch(mode)
{
case 0:
fmode = 0;
break;
case 2:
fmode = 2;
break;
case 1:
fmode = 1;
break;
}
return FILE_Seek64(__eCPointer___eCNameSpace__eC__files__File->input ? __eCPointer___eCNameSpace__eC__files__File->input : __eCPointer___eCNameSpace__eC__files__File->output, pos, fmode) != (-1);
}

uint64 __eCMethod___eCNameSpace__eC__files__File_Tell(struct __eCNameSpace__eC__types__Instance * this)
{
__attribute__((unused)) struct __eCNameSpace__eC__files__File * __eCPointer___eCNameSpace__eC__files__File = (struct __eCNameSpace__eC__files__File *)(this ? (((char *)this) + __eCClass___eCNameSpace__eC__files__File->offset) : 0);

return (__eCPointer___eCNameSpace__eC__files__File->input ? ftell(__eCPointer___eCNameSpace__eC__files__File->input) : ftell(__eCPointer___eCNameSpace__eC__files__File->output));
}

size_t __eCMethod___eCNameSpace__eC__files__File_Read(struct __eCNameSpace__eC__types__Instance * this, void * buffer, size_t size, size_t count)
{
__attribute__((unused)) struct __eCNameSpace__eC__files__File * __eCPointer___eCNameSpace__eC__files__File = (struct __eCNameSpace__eC__files__File *)(this ? (((char *)this) + __eCClass___eCNameSpace__eC__files__File->offset) : 0);

return __eCPointer___eCNameSpace__eC__files__File->input ? fread(buffer, size, count, __eCPointer___eCNameSpace__eC__files__File->input) : 0;
}

size_t __eCMethod___eCNameSpace__eC__files__File_Write(struct __eCNameSpace__eC__types__Instance * this, const void * buffer, size_t size, size_t count)
{
__attribute__((unused)) struct __eCNameSpace__eC__files__File * __eCPointer___eCNameSpace__eC__files__File = (struct __eCNameSpace__eC__files__File *)(this ? (((char *)this) + __eCClass___eCNameSpace__eC__files__File->offset) : 0);

return __eCPointer___eCNameSpace__eC__files__File->output ? fwrite(buffer, size, count, __eCPointer___eCNameSpace__eC__files__File->output) : 0;
}

unsigned int __eCMethod___eCNameSpace__eC__files__File_Getc(struct __eCNameSpace__eC__types__Instance * this, char * ch)
{
__attribute__((unused)) struct __eCNameSpace__eC__files__File * __eCPointer___eCNameSpace__eC__files__File = (struct __eCNameSpace__eC__files__File *)(this ? (((char *)this) + __eCClass___eCNameSpace__eC__files__File->offset) : 0);
int ich = fgetc(__eCPointer___eCNameSpace__eC__files__File->input);

if(ich != (-1))
{
if(ch)
*ch = (char)ich;
return 1;
}
return 0;
}

unsigned int __eCMethod___eCNameSpace__eC__files__File_Putc(struct __eCNameSpace__eC__types__Instance * this, char ch)
{
__attribute__((unused)) struct __eCNameSpace__eC__files__File * __eCPointer___eCNameSpace__eC__files__File = (struct __eCNameSpace__eC__files__File *)(this ? (((char *)this) + __eCClass___eCNameSpace__eC__files__File->offset) : 0);

return (fputc((int)ch, __eCPointer___eCNameSpace__eC__files__File->output) == (-1)) ? 0 : 1;
}

unsigned int __eCMethod___eCNameSpace__eC__files__File_Puts(struct __eCNameSpace__eC__types__Instance * this, const char * string)
{
__attribute__((unused)) struct __eCNameSpace__eC__files__File * __eCPointer___eCNameSpace__eC__files__File = (struct __eCNameSpace__eC__files__File *)(this ? (((char *)this) + __eCClass___eCNameSpace__eC__files__File->offset) : 0);
unsigned int result = 0;

if(__eCPointer___eCNameSpace__eC__files__File->output)
{
result = (fputs(string, __eCPointer___eCNameSpace__eC__files__File->output) == (-1)) ? 0 : 1;
}
return result;
}

unsigned int __eCMethod___eCNameSpace__eC__files__File_Eof(struct __eCNameSpace__eC__types__Instance * this)
{
__attribute__((unused)) struct __eCNameSpace__eC__files__File * __eCPointer___eCNameSpace__eC__files__File = (struct __eCNameSpace__eC__files__File *)(this ? (((char *)this) + __eCClass___eCNameSpace__eC__files__File->offset) : 0);

return __eCPointer___eCNameSpace__eC__files__File->input ? feof(__eCPointer___eCNameSpace__eC__files__File->input) != 0 : 1;
}

unsigned int __eCMethod___eCNameSpace__eC__files__File_Truncate(struct __eCNameSpace__eC__types__Instance * this, uint64 size)
{
__attribute__((unused)) struct __eCNameSpace__eC__files__File * __eCPointer___eCNameSpace__eC__files__File = (struct __eCNameSpace__eC__files__File *)(this ? (((char *)this) + __eCClass___eCNameSpace__eC__files__File->offset) : 0);

fprintf((bsl_stderr()), "WARNING:  File::Truncate unimplemented in ecrtBootstrap.\n");
return 0;
}

uint64 __eCMethod___eCNameSpace__eC__files__File_GetSize(struct __eCNameSpace__eC__types__Instance * this)
{
__attribute__((unused)) struct __eCNameSpace__eC__files__File * __eCPointer___eCNameSpace__eC__files__File = (struct __eCNameSpace__eC__files__File *)(this ? (((char *)this) + __eCClass___eCNameSpace__eC__files__File->offset) : 0);

return FILE_GetSize(__eCPointer___eCNameSpace__eC__files__File->input);
}

void __eCMethod___eCNameSpace__eC__files__File_CloseInput(struct __eCNameSpace__eC__types__Instance * this)
{
__attribute__((unused)) struct __eCNameSpace__eC__files__File * __eCPointer___eCNameSpace__eC__files__File = (struct __eCNameSpace__eC__files__File *)(this ? (((char *)this) + __eCClass___eCNameSpace__eC__files__File->offset) : 0);

if(__eCPointer___eCNameSpace__eC__files__File->input)
{
fclose(__eCPointer___eCNameSpace__eC__files__File->input);
if(__eCPointer___eCNameSpace__eC__files__File->output == __eCPointer___eCNameSpace__eC__files__File->input)
__eCPointer___eCNameSpace__eC__files__File->output = (((void *)0));
__eCPointer___eCNameSpace__eC__files__File->input = (((void *)0));
}
}

void __eCMethod___eCNameSpace__eC__files__File_CloseOutput(struct __eCNameSpace__eC__types__Instance * this)
{
__attribute__((unused)) struct __eCNameSpace__eC__files__File * __eCPointer___eCNameSpace__eC__files__File = (struct __eCNameSpace__eC__files__File *)(this ? (((char *)this) + __eCClass___eCNameSpace__eC__files__File->offset) : 0);

if(__eCPointer___eCNameSpace__eC__files__File->output)
{
fclose(__eCPointer___eCNameSpace__eC__files__File->output);
if(__eCPointer___eCNameSpace__eC__files__File->input == __eCPointer___eCNameSpace__eC__files__File->output)
__eCPointer___eCNameSpace__eC__files__File->input = (((void *)0));
__eCPointer___eCNameSpace__eC__files__File->output = (((void *)0));
}
}

unsigned int __eCMethod___eCNameSpace__eC__files__File_Lock(struct __eCNameSpace__eC__types__Instance * this, int type, uint64 start, uint64 length, unsigned int wait)
{
__attribute__((unused)) struct __eCNameSpace__eC__files__File * __eCPointer___eCNameSpace__eC__files__File = (struct __eCNameSpace__eC__files__File *)(this ? (((char *)this) + __eCClass___eCNameSpace__eC__files__File->offset) : 0);

return FILE_Lock(__eCPointer___eCNameSpace__eC__files__File->input, __eCPointer___eCNameSpace__eC__files__File->output, type, start, length, wait);
}

unsigned int __eCMethod___eCNameSpace__eC__files__File_Unlock(struct __eCNameSpace__eC__types__Instance * this, uint64 start, uint64 length, unsigned int wait)
{
__attribute__((unused)) struct __eCNameSpace__eC__files__File * __eCPointer___eCNameSpace__eC__files__File = (struct __eCNameSpace__eC__files__File *)(this ? (((char *)this) + __eCClass___eCNameSpace__eC__files__File->offset) : 0);

return (__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, int type, uint64 start, uint64 length, unsigned int wait);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, int type, uint64 start, uint64 length, unsigned int wait))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = this;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Lock]);
__internal_VirtualMethod ? __internal_VirtualMethod(this, 0, start, length, wait) : (unsigned int)1;
}));
}

int __eCMethod___eCNameSpace__eC__files__File_Printf(struct __eCNameSpace__eC__types__Instance * this, const char * format, ...)
{
__attribute__((unused)) struct __eCNameSpace__eC__files__File * __eCPointer___eCNameSpace__eC__files__File = (struct __eCNameSpace__eC__files__File *)(this ? (((char *)this) + __eCClass___eCNameSpace__eC__files__File->offset) : 0);
int result = 0;

if(format)
{
char text[1025];
va_list args;

__builtin_va_start(args, format);
vsnprintf(text, sizeof (text), format, args);
text[sizeof (text) - 1] = 0;
if((__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = this;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(this, text) : (unsigned int)1;
})))
result = strlen(text);
__builtin_va_end(args);
}
return result;
}

unsigned int __eCMethod___eCNameSpace__eC__files__File_Flush(struct __eCNameSpace__eC__types__Instance * this)
{
__attribute__((unused)) struct __eCNameSpace__eC__files__File * __eCPointer___eCNameSpace__eC__files__File = (struct __eCNameSpace__eC__files__File *)(this ? (((char *)this) + __eCClass___eCNameSpace__eC__files__File->offset) : 0);

fflush(__eCPointer___eCNameSpace__eC__files__File->output);
return 1;
}

unsigned int __eCMethod___eCNameSpace__eC__files__File_GetLine(struct __eCNameSpace__eC__types__Instance * this, char * s, int max)
{
__attribute__((unused)) struct __eCNameSpace__eC__files__File * __eCPointer___eCNameSpace__eC__files__File = (struct __eCNameSpace__eC__files__File *)(this ? (((char *)this) + __eCClass___eCNameSpace__eC__files__File->offset) : 0);
int c = 0;
unsigned int result = 1;

s[c] = 0;
if((__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = this;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Eof]);
__internal_VirtualMethod ? __internal_VirtualMethod(this) : (unsigned int)1;
})))
{
result = 0;
}
else
{
while(c < max - 1)
{
char ch = 0;

if(!(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, char *  ch);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, char *  ch))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = this;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Getc]);
__internal_VirtualMethod ? __internal_VirtualMethod(this, &ch) : (unsigned int)1;
})))
{
result = 0;
break;
}
if(ch == '\n')
break;
if(ch != '\r')
s[c++] = ch;
}
}
s[c] = 0;
return result || c > 1;
}

unsigned int __eCMethod___eCNameSpace__eC__files__File_GetString(struct __eCNameSpace__eC__types__Instance * this, char * string, int max)
{
__attribute__((unused)) struct __eCNameSpace__eC__files__File * __eCPointer___eCNameSpace__eC__files__File = (struct __eCNameSpace__eC__files__File *)(this ? (((char *)this) + __eCClass___eCNameSpace__eC__files__File->offset) : 0);
int c;
char ch;
unsigned int quoted = 0;
unsigned int result = 1;

*string = 0;
while(1)
{
if(!(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, char *  ch);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, char *  ch))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = this;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Getc]);
__internal_VirtualMethod ? __internal_VirtualMethod(this, &ch) : (unsigned int)1;
})))
{
result = 0;
break;
}
if((ch != '\n') && (ch != '\r') && (ch != ' ') && (ch != ',') && (ch != '\t'))
break;
if((__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = this;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Eof]);
__internal_VirtualMethod ? __internal_VirtualMethod(this) : (unsigned int)1;
})))
break;
}
if(result)
{
for(c = 0; c < max - 1; c++)
{
if(!quoted && ((ch == '\n') || (ch == '\r') || (ch == ' ') || (ch == ',') || (ch == '\t')))
{
result = 1;
break;
}
if(ch == '\"')
{
quoted ^= (unsigned int)1;
c--;
}
else
string[c] = ch;
if(!(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, char *  ch);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, char *  ch))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = this;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Getc]);
__internal_VirtualMethod ? __internal_VirtualMethod(this, &ch) : (unsigned int)1;
})))
{
c++;
result = 0;
break;
}
}
string[c] = 0;
}
return result;
}

void *  __eCProp___eCNameSpace__eC__files__File_Get_input(struct __eCNameSpace__eC__types__Instance * this)
{
__attribute__((unused)) struct __eCNameSpace__eC__files__File * __eCPointer___eCNameSpace__eC__files__File = (struct __eCNameSpace__eC__files__File *)(this ? (((char *)this) + __eCClass___eCNameSpace__eC__files__File->offset) : 0);

return __eCPointer___eCNameSpace__eC__files__File->input;
}

void __eCProp___eCNameSpace__eC__files__File_Set_input(struct __eCNameSpace__eC__types__Instance * this, void *  value)
{
__attribute__((unused)) struct __eCNameSpace__eC__files__File * __eCPointer___eCNameSpace__eC__files__File = (struct __eCNameSpace__eC__files__File *)(this ? (((char *)this) + __eCClass___eCNameSpace__eC__files__File->offset) : 0);

__eCPointer___eCNameSpace__eC__files__File->input = value;
__eCProp___eCNameSpace__eC__files__File_input && __eCProp___eCNameSpace__eC__files__File_input->selfWatchable ? __eCNameSpace__eC__types__eInstance_FireSelfWatchers(this, __eCProp___eCNameSpace__eC__files__File_input) : (void)0, __eCPropM___eCNameSpace__eC__files__File_input && __eCPropM___eCNameSpace__eC__files__File_input->selfWatchable ? __eCNameSpace__eC__types__eInstance_FireSelfWatchers(this, __eCPropM___eCNameSpace__eC__files__File_input) : (void)0;
}

void *  __eCProp___eCNameSpace__eC__files__File_Get_output(struct __eCNameSpace__eC__types__Instance * this)
{
__attribute__((unused)) struct __eCNameSpace__eC__files__File * __eCPointer___eCNameSpace__eC__files__File = (struct __eCNameSpace__eC__files__File *)(this ? (((char *)this) + __eCClass___eCNameSpace__eC__files__File->offset) : 0);

return __eCPointer___eCNameSpace__eC__files__File->output;
}

void __eCProp___eCNameSpace__eC__files__File_Set_output(struct __eCNameSpace__eC__types__Instance * this, void *  value)
{
__attribute__((unused)) struct __eCNameSpace__eC__files__File * __eCPointer___eCNameSpace__eC__files__File = (struct __eCNameSpace__eC__files__File *)(this ? (((char *)this) + __eCClass___eCNameSpace__eC__files__File->offset) : 0);

__eCPointer___eCNameSpace__eC__files__File->output = value;
__eCProp___eCNameSpace__eC__files__File_output && __eCProp___eCNameSpace__eC__files__File_output->selfWatchable ? __eCNameSpace__eC__types__eInstance_FireSelfWatchers(this, __eCProp___eCNameSpace__eC__files__File_output) : (void)0, __eCPropM___eCNameSpace__eC__files__File_output && __eCPropM___eCNameSpace__eC__files__File_output->selfWatchable ? __eCNameSpace__eC__types__eInstance_FireSelfWatchers(this, __eCPropM___eCNameSpace__eC__files__File_output) : (void)0;
}

void __eCProp___eCNameSpace__eC__files__File_Set_buffered(struct __eCNameSpace__eC__types__Instance * this, unsigned int value)
{
__attribute__((unused)) struct __eCNameSpace__eC__files__File * __eCPointer___eCNameSpace__eC__files__File = (struct __eCNameSpace__eC__files__File *)(this ? (((char *)this) + __eCClass___eCNameSpace__eC__files__File->offset) : 0);

FILE_set_buffered(__eCPointer___eCNameSpace__eC__files__File->input, __eCPointer___eCNameSpace__eC__files__File->output, value);
__eCProp___eCNameSpace__eC__files__File_buffered && __eCProp___eCNameSpace__eC__files__File_buffered->selfWatchable ? __eCNameSpace__eC__types__eInstance_FireSelfWatchers(this, __eCProp___eCNameSpace__eC__files__File_buffered) : (void)0, __eCPropM___eCNameSpace__eC__files__File_buffered && __eCPropM___eCNameSpace__eC__files__File_buffered->selfWatchable ? __eCNameSpace__eC__types__eInstance_FireSelfWatchers(this, __eCPropM___eCNameSpace__eC__files__File_buffered) : (void)0;
}

unsigned int __eCProp___eCNameSpace__eC__files__File_Get_eof(struct __eCNameSpace__eC__types__Instance * this)
{
__attribute__((unused)) struct __eCNameSpace__eC__files__File * __eCPointer___eCNameSpace__eC__files__File = (struct __eCNameSpace__eC__files__File *)(this ? (((char *)this) + __eCClass___eCNameSpace__eC__files__File->offset) : 0);

return (__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = this;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Eof]);
__internal_VirtualMethod ? __internal_VirtualMethod(this) : (unsigned int)1;
}));
}

int __eCMethod___eCNameSpace__eC__files__File_GetLineEx(struct __eCNameSpace__eC__types__Instance * this, char * s, int max, unsigned int * hasNewLineChar)
{
__attribute__((unused)) struct __eCNameSpace__eC__files__File * __eCPointer___eCNameSpace__eC__files__File = (struct __eCNameSpace__eC__files__File *)(this ? (((char *)this) + __eCClass___eCNameSpace__eC__files__File->offset) : 0);
int c = 0;

s[c] = '\0';
if(!(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = this;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Eof]);
__internal_VirtualMethod ? __internal_VirtualMethod(this) : (unsigned int)1;
})))
{
char ch = '\0';

while(c < max - 1)
{
if(!(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, char *  ch);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, char *  ch))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = this;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Getc]);
__internal_VirtualMethod ? __internal_VirtualMethod(this, &ch) : (unsigned int)1;
})))
break;
if(ch == '\n')
break;
if(ch != '\r')
s[c++] = ch;
}
if(hasNewLineChar)
*hasNewLineChar = (ch == '\n');
}
s[c] = '\0';
return c;
}

unsigned int __eCMethod___eCNameSpace__eC__files__File_CopyToFile(struct __eCNameSpace__eC__types__Instance * this, struct __eCNameSpace__eC__types__Instance * f)
{
__attribute__((unused)) struct __eCNameSpace__eC__files__File * __eCPointer___eCNameSpace__eC__files__File = (struct __eCNameSpace__eC__files__File *)(this ? (((char *)this) + __eCClass___eCNameSpace__eC__files__File->offset) : 0);
unsigned int result = 0;

if(f)
{
unsigned char buffer[65536];

result = 1;
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, long long pos, int mode);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, long long pos, int mode))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = this;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Seek]);
__internal_VirtualMethod ? __internal_VirtualMethod(this, 0, 0) : (unsigned int)1;
}));
while(!(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = this;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Eof]);
__internal_VirtualMethod ? __internal_VirtualMethod(this) : (unsigned int)1;
})))
{
size_t count = (__extension__ ({
size_t (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, void *  buffer, size_t size, size_t count);

__internal_VirtualMethod = ((size_t (*)(struct __eCNameSpace__eC__types__Instance *, void *  buffer, size_t size, size_t count))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = this;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Read]);
__internal_VirtualMethod ? __internal_VirtualMethod(this, buffer, 1, sizeof (buffer)) : (size_t)1;
}));

if(count && !(__extension__ ({
size_t (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const void *  buffer, size_t size, size_t count);

__internal_VirtualMethod = ((size_t (*)(struct __eCNameSpace__eC__types__Instance *, const void *  buffer, size_t size, size_t count))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Write]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, buffer, 1, count) : (size_t)1;
})))
{
result = 0;
break;
}
if(!count)
break;
}
}
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, long long pos, int mode);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, long long pos, int mode))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = this;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Seek]);
__internal_VirtualMethod ? __internal_VirtualMethod(this, 0, 0) : (unsigned int)1;
}));
return result;
}

void __eCMethod___eCNameSpace__eC__files__File_Close(struct __eCNameSpace__eC__types__Instance * this)
{
__attribute__((unused)) struct __eCNameSpace__eC__files__File * __eCPointer___eCNameSpace__eC__files__File = (struct __eCNameSpace__eC__files__File *)(this ? (((char *)this) + __eCClass___eCNameSpace__eC__files__File->offset) : 0);

(__extension__ ({
void (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *);

__internal_VirtualMethod = ((void (*)(struct __eCNameSpace__eC__types__Instance *))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = this;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_CloseOutput]);
__internal_VirtualMethod ? __internal_VirtualMethod(this) : (void)1;
}));
(__extension__ ({
void (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *);

__internal_VirtualMethod = ((void (*)(struct __eCNameSpace__eC__types__Instance *))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = this;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_CloseInput]);
__internal_VirtualMethod ? __internal_VirtualMethod(this) : (void)1;
}));
}

void __eCMethod___eCNameSpace__eC__files__File_PrintLn(struct __eCNameSpace__eC__types__Instance * this, struct __eCNameSpace__eC__types__Class * class, const void * object, ...)
{
__attribute__((unused)) struct __eCNameSpace__eC__files__File * __eCPointer___eCNameSpace__eC__files__File = (struct __eCNameSpace__eC__files__File *)(this ? (((char *)this) + __eCClass___eCNameSpace__eC__files__File->offset) : 0);
va_list args;
char buffer[4096];
int len;

__builtin_va_start(args, object);
len = __eCNameSpace__eC__types__PrintStdArgsToBuffer(buffer, sizeof (buffer), class, object, args);
(__extension__ ({
size_t (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const void *  data, size_t numBytes);

__internal_VirtualMethod = ((size_t (*)(struct __eCNameSpace__eC__types__Instance *, const void *  data, size_t numBytes))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = this;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__types__IOChannel_WriteData]);
__internal_VirtualMethod ? __internal_VirtualMethod(this, buffer, len) : (size_t)1;
}));
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, char ch);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, char ch))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = this;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Putc]);
__internal_VirtualMethod ? __internal_VirtualMethod(this, '\n') : (unsigned int)1;
}));
__builtin_va_end(args);
}

void __eCMethod___eCNameSpace__eC__files__File_Print(struct __eCNameSpace__eC__types__Instance * this, struct __eCNameSpace__eC__types__Class * class, const void * object, ...)
{
__attribute__((unused)) struct __eCNameSpace__eC__files__File * __eCPointer___eCNameSpace__eC__files__File = (struct __eCNameSpace__eC__files__File *)(this ? (((char *)this) + __eCClass___eCNameSpace__eC__files__File->offset) : 0);
va_list args;
char buffer[4096];
int len;

__builtin_va_start(args, object);
len = __eCNameSpace__eC__types__PrintStdArgsToBuffer(buffer, sizeof (buffer), class, object, args);
(__extension__ ({
size_t (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const void *  data, size_t numBytes);

__internal_VirtualMethod = ((size_t (*)(struct __eCNameSpace__eC__types__Instance *, const void *  data, size_t numBytes))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = this;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__types__IOChannel_WriteData]);
__internal_VirtualMethod ? __internal_VirtualMethod(this, buffer, len) : (size_t)1;
}));
__builtin_va_end(args);
}

struct __eCNameSpace__eC__types__Instance * __eCNameSpace__eC__files__FileOpen(const char * fileName, int mode)
{
struct __eCNameSpace__eC__types__Instance * result = (((void *)0));

if(fileName)
{
if(strstr(fileName, "File://") == fileName)
{
result = (struct __eCNameSpace__eC__types__Instance *)(uintptr_t)strtoull(fileName + 7, (((void *)0)), 16);
if(result)
{
if(((struct __eCNameSpace__eC__types__Instance *)(char *)result)->_class && __eCNameSpace__eC__types__eClass_IsDerived(((struct __eCNameSpace__eC__types__Instance *)(char *)result)->_class, __eCClass___eCNameSpace__eC__files__File))
{
if(!((struct __eCNameSpace__eC__types__Instance *)(char *)result)->_refCount)
result->_refCount++;
result->_refCount++;
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, long long pos, int mode);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, long long pos, int mode))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = result;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Seek]);
__internal_VirtualMethod ? __internal_VirtualMethod(result, 0, 0) : (unsigned int)1;
}));
}
else
result = (((void *)0));
}
}
else
{
struct __eCNameSpace__eC__types__Instance * file = __eCNameSpace__eC__types__eInstance_New(__eCClass___eCNameSpace__eC__files__File);

if(file)
{
FILE_FileOpen(fileName, mode, &((struct __eCNameSpace__eC__files__File *)(((char *)file + __eCClass___eCNameSpace__eC__files__File->offset)))->input, &((struct __eCNameSpace__eC__files__File *)(((char *)file + __eCClass___eCNameSpace__eC__files__File->offset)))->output);
if(!__eCProp___eCNameSpace__eC__files__File_Get_input(file) && !__eCProp___eCNameSpace__eC__files__File_Get_output(file))
;
else
{
result = file;
}
if(!result)
{
(__eCNameSpace__eC__types__eInstance_DecRef(file), file = 0);
}
}
}
}
return result;
}

void __eCUnregisterModule_File(struct __eCNameSpace__eC__types__Instance * module)
{

__eCPropM___eCNameSpace__eC__files__File_input = (void *)0;
__eCPropM___eCNameSpace__eC__files__File_output = (void *)0;
__eCPropM___eCNameSpace__eC__files__File_buffered = (void *)0;
__eCPropM___eCNameSpace__eC__files__File_eof = (void *)0;
}

int __eCMethod___eCNameSpace__eC__files__File_GetValue(struct __eCNameSpace__eC__types__Instance * this)
{
__attribute__((unused)) struct __eCNameSpace__eC__files__File * __eCPointer___eCNameSpace__eC__files__File = (struct __eCNameSpace__eC__files__File *)(this ? (((char *)this) + __eCClass___eCNameSpace__eC__files__File->offset) : 0);
char string[32];

__eCMethod___eCNameSpace__eC__files__File_GetString(this, string, sizeof (string));
return atoi(string);
}

unsigned int __eCMethod___eCNameSpace__eC__files__File_GetHexValue(struct __eCNameSpace__eC__types__Instance * this)
{
__attribute__((unused)) struct __eCNameSpace__eC__files__File * __eCPointer___eCNameSpace__eC__files__File = (struct __eCNameSpace__eC__files__File *)(this ? (((char *)this) + __eCClass___eCNameSpace__eC__files__File->offset) : 0);
char string[32];

__eCMethod___eCNameSpace__eC__files__File_GetString(this, string, sizeof (string));
return (unsigned int)strtoul(string, (((void *)0)), 16);
}

float __eCMethod___eCNameSpace__eC__files__File_GetFloat(struct __eCNameSpace__eC__types__Instance * this)
{
__attribute__((unused)) struct __eCNameSpace__eC__files__File * __eCPointer___eCNameSpace__eC__files__File = (struct __eCNameSpace__eC__files__File *)(this ? (((char *)this) + __eCClass___eCNameSpace__eC__files__File->offset) : 0);
char string[32];

__eCMethod___eCNameSpace__eC__files__File_GetString(this, string, sizeof (string));
return (float)__eCNameSpace__eC__types__FloatFromString(string);
}

double __eCMethod___eCNameSpace__eC__files__File_GetDouble(struct __eCNameSpace__eC__types__Instance * this)
{
__attribute__((unused)) struct __eCNameSpace__eC__files__File * __eCPointer___eCNameSpace__eC__files__File = (struct __eCNameSpace__eC__files__File *)(this ? (((char *)this) + __eCClass___eCNameSpace__eC__files__File->offset) : 0);
char string[32];

__eCMethod___eCNameSpace__eC__files__File_GetString(this, string, sizeof (string));
return __eCNameSpace__eC__types__FloatFromString(string);
}

unsigned int __eCMethod___eCNameSpace__eC__files__File_OnGetDataFromString(struct __eCNameSpace__eC__types__Class * class, struct __eCNameSpace__eC__types__Instance ** this, const char * string)
{
__attribute__((unused)) struct __eCNameSpace__eC__files__File * __eCPointer___eCNameSpace__eC__files__File = (struct __eCNameSpace__eC__files__File *)(this ? (((char *)this) + __eCClass___eCNameSpace__eC__files__File->offset) : 0);

if(!string[0])
{
(*this) = (((void *)0));
return 1;
}
else
{
struct __eCNameSpace__eC__types__Instance * f = __eCNameSpace__eC__files__FileOpen(string, 1);

if(f)
{
(*this) = __eCNameSpace__eC__types__eInstance_New(__eCClass___eCNameSpace__eC__files__TempFile);
while(!(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Eof]);
__internal_VirtualMethod ? __internal_VirtualMethod(f) : (unsigned int)1;
})))
{
unsigned char buffer[4096];
size_t read = (__extension__ ({
size_t (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, void *  buffer, size_t size, size_t count);

__internal_VirtualMethod = ((size_t (*)(struct __eCNameSpace__eC__types__Instance *, void *  buffer, size_t size, size_t count))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Read]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, buffer, 1, sizeof (buffer)) : (size_t)1;
}));

(__extension__ ({
size_t (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const void *  buffer, size_t size, size_t count);

__internal_VirtualMethod = ((size_t (*)(struct __eCNameSpace__eC__types__Instance *, const void *  buffer, size_t size, size_t count))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = (*this);

__internal_ClassInst ? __internal_ClassInst->_vTbl : class->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Write]);
__internal_VirtualMethod ? __internal_VirtualMethod((*this), buffer, 1, read) : (size_t)1;
}));
}
(__eCNameSpace__eC__types__eInstance_DecRef(f), f = 0);
return 1;
}
}
return 0;
}

unsigned int __eCMethod___eCNameSpace__eC__files__File_CopyTo(struct __eCNameSpace__eC__types__Instance * this, const char * outputFileName)
{
__attribute__((unused)) struct __eCNameSpace__eC__files__File * __eCPointer___eCNameSpace__eC__files__File = (struct __eCNameSpace__eC__files__File *)(this ? (((char *)this) + __eCClass___eCNameSpace__eC__files__File->offset) : 0);
unsigned int result = 0;
struct __eCNameSpace__eC__types__Instance * f = __eCNameSpace__eC__files__FileOpen(outputFileName, 2);

if(f)
{
unsigned char buffer[65536];

result = 1;
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, long long pos, int mode);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, long long pos, int mode))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = this;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Seek]);
__internal_VirtualMethod ? __internal_VirtualMethod(this, 0, 0) : (unsigned int)1;
}));
while(!(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = this;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Eof]);
__internal_VirtualMethod ? __internal_VirtualMethod(this) : (unsigned int)1;
})))
{
size_t count = (__extension__ ({
size_t (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, void *  buffer, size_t size, size_t count);

__internal_VirtualMethod = ((size_t (*)(struct __eCNameSpace__eC__types__Instance *, void *  buffer, size_t size, size_t count))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = this;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Read]);
__internal_VirtualMethod ? __internal_VirtualMethod(this, buffer, 1, sizeof (buffer)) : (size_t)1;
}));

if(count && !(__extension__ ({
size_t (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const void *  buffer, size_t size, size_t count);

__internal_VirtualMethod = ((size_t (*)(struct __eCNameSpace__eC__types__Instance *, const void *  buffer, size_t size, size_t count))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Write]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, buffer, 1, count) : (size_t)1;
})))
{
result = 0;
break;
}
if(!count)
break;
}
(__eCNameSpace__eC__types__eInstance_DecRef(f), f = 0);
}
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, long long pos, int mode);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, long long pos, int mode))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = this;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Seek]);
__internal_VirtualMethod ? __internal_VirtualMethod(this, 0, 0) : (unsigned int)1;
}));
return result;
}

void __eCRegisterModule_File(struct __eCNameSpace__eC__types__Instance * module)
{
struct __eCNameSpace__eC__types__Class __attribute__((unused)) * class;

class = __eCNameSpace__eC__types__eSystem_RegisterClass(3, "eC::files::FileSize", "uint", 0, 0, (void *)0, (void *)0, module, 1, 1);
if(((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application == ((struct __eCNameSpace__eC__types__Module *)(((char *)__thisModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->application && class)
__eCClass___eCNameSpace__eC__files__FileSize = class;
__eCNameSpace__eC__types__eClass_AddMethod(class, "OnCompare", 0, __eCMethod___eCNameSpace__eC__files__FileSize_OnCompare, 1);
__eCNameSpace__eC__types__eClass_AddMethod(class, "OnGetString", 0, __eCMethod___eCNameSpace__eC__files__FileSize_OnGetString, 1);
__eCNameSpace__eC__types__eClass_AddMethod(class, "OnGetDataFromString", 0, __eCMethod___eCNameSpace__eC__files__FileSize_OnGetDataFromString, 1);
class = __eCNameSpace__eC__types__eSystem_RegisterClass(3, "eC::files::FileSize64", "uint64", 0, 0, (void *)0, (void *)0, module, 1, 1);
if(((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application == ((struct __eCNameSpace__eC__types__Module *)(((char *)__thisModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->application && class)
__eCClass___eCNameSpace__eC__files__FileSize64 = class;
__eCNameSpace__eC__types__eClass_AddMethod(class, "OnCompare", 0, __eCMethod___eCNameSpace__eC__files__FileSize64_OnCompare, 1);
__eCNameSpace__eC__types__eClass_AddMethod(class, "OnGetString", 0, __eCMethod___eCNameSpace__eC__files__FileSize64_OnGetString, 1);
__eCNameSpace__eC__types__eClass_AddMethod(class, "OnGetDataFromString", 0, __eCMethod___eCNameSpace__eC__files__FileSize64_OnGetDataFromString, 1);
class = __eCNameSpace__eC__types__eSystem_RegisterClass(0, "eC::files::FileSystem", 0, 0, 0, (void *)0, (void *)0, module, 2, 1);
if(((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application == ((struct __eCNameSpace__eC__types__Module *)(((char *)__thisModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->application && class)
__eCClass___eCNameSpace__eC__files__FileSystem = class;
__eCNameSpace__eC__types__eClass_AddVirtualMethod(class, "Open", "eC::files::File ::Open(const char * archive, const char * name, eC::files::FileOpenMode mode)", 0, 2);
__eCNameSpace__eC__types__eClass_AddVirtualMethod(class, "Exists", "eC::files::FileAttribs ::Exists(const char * archive, const char * fileName)", 0, 2);
__eCNameSpace__eC__types__eClass_AddVirtualMethod(class, "GetSize", "bool ::GetSize(const char * archive, const char * fileName, eC::files::FileSize * size)", 0, 2);
__eCNameSpace__eC__types__eClass_AddVirtualMethod(class, "Stats", "bool ::Stats(const char * archive, const char * fileName, eC::files::FileStats stats)", 0, 2);
__eCNameSpace__eC__types__eClass_AddVirtualMethod(class, "FixCase", "void ::FixCase(const char * archive, char * fileName)", 0, 2);
__eCNameSpace__eC__types__eClass_AddVirtualMethod(class, "Find", "bool ::Find(FileDesc file, const char * archive, const char * name)", 0, 2);
__eCNameSpace__eC__types__eClass_AddVirtualMethod(class, "FindNext", "bool ::FindNext(FileDesc file)", 0, 2);
__eCNameSpace__eC__types__eClass_AddVirtualMethod(class, "CloseDir", "void ::CloseDir(FileDesc file)", 0, 2);
__eCNameSpace__eC__types__eClass_AddVirtualMethod(class, "OpenArchive", "Archive ::OpenArchive(const char * fileName, ArchiveOpenFlags create)", 0, 2);
__eCNameSpace__eC__types__eClass_AddVirtualMethod(class, "QuerySize", "bool ::QuerySize(const char * fileName, eC::files::FileSize * size)", 0, 2);
class = __eCNameSpace__eC__types__eSystem_RegisterClass(4, "eC::files::FileOpenMode", 0, 0, 0, (void *)0, (void *)0, module, 1, 1);
if(((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application == ((struct __eCNameSpace__eC__types__Module *)(((char *)__thisModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->application && class)
__eCClass___eCNameSpace__eC__files__FileOpenMode = class;
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "read", 1);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "write", 2);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "append", 3);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "readWrite", 4);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "writeRead", 5);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "appendRead", 6);
class = __eCNameSpace__eC__types__eSystem_RegisterClass(4, "eC::files::FileSeekMode", 0, 0, 0, (void *)0, (void *)0, module, 1, 1);
if(((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application == ((struct __eCNameSpace__eC__types__Module *)(((char *)__thisModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->application && class)
__eCClass___eCNameSpace__eC__files__FileSeekMode = class;
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "start", 0);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "current", 1);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "end", 2);
class = __eCNameSpace__eC__types__eSystem_RegisterClass(4, "eC::files::FileLock", 0, 0, 0, (void *)0, (void *)0, module, 1, 1);
if(((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application == ((struct __eCNameSpace__eC__types__Module *)(((char *)__thisModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->application && class)
__eCClass___eCNameSpace__eC__files__FileLock = class;
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "unlocked", 0);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "shared", 1);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "exclusive", 2);
class = __eCNameSpace__eC__types__eSystem_RegisterClass(0, "eC::files::File", "eC::types::IOChannel", sizeof(struct __eCNameSpace__eC__files__File), 0, (void *)0, (void *)__eCDestructor___eCNameSpace__eC__files__File, module, 1, 1);
if(((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application == ((struct __eCNameSpace__eC__types__Module *)(((char *)__thisModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->application && class)
__eCClass___eCNameSpace__eC__files__File = class;
__eCNameSpace__eC__types__eClass_AddMethod(class, "OnGetString", 0, __eCMethod___eCNameSpace__eC__files__File_OnGetString, 1);
__eCNameSpace__eC__types__eClass_AddMethod(class, "OnGetDataFromString", 0, __eCMethod___eCNameSpace__eC__files__File_OnGetDataFromString, 1);
__eCNameSpace__eC__types__eClass_AddMethod(class, "WriteData", 0, __eCMethod___eCNameSpace__eC__files__File_WriteData, 1);
__eCNameSpace__eC__types__eClass_AddMethod(class, "ReadData", 0, __eCMethod___eCNameSpace__eC__files__File_ReadData, 1);
__eCNameSpace__eC__types__eClass_AddVirtualMethod(class, "Seek", "bool Seek(long long pos, eC::files::FileSeekMode mode)", __eCMethod___eCNameSpace__eC__files__File_Seek, 1);
__eCNameSpace__eC__types__eClass_AddVirtualMethod(class, "Tell", "uint64 Tell(void)", __eCMethod___eCNameSpace__eC__files__File_Tell, 1);
__eCNameSpace__eC__types__eClass_AddVirtualMethod(class, "Read", "uintsize Read(void * buffer, uintsize size, uintsize count)", __eCMethod___eCNameSpace__eC__files__File_Read, 1);
__eCNameSpace__eC__types__eClass_AddVirtualMethod(class, "Write", "uintsize Write(const void * buffer, uintsize size, uintsize count)", __eCMethod___eCNameSpace__eC__files__File_Write, 1);
__eCNameSpace__eC__types__eClass_AddVirtualMethod(class, "Getc", "bool Getc(char * ch)", __eCMethod___eCNameSpace__eC__files__File_Getc, 1);
__eCNameSpace__eC__types__eClass_AddVirtualMethod(class, "Putc", "bool Putc(char ch)", __eCMethod___eCNameSpace__eC__files__File_Putc, 1);
__eCNameSpace__eC__types__eClass_AddVirtualMethod(class, "Puts", "bool Puts(const char * string)", __eCMethod___eCNameSpace__eC__files__File_Puts, 1);
__eCNameSpace__eC__types__eClass_AddVirtualMethod(class, "Eof", "bool Eof(void)", __eCMethod___eCNameSpace__eC__files__File_Eof, 1);
__eCNameSpace__eC__types__eClass_AddVirtualMethod(class, "Truncate", "bool Truncate(uint64 size)", __eCMethod___eCNameSpace__eC__files__File_Truncate, 1);
__eCNameSpace__eC__types__eClass_AddVirtualMethod(class, "GetSize", "uint64 GetSize(void)", __eCMethod___eCNameSpace__eC__files__File_GetSize, 1);
__eCNameSpace__eC__types__eClass_AddVirtualMethod(class, "CloseInput", "void CloseInput(void)", __eCMethod___eCNameSpace__eC__files__File_CloseInput, 1);
__eCNameSpace__eC__types__eClass_AddVirtualMethod(class, "CloseOutput", "void CloseOutput(void)", __eCMethod___eCNameSpace__eC__files__File_CloseOutput, 1);
__eCNameSpace__eC__types__eClass_AddVirtualMethod(class, "Lock", "bool Lock(eC::files::FileLock type, uint64 start, uint64 length, bool wait)", __eCMethod___eCNameSpace__eC__files__File_Lock, 1);
__eCNameSpace__eC__types__eClass_AddVirtualMethod(class, "Unlock", "bool Unlock(uint64 start, uint64 length, bool wait)", __eCMethod___eCNameSpace__eC__files__File_Unlock, 1);
__eCNameSpace__eC__types__eClass_AddVirtualMethod(class, "Close", "void Close()", __eCMethod___eCNameSpace__eC__files__File_Close, 1);
__eCNameSpace__eC__types__eClass_AddMethod(class, "CopyTo", "bool CopyTo(const char * outputFileName)", __eCMethod___eCNameSpace__eC__files__File_CopyTo, 1);
__eCNameSpace__eC__types__eClass_AddMethod(class, "CopyToFile", "bool CopyToFile(eC::files::File f)", __eCMethod___eCNameSpace__eC__files__File_CopyToFile, 1);
__eCNameSpace__eC__types__eClass_AddMethod(class, "Flush", "bool Flush(void)", __eCMethod___eCNameSpace__eC__files__File_Flush, 1);
__eCNameSpace__eC__types__eClass_AddMethod(class, "GetDouble", "double GetDouble(void)", __eCMethod___eCNameSpace__eC__files__File_GetDouble, 1);
__eCNameSpace__eC__types__eClass_AddMethod(class, "GetFloat", "float GetFloat(void)", __eCMethod___eCNameSpace__eC__files__File_GetFloat, 1);
__eCNameSpace__eC__types__eClass_AddMethod(class, "GetHexValue", "unsigned int GetHexValue(void)", __eCMethod___eCNameSpace__eC__files__File_GetHexValue, 1);
__eCNameSpace__eC__types__eClass_AddMethod(class, "GetLine", "bool GetLine(char * s, int max)", __eCMethod___eCNameSpace__eC__files__File_GetLine, 1);
__eCNameSpace__eC__types__eClass_AddMethod(class, "GetLineEx", "int GetLineEx(char * s, int max, bool * hasNewLineChar)", __eCMethod___eCNameSpace__eC__files__File_GetLineEx, 1);
__eCNameSpace__eC__types__eClass_AddMethod(class, "GetString", "bool GetString(char * string, int max)", __eCMethod___eCNameSpace__eC__files__File_GetString, 1);
__eCNameSpace__eC__types__eClass_AddMethod(class, "GetValue", "int GetValue(void)", __eCMethod___eCNameSpace__eC__files__File_GetValue, 1);
__eCNameSpace__eC__types__eClass_AddMethod(class, "Print", "void Print(const typed_object object, ...)", __eCMethod___eCNameSpace__eC__files__File_Print, 1);
__eCNameSpace__eC__types__eClass_AddMethod(class, "PrintLn", "void PrintLn(const typed_object object, ...)", __eCMethod___eCNameSpace__eC__files__File_PrintLn, 1);
__eCNameSpace__eC__types__eClass_AddMethod(class, "Printf", "int Printf(const char * format, ...)", __eCMethod___eCNameSpace__eC__files__File_Printf, 1);
__eCPropM___eCNameSpace__eC__files__File_input = __eCNameSpace__eC__types__eClass_AddProperty(class, "input", "void *", __eCProp___eCNameSpace__eC__files__File_Set_input, __eCProp___eCNameSpace__eC__files__File_Get_input, 1);
if(((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application == ((struct __eCNameSpace__eC__types__Module *)(((char *)__thisModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->application)
__eCProp___eCNameSpace__eC__files__File_input = __eCPropM___eCNameSpace__eC__files__File_input, __eCPropM___eCNameSpace__eC__files__File_input = (void *)0;
__eCPropM___eCNameSpace__eC__files__File_output = __eCNameSpace__eC__types__eClass_AddProperty(class, "output", "void *", __eCProp___eCNameSpace__eC__files__File_Set_output, __eCProp___eCNameSpace__eC__files__File_Get_output, 1);
if(((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application == ((struct __eCNameSpace__eC__types__Module *)(((char *)__thisModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->application)
__eCProp___eCNameSpace__eC__files__File_output = __eCPropM___eCNameSpace__eC__files__File_output, __eCPropM___eCNameSpace__eC__files__File_output = (void *)0;
__eCPropM___eCNameSpace__eC__files__File_buffered = __eCNameSpace__eC__types__eClass_AddProperty(class, "buffered", "bool", __eCProp___eCNameSpace__eC__files__File_Set_buffered, 0, 1);
if(((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application == ((struct __eCNameSpace__eC__types__Module *)(((char *)__thisModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->application)
__eCProp___eCNameSpace__eC__files__File_buffered = __eCPropM___eCNameSpace__eC__files__File_buffered, __eCPropM___eCNameSpace__eC__files__File_buffered = (void *)0;
__eCPropM___eCNameSpace__eC__files__File_eof = __eCNameSpace__eC__types__eClass_AddProperty(class, "eof", "bool", 0, __eCProp___eCNameSpace__eC__files__File_Get_eof, 1);
if(((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application == ((struct __eCNameSpace__eC__types__Module *)(((char *)__thisModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->application)
__eCProp___eCNameSpace__eC__files__File_eof = __eCPropM___eCNameSpace__eC__files__File_eof, __eCPropM___eCNameSpace__eC__files__File_eof = (void *)0;
class = __eCNameSpace__eC__types__eSystem_RegisterClass(0, "eC::files::ConsoleFile", "eC::files::File", 0, 0, (void *)__eCConstructor___eCNameSpace__eC__files__ConsoleFile, (void *)__eCDestructor___eCNameSpace__eC__files__ConsoleFile, module, 1, 1);
if(((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application == ((struct __eCNameSpace__eC__types__Module *)(((char *)__thisModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->application && class)
__eCClass___eCNameSpace__eC__files__ConsoleFile = class;
class = __eCNameSpace__eC__types__eSystem_RegisterClass(2, "eC::files::FileAttribs", "bool", 0, 0, (void *)0, (void *)0, module, 1, 1);
if(((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application == ((struct __eCNameSpace__eC__types__Module *)(((char *)__thisModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->application && class)
__eCClass___eCNameSpace__eC__files__FileAttribs = class;
__eCNameSpace__eC__types__eClass_AddBitMember(class, "isFile", "bool", 1, 0, 1);
__eCNameSpace__eC__types__eClass_AddBitMember(class, "isArchive", "bool", 1, 1, 1);
__eCNameSpace__eC__types__eClass_AddBitMember(class, "isHidden", "bool", 1, 2, 1);
__eCNameSpace__eC__types__eClass_AddBitMember(class, "isReadOnly", "bool", 1, 3, 1);
__eCNameSpace__eC__types__eClass_AddBitMember(class, "isSystem", "bool", 1, 4, 1);
__eCNameSpace__eC__types__eClass_AddBitMember(class, "isTemporary", "bool", 1, 5, 1);
__eCNameSpace__eC__types__eClass_AddBitMember(class, "isDirectory", "bool", 1, 6, 1);
__eCNameSpace__eC__types__eClass_AddBitMember(class, "isDrive", "bool", 1, 7, 1);
__eCNameSpace__eC__types__eClass_AddBitMember(class, "isCDROM", "bool", 1, 8, 1);
__eCNameSpace__eC__types__eClass_AddBitMember(class, "isRemote", "bool", 1, 9, 1);
__eCNameSpace__eC__types__eClass_AddBitMember(class, "isRemovable", "bool", 1, 10, 1);
__eCNameSpace__eC__types__eClass_AddBitMember(class, "isServer", "bool", 1, 11, 1);
__eCNameSpace__eC__types__eClass_AddBitMember(class, "isShare", "bool", 1, 12, 1);
class = __eCNameSpace__eC__types__eSystem_RegisterClass(3, "eC::files::SecSince1970", "int64", 0, 0, (void *)0, (void *)0, module, 1, 1);
if(((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application == ((struct __eCNameSpace__eC__types__Module *)(((char *)__thisModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->application && class)
__eCClass___eCNameSpace__eC__files__SecSince1970 = class;
class = __eCNameSpace__eC__types__eSystem_RegisterClass(1, "eC::files::FileStats", 0, sizeof(struct __eCNameSpace__eC__files__FileStats), 0, (void *)0, (void *)0, module, 1, 1);
if(((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application == ((struct __eCNameSpace__eC__types__Module *)(((char *)__thisModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->application && class)
__eCClass___eCNameSpace__eC__files__FileStats = class;
__eCNameSpace__eC__types__eClass_AddDataMember(class, "attribs", "eC::files::FileAttribs", 4, 4, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "size", "uint64", 8, 8, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "accessed", "eC::files::SecSince1970", 8, 8, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "modified", "eC::files::SecSince1970", 8, 8, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "created", "eC::files::SecSince1970", 8, 8, 1);
__eCNameSpace__eC__types__eSystem_RegisterFunction("eC::files::FileExists", "eC::files::FileAttribs eC::files::FileExists(const char * fileName)", __eCNameSpace__eC__files__FileExists, module, 1);
__eCNameSpace__eC__types__eSystem_RegisterFunction("eC::files::FileOpen", "eC::files::File eC::files::FileOpen(const char * fileName, eC::files::FileOpenMode mode)", __eCNameSpace__eC__files__FileOpen, module, 1);
__eCNameSpace__eC__types__eSystem_RegisterFunction("eC::files::FileFixCase", "void eC::files::FileFixCase(char * file)", __eCNameSpace__eC__files__FileFixCase, module, 1);
__eCNameSpace__eC__types__eSystem_RegisterFunction("eC::files::FileGetSize", "bool eC::files::FileGetSize(const char * fileName, eC::files::FileSize * size)", __eCNameSpace__eC__files__FileGetSize, module, 1);
__eCNameSpace__eC__types__eSystem_RegisterFunction("eC::files::FileGetStats", "bool eC::files::FileGetStats(const char * fileName, eC::files::FileStats stats)", __eCNameSpace__eC__files__FileGetStats, module, 1);
__eCNameSpace__eC__types__eSystem_RegisterFunction("eC::files::CreateTemporaryFile", "eC::files::File eC::files::CreateTemporaryFile(char * tempFileName, const char * template)", __eCNameSpace__eC__files__CreateTemporaryFile, module, 1);
__eCNameSpace__eC__types__eSystem_RegisterFunction("eC::files::CreateTemporaryDir", "void eC::files::CreateTemporaryDir(char * tempFileName, const char * template)", __eCNameSpace__eC__files__CreateTemporaryDir, module, 1);
__eCNameSpace__eC__types__eSystem_RegisterFunction("eC::files::MakeSlashPath", "void eC::files::MakeSlashPath(char * p)", __eCNameSpace__eC__files__MakeSlashPath, module, 1);
__eCNameSpace__eC__types__eSystem_RegisterFunction("eC::files::MakeSystemPath", "void eC::files::MakeSystemPath(char * p)", __eCNameSpace__eC__files__MakeSystemPath, module, 1);
__eCNameSpace__eC__types__eSystem_RegisterFunction("eC::files::CopySystemPath", "char * eC::files::CopySystemPath(const char * p)", __eCNameSpace__eC__files__CopySystemPath, module, 1);
__eCNameSpace__eC__types__eSystem_RegisterFunction("eC::files::CopyUnixPath", "char * eC::files::CopyUnixPath(const char * p)", __eCNameSpace__eC__files__CopyUnixPath, module, 1);
__eCNameSpace__eC__types__eSystem_RegisterFunction("eC::files::GetSystemPathBuffer", "char * eC::files::GetSystemPathBuffer(char * d, const char * p)", __eCNameSpace__eC__files__GetSystemPathBuffer, module, 1);
__eCNameSpace__eC__types__eSystem_RegisterFunction("eC::files::GetSlashPathBuffer", "char * eC::files::GetSlashPathBuffer(char * d, const char * p)", __eCNameSpace__eC__files__GetSlashPathBuffer, module, 1);
}

