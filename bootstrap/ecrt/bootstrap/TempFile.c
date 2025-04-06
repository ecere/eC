/* Code generated from eC source file: TempFile.ec */
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
struct __eCNameSpace__eC__files__TempFile
{
unsigned char * buffer;
size_t size;
size_t position;
unsigned int eof;
int openMode;
size_t allocated;
} eC_gcc_struct;

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

extern void *  memcpy(void * , const void * , size_t size);

extern size_t strlen(const char * );

struct __eCNameSpace__eC__types__Property;

static __attribute__((unused)) struct __eCNameSpace__eC__types__Property * __eCProp___eCNameSpace__eC__files__TempFile_openMode, * __eCPropM___eCNameSpace__eC__files__TempFile_openMode;

static __attribute__((unused)) struct __eCNameSpace__eC__types__Property * __eCProp___eCNameSpace__eC__files__TempFile_buffer, * __eCPropM___eCNameSpace__eC__files__TempFile_buffer;

static __attribute__((unused)) struct __eCNameSpace__eC__types__Property * __eCProp___eCNameSpace__eC__files__TempFile_size, * __eCPropM___eCNameSpace__eC__files__TempFile_size;

static __attribute__((unused)) struct __eCNameSpace__eC__types__Property * __eCProp___eCNameSpace__eC__files__TempFile_allocated, * __eCPropM___eCNameSpace__eC__files__TempFile_allocated;

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

int __eCProp___eCNameSpace__eC__files__TempFile_Get_openMode(struct __eCNameSpace__eC__types__Instance * this);

void __eCProp___eCNameSpace__eC__files__TempFile_Set_openMode(struct __eCNameSpace__eC__types__Instance * this, int value);

unsigned char *  __eCProp___eCNameSpace__eC__files__TempFile_Get_buffer(struct __eCNameSpace__eC__types__Instance * this);

void __eCProp___eCNameSpace__eC__files__TempFile_Set_buffer(struct __eCNameSpace__eC__types__Instance * this, unsigned char *  value);

size_t __eCProp___eCNameSpace__eC__files__TempFile_Get_size(struct __eCNameSpace__eC__types__Instance * this);

void __eCProp___eCNameSpace__eC__files__TempFile_Set_size(struct __eCNameSpace__eC__types__Instance * this, size_t value);

size_t __eCProp___eCNameSpace__eC__files__TempFile_Get_allocated(struct __eCNameSpace__eC__types__Instance * this);

void __eCProp___eCNameSpace__eC__files__TempFile_Set_allocated(struct __eCNameSpace__eC__types__Instance * this, size_t value);

extern int __eCVMethodID___eCNameSpace__eC__files__File_Read;

extern int __eCVMethodID___eCNameSpace__eC__files__File_Write;

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

static struct __eCNameSpace__eC__types__Class * __eCClass___eCNameSpace__eC__files__TempFile;

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

unsigned int __eCConstructor___eCNameSpace__eC__files__TempFile(struct __eCNameSpace__eC__types__Instance * this)
{
__attribute__((unused)) struct __eCNameSpace__eC__files__TempFile * __eCPointer___eCNameSpace__eC__files__TempFile = (struct __eCNameSpace__eC__files__TempFile *)(this ? (((char *)this) + __eCClass___eCNameSpace__eC__files__TempFile->offset) : 0);

__eCPointer___eCNameSpace__eC__files__TempFile->openMode = 5;
return 1;
}

void __eCDestructor___eCNameSpace__eC__files__TempFile(struct __eCNameSpace__eC__types__Instance * this)
{
__attribute__((unused)) struct __eCNameSpace__eC__files__TempFile * __eCPointer___eCNameSpace__eC__files__TempFile = (struct __eCNameSpace__eC__files__TempFile *)(this ? (((char *)this) + __eCClass___eCNameSpace__eC__files__TempFile->offset) : 0);

{
(__eCNameSpace__eC__types__eSystem_Delete(__eCPointer___eCNameSpace__eC__files__TempFile->buffer), __eCPointer___eCNameSpace__eC__files__TempFile->buffer = 0);
}
}

size_t __eCMethod___eCNameSpace__eC__files__TempFile_Read(struct __eCNameSpace__eC__types__Instance * this, unsigned char * buffer, size_t size, size_t count)
{
size_t __simpleStruct0;
__attribute__((unused)) struct __eCNameSpace__eC__files__TempFile * __eCPointer___eCNameSpace__eC__files__TempFile = (struct __eCNameSpace__eC__files__TempFile *)(this ? (((char *)this) + __eCClass___eCNameSpace__eC__files__TempFile->offset) : 0);
size_t readSize = size * count;
size_t read = (__simpleStruct0 = __eCPointer___eCNameSpace__eC__files__TempFile->size - __eCPointer___eCNameSpace__eC__files__TempFile->position, (readSize < __simpleStruct0) ? readSize : __simpleStruct0);

if(__eCPointer___eCNameSpace__eC__files__TempFile->position >= __eCPointer___eCNameSpace__eC__files__TempFile->size)
__eCPointer___eCNameSpace__eC__files__TempFile->eof = 1;
if(buffer && read)
memcpy(buffer, __eCPointer___eCNameSpace__eC__files__TempFile->buffer + __eCPointer___eCNameSpace__eC__files__TempFile->position, read);
__eCPointer___eCNameSpace__eC__files__TempFile->position += read;
return read / size;
}

size_t __eCMethod___eCNameSpace__eC__files__TempFile_Write(struct __eCNameSpace__eC__types__Instance * this, const unsigned char * buffer, size_t size, size_t count)
{
__attribute__((unused)) struct __eCNameSpace__eC__files__TempFile * __eCPointer___eCNameSpace__eC__files__TempFile = (struct __eCNameSpace__eC__files__TempFile *)(this ? (((char *)this) + __eCClass___eCNameSpace__eC__files__TempFile->offset) : 0);
size_t writeSize = size * count;
size_t written = writeSize;

if(__eCPointer___eCNameSpace__eC__files__TempFile->size - __eCPointer___eCNameSpace__eC__files__TempFile->position < writeSize)
{
__eCPointer___eCNameSpace__eC__files__TempFile->size += writeSize - (__eCPointer___eCNameSpace__eC__files__TempFile->size - __eCPointer___eCNameSpace__eC__files__TempFile->position);
if(__eCPointer___eCNameSpace__eC__files__TempFile->allocated < __eCPointer___eCNameSpace__eC__files__TempFile->size)
{
__eCPointer___eCNameSpace__eC__files__TempFile->allocated *= 2;
if(__eCPointer___eCNameSpace__eC__files__TempFile->allocated < __eCPointer___eCNameSpace__eC__files__TempFile->size)
__eCPointer___eCNameSpace__eC__files__TempFile->allocated = __eCPointer___eCNameSpace__eC__files__TempFile->size * 2;
__eCPointer___eCNameSpace__eC__files__TempFile->buffer = __eCNameSpace__eC__types__eSystem_Renew0(__eCPointer___eCNameSpace__eC__files__TempFile->buffer, sizeof(unsigned char) * (__eCPointer___eCNameSpace__eC__files__TempFile->allocated));
if(!__eCPointer___eCNameSpace__eC__files__TempFile->buffer)
{
__eCPointer___eCNameSpace__eC__files__TempFile->allocated = 0;
__eCPointer___eCNameSpace__eC__files__TempFile->size = 0;
__eCPointer___eCNameSpace__eC__files__TempFile->position = 0;
written = 0;
writeSize = 0;
}
}
}
if(writeSize)
memcpy(__eCPointer___eCNameSpace__eC__files__TempFile->buffer + __eCPointer___eCNameSpace__eC__files__TempFile->position, buffer, writeSize);
__eCPointer___eCNameSpace__eC__files__TempFile->position += written;
return written / size;
}

unsigned int __eCMethod___eCNameSpace__eC__files__TempFile_Getc(struct __eCNameSpace__eC__types__Instance * this, char * ch)
{
__attribute__((unused)) struct __eCNameSpace__eC__files__TempFile * __eCPointer___eCNameSpace__eC__files__TempFile = (struct __eCNameSpace__eC__files__TempFile *)(this ? (((char *)this) + __eCClass___eCNameSpace__eC__files__TempFile->offset) : 0);
long long read = (__extension__ ({
size_t (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, void *  buffer, size_t size, size_t count);

__internal_VirtualMethod = ((size_t (*)(struct __eCNameSpace__eC__types__Instance *, void *  buffer, size_t size, size_t count))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = this;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__TempFile->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Read]);
__internal_VirtualMethod ? __internal_VirtualMethod(this, ch, 1, 1) : (size_t)1;
}));

return !__eCPointer___eCNameSpace__eC__files__TempFile->eof && read != 0;
}

unsigned int __eCMethod___eCNameSpace__eC__files__TempFile_Putc(struct __eCNameSpace__eC__types__Instance * this, char ch)
{
__attribute__((unused)) struct __eCNameSpace__eC__files__TempFile * __eCPointer___eCNameSpace__eC__files__TempFile = (struct __eCNameSpace__eC__files__TempFile *)(this ? (((char *)this) + __eCClass___eCNameSpace__eC__files__TempFile->offset) : 0);
long long written = (__extension__ ({
size_t (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const void *  buffer, size_t size, size_t count);

__internal_VirtualMethod = ((size_t (*)(struct __eCNameSpace__eC__types__Instance *, const void *  buffer, size_t size, size_t count))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = this;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__TempFile->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Write]);
__internal_VirtualMethod ? __internal_VirtualMethod(this, &ch, 1, 1) : (size_t)1;
}));

return written != 0;
}

unsigned int __eCMethod___eCNameSpace__eC__files__TempFile_Puts(struct __eCNameSpace__eC__types__Instance * this, const char * string)
{
__attribute__((unused)) struct __eCNameSpace__eC__files__TempFile * __eCPointer___eCNameSpace__eC__files__TempFile = (struct __eCNameSpace__eC__files__TempFile *)(this ? (((char *)this) + __eCClass___eCNameSpace__eC__files__TempFile->offset) : 0);
int len = string ? strlen(string) : 0;
long long written = (__extension__ ({
size_t (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const void *  buffer, size_t size, size_t count);

__internal_VirtualMethod = ((size_t (*)(struct __eCNameSpace__eC__types__Instance *, const void *  buffer, size_t size, size_t count))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = this;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__TempFile->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Write]);
__internal_VirtualMethod ? __internal_VirtualMethod(this, string, 1, len) : (size_t)1;
}));

return written == len;
}

unsigned int __eCMethod___eCNameSpace__eC__files__TempFile_Seek(struct __eCNameSpace__eC__types__Instance * this, long long pos, int mode)
{
__attribute__((unused)) struct __eCNameSpace__eC__files__TempFile * __eCPointer___eCNameSpace__eC__files__TempFile = (struct __eCNameSpace__eC__files__TempFile *)(this ? (((char *)this) + __eCClass___eCNameSpace__eC__files__TempFile->offset) : 0);
unsigned int result = 1;
uint64 increase = 0;

switch(mode)
{
case 0:
{
if(pos >= __eCPointer___eCNameSpace__eC__files__TempFile->size)
{
if(__eCPointer___eCNameSpace__eC__files__TempFile->openMode == 4)
{
__eCPointer___eCNameSpace__eC__files__TempFile->position = pos;
increase = pos - __eCPointer___eCNameSpace__eC__files__TempFile->size;
}
else
{
__eCPointer___eCNameSpace__eC__files__TempFile->position = __eCPointer___eCNameSpace__eC__files__TempFile->size;
result = 0;
}
}
else if(pos < 0)
{
__eCPointer___eCNameSpace__eC__files__TempFile->position = 0;
result = 0;
}
else
__eCPointer___eCNameSpace__eC__files__TempFile->position = pos;
break;
}
case 1:
{
if(__eCPointer___eCNameSpace__eC__files__TempFile->position + pos >= __eCPointer___eCNameSpace__eC__files__TempFile->size)
{
if(__eCPointer___eCNameSpace__eC__files__TempFile->openMode == 4)
{
__eCPointer___eCNameSpace__eC__files__TempFile->position += pos;
increase = __eCPointer___eCNameSpace__eC__files__TempFile->position - __eCPointer___eCNameSpace__eC__files__TempFile->size;
}
else
{
__eCPointer___eCNameSpace__eC__files__TempFile->position = __eCPointer___eCNameSpace__eC__files__TempFile->size;
result = 0;
}
}
else if((long long)__eCPointer___eCNameSpace__eC__files__TempFile->position + pos < 0)
{
__eCPointer___eCNameSpace__eC__files__TempFile->position = 0;
result = 0;
}
else
__eCPointer___eCNameSpace__eC__files__TempFile->position += pos;
break;
}
case 2:
{
if((long long)__eCPointer___eCNameSpace__eC__files__TempFile->size + pos >= (long long)__eCPointer___eCNameSpace__eC__files__TempFile->size)
{
if(__eCPointer___eCNameSpace__eC__files__TempFile->openMode == 4)
{
__eCPointer___eCNameSpace__eC__files__TempFile->position = __eCPointer___eCNameSpace__eC__files__TempFile->size + pos;
increase = __eCPointer___eCNameSpace__eC__files__TempFile->position - __eCPointer___eCNameSpace__eC__files__TempFile->size;
}
else
{
__eCPointer___eCNameSpace__eC__files__TempFile->position = __eCPointer___eCNameSpace__eC__files__TempFile->size;
result = 0;
}
}
else if((int)__eCPointer___eCNameSpace__eC__files__TempFile->size + pos < 0)
{
__eCPointer___eCNameSpace__eC__files__TempFile->position = 0;
result = 0;
}
else
__eCPointer___eCNameSpace__eC__files__TempFile->position = __eCPointer___eCNameSpace__eC__files__TempFile->size + pos;
break;
}
}
if(result)
__eCPointer___eCNameSpace__eC__files__TempFile->eof = 0;
if(increase)
{
__eCPointer___eCNameSpace__eC__files__TempFile->size += increase;
if(__eCPointer___eCNameSpace__eC__files__TempFile->size > __eCPointer___eCNameSpace__eC__files__TempFile->allocated)
{
__eCPointer___eCNameSpace__eC__files__TempFile->allocated = __eCPointer___eCNameSpace__eC__files__TempFile->size;
__eCPointer___eCNameSpace__eC__files__TempFile->buffer = __eCNameSpace__eC__types__eSystem_Renew0(__eCPointer___eCNameSpace__eC__files__TempFile->buffer, sizeof(unsigned char) * (__eCPointer___eCNameSpace__eC__files__TempFile->size));
}
}
return result;
}

uint64 __eCMethod___eCNameSpace__eC__files__TempFile_Tell(struct __eCNameSpace__eC__types__Instance * this)
{
__attribute__((unused)) struct __eCNameSpace__eC__files__TempFile * __eCPointer___eCNameSpace__eC__files__TempFile = (struct __eCNameSpace__eC__files__TempFile *)(this ? (((char *)this) + __eCClass___eCNameSpace__eC__files__TempFile->offset) : 0);

return __eCPointer___eCNameSpace__eC__files__TempFile->position;
}

unsigned int __eCMethod___eCNameSpace__eC__files__TempFile_Eof(struct __eCNameSpace__eC__types__Instance * this)
{
__attribute__((unused)) struct __eCNameSpace__eC__files__TempFile * __eCPointer___eCNameSpace__eC__files__TempFile = (struct __eCNameSpace__eC__files__TempFile *)(this ? (((char *)this) + __eCClass___eCNameSpace__eC__files__TempFile->offset) : 0);

return __eCPointer___eCNameSpace__eC__files__TempFile->eof;
}

uint64 __eCMethod___eCNameSpace__eC__files__TempFile_GetSize(struct __eCNameSpace__eC__types__Instance * this)
{
__attribute__((unused)) struct __eCNameSpace__eC__files__TempFile * __eCPointer___eCNameSpace__eC__files__TempFile = (struct __eCNameSpace__eC__files__TempFile *)(this ? (((char *)this) + __eCClass___eCNameSpace__eC__files__TempFile->offset) : 0);

return __eCPointer___eCNameSpace__eC__files__TempFile->size;
}

unsigned int __eCMethod___eCNameSpace__eC__files__TempFile_Truncate(struct __eCNameSpace__eC__types__Instance * this, uint64 size)
{
__attribute__((unused)) struct __eCNameSpace__eC__files__TempFile * __eCPointer___eCNameSpace__eC__files__TempFile = (struct __eCNameSpace__eC__files__TempFile *)(this ? (((char *)this) + __eCClass___eCNameSpace__eC__files__TempFile->offset) : 0);

__eCPointer___eCNameSpace__eC__files__TempFile->buffer = __eCNameSpace__eC__types__eSystem_Renew(__eCPointer___eCNameSpace__eC__files__TempFile->buffer, sizeof(unsigned char) * (size));
__eCPointer___eCNameSpace__eC__files__TempFile->size = size;
__eCPointer___eCNameSpace__eC__files__TempFile->allocated = size;
if(__eCPointer___eCNameSpace__eC__files__TempFile->position > size)
__eCPointer___eCNameSpace__eC__files__TempFile->position = size;
return 1;
}

int __eCProp___eCNameSpace__eC__files__TempFile_Get_openMode(struct __eCNameSpace__eC__types__Instance * this)
{
__attribute__((unused)) struct __eCNameSpace__eC__files__TempFile * __eCPointer___eCNameSpace__eC__files__TempFile = (struct __eCNameSpace__eC__files__TempFile *)(this ? (((char *)this) + __eCClass___eCNameSpace__eC__files__TempFile->offset) : 0);

return __eCPointer___eCNameSpace__eC__files__TempFile->openMode;
}

void __eCProp___eCNameSpace__eC__files__TempFile_Set_openMode(struct __eCNameSpace__eC__types__Instance * this, int value)
{
__attribute__((unused)) struct __eCNameSpace__eC__files__TempFile * __eCPointer___eCNameSpace__eC__files__TempFile = (struct __eCNameSpace__eC__files__TempFile *)(this ? (((char *)this) + __eCClass___eCNameSpace__eC__files__TempFile->offset) : 0);

__eCPointer___eCNameSpace__eC__files__TempFile->openMode = value;
__eCProp___eCNameSpace__eC__files__TempFile_openMode && __eCProp___eCNameSpace__eC__files__TempFile_openMode->selfWatchable ? __eCNameSpace__eC__types__eInstance_FireSelfWatchers(this, __eCProp___eCNameSpace__eC__files__TempFile_openMode) : (void)0, __eCPropM___eCNameSpace__eC__files__TempFile_openMode && __eCPropM___eCNameSpace__eC__files__TempFile_openMode->selfWatchable ? __eCNameSpace__eC__types__eInstance_FireSelfWatchers(this, __eCPropM___eCNameSpace__eC__files__TempFile_openMode) : (void)0;
}

unsigned char *  __eCProp___eCNameSpace__eC__files__TempFile_Get_buffer(struct __eCNameSpace__eC__types__Instance * this)
{
__attribute__((unused)) struct __eCNameSpace__eC__files__TempFile * __eCPointer___eCNameSpace__eC__files__TempFile = (struct __eCNameSpace__eC__files__TempFile *)(this ? (((char *)this) + __eCClass___eCNameSpace__eC__files__TempFile->offset) : 0);

return __eCPointer___eCNameSpace__eC__files__TempFile->buffer;
}

void __eCProp___eCNameSpace__eC__files__TempFile_Set_buffer(struct __eCNameSpace__eC__types__Instance * this, unsigned char *  value)
{
__attribute__((unused)) struct __eCNameSpace__eC__files__TempFile * __eCPointer___eCNameSpace__eC__files__TempFile = (struct __eCNameSpace__eC__files__TempFile *)(this ? (((char *)this) + __eCClass___eCNameSpace__eC__files__TempFile->offset) : 0);

(__eCNameSpace__eC__types__eSystem_Delete(__eCPointer___eCNameSpace__eC__files__TempFile->buffer), __eCPointer___eCNameSpace__eC__files__TempFile->buffer = 0);
__eCPointer___eCNameSpace__eC__files__TempFile->buffer = value;
__eCProp___eCNameSpace__eC__files__TempFile_buffer && __eCProp___eCNameSpace__eC__files__TempFile_buffer->selfWatchable ? __eCNameSpace__eC__types__eInstance_FireSelfWatchers(this, __eCProp___eCNameSpace__eC__files__TempFile_buffer) : (void)0, __eCPropM___eCNameSpace__eC__files__TempFile_buffer && __eCPropM___eCNameSpace__eC__files__TempFile_buffer->selfWatchable ? __eCNameSpace__eC__types__eInstance_FireSelfWatchers(this, __eCPropM___eCNameSpace__eC__files__TempFile_buffer) : (void)0;
}

size_t __eCProp___eCNameSpace__eC__files__TempFile_Get_size(struct __eCNameSpace__eC__types__Instance * this)
{
__attribute__((unused)) struct __eCNameSpace__eC__files__TempFile * __eCPointer___eCNameSpace__eC__files__TempFile = (struct __eCNameSpace__eC__files__TempFile *)(this ? (((char *)this) + __eCClass___eCNameSpace__eC__files__TempFile->offset) : 0);

return __eCPointer___eCNameSpace__eC__files__TempFile->size;
}

void __eCProp___eCNameSpace__eC__files__TempFile_Set_size(struct __eCNameSpace__eC__types__Instance * this, size_t value)
{
__attribute__((unused)) struct __eCNameSpace__eC__files__TempFile * __eCPointer___eCNameSpace__eC__files__TempFile = (struct __eCNameSpace__eC__files__TempFile *)(this ? (((char *)this) + __eCClass___eCNameSpace__eC__files__TempFile->offset) : 0);

__eCPointer___eCNameSpace__eC__files__TempFile->size = value;
__eCProp___eCNameSpace__eC__files__TempFile_size && __eCProp___eCNameSpace__eC__files__TempFile_size->selfWatchable ? __eCNameSpace__eC__types__eInstance_FireSelfWatchers(this, __eCProp___eCNameSpace__eC__files__TempFile_size) : (void)0, __eCPropM___eCNameSpace__eC__files__TempFile_size && __eCPropM___eCNameSpace__eC__files__TempFile_size->selfWatchable ? __eCNameSpace__eC__types__eInstance_FireSelfWatchers(this, __eCPropM___eCNameSpace__eC__files__TempFile_size) : (void)0;
}

size_t __eCProp___eCNameSpace__eC__files__TempFile_Get_allocated(struct __eCNameSpace__eC__types__Instance * this)
{
__attribute__((unused)) struct __eCNameSpace__eC__files__TempFile * __eCPointer___eCNameSpace__eC__files__TempFile = (struct __eCNameSpace__eC__files__TempFile *)(this ? (((char *)this) + __eCClass___eCNameSpace__eC__files__TempFile->offset) : 0);

return __eCPointer___eCNameSpace__eC__files__TempFile->allocated;
}

void __eCProp___eCNameSpace__eC__files__TempFile_Set_allocated(struct __eCNameSpace__eC__types__Instance * this, size_t value)
{
__attribute__((unused)) struct __eCNameSpace__eC__files__TempFile * __eCPointer___eCNameSpace__eC__files__TempFile = (struct __eCNameSpace__eC__files__TempFile *)(this ? (((char *)this) + __eCClass___eCNameSpace__eC__files__TempFile->offset) : 0);

__eCPointer___eCNameSpace__eC__files__TempFile->allocated = value;
__eCProp___eCNameSpace__eC__files__TempFile_allocated && __eCProp___eCNameSpace__eC__files__TempFile_allocated->selfWatchable ? __eCNameSpace__eC__types__eInstance_FireSelfWatchers(this, __eCProp___eCNameSpace__eC__files__TempFile_allocated) : (void)0, __eCPropM___eCNameSpace__eC__files__TempFile_allocated && __eCPropM___eCNameSpace__eC__files__TempFile_allocated->selfWatchable ? __eCNameSpace__eC__types__eInstance_FireSelfWatchers(this, __eCPropM___eCNameSpace__eC__files__TempFile_allocated) : (void)0;
}

unsigned char * __eCMethod___eCNameSpace__eC__files__TempFile_StealBuffer(struct __eCNameSpace__eC__types__Instance * this)
{
__attribute__((unused)) struct __eCNameSpace__eC__files__TempFile * __eCPointer___eCNameSpace__eC__files__TempFile = (struct __eCNameSpace__eC__files__TempFile *)(this ? (((char *)this) + __eCClass___eCNameSpace__eC__files__TempFile->offset) : 0);
unsigned char * result = __eCPointer___eCNameSpace__eC__files__TempFile->buffer;

__eCPointer___eCNameSpace__eC__files__TempFile->buffer = (((void *)0));
return result;
}

void __eCUnregisterModule_TempFile(struct __eCNameSpace__eC__types__Instance * module)
{

__eCPropM___eCNameSpace__eC__files__TempFile_openMode = (void *)0;
__eCPropM___eCNameSpace__eC__files__TempFile_buffer = (void *)0;
__eCPropM___eCNameSpace__eC__files__TempFile_size = (void *)0;
__eCPropM___eCNameSpace__eC__files__TempFile_allocated = (void *)0;
}

void __eCRegisterModule_TempFile(struct __eCNameSpace__eC__types__Instance * module)
{
struct __eCNameSpace__eC__types__Class __attribute__((unused)) * class;

class = __eCNameSpace__eC__types__eSystem_RegisterClass(0, "eC::files::TempFile", "eC::files::File", sizeof(struct __eCNameSpace__eC__files__TempFile), 0, (void *)__eCConstructor___eCNameSpace__eC__files__TempFile, (void *)__eCDestructor___eCNameSpace__eC__files__TempFile, module, 1, 1);
if(((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application == ((struct __eCNameSpace__eC__types__Module *)(((char *)__thisModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->application && class)
__eCClass___eCNameSpace__eC__files__TempFile = class;
__eCNameSpace__eC__types__eClass_AddMethod(class, "Seek", 0, __eCMethod___eCNameSpace__eC__files__TempFile_Seek, 1);
__eCNameSpace__eC__types__eClass_AddMethod(class, "Tell", 0, __eCMethod___eCNameSpace__eC__files__TempFile_Tell, 1);
__eCNameSpace__eC__types__eClass_AddMethod(class, "Read", 0, __eCMethod___eCNameSpace__eC__files__TempFile_Read, 1);
__eCNameSpace__eC__types__eClass_AddMethod(class, "Write", 0, __eCMethod___eCNameSpace__eC__files__TempFile_Write, 1);
__eCNameSpace__eC__types__eClass_AddMethod(class, "Getc", 0, __eCMethod___eCNameSpace__eC__files__TempFile_Getc, 1);
__eCNameSpace__eC__types__eClass_AddMethod(class, "Putc", 0, __eCMethod___eCNameSpace__eC__files__TempFile_Putc, 1);
__eCNameSpace__eC__types__eClass_AddMethod(class, "Puts", 0, __eCMethod___eCNameSpace__eC__files__TempFile_Puts, 1);
__eCNameSpace__eC__types__eClass_AddMethod(class, "Eof", 0, __eCMethod___eCNameSpace__eC__files__TempFile_Eof, 1);
__eCNameSpace__eC__types__eClass_AddMethod(class, "Truncate", 0, __eCMethod___eCNameSpace__eC__files__TempFile_Truncate, 1);
__eCNameSpace__eC__types__eClass_AddMethod(class, "GetSize", 0, __eCMethod___eCNameSpace__eC__files__TempFile_GetSize, 1);
__eCNameSpace__eC__types__eClass_AddMethod(class, "StealBuffer", "byte * StealBuffer()", __eCMethod___eCNameSpace__eC__files__TempFile_StealBuffer, 1);
__eCPropM___eCNameSpace__eC__files__TempFile_openMode = __eCNameSpace__eC__types__eClass_AddProperty(class, "openMode", "eC::files::FileOpenMode", __eCProp___eCNameSpace__eC__files__TempFile_Set_openMode, __eCProp___eCNameSpace__eC__files__TempFile_Get_openMode, 1);
if(((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application == ((struct __eCNameSpace__eC__types__Module *)(((char *)__thisModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->application)
__eCProp___eCNameSpace__eC__files__TempFile_openMode = __eCPropM___eCNameSpace__eC__files__TempFile_openMode, __eCPropM___eCNameSpace__eC__files__TempFile_openMode = (void *)0;
__eCPropM___eCNameSpace__eC__files__TempFile_buffer = __eCNameSpace__eC__types__eClass_AddProperty(class, "buffer", "byte *", __eCProp___eCNameSpace__eC__files__TempFile_Set_buffer, __eCProp___eCNameSpace__eC__files__TempFile_Get_buffer, 1);
if(((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application == ((struct __eCNameSpace__eC__types__Module *)(((char *)__thisModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->application)
__eCProp___eCNameSpace__eC__files__TempFile_buffer = __eCPropM___eCNameSpace__eC__files__TempFile_buffer, __eCPropM___eCNameSpace__eC__files__TempFile_buffer = (void *)0;
__eCPropM___eCNameSpace__eC__files__TempFile_size = __eCNameSpace__eC__types__eClass_AddProperty(class, "size", "uintsize", __eCProp___eCNameSpace__eC__files__TempFile_Set_size, __eCProp___eCNameSpace__eC__files__TempFile_Get_size, 1);
if(((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application == ((struct __eCNameSpace__eC__types__Module *)(((char *)__thisModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->application)
__eCProp___eCNameSpace__eC__files__TempFile_size = __eCPropM___eCNameSpace__eC__files__TempFile_size, __eCPropM___eCNameSpace__eC__files__TempFile_size = (void *)0;
__eCPropM___eCNameSpace__eC__files__TempFile_allocated = __eCNameSpace__eC__types__eClass_AddProperty(class, "allocated", "uintsize", __eCProp___eCNameSpace__eC__files__TempFile_Set_allocated, __eCProp___eCNameSpace__eC__files__TempFile_Get_allocated, 1);
if(((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application == ((struct __eCNameSpace__eC__types__Module *)(((char *)__thisModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->application)
__eCProp___eCNameSpace__eC__files__TempFile_allocated = __eCPropM___eCNameSpace__eC__files__TempFile_allocated, __eCPropM___eCNameSpace__eC__files__TempFile_allocated = (void *)0;
__eCNameSpace__eC__types__eClass_AddDataMember(class, (((void *)0)), (((void *)0)), 0, sizeof(void *) > 4 ? sizeof(void *) : 4, 2);
}

