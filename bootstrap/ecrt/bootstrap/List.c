/* Code generated from eC source file: List.ec */
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
struct __eCNameSpace__eC__containers__LinkElement
{
void * prev;
void * next;
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

struct __eCNameSpace__eC__containers__LinkList
{
void * first;
void * last;
int count;
} eC_gcc_struct;

struct __eCNameSpace__eC__types__ClassTemplateParameter;

struct __eCNameSpace__eC__containers__IteratorPointer;

extern int __eCVMethodID_class_OnFree;

struct __eCNameSpace__eC__types__Class;

struct __eCNameSpace__eC__types__Instance
{
void * *  _vTbl;
struct __eCNameSpace__eC__types__Class * _class;
int _refCount;
} eC_gcc_struct;

extern long long __eCNameSpace__eC__types__eClass_GetProperty(struct __eCNameSpace__eC__types__Class * _class, const char *  name);

extern void __eCNameSpace__eC__types__eClass_SetProperty(struct __eCNameSpace__eC__types__Class * _class, const char *  name, long long value);

extern void __eCNameSpace__eC__types__eClass_DoneAddingTemplateParameters(struct __eCNameSpace__eC__types__Class * base);

extern void __eCNameSpace__eC__types__eInstance_SetMethod(struct __eCNameSpace__eC__types__Instance * instance, const char *  name, void *  function);

extern void __eCNameSpace__eC__types__eInstance_IncRef(struct __eCNameSpace__eC__types__Instance * instance);

extern int __eCVMethodID___eCNameSpace__eC__containers__Container_Insert;

extern int __eCVMethodID___eCNameSpace__eC__containers__Container_Remove;

extern int __eCVMethodID___eCNameSpace__eC__containers__Container_GetData;

extern int __eCVMethodID___eCNameSpace__eC__containers__Container_Find;

struct __eCNameSpace__eC__containers__Link;

struct __eCNameSpace__eC__containers__Link
{
union
{
struct __eCNameSpace__eC__containers__LinkElement link;
struct
{
struct __eCNameSpace__eC__containers__Link * prev;
struct __eCNameSpace__eC__containers__Link * next;
} eC_gcc_struct __anon1;
} eC_gcc_struct __anon1;
uint64 data;
} eC_gcc_struct;

struct __eCNameSpace__eC__containers__ListItem;

struct __eCNameSpace__eC__containers__ListItem
{
union
{
struct __eCNameSpace__eC__containers__LinkElement link;
struct
{
struct __eCNameSpace__eC__containers__ListItem * prev;
struct __eCNameSpace__eC__containers__ListItem * next;
} eC_gcc_struct __anon1;
} eC_gcc_struct __anon1;
} eC_gcc_struct;

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

static struct __eCNameSpace__eC__types__Class * __eCClass___eCNameSpace__eC__containers__Link;

static struct __eCNameSpace__eC__types__Class * __eCClass___eCNameSpace__eC__containers__List;

extern struct __eCNameSpace__eC__types__Class * __eCClass___eCNameSpace__eC__types__Instance;

extern struct __eCNameSpace__eC__types__Class * __eCClass___eCNameSpace__eC__containers__LinkList;

extern struct __eCNameSpace__eC__types__Class * __eCClass___eCNameSpace__eC__containers__ListItem;

extern struct __eCNameSpace__eC__types__Class * __eCClass___eCNameSpace__eC__containers__IteratorPointer;

extern struct __eCNameSpace__eC__types__Class * __eCClass___eCNameSpace__eC__containers__Container;

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

uint64 __eCMethod___eCNameSpace__eC__containers__List_GetData(struct __eCNameSpace__eC__types__Instance * this, struct __eCNameSpace__eC__containers__Link * link)
{
return link ? ((((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[6].__anon1.__anon1.dataTypeClass && ((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[6].__anon1.__anon1.dataTypeClass->type == 1) ? (uint64)(uintptr_t)&link->data : (uint64)link->data) : (uint64)0;
}

unsigned int __eCMethod___eCNameSpace__eC__containers__List_SetData(struct __eCNameSpace__eC__types__Instance * this, struct __eCNameSpace__eC__containers__Link * link, uint64 value)
{
if(((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[6].__anon1.__anon1.dataTypeClass->type == 1)
memcpy((void *)&link->data, (void *)(uintptr_t)value, ((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[6].__anon1.__anon1.dataTypeClass->structSize);
else
link->data = ((uint64)(value));
return 1;
}

void __eCMethod___eCNameSpace__eC__containers__List_Delete(struct __eCNameSpace__eC__types__Instance * this, struct __eCNameSpace__eC__containers__Link * link)
{
uint64 data = (__extension__ ({
uint64 (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, struct __eCNameSpace__eC__containers__IteratorPointer * pointer);

__internal_VirtualMethod = ((uint64 (*)(struct __eCNameSpace__eC__types__Instance *, struct __eCNameSpace__eC__containers__IteratorPointer * pointer))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = this;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__containers__List->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__containers__Container_GetData]);
__internal_VirtualMethod ? __internal_VirtualMethod(this, (void *)(link)) : (uint64)1;
}));

(((void (* )(void *  _class, void *  data))((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[2].__anon1.__anon1.dataTypeClass->_vTbl[__eCVMethodID_class_OnFree])(((struct __eCNameSpace__eC__types__Instance * )(char * )this)->_class->templateArgs[2].__anon1.__anon1.dataTypeClass, ((void * )((uintptr_t)(data)))), data = 0);
(__extension__ ({
void (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, struct __eCNameSpace__eC__containers__IteratorPointer * it);

__internal_VirtualMethod = ((void (*)(struct __eCNameSpace__eC__types__Instance *, struct __eCNameSpace__eC__containers__IteratorPointer * it))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = this;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__containers__List->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__containers__Container_Remove]);
__internal_VirtualMethod ? __internal_VirtualMethod(this, (void *)(link)) : (void)1;
}));
}

struct __eCNameSpace__eC__containers__Link * __eCMethod___eCNameSpace__eC__containers__List_Insert(struct __eCNameSpace__eC__types__Instance * this, struct __eCNameSpace__eC__containers__Link * after, uint64 value)
{
struct __eCNameSpace__eC__containers__Link * link;
struct __eCNameSpace__eC__types__Class * cLLT = ((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[6].__anon1.__anon1.dataTypeClass;

if(cLLT && cLLT->type == 1)
{
unsigned int sType = cLLT->structSize;

link = (struct __eCNameSpace__eC__containers__Link *)__eCNameSpace__eC__types__eSystem_New0(sizeof(unsigned char) * (sizeof(struct __eCNameSpace__eC__containers__ListItem) + sType));
memcpy((void *)&link->data, (void *)(uintptr_t)value, sType);
}
else
{
link = (struct __eCNameSpace__eC__containers__Link *)__eCNameSpace__eC__types__eSystem_New0(sizeof(unsigned char) * (sizeof(struct __eCNameSpace__eC__containers__ListItem) + sizeof(uint64)));
link->data = ((uint64)(value));
}
(__extension__ ({
struct __eCNameSpace__eC__containers__IteratorPointer * (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, struct __eCNameSpace__eC__containers__IteratorPointer * after, uint64 value);

__internal_VirtualMethod = ((struct __eCNameSpace__eC__containers__IteratorPointer * (*)(struct __eCNameSpace__eC__types__Instance *, struct __eCNameSpace__eC__containers__IteratorPointer * after, uint64 value))__eCClass___eCNameSpace__eC__containers__LinkList->_vTbl[__eCVMethodID___eCNameSpace__eC__containers__Container_Insert]);
__internal_VirtualMethod ? __internal_VirtualMethod(this, (void *)(after), (uint64)(uintptr_t)link) : (struct __eCNameSpace__eC__containers__IteratorPointer *)1;
}));
return link;
}

struct __eCNameSpace__eC__containers__Link * __eCMethod___eCNameSpace__eC__containers__List_Add(struct __eCNameSpace__eC__types__Instance * this, uint64 value)
{
return (struct __eCNameSpace__eC__containers__Link *)(__extension__ ({
struct __eCNameSpace__eC__containers__IteratorPointer * (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, struct __eCNameSpace__eC__containers__IteratorPointer * after, uint64 value);

__internal_VirtualMethod = ((struct __eCNameSpace__eC__containers__IteratorPointer * (*)(struct __eCNameSpace__eC__types__Instance *, struct __eCNameSpace__eC__containers__IteratorPointer * after, uint64 value))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = this;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__containers__List->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__containers__Container_Insert]);
__internal_VirtualMethod ? __internal_VirtualMethod(this, (void *)(((struct __eCNameSpace__eC__containers__LinkList *)(((char *)this + 0 + sizeof(struct __eCNameSpace__eC__types__Instance))))->last), value) : (struct __eCNameSpace__eC__containers__IteratorPointer *)1;
}));
}

void __eCMethod___eCNameSpace__eC__containers__List_Remove(struct __eCNameSpace__eC__types__Instance * this, struct __eCNameSpace__eC__containers__Link * link)
{
(__extension__ ({
void (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, struct __eCNameSpace__eC__containers__IteratorPointer * it);

__internal_VirtualMethod = ((void (*)(struct __eCNameSpace__eC__types__Instance *, struct __eCNameSpace__eC__containers__IteratorPointer * it))__eCClass___eCNameSpace__eC__containers__LinkList->_vTbl[__eCVMethodID___eCNameSpace__eC__containers__Container_Remove]);
__internal_VirtualMethod ? __internal_VirtualMethod(this, (void *)(link)) : (void)1;
}));
((link ? __extension__ ({
void * __eCPtrToDelete = (link);

__eCClass___eCNameSpace__eC__containers__Link->Destructor ? __eCClass___eCNameSpace__eC__containers__Link->Destructor((void *)__eCPtrToDelete) : 0, __eCClass___eCNameSpace__eC__containers__ListItem->Destructor ? __eCClass___eCNameSpace__eC__containers__ListItem->Destructor((void *)__eCPtrToDelete) : 0, __eCClass___eCNameSpace__eC__containers__IteratorPointer->Destructor ? __eCClass___eCNameSpace__eC__containers__IteratorPointer->Destructor((void *)__eCPtrToDelete) : 0, __eCNameSpace__eC__types__eSystem_Delete(__eCPtrToDelete);
}) : 0), link = 0);
}

void __eCMethod___eCNameSpace__eC__containers__List_Free(struct __eCNameSpace__eC__types__Instance * this)
{
struct __eCNameSpace__eC__containers__Link * item = ((struct __eCNameSpace__eC__containers__LinkList *)(((char *)this + 0 + sizeof(struct __eCNameSpace__eC__types__Instance))))->first;
struct __eCNameSpace__eC__types__Class * lltClass = ((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[6].__anon1.__anon1.dataTypeClass;
unsigned int byAddress = lltClass && lltClass->type == 1;

while(item)
{
struct __eCNameSpace__eC__containers__Link * next = item->__anon1.__anon1.next;
uint64 data = byAddress ? (uint64)(uintptr_t)&item->data : (uint64)item->data;

(((void (* )(void *  _class, void *  data))((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[2].__anon1.__anon1.dataTypeClass->_vTbl[__eCVMethodID_class_OnFree])(((struct __eCNameSpace__eC__types__Instance * )(char * )this)->_class->templateArgs[2].__anon1.__anon1.dataTypeClass, ((void * )((uintptr_t)(data)))), data = 0);
((item ? __extension__ ({
void * __eCPtrToDelete = (item);

__eCClass___eCNameSpace__eC__containers__Link->Destructor ? __eCClass___eCNameSpace__eC__containers__Link->Destructor((void *)__eCPtrToDelete) : 0, __eCClass___eCNameSpace__eC__containers__ListItem->Destructor ? __eCClass___eCNameSpace__eC__containers__ListItem->Destructor((void *)__eCPtrToDelete) : 0, __eCClass___eCNameSpace__eC__containers__IteratorPointer->Destructor ? __eCClass___eCNameSpace__eC__containers__IteratorPointer->Destructor((void *)__eCPtrToDelete) : 0, __eCNameSpace__eC__types__eSystem_Delete(__eCPtrToDelete);
}) : 0), item = 0);
item = next;
}
((struct __eCNameSpace__eC__containers__LinkList *)(((char *)this + 0 + sizeof(struct __eCNameSpace__eC__types__Instance))))->first = (((void *)0));
((struct __eCNameSpace__eC__containers__LinkList *)(((char *)this + 0 + sizeof(struct __eCNameSpace__eC__types__Instance))))->last = (((void *)0));
((struct __eCNameSpace__eC__containers__LinkList *)(((char *)this + 0 + sizeof(struct __eCNameSpace__eC__types__Instance))))->count = 0;
}

struct __eCNameSpace__eC__containers__Link * __eCMethod___eCNameSpace__eC__containers__List_Find(struct __eCNameSpace__eC__types__Instance * this, const uint64 value)
{
return (struct __eCNameSpace__eC__containers__Link *)(__extension__ ({
struct __eCNameSpace__eC__containers__IteratorPointer * (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const uint64 value);

__internal_VirtualMethod = ((struct __eCNameSpace__eC__containers__IteratorPointer * (*)(struct __eCNameSpace__eC__types__Instance *, const uint64 value))__eCClass___eCNameSpace__eC__containers__Container->_vTbl[__eCVMethodID___eCNameSpace__eC__containers__Container_Find]);
__internal_VirtualMethod ? __internal_VirtualMethod(this, value) : (struct __eCNameSpace__eC__containers__IteratorPointer *)1;
}));
}

void __eCUnregisterModule_List(struct __eCNameSpace__eC__types__Instance * module)
{

}

void __eCRegisterModule_List(struct __eCNameSpace__eC__types__Instance * module)
{
struct __eCNameSpace__eC__types__Class __attribute__((unused)) * class;

class = __eCNameSpace__eC__types__eSystem_RegisterClass(5, "eC::containers::Link", "eC::containers::ListItem", sizeof(struct __eCNameSpace__eC__containers__Link), 0, (void *)0, (void *)0, module, 4, 1);
if(((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application == ((struct __eCNameSpace__eC__types__Module *)(((char *)__thisModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->application && class)
__eCClass___eCNameSpace__eC__containers__Link = class;
__eCNameSpace__eC__types__eClass_AddDataMember(class, "data", "uint64", 8, 8, 1);
if(class)
class->fixed = (unsigned int)1;
class = __eCNameSpace__eC__types__eSystem_RegisterClass(0, "eC::containers::List", "eC::containers::LinkList<eC::containers::Link, T = LLT, D = LLT>", 0, 0, (void *)0, (void *)0, module, 4, 1);
if(((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application == ((struct __eCNameSpace__eC__types__Module *)(((char *)__thisModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->application && class)
__eCClass___eCNameSpace__eC__containers__List = class;
__eCNameSpace__eC__types__eClass_AddMethod(class, "GetData", 0, __eCMethod___eCNameSpace__eC__containers__List_GetData, 1);
__eCNameSpace__eC__types__eClass_AddMethod(class, "SetData", 0, __eCMethod___eCNameSpace__eC__containers__List_SetData, 1);
__eCNameSpace__eC__types__eClass_AddMethod(class, "Insert", 0, __eCMethod___eCNameSpace__eC__containers__List_Insert, 1);
__eCNameSpace__eC__types__eClass_AddMethod(class, "Add", 0, __eCMethod___eCNameSpace__eC__containers__List_Add, 1);
__eCNameSpace__eC__types__eClass_AddMethod(class, "Remove", 0, __eCMethod___eCNameSpace__eC__containers__List_Remove, 1);
__eCNameSpace__eC__types__eClass_AddMethod(class, "Find", 0, __eCMethod___eCNameSpace__eC__containers__List_Find, 1);
__eCNameSpace__eC__types__eClass_AddMethod(class, "Free", 0, __eCMethod___eCNameSpace__eC__containers__List_Free, 1);
__eCNameSpace__eC__types__eClass_AddMethod(class, "Delete", 0, __eCMethod___eCNameSpace__eC__containers__List_Delete, 1);
__eCNameSpace__eC__types__eClass_AddTemplateParameter(class, "LLT", 0, 0, (((void *)0)));
__eCNameSpace__eC__types__eClass_DoneAddingTemplateParameters(class);
if(class)
class->fixed = (unsigned int)1;
}

