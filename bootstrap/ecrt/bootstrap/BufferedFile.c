/* Code generated from eC source file: BufferedFile.ec */
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
extern struct __eCNameSpace__eC__types__Property * __eCProp___eCNameSpace__eC__files__File_buffered;

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

struct __eCNameSpace__eC__files__File
{
void *  input;
void *  output;
} eC_gcc_struct;

extern void *  memcpy(void * , const void * , size_t size);

extern size_t strlen(const char * );

struct __eCNameSpace__eC__types__GlobalFunction;

struct __eCNameSpace__eC__types__Property;

static __attribute__((unused)) struct __eCNameSpace__eC__types__Property * __eCProp___eCNameSpace__eC__files__BufferedFile_handle, * __eCPropM___eCNameSpace__eC__files__BufferedFile_handle;

static __attribute__((unused)) struct __eCNameSpace__eC__types__Property * __eCProp___eCNameSpace__eC__files__BufferedFile_bufferSize, * __eCPropM___eCNameSpace__eC__files__BufferedFile_bufferSize;

static __attribute__((unused)) struct __eCNameSpace__eC__types__Property * __eCProp___eCNameSpace__eC__files__BufferedFile_bufferRead, * __eCPropM___eCNameSpace__eC__files__BufferedFile_bufferRead;

struct __eCNameSpace__eC__types__Class;

struct __eCNameSpace__eC__types__Instance
{
void * *  _vTbl;
struct __eCNameSpace__eC__types__Class * _class;
int _refCount;
} eC_gcc_struct;

extern long long __eCNameSpace__eC__types__eClass_GetProperty(struct __eCNameSpace__eC__types__Class * _class, const char *  name);

extern void __eCNameSpace__eC__types__eClass_SetProperty(struct __eCNameSpace__eC__types__Class * _class, const char *  name, long long value);

extern struct __eCNameSpace__eC__types__Property * __eCNameSpace__eC__types__eClass_AddProperty(struct __eCNameSpace__eC__types__Class * _class, const char *  name, const char *  dataType, void *  setStmt, void *  getStmt, int declMode);

extern void *  __eCNameSpace__eC__types__eInstance_New(struct __eCNameSpace__eC__types__Class * _class);

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

struct __eCNameSpace__eC__files__BufferedFile
{
int mode;
struct __eCNameSpace__eC__types__Instance * handle;
size_t bufferSize;
size_t bufferCount;
size_t bufferPos;
uint64 pos;
unsigned char * buffer;
unsigned int eof;
size_t bufferRead;
uint64 fileSize;
} eC_gcc_struct;

extern struct __eCNameSpace__eC__types__Instance * __eCNameSpace__eC__files__FileOpen(const char *  fileName, int mode);

extern void __eCNameSpace__eC__types__eInstance_DecRef(struct __eCNameSpace__eC__types__Instance * instance);

extern int __eCVMethodID___eCNameSpace__eC__files__File_CloseInput;

extern int __eCVMethodID___eCNameSpace__eC__files__File_CloseOutput;

extern int __eCVMethodID___eCNameSpace__eC__files__File_Seek;

extern int __eCVMethodID___eCNameSpace__eC__files__File_Read;

extern int __eCVMethodID___eCNameSpace__eC__files__File_Write;

extern int __eCVMethodID___eCNameSpace__eC__files__File_Truncate;

extern int __eCVMethodID___eCNameSpace__eC__files__File_Lock;

extern int __eCVMethodID___eCNameSpace__eC__files__File_Unlock;

extern int __eCVMethodID___eCNameSpace__eC__files__File_GetSize;

void __eCProp___eCNameSpace__eC__files__File_Set_buffered(struct __eCNameSpace__eC__types__Instance * this, unsigned int value);

struct __eCNameSpace__eC__types__Instance * __eCProp___eCNameSpace__eC__files__BufferedFile_Get_handle(struct __eCNameSpace__eC__types__Instance * this);

void __eCProp___eCNameSpace__eC__files__BufferedFile_Set_handle(struct __eCNameSpace__eC__types__Instance * this, struct __eCNameSpace__eC__types__Instance * value);

size_t __eCProp___eCNameSpace__eC__files__BufferedFile_Get_bufferSize(struct __eCNameSpace__eC__types__Instance * this);

void __eCProp___eCNameSpace__eC__files__BufferedFile_Set_bufferSize(struct __eCNameSpace__eC__types__Instance * this, size_t value);

size_t __eCProp___eCNameSpace__eC__files__BufferedFile_Get_bufferRead(struct __eCNameSpace__eC__types__Instance * this);

void __eCProp___eCNameSpace__eC__files__BufferedFile_Set_bufferRead(struct __eCNameSpace__eC__types__Instance * this, size_t value);

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

static struct __eCNameSpace__eC__types__Class * __eCClass___eCNameSpace__eC__files__BufferedFile;

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

unsigned int __eCConstructor___eCNameSpace__eC__files__BufferedFile(struct __eCNameSpace__eC__types__Instance * this)
{
__attribute__((unused)) struct __eCNameSpace__eC__files__BufferedFile * __eCPointer___eCNameSpace__eC__files__BufferedFile = (struct __eCNameSpace__eC__files__BufferedFile *)(this ? (((char *)this) + __eCClass___eCNameSpace__eC__files__File->structSize) : 0);

__eCProp___eCNameSpace__eC__files__BufferedFile_Set_bufferSize(this, 512 * 1024);
__eCProp___eCNameSpace__eC__files__BufferedFile_Set_bufferRead(this, 1 * 1024);
return 1;
}

void __eCDestructor___eCNameSpace__eC__files__BufferedFile(struct __eCNameSpace__eC__types__Instance * this)
{
__attribute__((unused)) struct __eCNameSpace__eC__files__BufferedFile * __eCPointer___eCNameSpace__eC__files__BufferedFile = (struct __eCNameSpace__eC__files__BufferedFile *)(this ? (((char *)this) + __eCClass___eCNameSpace__eC__files__File->structSize) : 0);

{
(__eCNameSpace__eC__types__eInstance_DecRef(__eCPointer___eCNameSpace__eC__files__BufferedFile->handle), __eCPointer___eCNameSpace__eC__files__BufferedFile->handle = 0);
(__eCNameSpace__eC__types__eSystem_Delete(__eCPointer___eCNameSpace__eC__files__BufferedFile->buffer), __eCPointer___eCNameSpace__eC__files__BufferedFile->buffer = 0);
}
}

void __eCMethod___eCNameSpace__eC__files__BufferedFile_CloseInput(struct __eCNameSpace__eC__types__Instance * this)
{
__attribute__((unused)) struct __eCNameSpace__eC__files__BufferedFile * __eCPointer___eCNameSpace__eC__files__BufferedFile = (struct __eCNameSpace__eC__files__BufferedFile *)(this ? (((char *)this) + __eCClass___eCNameSpace__eC__files__File->structSize) : 0);

(__extension__ ({
void (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *);

__internal_VirtualMethod = ((void (*)(struct __eCNameSpace__eC__types__Instance *))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = __eCPointer___eCNameSpace__eC__files__BufferedFile->handle;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_CloseInput]);
__internal_VirtualMethod ? __internal_VirtualMethod(__eCPointer___eCNameSpace__eC__files__BufferedFile->handle) : (void)1;
}));
}

void __eCMethod___eCNameSpace__eC__files__BufferedFile_CloseOutput(struct __eCNameSpace__eC__types__Instance * this)
{
__attribute__((unused)) struct __eCNameSpace__eC__files__BufferedFile * __eCPointer___eCNameSpace__eC__files__BufferedFile = (struct __eCNameSpace__eC__files__BufferedFile *)(this ? (((char *)this) + __eCClass___eCNameSpace__eC__files__File->structSize) : 0);

(__extension__ ({
void (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *);

__internal_VirtualMethod = ((void (*)(struct __eCNameSpace__eC__types__Instance *))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = __eCPointer___eCNameSpace__eC__files__BufferedFile->handle;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_CloseOutput]);
__internal_VirtualMethod ? __internal_VirtualMethod(__eCPointer___eCNameSpace__eC__files__BufferedFile->handle) : (void)1;
}));
}

size_t __eCMethod___eCNameSpace__eC__files__BufferedFile_Read(struct __eCNameSpace__eC__types__Instance * this, unsigned char * buffer, size_t size, size_t count)
{
__attribute__((unused)) struct __eCNameSpace__eC__files__BufferedFile * __eCPointer___eCNameSpace__eC__files__BufferedFile = (struct __eCNameSpace__eC__files__BufferedFile *)(this ? (((char *)this) + __eCClass___eCNameSpace__eC__files__File->structSize) : 0);

if(__eCPointer___eCNameSpace__eC__files__BufferedFile->handle)
{
size_t totalBytesRead = 0;
size_t bufferCount = __eCPointer___eCNameSpace__eC__files__BufferedFile->bufferCount;
size_t bufferPos = __eCPointer___eCNameSpace__eC__files__BufferedFile->bufferPos;
unsigned char * fileBuffer = __eCPointer___eCNameSpace__eC__files__BufferedFile->buffer + bufferPos;
size_t readCount = count;

readCount *= size;
while(1)
{
size_t bytesRead = (bufferCount > bufferPos) ? (bufferCount - bufferPos) : 0;

if(bytesRead > readCount)
bytesRead = readCount;
if(bytesRead)
{
memcpy(buffer + totalBytesRead, fileBuffer, bytesRead);
bufferPos += bytesRead;
totalBytesRead += bytesRead;
readCount -= bytesRead;
}
if(readCount)
{
size_t read;

if(readCount < __eCPointer___eCNameSpace__eC__files__BufferedFile->bufferSize)
{
size_t __simpleStruct0;

read = (__simpleStruct0 = __eCPointer___eCNameSpace__eC__files__BufferedFile->bufferRead, (readCount > __simpleStruct0) ? readCount : __simpleStruct0);
if(bufferPos > bufferCount)
{
if(bufferPos + readCount - bufferCount > read && (bufferPos + readCount - bufferCount < bufferCount))
read = bufferPos + readCount - bufferCount;
else
{
bufferPos = 0;
bufferCount = 0;
}
}
if(bufferCount + read > __eCPointer___eCNameSpace__eC__files__BufferedFile->bufferSize)
{
bufferPos = 0;
bufferCount = 0;
}
}
else
{
read = __eCPointer___eCNameSpace__eC__files__BufferedFile->bufferSize;
bufferPos = 0;
bufferCount = 0;
}
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, long long pos, int mode);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, long long pos, int mode))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = __eCPointer___eCNameSpace__eC__files__BufferedFile->handle;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Seek]);
__internal_VirtualMethod ? __internal_VirtualMethod(__eCPointer___eCNameSpace__eC__files__BufferedFile->handle, __eCPointer___eCNameSpace__eC__files__BufferedFile->pos + totalBytesRead - bufferPos + bufferCount, 0) : (unsigned int)1;
}));
read = (__extension__ ({
size_t (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, void *  buffer, size_t size, size_t count);

__internal_VirtualMethod = ((size_t (*)(struct __eCNameSpace__eC__types__Instance *, void *  buffer, size_t size, size_t count))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = __eCPointer___eCNameSpace__eC__files__BufferedFile->handle;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Read]);
__internal_VirtualMethod ? __internal_VirtualMethod(__eCPointer___eCNameSpace__eC__files__BufferedFile->handle, __eCPointer___eCNameSpace__eC__files__BufferedFile->buffer + bufferCount, 1, (unsigned int)read) : (size_t)1;
}));
fileBuffer = __eCPointer___eCNameSpace__eC__files__BufferedFile->buffer + bufferPos;
bufferCount += read;
if(!read)
{
__eCPointer___eCNameSpace__eC__files__BufferedFile->eof = 1;
break;
}
}
else
break;
}
__eCPointer___eCNameSpace__eC__files__BufferedFile->bufferCount = bufferCount;
__eCPointer___eCNameSpace__eC__files__BufferedFile->bufferPos = bufferPos;
__eCPointer___eCNameSpace__eC__files__BufferedFile->pos += totalBytesRead;
return totalBytesRead / size;
}
return 0;
}

size_t __eCMethod___eCNameSpace__eC__files__BufferedFile_Write(struct __eCNameSpace__eC__types__Instance * this, const unsigned char * buffer, size_t size, size_t count)
{
unsigned long long __simpleStruct0, __simpleStruct1;
__attribute__((unused)) struct __eCNameSpace__eC__files__BufferedFile * __eCPointer___eCNameSpace__eC__files__BufferedFile = (struct __eCNameSpace__eC__files__BufferedFile *)(this ? (((char *)this) + __eCClass___eCNameSpace__eC__files__File->structSize) : 0);
size_t result;
size_t numBytes;
size_t bytesToBuffer;
size_t missing;

(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, long long pos, int mode);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, long long pos, int mode))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = __eCPointer___eCNameSpace__eC__files__BufferedFile->handle;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Seek]);
__internal_VirtualMethod ? __internal_VirtualMethod(__eCPointer___eCNameSpace__eC__files__BufferedFile->handle, __eCPointer___eCNameSpace__eC__files__BufferedFile->pos, 0) : (unsigned int)1;
}));
result = (__extension__ ({
size_t (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const void *  buffer, size_t size, size_t count);

__internal_VirtualMethod = ((size_t (*)(struct __eCNameSpace__eC__types__Instance *, const void *  buffer, size_t size, size_t count))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = __eCPointer___eCNameSpace__eC__files__BufferedFile->handle;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Write]);
__internal_VirtualMethod ? __internal_VirtualMethod(__eCPointer___eCNameSpace__eC__files__BufferedFile->handle, buffer, size, count) : (size_t)1;
}));
numBytes = result * size;
bytesToBuffer = (__eCPointer___eCNameSpace__eC__files__BufferedFile->bufferSize > __eCPointer___eCNameSpace__eC__files__BufferedFile->bufferPos) ? (__eCPointer___eCNameSpace__eC__files__BufferedFile->bufferSize - __eCPointer___eCNameSpace__eC__files__BufferedFile->bufferPos) : 0;
missing = numBytes - bytesToBuffer;
__eCPointer___eCNameSpace__eC__files__BufferedFile->pos += numBytes;
__eCPointer___eCNameSpace__eC__files__BufferedFile->fileSize = (__simpleStruct0 = __eCPointer___eCNameSpace__eC__files__BufferedFile->fileSize, __simpleStruct1 = __eCPointer___eCNameSpace__eC__files__BufferedFile->pos, (__simpleStruct0 > __simpleStruct1) ? __simpleStruct0 : __simpleStruct1);
if(bytesToBuffer < numBytes && __eCPointer___eCNameSpace__eC__files__BufferedFile->bufferCount >= __eCPointer___eCNameSpace__eC__files__BufferedFile->bufferPos && numBytes < __eCPointer___eCNameSpace__eC__files__BufferedFile->bufferSize && missing < __eCPointer___eCNameSpace__eC__files__BufferedFile->bufferPos)
{
memcpy(__eCPointer___eCNameSpace__eC__files__BufferedFile->buffer, __eCPointer___eCNameSpace__eC__files__BufferedFile->buffer + missing, __eCPointer___eCNameSpace__eC__files__BufferedFile->bufferPos - missing);
__eCPointer___eCNameSpace__eC__files__BufferedFile->bufferPos -= missing;
__eCPointer___eCNameSpace__eC__files__BufferedFile->bufferCount -= missing;
bytesToBuffer += missing;
}
if(bytesToBuffer >= numBytes)
{
size_t __simpleStruct0, __simpleStruct1;

bytesToBuffer = numBytes;
memcpy(__eCPointer___eCNameSpace__eC__files__BufferedFile->buffer + __eCPointer___eCNameSpace__eC__files__BufferedFile->bufferPos, buffer, bytesToBuffer);
__eCPointer___eCNameSpace__eC__files__BufferedFile->bufferPos += bytesToBuffer;
__eCPointer___eCNameSpace__eC__files__BufferedFile->bufferCount = (__simpleStruct0 = __eCPointer___eCNameSpace__eC__files__BufferedFile->bufferCount, __simpleStruct1 = __eCPointer___eCNameSpace__eC__files__BufferedFile->bufferPos, (__simpleStruct0 > __simpleStruct1) ? __simpleStruct0 : __simpleStruct1);
}
else
{
size_t __simpleStruct0;

bytesToBuffer = (__simpleStruct0 = __eCPointer___eCNameSpace__eC__files__BufferedFile->bufferSize, (numBytes < __simpleStruct0) ? numBytes : __simpleStruct0);
memcpy(__eCPointer___eCNameSpace__eC__files__BufferedFile->buffer, buffer + numBytes - bytesToBuffer, bytesToBuffer);
__eCPointer___eCNameSpace__eC__files__BufferedFile->bufferPos = bytesToBuffer;
__eCPointer___eCNameSpace__eC__files__BufferedFile->bufferCount = (unsigned int)bytesToBuffer;
}
return result;
}

unsigned int __eCMethod___eCNameSpace__eC__files__BufferedFile_Getc(struct __eCNameSpace__eC__types__Instance * this, char * ch)
{
__attribute__((unused)) struct __eCNameSpace__eC__files__BufferedFile * __eCPointer___eCNameSpace__eC__files__BufferedFile = (struct __eCNameSpace__eC__files__BufferedFile *)(this ? (((char *)this) + __eCClass___eCNameSpace__eC__files__File->structSize) : 0);

if(__eCPointer___eCNameSpace__eC__files__BufferedFile->handle)
{
while(1)
{
if(__eCPointer___eCNameSpace__eC__files__BufferedFile->bufferCount > __eCPointer___eCNameSpace__eC__files__BufferedFile->bufferPos)
{
*ch = *(__eCPointer___eCNameSpace__eC__files__BufferedFile->buffer + __eCPointer___eCNameSpace__eC__files__BufferedFile->bufferPos);
__eCPointer___eCNameSpace__eC__files__BufferedFile->bufferPos++;
__eCPointer___eCNameSpace__eC__files__BufferedFile->pos++;
return 1;
}
else
{
__eCPointer___eCNameSpace__eC__files__BufferedFile->bufferPos = 0;
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, long long pos, int mode);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, long long pos, int mode))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = __eCPointer___eCNameSpace__eC__files__BufferedFile->handle;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Seek]);
__internal_VirtualMethod ? __internal_VirtualMethod(__eCPointer___eCNameSpace__eC__files__BufferedFile->handle, __eCPointer___eCNameSpace__eC__files__BufferedFile->pos, 0) : (unsigned int)1;
}));
__eCPointer___eCNameSpace__eC__files__BufferedFile->bufferCount = (__extension__ ({
size_t (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, void *  buffer, size_t size, size_t count);

__internal_VirtualMethod = ((size_t (*)(struct __eCNameSpace__eC__types__Instance *, void *  buffer, size_t size, size_t count))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = __eCPointer___eCNameSpace__eC__files__BufferedFile->handle;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Read]);
__internal_VirtualMethod ? __internal_VirtualMethod(__eCPointer___eCNameSpace__eC__files__BufferedFile->handle, __eCPointer___eCNameSpace__eC__files__BufferedFile->buffer, 1, __eCPointer___eCNameSpace__eC__files__BufferedFile->bufferSize) : (size_t)1;
}));
if(!__eCPointer___eCNameSpace__eC__files__BufferedFile->bufferCount)
{
__eCPointer___eCNameSpace__eC__files__BufferedFile->eof = 1;
break;
}
}
}
}
return 0;
}

unsigned int __eCMethod___eCNameSpace__eC__files__BufferedFile_Putc(struct __eCNameSpace__eC__types__Instance * this, char ch)
{
__attribute__((unused)) struct __eCNameSpace__eC__files__BufferedFile * __eCPointer___eCNameSpace__eC__files__BufferedFile = (struct __eCNameSpace__eC__files__BufferedFile *)(this ? (((char *)this) + __eCClass___eCNameSpace__eC__files__File->structSize) : 0);
long long written = (__extension__ ({
size_t (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const void *  buffer, size_t size, size_t count);

__internal_VirtualMethod = ((size_t (*)(struct __eCNameSpace__eC__types__Instance *, const void *  buffer, size_t size, size_t count))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = this;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__BufferedFile->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Write]);
__internal_VirtualMethod ? __internal_VirtualMethod(this, &ch, 1, 1) : (size_t)1;
}));

return written != 0;
}

unsigned int __eCMethod___eCNameSpace__eC__files__BufferedFile_Puts(struct __eCNameSpace__eC__types__Instance * this, const char * string)
{
__attribute__((unused)) struct __eCNameSpace__eC__files__BufferedFile * __eCPointer___eCNameSpace__eC__files__BufferedFile = (struct __eCNameSpace__eC__files__BufferedFile *)(this ? (((char *)this) + __eCClass___eCNameSpace__eC__files__File->structSize) : 0);
int len = strlen(string);
long long written = (__extension__ ({
size_t (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const void *  buffer, size_t size, size_t count);

__internal_VirtualMethod = ((size_t (*)(struct __eCNameSpace__eC__types__Instance *, const void *  buffer, size_t size, size_t count))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = this;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__BufferedFile->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Write]);
__internal_VirtualMethod ? __internal_VirtualMethod(this, string, 1, len) : (size_t)1;
}));

return written == len;
}

unsigned int __eCMethod___eCNameSpace__eC__files__BufferedFile_Seek(struct __eCNameSpace__eC__types__Instance * this, long long pos, int mode)
{
__attribute__((unused)) struct __eCNameSpace__eC__files__BufferedFile * __eCPointer___eCNameSpace__eC__files__BufferedFile = (struct __eCNameSpace__eC__files__BufferedFile *)(this ? (((char *)this) + __eCClass___eCNameSpace__eC__files__File->structSize) : 0);
uint64 newPosition = __eCPointer___eCNameSpace__eC__files__BufferedFile->pos;

switch(mode)
{
case 0:
newPosition = pos;
break;
case 1:
newPosition += pos;
break;
case 2:
{
newPosition = __eCPointer___eCNameSpace__eC__files__BufferedFile->fileSize + pos;
break;
}
}
if(__eCPointer___eCNameSpace__eC__files__BufferedFile->pos != newPosition)
{
if(newPosition >= __eCPointer___eCNameSpace__eC__files__BufferedFile->pos - __eCPointer___eCNameSpace__eC__files__BufferedFile->bufferPos && newPosition < __eCPointer___eCNameSpace__eC__files__BufferedFile->pos + __eCPointer___eCNameSpace__eC__files__BufferedFile->bufferSize)
{
if(newPosition < __eCPointer___eCNameSpace__eC__files__BufferedFile->pos - __eCPointer___eCNameSpace__eC__files__BufferedFile->bufferPos + __eCPointer___eCNameSpace__eC__files__BufferedFile->bufferCount)
__eCPointer___eCNameSpace__eC__files__BufferedFile->bufferPos += newPosition - __eCPointer___eCNameSpace__eC__files__BufferedFile->pos;
else
{
size_t read = newPosition - __eCPointer___eCNameSpace__eC__files__BufferedFile->pos - __eCPointer___eCNameSpace__eC__files__BufferedFile->bufferCount;

if(read < __eCPointer___eCNameSpace__eC__files__BufferedFile->bufferCount * 2)
{
if(read > __eCPointer___eCNameSpace__eC__files__BufferedFile->bufferSize)
{
__eCPointer___eCNameSpace__eC__files__BufferedFile->bufferCount = 0;
__eCPointer___eCNameSpace__eC__files__BufferedFile->bufferPos = 0;
}
else
{
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, long long pos, int mode);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, long long pos, int mode))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = __eCPointer___eCNameSpace__eC__files__BufferedFile->handle;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Seek]);
__internal_VirtualMethod ? __internal_VirtualMethod(__eCPointer___eCNameSpace__eC__files__BufferedFile->handle, __eCPointer___eCNameSpace__eC__files__BufferedFile->pos - __eCPointer___eCNameSpace__eC__files__BufferedFile->bufferPos + __eCPointer___eCNameSpace__eC__files__BufferedFile->bufferCount, 0) : (unsigned int)1;
}));
read = (__extension__ ({
size_t (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, void *  buffer, size_t size, size_t count);

__internal_VirtualMethod = ((size_t (*)(struct __eCNameSpace__eC__types__Instance *, void *  buffer, size_t size, size_t count))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = __eCPointer___eCNameSpace__eC__files__BufferedFile->handle;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Read]);
__internal_VirtualMethod ? __internal_VirtualMethod(__eCPointer___eCNameSpace__eC__files__BufferedFile->handle, __eCPointer___eCNameSpace__eC__files__BufferedFile->buffer + __eCPointer___eCNameSpace__eC__files__BufferedFile->bufferCount, 1, (unsigned int)read) : (size_t)1;
}));
__eCPointer___eCNameSpace__eC__files__BufferedFile->bufferPos += newPosition - __eCPointer___eCNameSpace__eC__files__BufferedFile->pos;
__eCPointer___eCNameSpace__eC__files__BufferedFile->bufferCount += read;
}
}
else
{
__eCPointer___eCNameSpace__eC__files__BufferedFile->bufferCount = 0;
__eCPointer___eCNameSpace__eC__files__BufferedFile->bufferPos = 0;
}
}
}
else
{
__eCPointer___eCNameSpace__eC__files__BufferedFile->bufferCount = 0;
__eCPointer___eCNameSpace__eC__files__BufferedFile->bufferPos = 0;
}
__eCPointer___eCNameSpace__eC__files__BufferedFile->eof = newPosition > __eCPointer___eCNameSpace__eC__files__BufferedFile->fileSize;
__eCPointer___eCNameSpace__eC__files__BufferedFile->pos = newPosition;
}
return !__eCPointer___eCNameSpace__eC__files__BufferedFile->eof;
}

uint64 __eCMethod___eCNameSpace__eC__files__BufferedFile_Tell(struct __eCNameSpace__eC__types__Instance * this)
{
__attribute__((unused)) struct __eCNameSpace__eC__files__BufferedFile * __eCPointer___eCNameSpace__eC__files__BufferedFile = (struct __eCNameSpace__eC__files__BufferedFile *)(this ? (((char *)this) + __eCClass___eCNameSpace__eC__files__File->structSize) : 0);

return __eCPointer___eCNameSpace__eC__files__BufferedFile->pos;
}

unsigned int __eCMethod___eCNameSpace__eC__files__BufferedFile_Eof(struct __eCNameSpace__eC__types__Instance * this)
{
__attribute__((unused)) struct __eCNameSpace__eC__files__BufferedFile * __eCPointer___eCNameSpace__eC__files__BufferedFile = (struct __eCNameSpace__eC__files__BufferedFile *)(this ? (((char *)this) + __eCClass___eCNameSpace__eC__files__File->structSize) : 0);

return __eCPointer___eCNameSpace__eC__files__BufferedFile->eof;
}

uint64 __eCMethod___eCNameSpace__eC__files__BufferedFile_GetSize(struct __eCNameSpace__eC__types__Instance * this)
{
__attribute__((unused)) struct __eCNameSpace__eC__files__BufferedFile * __eCPointer___eCNameSpace__eC__files__BufferedFile = (struct __eCNameSpace__eC__files__BufferedFile *)(this ? (((char *)this) + __eCClass___eCNameSpace__eC__files__File->structSize) : 0);

return __eCPointer___eCNameSpace__eC__files__BufferedFile->fileSize;
}

unsigned int __eCMethod___eCNameSpace__eC__files__BufferedFile_Truncate(struct __eCNameSpace__eC__types__Instance * this, uint64 size)
{
unsigned long long __simpleStruct1;
size_t __simpleStruct0;
__attribute__((unused)) struct __eCNameSpace__eC__files__BufferedFile * __eCPointer___eCNameSpace__eC__files__BufferedFile = (struct __eCNameSpace__eC__files__BufferedFile *)(this ? (((char *)this) + __eCClass___eCNameSpace__eC__files__File->structSize) : 0);
uint64 bytesAhead = size - (__eCPointer___eCNameSpace__eC__files__BufferedFile->pos - __eCPointer___eCNameSpace__eC__files__BufferedFile->bufferPos);

(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, uint64 size);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, uint64 size))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = __eCPointer___eCNameSpace__eC__files__BufferedFile->handle;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Truncate]);
__internal_VirtualMethod ? __internal_VirtualMethod(__eCPointer___eCNameSpace__eC__files__BufferedFile->handle, size) : (unsigned int)1;
}));
__eCPointer___eCNameSpace__eC__files__BufferedFile->bufferCount = (__simpleStruct0 = __eCPointer___eCNameSpace__eC__files__BufferedFile->bufferCount, (__simpleStruct0 < bytesAhead) ? __simpleStruct0 : bytesAhead);
__eCPointer___eCNameSpace__eC__files__BufferedFile->fileSize = (__simpleStruct1 = __eCPointer___eCNameSpace__eC__files__BufferedFile->fileSize, (__simpleStruct1 < size) ? __simpleStruct1 : size);
return 1;
}

unsigned int __eCMethod___eCNameSpace__eC__files__BufferedFile_Lock(struct __eCNameSpace__eC__types__Instance * this, int type, uint64 start, uint64 length, unsigned int wait)
{
__attribute__((unused)) struct __eCNameSpace__eC__files__BufferedFile * __eCPointer___eCNameSpace__eC__files__BufferedFile = (struct __eCNameSpace__eC__files__BufferedFile *)(this ? (((char *)this) + __eCClass___eCNameSpace__eC__files__File->structSize) : 0);

return (__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, int type, uint64 start, uint64 length, unsigned int wait);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, int type, uint64 start, uint64 length, unsigned int wait))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = __eCPointer___eCNameSpace__eC__files__BufferedFile->handle;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Lock]);
__internal_VirtualMethod ? __internal_VirtualMethod(__eCPointer___eCNameSpace__eC__files__BufferedFile->handle, type, start, length, wait) : (unsigned int)1;
}));
}

unsigned int __eCMethod___eCNameSpace__eC__files__BufferedFile_Unlock(struct __eCNameSpace__eC__types__Instance * this, uint64 start, uint64 length, unsigned int wait)
{
__attribute__((unused)) struct __eCNameSpace__eC__files__BufferedFile * __eCPointer___eCNameSpace__eC__files__BufferedFile = (struct __eCNameSpace__eC__files__BufferedFile *)(this ? (((char *)this) + __eCClass___eCNameSpace__eC__files__File->structSize) : 0);

return (__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, uint64 start, uint64 length, unsigned int wait);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, uint64 start, uint64 length, unsigned int wait))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = __eCPointer___eCNameSpace__eC__files__BufferedFile->handle;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Unlock]);
__internal_VirtualMethod ? __internal_VirtualMethod(__eCPointer___eCNameSpace__eC__files__BufferedFile->handle, start, length, wait) : (unsigned int)1;
}));
}

struct __eCNameSpace__eC__types__Instance * __eCProp___eCNameSpace__eC__files__BufferedFile_Get_handle(struct __eCNameSpace__eC__types__Instance * this)
{
__attribute__((unused)) struct __eCNameSpace__eC__files__BufferedFile * __eCPointer___eCNameSpace__eC__files__BufferedFile = (struct __eCNameSpace__eC__files__BufferedFile *)(this ? (((char *)this) + __eCClass___eCNameSpace__eC__files__File->structSize) : 0);

return __eCPointer___eCNameSpace__eC__files__BufferedFile->handle;
}

void __eCProp___eCNameSpace__eC__files__BufferedFile_Set_handle(struct __eCNameSpace__eC__types__Instance * this, struct __eCNameSpace__eC__types__Instance * value)
{
__attribute__((unused)) struct __eCNameSpace__eC__files__BufferedFile * __eCPointer___eCNameSpace__eC__files__BufferedFile = (struct __eCNameSpace__eC__files__BufferedFile *)(this ? (((char *)this) + __eCClass___eCNameSpace__eC__files__File->structSize) : 0);

if(__eCPointer___eCNameSpace__eC__files__BufferedFile->handle)
(__eCNameSpace__eC__types__eInstance_DecRef(__eCPointer___eCNameSpace__eC__files__BufferedFile->handle), __eCPointer___eCNameSpace__eC__files__BufferedFile->handle = 0);
__eCPointer___eCNameSpace__eC__files__BufferedFile->handle = value;
__eCPointer___eCNameSpace__eC__files__BufferedFile->bufferCount = 0;
__eCPointer___eCNameSpace__eC__files__BufferedFile->bufferPos = 0;
__eCPointer___eCNameSpace__eC__files__BufferedFile->pos = 0;
if(__eCPointer___eCNameSpace__eC__files__BufferedFile->handle)
{
__eCPointer___eCNameSpace__eC__files__BufferedFile->handle->_refCount++;
}
__eCProp___eCNameSpace__eC__files__BufferedFile_handle && __eCProp___eCNameSpace__eC__files__BufferedFile_handle->selfWatchable ? __eCNameSpace__eC__types__eInstance_FireSelfWatchers(this, __eCProp___eCNameSpace__eC__files__BufferedFile_handle) : (void)0, __eCPropM___eCNameSpace__eC__files__BufferedFile_handle && __eCPropM___eCNameSpace__eC__files__BufferedFile_handle->selfWatchable ? __eCNameSpace__eC__types__eInstance_FireSelfWatchers(this, __eCPropM___eCNameSpace__eC__files__BufferedFile_handle) : (void)0;
}

size_t __eCProp___eCNameSpace__eC__files__BufferedFile_Get_bufferSize(struct __eCNameSpace__eC__types__Instance * this)
{
__attribute__((unused)) struct __eCNameSpace__eC__files__BufferedFile * __eCPointer___eCNameSpace__eC__files__BufferedFile = (struct __eCNameSpace__eC__files__BufferedFile *)(this ? (((char *)this) + __eCClass___eCNameSpace__eC__files__File->structSize) : 0);

return __eCPointer___eCNameSpace__eC__files__BufferedFile->bufferSize;
}

void __eCProp___eCNameSpace__eC__files__BufferedFile_Set_bufferSize(struct __eCNameSpace__eC__types__Instance * this, size_t value)
{
__attribute__((unused)) struct __eCNameSpace__eC__files__BufferedFile * __eCPointer___eCNameSpace__eC__files__BufferedFile = (struct __eCNameSpace__eC__files__BufferedFile *)(this ? (((char *)this) + __eCClass___eCNameSpace__eC__files__File->structSize) : 0);

__eCPointer___eCNameSpace__eC__files__BufferedFile->bufferSize = value;
__eCPointer___eCNameSpace__eC__files__BufferedFile->buffer = __eCNameSpace__eC__types__eSystem_Renew(__eCPointer___eCNameSpace__eC__files__BufferedFile->buffer, sizeof(unsigned char) * (value));
if(__eCPointer___eCNameSpace__eC__files__BufferedFile->bufferCount > __eCPointer___eCNameSpace__eC__files__BufferedFile->bufferSize)
__eCPointer___eCNameSpace__eC__files__BufferedFile->bufferCount = __eCPointer___eCNameSpace__eC__files__BufferedFile->bufferSize;
__eCProp___eCNameSpace__eC__files__BufferedFile_bufferSize && __eCProp___eCNameSpace__eC__files__BufferedFile_bufferSize->selfWatchable ? __eCNameSpace__eC__types__eInstance_FireSelfWatchers(this, __eCProp___eCNameSpace__eC__files__BufferedFile_bufferSize) : (void)0, __eCPropM___eCNameSpace__eC__files__BufferedFile_bufferSize && __eCPropM___eCNameSpace__eC__files__BufferedFile_bufferSize->selfWatchable ? __eCNameSpace__eC__types__eInstance_FireSelfWatchers(this, __eCPropM___eCNameSpace__eC__files__BufferedFile_bufferSize) : (void)0;
}

size_t __eCProp___eCNameSpace__eC__files__BufferedFile_Get_bufferRead(struct __eCNameSpace__eC__types__Instance * this)
{
__attribute__((unused)) struct __eCNameSpace__eC__files__BufferedFile * __eCPointer___eCNameSpace__eC__files__BufferedFile = (struct __eCNameSpace__eC__files__BufferedFile *)(this ? (((char *)this) + __eCClass___eCNameSpace__eC__files__File->structSize) : 0);

return __eCPointer___eCNameSpace__eC__files__BufferedFile->bufferRead;
}

void __eCProp___eCNameSpace__eC__files__BufferedFile_Set_bufferRead(struct __eCNameSpace__eC__types__Instance * this, size_t value)
{
__attribute__((unused)) struct __eCNameSpace__eC__files__BufferedFile * __eCPointer___eCNameSpace__eC__files__BufferedFile = (struct __eCNameSpace__eC__files__BufferedFile *)(this ? (((char *)this) + __eCClass___eCNameSpace__eC__files__File->structSize) : 0);

__eCPointer___eCNameSpace__eC__files__BufferedFile->bufferRead = value;
__eCProp___eCNameSpace__eC__files__BufferedFile_bufferRead && __eCProp___eCNameSpace__eC__files__BufferedFile_bufferRead->selfWatchable ? __eCNameSpace__eC__types__eInstance_FireSelfWatchers(this, __eCProp___eCNameSpace__eC__files__BufferedFile_bufferRead) : (void)0, __eCPropM___eCNameSpace__eC__files__BufferedFile_bufferRead && __eCPropM___eCNameSpace__eC__files__BufferedFile_bufferRead->selfWatchable ? __eCNameSpace__eC__types__eInstance_FireSelfWatchers(this, __eCPropM___eCNameSpace__eC__files__BufferedFile_bufferRead) : (void)0;
}

struct __eCNameSpace__eC__types__Instance * __eCNameSpace__eC__files__FileOpenBuffered(const char * fileName, int mode)
{
struct __eCNameSpace__eC__types__Instance * result = (((void *)0));

{
struct __eCNameSpace__eC__types__Instance * handle = __eCNameSpace__eC__files__FileOpen(fileName, mode);

if(handle)
{
struct __eCNameSpace__eC__types__Instance * f = (f = __eCNameSpace__eC__types__eInstance_New(__eCClass___eCNameSpace__eC__files__BufferedFile), ((struct __eCNameSpace__eC__files__BufferedFile *)(((char *)f + __eCClass___eCNameSpace__eC__files__File->structSize)))->mode = mode, ((struct __eCNameSpace__eC__files__BufferedFile *)(((char *)f + __eCClass___eCNameSpace__eC__files__File->structSize)))->pos = 0, __eCProp___eCNameSpace__eC__files__BufferedFile_Set_handle(f, handle), ((struct __eCNameSpace__eC__files__BufferedFile *)(((char *)f + __eCClass___eCNameSpace__eC__files__File->structSize)))->fileSize = (__extension__ ({
uint64 (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *);

__internal_VirtualMethod = ((uint64 (*)(struct __eCNameSpace__eC__types__Instance *))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = handle;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_GetSize]);
__internal_VirtualMethod ? __internal_VirtualMethod(handle) : (uint64)1;
})), f);

__eCProp___eCNameSpace__eC__files__File_Set_buffered(handle, 1);
result = f;
}
}
return result;
}

void __eCUnregisterModule_BufferedFile(struct __eCNameSpace__eC__types__Instance * module)
{

__eCPropM___eCNameSpace__eC__files__BufferedFile_handle = (void *)0;
__eCPropM___eCNameSpace__eC__files__BufferedFile_bufferSize = (void *)0;
__eCPropM___eCNameSpace__eC__files__BufferedFile_bufferRead = (void *)0;
}

void __eCRegisterModule_BufferedFile(struct __eCNameSpace__eC__types__Instance * module)
{
struct __eCNameSpace__eC__types__Class __attribute__((unused)) * class;

class = __eCNameSpace__eC__types__eSystem_RegisterClass(0, "eC::files::BufferedFile", "eC::files::File", sizeof(struct __eCNameSpace__eC__files__BufferedFile), 0, (void *)__eCConstructor___eCNameSpace__eC__files__BufferedFile, (void *)__eCDestructor___eCNameSpace__eC__files__BufferedFile, module, 1, 1);
if(((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application == ((struct __eCNameSpace__eC__types__Module *)(((char *)__thisModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->application && class)
__eCClass___eCNameSpace__eC__files__BufferedFile = class;
__eCNameSpace__eC__types__eClass_AddMethod(class, "Seek", 0, __eCMethod___eCNameSpace__eC__files__BufferedFile_Seek, 1);
__eCNameSpace__eC__types__eClass_AddMethod(class, "Tell", 0, __eCMethod___eCNameSpace__eC__files__BufferedFile_Tell, 1);
__eCNameSpace__eC__types__eClass_AddMethod(class, "Read", 0, __eCMethod___eCNameSpace__eC__files__BufferedFile_Read, 1);
__eCNameSpace__eC__types__eClass_AddMethod(class, "Write", 0, __eCMethod___eCNameSpace__eC__files__BufferedFile_Write, 1);
__eCNameSpace__eC__types__eClass_AddMethod(class, "Getc", 0, __eCMethod___eCNameSpace__eC__files__BufferedFile_Getc, 1);
__eCNameSpace__eC__types__eClass_AddMethod(class, "Putc", 0, __eCMethod___eCNameSpace__eC__files__BufferedFile_Putc, 1);
__eCNameSpace__eC__types__eClass_AddMethod(class, "Puts", 0, __eCMethod___eCNameSpace__eC__files__BufferedFile_Puts, 1);
__eCNameSpace__eC__types__eClass_AddMethod(class, "Eof", 0, __eCMethod___eCNameSpace__eC__files__BufferedFile_Eof, 1);
__eCNameSpace__eC__types__eClass_AddMethod(class, "Truncate", 0, __eCMethod___eCNameSpace__eC__files__BufferedFile_Truncate, 1);
__eCNameSpace__eC__types__eClass_AddMethod(class, "GetSize", 0, __eCMethod___eCNameSpace__eC__files__BufferedFile_GetSize, 1);
__eCNameSpace__eC__types__eClass_AddMethod(class, "CloseInput", 0, __eCMethod___eCNameSpace__eC__files__BufferedFile_CloseInput, 1);
__eCNameSpace__eC__types__eClass_AddMethod(class, "CloseOutput", 0, __eCMethod___eCNameSpace__eC__files__BufferedFile_CloseOutput, 1);
__eCNameSpace__eC__types__eClass_AddMethod(class, "Lock", 0, __eCMethod___eCNameSpace__eC__files__BufferedFile_Lock, 1);
__eCNameSpace__eC__types__eClass_AddMethod(class, "Unlock", 0, __eCMethod___eCNameSpace__eC__files__BufferedFile_Unlock, 1);
__eCPropM___eCNameSpace__eC__files__BufferedFile_handle = __eCNameSpace__eC__types__eClass_AddProperty(class, "handle", "eC::files::File", __eCProp___eCNameSpace__eC__files__BufferedFile_Set_handle, __eCProp___eCNameSpace__eC__files__BufferedFile_Get_handle, 1);
if(((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application == ((struct __eCNameSpace__eC__types__Module *)(((char *)__thisModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->application)
__eCProp___eCNameSpace__eC__files__BufferedFile_handle = __eCPropM___eCNameSpace__eC__files__BufferedFile_handle, __eCPropM___eCNameSpace__eC__files__BufferedFile_handle = (void *)0;
__eCPropM___eCNameSpace__eC__files__BufferedFile_bufferSize = __eCNameSpace__eC__types__eClass_AddProperty(class, "bufferSize", "uintsize", __eCProp___eCNameSpace__eC__files__BufferedFile_Set_bufferSize, __eCProp___eCNameSpace__eC__files__BufferedFile_Get_bufferSize, 1);
if(((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application == ((struct __eCNameSpace__eC__types__Module *)(((char *)__thisModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->application)
__eCProp___eCNameSpace__eC__files__BufferedFile_bufferSize = __eCPropM___eCNameSpace__eC__files__BufferedFile_bufferSize, __eCPropM___eCNameSpace__eC__files__BufferedFile_bufferSize = (void *)0;
__eCPropM___eCNameSpace__eC__files__BufferedFile_bufferRead = __eCNameSpace__eC__types__eClass_AddProperty(class, "bufferRead", "uintsize", __eCProp___eCNameSpace__eC__files__BufferedFile_Set_bufferRead, __eCProp___eCNameSpace__eC__files__BufferedFile_Get_bufferRead, 1);
if(((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application == ((struct __eCNameSpace__eC__types__Module *)(((char *)__thisModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->application)
__eCProp___eCNameSpace__eC__files__BufferedFile_bufferRead = __eCPropM___eCNameSpace__eC__files__BufferedFile_bufferRead, __eCPropM___eCNameSpace__eC__files__BufferedFile_bufferRead = (void *)0;
__eCNameSpace__eC__types__eClass_AddDataMember(class, (((void *)0)), (((void *)0)), 0, sizeof(void *) > 8 ? sizeof(void *) : 8, 2);
if(class)
class->fixed = (unsigned int)1;
__eCNameSpace__eC__types__eSystem_RegisterFunction("eC::files::FileOpenBuffered", "eC::files::BufferedFile eC::files::FileOpenBuffered(const char * fileName, eC::files::FileOpenMode mode)", __eCNameSpace__eC__files__FileOpenBuffered, module, 1);
}

