/* Code generated from eC source file: DualPipe.ec */
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

typedef struct _DualPipe _DualPipe;

void DualPipe_Destructor(_DualPipe * dp);

void DualPipe_CloseInput(_DualPipe * dp);

void DualPipe_CloseOutput(_DualPipe * dp);

size_t DualPipe_Read(_DualPipe * dp, unsigned char * buffer, size_t size, size_t count);

size_t DualPipe_Write(_DualPipe * dp, const unsigned char * buffer, size_t size, size_t count);

unsigned int DualPipe_Getc(_DualPipe * dp, char * ch);

unsigned int DualPipe_Putc(_DualPipe * dp, char ch);

unsigned int DualPipe_Puts(_DualPipe * dp, const char * string);

unsigned int DualPipe_Seek(_DualPipe * dp, long long pos, int mode);

uint64 DualPipe_Tell(_DualPipe * dp);

unsigned int DualPipe_Eof(_DualPipe * dp);

uint64 DualPipe_GetSize(_DualPipe * dp);

unsigned int DualPipe_Peek(_DualPipe * dp);

void DualPipe_Terminate(_DualPipe * dp);

int DualPipe_GetExitCode(_DualPipe * dp);

int DualPipe_GetProcessID(_DualPipe * dp);

void DualPipe_Wait(_DualPipe * dp);

_DualPipe * _DualPipeOpen(unsigned int mode, const char * commandLine, const char * env, void ** inputPtr, void ** outputPtr);

struct __eCNameSpace__eC__files__DualPipe
{
void * dp;
} eC_gcc_struct;

extern struct __eCNameSpace__eC__types__Property * __eCProp___eCNameSpace__eC__files__File_input;

extern struct __eCNameSpace__eC__types__Property * __eCProp___eCNameSpace__eC__files__File_output;

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

extern int vsnprintf(char * , size_t, const char * , __builtin_va_list);

struct __eCNameSpace__eC__types__BitMember;

struct __eCNameSpace__eC__types__GlobalFunction;

struct __eCNameSpace__eC__types__Class;

struct __eCNameSpace__eC__types__Instance
{
void * *  _vTbl;
struct __eCNameSpace__eC__types__Class * _class;
int _refCount;
} eC_gcc_struct;

extern long long __eCNameSpace__eC__types__eClass_GetProperty(struct __eCNameSpace__eC__types__Class * _class, const char *  name);

extern void __eCNameSpace__eC__types__eClass_SetProperty(struct __eCNameSpace__eC__types__Class * _class, const char *  name, long long value);

extern struct __eCNameSpace__eC__types__BitMember * __eCNameSpace__eC__types__eClass_AddBitMember(struct __eCNameSpace__eC__types__Class * _class, const char *  name, const char *  type, int bitSize, int bitPos, int declMode);

extern void *  __eCNameSpace__eC__types__eInstance_New(struct __eCNameSpace__eC__types__Class * _class);

extern void __eCNameSpace__eC__types__eInstance_SetMethod(struct __eCNameSpace__eC__types__Instance * instance, const char *  name, void *  function);

extern void __eCNameSpace__eC__types__eInstance_IncRef(struct __eCNameSpace__eC__types__Instance * instance);

void *  __eCProp___eCNameSpace__eC__files__File_Get_input(struct __eCNameSpace__eC__types__Instance * this);

void __eCProp___eCNameSpace__eC__files__File_Set_input(struct __eCNameSpace__eC__types__Instance * this, void *  value);

extern int __eCVMethodID___eCNameSpace__eC__files__File_CloseInput;

void *  __eCProp___eCNameSpace__eC__files__File_Get_output(struct __eCNameSpace__eC__types__Instance * this);

void __eCProp___eCNameSpace__eC__files__File_Set_output(struct __eCNameSpace__eC__types__Instance * this, void *  value);

extern int __eCVMethodID___eCNameSpace__eC__files__File_CloseOutput;

extern int __eCVMethodID___eCNameSpace__eC__files__File_Write;

extern int __eCVMethodID___eCNameSpace__eC__files__File_Getc;

extern int __eCVMethodID___eCNameSpace__eC__files__File_Putc;

extern int __eCVMethodID___eCNameSpace__eC__files__File_Puts;

unsigned int __eCMethod___eCNameSpace__eC__files__File_Flush(struct __eCNameSpace__eC__types__Instance * this);

extern int __eCVMethodID___eCNameSpace__eC__files__File_Seek;

extern int __eCVMethodID___eCNameSpace__eC__files__File_Tell;

extern int __eCVMethodID___eCNameSpace__eC__files__File_GetSize;

extern int __eCVMethodID___eCNameSpace__eC__files__File_Eof;

struct __eCNameSpace__eC__files__BinaryTree;

struct __eCNameSpace__eC__files__BinaryTree
{
struct __eCNameSpace__eC__containers__BTNode * root;
int count;
int (*  CompareKey)(struct __eCNameSpace__eC__files__BinaryTree * tree, uintptr_t a, uintptr_t b);
void (*  FreeKey)(void *  key);
} eC_gcc_struct;

struct __eCNameSpace__eC__types__Instance *  __eCNameSpace__eC__files__DualPipeOpen(unsigned int mode, const char *  commandLine);

struct __eCNameSpace__eC__types__Instance * __eCNameSpace__eC__files__DualPipeOpenf(unsigned int mode, const char * command, ...)
{
char commandLine[1025];
va_list args;

__builtin_va_start(args, command);
vsnprintf(commandLine, sizeof (commandLine), command, args);
commandLine[sizeof (commandLine) - 1] = 0;
__builtin_va_end(args);
return __eCNameSpace__eC__files__DualPipeOpen(mode, commandLine);
}

struct __eCNameSpace__eC__types__Instance *  __eCNameSpace__eC__files__DualPipeOpenEnv(unsigned int mode, const char *  env, const char *  commandLine);

struct __eCNameSpace__eC__types__Instance * __eCNameSpace__eC__files__DualPipeOpenEnvf(unsigned int mode, const char * env, const char * command, ...)
{
char commandLine[1025];
va_list args;

__builtin_va_start(args, command);
vsnprintf(commandLine, sizeof (commandLine), command, args);
commandLine[sizeof (commandLine) - 1] = 0;
__builtin_va_end(args);
return __eCNameSpace__eC__files__DualPipeOpenEnv(mode, env, commandLine);
}

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

struct __eCNameSpace__eC__types__Method;

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

struct __eCNameSpace__eC__types__Property;

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

static struct __eCNameSpace__eC__types__Class * __eCClass___eCNameSpace__eC__files__PipeOpenMode;

static struct __eCNameSpace__eC__types__Class * __eCClass___eCNameSpace__eC__files__DualPipe;

extern struct __eCNameSpace__eC__types__Class * __eCClass___eCNameSpace__eC__files__File;

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

void __eCDestructor___eCNameSpace__eC__files__DualPipe(struct __eCNameSpace__eC__types__Instance * this)
{
__attribute__((unused)) struct __eCNameSpace__eC__files__DualPipe * __eCPointer___eCNameSpace__eC__files__DualPipe = (struct __eCNameSpace__eC__files__DualPipe *)(this ? (((char *)this) + __eCClass___eCNameSpace__eC__files__DualPipe->offset) : 0);

{
DualPipe_Destructor(__eCPointer___eCNameSpace__eC__files__DualPipe->dp);
}
}

size_t __eCMethod___eCNameSpace__eC__files__DualPipe_Read(struct __eCNameSpace__eC__types__Instance * this, unsigned char * buffer, size_t size, size_t count)
{
__attribute__((unused)) struct __eCNameSpace__eC__files__DualPipe * __eCPointer___eCNameSpace__eC__files__DualPipe = (struct __eCNameSpace__eC__files__DualPipe *)(this ? (((char *)this) + __eCClass___eCNameSpace__eC__files__DualPipe->offset) : 0);

return DualPipe_Read(__eCPointer___eCNameSpace__eC__files__DualPipe->dp, buffer, size, count);
}

unsigned int __eCMethod___eCNameSpace__eC__files__DualPipe_Eof(struct __eCNameSpace__eC__types__Instance * this)
{
__attribute__((unused)) struct __eCNameSpace__eC__files__DualPipe * __eCPointer___eCNameSpace__eC__files__DualPipe = (struct __eCNameSpace__eC__files__DualPipe *)(this ? (((char *)this) + __eCClass___eCNameSpace__eC__files__DualPipe->offset) : 0);

return DualPipe_Eof(__eCPointer___eCNameSpace__eC__files__DualPipe->dp);
}

unsigned int __eCMethod___eCNameSpace__eC__files__DualPipe_Peek(struct __eCNameSpace__eC__types__Instance * this)
{
__attribute__((unused)) struct __eCNameSpace__eC__files__DualPipe * __eCPointer___eCNameSpace__eC__files__DualPipe = (struct __eCNameSpace__eC__files__DualPipe *)(this ? (((char *)this) + __eCClass___eCNameSpace__eC__files__DualPipe->offset) : 0);

return DualPipe_Peek(__eCPointer___eCNameSpace__eC__files__DualPipe->dp);
}

void __eCMethod___eCNameSpace__eC__files__DualPipe_Terminate(struct __eCNameSpace__eC__types__Instance * this)
{
__attribute__((unused)) struct __eCNameSpace__eC__files__DualPipe * __eCPointer___eCNameSpace__eC__files__DualPipe = (struct __eCNameSpace__eC__files__DualPipe *)(this ? (((char *)this) + __eCClass___eCNameSpace__eC__files__DualPipe->offset) : 0);

DualPipe_Terminate(__eCPointer___eCNameSpace__eC__files__DualPipe->dp);
}

int __eCMethod___eCNameSpace__eC__files__DualPipe_GetExitCode(struct __eCNameSpace__eC__types__Instance * this)
{
__attribute__((unused)) struct __eCNameSpace__eC__files__DualPipe * __eCPointer___eCNameSpace__eC__files__DualPipe = (struct __eCNameSpace__eC__files__DualPipe *)(this ? (((char *)this) + __eCClass___eCNameSpace__eC__files__DualPipe->offset) : 0);

return DualPipe_GetExitCode(__eCPointer___eCNameSpace__eC__files__DualPipe->dp);
}

int __eCMethod___eCNameSpace__eC__files__DualPipe_GetProcessID(struct __eCNameSpace__eC__types__Instance * this)
{
__attribute__((unused)) struct __eCNameSpace__eC__files__DualPipe * __eCPointer___eCNameSpace__eC__files__DualPipe = (struct __eCNameSpace__eC__files__DualPipe *)(this ? (((char *)this) + __eCClass___eCNameSpace__eC__files__DualPipe->offset) : 0);

return DualPipe_GetProcessID(__eCPointer___eCNameSpace__eC__files__DualPipe->dp);
}

void __eCMethod___eCNameSpace__eC__files__DualPipe_Wait(struct __eCNameSpace__eC__types__Instance * this)
{
__attribute__((unused)) struct __eCNameSpace__eC__files__DualPipe * __eCPointer___eCNameSpace__eC__files__DualPipe = (struct __eCNameSpace__eC__files__DualPipe *)(this ? (((char *)this) + __eCClass___eCNameSpace__eC__files__DualPipe->offset) : 0);

DualPipe_Wait(__eCPointer___eCNameSpace__eC__files__DualPipe->dp);
}

struct __eCNameSpace__eC__types__Instance * __eCNameSpace__eC__files__DualPipeOpen(unsigned int mode, const char * commandLine)
{
void * input, * output;
void * f = _DualPipeOpen(mode, commandLine, (((void *)0)), &input, &output);

if(f)
return __extension__ ({
struct __eCNameSpace__eC__types__Instance * __eCInstance1 = __eCNameSpace__eC__types__eInstance_New(__eCClass___eCNameSpace__eC__files__DualPipe);

((struct __eCNameSpace__eC__files__DualPipe *)(((char *)__eCInstance1 + __eCClass___eCNameSpace__eC__files__DualPipe->offset)))->dp = f, __eCProp___eCNameSpace__eC__files__File_Set_input(__eCInstance1, input), __eCProp___eCNameSpace__eC__files__File_Set_output(__eCInstance1, output), __eCInstance1;
});
return (((void *)0));
}

struct __eCNameSpace__eC__types__Instance * __eCNameSpace__eC__files__DualPipeOpenEnv(unsigned int mode, const char * env, const char * commandLine)
{
void * input, * output;
void * f = _DualPipeOpen(mode, commandLine, env, &input, &output);

if(f)
return __extension__ ({
struct __eCNameSpace__eC__types__Instance * __eCInstance1 = __eCNameSpace__eC__types__eInstance_New(__eCClass___eCNameSpace__eC__files__DualPipe);

((struct __eCNameSpace__eC__files__DualPipe *)(((char *)__eCInstance1 + __eCClass___eCNameSpace__eC__files__DualPipe->offset)))->dp = f, __eCProp___eCNameSpace__eC__files__File_Set_input(__eCInstance1, input), __eCProp___eCNameSpace__eC__files__File_Set_output(__eCInstance1, output), __eCInstance1;
});
return (((void *)0));
}

void __eCMethod___eCNameSpace__eC__files__DualPipe_CloseInput(struct __eCNameSpace__eC__types__Instance * this)
{
__attribute__((unused)) struct __eCNameSpace__eC__files__DualPipe * __eCPointer___eCNameSpace__eC__files__DualPipe = (struct __eCNameSpace__eC__files__DualPipe *)(this ? (((char *)this) + __eCClass___eCNameSpace__eC__files__DualPipe->offset) : 0);

(__eCProp___eCNameSpace__eC__files__File_Get_input(this) != (((void *)0))) ? (__extension__ ({
void (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *);

__internal_VirtualMethod = ((void (*)(struct __eCNameSpace__eC__types__Instance *))__eCClass___eCNameSpace__eC__files__File->_vTbl[__eCVMethodID___eCNameSpace__eC__files__File_CloseInput]);
__internal_VirtualMethod ? __internal_VirtualMethod(this) : (void)1;
})) : DualPipe_CloseInput(__eCPointer___eCNameSpace__eC__files__DualPipe->dp);
}

void __eCMethod___eCNameSpace__eC__files__DualPipe_CloseOutput(struct __eCNameSpace__eC__types__Instance * this)
{
__attribute__((unused)) struct __eCNameSpace__eC__files__DualPipe * __eCPointer___eCNameSpace__eC__files__DualPipe = (struct __eCNameSpace__eC__files__DualPipe *)(this ? (((char *)this) + __eCClass___eCNameSpace__eC__files__DualPipe->offset) : 0);

(__eCProp___eCNameSpace__eC__files__File_Get_output(this) != (((void *)0))) ? (__extension__ ({
void (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *);

__internal_VirtualMethod = ((void (*)(struct __eCNameSpace__eC__types__Instance *))__eCClass___eCNameSpace__eC__files__File->_vTbl[__eCVMethodID___eCNameSpace__eC__files__File_CloseOutput]);
__internal_VirtualMethod ? __internal_VirtualMethod(this) : (void)1;
})) : DualPipe_CloseOutput(__eCPointer___eCNameSpace__eC__files__DualPipe->dp);
}

size_t __eCMethod___eCNameSpace__eC__files__DualPipe_Write(struct __eCNameSpace__eC__types__Instance * this, const unsigned char * buffer, size_t size, size_t count)
{
__attribute__((unused)) struct __eCNameSpace__eC__files__DualPipe * __eCPointer___eCNameSpace__eC__files__DualPipe = (struct __eCNameSpace__eC__files__DualPipe *)(this ? (((char *)this) + __eCClass___eCNameSpace__eC__files__DualPipe->offset) : 0);

return __eCProp___eCNameSpace__eC__files__File_Get_output(this) ? (__extension__ ({
size_t (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const void *  buffer, size_t size, size_t count);

__internal_VirtualMethod = ((size_t (*)(struct __eCNameSpace__eC__types__Instance *, const void *  buffer, size_t size, size_t count))__eCClass___eCNameSpace__eC__files__File->_vTbl[__eCVMethodID___eCNameSpace__eC__files__File_Write]);
__internal_VirtualMethod ? __internal_VirtualMethod(this, buffer, size, count) : (size_t)1;
})) : DualPipe_Write(__eCPointer___eCNameSpace__eC__files__DualPipe->dp, buffer, size, count);
}

unsigned int __eCMethod___eCNameSpace__eC__files__DualPipe_Getc(struct __eCNameSpace__eC__types__Instance * this, char * ch)
{
__attribute__((unused)) struct __eCNameSpace__eC__files__DualPipe * __eCPointer___eCNameSpace__eC__files__DualPipe = (struct __eCNameSpace__eC__files__DualPipe *)(this ? (((char *)this) + __eCClass___eCNameSpace__eC__files__DualPipe->offset) : 0);

return __eCProp___eCNameSpace__eC__files__File_Get_input(this) ? (__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, char *  ch);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, char *  ch))__eCClass___eCNameSpace__eC__files__File->_vTbl[__eCVMethodID___eCNameSpace__eC__files__File_Getc]);
__internal_VirtualMethod ? __internal_VirtualMethod(this, ch) : (unsigned int)1;
})) : DualPipe_Getc(__eCPointer___eCNameSpace__eC__files__DualPipe->dp, ch);
}

unsigned int __eCMethod___eCNameSpace__eC__files__DualPipe_Putc(struct __eCNameSpace__eC__types__Instance * this, char ch)
{
__attribute__((unused)) struct __eCNameSpace__eC__files__DualPipe * __eCPointer___eCNameSpace__eC__files__DualPipe = (struct __eCNameSpace__eC__files__DualPipe *)(this ? (((char *)this) + __eCClass___eCNameSpace__eC__files__DualPipe->offset) : 0);

return __eCProp___eCNameSpace__eC__files__File_Get_output(this) ? (__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, char ch);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, char ch))__eCClass___eCNameSpace__eC__files__File->_vTbl[__eCVMethodID___eCNameSpace__eC__files__File_Putc]);
__internal_VirtualMethod ? __internal_VirtualMethod(this, ch) : (unsigned int)1;
})) : DualPipe_Putc(__eCPointer___eCNameSpace__eC__files__DualPipe->dp, ch);
}

unsigned int __eCMethod___eCNameSpace__eC__files__DualPipe_Puts(struct __eCNameSpace__eC__types__Instance * this, const char * string)
{
__attribute__((unused)) struct __eCNameSpace__eC__files__DualPipe * __eCPointer___eCNameSpace__eC__files__DualPipe = (struct __eCNameSpace__eC__files__DualPipe *)(this ? (((char *)this) + __eCClass___eCNameSpace__eC__files__DualPipe->offset) : 0);

return __eCProp___eCNameSpace__eC__files__File_Get_output(this) ? ((__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__eCClass___eCNameSpace__eC__files__File->_vTbl[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(this, string) : (unsigned int)1;
})), __eCMethod___eCNameSpace__eC__files__File_Flush(this)) : DualPipe_Puts(__eCPointer___eCNameSpace__eC__files__DualPipe->dp, string);
}

unsigned int __eCMethod___eCNameSpace__eC__files__DualPipe_Seek(struct __eCNameSpace__eC__types__Instance * this, long long pos, int mode)
{
__attribute__((unused)) struct __eCNameSpace__eC__files__DualPipe * __eCPointer___eCNameSpace__eC__files__DualPipe = (struct __eCNameSpace__eC__files__DualPipe *)(this ? (((char *)this) + __eCClass___eCNameSpace__eC__files__DualPipe->offset) : 0);

return (__eCProp___eCNameSpace__eC__files__File_Get_input(this) || __eCProp___eCNameSpace__eC__files__File_Get_output(this)) ? (__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, long long pos, int mode);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, long long pos, int mode))__eCClass___eCNameSpace__eC__files__File->_vTbl[__eCVMethodID___eCNameSpace__eC__files__File_Seek]);
__internal_VirtualMethod ? __internal_VirtualMethod(this, pos, mode) : (unsigned int)1;
})) : DualPipe_Seek(__eCPointer___eCNameSpace__eC__files__DualPipe->dp, pos, mode);
}

uint64 __eCMethod___eCNameSpace__eC__files__DualPipe_Tell(struct __eCNameSpace__eC__types__Instance * this)
{
__attribute__((unused)) struct __eCNameSpace__eC__files__DualPipe * __eCPointer___eCNameSpace__eC__files__DualPipe = (struct __eCNameSpace__eC__files__DualPipe *)(this ? (((char *)this) + __eCClass___eCNameSpace__eC__files__DualPipe->offset) : 0);

return (__eCProp___eCNameSpace__eC__files__File_Get_input(this) || __eCProp___eCNameSpace__eC__files__File_Get_output(this)) ? (__extension__ ({
uint64 (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *);

__internal_VirtualMethod = ((uint64 (*)(struct __eCNameSpace__eC__types__Instance *))__eCClass___eCNameSpace__eC__files__File->_vTbl[__eCVMethodID___eCNameSpace__eC__files__File_Tell]);
__internal_VirtualMethod ? __internal_VirtualMethod(this) : (uint64)1;
})) : DualPipe_Tell(__eCPointer___eCNameSpace__eC__files__DualPipe->dp);
}

uint64 __eCMethod___eCNameSpace__eC__files__DualPipe_GetSize(struct __eCNameSpace__eC__types__Instance * this)
{
__attribute__((unused)) struct __eCNameSpace__eC__files__DualPipe * __eCPointer___eCNameSpace__eC__files__DualPipe = (struct __eCNameSpace__eC__files__DualPipe *)(this ? (((char *)this) + __eCClass___eCNameSpace__eC__files__DualPipe->offset) : 0);

return (__eCProp___eCNameSpace__eC__files__File_Get_input(this) || __eCProp___eCNameSpace__eC__files__File_Get_output(this)) ? (__extension__ ({
uint64 (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *);

__internal_VirtualMethod = ((uint64 (*)(struct __eCNameSpace__eC__types__Instance *))__eCClass___eCNameSpace__eC__files__File->_vTbl[__eCVMethodID___eCNameSpace__eC__files__File_GetSize]);
__internal_VirtualMethod ? __internal_VirtualMethod(this) : (uint64)1;
})) : DualPipe_GetSize(__eCPointer___eCNameSpace__eC__files__DualPipe->dp);
}

void __eCUnregisterModule_DualPipe(struct __eCNameSpace__eC__types__Instance * module)
{

}

unsigned int __eCMethod___eCNameSpace__eC__files__DualPipe_GetLinePeek(struct __eCNameSpace__eC__types__Instance * this, char * s, int max, int * charsRead)
{
__attribute__((unused)) struct __eCNameSpace__eC__files__DualPipe * __eCPointer___eCNameSpace__eC__files__DualPipe = (struct __eCNameSpace__eC__files__DualPipe *)(this ? (((char *)this) + __eCClass___eCNameSpace__eC__files__DualPipe->offset) : 0);
char ch = 0;
int c = 0;

while(c < max - 1 && __eCMethod___eCNameSpace__eC__files__DualPipe_Peek(this) && (__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, char *  ch);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, char *  ch))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = this;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__DualPipe->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Getc]);
__internal_VirtualMethod ? __internal_VirtualMethod(this, &ch) : (unsigned int)1;
})) && ch != '\n')
if(ch != '\r')
s[c++] = ch;
s[c] = '\0';
*charsRead = c;
return (__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = this;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__DualPipe->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Eof]);
__internal_VirtualMethod ? __internal_VirtualMethod(this) : (unsigned int)1;
})) || ch == '\n';
}

void __eCRegisterModule_DualPipe(struct __eCNameSpace__eC__types__Instance * module)
{
struct __eCNameSpace__eC__types__Class __attribute__((unused)) * class;

class = __eCNameSpace__eC__types__eSystem_RegisterClass(2, "eC::files::PipeOpenMode", 0, 0, 0, (void *)0, (void *)0, module, 1, 1);
if(((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application == ((struct __eCNameSpace__eC__types__Module *)(((char *)__thisModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->application && class)
__eCClass___eCNameSpace__eC__files__PipeOpenMode = class;
__eCNameSpace__eC__types__eClass_AddBitMember(class, "output", "bool", 1, 0, 1);
__eCNameSpace__eC__types__eClass_AddBitMember(class, "error", "bool", 1, 1, 1);
__eCNameSpace__eC__types__eClass_AddBitMember(class, "input", "bool", 1, 2, 1);
__eCNameSpace__eC__types__eClass_AddBitMember(class, "showWindow", "bool", 1, 3, 1);
class = __eCNameSpace__eC__types__eSystem_RegisterClass(0, "eC::files::DualPipe", "eC::files::File", sizeof(struct __eCNameSpace__eC__files__DualPipe), 0, (void *)0, (void *)__eCDestructor___eCNameSpace__eC__files__DualPipe, module, 1, 1);
if(((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application == ((struct __eCNameSpace__eC__types__Module *)(((char *)__thisModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->application && class)
__eCClass___eCNameSpace__eC__files__DualPipe = class;
__eCNameSpace__eC__types__eClass_AddMethod(class, "Seek", 0, __eCMethod___eCNameSpace__eC__files__DualPipe_Seek, 1);
__eCNameSpace__eC__types__eClass_AddMethod(class, "Tell", 0, __eCMethod___eCNameSpace__eC__files__DualPipe_Tell, 1);
__eCNameSpace__eC__types__eClass_AddMethod(class, "Read", 0, __eCMethod___eCNameSpace__eC__files__DualPipe_Read, 1);
__eCNameSpace__eC__types__eClass_AddMethod(class, "Write", 0, __eCMethod___eCNameSpace__eC__files__DualPipe_Write, 1);
__eCNameSpace__eC__types__eClass_AddMethod(class, "Getc", 0, __eCMethod___eCNameSpace__eC__files__DualPipe_Getc, 1);
__eCNameSpace__eC__types__eClass_AddMethod(class, "Putc", 0, __eCMethod___eCNameSpace__eC__files__DualPipe_Putc, 1);
__eCNameSpace__eC__types__eClass_AddMethod(class, "Puts", 0, __eCMethod___eCNameSpace__eC__files__DualPipe_Puts, 1);
__eCNameSpace__eC__types__eClass_AddMethod(class, "Eof", 0, __eCMethod___eCNameSpace__eC__files__DualPipe_Eof, 1);
__eCNameSpace__eC__types__eClass_AddMethod(class, "GetSize", 0, __eCMethod___eCNameSpace__eC__files__DualPipe_GetSize, 1);
__eCNameSpace__eC__types__eClass_AddMethod(class, "CloseInput", 0, __eCMethod___eCNameSpace__eC__files__DualPipe_CloseInput, 1);
__eCNameSpace__eC__types__eClass_AddMethod(class, "CloseOutput", 0, __eCMethod___eCNameSpace__eC__files__DualPipe_CloseOutput, 1);
__eCNameSpace__eC__types__eClass_AddMethod(class, "GetExitCode", "int GetExitCode()", __eCMethod___eCNameSpace__eC__files__DualPipe_GetExitCode, 1);
__eCNameSpace__eC__types__eClass_AddMethod(class, "GetLinePeek", "bool GetLinePeek(char * s, int max, int * charsRead)", __eCMethod___eCNameSpace__eC__files__DualPipe_GetLinePeek, 1);
__eCNameSpace__eC__types__eClass_AddMethod(class, "GetProcessID", "int GetProcessID()", __eCMethod___eCNameSpace__eC__files__DualPipe_GetProcessID, 1);
__eCNameSpace__eC__types__eClass_AddMethod(class, "Peek", "bool Peek()", __eCMethod___eCNameSpace__eC__files__DualPipe_Peek, 1);
__eCNameSpace__eC__types__eClass_AddMethod(class, "Terminate", "void Terminate()", __eCMethod___eCNameSpace__eC__files__DualPipe_Terminate, 1);
__eCNameSpace__eC__types__eClass_AddMethod(class, "Wait", "void Wait()", __eCMethod___eCNameSpace__eC__files__DualPipe_Wait, 1);
__eCNameSpace__eC__types__eSystem_RegisterFunction("eC::files::DualPipeOpenf", "eC::files::DualPipe eC::files::DualPipeOpenf(eC::files::PipeOpenMode mode, const char * command, ...)", __eCNameSpace__eC__files__DualPipeOpenf, module, 1);
__eCNameSpace__eC__types__eSystem_RegisterFunction("eC::files::DualPipeOpen", "eC::files::DualPipe eC::files::DualPipeOpen(eC::files::PipeOpenMode mode, const char * commandLine)", __eCNameSpace__eC__files__DualPipeOpen, module, 1);
__eCNameSpace__eC__types__eSystem_RegisterFunction("eC::files::DualPipeOpenEnvf", "eC::files::DualPipe eC::files::DualPipeOpenEnvf(eC::files::PipeOpenMode mode, const char * env, const char * command, ...)", __eCNameSpace__eC__files__DualPipeOpenEnvf, module, 1);
__eCNameSpace__eC__types__eSystem_RegisterFunction("eC::files::DualPipeOpenEnv", "eC::files::DualPipe eC::files::DualPipeOpenEnv(eC::files::PipeOpenMode mode, const char * env, const char * commandLine)", __eCNameSpace__eC__files__DualPipeOpenEnv, module, 1);
}

