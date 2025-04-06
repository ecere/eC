/* Code generated from eC source file: System.ec */
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
typedef __builtin_va_list va_list;

void exit(int status);

void * calloc(size_t nmemb, size_t size);

void free(void * ptr);

void * malloc(size_t size);

void * realloc(void * ptr, size_t size);

long int strtol(const char * nptr, char ** endptr, int base);

long long int strtoll(const char * nptr, char ** endptr, int base);

unsigned long long int strtoull(const char * nptr, char ** endptr, int base);

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

FILE * eC_stdout(void);

FILE * eC_stderr(void);

unsigned int System_MoveFile(const char * source, const char * dest, unsigned int replaceAndFlush);

unsigned int System_RenameFile(const char * oldName, const char * newName);

unsigned int System_DeleteFile(const char * fileName);

unsigned int System_MakeDir(const char * path);

unsigned int System_RemoveDir(const char * path);

char * System_GetWorkingDir(char * buf, int size);

unsigned int System_ChangeWorkingDir(const char * buf);

char * System_GetEnvironment(const char * envName, char * envValue, int max);

void System_SetEnvironment(const char * envName, const char * envValue);

void System_UnsetEnvironment(const char * envName);

unsigned int System_Execute(const char * env, const char * command, va_list args, unsigned int wait);

unsigned int System_ShellOpen(const char * fileName, va_list args);

void System_GetFreeSpace(const char * path, uint64 * size);




struct __eCNameSpace__eC__files__System
{
int errorLoggingMode;
char * errorBuffer;
int errorBufferSize;
char logFile[797];
unsigned int lastErrorCode;
int errorLevel;
} eC_gcc_struct;

void __eCNameSpace__eC__files__debugBreakpoint()
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

struct __eCNameSpace__eC__types__Array
{
uint64 *  array;
unsigned int count;
unsigned int minAllocSize;
} eC_gcc_struct;

extern const char *  __eCNameSpace__eC__i18n__GetTranslatedString(const char * name, const char *  string, const char *  stringAndContext);

extern int fputs(const char * , void *  stream);

struct __eCNameSpace__eC__files__File
{
void *  input;
void *  output;
} eC_gcc_struct;

extern char *  strcat(char * , const char * );

extern int printf(const char * , ...);

extern char *  strcpy(char * , const char * );

struct __eCNameSpace__eC__types__DefinedExpression;

struct __eCNameSpace__eC__types__BitMember;

struct __eCNameSpace__eC__types__GlobalFunction;

extern struct __eCNameSpace__eC__types__Property * __eCProp___eCNameSpace__eC__containers__Container_copySrc;

unsigned int __eCNameSpace__eC__files__MoveFile(const char * source, const char * dest)
{
return System_MoveFile(source, dest, 0);
}

unsigned int __eCNameSpace__eC__files__MoveFileEx(const char * source, const char * dest, unsigned int options)
{
return System_MoveFile(source, dest, (unsigned int)options);
}

unsigned int __eCNameSpace__eC__files__RenameFile(const char * oldName, const char * newName)
{
return System_RenameFile(oldName, newName);
}

unsigned int __eCNameSpace__eC__files__DeleteFile(const char * fileName)
{
return System_DeleteFile(fileName);
}

unsigned int __eCNameSpace__eC__files__MakeDir(const char * path)
{
return System_MakeDir(path);
}

unsigned int __eCNameSpace__eC__files__RemoveDir(const char * path)
{
return System_RemoveDir(path);
}

char * __eCNameSpace__eC__files__GetWorkingDir(char * buf, int size)
{
return System_GetWorkingDir(buf, size);
}

unsigned int __eCNameSpace__eC__files__ChangeWorkingDir(const char * buf)
{
return System_ChangeWorkingDir(buf);
}

char * __eCNameSpace__eC__files__GetEnvironment(const char * envName, char * envValue, int max)
{
return System_GetEnvironment(envName, envValue, max);
}

void __eCNameSpace__eC__files__SetEnvironment(const char * envName, const char * envValue)
{
System_SetEnvironment(envName, envValue);
}

void __eCNameSpace__eC__files__UnsetEnvironment(const char * envName)
{
System_UnsetEnvironment(envName);
}

unsigned int __eCNameSpace__eC__files__Execute(const char * command, ...)
{
unsigned int result;
va_list args;

__builtin_va_start(args, command);
result = System_Execute((((void *)0)), command, args, 0);
__builtin_va_end(args);
return result;
}

unsigned int __eCNameSpace__eC__files__ExecuteWait(const char * command, ...)
{
unsigned int result;
va_list args;

__builtin_va_start(args, command);
result = System_Execute((((void *)0)), command, args, 1);
__builtin_va_end(args);
return result;
}

unsigned int __eCNameSpace__eC__files__ExecuteEnv(const char * env, const char * command, ...)
{
unsigned int result;
va_list args;

__builtin_va_start(args, command);
result = System_Execute(env, command, args, 0);
__builtin_va_end(args);
return result;
}

unsigned int __eCNameSpace__eC__files__ShellOpen(const char * fileName, ...)
{
unsigned int result;
va_list args;

__builtin_va_start(args, fileName);
result = System_ShellOpen(fileName, args);
__builtin_va_end(args);
return result;
}

void __eCNameSpace__eC__files__GetFreeSpace(const char * path, uint64 * size)
{
System_GetFreeSpace(path, size);
}

struct __eCNameSpace__eC__files__System __eCNameSpace__eC__files__globalSystem;

static struct __eCNameSpace__eC__types__Instance * __eCNameSpace__eC__files__errorMessages;

static struct __eCNameSpace__eC__types__Instance * __eCNameSpace__eC__files__sysErrorMessages;

static struct __eCNameSpace__eC__types__Instance * __eCNameSpace__eC__files__guiErrorMessages;

void __eCNameSpace__eC__files__DumpErrors(unsigned int display)
{
if(__eCNameSpace__eC__files__globalSystem.errorBuffer && __eCNameSpace__eC__files__globalSystem.errorBuffer[0])
{
if(display)
{
printf("%s", __eCNameSpace__eC__files__globalSystem.errorBuffer);
}
__eCNameSpace__eC__files__globalSystem.errorBuffer[0] = '\0';
}
}

unsigned int __eCNameSpace__eC__files__GetLastErrorCode()
{
return (unsigned int)__eCNameSpace__eC__files__globalSystem.lastErrorCode;
}

void __eCNameSpace__eC__files__ResetError()
{
__eCNameSpace__eC__files__globalSystem.lastErrorCode = 0;
}

void __eCNameSpace__eC__files__SetErrorLevel(int level)
{
__eCNameSpace__eC__files__globalSystem.errorLevel = level;
}

struct __eCNameSpace__eC__types__Class;

struct __eCNameSpace__eC__types__Instance
{
void * *  _vTbl;
struct __eCNameSpace__eC__types__Class * _class;
int _refCount;
} eC_gcc_struct;

extern long long __eCNameSpace__eC__types__eClass_GetProperty(struct __eCNameSpace__eC__types__Class * _class, const char *  name);

extern void __eCNameSpace__eC__types__eClass_SetProperty(struct __eCNameSpace__eC__types__Class * _class, const char *  name, long long value);

struct __eCNameSpace__eC__containers__BuiltInContainer
{
void * *  _vTbl;
struct __eCNameSpace__eC__types__Class * _class;
int _refCount;
void *  data;
int count;
struct __eCNameSpace__eC__types__Class * type;
} eC_gcc_struct;

extern void __eCNameSpace__eC__types__eEnum_AddFixedValue(struct __eCNameSpace__eC__types__Class * _class, const char *  string, long long value);

extern struct __eCNameSpace__eC__types__BitMember * __eCNameSpace__eC__types__eClass_AddBitMember(struct __eCNameSpace__eC__types__Class * _class, const char *  name, const char *  type, int bitSize, int bitPos, int declMode);

extern void *  __eCNameSpace__eC__types__eInstance_New(struct __eCNameSpace__eC__types__Class * _class);

extern void __eCNameSpace__eC__types__eInstance_SetMethod(struct __eCNameSpace__eC__types__Instance * instance, const char *  name, void *  function);

extern void __eCNameSpace__eC__types__eInstance_IncRef(struct __eCNameSpace__eC__types__Instance * instance);

extern struct __eCNameSpace__eC__types__Instance * __eCNameSpace__eC__files__FileOpen(const char *  fileName, int mode);

extern int __eCVMethodID___eCNameSpace__eC__files__File_Puts;

extern void __eCNameSpace__eC__types__eInstance_DecRef(struct __eCNameSpace__eC__types__Instance * instance);

void __eCProp___eCNameSpace__eC__containers__Container_Set_copySrc(struct __eCNameSpace__eC__types__Instance * this, struct __eCNameSpace__eC__types__Instance * value);

void __eCNameSpace__eC__files__SetLoggingMode(int mode, void * where)
{
__eCNameSpace__eC__files__globalSystem.errorLoggingMode = mode;
if(mode == 4)
{
struct __eCNameSpace__eC__types__Instance * file;

strcpy(__eCNameSpace__eC__files__globalSystem.logFile, where);
file = __eCNameSpace__eC__files__FileOpen(__eCNameSpace__eC__files__globalSystem.logFile, 2);
(__eCNameSpace__eC__types__eInstance_DecRef(file), file = 0);
}
else if(mode == 6 || mode == 5)
{
if(!__eCNameSpace__eC__files__globalSystem.errorBuffer)
{
__eCNameSpace__eC__files__globalSystem.errorBufferSize = (100 * (1025));
__eCNameSpace__eC__files__globalSystem.errorBuffer = __eCNameSpace__eC__types__eSystem_New(sizeof(char) * ((100 * (1025))));
}
__eCNameSpace__eC__files__globalSystem.errorBuffer[0] = 0;
}
else if(mode == 3)
{
}
if(mode == (int)0)
{
__eCNameSpace__eC__files__DumpErrors(1);
if(__eCNameSpace__eC__files__globalSystem.errorBuffer)
{
(__eCNameSpace__eC__types__eSystem_Delete(__eCNameSpace__eC__files__globalSystem.errorBuffer), __eCNameSpace__eC__files__globalSystem.errorBuffer = 0);
__eCNameSpace__eC__files__globalSystem.errorBufferSize = 0;
}
}
}

void __eCDestroyModuleInstances_System()
{
(__eCNameSpace__eC__types__eInstance_DecRef(__eCNameSpace__eC__files__errorMessages), __eCNameSpace__eC__files__errorMessages = 0);
(__eCNameSpace__eC__types__eInstance_DecRef(__eCNameSpace__eC__files__guiErrorMessages), __eCNameSpace__eC__files__guiErrorMessages = 0);
(__eCNameSpace__eC__types__eInstance_DecRef(__eCNameSpace__eC__files__sysErrorMessages), __eCNameSpace__eC__files__sysErrorMessages = 0);
}

void __eCNameSpace__eC__files__Log(const char *  text);

void __eCNameSpace__eC__files__Logf(const char * format, ...)
{
va_list args;
char string[1025];

__builtin_va_start(args, format);
vsnprintf(string, sizeof (string), format, args);
string[sizeof (string) - 1] = 0;
__eCNameSpace__eC__files__Log(string);
__builtin_va_end(args);
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

struct __eCNameSpace__eC__types__Property;

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

extern void __eCNameSpace__eC__types__eInstance_StopWatching(struct __eCNameSpace__eC__types__Instance * instance, struct __eCNameSpace__eC__types__Property * _property, struct __eCNameSpace__eC__types__Instance * object);

extern void __eCNameSpace__eC__types__eInstance_Watch(struct __eCNameSpace__eC__types__Instance * instance, struct __eCNameSpace__eC__types__Property * _property, void *  object, void (*  callback)(void * , void * ));

extern void __eCNameSpace__eC__types__eInstance_FireWatchers(struct __eCNameSpace__eC__types__Instance * instance, struct __eCNameSpace__eC__types__Property * _property);

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

struct __eCNameSpace__eC__types__Module;

extern struct __eCNameSpace__eC__types__Class * __eCNameSpace__eC__types__eSystem_RegisterClass(int type, const char *  name, const char *  baseName, int size, int sizeClass, unsigned int (*  Constructor)(void * ), void (*  Destructor)(void * ), struct __eCNameSpace__eC__types__Instance * module, int declMode, int inheritanceAccess);

extern struct __eCNameSpace__eC__types__Instance * __thisModule;

extern struct __eCNameSpace__eC__types__DefinedExpression * __eCNameSpace__eC__types__eSystem_RegisterDefine(const char *  name, const char *  value, struct __eCNameSpace__eC__types__Instance * module, int declMode);

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

static struct __eCNameSpace__eC__types__Class * __eCClass___eCNameSpace__eC__files__LoggingMode;

static struct __eCNameSpace__eC__types__Class * __eCClass___eCNameSpace__eC__files__ErrorLevel;

static struct __eCNameSpace__eC__types__Class * __eCClass___eCNameSpace__eC__files__ErrorCode;

static struct __eCNameSpace__eC__types__Class * __eCClass___eCNameSpace__eC__files__SysErrorCode;

static struct __eCNameSpace__eC__types__Class * __eCClass___eCNameSpace__eC__files__GuiErrorCode;

static struct __eCNameSpace__eC__types__Class * __eCClass___eCNameSpace__eC__files__MoveFileOptions;

static struct __eCNameSpace__eC__types__Class * __eCClass___eCNameSpace__eC__files__System;

extern struct __eCNameSpace__eC__types__Class * __eCClass___eCNameSpace__eC__types__Array_TPL_String_;

extern struct __eCNameSpace__eC__types__Class * __eCClass___eCNameSpace__eC__types__Array_TPL_eC__containers__Array_TPL_String___;

extern struct __eCNameSpace__eC__types__Class * __eCClass___eCNameSpace__eC__files__File;

extern struct __eCNameSpace__eC__types__Class * __eCClass___eCNameSpace__eC__types__Array;

extern struct __eCNameSpace__eC__types__Class * __eCClass___eCNameSpace__eC__types__Module;

extern struct __eCNameSpace__eC__types__Class * __eCClass___eCNameSpace__eC__containers__BuiltInContainer;

extern struct __eCNameSpace__eC__types__Class * __eCClass_String;

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

void __eCNameSpace__eC__files__Log(const char * text)
{
switch(__eCNameSpace__eC__files__globalSystem.errorLoggingMode)
{
case 3:
case 1:
fputs(text, eC_stdout());
fflush(eC_stdout());
break;
case 2:
fputs(text, eC_stderr());
fflush(eC_stderr());
break;
case 4:
{
struct __eCNameSpace__eC__types__Instance * f;

if((f = __eCNameSpace__eC__files__FileOpen(__eCNameSpace__eC__files__globalSystem.logFile, 3)))
{
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, text) : (unsigned int)1;
}));
(__eCNameSpace__eC__types__eInstance_DecRef(f), f = 0);
}
break;
}
case 6:
case 5:
strcat(__eCNameSpace__eC__files__globalSystem.errorBuffer, text);
break;
}
}

void __eCNameSpace__eC__files__LogErrorCode(unsigned int errorCode, const char * details)
{
if(((int)((errorCode & 0x3000) >> 12)) <= __eCNameSpace__eC__files__globalSystem.errorLevel)
{
int cat = (((unsigned int)((errorCode & 0xFFF) >> 0)) & 0xF00) >> 8;
int code = ((unsigned int)((errorCode & 0xFFF) >> 0)) & 0xFF;

if(details)
__eCNameSpace__eC__files__Logf("System Error [%d]: %s (%s).\n", ((int)((errorCode & 0x3000) >> 12)), (((const char **)__extension__ ({
char * __ecTemp1 = (char *)((((struct __eCNameSpace__eC__types__Instance **)((struct __eCNameSpace__eC__types__Array *)(((char *)__eCNameSpace__eC__files__errorMessages + 0 + sizeof(struct __eCNameSpace__eC__types__Instance))))->array))[cat]);

((struct __eCNameSpace__eC__types__Array *)(__ecTemp1 + 0 + sizeof(struct __eCNameSpace__eC__types__Instance)));
})->array))[code], details);
else
__eCNameSpace__eC__files__Logf("System Error [%d]: %s.\n", ((int)((errorCode & 0x3000) >> 12)), (((const char **)__extension__ ({
char * __ecTemp1 = (char *)((((struct __eCNameSpace__eC__types__Instance **)((struct __eCNameSpace__eC__types__Array *)(((char *)__eCNameSpace__eC__files__errorMessages + 0 + sizeof(struct __eCNameSpace__eC__types__Instance))))->array))[cat]);

((struct __eCNameSpace__eC__types__Array *)(__ecTemp1 + 0 + sizeof(struct __eCNameSpace__eC__types__Instance)));
})->array))[code]);
}
__eCNameSpace__eC__files__globalSystem.lastErrorCode = errorCode;
}

void __eCCreateModuleInstances_System()
{
(__eCNameSpace__eC__files__sysErrorMessages = __eCNameSpace__eC__types__eInstance_New(__eCClass___eCNameSpace__eC__types__Array_TPL_String_), __eCProp___eCNameSpace__eC__containers__Container_Set_copySrc(__eCNameSpace__eC__files__sysErrorMessages, ((struct __eCNameSpace__eC__types__Instance *)&__extension__ (struct __eCNameSpace__eC__containers__BuiltInContainer)
{
__eCClass___eCNameSpace__eC__containers__BuiltInContainer->_vTbl, __eCClass___eCNameSpace__eC__containers__BuiltInContainer, 0, __extension__ (const char * [])
{
__eCNameSpace__eC__i18n__GetTranslatedString("ecrt", "No error", (((void *)0))), __eCNameSpace__eC__i18n__GetTranslatedString("ecrt", "Memory allocation failed", (((void *)0))), __eCNameSpace__eC__i18n__GetTranslatedString("ecrt", "Inexistant string identifier specified", (((void *)0))), __eCNameSpace__eC__i18n__GetTranslatedString("ecrt", "Identic string identifier already exists", (((void *)0))), __eCNameSpace__eC__i18n__GetTranslatedString("ecrt", "Shared library loading failed", (((void *)0))), __eCNameSpace__eC__i18n__GetTranslatedString("ecrt", "File not found", (((void *)0))), __eCNameSpace__eC__i18n__GetTranslatedString("ecrt", "Couldn't write to file", (((void *)0)))
}, 7, __eCClass_String
})));
__eCNameSpace__eC__types__eInstance_IncRef(__eCNameSpace__eC__files__sysErrorMessages);
(__eCNameSpace__eC__files__guiErrorMessages = __eCNameSpace__eC__types__eInstance_New(__eCClass___eCNameSpace__eC__types__Array_TPL_String_), __eCProp___eCNameSpace__eC__containers__Container_Set_copySrc(__eCNameSpace__eC__files__guiErrorMessages, ((struct __eCNameSpace__eC__types__Instance *)&__extension__ (struct __eCNameSpace__eC__containers__BuiltInContainer)
{
__eCClass___eCNameSpace__eC__containers__BuiltInContainer->_vTbl, __eCClass___eCNameSpace__eC__containers__BuiltInContainer, 0, __extension__ (const char * [])
{
__eCNameSpace__eC__i18n__GetTranslatedString("ecrt", "No error", (((void *)0))), __eCNameSpace__eC__i18n__GetTranslatedString("ecrt", "Graphics driver not supported by any user interface system", (((void *)0))), __eCNameSpace__eC__i18n__GetTranslatedString("ecrt", "Window creation failed", (((void *)0))), __eCNameSpace__eC__i18n__GetTranslatedString("ecrt", "Window graphics loading failed", (((void *)0))), __eCNameSpace__eC__i18n__GetTranslatedString("ecrt", "Driver/Mode switch failed", (((void *)0)))
}, 5, __eCClass_String
})));
__eCNameSpace__eC__types__eInstance_IncRef(__eCNameSpace__eC__files__guiErrorMessages);
(__eCNameSpace__eC__files__errorMessages = __eCNameSpace__eC__types__eInstance_New(__eCClass___eCNameSpace__eC__types__Array_TPL_eC__containers__Array_TPL_String___), __eCProp___eCNameSpace__eC__containers__Container_Set_copySrc(__eCNameSpace__eC__files__errorMessages, ((struct __eCNameSpace__eC__types__Instance *)&__extension__ (struct __eCNameSpace__eC__containers__BuiltInContainer)
{
__eCClass___eCNameSpace__eC__containers__BuiltInContainer->_vTbl, __eCClass___eCNameSpace__eC__containers__BuiltInContainer, 0, __extension__ (struct __eCNameSpace__eC__types__Instance * [])
{
__eCNameSpace__eC__files__sysErrorMessages, __eCNameSpace__eC__files__guiErrorMessages
}, 2, __eCClass___eCNameSpace__eC__types__Array_TPL_String_
})));
__eCNameSpace__eC__types__eInstance_IncRef(__eCNameSpace__eC__files__errorMessages);
}

void __eCUnregisterModule_System(struct __eCNameSpace__eC__types__Instance * module)
{

}

void __eCRegisterModule_System(struct __eCNameSpace__eC__types__Instance * module)
{
struct __eCNameSpace__eC__types__Class __attribute__((unused)) * class;

class = __eCNameSpace__eC__types__eSystem_RegisterClass(4, "ecrt::files::LoggingMode", 0, 0, 0, (void *)0, (void *)0, module, 1, 1);
if(((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application == ((struct __eCNameSpace__eC__types__Module *)(((char *)__thisModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->application && class)
__eCClass___eCNameSpace__eC__files__LoggingMode = class;
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "noLogging", 0);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "stdOut", 1);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "stdErr", 2);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "debug", 3);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "logFile", 4);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "msgBox", 5);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "buffer", 6);
class = __eCNameSpace__eC__types__eSystem_RegisterClass(4, "ecrt::files::ErrorLevel", 0, 0, 0, (void *)0, (void *)0, module, 1, 1);
if(((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application == ((struct __eCNameSpace__eC__types__Module *)(((char *)__thisModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->application && class)
__eCClass___eCNameSpace__eC__files__ErrorLevel = class;
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "veryFatal", 0);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "fatal", 1);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "major", 2);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "minor", 3);
__eCNameSpace__eC__types__eSystem_RegisterDefine("ecrt::files::AllErrors", "ecrt::files::ErrorLevel::minor", module, 1);
class = __eCNameSpace__eC__types__eSystem_RegisterClass(2, "eC::files::ErrorCode", 0, 0, 0, (void *)0, (void *)0, module, 1, 1);
if(((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application == ((struct __eCNameSpace__eC__types__Module *)(((char *)__thisModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->application && class)
__eCClass___eCNameSpace__eC__files__ErrorCode = class;
__eCNameSpace__eC__types__eClass_AddBitMember(class, "level", "eC::files::ErrorLevel", 2, 12, 1);
__eCNameSpace__eC__types__eClass_AddBitMember(class, "code", "uint", 12, 0, 1);
class = __eCNameSpace__eC__types__eSystem_RegisterClass(4, "eC::files::SysErrorCode", "eC::files::ErrorCode", 0, 0, (void *)0, (void *)0, module, 1, 1);
if(((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application == ((struct __eCNameSpace__eC__types__Module *)(((char *)__thisModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->application && class)
__eCClass___eCNameSpace__eC__files__SysErrorCode = class;
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "allocationFailed", 4097);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "nameInexistant", 4098);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "nameExists", 4099);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "missingLibrary", 4100);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "fileNotFound", 12293);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "writeFailed", 8198);
class = __eCNameSpace__eC__types__eSystem_RegisterClass(4, "eC::files::GuiErrorCode", "eC::files::ErrorCode", 0, 0, (void *)0, (void *)0, module, 1, 1);
if(((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application == ((struct __eCNameSpace__eC__types__Module *)(((char *)__thisModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->application && class)
__eCClass___eCNameSpace__eC__files__GuiErrorCode = class;
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "driverNotSupported", 257);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "windowCreationFailed", 258);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "graphicsLoadingFailed", 259);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "modeSwitchFailed", 260);
__eCNameSpace__eC__types__eSystem_RegisterFunction("eC::files::MoveFile", "bool eC::files::MoveFile(const char * source, const char * dest)", __eCNameSpace__eC__files__MoveFile, module, 1);
class = __eCNameSpace__eC__types__eSystem_RegisterClass(2, "eC::files::MoveFileOptions", "uint", 0, 0, (void *)0, (void *)0, module, 1, 1);
if(((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application == ((struct __eCNameSpace__eC__types__Module *)(((char *)__thisModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->application && class)
__eCClass___eCNameSpace__eC__files__MoveFileOptions = class;
__eCNameSpace__eC__types__eClass_AddBitMember(class, "overwrite", "bool", 1, 0, 1);
__eCNameSpace__eC__types__eClass_AddBitMember(class, "sync", "bool", 1, 1, 1);
__eCNameSpace__eC__types__eSystem_RegisterFunction("eC::files::MoveFileEx", "bool eC::files::MoveFileEx(const char * source, const char * dest, eC::files::MoveFileOptions options)", __eCNameSpace__eC__files__MoveFileEx, module, 1);
__eCNameSpace__eC__types__eSystem_RegisterFunction("eC::files::RenameFile", "bool eC::files::RenameFile(const char * oldName, const char * newName)", __eCNameSpace__eC__files__RenameFile, module, 1);
__eCNameSpace__eC__types__eSystem_RegisterFunction("eC::files::DeleteFile", "bool eC::files::DeleteFile(const char * fileName)", __eCNameSpace__eC__files__DeleteFile, module, 1);
__eCNameSpace__eC__types__eSystem_RegisterFunction("eC::files::MakeDir", "bool eC::files::MakeDir(const char * path)", __eCNameSpace__eC__files__MakeDir, module, 1);
__eCNameSpace__eC__types__eSystem_RegisterFunction("eC::files::RemoveDir", "bool eC::files::RemoveDir(const char * path)", __eCNameSpace__eC__files__RemoveDir, module, 1);
__eCNameSpace__eC__types__eSystem_RegisterFunction("eC::files::GetWorkingDir", "char * eC::files::GetWorkingDir(char * buf, int size)", __eCNameSpace__eC__files__GetWorkingDir, module, 1);
__eCNameSpace__eC__types__eSystem_RegisterFunction("eC::files::ChangeWorkingDir", "bool eC::files::ChangeWorkingDir(const char * buf)", __eCNameSpace__eC__files__ChangeWorkingDir, module, 1);
__eCNameSpace__eC__types__eSystem_RegisterFunction("eC::files::GetEnvironment", "char * eC::files::GetEnvironment(const char * envName, char * envValue, int max)", __eCNameSpace__eC__files__GetEnvironment, module, 1);
__eCNameSpace__eC__types__eSystem_RegisterFunction("eC::files::SetEnvironment", "void eC::files::SetEnvironment(const char * envName, const char * envValue)", __eCNameSpace__eC__files__SetEnvironment, module, 1);
__eCNameSpace__eC__types__eSystem_RegisterFunction("eC::files::UnsetEnvironment", "void eC::files::UnsetEnvironment(const char * envName)", __eCNameSpace__eC__files__UnsetEnvironment, module, 1);
__eCNameSpace__eC__types__eSystem_RegisterFunction("eC::files::Execute", "bool eC::files::Execute(const char * command, ...)", __eCNameSpace__eC__files__Execute, module, 1);
__eCNameSpace__eC__types__eSystem_RegisterFunction("eC::files::ExecuteWait", "bool eC::files::ExecuteWait(const char * command, ...)", __eCNameSpace__eC__files__ExecuteWait, module, 1);
__eCNameSpace__eC__types__eSystem_RegisterFunction("eC::files::ExecuteEnv", "bool eC::files::ExecuteEnv(const char * env, const char * command, ...)", __eCNameSpace__eC__files__ExecuteEnv, module, 1);
__eCNameSpace__eC__types__eSystem_RegisterFunction("eC::files::ShellOpen", "bool eC::files::ShellOpen(const char * fileName, ...)", __eCNameSpace__eC__files__ShellOpen, module, 1);
__eCNameSpace__eC__types__eSystem_RegisterFunction("eC::files::GetFreeSpace", "void eC::files::GetFreeSpace(const char * path, eC::files::FileSize64 * size)", __eCNameSpace__eC__files__GetFreeSpace, module, 1);
__eCNameSpace__eC__types__eSystem_RegisterFunction("eC::files::Logf", "void eC::files::Logf(const char * format, ...)", __eCNameSpace__eC__files__Logf, module, 1);
__eCNameSpace__eC__types__eSystem_RegisterFunction("eC::files::Log", "void eC::files::Log(const char * text)", __eCNameSpace__eC__files__Log, module, 1);
__eCNameSpace__eC__types__eSystem_RegisterFunction("eC::files::DumpErrors", "void eC::files::DumpErrors(bool display)", __eCNameSpace__eC__files__DumpErrors, module, 1);
__eCNameSpace__eC__types__eSystem_RegisterFunction("eC::files::LogErrorCode", "void eC::files::LogErrorCode(eC::files::ErrorCode errorCode, const char * details)", __eCNameSpace__eC__files__LogErrorCode, module, 1);
__eCNameSpace__eC__types__eSystem_RegisterFunction("eC::files::GetLastErrorCode", "uint eC::files::GetLastErrorCode(void)", __eCNameSpace__eC__files__GetLastErrorCode, module, 1);
__eCNameSpace__eC__types__eSystem_RegisterFunction("eC::files::ResetError", "void eC::files::ResetError(void)", __eCNameSpace__eC__files__ResetError, module, 1);
__eCNameSpace__eC__types__eSystem_RegisterFunction("eC::files::SetErrorLevel", "void eC::files::SetErrorLevel(eC::files::ErrorLevel level)", __eCNameSpace__eC__files__SetErrorLevel, module, 1);
__eCNameSpace__eC__types__eSystem_RegisterFunction("eC::files::SetLoggingMode", "void eC::files::SetLoggingMode(eC::files::LoggingMode mode, void * where)", __eCNameSpace__eC__files__SetLoggingMode, module, 1);
class = __eCNameSpace__eC__types__eSystem_RegisterClass(1, "eC::files::System", 0, sizeof(struct __eCNameSpace__eC__files__System), 0, (void *)0, (void *)0, module, 2, 1);
if(((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application == ((struct __eCNameSpace__eC__types__Module *)(((char *)__thisModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->application && class)
__eCClass___eCNameSpace__eC__files__System = class;
__eCNameSpace__eC__types__eClass_AddDataMember(class, "errorLoggingMode", "eC::files::LoggingMode", 4, 4, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "errorBuffer", "char *", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "errorBufferSize", "int", 4, 4, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "logFile", "char[MAX_LOCATION]", 797, 1, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "lastErrorCode", "eC::files::ErrorCode", 4, 4, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "errorLevel", "eC::files::ErrorLevel", 4, 4, 1);
__eCNameSpace__eC__types__eSystem_RegisterFunction("eC::files::debugBreakpoint", "void eC::files::debugBreakpoint(void)", __eCNameSpace__eC__files__debugBreakpoint, module, 1);
}

