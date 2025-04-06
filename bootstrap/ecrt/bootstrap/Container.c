/* Code generated from eC source file: Container.ec */
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
extern int __eCVMethodID_class_OnCompare;

extern int __eCVMethodID_class_OnGetString;

extern int __eCVMethodID_class_OnSerialize;

extern int __eCVMethodID_class_OnUnserialize;

extern struct __eCNameSpace__eC__types__Property * __eCProp___eCNameSpace__eC__types__Class_char__PTR_;

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

struct __eCNameSpace__eC__containers__IteratorPointer;

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

extern int strcmp(const char * , const char * );

extern char *  strcat(char * , const char * );

extern void *  memset(void *  area, int value, size_t count);

extern unsigned int __eCNameSpace__eC__types__log2i(unsigned int number);

struct __eCNameSpace__eC__types__ClassTemplateParameter;

extern int __eCVMethodID_class_OnCompare;

extern int __eCVMethodID_class_OnCopy;

extern int __eCVMethodID_class_OnGetString;

extern int __eCVMethodID_class_OnFree;

struct __eCNameSpace__eC__types__Property;

static __attribute__((unused)) struct __eCNameSpace__eC__types__Property * __eCProp___eCNameSpace__eC__types__Iterator_data, * __eCPropM___eCNameSpace__eC__types__Iterator_data;

static __attribute__((unused)) struct __eCNameSpace__eC__types__Property * __eCProp___eCNameSpace__eC__containers__Container_copySrc, * __eCPropM___eCNameSpace__eC__containers__Container_copySrc;

static __attribute__((unused)) struct __eCNameSpace__eC__types__Property * __eCProp___eCNameSpace__eC__containers__Container_firstIterator, * __eCPropM___eCNameSpace__eC__containers__Container_firstIterator;

static __attribute__((unused)) struct __eCNameSpace__eC__types__Property * __eCProp___eCNameSpace__eC__containers__Container_lastIterator, * __eCPropM___eCNameSpace__eC__containers__Container_lastIterator;

struct __eCNameSpace__eC__types__Class;

struct __eCNameSpace__eC__types__Instance
{
void * *  _vTbl;
struct __eCNameSpace__eC__types__Class * _class;
int _refCount;
} eC_gcc_struct;

extern long long __eCNameSpace__eC__types__eClass_GetProperty(struct __eCNameSpace__eC__types__Class * _class, const char *  name);

extern void __eCNameSpace__eC__types__eClass_SetProperty(struct __eCNameSpace__eC__types__Class * _class, const char *  name, long long value);

extern void *  __eCNameSpace__eC__types__eInstance_New(struct __eCNameSpace__eC__types__Class * _class);

extern struct __eCNameSpace__eC__types__Property * __eCNameSpace__eC__types__eClass_AddProperty(struct __eCNameSpace__eC__types__Class * _class, const char *  name, const char *  dataType, void *  setStmt, void *  getStmt, int declMode);

extern void __eCNameSpace__eC__types__eClass_DoneAddingTemplateParameters(struct __eCNameSpace__eC__types__Class * base);

extern int __eCVMethodID___eCNameSpace__eC__containers__Container_GetFirst;

extern int __eCVMethodID___eCNameSpace__eC__containers__Container_GetLast;

extern int __eCVMethodID___eCNameSpace__eC__containers__Container_GetPrev;

extern int __eCVMethodID___eCNameSpace__eC__containers__Container_GetNext;

extern int __eCVMethodID___eCNameSpace__eC__containers__Container_GetData;

extern int __eCVMethodID___eCNameSpace__eC__containers__Container_SetData;

extern int __eCVMethodID___eCNameSpace__eC__containers__Container_GetAtPosition;

extern int __eCVMethodID___eCNameSpace__eC__containers__Container_Insert;

extern int __eCVMethodID___eCNameSpace__eC__containers__Container_Add;

extern int __eCVMethodID___eCNameSpace__eC__containers__Container_Remove;

extern int __eCVMethodID___eCNameSpace__eC__containers__Container_Move;

extern int __eCVMethodID___eCNameSpace__eC__containers__Container_RemoveAll;

extern int __eCVMethodID___eCNameSpace__eC__containers__Container_Copy;

extern int __eCVMethodID___eCNameSpace__eC__containers__Container_Find;

extern int __eCVMethodID___eCNameSpace__eC__containers__Container_FreeIterator;

extern int __eCVMethodID___eCNameSpace__eC__containers__Container_GetCount;

extern int __eCVMethodID___eCNameSpace__eC__containers__Container_Free;

extern int __eCVMethodID___eCNameSpace__eC__containers__Container_Delete;

extern int __eCVMethodID___eCNameSpace__eC__containers__Container_Sort;

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

struct __eCNameSpace__eC__types__Iterator
{
struct __eCNameSpace__eC__types__Instance * container;
struct __eCNameSpace__eC__containers__IteratorPointer * pointer;
} eC_gcc_struct;

void __eCProp___eCNameSpace__eC__containers__Container_Set_copySrc(struct __eCNameSpace__eC__types__Instance * this, struct __eCNameSpace__eC__types__Instance * value);

struct __eCNameSpace__eC__containers__IteratorPointer * __eCMethod___eCNameSpace__eC__containers__Container_GetFirst(struct __eCNameSpace__eC__types__Instance * this)
{
return (((void *)0));
}

struct __eCNameSpace__eC__containers__IteratorPointer * __eCMethod___eCNameSpace__eC__containers__Container_GetLast(struct __eCNameSpace__eC__types__Instance * this)
{
return (((void *)0));
}

struct __eCNameSpace__eC__containers__IteratorPointer * __eCMethod___eCNameSpace__eC__containers__Container_GetPrev(struct __eCNameSpace__eC__types__Instance * this, struct __eCNameSpace__eC__containers__IteratorPointer * pointer)
{
return (((void *)0));
}

struct __eCNameSpace__eC__containers__IteratorPointer * __eCMethod___eCNameSpace__eC__containers__Container_GetNext(struct __eCNameSpace__eC__types__Instance * this, struct __eCNameSpace__eC__containers__IteratorPointer * pointer)
{
return (((void *)0));
}

uint64 __eCMethod___eCNameSpace__eC__containers__Container_GetData(struct __eCNameSpace__eC__types__Instance * this, struct __eCNameSpace__eC__containers__IteratorPointer * pointer)
{
return (uint64)0;
}

struct __eCNameSpace__eC__containers__IteratorPointer * __eCMethod___eCNameSpace__eC__containers__Container_GetAtPosition(struct __eCNameSpace__eC__types__Instance * this, const uint64 pos, unsigned int create, unsigned int * justAdded)
{
return (((void *)0));
}

extern int __eCVMethodID_class_OnSerialize;

extern int __eCVMethodID_class_OnUnserialize;

extern void __eCNameSpace__eC__types__eInstance_DecRef(struct __eCNameSpace__eC__types__Instance * instance);

void __eCMethod___eCNameSpace__eC__types__IOChannel_Put(struct __eCNameSpace__eC__types__Instance * this, struct __eCNameSpace__eC__types__Class * class, const void * data);

void __eCMethod___eCNameSpace__eC__types__IOChannel_Get(struct __eCNameSpace__eC__types__Instance * this, struct __eCNameSpace__eC__types__Class * class, void * *  data);

uint64 __eCProp___eCNameSpace__eC__types__Iterator_Get_data(struct __eCNameSpace__eC__types__Iterator * this);

void __eCProp___eCNameSpace__eC__types__Iterator_Set_data(struct __eCNameSpace__eC__types__Iterator * this, uint64 value);

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

extern struct __eCNameSpace__eC__types__ClassTemplateParameter * __eCNameSpace__eC__types__eClass_AddTemplateParameter(struct __eCNameSpace__eC__types__Class * _class, const char *  name, int type, const void *  info, struct __eCNameSpace__eC__types__ClassTemplateArgument * defaultArg);

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

static struct __eCNameSpace__eC__types__Class * __eCClass___eCNameSpace__eC__types__Iterator;

static struct __eCNameSpace__eC__types__Class * __eCClass___eCNameSpace__eC__containers__Container;

void __eCMethod___eCNameSpace__eC__containers__Container_OnFree(struct __eCNameSpace__eC__types__Class * class, struct __eCNameSpace__eC__types__Instance * this)
{
if((struct __eCNameSpace__eC__types__Instance *)this)
{
(__extension__ ({
void (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *);

__internal_VirtualMethod = ((void (*)(struct __eCNameSpace__eC__types__Instance *))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = this;

__internal_ClassInst ? __internal_ClassInst->_vTbl : class->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__containers__Container_Free]);
__internal_VirtualMethod ? __internal_VirtualMethod(this) : (void)1;
}));
(__eCNameSpace__eC__types__eInstance_DecRef(this), this = 0);
}
}

extern struct __eCNameSpace__eC__types__Class * __eCClass_int;

extern struct __eCNameSpace__eC__types__Class * __eCClass___eCNameSpace__eC__types__Instance;

extern struct __eCNameSpace__eC__types__Class * __eCClass_int64;

extern struct __eCNameSpace__eC__types__Class * __eCClass_uint64;

extern struct __eCNameSpace__eC__types__Class * __eCClass_uint;

const char *  __eCProp___eCNameSpace__eC__types__Class_Get_char__PTR_(struct __eCNameSpace__eC__types__Class * this);

struct __eCNameSpace__eC__types__Class * __eCProp___eCNameSpace__eC__types__Class_Set_char__PTR_(const char *  value);

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

uint64 __eCProp___eCNameSpace__eC__types__Iterator_Get_data(struct __eCNameSpace__eC__types__Iterator * this)
{
return (__extension__ ({
uint64 (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, struct __eCNameSpace__eC__containers__IteratorPointer * pointer);

__internal_VirtualMethod = ((uint64 (*)(struct __eCNameSpace__eC__types__Instance *, struct __eCNameSpace__eC__containers__IteratorPointer * pointer))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = this->container;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__containers__Container->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__containers__Container_GetData]);
__internal_VirtualMethod ? __internal_VirtualMethod(this->container, this->pointer) : (uint64)1;
}));
}

void __eCProp___eCNameSpace__eC__types__Iterator_Set_data(struct __eCNameSpace__eC__types__Iterator * this, uint64 value)
{
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, struct __eCNameSpace__eC__containers__IteratorPointer * pointer, uint64 data);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, struct __eCNameSpace__eC__containers__IteratorPointer * pointer, uint64 data))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = this->container;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__containers__Container->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__containers__Container_SetData]);
__internal_VirtualMethod ? __internal_VirtualMethod(this->container, this->pointer, value) : (unsigned int)1;
}));
}

unsigned int __eCMethod___eCNameSpace__eC__types__Iterator_Prev(struct __eCNameSpace__eC__types__Iterator * this)
{
if(this->pointer && this->container)
this->pointer = (__extension__ ({
struct __eCNameSpace__eC__containers__IteratorPointer * (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, struct __eCNameSpace__eC__containers__IteratorPointer * pointer);

__internal_VirtualMethod = ((struct __eCNameSpace__eC__containers__IteratorPointer * (*)(struct __eCNameSpace__eC__types__Instance *, struct __eCNameSpace__eC__containers__IteratorPointer * pointer))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = this->container;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__containers__Container->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__containers__Container_GetPrev]);
__internal_VirtualMethod ? __internal_VirtualMethod(this->container, this->pointer) : (struct __eCNameSpace__eC__containers__IteratorPointer *)1;
}));
else if(this->container)
this->pointer = (__extension__ ({
struct __eCNameSpace__eC__containers__IteratorPointer * (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *);

__internal_VirtualMethod = ((struct __eCNameSpace__eC__containers__IteratorPointer * (*)(struct __eCNameSpace__eC__types__Instance *))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = this->container;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__containers__Container->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__containers__Container_GetLast]);
__internal_VirtualMethod ? __internal_VirtualMethod(this->container) : (struct __eCNameSpace__eC__containers__IteratorPointer *)1;
}));
return this->pointer != (((void *)0));
}

unsigned int __eCMethod___eCNameSpace__eC__types__Iterator_Next(struct __eCNameSpace__eC__types__Iterator * this)
{
if(this->pointer && this->container)
this->pointer = (__extension__ ({
struct __eCNameSpace__eC__containers__IteratorPointer * (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, struct __eCNameSpace__eC__containers__IteratorPointer * pointer);

__internal_VirtualMethod = ((struct __eCNameSpace__eC__containers__IteratorPointer * (*)(struct __eCNameSpace__eC__types__Instance *, struct __eCNameSpace__eC__containers__IteratorPointer * pointer))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = this->container;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__containers__Container->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__containers__Container_GetNext]);
__internal_VirtualMethod ? __internal_VirtualMethod(this->container, this->pointer) : (struct __eCNameSpace__eC__containers__IteratorPointer *)1;
}));
else if(this->container)
this->pointer = (__extension__ ({
struct __eCNameSpace__eC__containers__IteratorPointer * (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *);

__internal_VirtualMethod = ((struct __eCNameSpace__eC__containers__IteratorPointer * (*)(struct __eCNameSpace__eC__types__Instance *))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = this->container;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__containers__Container->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__containers__Container_GetFirst]);
__internal_VirtualMethod ? __internal_VirtualMethod(this->container) : (struct __eCNameSpace__eC__containers__IteratorPointer *)1;
}));
return this->pointer != (((void *)0));
}

uint64 __eCMethod___eCNameSpace__eC__types__Iterator_GetData(struct __eCNameSpace__eC__types__Iterator * this)
{
return (__extension__ ({
uint64 (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, struct __eCNameSpace__eC__containers__IteratorPointer * pointer);

__internal_VirtualMethod = ((uint64 (*)(struct __eCNameSpace__eC__types__Instance *, struct __eCNameSpace__eC__containers__IteratorPointer * pointer))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = this->container;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__containers__Container->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__containers__Container_GetData]);
__internal_VirtualMethod ? __internal_VirtualMethod(this->container, this->pointer) : (uint64)1;
}));
}

unsigned int __eCMethod___eCNameSpace__eC__types__Iterator_SetData(struct __eCNameSpace__eC__types__Iterator * this, uint64 value)
{
return (__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, struct __eCNameSpace__eC__containers__IteratorPointer * pointer, uint64 data);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, struct __eCNameSpace__eC__containers__IteratorPointer * pointer, uint64 data))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = this->container;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__containers__Container->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__containers__Container_SetData]);
__internal_VirtualMethod ? __internal_VirtualMethod(this->container, this->pointer, value) : (unsigned int)1;
}));
}

void __eCMethod___eCNameSpace__eC__types__Iterator_Remove(struct __eCNameSpace__eC__types__Iterator * this)
{
if(this->container)
(__extension__ ({
void (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, struct __eCNameSpace__eC__containers__IteratorPointer * it);

__internal_VirtualMethod = ((void (*)(struct __eCNameSpace__eC__types__Instance *, struct __eCNameSpace__eC__containers__IteratorPointer * it))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = this->container;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__containers__Container->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__containers__Container_Remove]);
__internal_VirtualMethod ? __internal_VirtualMethod(this->container, this->pointer) : (void)1;
}));
this->pointer = (((void *)0));
}

void __eCMethod___eCNameSpace__eC__types__Iterator_Free(struct __eCNameSpace__eC__types__Iterator * this)
{
if(this->container)
(__extension__ ({
void (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, struct __eCNameSpace__eC__containers__IteratorPointer * it);

__internal_VirtualMethod = ((void (*)(struct __eCNameSpace__eC__types__Instance *, struct __eCNameSpace__eC__containers__IteratorPointer * it))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = this->container;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__containers__Container->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__containers__Container_FreeIterator]);
__internal_VirtualMethod ? __internal_VirtualMethod(this->container, this->pointer) : (void)1;
}));
}

void __eCDestructor___eCNameSpace__eC__containers__Container(struct __eCNameSpace__eC__types__Instance * this)
{
{
(__extension__ ({
void (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *);

__internal_VirtualMethod = ((void (*)(struct __eCNameSpace__eC__types__Instance *))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = this;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__containers__Container->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__containers__Container_RemoveAll]);
__internal_VirtualMethod ? __internal_VirtualMethod(this) : (void)1;
}));
}
}

void __eCProp___eCNameSpace__eC__containers__Container_Set_copySrc(struct __eCNameSpace__eC__types__Instance * this, struct __eCNameSpace__eC__types__Instance * value)
{
if(value)
(__extension__ ({
void (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, struct __eCNameSpace__eC__types__Instance * source);

__internal_VirtualMethod = ((void (*)(struct __eCNameSpace__eC__types__Instance *, struct __eCNameSpace__eC__types__Instance * source))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = this;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__containers__Container->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__containers__Container_Copy]);
__internal_VirtualMethod ? __internal_VirtualMethod(this, value) : (void)1;
}));
__eCProp___eCNameSpace__eC__containers__Container_copySrc && __eCProp___eCNameSpace__eC__containers__Container_copySrc->selfWatchable ? __eCNameSpace__eC__types__eInstance_FireSelfWatchers(this, __eCProp___eCNameSpace__eC__containers__Container_copySrc) : (void)0, __eCPropM___eCNameSpace__eC__containers__Container_copySrc && __eCPropM___eCNameSpace__eC__containers__Container_copySrc->selfWatchable ? __eCNameSpace__eC__types__eInstance_FireSelfWatchers(this, __eCPropM___eCNameSpace__eC__containers__Container_copySrc) : (void)0;
}

void __eCProp___eCNameSpace__eC__containers__Container_Get_firstIterator(struct __eCNameSpace__eC__types__Instance * this, struct __eCNameSpace__eC__types__Iterator * value)
{
struct __eCNameSpace__eC__types__Iterator __simpleStruct0;

*value = (__simpleStruct0.container = (struct __eCNameSpace__eC__types__Instance *)this, __simpleStruct0.pointer = (__extension__ ({
struct __eCNameSpace__eC__containers__IteratorPointer * (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *);

__internal_VirtualMethod = ((struct __eCNameSpace__eC__containers__IteratorPointer * (*)(struct __eCNameSpace__eC__types__Instance *))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = this;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__containers__Container->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__containers__Container_GetFirst]);
__internal_VirtualMethod ? __internal_VirtualMethod(this) : (struct __eCNameSpace__eC__containers__IteratorPointer *)1;
})), __simpleStruct0);
}

void __eCProp___eCNameSpace__eC__containers__Container_Get_lastIterator(struct __eCNameSpace__eC__types__Instance * this, struct __eCNameSpace__eC__types__Iterator * value)
{
struct __eCNameSpace__eC__types__Iterator __simpleStruct0;

*value = (__simpleStruct0.container = (struct __eCNameSpace__eC__types__Instance *)this, __simpleStruct0.pointer = (__extension__ ({
struct __eCNameSpace__eC__containers__IteratorPointer * (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *);

__internal_VirtualMethod = ((struct __eCNameSpace__eC__containers__IteratorPointer * (*)(struct __eCNameSpace__eC__types__Instance *))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = this;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__containers__Container->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__containers__Container_GetLast]);
__internal_VirtualMethod ? __internal_VirtualMethod(this) : (struct __eCNameSpace__eC__containers__IteratorPointer *)1;
})), __simpleStruct0);
}

void __eCMethod___eCNameSpace__eC__containers__Container_RemoveAll(struct __eCNameSpace__eC__types__Instance * this)
{
struct __eCNameSpace__eC__containers__IteratorPointer * i, * next;

for(i = (__extension__ ({
struct __eCNameSpace__eC__containers__IteratorPointer * (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *);

__internal_VirtualMethod = ((struct __eCNameSpace__eC__containers__IteratorPointer * (*)(struct __eCNameSpace__eC__types__Instance *))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = this;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__containers__Container->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__containers__Container_GetFirst]);
__internal_VirtualMethod ? __internal_VirtualMethod(this) : (struct __eCNameSpace__eC__containers__IteratorPointer *)1;
})), next = i ? (__extension__ ({
struct __eCNameSpace__eC__containers__IteratorPointer * (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, struct __eCNameSpace__eC__containers__IteratorPointer * pointer);

__internal_VirtualMethod = ((struct __eCNameSpace__eC__containers__IteratorPointer * (*)(struct __eCNameSpace__eC__types__Instance *, struct __eCNameSpace__eC__containers__IteratorPointer * pointer))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = this;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__containers__Container->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__containers__Container_GetNext]);
__internal_VirtualMethod ? __internal_VirtualMethod(this, i) : (struct __eCNameSpace__eC__containers__IteratorPointer *)1;
})) : (((void *)0)); i; i = next, next = i ? (__extension__ ({
struct __eCNameSpace__eC__containers__IteratorPointer * (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, struct __eCNameSpace__eC__containers__IteratorPointer * pointer);

__internal_VirtualMethod = ((struct __eCNameSpace__eC__containers__IteratorPointer * (*)(struct __eCNameSpace__eC__types__Instance *, struct __eCNameSpace__eC__containers__IteratorPointer * pointer))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = this;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__containers__Container->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__containers__Container_GetNext]);
__internal_VirtualMethod ? __internal_VirtualMethod(this, i) : (struct __eCNameSpace__eC__containers__IteratorPointer *)1;
})) : (((void *)0)))
(__extension__ ({
void (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, struct __eCNameSpace__eC__containers__IteratorPointer * it);

__internal_VirtualMethod = ((void (*)(struct __eCNameSpace__eC__types__Instance *, struct __eCNameSpace__eC__containers__IteratorPointer * it))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = this;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__containers__Container->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__containers__Container_Remove]);
__internal_VirtualMethod ? __internal_VirtualMethod(this, i) : (void)1;
}));
}

void __eCMethod___eCNameSpace__eC__containers__Container_Copy(struct __eCNameSpace__eC__types__Instance * this, struct __eCNameSpace__eC__types__Instance * source)
{
struct __eCNameSpace__eC__containers__IteratorPointer * i;

(__extension__ ({
void (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *);

__internal_VirtualMethod = ((void (*)(struct __eCNameSpace__eC__types__Instance *))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = this;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__containers__Container->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__containers__Container_RemoveAll]);
__internal_VirtualMethod ? __internal_VirtualMethod(this) : (void)1;
}));
for(i = (__extension__ ({
struct __eCNameSpace__eC__containers__IteratorPointer * (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *);

__internal_VirtualMethod = ((struct __eCNameSpace__eC__containers__IteratorPointer * (*)(struct __eCNameSpace__eC__types__Instance *))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = source;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__containers__Container->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__containers__Container_GetFirst]);
__internal_VirtualMethod ? __internal_VirtualMethod(source) : (struct __eCNameSpace__eC__containers__IteratorPointer *)1;
})); i; i = (__extension__ ({
struct __eCNameSpace__eC__containers__IteratorPointer * (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, struct __eCNameSpace__eC__containers__IteratorPointer * pointer);

__internal_VirtualMethod = ((struct __eCNameSpace__eC__containers__IteratorPointer * (*)(struct __eCNameSpace__eC__types__Instance *, struct __eCNameSpace__eC__containers__IteratorPointer * pointer))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = source;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__containers__Container->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__containers__Container_GetNext]);
__internal_VirtualMethod ? __internal_VirtualMethod(source, i) : (struct __eCNameSpace__eC__containers__IteratorPointer *)1;
})))
{
uint64 data = (__extension__ ({
uint64 (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, struct __eCNameSpace__eC__containers__IteratorPointer * pointer);

__internal_VirtualMethod = ((uint64 (*)(struct __eCNameSpace__eC__types__Instance *, struct __eCNameSpace__eC__containers__IteratorPointer * pointer))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = source;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__containers__Container->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__containers__Container_GetData]);
__internal_VirtualMethod ? __internal_VirtualMethod(source, i) : (uint64)1;
}));

(__extension__ ({
struct __eCNameSpace__eC__containers__IteratorPointer * (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, uint64 value);

__internal_VirtualMethod = ((struct __eCNameSpace__eC__containers__IteratorPointer * (*)(struct __eCNameSpace__eC__types__Instance *, uint64 value))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = this;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__containers__Container->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__containers__Container_Add]);
__internal_VirtualMethod ? __internal_VirtualMethod(this, data) : (struct __eCNameSpace__eC__containers__IteratorPointer *)1;
}));
}
}

int __eCMethod___eCNameSpace__eC__containers__Container_OnCompare(struct __eCNameSpace__eC__types__Class * class, struct __eCNameSpace__eC__types__Instance * this, struct __eCNameSpace__eC__types__Instance * b)
{
struct __eCNameSpace__eC__containers__IteratorPointer * ia, * ib;
struct __eCNameSpace__eC__types__Class * Dclass = class->templateArgs[2].__anon1.__anon1.dataTypeClass;
unsigned int byRef = (Dclass->type == 1000 && !Dclass->byValueSystemClass) || Dclass->type == 2 || Dclass->type == 4 || Dclass->type == 3;
int (* onCompare)(void *, const void *, const void *) = (void *)Dclass->_vTbl[__eCVMethodID_class_OnCompare];

if(this && !b)
return 1;
if(b && !this)
return -1;
if(!b && !this)
return 0;
if((__extension__ ({
int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *);

__internal_VirtualMethod = ((int (*)(struct __eCNameSpace__eC__types__Instance *))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = this;

__internal_ClassInst ? __internal_ClassInst->_vTbl : class->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__containers__Container_GetCount]);
__internal_VirtualMethod ? __internal_VirtualMethod(this) : (int)1;
})) > (__extension__ ({
int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *);

__internal_VirtualMethod = ((int (*)(struct __eCNameSpace__eC__types__Instance *))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = b;

__internal_ClassInst ? __internal_ClassInst->_vTbl : class->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__containers__Container_GetCount]);
__internal_VirtualMethod ? __internal_VirtualMethod(b) : (int)1;
})))
return 1;
if((__extension__ ({
int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *);

__internal_VirtualMethod = ((int (*)(struct __eCNameSpace__eC__types__Instance *))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = this;

__internal_ClassInst ? __internal_ClassInst->_vTbl : class->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__containers__Container_GetCount]);
__internal_VirtualMethod ? __internal_VirtualMethod(this) : (int)1;
})) < (__extension__ ({
int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *);

__internal_VirtualMethod = ((int (*)(struct __eCNameSpace__eC__types__Instance *))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = b;

__internal_ClassInst ? __internal_ClassInst->_vTbl : class->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__containers__Container_GetCount]);
__internal_VirtualMethod ? __internal_VirtualMethod(b) : (int)1;
})))
return -1;
ia = (__extension__ ({
struct __eCNameSpace__eC__containers__IteratorPointer * (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *);

__internal_VirtualMethod = ((struct __eCNameSpace__eC__containers__IteratorPointer * (*)(struct __eCNameSpace__eC__types__Instance *))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = this;

__internal_ClassInst ? __internal_ClassInst->_vTbl : class->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__containers__Container_GetFirst]);
__internal_VirtualMethod ? __internal_VirtualMethod(this) : (struct __eCNameSpace__eC__containers__IteratorPointer *)1;
}));
ib = (__extension__ ({
struct __eCNameSpace__eC__containers__IteratorPointer * (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *);

__internal_VirtualMethod = ((struct __eCNameSpace__eC__containers__IteratorPointer * (*)(struct __eCNameSpace__eC__types__Instance *))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = b;

__internal_ClassInst ? __internal_ClassInst->_vTbl : class->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__containers__Container_GetFirst]);
__internal_VirtualMethod ? __internal_VirtualMethod(b) : (struct __eCNameSpace__eC__containers__IteratorPointer *)1;
}));
while(ia && ib)
{
uint64 dataA = (__extension__ ({
uint64 (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, struct __eCNameSpace__eC__containers__IteratorPointer * pointer);

__internal_VirtualMethod = ((uint64 (*)(struct __eCNameSpace__eC__types__Instance *, struct __eCNameSpace__eC__containers__IteratorPointer * pointer))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = this;

__internal_ClassInst ? __internal_ClassInst->_vTbl : class->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__containers__Container_GetData]);
__internal_VirtualMethod ? __internal_VirtualMethod(this, ia) : (uint64)1;
}));
uint64 dataB = (__extension__ ({
uint64 (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, struct __eCNameSpace__eC__containers__IteratorPointer * pointer);

__internal_VirtualMethod = ((uint64 (*)(struct __eCNameSpace__eC__types__Instance *, struct __eCNameSpace__eC__containers__IteratorPointer * pointer))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = b;

__internal_ClassInst ? __internal_ClassInst->_vTbl : class->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__containers__Container_GetData]);
__internal_VirtualMethod ? __internal_VirtualMethod(b, ib) : (uint64)1;
}));
int r = onCompare(Dclass, byRef ? ((char *)&dataA + __ENDIAN_PAD(class->templateArgs[2].__anon1.__anon1.dataTypeClass->typeSize)) : (const void *)(uintptr_t)dataA, byRef ? ((char *)&dataB + __ENDIAN_PAD(class->templateArgs[2].__anon1.__anon1.dataTypeClass->typeSize)) : (const void *)(uintptr_t)dataB);

if(r)
return r;
ia = (__extension__ ({
struct __eCNameSpace__eC__containers__IteratorPointer * (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, struct __eCNameSpace__eC__containers__IteratorPointer * pointer);

__internal_VirtualMethod = ((struct __eCNameSpace__eC__containers__IteratorPointer * (*)(struct __eCNameSpace__eC__types__Instance *, struct __eCNameSpace__eC__containers__IteratorPointer * pointer))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = this;

__internal_ClassInst ? __internal_ClassInst->_vTbl : class->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__containers__Container_GetNext]);
__internal_VirtualMethod ? __internal_VirtualMethod(this, ia) : (struct __eCNameSpace__eC__containers__IteratorPointer *)1;
}));
ib = (__extension__ ({
struct __eCNameSpace__eC__containers__IteratorPointer * (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, struct __eCNameSpace__eC__containers__IteratorPointer * pointer);

__internal_VirtualMethod = ((struct __eCNameSpace__eC__containers__IteratorPointer * (*)(struct __eCNameSpace__eC__types__Instance *, struct __eCNameSpace__eC__containers__IteratorPointer * pointer))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = b;

__internal_ClassInst ? __internal_ClassInst->_vTbl : class->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__containers__Container_GetNext]);
__internal_VirtualMethod ? __internal_VirtualMethod(b, ib) : (struct __eCNameSpace__eC__containers__IteratorPointer *)1;
}));
}
if(ia)
return 1;
if(ib)
return -1;
return 0;
}

int __eCMethod___eCNameSpace__eC__containers__Container_GetCount(struct __eCNameSpace__eC__types__Instance * this)
{
int count = 0;
struct __eCNameSpace__eC__containers__IteratorPointer * i;

for(i = (__extension__ ({
struct __eCNameSpace__eC__containers__IteratorPointer * (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *);

__internal_VirtualMethod = ((struct __eCNameSpace__eC__containers__IteratorPointer * (*)(struct __eCNameSpace__eC__types__Instance *))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = this;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__containers__Container->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__containers__Container_GetFirst]);
__internal_VirtualMethod ? __internal_VirtualMethod(this) : (struct __eCNameSpace__eC__containers__IteratorPointer *)1;
})); i; i = (__extension__ ({
struct __eCNameSpace__eC__containers__IteratorPointer * (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, struct __eCNameSpace__eC__containers__IteratorPointer * pointer);

__internal_VirtualMethod = ((struct __eCNameSpace__eC__containers__IteratorPointer * (*)(struct __eCNameSpace__eC__types__Instance *, struct __eCNameSpace__eC__containers__IteratorPointer * pointer))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = this;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__containers__Container->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__containers__Container_GetNext]);
__internal_VirtualMethod ? __internal_VirtualMethod(this, i) : (struct __eCNameSpace__eC__containers__IteratorPointer *)1;
})))
count++;
return count;
}

void __eCMethod___eCNameSpace__eC__containers__Container_Free(struct __eCNameSpace__eC__types__Instance * this)
{
struct __eCNameSpace__eC__containers__IteratorPointer * i;

while((i = (__extension__ ({
struct __eCNameSpace__eC__containers__IteratorPointer * (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *);

__internal_VirtualMethod = ((struct __eCNameSpace__eC__containers__IteratorPointer * (*)(struct __eCNameSpace__eC__types__Instance *))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = this;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__containers__Container->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__containers__Container_GetFirst]);
__internal_VirtualMethod ? __internal_VirtualMethod(this) : (struct __eCNameSpace__eC__containers__IteratorPointer *)1;
}))))
(__extension__ ({
void (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, struct __eCNameSpace__eC__containers__IteratorPointer * i);

__internal_VirtualMethod = ((void (*)(struct __eCNameSpace__eC__types__Instance *, struct __eCNameSpace__eC__containers__IteratorPointer * i))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = this;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__containers__Container->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__containers__Container_Delete]);
__internal_VirtualMethod ? __internal_VirtualMethod(this, i) : (void)1;
}));
}

const char * __eCMethod___eCNameSpace__eC__containers__Container_OnGetString(struct __eCNameSpace__eC__types__Class * class, struct __eCNameSpace__eC__types__Instance * this, char * tempString, void * fieldData, unsigned int * onType)
{
if((struct __eCNameSpace__eC__types__Instance *)this)
{
char itemString[4096];
unsigned int first = 1;
struct __eCNameSpace__eC__containers__IteratorPointer * i;

tempString[0] = '\0';
for(i = (__extension__ ({
struct __eCNameSpace__eC__containers__IteratorPointer * (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *);

__internal_VirtualMethod = ((struct __eCNameSpace__eC__containers__IteratorPointer * (*)(struct __eCNameSpace__eC__types__Instance *))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = this;

__internal_ClassInst ? __internal_ClassInst->_vTbl : class->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__containers__Container_GetFirst]);
__internal_VirtualMethod ? __internal_VirtualMethod(this) : (struct __eCNameSpace__eC__containers__IteratorPointer *)1;
})); i; i = (__extension__ ({
struct __eCNameSpace__eC__containers__IteratorPointer * (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, struct __eCNameSpace__eC__containers__IteratorPointer * pointer);

__internal_VirtualMethod = ((struct __eCNameSpace__eC__containers__IteratorPointer * (*)(struct __eCNameSpace__eC__types__Instance *, struct __eCNameSpace__eC__containers__IteratorPointer * pointer))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = this;

__internal_ClassInst ? __internal_ClassInst->_vTbl : class->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__containers__Container_GetNext]);
__internal_VirtualMethod ? __internal_VirtualMethod(this, i) : (struct __eCNameSpace__eC__containers__IteratorPointer *)1;
})))
{
struct __eCNameSpace__eC__types__Class * Dclass = class->templateArgs[2].__anon1.__anon1.dataTypeClass;
uint64 data = (__extension__ ({
uint64 (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, struct __eCNameSpace__eC__containers__IteratorPointer * pointer);

__internal_VirtualMethod = ((uint64 (*)(struct __eCNameSpace__eC__types__Instance *, struct __eCNameSpace__eC__containers__IteratorPointer * pointer))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = this;

__internal_ClassInst ? __internal_ClassInst->_vTbl : class->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__containers__Container_GetData]);
__internal_VirtualMethod ? __internal_VirtualMethod(this, i) : (uint64)1;
}));
const char * result;

itemString[0] = '\0';
result = ((const char * (*)(void *, void *, char *, void *, unsigned int *))(void *)Dclass->_vTbl[__eCVMethodID_class_OnGetString])(Dclass, ((Dclass->type == 1000 && !Dclass->byValueSystemClass) || Dclass->type == 2 || Dclass->type == 4 || Dclass->type == 3) ? ((char *)&data + __ENDIAN_PAD(class->templateArgs[2].__anon1.__anon1.dataTypeClass->typeSize)) : (void *)(uintptr_t)data, itemString, (((void *)0)), (((void *)0)));
if(!first)
strcat(tempString, ", ");
strcat(tempString, result);
first = 0;
}
}
else
tempString[0] = 0;
return tempString;
}

unsigned int __eCMethod___eCNameSpace__eC__containers__Container_TakeOut(struct __eCNameSpace__eC__types__Instance * this, const uint64 d)
{
struct __eCNameSpace__eC__containers__IteratorPointer * i = (__extension__ ({
struct __eCNameSpace__eC__containers__IteratorPointer * (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const uint64 value);

__internal_VirtualMethod = ((struct __eCNameSpace__eC__containers__IteratorPointer * (*)(struct __eCNameSpace__eC__types__Instance *, const uint64 value))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = this;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__containers__Container->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__containers__Container_Find]);
__internal_VirtualMethod ? __internal_VirtualMethod(this, d) : (struct __eCNameSpace__eC__containers__IteratorPointer *)1;
}));

if(i)
{
(__extension__ ({
void (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, struct __eCNameSpace__eC__containers__IteratorPointer * it);

__internal_VirtualMethod = ((void (*)(struct __eCNameSpace__eC__types__Instance *, struct __eCNameSpace__eC__containers__IteratorPointer * it))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = this;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__containers__Container->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__containers__Container_Remove]);
__internal_VirtualMethod ? __internal_VirtualMethod(this, i) : (void)1;
}));
return 1;
}
return 0;
}

static __attribute__((unused)) void UnusedFunction()
{
int a = 0;

(__extension__ ({
int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Class * , const void * , const void * object);

__internal_VirtualMethod = ((int (*)(struct __eCNameSpace__eC__types__Class *, const void *, const void * object))__eCClass_int->_vTbl[__eCVMethodID_class_OnCompare]);
__internal_VirtualMethod ? __internal_VirtualMethod(__eCClass_int, (void *)&a, (((void *)0))) : (int)1;
}));
(__extension__ ({
void (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Class * , const void * , const void * newData);

__internal_VirtualMethod = ((void (*)(struct __eCNameSpace__eC__types__Class *, const void *, const void * newData))__eCClass_int->_vTbl[__eCVMethodID_class_OnCopy]);
__internal_VirtualMethod ? __internal_VirtualMethod(__eCClass_int, (void *)&a, (((void *)0))) : (void)1;
}));
(__extension__ ({
const char *  (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Class * , const void * , char *  tempString, void *  reserved, unsigned int *  onType);

__internal_VirtualMethod = ((const char *  (*)(struct __eCNameSpace__eC__types__Class *, const void *, char *  tempString, void *  reserved, unsigned int *  onType))__eCClass_int->_vTbl[__eCVMethodID_class_OnGetString]);
__internal_VirtualMethod ? __internal_VirtualMethod(__eCClass_int, (void *)&a, (((void *)0)), (((void *)0)), (((void *)0))) : (const char * )1;
}));
(__extension__ ({
void (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Class * , const void * , struct __eCNameSpace__eC__types__Instance * channel);

__internal_VirtualMethod = ((void (*)(struct __eCNameSpace__eC__types__Class *, const void *, struct __eCNameSpace__eC__types__Instance * channel))__eCClass_int->_vTbl[__eCVMethodID_class_OnSerialize]);
__internal_VirtualMethod ? __internal_VirtualMethod(__eCClass_int, (void *)&a, (((void *)0))) : (void)1;
}));
(__extension__ ({
void (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Class * , const void * , struct __eCNameSpace__eC__types__Instance * channel);

__internal_VirtualMethod = ((void (*)(struct __eCNameSpace__eC__types__Class *, const void *, struct __eCNameSpace__eC__types__Instance * channel))__eCClass_int->_vTbl[__eCVMethodID_class_OnUnserialize]);
__internal_VirtualMethod ? __internal_VirtualMethod(__eCClass_int, (void *)&a, (((void *)0))) : (void)1;
}));
}

void __eCMethod___eCNameSpace__eC__containers__Container_OnCopy(struct __eCNameSpace__eC__types__Class * class, struct __eCNameSpace__eC__types__Instance ** this, struct __eCNameSpace__eC__types__Instance * source)
{
if((struct __eCNameSpace__eC__types__Instance *)source)
{
struct __eCNameSpace__eC__types__Instance * container = __eCNameSpace__eC__types__eInstance_New(((struct __eCNameSpace__eC__types__Instance *)(char *)source)->_class);

(__extension__ ({
void (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, struct __eCNameSpace__eC__types__Instance * source);

__internal_VirtualMethod = ((void (*)(struct __eCNameSpace__eC__types__Instance *, struct __eCNameSpace__eC__types__Instance * source))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = container;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__containers__Container->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__containers__Container_Copy]);
__internal_VirtualMethod ? __internal_VirtualMethod(container, (struct __eCNameSpace__eC__types__Instance *)source) : (void)1;
}));
(*this) = container;
}
else
{
(*this) = (((void *)0));
}
}

void __eCMethod___eCNameSpace__eC__containers__Container_Delete(struct __eCNameSpace__eC__types__Instance * this, struct __eCNameSpace__eC__containers__IteratorPointer * i)
{
uint64 data = (__extension__ ({
uint64 (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, struct __eCNameSpace__eC__containers__IteratorPointer * pointer);

__internal_VirtualMethod = ((uint64 (*)(struct __eCNameSpace__eC__types__Instance *, struct __eCNameSpace__eC__containers__IteratorPointer * pointer))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = this;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__containers__Container->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__containers__Container_GetData]);
__internal_VirtualMethod ? __internal_VirtualMethod(this, i) : (uint64)1;
}));

(((void (* )(void *  _class, void *  data))((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[2].__anon1.__anon1.dataTypeClass->_vTbl[__eCVMethodID_class_OnFree])(((struct __eCNameSpace__eC__types__Instance * )(char * )this)->_class->templateArgs[2].__anon1.__anon1.dataTypeClass, ((void * )((uintptr_t)(data)))), data = 0);
(__extension__ ({
void (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, struct __eCNameSpace__eC__containers__IteratorPointer * it);

__internal_VirtualMethod = ((void (*)(struct __eCNameSpace__eC__types__Instance *, struct __eCNameSpace__eC__containers__IteratorPointer * it))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = this;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__containers__Container->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__containers__Container_Remove]);
__internal_VirtualMethod ? __internal_VirtualMethod(this, i) : (void)1;
}));
}

struct __eCNameSpace__eC__containers__IteratorPointer * __eCMethod___eCNameSpace__eC__containers__Container_Find(struct __eCNameSpace__eC__types__Instance * this, const uint64 value)
{
struct __eCNameSpace__eC__containers__IteratorPointer * i;
struct __eCNameSpace__eC__types__Class * Dclass = ((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[2].__anon1.__anon1.dataTypeClass;
unsigned int byRef = (Dclass->type == 1000 && !Dclass->byValueSystemClass) || Dclass->type == 2 || Dclass->type == 4 || Dclass->type == 3;
int (* onCompare)(void *, const void *, const void *) = (void *)Dclass->_vTbl[__eCVMethodID_class_OnCompare];
unsigned int isInt64 = 0;

if(onCompare == (void *)__eCClass_int64->_vTbl[__eCVMethodID_class_OnCompare] || (Dclass->type == 3 && Dclass->typeSize == sizeof(long long) && !strcmp(Dclass->name, "Id")))
{
onCompare = (void *)((int (*)(struct __eCNameSpace__eC__types__Class * class, void *, const void * object))__eCClass_uint64->_vTbl[__eCVMethodID_class_OnCompare]);
isInt64 = 1;
}
if(isInt64)
{
for(i = (__extension__ ({
struct __eCNameSpace__eC__containers__IteratorPointer * (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *);

__internal_VirtualMethod = ((struct __eCNameSpace__eC__containers__IteratorPointer * (*)(struct __eCNameSpace__eC__types__Instance *))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = this;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__containers__Container->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__containers__Container_GetFirst]);
__internal_VirtualMethod ? __internal_VirtualMethod(this) : (struct __eCNameSpace__eC__containers__IteratorPointer *)1;
})); i; i = (__extension__ ({
struct __eCNameSpace__eC__containers__IteratorPointer * (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, struct __eCNameSpace__eC__containers__IteratorPointer * pointer);

__internal_VirtualMethod = ((struct __eCNameSpace__eC__containers__IteratorPointer * (*)(struct __eCNameSpace__eC__types__Instance *, struct __eCNameSpace__eC__containers__IteratorPointer * pointer))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = this;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__containers__Container->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__containers__Container_GetNext]);
__internal_VirtualMethod ? __internal_VirtualMethod(this, i) : (struct __eCNameSpace__eC__containers__IteratorPointer *)1;
})))
{
uint64 data = (__extension__ ({
uint64 (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, struct __eCNameSpace__eC__containers__IteratorPointer * pointer);

__internal_VirtualMethod = ((uint64 (*)(struct __eCNameSpace__eC__types__Instance *, struct __eCNameSpace__eC__containers__IteratorPointer * pointer))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = this;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__containers__Container->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__containers__Container_GetData]);
__internal_VirtualMethod ? __internal_VirtualMethod(this, i) : (uint64)1;
}));

if(((uint64)(value)) == ((uint64)(data)))
return i;
}
}
else if(byRef)
{
for(i = (__extension__ ({
struct __eCNameSpace__eC__containers__IteratorPointer * (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *);

__internal_VirtualMethod = ((struct __eCNameSpace__eC__containers__IteratorPointer * (*)(struct __eCNameSpace__eC__types__Instance *))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = this;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__containers__Container->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__containers__Container_GetFirst]);
__internal_VirtualMethod ? __internal_VirtualMethod(this) : (struct __eCNameSpace__eC__containers__IteratorPointer *)1;
})); i; i = (__extension__ ({
struct __eCNameSpace__eC__containers__IteratorPointer * (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, struct __eCNameSpace__eC__containers__IteratorPointer * pointer);

__internal_VirtualMethod = ((struct __eCNameSpace__eC__containers__IteratorPointer * (*)(struct __eCNameSpace__eC__types__Instance *, struct __eCNameSpace__eC__containers__IteratorPointer * pointer))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = this;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__containers__Container->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__containers__Container_GetNext]);
__internal_VirtualMethod ? __internal_VirtualMethod(this, i) : (struct __eCNameSpace__eC__containers__IteratorPointer *)1;
})))
{
uint64 data = (__extension__ ({
uint64 (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, struct __eCNameSpace__eC__containers__IteratorPointer * pointer);

__internal_VirtualMethod = ((uint64 (*)(struct __eCNameSpace__eC__types__Instance *, struct __eCNameSpace__eC__containers__IteratorPointer * pointer))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = this;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__containers__Container->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__containers__Container_GetData]);
__internal_VirtualMethod ? __internal_VirtualMethod(this, i) : (uint64)1;
}));
int result = onCompare(Dclass, ((char *)&value + __ENDIAN_PAD(((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[2].__anon1.__anon1.dataTypeClass->typeSize)), ((char *)&data + __ENDIAN_PAD(((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[2].__anon1.__anon1.dataTypeClass->typeSize)));

if(!result)
return i;
}
}
else
{
for(i = (__extension__ ({
struct __eCNameSpace__eC__containers__IteratorPointer * (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *);

__internal_VirtualMethod = ((struct __eCNameSpace__eC__containers__IteratorPointer * (*)(struct __eCNameSpace__eC__types__Instance *))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = this;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__containers__Container->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__containers__Container_GetFirst]);
__internal_VirtualMethod ? __internal_VirtualMethod(this) : (struct __eCNameSpace__eC__containers__IteratorPointer *)1;
})); i; i = (__extension__ ({
struct __eCNameSpace__eC__containers__IteratorPointer * (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, struct __eCNameSpace__eC__containers__IteratorPointer * pointer);

__internal_VirtualMethod = ((struct __eCNameSpace__eC__containers__IteratorPointer * (*)(struct __eCNameSpace__eC__types__Instance *, struct __eCNameSpace__eC__containers__IteratorPointer * pointer))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = this;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__containers__Container->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__containers__Container_GetNext]);
__internal_VirtualMethod ? __internal_VirtualMethod(this, i) : (struct __eCNameSpace__eC__containers__IteratorPointer *)1;
})))
{
uint64 data = (__extension__ ({
uint64 (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, struct __eCNameSpace__eC__containers__IteratorPointer * pointer);

__internal_VirtualMethod = ((uint64 (*)(struct __eCNameSpace__eC__types__Instance *, struct __eCNameSpace__eC__containers__IteratorPointer * pointer))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = this;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__containers__Container->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__containers__Container_GetData]);
__internal_VirtualMethod ? __internal_VirtualMethod(this, i) : (uint64)1;
}));
int result = onCompare(Dclass, (const void *)(uintptr_t)value, (const void *)(uintptr_t)data);

if(!result)
return i;
}
}
return (((void *)0));
}

void __eCMethod___eCNameSpace__eC__containers__Container_OnSerialize(struct __eCNameSpace__eC__types__Class * class, struct __eCNameSpace__eC__types__Instance * this, struct __eCNameSpace__eC__types__Instance * channel)
{
unsigned int count = (struct __eCNameSpace__eC__types__Instance *)this ? (__extension__ ({
int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *);

__internal_VirtualMethod = ((int (*)(struct __eCNameSpace__eC__types__Instance *))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = this;

__internal_ClassInst ? __internal_ClassInst->_vTbl : class->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__containers__Container_GetCount]);
__internal_VirtualMethod ? __internal_VirtualMethod(this) : (int)1;
})) : 0;
struct __eCNameSpace__eC__containers__IteratorPointer * i;
struct __eCNameSpace__eC__types__Class * Dclass = class->templateArgs[2].__anon1.__anon1.dataTypeClass;
unsigned int isNormalClass = (Dclass->type == 0) && Dclass->structSize;

__eCMethod___eCNameSpace__eC__types__IOChannel_Put(channel, __eCClass_uint, (void *)&count);
if((struct __eCNameSpace__eC__types__Instance *)this)
for(i = (__extension__ ({
struct __eCNameSpace__eC__containers__IteratorPointer * (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *);

__internal_VirtualMethod = ((struct __eCNameSpace__eC__containers__IteratorPointer * (*)(struct __eCNameSpace__eC__types__Instance *))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = this;

__internal_ClassInst ? __internal_ClassInst->_vTbl : class->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__containers__Container_GetFirst]);
__internal_VirtualMethod ? __internal_VirtualMethod(this) : (struct __eCNameSpace__eC__containers__IteratorPointer *)1;
})); i; i = (__extension__ ({
struct __eCNameSpace__eC__containers__IteratorPointer * (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, struct __eCNameSpace__eC__containers__IteratorPointer * pointer);

__internal_VirtualMethod = ((struct __eCNameSpace__eC__containers__IteratorPointer * (*)(struct __eCNameSpace__eC__types__Instance *, struct __eCNameSpace__eC__containers__IteratorPointer * pointer))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = this;

__internal_ClassInst ? __internal_ClassInst->_vTbl : class->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__containers__Container_GetNext]);
__internal_VirtualMethod ? __internal_VirtualMethod(this, i) : (struct __eCNameSpace__eC__containers__IteratorPointer *)1;
})))
{
uint64 data = (__extension__ ({
uint64 (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, struct __eCNameSpace__eC__containers__IteratorPointer * pointer);

__internal_VirtualMethod = ((uint64 (*)(struct __eCNameSpace__eC__types__Instance *, struct __eCNameSpace__eC__containers__IteratorPointer * pointer))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = this;

__internal_ClassInst ? __internal_ClassInst->_vTbl : class->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__containers__Container_GetData]);
__internal_VirtualMethod ? __internal_VirtualMethod(this, i) : (uint64)1;
}));
struct __eCNameSpace__eC__types__Class * Eclass = isNormalClass ? ((struct __eCNameSpace__eC__types__Instance *)(char *)((struct __eCNameSpace__eC__types__Instance *)((uintptr_t)((uint64)(data)))))->_class : Dclass;

((void (*)(void *, void *, void *))(void *)Eclass->_vTbl[__eCVMethodID_class_OnSerialize])(Eclass, ((Dclass->type == 1000 && !Dclass->byValueSystemClass) || Dclass->type == 2 || Dclass->type == 4 || Dclass->type == 3) ? ((char *)&data + __ENDIAN_PAD(class->templateArgs[2].__anon1.__anon1.dataTypeClass->typeSize)) : (void *)(uintptr_t)data, channel);
}
}

void __eCMethod___eCNameSpace__eC__containers__Container_OnUnserialize(struct __eCNameSpace__eC__types__Class * class, struct __eCNameSpace__eC__types__Instance ** this, struct __eCNameSpace__eC__types__Instance * channel)
{
struct __eCNameSpace__eC__types__Instance * container = __eCNameSpace__eC__types__eInstance_New(__eCProp___eCNameSpace__eC__types__Class_Set_char__PTR_(class->fullName));
unsigned int count, c;
struct __eCNameSpace__eC__types__Class * Dclass = class->templateArgs[2].__anon1.__anon1.dataTypeClass;
uint64 data;
unsigned int isStruct = Dclass->type == 1;

container->_refCount++;
__eCMethod___eCNameSpace__eC__types__IOChannel_Get(channel, __eCClass_uint, (void *)&count);
if(isStruct)
data = (uint64)(uintptr_t)(__eCNameSpace__eC__types__eSystem_New(sizeof(unsigned char) * (Dclass->structSize)));
for(c = 0; c < count; c++)
{
if(isStruct)
memset((char *)(uintptr_t)data, 0, Dclass->structSize);
else
data = (uint64)0;
((void (*)(void *, void *, void *))(void *)Dclass->_vTbl[__eCVMethodID_class_OnUnserialize])(Dclass, isStruct ? (void *)(uintptr_t)data : ((char *)&data + __ENDIAN_PAD(class->templateArgs[2].__anon1.__anon1.dataTypeClass->typeSize)), channel);
(__extension__ ({
struct __eCNameSpace__eC__containers__IteratorPointer * (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, uint64 value);

__internal_VirtualMethod = ((struct __eCNameSpace__eC__containers__IteratorPointer * (*)(struct __eCNameSpace__eC__types__Instance *, uint64 value))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = container;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__containers__Container->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__containers__Container_Add]);
__internal_VirtualMethod ? __internal_VirtualMethod(container, data) : (struct __eCNameSpace__eC__containers__IteratorPointer *)1;
}));
}
if(isStruct)
(__eCNameSpace__eC__types__eSystem_Delete((void *)(uintptr_t)data), data = 0);
(*this) = container;
}

void __eCUnregisterModule_Container(struct __eCNameSpace__eC__types__Instance * module)
{

__eCPropM___eCNameSpace__eC__types__Iterator_data = (void *)0;
__eCPropM___eCNameSpace__eC__containers__Container_copySrc = (void *)0;
__eCPropM___eCNameSpace__eC__containers__Container_firstIterator = (void *)0;
__eCPropM___eCNameSpace__eC__containers__Container_lastIterator = (void *)0;
}

unsigned int __eCMethod___eCNameSpace__eC__types__Iterator_Find(struct __eCNameSpace__eC__types__Iterator * this, const uint64 value)
{
if(this->container)
{
__eCMethod___eCNameSpace__eC__types__Iterator_Free(this);
this->pointer = (__extension__ ({
struct __eCNameSpace__eC__containers__IteratorPointer * (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const uint64 value);

__internal_VirtualMethod = ((struct __eCNameSpace__eC__containers__IteratorPointer * (*)(struct __eCNameSpace__eC__types__Instance *, const uint64 value))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = this->container;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__containers__Container->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__containers__Container_Find]);
__internal_VirtualMethod ? __internal_VirtualMethod(this->container, value) : (struct __eCNameSpace__eC__containers__IteratorPointer *)1;
}));
}
return this->pointer != (((void *)0));
}

unsigned int __eCMethod___eCNameSpace__eC__types__Iterator_Index(struct __eCNameSpace__eC__types__Iterator * this, const uint64 index, unsigned int create)
{
if(this->container)
{
unsigned int justAdded = 0;

__eCMethod___eCNameSpace__eC__types__Iterator_Free(this);
this->pointer = (__extension__ ({
struct __eCNameSpace__eC__containers__IteratorPointer * (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const uint64 pos, unsigned int create, unsigned int *  justAdded);

__internal_VirtualMethod = ((struct __eCNameSpace__eC__containers__IteratorPointer * (*)(struct __eCNameSpace__eC__types__Instance *, const uint64 pos, unsigned int create, unsigned int *  justAdded))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = this->container;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__containers__Container->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__containers__Container_GetAtPosition]);
__internal_VirtualMethod ? __internal_VirtualMethod(this->container, index, create, &justAdded) : (struct __eCNameSpace__eC__containers__IteratorPointer *)1;
}));
return !justAdded && this->pointer != (((void *)0));
}
return 0;
}

static void __eCMethod___eCNameSpace__eC__containers__Container__Sort(struct __eCNameSpace__eC__types__Instance *  this, unsigned int ascending, struct __eCNameSpace__eC__types__Instance * *  lists);

static void __eCMethod___eCNameSpace__eC__containers__Container__Sort(struct __eCNameSpace__eC__types__Instance * this, unsigned int ascending, struct __eCNameSpace__eC__types__Instance ** lists)
{
int count = (__extension__ ({
int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *);

__internal_VirtualMethod = ((int (*)(struct __eCNameSpace__eC__types__Instance *))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = this;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__containers__Container->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__containers__Container_GetCount]);
__internal_VirtualMethod ? __internal_VirtualMethod(this) : (int)1;
}));

if(count >= 2 && ((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[1].__anon1.__anon1.dataTypeClass == __eCClass_int)
{
struct __eCNameSpace__eC__types__Iterator __simpleStruct1 =
{
0, 0
};
struct __eCNameSpace__eC__types__Iterator __simpleStruct0 =
{
0, 0
};
struct __eCNameSpace__eC__types__Iterator a =
{
this, 0
};
struct __eCNameSpace__eC__types__Iterator b =
{
this, 0
};
struct __eCNameSpace__eC__types__Iterator mid =
{
this, 0
};
struct __eCNameSpace__eC__types__Class * Dclass = ((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[2].__anon1.__anon1.dataTypeClass;
unsigned int byRef = (Dclass->type == 1000 && !Dclass->byValueSystemClass) || Dclass->type == 2 || Dclass->type == 4 || Dclass->type == 3;
int (* onCompare)(void *, const void *, const void *) = (void *)Dclass->_vTbl[__eCVMethodID_class_OnCompare];
struct __eCNameSpace__eC__types__Instance * listA = lists[0];
struct __eCNameSpace__eC__types__Instance * listB = lists[1];

__eCMethod___eCNameSpace__eC__types__Iterator_Index(&mid, (uint64)(count / 2 - 1), 0);
while(__eCMethod___eCNameSpace__eC__types__Iterator_Next(&a))
{
(__extension__ ({
struct __eCNameSpace__eC__containers__IteratorPointer * (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, uint64 value);

__internal_VirtualMethod = ((struct __eCNameSpace__eC__containers__IteratorPointer * (*)(struct __eCNameSpace__eC__types__Instance *, uint64 value))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = listA;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__containers__Container->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__containers__Container_Add]);
__internal_VirtualMethod ? __internal_VirtualMethod(listA, __eCProp___eCNameSpace__eC__types__Iterator_Get_data(&a)) : (struct __eCNameSpace__eC__containers__IteratorPointer *)1;
}));
if(a.pointer == mid.pointer)
break;
}
b.pointer = mid.pointer;
while(__eCMethod___eCNameSpace__eC__types__Iterator_Next(&b))
(__extension__ ({
struct __eCNameSpace__eC__containers__IteratorPointer * (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, uint64 value);

__internal_VirtualMethod = ((struct __eCNameSpace__eC__containers__IteratorPointer * (*)(struct __eCNameSpace__eC__types__Instance *, uint64 value))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = listB;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__containers__Container->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__containers__Container_Add]);
__internal_VirtualMethod ? __internal_VirtualMethod(listB, __eCProp___eCNameSpace__eC__types__Iterator_Get_data(&b)) : (struct __eCNameSpace__eC__containers__IteratorPointer *)1;
}));
(__extension__ ({
void (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *);

__internal_VirtualMethod = ((void (*)(struct __eCNameSpace__eC__types__Instance *))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = this;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__containers__Container->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__containers__Container_RemoveAll]);
__internal_VirtualMethod ? __internal_VirtualMethod(this) : (void)1;
}));
__eCMethod___eCNameSpace__eC__containers__Container__Sort(listA, ascending, lists + 2);
__eCMethod___eCNameSpace__eC__containers__Container__Sort(listB, ascending, lists + 2);
a = (__simpleStruct0.container = listA, __simpleStruct0);
b = (__simpleStruct1.container = listB, __simpleStruct1);
__eCMethod___eCNameSpace__eC__types__Iterator_Next(&a);
__eCMethod___eCNameSpace__eC__types__Iterator_Next(&b);
while(a.pointer || b.pointer)
{
int r;

if(a.pointer && b.pointer)
{
uint64 dataA = __eCProp___eCNameSpace__eC__types__Iterator_Get_data(&a), dataB = __eCProp___eCNameSpace__eC__types__Iterator_Get_data(&b);

r = onCompare(Dclass, byRef ? ((char *)&dataA + __ENDIAN_PAD(((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[2].__anon1.__anon1.dataTypeClass->typeSize)) : (const void *)(uintptr_t)dataA, byRef ? ((char *)&dataB + __ENDIAN_PAD(((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[2].__anon1.__anon1.dataTypeClass->typeSize)) : (const void *)(uintptr_t)dataB);
}
else if(a.pointer)
r = -1;
else
r = 1;
if(!ascending)
r *= -1;
if(r < 0)
{
(__extension__ ({
struct __eCNameSpace__eC__containers__IteratorPointer * (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, uint64 value);

__internal_VirtualMethod = ((struct __eCNameSpace__eC__containers__IteratorPointer * (*)(struct __eCNameSpace__eC__types__Instance *, uint64 value))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = this;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__containers__Container->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__containers__Container_Add]);
__internal_VirtualMethod ? __internal_VirtualMethod(this, __eCProp___eCNameSpace__eC__types__Iterator_Get_data(&a)) : (struct __eCNameSpace__eC__containers__IteratorPointer *)1;
}));
__eCMethod___eCNameSpace__eC__types__Iterator_Next(&a);
}
else
{
(__extension__ ({
struct __eCNameSpace__eC__containers__IteratorPointer * (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, uint64 value);

__internal_VirtualMethod = ((struct __eCNameSpace__eC__containers__IteratorPointer * (*)(struct __eCNameSpace__eC__types__Instance *, uint64 value))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = this;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__containers__Container->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__containers__Container_Add]);
__internal_VirtualMethod ? __internal_VirtualMethod(this, __eCProp___eCNameSpace__eC__types__Iterator_Get_data(&b)) : (struct __eCNameSpace__eC__containers__IteratorPointer *)1;
}));
__eCMethod___eCNameSpace__eC__types__Iterator_Next(&b);
}
}
(__extension__ ({
void (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *);

__internal_VirtualMethod = ((void (*)(struct __eCNameSpace__eC__types__Instance *))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = listA;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__containers__Container->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__containers__Container_RemoveAll]);
__internal_VirtualMethod ? __internal_VirtualMethod(listA) : (void)1;
}));
(__extension__ ({
void (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *);

__internal_VirtualMethod = ((void (*)(struct __eCNameSpace__eC__types__Instance *))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = listB;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__containers__Container->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__containers__Container_RemoveAll]);
__internal_VirtualMethod ? __internal_VirtualMethod(listB) : (void)1;
}));
}
}

void __eCMethod___eCNameSpace__eC__containers__Container_Sort(struct __eCNameSpace__eC__types__Instance * this, unsigned int ascending)
{
int i, numLists = __eCNameSpace__eC__types__log2i((__extension__ ({
int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *);

__internal_VirtualMethod = ((int (*)(struct __eCNameSpace__eC__types__Instance *))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = this;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__containers__Container->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__containers__Container_GetCount]);
__internal_VirtualMethod ? __internal_VirtualMethod(this) : (int)1;
}))) * 2;
struct __eCNameSpace__eC__types__Instance ** lists = __eCNameSpace__eC__types__eSystem_New(sizeof(struct __eCNameSpace__eC__types__Instance *) * (numLists));

for(i = 0; i < numLists; i++)
lists[i] = __eCNameSpace__eC__types__eInstance_New(((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class);
__eCMethod___eCNameSpace__eC__containers__Container__Sort(this, ascending, lists);
for(i = 0; i < numLists; i++)
(__eCNameSpace__eC__types__eInstance_DecRef(lists[i]), lists[i] = 0);
(__eCNameSpace__eC__types__eSystem_Delete(lists), lists = 0);
}

void __eCRegisterModule_Container(struct __eCNameSpace__eC__types__Instance * module)
{
struct __eCNameSpace__eC__types__ClassTemplateArgument __simpleStruct2 =
{

.__anon1 = {

.__anon1 = {
.dataTypeString = "T"
}
}
};
struct __eCNameSpace__eC__types__ClassTemplateArgument __simpleStruct1 =
{

.__anon1 = {

.__anon1 = {
.dataTypeString = "int"
}
}
};
struct __eCNameSpace__eC__types__ClassTemplateArgument __simpleStruct0 =
{

.__anon1 = {

.__anon1 = {
.dataTypeString = "int"
}
}
};
struct __eCNameSpace__eC__types__Class __attribute__((unused)) * class;

class = __eCNameSpace__eC__types__eSystem_RegisterClass(1, "eC::types::Iterator", 0, sizeof(struct __eCNameSpace__eC__types__Iterator), 0, (void *)0, (void *)0, module, 4, 1);
if(((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application == ((struct __eCNameSpace__eC__types__Module *)(((char *)__thisModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->application && class)
__eCClass___eCNameSpace__eC__types__Iterator = class;
__eCNameSpace__eC__types__eClass_AddMethod(class, "Find", "bool Find(const T value)", __eCMethod___eCNameSpace__eC__types__Iterator_Find, 1);
__eCNameSpace__eC__types__eClass_AddMethod(class, "Free", "void Free()", __eCMethod___eCNameSpace__eC__types__Iterator_Free, 1);
__eCNameSpace__eC__types__eClass_AddMethod(class, "GetData", "T GetData()", __eCMethod___eCNameSpace__eC__types__Iterator_GetData, 1);
__eCNameSpace__eC__types__eClass_AddMethod(class, "Index", "bool Index(const IT index, bool create)", __eCMethod___eCNameSpace__eC__types__Iterator_Index, 1);
__eCNameSpace__eC__types__eClass_AddMethod(class, "Next", "bool Next()", __eCMethod___eCNameSpace__eC__types__Iterator_Next, 1);
__eCNameSpace__eC__types__eClass_AddMethod(class, "Prev", "bool Prev()", __eCMethod___eCNameSpace__eC__types__Iterator_Prev, 1);
__eCNameSpace__eC__types__eClass_AddMethod(class, "Remove", "void Remove()", __eCMethod___eCNameSpace__eC__types__Iterator_Remove, 1);
__eCNameSpace__eC__types__eClass_AddMethod(class, "SetData", "bool SetData(T value)", __eCMethod___eCNameSpace__eC__types__Iterator_SetData, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "container", "eC::types::Container<T, IT>", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "pointer", "eC::types::IteratorPointer", sizeof(void *), 0xF000F000, 1);
__eCPropM___eCNameSpace__eC__types__Iterator_data = __eCNameSpace__eC__types__eClass_AddProperty(class, "data", "T", __eCProp___eCNameSpace__eC__types__Iterator_Set_data, __eCProp___eCNameSpace__eC__types__Iterator_Get_data, 1);
if(((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application == ((struct __eCNameSpace__eC__types__Module *)(((char *)__thisModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->application)
__eCProp___eCNameSpace__eC__types__Iterator_data = __eCPropM___eCNameSpace__eC__types__Iterator_data, __eCPropM___eCNameSpace__eC__types__Iterator_data = (void *)0;
__eCNameSpace__eC__types__eClass_AddTemplateParameter(class, "T", 0, 0, (((void *)0)));
__eCNameSpace__eC__types__eClass_AddTemplateParameter(class, "IT", 0, 0, &__simpleStruct0);
__eCNameSpace__eC__types__eClass_DoneAddingTemplateParameters(class);
class = __eCNameSpace__eC__types__eSystem_RegisterClass(0, "eC::types::Container", 0, 0, 0, (void *)0, (void *)__eCDestructor___eCNameSpace__eC__containers__Container, module, 4, 1);
if(((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application == ((struct __eCNameSpace__eC__types__Module *)(((char *)__thisModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->application && class)
__eCClass___eCNameSpace__eC__containers__Container = class;
__eCNameSpace__eC__types__eClass_AddMethod(class, "OnCompare", 0, __eCMethod___eCNameSpace__eC__containers__Container_OnCompare, 1);
__eCNameSpace__eC__types__eClass_AddMethod(class, "OnCopy", 0, __eCMethod___eCNameSpace__eC__containers__Container_OnCopy, 1);
__eCNameSpace__eC__types__eClass_AddMethod(class, "OnFree", 0, __eCMethod___eCNameSpace__eC__containers__Container_OnFree, 1);
__eCNameSpace__eC__types__eClass_AddMethod(class, "OnGetString", 0, __eCMethod___eCNameSpace__eC__containers__Container_OnGetString, 1);
__eCNameSpace__eC__types__eClass_AddMethod(class, "OnSerialize", 0, __eCMethod___eCNameSpace__eC__containers__Container_OnSerialize, 1);
__eCNameSpace__eC__types__eClass_AddMethod(class, "OnUnserialize", 0, __eCMethod___eCNameSpace__eC__containers__Container_OnUnserialize, 1);
__eCNameSpace__eC__types__eClass_AddVirtualMethod(class, "GetFirst", "eC::types::IteratorPointer GetFirst()", __eCMethod___eCNameSpace__eC__containers__Container_GetFirst, 1);
__eCNameSpace__eC__types__eClass_AddVirtualMethod(class, "GetLast", "eC::types::IteratorPointer GetLast()", __eCMethod___eCNameSpace__eC__containers__Container_GetLast, 1);
__eCNameSpace__eC__types__eClass_AddVirtualMethod(class, "GetPrev", "eC::types::IteratorPointer GetPrev(eC::types::IteratorPointer pointer)", __eCMethod___eCNameSpace__eC__containers__Container_GetPrev, 1);
__eCNameSpace__eC__types__eClass_AddVirtualMethod(class, "GetNext", "eC::types::IteratorPointer GetNext(eC::types::IteratorPointer pointer)", __eCMethod___eCNameSpace__eC__containers__Container_GetNext, 1);
__eCNameSpace__eC__types__eClass_AddVirtualMethod(class, "GetData", "D GetData(eC::types::IteratorPointer pointer)", __eCMethod___eCNameSpace__eC__containers__Container_GetData, 1);
__eCNameSpace__eC__types__eClass_AddVirtualMethod(class, "SetData", "bool SetData(eC::types::IteratorPointer pointer, D data)", 0, 1);
__eCNameSpace__eC__types__eClass_AddVirtualMethod(class, "GetAtPosition", "eC::types::IteratorPointer GetAtPosition(const I pos, bool create, bool * justAdded)", __eCMethod___eCNameSpace__eC__containers__Container_GetAtPosition, 1);
__eCNameSpace__eC__types__eClass_AddVirtualMethod(class, "Insert", "eC::types::IteratorPointer Insert(eC::types::IteratorPointer after, T value)", 0, 1);
__eCNameSpace__eC__types__eClass_AddVirtualMethod(class, "Add", "eC::types::IteratorPointer Add(T value)", 0, 1);
__eCNameSpace__eC__types__eClass_AddVirtualMethod(class, "Remove", "void Remove(eC::types::IteratorPointer it)", 0, 1);
__eCNameSpace__eC__types__eClass_AddVirtualMethod(class, "Move", "void Move(eC::types::IteratorPointer it, eC::types::IteratorPointer after)", 0, 1);
__eCNameSpace__eC__types__eClass_AddVirtualMethod(class, "RemoveAll", "void RemoveAll()", __eCMethod___eCNameSpace__eC__containers__Container_RemoveAll, 1);
__eCNameSpace__eC__types__eClass_AddVirtualMethod(class, "Copy", "void Copy(eC::types::Container<T> source)", __eCMethod___eCNameSpace__eC__containers__Container_Copy, 1);
__eCNameSpace__eC__types__eClass_AddVirtualMethod(class, "Find", "eC::types::IteratorPointer Find(const D value)", __eCMethod___eCNameSpace__eC__containers__Container_Find, 1);
__eCNameSpace__eC__types__eClass_AddVirtualMethod(class, "FreeIterator", "void FreeIterator(eC::types::IteratorPointer it)", 0, 1);
__eCNameSpace__eC__types__eClass_AddVirtualMethod(class, "GetCount", "int GetCount()", __eCMethod___eCNameSpace__eC__containers__Container_GetCount, 1);
__eCNameSpace__eC__types__eClass_AddVirtualMethod(class, "Free", "void Free()", __eCMethod___eCNameSpace__eC__containers__Container_Free, 1);
__eCNameSpace__eC__types__eClass_AddVirtualMethod(class, "Delete", "void Delete(eC::types::IteratorPointer i)", __eCMethod___eCNameSpace__eC__containers__Container_Delete, 1);
__eCNameSpace__eC__types__eClass_AddVirtualMethod(class, "Sort", "void Sort(bool ascending)", __eCMethod___eCNameSpace__eC__containers__Container_Sort, 1);
__eCNameSpace__eC__types__eClass_AddMethod(class, "TakeOut", "bool TakeOut(const D d)", __eCMethod___eCNameSpace__eC__containers__Container_TakeOut, 1);
__eCPropM___eCNameSpace__eC__containers__Container_copySrc = __eCNameSpace__eC__types__eClass_AddProperty(class, "copySrc", "eC::types::Container<T>", __eCProp___eCNameSpace__eC__containers__Container_Set_copySrc, 0, 1);
if(((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application == ((struct __eCNameSpace__eC__types__Module *)(((char *)__thisModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->application)
__eCProp___eCNameSpace__eC__containers__Container_copySrc = __eCPropM___eCNameSpace__eC__containers__Container_copySrc, __eCPropM___eCNameSpace__eC__containers__Container_copySrc = (void *)0;
__eCPropM___eCNameSpace__eC__containers__Container_firstIterator = __eCNameSpace__eC__types__eClass_AddProperty(class, "firstIterator", "eC::types::Iterator<T>", 0, __eCProp___eCNameSpace__eC__containers__Container_Get_firstIterator, 1);
if(((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application == ((struct __eCNameSpace__eC__types__Module *)(((char *)__thisModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->application)
__eCProp___eCNameSpace__eC__containers__Container_firstIterator = __eCPropM___eCNameSpace__eC__containers__Container_firstIterator, __eCPropM___eCNameSpace__eC__containers__Container_firstIterator = (void *)0;
__eCPropM___eCNameSpace__eC__containers__Container_lastIterator = __eCNameSpace__eC__types__eClass_AddProperty(class, "lastIterator", "eC::types::Iterator<T>", 0, __eCProp___eCNameSpace__eC__containers__Container_Get_lastIterator, 1);
if(((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application == ((struct __eCNameSpace__eC__types__Module *)(((char *)__thisModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->application)
__eCProp___eCNameSpace__eC__containers__Container_lastIterator = __eCPropM___eCNameSpace__eC__containers__Container_lastIterator, __eCPropM___eCNameSpace__eC__containers__Container_lastIterator = (void *)0;
__eCNameSpace__eC__types__eClass_AddTemplateParameter(class, "T", 0, 0, (((void *)0)));
__eCNameSpace__eC__types__eClass_AddTemplateParameter(class, "I", 0, 0, &__simpleStruct1);
__eCNameSpace__eC__types__eClass_AddTemplateParameter(class, "D", 0, 0, &__simpleStruct2);
__eCNameSpace__eC__types__eClass_DoneAddingTemplateParameters(class);
if(class)
class->fixed = (unsigned int)1;
}

