/* Code generated from eC source file: BuiltInContainer.ec */
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

extern int __eCVMethodID_class_OnFree;

extern int __eCVMethodID_class_OnGetString;

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

extern char *  strcat(char * , const char * );

struct __eCNameSpace__eC__types__Property;

static __attribute__((unused)) struct __eCNameSpace__eC__types__Property * __eCProp___eCNameSpace__eC__containers__BuiltInContainer___eCNameSpace__eC__containers__Container, * __eCPropM___eCNameSpace__eC__containers__BuiltInContainer___eCNameSpace__eC__containers__Container;

struct __eCNameSpace__eC__types__Class;

struct __eCNameSpace__eC__types__Instance
{
void * *  _vTbl;
struct __eCNameSpace__eC__types__Class * _class;
int _refCount;
} eC_gcc_struct;

struct __eCNameSpace__eC__containers__BuiltInContainer
{
void ** _vTbl;
struct __eCNameSpace__eC__types__Class * _class;
int _refCount;
void * data;
int count;
struct __eCNameSpace__eC__types__Class * type;
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

extern int __eCVMethodID___eCNameSpace__eC__containers__BuiltInContainer_GetFirst;

extern int __eCVMethodID___eCNameSpace__eC__containers__BuiltInContainer_GetLast;

extern int __eCVMethodID___eCNameSpace__eC__containers__BuiltInContainer_GetPrev;

extern int __eCVMethodID___eCNameSpace__eC__containers__BuiltInContainer_GetNext;

extern int __eCVMethodID___eCNameSpace__eC__containers__BuiltInContainer_GetData;

extern int __eCVMethodID___eCNameSpace__eC__containers__BuiltInContainer_SetData;

extern int __eCVMethodID___eCNameSpace__eC__containers__BuiltInContainer_GetAtPosition;

extern int __eCVMethodID___eCNameSpace__eC__containers__BuiltInContainer_Insert;

extern int __eCVMethodID___eCNameSpace__eC__containers__BuiltInContainer_Add;

extern int __eCVMethodID___eCNameSpace__eC__containers__BuiltInContainer_Remove;

extern int __eCVMethodID___eCNameSpace__eC__containers__BuiltInContainer_Move;

extern int __eCVMethodID___eCNameSpace__eC__containers__BuiltInContainer_RemoveAll;

extern int __eCVMethodID___eCNameSpace__eC__containers__BuiltInContainer_Copy;

extern int __eCVMethodID___eCNameSpace__eC__containers__BuiltInContainer_Find;

extern int __eCVMethodID___eCNameSpace__eC__containers__BuiltInContainer_FreeIterator;

extern int __eCVMethodID___eCNameSpace__eC__containers__BuiltInContainer_GetCount;

extern int __eCVMethodID___eCNameSpace__eC__containers__BuiltInContainer_Free;

extern int __eCVMethodID___eCNameSpace__eC__containers__BuiltInContainer_Delete;

extern int __eCVMethodID___eCNameSpace__eC__containers__BuiltInContainer_Sort;

struct __eCNameSpace__eC__types__Instance * __eCProp___eCNameSpace__eC__containers__BuiltInContainer_Get___eCNameSpace__eC__containers__Container(struct __eCNameSpace__eC__containers__BuiltInContainer * this)
{
return (void *)this;
}

struct __eCNameSpace__eC__containers__IteratorPointer * __eCMethod___eCNameSpace__eC__containers__BuiltInContainer_GetFirst(struct __eCNameSpace__eC__containers__BuiltInContainer * this)
{
return this->count ? this->data : (((void *)0));
}

unsigned int __eCMethod___eCNameSpace__eC__containers__BuiltInContainer_SetData(struct __eCNameSpace__eC__containers__BuiltInContainer * this, struct __eCNameSpace__eC__containers__IteratorPointer * pointer, uint64 data)
{
return 0;
}

struct __eCNameSpace__eC__containers__IteratorPointer * __eCMethod___eCNameSpace__eC__containers__BuiltInContainer_Insert(struct __eCNameSpace__eC__containers__BuiltInContainer * this, struct __eCNameSpace__eC__containers__IteratorPointer * after, uint64 value)
{
return (((void *)0));
}

struct __eCNameSpace__eC__containers__IteratorPointer * __eCMethod___eCNameSpace__eC__containers__BuiltInContainer_Add(struct __eCNameSpace__eC__containers__BuiltInContainer * this, uint64 value)
{
return (((void *)0));
}

void __eCMethod___eCNameSpace__eC__containers__BuiltInContainer_Remove(struct __eCNameSpace__eC__containers__BuiltInContainer * this, struct __eCNameSpace__eC__containers__IteratorPointer * it)
{
}

void __eCMethod___eCNameSpace__eC__containers__BuiltInContainer_Move(struct __eCNameSpace__eC__containers__BuiltInContainer * this, struct __eCNameSpace__eC__containers__IteratorPointer * it, struct __eCNameSpace__eC__containers__IteratorPointer * after)
{
}

void __eCMethod___eCNameSpace__eC__containers__BuiltInContainer_Copy(struct __eCNameSpace__eC__containers__BuiltInContainer * this, struct __eCNameSpace__eC__types__Instance * source)
{
}

int __eCMethod___eCNameSpace__eC__containers__BuiltInContainer_GetCount(struct __eCNameSpace__eC__containers__BuiltInContainer * this)
{
return this->count;
}

void __eCMethod___eCNameSpace__eC__containers__BuiltInContainer_Delete(struct __eCNameSpace__eC__containers__BuiltInContainer * this, struct __eCNameSpace__eC__containers__IteratorPointer * it)
{
}

void __eCMethod___eCNameSpace__eC__containers__BuiltInContainer_Sort(struct __eCNameSpace__eC__containers__BuiltInContainer * this, unsigned int ascending)
{
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

static struct __eCNameSpace__eC__types__Class * __eCClass___eCNameSpace__eC__containers__IteratorPointer;

static struct __eCNameSpace__eC__types__Class * __eCClass___eCNameSpace__eC__containers__BuiltInContainer;

struct __eCNameSpace__eC__containers__IteratorPointer * __eCMethod___eCNameSpace__eC__containers__BuiltInContainer_GetLast(struct __eCNameSpace__eC__containers__BuiltInContainer * this)
{
return (struct __eCNameSpace__eC__containers__IteratorPointer *)(this->count && this->data ? ((unsigned char *)this->data + (this->count * this->type->typeSize) - 1) : (((void *)0)));
}

struct __eCNameSpace__eC__containers__IteratorPointer * __eCMethod___eCNameSpace__eC__containers__BuiltInContainer_GetPrev(struct __eCNameSpace__eC__containers__BuiltInContainer * this, struct __eCNameSpace__eC__containers__IteratorPointer * pointer)
{
return (struct __eCNameSpace__eC__containers__IteratorPointer *)((pointer && (unsigned char *)pointer > (unsigned char *)this->data) ? ((unsigned char *)pointer - this->type->typeSize) : (((void *)0)));
}

struct __eCNameSpace__eC__containers__IteratorPointer * __eCMethod___eCNameSpace__eC__containers__BuiltInContainer_GetNext(struct __eCNameSpace__eC__containers__BuiltInContainer * this, struct __eCNameSpace__eC__containers__IteratorPointer * pointer)
{
return (struct __eCNameSpace__eC__containers__IteratorPointer *)((pointer && (unsigned char *)pointer < (unsigned char *)this->data + (this->count - 1) * this->type->typeSize) ? ((unsigned char *)pointer + this->type->typeSize) : (((void *)0)));
}

uint64 __eCMethod___eCNameSpace__eC__containers__BuiltInContainer_GetData(struct __eCNameSpace__eC__containers__BuiltInContainer * this, struct __eCNameSpace__eC__containers__IteratorPointer * pointer)
{
uint64 * item = (uint64 *)pointer;

return ((((this->type->type == 1) ? ((uint64)(uintptr_t)item) : ((this->type->typeSize == 1) ? *((unsigned char *)item) : ((this->type->typeSize == 2) ? *((unsigned short *)item) : ((this->type->typeSize == 4) ? *((unsigned int *)item) : *(item)))))));
}

struct __eCNameSpace__eC__containers__IteratorPointer * __eCMethod___eCNameSpace__eC__containers__BuiltInContainer_GetAtPosition(struct __eCNameSpace__eC__containers__BuiltInContainer * this, const uint64 pos, unsigned int create)
{
return this->count && this->data ? (struct __eCNameSpace__eC__containers__IteratorPointer *)((unsigned char *)this->data + pos * this->type->typeSize) : (((void *)0));
}

const char * __eCMethod___eCNameSpace__eC__containers__BuiltInContainer_OnGetString(struct __eCNameSpace__eC__types__Class * class, struct __eCNameSpace__eC__containers__BuiltInContainer * this, char * tempString, void * fieldData, unsigned int * onType)
{
if(this)
{
struct __eCNameSpace__eC__types__Class * Dclass = this->type;
char itemString[4096];
unsigned int first = 1;
unsigned char * data = this->data;
int i;

tempString[0] = '\0';
for(i = 0; i < this->count; i++)
{
const char * result;

itemString[0] = '\0';
result = ((const char * (*)(void *, void *, char *, void *, unsigned int *))(void *)Dclass->_vTbl[__eCVMethodID_class_OnGetString])(Dclass, (this->type->type == 0 || this->type->type == 5) ? *(void **)data : data, itemString, (((void *)0)), (((void *)0)));
if(!first)
strcat(tempString, ", ");
strcat(tempString, result);
first = 0;
data += Dclass->typeSize;
}
}
else
tempString[0] = 0;
return tempString;
}

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

void __eCMethod___eCNameSpace__eC__containers__BuiltInContainer_RemoveAll(struct __eCNameSpace__eC__containers__BuiltInContainer * this)
{
struct __eCNameSpace__eC__containers__IteratorPointer * i;

for(i = (__extension__ ({
struct __eCNameSpace__eC__containers__IteratorPointer * (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__containers__BuiltInContainer *);

__internal_VirtualMethod = ((struct __eCNameSpace__eC__containers__IteratorPointer * (*)(struct __eCNameSpace__eC__containers__BuiltInContainer *))__eCClass___eCNameSpace__eC__containers__BuiltInContainer->_vTbl[__eCVMethodID___eCNameSpace__eC__containers__BuiltInContainer_GetFirst]);
__internal_VirtualMethod ? __internal_VirtualMethod(this) : (struct __eCNameSpace__eC__containers__IteratorPointer *)1;
})); i; i = (__extension__ ({
struct __eCNameSpace__eC__containers__IteratorPointer * (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__containers__BuiltInContainer *, struct __eCNameSpace__eC__containers__IteratorPointer * pointer);

__internal_VirtualMethod = ((struct __eCNameSpace__eC__containers__IteratorPointer * (*)(struct __eCNameSpace__eC__containers__BuiltInContainer *, struct __eCNameSpace__eC__containers__IteratorPointer * pointer))__eCClass___eCNameSpace__eC__containers__BuiltInContainer->_vTbl[__eCVMethodID___eCNameSpace__eC__containers__BuiltInContainer_GetNext]);
__internal_VirtualMethod ? __internal_VirtualMethod(this, i) : (struct __eCNameSpace__eC__containers__IteratorPointer *)1;
})))
(__extension__ ({
void (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__containers__BuiltInContainer *, struct __eCNameSpace__eC__containers__IteratorPointer * it);

__internal_VirtualMethod = ((void (*)(struct __eCNameSpace__eC__containers__BuiltInContainer *, struct __eCNameSpace__eC__containers__IteratorPointer * it))__eCClass___eCNameSpace__eC__containers__BuiltInContainer->_vTbl[__eCVMethodID___eCNameSpace__eC__containers__BuiltInContainer_Remove]);
__internal_VirtualMethod ? __internal_VirtualMethod(this, i) : (void)1;
}));
}

struct __eCNameSpace__eC__containers__IteratorPointer * __eCMethod___eCNameSpace__eC__containers__BuiltInContainer_Find(struct __eCNameSpace__eC__containers__BuiltInContainer * this, uint64 value)
{
struct __eCNameSpace__eC__containers__IteratorPointer * i;

for(i = (__extension__ ({
struct __eCNameSpace__eC__containers__IteratorPointer * (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__containers__BuiltInContainer *);

__internal_VirtualMethod = ((struct __eCNameSpace__eC__containers__IteratorPointer * (*)(struct __eCNameSpace__eC__containers__BuiltInContainer *))__eCClass___eCNameSpace__eC__containers__BuiltInContainer->_vTbl[__eCVMethodID___eCNameSpace__eC__containers__BuiltInContainer_GetFirst]);
__internal_VirtualMethod ? __internal_VirtualMethod(this) : (struct __eCNameSpace__eC__containers__IteratorPointer *)1;
})); i; i = (__extension__ ({
struct __eCNameSpace__eC__containers__IteratorPointer * (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__containers__BuiltInContainer *, struct __eCNameSpace__eC__containers__IteratorPointer * pointer);

__internal_VirtualMethod = ((struct __eCNameSpace__eC__containers__IteratorPointer * (*)(struct __eCNameSpace__eC__containers__BuiltInContainer *, struct __eCNameSpace__eC__containers__IteratorPointer * pointer))__eCClass___eCNameSpace__eC__containers__BuiltInContainer->_vTbl[__eCVMethodID___eCNameSpace__eC__containers__BuiltInContainer_GetNext]);
__internal_VirtualMethod ? __internal_VirtualMethod(this, i) : (struct __eCNameSpace__eC__containers__IteratorPointer *)1;
})))
{
uint64 data = (__extension__ ({
uint64 (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__containers__BuiltInContainer *, struct __eCNameSpace__eC__containers__IteratorPointer * pointer);

__internal_VirtualMethod = ((uint64 (*)(struct __eCNameSpace__eC__containers__BuiltInContainer *, struct __eCNameSpace__eC__containers__IteratorPointer * pointer))__eCClass___eCNameSpace__eC__containers__BuiltInContainer->_vTbl[__eCVMethodID___eCNameSpace__eC__containers__BuiltInContainer_GetData]);
__internal_VirtualMethod ? __internal_VirtualMethod(this, i) : (uint64)1;
}));
struct __eCNameSpace__eC__types__Class * Dclass = this->type;
int result = ((int (*)(void *, void *, void *))(void *)Dclass->_vTbl[__eCVMethodID_class_OnCompare])(Dclass, ((Dclass->type == 1000 && !Dclass->byValueSystemClass) || Dclass->type == 2 || Dclass->type == 4 || Dclass->type == 3) ? &value : (void *)(uintptr_t)value, ((Dclass->type == 1000 && !Dclass->byValueSystemClass) || Dclass->type == 2 || Dclass->type == 4 || Dclass->type == 3) ? &data : (void *)(uintptr_t)data);

if(!result)
return i;
}
return (((void *)0));
}

void __eCMethod___eCNameSpace__eC__containers__BuiltInContainer_Free(struct __eCNameSpace__eC__containers__BuiltInContainer * this)
{
struct __eCNameSpace__eC__containers__IteratorPointer * i;

for(i = (__extension__ ({
struct __eCNameSpace__eC__containers__IteratorPointer * (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__containers__BuiltInContainer *);

__internal_VirtualMethod = ((struct __eCNameSpace__eC__containers__IteratorPointer * (*)(struct __eCNameSpace__eC__containers__BuiltInContainer *))__eCClass___eCNameSpace__eC__containers__BuiltInContainer->_vTbl[__eCVMethodID___eCNameSpace__eC__containers__BuiltInContainer_GetFirst]);
__internal_VirtualMethod ? __internal_VirtualMethod(this) : (struct __eCNameSpace__eC__containers__IteratorPointer *)1;
})); i; i = (__extension__ ({
struct __eCNameSpace__eC__containers__IteratorPointer * (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__containers__BuiltInContainer *, struct __eCNameSpace__eC__containers__IteratorPointer * pointer);

__internal_VirtualMethod = ((struct __eCNameSpace__eC__containers__IteratorPointer * (*)(struct __eCNameSpace__eC__containers__BuiltInContainer *, struct __eCNameSpace__eC__containers__IteratorPointer * pointer))__eCClass___eCNameSpace__eC__containers__BuiltInContainer->_vTbl[__eCVMethodID___eCNameSpace__eC__containers__BuiltInContainer_GetNext]);
__internal_VirtualMethod ? __internal_VirtualMethod(this, i) : (struct __eCNameSpace__eC__containers__IteratorPointer *)1;
})))
((void (*)(void *, void *))(void *)this->type->_vTbl[__eCVMethodID_class_OnFree])(this->type, (void *)(uintptr_t)(__extension__ ({
uint64 (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__containers__BuiltInContainer *, struct __eCNameSpace__eC__containers__IteratorPointer * pointer);

__internal_VirtualMethod = ((uint64 (*)(struct __eCNameSpace__eC__containers__BuiltInContainer *, struct __eCNameSpace__eC__containers__IteratorPointer * pointer))__eCClass___eCNameSpace__eC__containers__BuiltInContainer->_vTbl[__eCVMethodID___eCNameSpace__eC__containers__BuiltInContainer_GetData]);
__internal_VirtualMethod ? __internal_VirtualMethod(this, i) : (uint64)1;
})));
}

void __eCUnregisterModule_BuiltInContainer(struct __eCNameSpace__eC__types__Instance * module)
{

}

void __eCRegisterModule_BuiltInContainer(struct __eCNameSpace__eC__types__Instance * module)
{
struct __eCNameSpace__eC__types__Class __attribute__((unused)) * class;

class = __eCNameSpace__eC__types__eSystem_RegisterClass(5, "eC::types::IteratorPointer", 0, 0, 0, (void *)0, (void *)0, module, 4, 1);
if(((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application == ((struct __eCNameSpace__eC__types__Module *)(((char *)__thisModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->application && class)
__eCClass___eCNameSpace__eC__containers__IteratorPointer = class;
class = __eCNameSpace__eC__types__eSystem_RegisterClass(1, "eC::types::BuiltInContainer", 0, sizeof(struct __eCNameSpace__eC__containers__BuiltInContainer), 0, (void *)0, (void *)0, module, 4, 1);
if(((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application == ((struct __eCNameSpace__eC__types__Module *)(((char *)__thisModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->application && class)
__eCClass___eCNameSpace__eC__containers__BuiltInContainer = class;
__eCNameSpace__eC__types__eClass_AddMethod(class, "OnGetString", 0, __eCMethod___eCNameSpace__eC__containers__BuiltInContainer_OnGetString, 1);
__eCNameSpace__eC__types__eClass_AddVirtualMethod(class, "GetFirst", "eC::types::IteratorPointer GetFirst()", __eCMethod___eCNameSpace__eC__containers__BuiltInContainer_GetFirst, 1);
__eCNameSpace__eC__types__eClass_AddVirtualMethod(class, "GetLast", "eC::types::IteratorPointer GetLast()", __eCMethod___eCNameSpace__eC__containers__BuiltInContainer_GetLast, 1);
__eCNameSpace__eC__types__eClass_AddVirtualMethod(class, "GetPrev", "eC::types::IteratorPointer GetPrev(eC::types::IteratorPointer pointer)", __eCMethod___eCNameSpace__eC__containers__BuiltInContainer_GetPrev, 1);
__eCNameSpace__eC__types__eClass_AddVirtualMethod(class, "GetNext", "eC::types::IteratorPointer GetNext(eC::types::IteratorPointer pointer)", __eCMethod___eCNameSpace__eC__containers__BuiltInContainer_GetNext, 1);
__eCNameSpace__eC__types__eClass_AddVirtualMethod(class, "GetData", "uint64 GetData(eC::types::IteratorPointer pointer)", __eCMethod___eCNameSpace__eC__containers__BuiltInContainer_GetData, 1);
__eCNameSpace__eC__types__eClass_AddVirtualMethod(class, "SetData", "bool SetData(eC::types::IteratorPointer pointer, uint64 data)", __eCMethod___eCNameSpace__eC__containers__BuiltInContainer_SetData, 1);
__eCNameSpace__eC__types__eClass_AddVirtualMethod(class, "GetAtPosition", "eC::types::IteratorPointer GetAtPosition(const uint64 pos, bool create)", __eCMethod___eCNameSpace__eC__containers__BuiltInContainer_GetAtPosition, 1);
__eCNameSpace__eC__types__eClass_AddVirtualMethod(class, "Insert", "eC::types::IteratorPointer Insert(eC::types::IteratorPointer after, uint64 value)", __eCMethod___eCNameSpace__eC__containers__BuiltInContainer_Insert, 1);
__eCNameSpace__eC__types__eClass_AddVirtualMethod(class, "Add", "eC::types::IteratorPointer Add(uint64 value)", __eCMethod___eCNameSpace__eC__containers__BuiltInContainer_Add, 1);
__eCNameSpace__eC__types__eClass_AddVirtualMethod(class, "Remove", "void Remove(eC::types::IteratorPointer it)", __eCMethod___eCNameSpace__eC__containers__BuiltInContainer_Remove, 1);
__eCNameSpace__eC__types__eClass_AddVirtualMethod(class, "Move", "void Move(eC::types::IteratorPointer it, eC::types::IteratorPointer after)", __eCMethod___eCNameSpace__eC__containers__BuiltInContainer_Move, 1);
__eCNameSpace__eC__types__eClass_AddVirtualMethod(class, "RemoveAll", "void RemoveAll()", __eCMethod___eCNameSpace__eC__containers__BuiltInContainer_RemoveAll, 1);
__eCNameSpace__eC__types__eClass_AddVirtualMethod(class, "Copy", "void Copy(eC::types::Container source)", __eCMethod___eCNameSpace__eC__containers__BuiltInContainer_Copy, 1);
__eCNameSpace__eC__types__eClass_AddVirtualMethod(class, "Find", "eC::types::IteratorPointer Find(uint64 value)", __eCMethod___eCNameSpace__eC__containers__BuiltInContainer_Find, 1);
__eCNameSpace__eC__types__eClass_AddVirtualMethod(class, "FreeIterator", "void FreeIterator(eC::types::IteratorPointer it)", 0, 1);
__eCNameSpace__eC__types__eClass_AddVirtualMethod(class, "GetCount", "int GetCount()", __eCMethod___eCNameSpace__eC__containers__BuiltInContainer_GetCount, 1);
__eCNameSpace__eC__types__eClass_AddVirtualMethod(class, "Free", "void Free()", __eCMethod___eCNameSpace__eC__containers__BuiltInContainer_Free, 1);
__eCNameSpace__eC__types__eClass_AddVirtualMethod(class, "Delete", "void Delete(eC::types::IteratorPointer it)", __eCMethod___eCNameSpace__eC__containers__BuiltInContainer_Delete, 1);
__eCNameSpace__eC__types__eClass_AddVirtualMethod(class, "Sort", "void Sort(bool ascending)", __eCMethod___eCNameSpace__eC__containers__BuiltInContainer_Sort, 1);
__eCProp___eCNameSpace__eC__containers__BuiltInContainer___eCNameSpace__eC__containers__Container = __eCNameSpace__eC__types__eClass_AddProperty(class, 0, "eC::types::Container", 0, __eCProp___eCNameSpace__eC__containers__BuiltInContainer_Get___eCNameSpace__eC__containers__Container, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "_vTbl", "void * *", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "_class", "eC::types::Class", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "_refCount", "int", 4, 4, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "data", "void *", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "count", "int", 4, 4, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "type", "eC::types::Class", sizeof(void *), 0xF000F000, 1);
}

