/* Code generated from eC source file: LinkList.ec */
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

struct __eCNameSpace__eC__containers__LinkElement
{
void * prev, * next;
} eC_gcc_struct;

struct __eCNameSpace__eC__containers__LinkList
{
void * first, * last;
int count;
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

struct __eCNameSpace__eC__containers__IteratorPointer;

extern unsigned int __eCNameSpace__eC__types__log2i(unsigned int number);

struct __eCNameSpace__eC__types__ClassTemplateParameter;

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

extern void *  __eCNameSpace__eC__types__eInstance_New(struct __eCNameSpace__eC__types__Class * _class);

extern void __eCNameSpace__eC__types__eClass_DoneAddingTemplateParameters(struct __eCNameSpace__eC__types__Class * base);

extern void __eCNameSpace__eC__types__eInstance_SetMethod(struct __eCNameSpace__eC__types__Instance * instance, const char *  name, void *  function);

extern void __eCNameSpace__eC__types__eInstance_IncRef(struct __eCNameSpace__eC__types__Instance * instance);

extern int __eCVMethodID___eCNameSpace__eC__containers__Container_Remove;

extern int __eCVMethodID___eCNameSpace__eC__containers__Container_GetData;

extern int __eCVMethodID___eCNameSpace__eC__containers__Container_GetAtPosition;

extern int __eCVMethodID___eCNameSpace__eC__containers__Container_Add;

extern void __eCNameSpace__eC__types__eInstance_DecRef(struct __eCNameSpace__eC__types__Instance * instance);

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

struct __eCNameSpace__eC__types__DataMember;

extern struct __eCNameSpace__eC__types__DataMember * __eCNameSpace__eC__types__eClass_AddDataMember(struct __eCNameSpace__eC__types__Class * _class, const char *  name, const char *  type, unsigned int size, unsigned int alignment, int declMode);

extern struct __eCNameSpace__eC__types__DataMember * __eCNameSpace__eC__types__eMember_New(int type, int declMode);

extern struct __eCNameSpace__eC__types__DataMember * __eCNameSpace__eC__types__eMember_AddDataMember(struct __eCNameSpace__eC__types__DataMember * member, const char *  name, const char *  type, unsigned int size, unsigned int alignment, int declMode);

extern unsigned int __eCNameSpace__eC__types__eMember_AddMember(struct __eCNameSpace__eC__types__DataMember * addTo, struct __eCNameSpace__eC__types__DataMember * dataMember);

extern unsigned int __eCNameSpace__eC__types__eClass_AddMember(struct __eCNameSpace__eC__types__Class * _class, struct __eCNameSpace__eC__types__DataMember * dataMember);

struct __eCNameSpace__eC__files__BinaryTree;

struct __eCNameSpace__eC__files__BinaryTree
{
struct __eCNameSpace__eC__containers__BTNode * root;
int count;
int (*  CompareKey)(struct __eCNameSpace__eC__files__BinaryTree * tree, uintptr_t a, uintptr_t b);
void (*  FreeKey)(void *  key);
} eC_gcc_struct;

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

struct __eCNameSpace__eC__containers__ListItem;

struct __eCNameSpace__eC__containers__ListItem
{
union
{
struct __eCNameSpace__eC__containers__LinkElement link;
struct
{
struct __eCNameSpace__eC__containers__ListItem * prev, * next;
} eC_gcc_struct __anon1;
} eC_gcc_struct __anon1;
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

static struct __eCNameSpace__eC__types__Class * __eCClass___eCNameSpace__eC__containers__LinkElement;

static struct __eCNameSpace__eC__types__Class * __eCClass___eCNameSpace__eC__containers__ListItem;

static struct __eCNameSpace__eC__types__Class * __eCClass___eCNameSpace__eC__containers__LinkList;

extern struct __eCNameSpace__eC__types__Class * __eCClass___eCNameSpace__eC__types__Instance;

extern struct __eCNameSpace__eC__types__Class * __eCClass___eCNameSpace__eC__containers__List;

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

void * __eCMethod___eCNameSpace__eC__containers__LinkList_GetFirst(struct __eCNameSpace__eC__types__Instance * this)
{
__attribute__((unused)) struct __eCNameSpace__eC__containers__LinkList * __eCPointer___eCNameSpace__eC__containers__LinkList = (struct __eCNameSpace__eC__containers__LinkList *)(this ? (((char *)this) + 0 + sizeof(struct __eCNameSpace__eC__types__Instance)) : 0);

return ((void * )((uintptr_t)(__eCPointer___eCNameSpace__eC__containers__LinkList->first)));
}

void * __eCMethod___eCNameSpace__eC__containers__LinkList_GetLast(struct __eCNameSpace__eC__types__Instance * this)
{
__attribute__((unused)) struct __eCNameSpace__eC__containers__LinkList * __eCPointer___eCNameSpace__eC__containers__LinkList = (struct __eCNameSpace__eC__containers__LinkList *)(this ? (((char *)this) + 0 + sizeof(struct __eCNameSpace__eC__types__Instance)) : 0);

return ((void * )((uintptr_t)(__eCPointer___eCNameSpace__eC__containers__LinkList->last)));
}

void * __eCMethod___eCNameSpace__eC__containers__LinkList_GetData(struct __eCNameSpace__eC__types__Instance * this, struct __eCNameSpace__eC__containers__IteratorPointer * pointer)
{
__attribute__((unused)) struct __eCNameSpace__eC__containers__LinkList * __eCPointer___eCNameSpace__eC__containers__LinkList = (struct __eCNameSpace__eC__containers__LinkList *)(this ? (((char *)this) + 0 + sizeof(struct __eCNameSpace__eC__types__Instance)) : 0);

return (void *)pointer;
}

unsigned int __eCMethod___eCNameSpace__eC__containers__LinkList_SetData(struct __eCNameSpace__eC__types__Instance * this, struct __eCNameSpace__eC__containers__IteratorPointer * pointer, uint64 data)
{
__attribute__((unused)) struct __eCNameSpace__eC__containers__LinkList * __eCPointer___eCNameSpace__eC__containers__LinkList = (struct __eCNameSpace__eC__containers__LinkList *)(this ? (((char *)this) + 0 + sizeof(struct __eCNameSpace__eC__types__Instance)) : 0);

return 0;
}

struct __eCNameSpace__eC__containers__IteratorPointer * __eCMethod___eCNameSpace__eC__containers__LinkList_Find(struct __eCNameSpace__eC__types__Instance * this, uint64 value)
{
__attribute__((unused)) struct __eCNameSpace__eC__containers__LinkList * __eCPointer___eCNameSpace__eC__containers__LinkList = (struct __eCNameSpace__eC__containers__LinkList *)(this ? (((char *)this) + 0 + sizeof(struct __eCNameSpace__eC__types__Instance)) : 0);

return (struct __eCNameSpace__eC__containers__IteratorPointer *)((void *)((uintptr_t)(value)));
}

void __eCMethod___eCNameSpace__eC__containers__LinkList_Delete(struct __eCNameSpace__eC__types__Instance * this, void * item)
{
__attribute__((unused)) struct __eCNameSpace__eC__containers__LinkList * __eCPointer___eCNameSpace__eC__containers__LinkList = (struct __eCNameSpace__eC__containers__LinkList *)(this ? (((char *)this) + 0 + sizeof(struct __eCNameSpace__eC__types__Instance)) : 0);

(__extension__ ({
void (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, struct __eCNameSpace__eC__containers__IteratorPointer * it);

__internal_VirtualMethod = ((void (*)(struct __eCNameSpace__eC__types__Instance *, struct __eCNameSpace__eC__containers__IteratorPointer * it))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = this;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__containers__LinkList->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__containers__Container_Remove]);
__internal_VirtualMethod ? __internal_VirtualMethod(this, item) : (void)1;
}));
(__eCNameSpace__eC__types__eSystem_Delete(item), item = 0);
}

void * __eCMethod___eCNameSpace__eC__containers__LinkList_GetPrev(struct __eCNameSpace__eC__types__Instance * this, struct __eCNameSpace__eC__containers__IteratorPointer * item)
{
__attribute__((unused)) struct __eCNameSpace__eC__containers__LinkList * __eCPointer___eCNameSpace__eC__containers__LinkList = (struct __eCNameSpace__eC__containers__LinkList *)(this ? (((char *)this) + 0 + sizeof(struct __eCNameSpace__eC__types__Instance)) : 0);

return ((void * )((uintptr_t)((*(struct __eCNameSpace__eC__containers__LinkElement *)(((unsigned char *)((void *)item)) + ((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[5].__anon1.__anon2.__anon1.member->offset + ((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[5].__anon1.__anon2.__anon1.member->_class->offset)).prev)));
}

void * __eCMethod___eCNameSpace__eC__containers__LinkList_GetNext(struct __eCNameSpace__eC__types__Instance * this, struct __eCNameSpace__eC__containers__IteratorPointer * item)
{
__attribute__((unused)) struct __eCNameSpace__eC__containers__LinkList * __eCPointer___eCNameSpace__eC__containers__LinkList = (struct __eCNameSpace__eC__containers__LinkList *)(this ? (((char *)this) + 0 + sizeof(struct __eCNameSpace__eC__types__Instance)) : 0);

return ((void * )((uintptr_t)((*(struct __eCNameSpace__eC__containers__LinkElement *)(((unsigned char *)((void *)item)) + ((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[5].__anon1.__anon2.__anon1.member->offset + ((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[5].__anon1.__anon2.__anon1.member->_class->offset)).next)));
}

struct __eCNameSpace__eC__containers__IteratorPointer * __eCMethod___eCNameSpace__eC__containers__LinkList_GetAtPosition(struct __eCNameSpace__eC__types__Instance * this, const uint64 pos, unsigned int create, unsigned int * justAdded)
{
__attribute__((unused)) struct __eCNameSpace__eC__containers__LinkList * __eCPointer___eCNameSpace__eC__containers__LinkList = (struct __eCNameSpace__eC__containers__LinkList *)(this ? (((char *)this) + 0 + sizeof(struct __eCNameSpace__eC__types__Instance)) : 0);
int c;
void * item;

for(c = 0, item = ((void * )((uintptr_t)(__eCPointer___eCNameSpace__eC__containers__LinkList->first))); c < (int)((const uint64)(pos)) && item; c++, item = ((void * )((uintptr_t)((*(struct __eCNameSpace__eC__containers__LinkElement *)(((unsigned char *)((void *)((uintptr_t)(item)))) + ((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[5].__anon1.__anon2.__anon1.member->offset + ((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[5].__anon1.__anon2.__anon1.member->_class->offset)).next))))
;
return (struct __eCNameSpace__eC__containers__IteratorPointer *)((void *)((uintptr_t)(item)));
}

struct __eCNameSpace__eC__containers__IteratorPointer * __eCMethod___eCNameSpace__eC__containers__LinkList_Add(struct __eCNameSpace__eC__types__Instance * this, uint64 item)
{
__attribute__((unused)) struct __eCNameSpace__eC__containers__LinkList * __eCPointer___eCNameSpace__eC__containers__LinkList = (struct __eCNameSpace__eC__containers__LinkList *)(this ? (((char *)this) + 0 + sizeof(struct __eCNameSpace__eC__types__Instance)) : 0);

if(item)
{
(*(struct __eCNameSpace__eC__containers__LinkElement *)(((unsigned char *)((void *)((uintptr_t)(item)))) + ((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[5].__anon1.__anon2.__anon1.member->offset + ((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[5].__anon1.__anon2.__anon1.member->_class->offset)).prev = ((void * )((uintptr_t)(__eCPointer___eCNameSpace__eC__containers__LinkList->last)));
if((*(struct __eCNameSpace__eC__containers__LinkElement *)(((unsigned char *)((void *)((uintptr_t)(item)))) + ((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[5].__anon1.__anon2.__anon1.member->offset + ((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[5].__anon1.__anon2.__anon1.member->_class->offset)).prev)
(*(struct __eCNameSpace__eC__containers__LinkElement *)(((unsigned char *)((void * )((uintptr_t)((*(struct __eCNameSpace__eC__containers__LinkElement *)(((unsigned char *)((void *)((uintptr_t)(item)))) + ((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[5].__anon1.__anon2.__anon1.member->offset + ((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[5].__anon1.__anon2.__anon1.member->_class->offset)).prev)))) + ((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[5].__anon1.__anon2.__anon1.member->offset + ((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[5].__anon1.__anon2.__anon1.member->_class->offset)).next = ((void * )((uintptr_t)(item)));
if(!((void * )((uintptr_t)(__eCPointer___eCNameSpace__eC__containers__LinkList->first))))
__eCPointer___eCNameSpace__eC__containers__LinkList->first = ((void * )((uintptr_t)(item)));
__eCPointer___eCNameSpace__eC__containers__LinkList->last = ((void * )((uintptr_t)(item)));
(*(struct __eCNameSpace__eC__containers__LinkElement *)(((unsigned char *)((void *)((uintptr_t)(item)))) + ((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[5].__anon1.__anon2.__anon1.member->offset + ((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[5].__anon1.__anon2.__anon1.member->_class->offset)).next = ((void * )((uintptr_t)((*(unsigned int *)&((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[4]) ? ((void * )((uintptr_t)(__eCPointer___eCNameSpace__eC__containers__LinkList->first))) : (((void *)0)))));
if((*(unsigned int *)&((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[4]))
(*(struct __eCNameSpace__eC__containers__LinkElement *)(((unsigned char *)((void * )((uintptr_t)(__eCPointer___eCNameSpace__eC__containers__LinkList->first)))) + ((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[5].__anon1.__anon2.__anon1.member->offset + ((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[5].__anon1.__anon2.__anon1.member->_class->offset)).prev = ((void * )((uintptr_t)(item)));
__eCPointer___eCNameSpace__eC__containers__LinkList->count++;
}
return (struct __eCNameSpace__eC__containers__IteratorPointer *)((void *)((uintptr_t)(item)));
}

struct __eCNameSpace__eC__containers__IteratorPointer * __eCMethod___eCNameSpace__eC__containers__LinkList_Insert(struct __eCNameSpace__eC__types__Instance * this, struct __eCNameSpace__eC__containers__IteratorPointer * _prevItem, uint64 item)
{
__attribute__((unused)) struct __eCNameSpace__eC__containers__LinkList * __eCPointer___eCNameSpace__eC__containers__LinkList = (struct __eCNameSpace__eC__containers__LinkList *)(this ? (((char *)this) + 0 + sizeof(struct __eCNameSpace__eC__types__Instance)) : 0);
void * prevItem = (void *)_prevItem;

if(item && prevItem != ((void * )((uintptr_t)(item))))
{
(*(struct __eCNameSpace__eC__containers__LinkElement *)(((unsigned char *)(uintptr_t)((uint64)(item))) + ((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[5].__anon1.__anon2.__anon1.member->offset + ((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[5].__anon1.__anon2.__anon1.member->_class->offset)).prev = ((void * )((uintptr_t)(prevItem ? ((void * )((uintptr_t)(prevItem))) : (((void * )((uintptr_t)((*(unsigned int *)&((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[4]) ? ((void * )((uintptr_t)(__eCPointer___eCNameSpace__eC__containers__LinkList->last))) : (((void *)0)))))))));
if(prevItem)
{
(*(struct __eCNameSpace__eC__containers__LinkElement *)(((unsigned char *)(uintptr_t)((uint64)(item))) + ((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[5].__anon1.__anon2.__anon1.member->offset + ((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[5].__anon1.__anon2.__anon1.member->_class->offset)).next = ((void * )((uintptr_t)((*(struct __eCNameSpace__eC__containers__LinkElement *)(((unsigned char *)((void *)((uintptr_t)(prevItem)))) + ((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[5].__anon1.__anon2.__anon1.member->offset + ((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[5].__anon1.__anon2.__anon1.member->_class->offset)).next)));
(*(struct __eCNameSpace__eC__containers__LinkElement *)(((unsigned char *)((void *)((uintptr_t)(prevItem)))) + ((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[5].__anon1.__anon2.__anon1.member->offset + ((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[5].__anon1.__anon2.__anon1.member->_class->offset)).next = ((void * )((uintptr_t)(item)));
}
else
{
(*(struct __eCNameSpace__eC__containers__LinkElement *)(((unsigned char *)(uintptr_t)((uint64)(item))) + ((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[5].__anon1.__anon2.__anon1.member->offset + ((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[5].__anon1.__anon2.__anon1.member->_class->offset)).next = ((void * )((uintptr_t)(__eCPointer___eCNameSpace__eC__containers__LinkList->first)));
__eCPointer___eCNameSpace__eC__containers__LinkList->first = ((void * )((uintptr_t)(item)));
if((*(unsigned int *)&((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[4]))
{
if((*(struct __eCNameSpace__eC__containers__LinkElement *)(((unsigned char *)(uintptr_t)((uint64)(item))) + ((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[5].__anon1.__anon2.__anon1.member->offset + ((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[5].__anon1.__anon2.__anon1.member->_class->offset)).prev)
(*(struct __eCNameSpace__eC__containers__LinkElement *)(((unsigned char *)((void * )((uintptr_t)((*(struct __eCNameSpace__eC__containers__LinkElement *)(((unsigned char *)(uintptr_t)((uint64)(item))) + ((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[5].__anon1.__anon2.__anon1.member->offset + ((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[5].__anon1.__anon2.__anon1.member->_class->offset)).prev)))) + ((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[5].__anon1.__anon2.__anon1.member->offset + ((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[5].__anon1.__anon2.__anon1.member->_class->offset)).next = ((void * )((uintptr_t)(item)));
else
(*(struct __eCNameSpace__eC__containers__LinkElement *)(((unsigned char *)(uintptr_t)((uint64)(item))) + ((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[5].__anon1.__anon2.__anon1.member->offset + ((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[5].__anon1.__anon2.__anon1.member->_class->offset)).next = ((void * )((uintptr_t)(item)));
}
}
if(((void * )((uintptr_t)(prevItem))) == ((void * )((uintptr_t)(__eCPointer___eCNameSpace__eC__containers__LinkList->last))))
__eCPointer___eCNameSpace__eC__containers__LinkList->last = ((void * )((uintptr_t)(item)));
if((*(struct __eCNameSpace__eC__containers__LinkElement *)(((unsigned char *)(uintptr_t)((uint64)(item))) + ((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[5].__anon1.__anon2.__anon1.member->offset + ((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[5].__anon1.__anon2.__anon1.member->_class->offset)).next)
(*(struct __eCNameSpace__eC__containers__LinkElement *)(((unsigned char *)((void * )((uintptr_t)((*(struct __eCNameSpace__eC__containers__LinkElement *)(((unsigned char *)(uintptr_t)((uint64)(item))) + ((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[5].__anon1.__anon2.__anon1.member->offset + ((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[5].__anon1.__anon2.__anon1.member->_class->offset)).next)))) + ((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[5].__anon1.__anon2.__anon1.member->offset + ((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[5].__anon1.__anon2.__anon1.member->_class->offset)).prev = ((void * )((uintptr_t)(item)));
__eCPointer___eCNameSpace__eC__containers__LinkList->count++;
return (struct __eCNameSpace__eC__containers__IteratorPointer *)((uintptr_t)((uint64)(item)));
}
return (((void *)0));
}

void __eCMethod___eCNameSpace__eC__containers__LinkList_Remove(struct __eCNameSpace__eC__types__Instance * this, struct __eCNameSpace__eC__containers__IteratorPointer * _item)
{
__attribute__((unused)) struct __eCNameSpace__eC__containers__LinkList * __eCPointer___eCNameSpace__eC__containers__LinkList = (struct __eCNameSpace__eC__containers__LinkList *)(this ? (((char *)this) + 0 + sizeof(struct __eCNameSpace__eC__types__Instance)) : 0);
void * item = (void *)_item;

if(item)
{
if((*(struct __eCNameSpace__eC__containers__LinkElement *)(((unsigned char *)((void *)((uintptr_t)(item)))) + ((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[5].__anon1.__anon2.__anon1.member->offset + ((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[5].__anon1.__anon2.__anon1.member->_class->offset)).prev)
(*(struct __eCNameSpace__eC__containers__LinkElement *)(((unsigned char *)((void * )((uintptr_t)((*(struct __eCNameSpace__eC__containers__LinkElement *)(((unsigned char *)((void *)((uintptr_t)(item)))) + ((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[5].__anon1.__anon2.__anon1.member->offset + ((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[5].__anon1.__anon2.__anon1.member->_class->offset)).prev)))) + ((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[5].__anon1.__anon2.__anon1.member->offset + ((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[5].__anon1.__anon2.__anon1.member->_class->offset)).next = ((void * )((uintptr_t)((*(struct __eCNameSpace__eC__containers__LinkElement *)(((unsigned char *)((void *)((uintptr_t)(item)))) + ((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[5].__anon1.__anon2.__anon1.member->offset + ((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[5].__anon1.__anon2.__anon1.member->_class->offset)).next)));
else if(((void * )((uintptr_t)(item))) != ((void * )((uintptr_t)(__eCPointer___eCNameSpace__eC__containers__LinkList->first))))
{
return ;
}
if((*(struct __eCNameSpace__eC__containers__LinkElement *)(((unsigned char *)((void *)((uintptr_t)(item)))) + ((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[5].__anon1.__anon2.__anon1.member->offset + ((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[5].__anon1.__anon2.__anon1.member->_class->offset)).next)
(*(struct __eCNameSpace__eC__containers__LinkElement *)(((unsigned char *)((void * )((uintptr_t)((*(struct __eCNameSpace__eC__containers__LinkElement *)(((unsigned char *)((void *)((uintptr_t)(item)))) + ((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[5].__anon1.__anon2.__anon1.member->offset + ((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[5].__anon1.__anon2.__anon1.member->_class->offset)).next)))) + ((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[5].__anon1.__anon2.__anon1.member->offset + ((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[5].__anon1.__anon2.__anon1.member->_class->offset)).prev = ((void * )((uintptr_t)((*(struct __eCNameSpace__eC__containers__LinkElement *)(((unsigned char *)((void *)((uintptr_t)(item)))) + ((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[5].__anon1.__anon2.__anon1.member->offset + ((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[5].__anon1.__anon2.__anon1.member->_class->offset)).prev)));
else if(((void * )((uintptr_t)(item))) != ((void * )((uintptr_t)(__eCPointer___eCNameSpace__eC__containers__LinkList->last))))
{
return ;
}
if((*(unsigned int *)&((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[4]) && ((void * )((uintptr_t)(__eCPointer___eCNameSpace__eC__containers__LinkList->last))) == ((void * )((uintptr_t)(__eCPointer___eCNameSpace__eC__containers__LinkList->first))))
__eCPointer___eCNameSpace__eC__containers__LinkList->last = __eCPointer___eCNameSpace__eC__containers__LinkList->first = (((void *)0));
else
{
if(((void * )((uintptr_t)(__eCPointer___eCNameSpace__eC__containers__LinkList->last))) == ((void * )((uintptr_t)(item))))
__eCPointer___eCNameSpace__eC__containers__LinkList->last = ((void * )((uintptr_t)((*(struct __eCNameSpace__eC__containers__LinkElement *)(((unsigned char *)((void *)((uintptr_t)(item)))) + ((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[5].__anon1.__anon2.__anon1.member->offset + ((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[5].__anon1.__anon2.__anon1.member->_class->offset)).prev)));
if(((void * )((uintptr_t)(__eCPointer___eCNameSpace__eC__containers__LinkList->first))) == ((void * )((uintptr_t)(item))))
__eCPointer___eCNameSpace__eC__containers__LinkList->first = ((void * )((uintptr_t)((*(struct __eCNameSpace__eC__containers__LinkElement *)(((unsigned char *)((void *)((uintptr_t)(item)))) + ((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[5].__anon1.__anon2.__anon1.member->offset + ((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[5].__anon1.__anon2.__anon1.member->_class->offset)).next)));
}
(*(struct __eCNameSpace__eC__containers__LinkElement *)(((unsigned char *)((void *)((uintptr_t)(item)))) + ((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[5].__anon1.__anon2.__anon1.member->offset + ((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[5].__anon1.__anon2.__anon1.member->_class->offset)).prev = (((void *)0));
(*(struct __eCNameSpace__eC__containers__LinkElement *)(((unsigned char *)((void *)((uintptr_t)(item)))) + ((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[5].__anon1.__anon2.__anon1.member->offset + ((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[5].__anon1.__anon2.__anon1.member->_class->offset)).next = (((void *)0));
__eCPointer___eCNameSpace__eC__containers__LinkList->count--;
}
}

void __eCMethod___eCNameSpace__eC__containers__LinkList_Move(struct __eCNameSpace__eC__types__Instance * this, struct __eCNameSpace__eC__containers__IteratorPointer * _item, struct __eCNameSpace__eC__containers__IteratorPointer * _prevItem)
{
__attribute__((unused)) struct __eCNameSpace__eC__containers__LinkList * __eCPointer___eCNameSpace__eC__containers__LinkList = (struct __eCNameSpace__eC__containers__LinkList *)(this ? (((char *)this) + 0 + sizeof(struct __eCNameSpace__eC__types__Instance)) : 0);
void * item = (void *)_item;
void * prevItem = (void *)_prevItem;

if(item)
{
if(((void * )((uintptr_t)(prevItem))) != ((void * )((uintptr_t)(item))) && (((void * )((uintptr_t)(__eCPointer___eCNameSpace__eC__containers__LinkList->first))) != ((void * )((uintptr_t)(item))) || prevItem))
{
if((*(struct __eCNameSpace__eC__containers__LinkElement *)(((unsigned char *)((void *)((uintptr_t)(item)))) + ((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[5].__anon1.__anon2.__anon1.member->offset + ((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[5].__anon1.__anon2.__anon1.member->_class->offset)).prev)
(*(struct __eCNameSpace__eC__containers__LinkElement *)(((unsigned char *)((void * )((uintptr_t)((*(struct __eCNameSpace__eC__containers__LinkElement *)(((unsigned char *)((void *)((uintptr_t)(item)))) + ((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[5].__anon1.__anon2.__anon1.member->offset + ((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[5].__anon1.__anon2.__anon1.member->_class->offset)).prev)))) + ((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[5].__anon1.__anon2.__anon1.member->offset + ((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[5].__anon1.__anon2.__anon1.member->_class->offset)).next = ((void * )((uintptr_t)((*(struct __eCNameSpace__eC__containers__LinkElement *)(((unsigned char *)((void *)((uintptr_t)(item)))) + ((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[5].__anon1.__anon2.__anon1.member->offset + ((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[5].__anon1.__anon2.__anon1.member->_class->offset)).next)));
if((*(struct __eCNameSpace__eC__containers__LinkElement *)(((unsigned char *)((void *)((uintptr_t)(item)))) + ((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[5].__anon1.__anon2.__anon1.member->offset + ((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[5].__anon1.__anon2.__anon1.member->_class->offset)).next)
(*(struct __eCNameSpace__eC__containers__LinkElement *)(((unsigned char *)((void * )((uintptr_t)((*(struct __eCNameSpace__eC__containers__LinkElement *)(((unsigned char *)((void *)((uintptr_t)(item)))) + ((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[5].__anon1.__anon2.__anon1.member->offset + ((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[5].__anon1.__anon2.__anon1.member->_class->offset)).next)))) + ((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[5].__anon1.__anon2.__anon1.member->offset + ((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[5].__anon1.__anon2.__anon1.member->_class->offset)).prev = ((void * )((uintptr_t)((*(struct __eCNameSpace__eC__containers__LinkElement *)(((unsigned char *)((void *)((uintptr_t)(item)))) + ((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[5].__anon1.__anon2.__anon1.member->offset + ((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[5].__anon1.__anon2.__anon1.member->_class->offset)).prev)));
if(((void * )((uintptr_t)(item))) == ((void * )((uintptr_t)(__eCPointer___eCNameSpace__eC__containers__LinkList->first))))
__eCPointer___eCNameSpace__eC__containers__LinkList->first = ((void * )((uintptr_t)((*(struct __eCNameSpace__eC__containers__LinkElement *)(((unsigned char *)((void *)((uintptr_t)(item)))) + ((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[5].__anon1.__anon2.__anon1.member->offset + ((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[5].__anon1.__anon2.__anon1.member->_class->offset)).next)));
if(((void * )((uintptr_t)(item))) == ((void * )((uintptr_t)(__eCPointer___eCNameSpace__eC__containers__LinkList->last))))
__eCPointer___eCNameSpace__eC__containers__LinkList->last = ((void * )((uintptr_t)((*(struct __eCNameSpace__eC__containers__LinkElement *)(((unsigned char *)((void *)((uintptr_t)(item)))) + ((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[5].__anon1.__anon2.__anon1.member->offset + ((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[5].__anon1.__anon2.__anon1.member->_class->offset)).prev)));
if(((void * )((uintptr_t)(prevItem))) == ((void * )((uintptr_t)(__eCPointer___eCNameSpace__eC__containers__LinkList->last))))
__eCPointer___eCNameSpace__eC__containers__LinkList->last = ((void * )((uintptr_t)(item)));
(*(struct __eCNameSpace__eC__containers__LinkElement *)(((unsigned char *)((void *)((uintptr_t)(item)))) + ((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[5].__anon1.__anon2.__anon1.member->offset + ((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[5].__anon1.__anon2.__anon1.member->_class->offset)).prev = ((void * )((uintptr_t)(prevItem ? ((void * )((uintptr_t)(prevItem))) : (((void * )((uintptr_t)((*(unsigned int *)&((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[4]) ? ((void * )((uintptr_t)(__eCPointer___eCNameSpace__eC__containers__LinkList->last))) : (((void *)0)))))))));
if(prevItem)
{
(*(struct __eCNameSpace__eC__containers__LinkElement *)(((unsigned char *)((void *)((uintptr_t)(item)))) + ((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[5].__anon1.__anon2.__anon1.member->offset + ((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[5].__anon1.__anon2.__anon1.member->_class->offset)).next = ((void * )((uintptr_t)((*(struct __eCNameSpace__eC__containers__LinkElement *)(((unsigned char *)((void *)((uintptr_t)(prevItem)))) + ((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[5].__anon1.__anon2.__anon1.member->offset + ((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[5].__anon1.__anon2.__anon1.member->_class->offset)).next)));
(*(struct __eCNameSpace__eC__containers__LinkElement *)(((unsigned char *)((void *)((uintptr_t)(prevItem)))) + ((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[5].__anon1.__anon2.__anon1.member->offset + ((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[5].__anon1.__anon2.__anon1.member->_class->offset)).next = ((void * )((uintptr_t)(item)));
}
else
{
(*(struct __eCNameSpace__eC__containers__LinkElement *)(((unsigned char *)((void *)((uintptr_t)(item)))) + ((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[5].__anon1.__anon2.__anon1.member->offset + ((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[5].__anon1.__anon2.__anon1.member->_class->offset)).next = ((void * )((uintptr_t)(__eCPointer___eCNameSpace__eC__containers__LinkList->first)));
__eCPointer___eCNameSpace__eC__containers__LinkList->first = ((void * )((uintptr_t)(item)));
if((*(unsigned int *)&((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[4]))
{
if((*(struct __eCNameSpace__eC__containers__LinkElement *)(((unsigned char *)((void *)((uintptr_t)(item)))) + ((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[5].__anon1.__anon2.__anon1.member->offset + ((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[5].__anon1.__anon2.__anon1.member->_class->offset)).prev)
(*(struct __eCNameSpace__eC__containers__LinkElement *)(((unsigned char *)((void * )((uintptr_t)((*(struct __eCNameSpace__eC__containers__LinkElement *)(((unsigned char *)((void *)((uintptr_t)(item)))) + ((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[5].__anon1.__anon2.__anon1.member->offset + ((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[5].__anon1.__anon2.__anon1.member->_class->offset)).prev)))) + ((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[5].__anon1.__anon2.__anon1.member->offset + ((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[5].__anon1.__anon2.__anon1.member->_class->offset)).next = ((void * )((uintptr_t)(item)));
else
(*(struct __eCNameSpace__eC__containers__LinkElement *)(((unsigned char *)((void *)((uintptr_t)(item)))) + ((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[5].__anon1.__anon2.__anon1.member->offset + ((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[5].__anon1.__anon2.__anon1.member->_class->offset)).next = ((void * )((uintptr_t)(item)));
}
}
if((*(struct __eCNameSpace__eC__containers__LinkElement *)(((unsigned char *)((void *)((uintptr_t)(item)))) + ((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[5].__anon1.__anon2.__anon1.member->offset + ((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[5].__anon1.__anon2.__anon1.member->_class->offset)).next)
(*(struct __eCNameSpace__eC__containers__LinkElement *)(((unsigned char *)((void * )((uintptr_t)((*(struct __eCNameSpace__eC__containers__LinkElement *)(((unsigned char *)((void *)((uintptr_t)(item)))) + ((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[5].__anon1.__anon2.__anon1.member->offset + ((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[5].__anon1.__anon2.__anon1.member->_class->offset)).next)))) + ((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[5].__anon1.__anon2.__anon1.member->offset + ((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[5].__anon1.__anon2.__anon1.member->_class->offset)).prev = ((void * )((uintptr_t)(item)));
}
}
}

void __eCMethod___eCNameSpace__eC__containers__LinkList_Free(struct __eCNameSpace__eC__types__Instance * this)
{
__attribute__((unused)) struct __eCNameSpace__eC__containers__LinkList * __eCPointer___eCNameSpace__eC__containers__LinkList = (struct __eCNameSpace__eC__containers__LinkList *)(this ? (((char *)this) + 0 + sizeof(struct __eCNameSpace__eC__types__Instance)) : 0);
void * item;

while((item = ((void * )((uintptr_t)(__eCPointer___eCNameSpace__eC__containers__LinkList->first)))))
{
(__extension__ ({
void (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, struct __eCNameSpace__eC__containers__IteratorPointer * it);

__internal_VirtualMethod = ((void (*)(struct __eCNameSpace__eC__types__Instance *, struct __eCNameSpace__eC__containers__IteratorPointer * it))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = this;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__containers__LinkList->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__containers__Container_Remove]);
__internal_VirtualMethod ? __internal_VirtualMethod(this, ((void *)((uintptr_t)(item)))) : (void)1;
}));
(((void (* )(void *  _class, void *  data))((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[3].__anon1.__anon1.dataTypeClass->_vTbl[__eCVMethodID_class_OnFree])(((struct __eCNameSpace__eC__types__Instance * )(char * )this)->_class->templateArgs[3].__anon1.__anon1.dataTypeClass, ((void * )((uintptr_t)(item)))), item = 0);
}
}

void __eCUnregisterModule_LinkList(struct __eCNameSpace__eC__types__Instance * module)
{

}

static void __eCMethod___eCNameSpace__eC__containers__LinkList__Sort(struct __eCNameSpace__eC__types__Instance *  this, unsigned int ascending, struct __eCNameSpace__eC__types__Instance * *  lists);

static void __eCMethod___eCNameSpace__eC__containers__LinkList__Sort(struct __eCNameSpace__eC__types__Instance * this, unsigned int ascending, struct __eCNameSpace__eC__types__Instance ** lists)
{
__attribute__((unused)) struct __eCNameSpace__eC__containers__LinkList * __eCPointer___eCNameSpace__eC__containers__LinkList = (struct __eCNameSpace__eC__containers__LinkList *)(this ? (((char *)this) + 0 + sizeof(struct __eCNameSpace__eC__types__Instance)) : 0);

if(__eCPointer___eCNameSpace__eC__containers__LinkList->count >= 2)
{
void * a, * b, * mid;
struct __eCNameSpace__eC__types__Class * Dclass = ((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[2].__anon1.__anon1.dataTypeClass;
unsigned int byRef = (Dclass->type == 1000 && !Dclass->byValueSystemClass) || Dclass->type == 2 || Dclass->type == 4 || Dclass->type == 3;
unsigned int isList = this->_vTbl[__eCVMethodID___eCNameSpace__eC__containers__Container_GetData] == ((uint64 (*)(struct __eCNameSpace__eC__types__Instance *, struct __eCNameSpace__eC__containers__IteratorPointer * pointer))__eCClass___eCNameSpace__eC__containers__List->_vTbl[__eCVMethodID___eCNameSpace__eC__containers__Container_GetData]);
unsigned int isLinkList = this->_vTbl[__eCVMethodID___eCNameSpace__eC__containers__Container_GetData] == __eCClass___eCNameSpace__eC__containers__LinkList->_vTbl[__eCVMethodID___eCNameSpace__eC__containers__Container_GetData];
unsigned int isStruct = Dclass->type == 1;
int (* onCompare)(void *, const void *, const void *) = (void *)Dclass->_vTbl[__eCVMethodID_class_OnCompare];
struct __eCNameSpace__eC__types__Instance * listA = lists[0];
struct __eCNameSpace__eC__types__Instance * listB = lists[1];

mid = (__extension__ ({
struct __eCNameSpace__eC__containers__IteratorPointer * (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const uint64 pos, unsigned int create, unsigned int *  justAdded);

__internal_VirtualMethod = ((struct __eCNameSpace__eC__containers__IteratorPointer * (*)(struct __eCNameSpace__eC__types__Instance *, const uint64 pos, unsigned int create, unsigned int *  justAdded))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = this;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__containers__LinkList->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__containers__Container_GetAtPosition]);
__internal_VirtualMethod ? __internal_VirtualMethod(this, (uint64)(__eCPointer___eCNameSpace__eC__containers__LinkList->count / 2 - 1), 0, (((void *)0))) : (struct __eCNameSpace__eC__containers__IteratorPointer *)1;
}));
a = ((void * )((uintptr_t)(__eCPointer___eCNameSpace__eC__containers__LinkList->first)));
b = ((void * )((uintptr_t)((*(struct __eCNameSpace__eC__containers__LinkElement *)(((unsigned char *)((void *)((uintptr_t)(mid)))) + ((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[5].__anon1.__anon2.__anon1.member->offset + ((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[5].__anon1.__anon2.__anon1.member->_class->offset)).next)));
while(a)
{
void * i = ((void * )((uintptr_t)(a)));
unsigned int done = (((void * )((uintptr_t)(a))) == ((void * )((uintptr_t)(mid))));

a = ((void * )((uintptr_t)((*(struct __eCNameSpace__eC__containers__LinkElement *)(((unsigned char *)((void *)((uintptr_t)(a)))) + ((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[5].__anon1.__anon2.__anon1.member->offset + ((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[5].__anon1.__anon2.__anon1.member->_class->offset)).next)));
(__extension__ ({
struct __eCNameSpace__eC__containers__IteratorPointer * (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, uint64 value);

__internal_VirtualMethod = ((struct __eCNameSpace__eC__containers__IteratorPointer * (*)(struct __eCNameSpace__eC__types__Instance *, uint64 value))__eCClass___eCNameSpace__eC__containers__LinkList->_vTbl[__eCVMethodID___eCNameSpace__eC__containers__Container_Add]);
__internal_VirtualMethod ? __internal_VirtualMethod(listA, (uint64)(uintptr_t)((void *)(uintptr_t)i)) : (struct __eCNameSpace__eC__containers__IteratorPointer *)1;
}));
if(done)
break;
}
while(b)
{
void * i = ((void * )((uintptr_t)(b)));

b = ((void * )((uintptr_t)((*(struct __eCNameSpace__eC__containers__LinkElement *)(((unsigned char *)((void *)((uintptr_t)(b)))) + ((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[5].__anon1.__anon2.__anon1.member->offset + ((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[5].__anon1.__anon2.__anon1.member->_class->offset)).next)));
(__extension__ ({
struct __eCNameSpace__eC__containers__IteratorPointer * (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, uint64 value);

__internal_VirtualMethod = ((struct __eCNameSpace__eC__containers__IteratorPointer * (*)(struct __eCNameSpace__eC__types__Instance *, uint64 value))__eCClass___eCNameSpace__eC__containers__LinkList->_vTbl[__eCVMethodID___eCNameSpace__eC__containers__Container_Add]);
__internal_VirtualMethod ? __internal_VirtualMethod(listB, (uint64)(uintptr_t)((void *)(uintptr_t)i)) : (struct __eCNameSpace__eC__containers__IteratorPointer *)1;
}));
}
__eCPointer___eCNameSpace__eC__containers__LinkList->first = (((void *)0)), __eCPointer___eCNameSpace__eC__containers__LinkList->last = (((void *)0)), __eCPointer___eCNameSpace__eC__containers__LinkList->count = 0;
__eCMethod___eCNameSpace__eC__containers__LinkList__Sort(listA, ascending, lists + 2);
__eCMethod___eCNameSpace__eC__containers__LinkList__Sort(listB, ascending, lists + 2);
a = ((void * )((uintptr_t)(((struct __eCNameSpace__eC__containers__LinkList *)(((char *)listA + 0 + sizeof(struct __eCNameSpace__eC__types__Instance))))->first)));
b = ((void * )((uintptr_t)(((struct __eCNameSpace__eC__containers__LinkList *)(((char *)listB + 0 + sizeof(struct __eCNameSpace__eC__types__Instance))))->first)));
while(a || b)
{
int r;

if(a && b)
{
if(isLinkList)
r = onCompare(Dclass, a, b);
else if(isList)
{
if(isStruct || byRef)
r = onCompare(Dclass, &((struct __eCNameSpace__eC__containers__Link *)((void *)((uintptr_t)(a))))->data, &((struct __eCNameSpace__eC__containers__Link *)((void *)((uintptr_t)(b))))->data);
else
r = onCompare(Dclass, (const void *)(uintptr_t)((struct __eCNameSpace__eC__containers__Link *)((void *)((uintptr_t)(a))))->data, (const void *)(uintptr_t)((struct __eCNameSpace__eC__containers__Link *)((void *)((uintptr_t)(b))))->data);
}
else
{
uint64 dataA = (__extension__ ({
uint64 (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, struct __eCNameSpace__eC__containers__IteratorPointer * pointer);

__internal_VirtualMethod = ((uint64 (*)(struct __eCNameSpace__eC__types__Instance *, struct __eCNameSpace__eC__containers__IteratorPointer * pointer))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = this;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__containers__LinkList->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__containers__Container_GetData]);
__internal_VirtualMethod ? __internal_VirtualMethod(this, ((void *)((uintptr_t)(a)))) : (uint64)1;
})), dataB = (__extension__ ({
uint64 (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, struct __eCNameSpace__eC__containers__IteratorPointer * pointer);

__internal_VirtualMethod = ((uint64 (*)(struct __eCNameSpace__eC__types__Instance *, struct __eCNameSpace__eC__containers__IteratorPointer * pointer))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = this;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__containers__LinkList->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__containers__Container_GetData]);
__internal_VirtualMethod ? __internal_VirtualMethod(this, ((void *)((uintptr_t)(b)))) : (uint64)1;
}));

r = onCompare(Dclass, byRef ? ((char *)&dataA + __ENDIAN_PAD(((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[2].__anon1.__anon1.dataTypeClass->typeSize)) : (const void *)(uintptr_t)dataA, byRef ? ((char *)&dataB + __ENDIAN_PAD(((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[2].__anon1.__anon1.dataTypeClass->typeSize)) : (const void *)(uintptr_t)dataB);
}
}
else if(a)
r = -1;
else
r = 1;
if(!ascending)
r *= -1;
if(r < 0)
{
void * i = ((void * )((uintptr_t)(a)));

a = ((void * )((uintptr_t)((*(struct __eCNameSpace__eC__containers__LinkElement *)(((unsigned char *)((void *)((uintptr_t)(a)))) + ((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[5].__anon1.__anon2.__anon1.member->offset + ((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[5].__anon1.__anon2.__anon1.member->_class->offset)).next)));
(__extension__ ({
struct __eCNameSpace__eC__containers__IteratorPointer * (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, uint64 value);

__internal_VirtualMethod = ((struct __eCNameSpace__eC__containers__IteratorPointer * (*)(struct __eCNameSpace__eC__types__Instance *, uint64 value))__eCClass___eCNameSpace__eC__containers__LinkList->_vTbl[__eCVMethodID___eCNameSpace__eC__containers__Container_Add]);
__internal_VirtualMethod ? __internal_VirtualMethod(this, (uint64)(uintptr_t)((void *)(uintptr_t)i)) : (struct __eCNameSpace__eC__containers__IteratorPointer *)1;
}));
}
else
{
void * i = ((void * )((uintptr_t)(b)));

b = ((void * )((uintptr_t)((*(struct __eCNameSpace__eC__containers__LinkElement *)(((unsigned char *)((void *)((uintptr_t)(b)))) + ((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[5].__anon1.__anon2.__anon1.member->offset + ((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[5].__anon1.__anon2.__anon1.member->_class->offset)).next)));
(__extension__ ({
struct __eCNameSpace__eC__containers__IteratorPointer * (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, uint64 value);

__internal_VirtualMethod = ((struct __eCNameSpace__eC__containers__IteratorPointer * (*)(struct __eCNameSpace__eC__types__Instance *, uint64 value))__eCClass___eCNameSpace__eC__containers__LinkList->_vTbl[__eCVMethodID___eCNameSpace__eC__containers__Container_Add]);
__internal_VirtualMethod ? __internal_VirtualMethod(this, (uint64)(uintptr_t)((void *)(uintptr_t)i)) : (struct __eCNameSpace__eC__containers__IteratorPointer *)1;
}));
}
}
((struct __eCNameSpace__eC__containers__LinkList *)(((char *)listA + 0 + sizeof(struct __eCNameSpace__eC__types__Instance))))->first = (((void *)0)), ((struct __eCNameSpace__eC__containers__LinkList *)(((char *)listA + 0 + sizeof(struct __eCNameSpace__eC__types__Instance))))->last = (((void *)0)), ((struct __eCNameSpace__eC__containers__LinkList *)(((char *)listA + 0 + sizeof(struct __eCNameSpace__eC__types__Instance))))->count = 0;
((struct __eCNameSpace__eC__containers__LinkList *)(((char *)listB + 0 + sizeof(struct __eCNameSpace__eC__types__Instance))))->first = (((void *)0)), ((struct __eCNameSpace__eC__containers__LinkList *)(((char *)listB + 0 + sizeof(struct __eCNameSpace__eC__types__Instance))))->last = (((void *)0)), ((struct __eCNameSpace__eC__containers__LinkList *)(((char *)listB + 0 + sizeof(struct __eCNameSpace__eC__types__Instance))))->count = 0;
}
}

void __eCMethod___eCNameSpace__eC__containers__LinkList_Sort(struct __eCNameSpace__eC__types__Instance * this, unsigned int ascending)
{
__attribute__((unused)) struct __eCNameSpace__eC__containers__LinkList * __eCPointer___eCNameSpace__eC__containers__LinkList = (struct __eCNameSpace__eC__containers__LinkList *)(this ? (((char *)this) + 0 + sizeof(struct __eCNameSpace__eC__types__Instance)) : 0);
int i, numLists = __eCNameSpace__eC__types__log2i(__eCPointer___eCNameSpace__eC__containers__LinkList->count) * 2;
struct __eCNameSpace__eC__types__Instance ** lists = __eCNameSpace__eC__types__eSystem_New(sizeof(struct __eCNameSpace__eC__types__Instance *) * (numLists));

for(i = 0; i < numLists; i++)
lists[i] = __eCNameSpace__eC__types__eInstance_New(((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class);
__eCMethod___eCNameSpace__eC__containers__LinkList__Sort(this, ascending, lists);
for(i = 0; i < numLists; i++)
(__eCNameSpace__eC__types__eInstance_DecRef(lists[i]), lists[i] = 0);
(__eCNameSpace__eC__types__eSystem_Delete(lists), lists = 0);
}

void __eCRegisterModule_LinkList(struct __eCNameSpace__eC__types__Instance * module)
{
struct __eCNameSpace__eC__types__ClassTemplateArgument __simpleStruct3 =
{

.__anon1 = {

.__anon1 = {
.dataTypeString = "LT::link"
}
}
};
struct __eCNameSpace__eC__types__DataValue __simpleStruct2 =
{

.__anon1 = {
.c = 0
}
};
struct __eCNameSpace__eC__types__ClassTemplateArgument __simpleStruct1 =
{

.__anon1 = {

.__anon1 = {
.dataTypeString = 0
}, .expression = (__simpleStruct2.__anon1.ui64 = 0, __simpleStruct2)
}
};
struct __eCNameSpace__eC__types__ClassTemplateArgument __simpleStruct0 =
{

.__anon1 = {

.__anon1 = {
.dataTypeString = "eC::containers::ListItem"
}
}
};
struct __eCNameSpace__eC__types__Class __attribute__((unused)) * class;

class = __eCNameSpace__eC__types__eSystem_RegisterClass(1, "eC::containers::LinkElement", 0, sizeof(struct __eCNameSpace__eC__containers__LinkElement), 0, (void *)0, (void *)0, module, 4, 1);
if(((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application == ((struct __eCNameSpace__eC__types__Module *)(((char *)__thisModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->application && class)
__eCClass___eCNameSpace__eC__containers__LinkElement = class;
__eCNameSpace__eC__types__eClass_AddDataMember(class, "prev", "T", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "next", "T", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddTemplateParameter(class, "T", 0, "void *", (((void *)0)));
__eCNameSpace__eC__types__eClass_DoneAddingTemplateParameters(class);
class = __eCNameSpace__eC__types__eSystem_RegisterClass(5, "eC::containers::ListItem", "eC::types::IteratorPointer", sizeof(struct __eCNameSpace__eC__containers__ListItem), 0, (void *)0, (void *)0, module, 4, 1);
if(((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application == ((struct __eCNameSpace__eC__types__Module *)(((char *)__thisModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->application && class)
__eCClass___eCNameSpace__eC__containers__ListItem = class;
{
struct __eCNameSpace__eC__types__DataMember * dataMember0 = __eCNameSpace__eC__types__eMember_New(1, 1);

__eCNameSpace__eC__types__eMember_AddDataMember(dataMember0, "link", "eC::containers::LinkElement<thisclass>", sizeof(struct __eCNameSpace__eC__containers__LinkElement), 8, 1);
{
struct __eCNameSpace__eC__types__DataMember * dataMember1 = __eCNameSpace__eC__types__eMember_New(2, 1);

__eCNameSpace__eC__types__eMember_AddDataMember(dataMember1, "prev", "thisclass", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eMember_AddDataMember(dataMember1, "next", "thisclass", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eMember_AddMember(dataMember0, dataMember1);
}
__eCNameSpace__eC__types__eClass_AddMember(class, dataMember0);
}
if(class)
class->fixed = (unsigned int)1;
class = __eCNameSpace__eC__types__eSystem_RegisterClass(0, "eC::containers::LinkList", "eC::types::Container<LT>", sizeof(struct __eCNameSpace__eC__containers__LinkList), 0, (void *)0, (void *)0, module, 4, 1);
if(((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application == ((struct __eCNameSpace__eC__types__Module *)(((char *)__thisModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->application && class)
__eCClass___eCNameSpace__eC__containers__LinkList = class;
__eCNameSpace__eC__types__eClass_AddMethod(class, "GetFirst", 0, __eCMethod___eCNameSpace__eC__containers__LinkList_GetFirst, 1);
__eCNameSpace__eC__types__eClass_AddMethod(class, "GetLast", 0, __eCMethod___eCNameSpace__eC__containers__LinkList_GetLast, 1);
__eCNameSpace__eC__types__eClass_AddMethod(class, "GetPrev", 0, __eCMethod___eCNameSpace__eC__containers__LinkList_GetPrev, 1);
__eCNameSpace__eC__types__eClass_AddMethod(class, "GetNext", 0, __eCMethod___eCNameSpace__eC__containers__LinkList_GetNext, 1);
__eCNameSpace__eC__types__eClass_AddMethod(class, "GetData", 0, __eCMethod___eCNameSpace__eC__containers__LinkList_GetData, 1);
__eCNameSpace__eC__types__eClass_AddMethod(class, "SetData", 0, __eCMethod___eCNameSpace__eC__containers__LinkList_SetData, 1);
__eCNameSpace__eC__types__eClass_AddMethod(class, "GetAtPosition", 0, __eCMethod___eCNameSpace__eC__containers__LinkList_GetAtPosition, 1);
__eCNameSpace__eC__types__eClass_AddMethod(class, "Insert", 0, __eCMethod___eCNameSpace__eC__containers__LinkList_Insert, 1);
__eCNameSpace__eC__types__eClass_AddMethod(class, "Add", 0, __eCMethod___eCNameSpace__eC__containers__LinkList_Add, 1);
__eCNameSpace__eC__types__eClass_AddMethod(class, "Remove", 0, __eCMethod___eCNameSpace__eC__containers__LinkList_Remove, 1);
__eCNameSpace__eC__types__eClass_AddMethod(class, "Move", 0, __eCMethod___eCNameSpace__eC__containers__LinkList_Move, 1);
__eCNameSpace__eC__types__eClass_AddMethod(class, "Find", 0, __eCMethod___eCNameSpace__eC__containers__LinkList_Find, 1);
__eCNameSpace__eC__types__eClass_AddMethod(class, "Free", 0, __eCMethod___eCNameSpace__eC__containers__LinkList_Free, 1);
__eCNameSpace__eC__types__eClass_AddMethod(class, "Delete", 0, __eCMethod___eCNameSpace__eC__containers__LinkList_Delete, 1);
__eCNameSpace__eC__types__eClass_AddMethod(class, "Sort", 0, __eCMethod___eCNameSpace__eC__containers__LinkList_Sort, 1);
__eCNameSpace__eC__types__eClass_AddMethod(class, "_Sort", "static void _Sort(bool ascending, eC::containers::LinkList * lists)", __eCMethod___eCNameSpace__eC__containers__LinkList__Sort, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "first", "LT", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "last", "LT", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "count", "int", 4, 4, 1);
__eCNameSpace__eC__types__eClass_AddTemplateParameter(class, "LT", 0, "void *", &__simpleStruct0);
__eCNameSpace__eC__types__eClass_AddTemplateParameter(class, "circ", 2, "bool", &__simpleStruct1);
__eCNameSpace__eC__types__eClass_AddTemplateParameter(class, "link", 1, (void *)0, &__simpleStruct3);
__eCNameSpace__eC__types__eClass_DoneAddingTemplateParameters(class);
if(class)
class->fixed = (unsigned int)1;
}

