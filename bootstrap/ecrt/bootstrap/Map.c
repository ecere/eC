/* Code generated from eC source file: Map.ec */
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
extern int __eCVMethodID_class_OnCopy;

extern int __eCVMethodID_class_OnFree;

extern int __eCVMethodID_class_OnSerialize;

extern int __eCVMethodID_class_OnUnserialize;

extern struct __eCNameSpace__eC__types__Property * __eCProp___eCNameSpace__eC__types__AVLNode_prev;

extern struct __eCNameSpace__eC__types__Property * __eCProp___eCNameSpace__eC__types__AVLNode_next;

extern struct __eCNameSpace__eC__types__Property * __eCProp___eCNameSpace__eC__types__AVLNode_minimum;

extern struct __eCNameSpace__eC__types__Property * __eCProp___eCNameSpace__eC__types__AVLNode_maximum;

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

struct __eCNameSpace__eC__types__MapNode;

struct __eCNameSpace__eC__types__MapNode;

extern void *  memcpy(void * , const void * , size_t size);

struct __eCNameSpace__eC__types__CustomAVLTree
{
struct __eCNameSpace__eC__types__AVLNode * root;
int count;
} eC_gcc_struct;

extern void __eCNameSpace__eC__types__eSystem_LockMem(void);

extern void __eCNameSpace__eC__types__eSystem_UnlockMem(void);

struct __eCNameSpace__eC__types__ClassTemplateParameter;

extern int __eCVMethodID_class_OnFree;

struct __eCNameSpace__eC__types__MapNode
{
struct __eCNameSpace__eC__types__MapNode * parent;
struct __eCNameSpace__eC__types__MapNode * left;
struct __eCNameSpace__eC__types__MapNode * right;
int depth;
uint64 key;
uint64 value;
} eC_gcc_struct;

uint64 __eCProp___eCNameSpace__eC__types__MapNode_Get_value(struct __eCNameSpace__eC__types__MapNode * this)
{
return this ? this->value : (uint64)0;
}

void __eCProp___eCNameSpace__eC__types__MapNode_Set_value(struct __eCNameSpace__eC__types__MapNode * this, uint64 value)
{
this->value = value;
}

const uint64 __eCProp___eCNameSpace__eC__types__MapNode_Get_key(struct __eCNameSpace__eC__types__MapNode * this);

void __eCProp___eCNameSpace__eC__types__MapNode_Set_key(struct __eCNameSpace__eC__types__MapNode * this, const uint64 value);

uint64 __eCProp___eCNameSpace__eC__types__MapNode_Get_value(struct __eCNameSpace__eC__types__MapNode * this);

void __eCProp___eCNameSpace__eC__types__MapNode_Set_value(struct __eCNameSpace__eC__types__MapNode * this, uint64 value);

struct __eCNameSpace__eC__types__Property;

static __attribute__((unused)) struct __eCNameSpace__eC__types__Property * __eCProp___eCNameSpace__eC__types__MapNode_key, * __eCPropM___eCNameSpace__eC__types__MapNode_key;

static __attribute__((unused)) struct __eCNameSpace__eC__types__Property * __eCProp___eCNameSpace__eC__types__MapNode_value, * __eCPropM___eCNameSpace__eC__types__MapNode_value;

static __attribute__((unused)) struct __eCNameSpace__eC__types__Property * __eCProp___eCNameSpace__eC__types__MapNode_prev, * __eCPropM___eCNameSpace__eC__types__MapNode_prev;

static __attribute__((unused)) struct __eCNameSpace__eC__types__Property * __eCProp___eCNameSpace__eC__types__MapNode_next, * __eCPropM___eCNameSpace__eC__types__MapNode_next;

static __attribute__((unused)) struct __eCNameSpace__eC__types__Property * __eCProp___eCNameSpace__eC__types__MapNode_minimum, * __eCPropM___eCNameSpace__eC__types__MapNode_minimum;

static __attribute__((unused)) struct __eCNameSpace__eC__types__Property * __eCProp___eCNameSpace__eC__types__MapNode_maximum, * __eCPropM___eCNameSpace__eC__types__MapNode_maximum;

static __attribute__((unused)) struct __eCNameSpace__eC__types__Property * __eCProp___eCNameSpace__eC__types__MapIterator_map, * __eCPropM___eCNameSpace__eC__types__MapIterator_map;

static __attribute__((unused)) struct __eCNameSpace__eC__types__Property * __eCProp___eCNameSpace__eC__types__MapIterator_key, * __eCPropM___eCNameSpace__eC__types__MapIterator_key;

static __attribute__((unused)) struct __eCNameSpace__eC__types__Property * __eCProp___eCNameSpace__eC__types__MapIterator_value, * __eCPropM___eCNameSpace__eC__types__MapIterator_value;

static __attribute__((unused)) struct __eCNameSpace__eC__types__Property * __eCProp___eCNameSpace__eC__types__Map_mapSrc, * __eCPropM___eCNameSpace__eC__types__Map_mapSrc;

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

extern void *  __eCNameSpace__eC__types__eInstance_New(struct __eCNameSpace__eC__types__Class * _class);

extern struct __eCNameSpace__eC__types__Property * __eCNameSpace__eC__types__eClass_AddProperty(struct __eCNameSpace__eC__types__Class * _class, const char *  name, const char *  dataType, void *  setStmt, void *  getStmt, int declMode);

extern void __eCNameSpace__eC__types__eClass_DoneAddingTemplateParameters(struct __eCNameSpace__eC__types__Class * base);

struct __eCNameSpace__eC__types__MapIterator
{
struct __eCNameSpace__eC__types__Instance * container;
struct __eCNameSpace__eC__containers__IteratorPointer * pointer;
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

void __eCProp___eCNameSpace__eC__types__Map_Set_mapSrc(struct __eCNameSpace__eC__types__Instance * this, struct __eCNameSpace__eC__types__Instance * value);

extern int __eCVMethodID___eCNameSpace__eC__containers__Container_GetData;

extern int __eCVMethodID___eCNameSpace__eC__containers__Container_SetData;

extern int __eCVMethodID___eCNameSpace__eC__containers__Container_GetAtPosition;

extern int __eCVMethodID___eCNameSpace__eC__containers__Container_Add;

extern int __eCVMethodID___eCNameSpace__eC__containers__Container_Remove;

extern int __eCVMethodID___eCNameSpace__eC__containers__Container_Find;

struct __eCNameSpace__eC__containers__IteratorPointer * __eCMethod___eCNameSpace__eC__types__CustomAVLTree_AddEx(struct __eCNameSpace__eC__types__Instance * this, uint64 node, uint64 addNode, int addSide);

extern int __eCVMethodID___eCNameSpace__eC__containers__Container_RemoveAll;

extern int __eCVMethodID___eCNameSpace__eC__containers__Container_GetFirst;

extern int __eCVMethodID___eCNameSpace__eC__containers__Container_GetNext;

extern int __eCVMethodID___eCNameSpace__eC__containers__Container_Free;

extern int __eCVMethodID___eCNameSpace__eC__containers__Container_GetCount;

void __eCMethod___eCNameSpace__eC__types__IOChannel_Put(struct __eCNameSpace__eC__types__Instance * this, struct __eCNameSpace__eC__types__Class * class, const void * data);

void __eCMethod___eCNameSpace__eC__types__IOChannel_Get(struct __eCNameSpace__eC__types__Instance * this, struct __eCNameSpace__eC__types__Class * class, void * *  data);

struct __eCNameSpace__eC__types__Instance * __eCProp___eCNameSpace__eC__types__MapIterator_Get_map(struct __eCNameSpace__eC__types__MapIterator * this)
{
return (struct __eCNameSpace__eC__types__Instance *)this->container;
}

void __eCProp___eCNameSpace__eC__types__MapIterator_Set_map(struct __eCNameSpace__eC__types__MapIterator * this, struct __eCNameSpace__eC__types__Instance * value)
{
this->container = (struct __eCNameSpace__eC__types__Instance *)value;
}

struct __eCNameSpace__eC__types__AVLNode;

struct __eCNameSpace__eC__types__AVLNode
{
struct __eCNameSpace__eC__types__AVLNode * parent;
struct __eCNameSpace__eC__types__AVLNode * left;
struct __eCNameSpace__eC__types__AVLNode * right;
int depth;
uint64 key;
} eC_gcc_struct;

const uint64 __eCProp___eCNameSpace__eC__types__MapNode_Get_key(struct __eCNameSpace__eC__types__MapNode * this)
{
return this->key;
}

void __eCProp___eCNameSpace__eC__types__MapNode_Set_key(struct __eCNameSpace__eC__types__MapNode * this, const uint64 value)
{
this->key = value;
}

struct __eCNameSpace__eC__types__AVLNode * __eCProp___eCNameSpace__eC__types__AVLNode_Get_prev(struct __eCNameSpace__eC__types__AVLNode * this);

struct __eCNameSpace__eC__types__AVLNode * __eCProp___eCNameSpace__eC__types__AVLNode_Get_next(struct __eCNameSpace__eC__types__AVLNode * this);

struct __eCNameSpace__eC__types__AVLNode * __eCProp___eCNameSpace__eC__types__AVLNode_Get_minimum(struct __eCNameSpace__eC__types__AVLNode * this);

struct __eCNameSpace__eC__types__AVLNode * __eCProp___eCNameSpace__eC__types__AVLNode_Get_maximum(struct __eCNameSpace__eC__types__AVLNode * this);

struct __eCNameSpace__eC__types__AVLNode * __eCMethod___eCNameSpace__eC__types__AVLNode_Find(struct __eCNameSpace__eC__types__AVLNode * this, struct __eCNameSpace__eC__types__Class * Tclass, const uint64 key);

struct __eCNameSpace__eC__types__AVLNode * __eCMethod___eCNameSpace__eC__types__AVLNode_FindEx(struct __eCNameSpace__eC__types__AVLNode * this, struct __eCNameSpace__eC__types__Class * Tclass, const uint64 key, struct __eCNameSpace__eC__types__AVLNode **  addTo, int *  addSide);

struct __eCNameSpace__eC__types__MapNode * __eCProp___eCNameSpace__eC__types__MapNode_Get_prev(struct __eCNameSpace__eC__types__MapNode * this)
{
return (struct __eCNameSpace__eC__types__MapNode *)__eCProp___eCNameSpace__eC__types__AVLNode_Get_prev((void *)(this));
}

struct __eCNameSpace__eC__types__MapNode * __eCProp___eCNameSpace__eC__types__MapNode_Get_next(struct __eCNameSpace__eC__types__MapNode * this)
{
return (struct __eCNameSpace__eC__types__MapNode *)__eCProp___eCNameSpace__eC__types__AVLNode_Get_next((void *)(this));
}

struct __eCNameSpace__eC__types__MapNode * __eCProp___eCNameSpace__eC__types__MapNode_Get_minimum(struct __eCNameSpace__eC__types__MapNode * this)
{
return (struct __eCNameSpace__eC__types__MapNode *)__eCProp___eCNameSpace__eC__types__AVLNode_Get_minimum((void *)(this));
}

struct __eCNameSpace__eC__types__MapNode * __eCProp___eCNameSpace__eC__types__MapNode_Get_maximum(struct __eCNameSpace__eC__types__MapNode * this)
{
return (struct __eCNameSpace__eC__types__MapNode *)__eCProp___eCNameSpace__eC__types__AVLNode_Get_maximum((void *)(this));
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

extern struct __eCNameSpace__eC__types__ClassTemplateParameter * __eCNameSpace__eC__types__eClass_AddTemplateParameter(struct __eCNameSpace__eC__types__Class * _class, const char *  name, int type, const void *  info, struct __eCNameSpace__eC__types__ClassTemplateArgument * defaultArg);

struct __eCNameSpace__eC__types__Module;

extern struct __eCNameSpace__eC__types__Class * __eCNameSpace__eC__types__eSystem_RegisterClass(int type, const char *  name, const char *  baseName, int size, int sizeClass, unsigned int (*  Constructor)(void * ), void (*  Destructor)(void * ), struct __eCNameSpace__eC__types__Instance * module, int declMode, int inheritanceAccess);

extern struct __eCNameSpace__eC__types__Instance * __thisModule;

uint64 __eCMethod___eCNameSpace__eC__types__Map_GetKey(struct __eCNameSpace__eC__types__Instance *  this, struct __eCNameSpace__eC__types__MapNode *  node);

const uint64 __eCProp___eCNameSpace__eC__types__MapIterator_Get_key(struct __eCNameSpace__eC__types__MapIterator * this)
{
return __eCMethod___eCNameSpace__eC__types__Map_GetKey(((struct __eCNameSpace__eC__types__Instance *)this->container), (struct __eCNameSpace__eC__types__MapNode *)this->pointer);
}

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

static struct __eCNameSpace__eC__types__Class * __eCClass___eCNameSpace__eC__types__MapNode;

static struct __eCNameSpace__eC__types__Class * __eCClass___eCNameSpace__eC__types__MapIterator;

static struct __eCNameSpace__eC__types__Class * __eCClass___eCNameSpace__eC__types__Map;

extern struct __eCNameSpace__eC__types__Class * __eCClass___eCNameSpace__eC__containers__Container;

extern struct __eCNameSpace__eC__types__Class * __eCClass___eCNameSpace__eC__types__Instance;

extern struct __eCNameSpace__eC__types__Class * __eCClass___eCNameSpace__eC__types__CustomAVLTree;

extern struct __eCNameSpace__eC__types__Class * __eCClass___eCNameSpace__eC__types__AVLNode;

extern struct __eCNameSpace__eC__types__Class * __eCClass___eCNameSpace__eC__containers__IteratorPointer;

extern struct __eCNameSpace__eC__types__Class * __eCClass___eCNameSpace__eC__containers__BuiltInContainer;

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

uint64 __eCProp___eCNameSpace__eC__types__MapIterator_Get_value(struct __eCNameSpace__eC__types__MapIterator * this)
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

void __eCProp___eCNameSpace__eC__types__MapIterator_Set_value(struct __eCNameSpace__eC__types__MapIterator * this, uint64 value)
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

struct __eCNameSpace__eC__types__MapNode * __eCMethod___eCNameSpace__eC__types__Map_Find(struct __eCNameSpace__eC__types__Instance * this, uint64 value)
{
return (struct __eCNameSpace__eC__types__MapNode *)(__extension__ ({
struct __eCNameSpace__eC__containers__IteratorPointer * (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const uint64 value);

__internal_VirtualMethod = ((struct __eCNameSpace__eC__containers__IteratorPointer * (*)(struct __eCNameSpace__eC__types__Instance *, const uint64 value))__eCClass___eCNameSpace__eC__containers__Container->_vTbl[__eCVMethodID___eCNameSpace__eC__containers__Container_Find]);
__internal_VirtualMethod ? __internal_VirtualMethod(this, value) : (struct __eCNameSpace__eC__containers__IteratorPointer *)1;
}));
}

uint64 __eCMethod___eCNameSpace__eC__types__Map_GetKey(struct __eCNameSpace__eC__types__Instance * this, struct __eCNameSpace__eC__types__MapNode * node)
{
if(((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[5].__anon1.__anon1.dataTypeClass->type == 1)
return (uint64)(uintptr_t)(((unsigned char *)&node->key) + __ENDIAN_PAD(sizeof(void *)));
return __eCProp___eCNameSpace__eC__types__MapNode_Get_key(node);
}

uint64 __eCMethod___eCNameSpace__eC__types__Map_GetData(struct __eCNameSpace__eC__types__Instance * this, struct __eCNameSpace__eC__types__MapNode * node)
{
if(node)
{
if(((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[5].__anon1.__anon1.dataTypeClass->type == 1)
node = (struct __eCNameSpace__eC__types__MapNode *)(((unsigned char *)node) + ((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[5].__anon1.__anon1.dataTypeClass->structSize - sizeof node->key);
return (((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[6].__anon1.__anon1.dataTypeClass->type == 1) ? (uint64)(uintptr_t)&node->value : __eCProp___eCNameSpace__eC__types__MapNode_Get_value(node);
}
return (uint64)0;
}

unsigned int __eCMethod___eCNameSpace__eC__types__Map_SetData(struct __eCNameSpace__eC__types__Instance * this, struct __eCNameSpace__eC__types__MapNode * node, uint64 value)
{
if(node)
{
if(((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[5].__anon1.__anon1.dataTypeClass->type == 1)
node = (struct __eCNameSpace__eC__types__MapNode *)(((unsigned char *)node) + ((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[5].__anon1.__anon1.dataTypeClass->structSize - sizeof node->key);
if(((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[6].__anon1.__anon1.dataTypeClass->type == 1)
memcpy((void *)&node->value, (void *)(uintptr_t)value, ((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[6].__anon1.__anon1.dataTypeClass->structSize);
else
__eCProp___eCNameSpace__eC__types__MapNode_Set_value(node, value);
}
return 1;
}

void __eCMethod___eCNameSpace__eC__types__Map_FreeKey(struct __eCNameSpace__eC__types__Instance * this, struct __eCNameSpace__eC__types__MapNode * node)
{
if(((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[5].__anon1.__anon1.dataTypeClass->type == 1)
{
struct __eCNameSpace__eC__types__Class * Tclass = ((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[5].__anon1.__anon1.dataTypeClass;

((void (*)(void *, void *))(void *)Tclass->_vTbl[__eCVMethodID_class_OnFree])(Tclass, (((unsigned char *)&node->key) + __ENDIAN_PAD(sizeof(void *))));
}
else
(((void (* )(void *  _class, void *  data))((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[5].__anon1.__anon1.dataTypeClass->_vTbl[__eCVMethodID_class_OnFree])(((struct __eCNameSpace__eC__types__Instance * )(char * )this)->_class->templateArgs[5].__anon1.__anon1.dataTypeClass, ((void * )((uintptr_t)(__eCProp___eCNameSpace__eC__types__MapNode_Get_key(node))))), __eCProp___eCNameSpace__eC__types__MapNode_Set_key(node, 0));
}

void __eCProp___eCNameSpace__eC__types__Map_Set_mapSrc(struct __eCNameSpace__eC__types__Instance * this, struct __eCNameSpace__eC__types__Instance * value)
{
struct __eCNameSpace__eC__containers__IteratorPointer * i;

(__extension__ ({
void (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *);

__internal_VirtualMethod = ((void (*)(struct __eCNameSpace__eC__types__Instance *))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = this;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__types__Map->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__containers__Container_RemoveAll]);
__internal_VirtualMethod ? __internal_VirtualMethod(this) : (void)1;
}));
if(value && __eCNameSpace__eC__types__eClass_IsDerived(((struct __eCNameSpace__eC__types__Instance *)(char *)value)->_class, __eCClass___eCNameSpace__eC__types__Map))
{
for(i = (__extension__ ({
struct __eCNameSpace__eC__containers__IteratorPointer * (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *);

__internal_VirtualMethod = ((struct __eCNameSpace__eC__containers__IteratorPointer * (*)(struct __eCNameSpace__eC__types__Instance *))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = value;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__types__Map->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__containers__Container_GetFirst]);
__internal_VirtualMethod ? __internal_VirtualMethod(value) : (struct __eCNameSpace__eC__containers__IteratorPointer *)1;
})); i; i = (__extension__ ({
struct __eCNameSpace__eC__containers__IteratorPointer * (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, struct __eCNameSpace__eC__containers__IteratorPointer * pointer);

__internal_VirtualMethod = ((struct __eCNameSpace__eC__containers__IteratorPointer * (*)(struct __eCNameSpace__eC__types__Instance *, struct __eCNameSpace__eC__containers__IteratorPointer * pointer))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = value;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__types__Map->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__containers__Container_GetNext]);
__internal_VirtualMethod ? __internal_VirtualMethod(value, i) : (struct __eCNameSpace__eC__containers__IteratorPointer *)1;
})))
{
struct __eCNameSpace__eC__types__MapNode * srcNode = (struct __eCNameSpace__eC__types__MapNode *)i;
struct __eCNameSpace__eC__types__MapNode * destNode = (struct __eCNameSpace__eC__types__MapNode *)(__extension__ ({
struct __eCNameSpace__eC__containers__IteratorPointer * (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const uint64 pos, unsigned int create, unsigned int *  justAdded);

__internal_VirtualMethod = ((struct __eCNameSpace__eC__containers__IteratorPointer * (*)(struct __eCNameSpace__eC__types__Instance *, const uint64 pos, unsigned int create, unsigned int *  justAdded))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = this;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__types__Map->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__containers__Container_GetAtPosition]);
__internal_VirtualMethod ? __internal_VirtualMethod(this, __eCProp___eCNameSpace__eC__types__MapNode_Get_key(srcNode), 1, (((void *)0))) : (struct __eCNameSpace__eC__containers__IteratorPointer *)1;
}));

(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, struct __eCNameSpace__eC__containers__IteratorPointer * pointer, uint64 data);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, struct __eCNameSpace__eC__containers__IteratorPointer * pointer, uint64 data))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = this;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__types__Map->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__containers__Container_SetData]);
__internal_VirtualMethod ? __internal_VirtualMethod(this, (void *)(destNode), (__extension__ ({
uint64 (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, struct __eCNameSpace__eC__containers__IteratorPointer * pointer);

__internal_VirtualMethod = ((uint64 (*)(struct __eCNameSpace__eC__types__Instance *, struct __eCNameSpace__eC__containers__IteratorPointer * pointer))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = this;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__types__Map->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__containers__Container_GetData]);
__internal_VirtualMethod ? __internal_VirtualMethod(this, (void *)(srcNode)) : (uint64)1;
}))) : (unsigned int)1;
}));
}
}
__eCProp___eCNameSpace__eC__types__Map_mapSrc && __eCProp___eCNameSpace__eC__types__Map_mapSrc->selfWatchable ? __eCNameSpace__eC__types__eInstance_FireSelfWatchers(this, __eCProp___eCNameSpace__eC__types__Map_mapSrc) : (void)0, __eCPropM___eCNameSpace__eC__types__Map_mapSrc && __eCPropM___eCNameSpace__eC__types__Map_mapSrc->selfWatchable ? __eCNameSpace__eC__types__eInstance_FireSelfWatchers(this, __eCPropM___eCNameSpace__eC__types__Map_mapSrc) : (void)0;
}

struct __eCNameSpace__eC__types__MapNode * __eCMethod___eCNameSpace__eC__types__Map_GetAtPosition(struct __eCNameSpace__eC__types__Instance * this, const uint64 pos, unsigned int create, unsigned int * justAdded)
{
struct __eCNameSpace__eC__types__AVLNode * addNode = (((void *)0));
int addSide = 0;
struct __eCNameSpace__eC__types__MapNode * node = (void *)(((struct __eCNameSpace__eC__types__CustomAVLTree *)(((char *)this + 0 + sizeof(struct __eCNameSpace__eC__types__Instance))))->root ? __eCMethod___eCNameSpace__eC__types__AVLNode_FindEx(((struct __eCNameSpace__eC__types__CustomAVLTree *)(((char *)this + 0 + sizeof(struct __eCNameSpace__eC__types__Instance))))->root, ((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[5].__anon1.__anon1.dataTypeClass, pos, &addNode, &addSide) : (((void *)0)));

if(!node && create)
{
struct __eCNameSpace__eC__types__Class * Tclass = ((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[5].__anon1.__anon1.dataTypeClass;
void (* onCopy)(void *, void *, void *) = Tclass->_vTbl[__eCVMethodID_class_OnCopy];

if(((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[5].__anon1.__anon1.dataTypeClass->type == 1 || ((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[6].__anon1.__anon1.dataTypeClass->type == 1)
{
unsigned int size = sizeof(struct __eCNameSpace__eC__types__MapNode);

if(((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[5].__anon1.__anon1.dataTypeClass->type == 1)
size += ((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[5].__anon1.__anon1.dataTypeClass->typeSize - sizeof node->key;
if(((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[6].__anon1.__anon1.dataTypeClass->type == 1)
size += ((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[6].__anon1.__anon1.dataTypeClass->typeSize - sizeof(uint64);
node = (struct __eCNameSpace__eC__types__MapNode *)__eCNameSpace__eC__types__eSystem_New0(sizeof(unsigned char) * (size));
}
else
{
node = __extension__ ({
struct __eCNameSpace__eC__types__MapNode * __eCInstance1 = __eCNameSpace__eC__types__eSystem_New0(sizeof(struct __eCNameSpace__eC__types__MapNode) + sizeof(struct __eCNameSpace__eC__types__AVLNode));

__eCProp___eCNameSpace__eC__types__MapNode_Set_key(__eCInstance1, pos), __eCInstance1;
});
}
if((Tclass->type == 1000 && !Tclass->byValueSystemClass) || Tclass->type == 2 || Tclass->type == 4 || Tclass->type == 3)
memcpy((unsigned char *)&node->key + __ENDIAN_PAD(Tclass->typeSize), (unsigned char *)((char *)&pos + __ENDIAN_PAD(((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[5].__anon1.__anon1.dataTypeClass->typeSize)) + __ENDIAN_PAD(Tclass->typeSize), Tclass->typeSize);
else
onCopy(Tclass, (unsigned char *)&node->key + __ENDIAN_PAD(sizeof(void *)), (void *)(uintptr_t)pos);
__eCMethod___eCNameSpace__eC__types__CustomAVLTree_AddEx(this, (uint64)(uintptr_t)node, (uint64)(uintptr_t)addNode, addSide);
if(justAdded)
*justAdded = 1;
}
return node;
}

struct __eCNameSpace__eC__types__MapNode * __eCMethod___eCNameSpace__eC__types__Map_Add(struct __eCNameSpace__eC__types__Instance * this, uint64 _newNode)
{
struct __eCNameSpace__eC__types__MapNode * newNode = (struct __eCNameSpace__eC__types__MapNode *)((struct __eCNameSpace__eC__types__AVLNode *)((uintptr_t)(_newNode)));

if(((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[5].__anon1.__anon1.dataTypeClass->type == 1 || ((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[6].__anon1.__anon1.dataTypeClass->type == 1)
{
struct __eCNameSpace__eC__types__MapNode * realNode = (struct __eCNameSpace__eC__types__MapNode *)(__extension__ ({
struct __eCNameSpace__eC__containers__IteratorPointer * (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const uint64 pos, unsigned int create, unsigned int *  justAdded);

__internal_VirtualMethod = ((struct __eCNameSpace__eC__containers__IteratorPointer * (*)(struct __eCNameSpace__eC__types__Instance *, const uint64 pos, unsigned int create, unsigned int *  justAdded))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = this;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__types__Map->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__containers__Container_GetAtPosition]);
__internal_VirtualMethod ? __internal_VirtualMethod(this, __eCProp___eCNameSpace__eC__types__MapNode_Get_key(newNode), 1, (((void *)0))) : (struct __eCNameSpace__eC__containers__IteratorPointer *)1;
}));

if(realNode)
{
if(((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[6].__anon1.__anon1.dataTypeClass->type == 1)
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, struct __eCNameSpace__eC__containers__IteratorPointer * pointer, uint64 data);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, struct __eCNameSpace__eC__containers__IteratorPointer * pointer, uint64 data))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = this;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__types__Map->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__containers__Container_SetData]);
__internal_VirtualMethod ? __internal_VirtualMethod(this, (void *)(realNode), (uint64)(uintptr_t)&newNode->value) : (unsigned int)1;
}));
else
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, struct __eCNameSpace__eC__containers__IteratorPointer * pointer, uint64 data);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, struct __eCNameSpace__eC__containers__IteratorPointer * pointer, uint64 data))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = this;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__types__Map->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__containers__Container_SetData]);
__internal_VirtualMethod ? __internal_VirtualMethod(this, (void *)(realNode), __eCProp___eCNameSpace__eC__types__MapNode_Get_value(newNode)) : (unsigned int)1;
}));
}
return realNode;
}
else
{
struct __eCNameSpace__eC__types__MapNode * node = (void *)(((struct __eCNameSpace__eC__types__CustomAVLTree *)(((char *)this + 0 + sizeof(struct __eCNameSpace__eC__types__Instance))))->root ? __eCMethod___eCNameSpace__eC__types__AVLNode_Find(((struct __eCNameSpace__eC__types__CustomAVLTree *)(((char *)this + 0 + sizeof(struct __eCNameSpace__eC__types__Instance))))->root, ((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[5].__anon1.__anon1.dataTypeClass, (uint64)__eCProp___eCNameSpace__eC__types__MapNode_Get_key(newNode)) : (((void *)0)));

if(!node)
{
struct __eCNameSpace__eC__types__Class * Tclass = ((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[5].__anon1.__anon1.dataTypeClass;
void (* onCopy)(void *, void *, void *) = Tclass->_vTbl[__eCVMethodID_class_OnCopy];

if((Tclass->type == 1000 && !Tclass->byValueSystemClass) || Tclass->type == 2 || Tclass->type == 4 || Tclass->type == 3)
onCopy(Tclass, (unsigned char *)&newNode->key + __ENDIAN_PAD(Tclass->typeSize), (unsigned char *)&newNode->key + __ENDIAN_PAD(Tclass->typeSize));
else
onCopy(Tclass, (unsigned char *)&newNode->key + __ENDIAN_PAD(sizeof(void *)), (void *)(uintptr_t)(uint64)(newNode->key));
(__extension__ ({
struct __eCNameSpace__eC__containers__IteratorPointer * (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, uint64 value);

__internal_VirtualMethod = ((struct __eCNameSpace__eC__containers__IteratorPointer * (*)(struct __eCNameSpace__eC__types__Instance *, uint64 value))__eCClass___eCNameSpace__eC__types__CustomAVLTree->_vTbl[__eCVMethodID___eCNameSpace__eC__containers__Container_Add]);
__internal_VirtualMethod ? __internal_VirtualMethod(this, (uint64)(uintptr_t)newNode) : (struct __eCNameSpace__eC__containers__IteratorPointer *)1;
}));
return newNode;
}
else
{
((newNode ? __extension__ ({
void * __eCPtrToDelete = (newNode);

__eCClass___eCNameSpace__eC__types__MapNode->Destructor ? __eCClass___eCNameSpace__eC__types__MapNode->Destructor((void *)__eCPtrToDelete) : 0, __eCClass___eCNameSpace__eC__types__AVLNode->Destructor ? __eCClass___eCNameSpace__eC__types__AVLNode->Destructor((void *)__eCPtrToDelete) : 0, __eCClass___eCNameSpace__eC__containers__IteratorPointer->Destructor ? __eCClass___eCNameSpace__eC__containers__IteratorPointer->Destructor((void *)__eCPtrToDelete) : 0, __eCNameSpace__eC__types__eSystem_Delete(__eCPtrToDelete);
}) : 0), newNode = 0);
return (((void *)0));
}
}
}

void __eCMethod___eCNameSpace__eC__types__Map_Copy(struct __eCNameSpace__eC__types__Instance * this, struct __eCNameSpace__eC__types__Instance * source)
{
struct __eCNameSpace__eC__containers__IteratorPointer * i;

(__extension__ ({
void (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *);

__internal_VirtualMethod = ((void (*)(struct __eCNameSpace__eC__types__Instance *))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = this;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__types__Map->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__containers__Container_RemoveAll]);
__internal_VirtualMethod ? __internal_VirtualMethod(this) : (void)1;
}));
if(source)
{
unsigned int isBuiltInContainer = ((struct __eCNameSpace__eC__types__Instance *)(char *)source)->_class == __eCClass___eCNameSpace__eC__containers__BuiltInContainer;
unsigned int srcIsMap = __eCNameSpace__eC__types__eClass_IsDerived(((struct __eCNameSpace__eC__types__Instance *)(char *)source)->_class, __eCClass___eCNameSpace__eC__types__Map);
struct __eCNameSpace__eC__types__Class * cV = ((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[6].__anon1.__anon1.dataTypeClass;
void (* onCopy)(void *, void *, void *) = ((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[6].__anon1.__anon1.dataTypeClass->_vTbl[__eCVMethodID_class_OnCopy];
unsigned int addRef = (cV->type == 1000 && !cV->byValueSystemClass) || cV->type == 2 || cV->type == 4 || cV->type == 3;

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
struct __eCNameSpace__eC__types__MapNode * srcNode = srcIsMap ? (struct __eCNameSpace__eC__types__MapNode *)i : (struct __eCNameSpace__eC__types__MapNode *)((uintptr_t)((uint64)((__extension__ ({
uint64 (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, struct __eCNameSpace__eC__containers__IteratorPointer * pointer);

__internal_VirtualMethod = ((uint64 (*)(struct __eCNameSpace__eC__types__Instance *, struct __eCNameSpace__eC__containers__IteratorPointer * pointer))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = source;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__containers__Container->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__containers__Container_GetData]);
__internal_VirtualMethod ? __internal_VirtualMethod(source, i) : (uint64)1;
})))));
struct __eCNameSpace__eC__types__MapNode * destNode;

destNode = (struct __eCNameSpace__eC__types__MapNode *)(__extension__ ({
struct __eCNameSpace__eC__containers__IteratorPointer * (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const uint64 pos, unsigned int create, unsigned int *  justAdded);

__internal_VirtualMethod = ((struct __eCNameSpace__eC__containers__IteratorPointer * (*)(struct __eCNameSpace__eC__types__Instance *, const uint64 pos, unsigned int create, unsigned int *  justAdded))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = this;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__types__Map->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__containers__Container_GetAtPosition]);
__internal_VirtualMethod ? __internal_VirtualMethod(this, __eCProp___eCNameSpace__eC__types__MapNode_Get_key(srcNode), 1, (((void *)0))) : (struct __eCNameSpace__eC__containers__IteratorPointer *)1;
}));
if(cV->type == 1)
{
uint64 v = (__extension__ ({
uint64 (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, struct __eCNameSpace__eC__containers__IteratorPointer * pointer);

__internal_VirtualMethod = ((uint64 (*)(struct __eCNameSpace__eC__types__Instance *, struct __eCNameSpace__eC__containers__IteratorPointer * pointer))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = this;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__types__Map->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__containers__Container_GetData]);
__internal_VirtualMethod ? __internal_VirtualMethod(this, (void *)(srcNode)) : (uint64)1;
}));

if(isBuiltInContainer)
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, struct __eCNameSpace__eC__containers__IteratorPointer * pointer, uint64 data);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, struct __eCNameSpace__eC__containers__IteratorPointer * pointer, uint64 data))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = this;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__types__Map->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__containers__Container_SetData]);
__internal_VirtualMethod ? __internal_VirtualMethod(this, (void *)(destNode), v) : (unsigned int)1;
}));
else
{
struct __eCNameSpace__eC__types__MapNode * adjDestNode = destNode;

if(((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[5].__anon1.__anon1.dataTypeClass->type == 1)
adjDestNode = (struct __eCNameSpace__eC__types__MapNode *)(((unsigned char *)destNode) + ((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[5].__anon1.__anon1.dataTypeClass->structSize - sizeof destNode->key);
onCopy(cV, (void *)&adjDestNode->value, (void *)(uintptr_t)v);
}
}
else
{
if(isBuiltInContainer)
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, struct __eCNameSpace__eC__containers__IteratorPointer * pointer, uint64 data);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, struct __eCNameSpace__eC__containers__IteratorPointer * pointer, uint64 data))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = this;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__types__Map->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__containers__Container_SetData]);
__internal_VirtualMethod ? __internal_VirtualMethod(this, (void *)(destNode), __eCProp___eCNameSpace__eC__types__MapNode_Get_value(srcNode)) : (unsigned int)1;
}));
else
{
uint64 v = (__extension__ ({
uint64 (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, struct __eCNameSpace__eC__containers__IteratorPointer * pointer);

__internal_VirtualMethod = ((uint64 (*)(struct __eCNameSpace__eC__types__Instance *, struct __eCNameSpace__eC__containers__IteratorPointer * pointer))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = this;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__types__Map->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__containers__Container_GetData]);
__internal_VirtualMethod ? __internal_VirtualMethod(this, (void *)(srcNode)) : (uint64)1;
})), value;

onCopy(cV, ((char *)&value + __ENDIAN_PAD(((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[6].__anon1.__anon1.dataTypeClass->typeSize)), (void *)(uintptr_t)(addRef ? (uint64)(uintptr_t)((char *)&v + __ENDIAN_PAD(((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[6].__anon1.__anon1.dataTypeClass->typeSize)) : (uint64)v));
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, struct __eCNameSpace__eC__containers__IteratorPointer * pointer, uint64 data);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, struct __eCNameSpace__eC__containers__IteratorPointer * pointer, uint64 data))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = this;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__types__Map->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__containers__Container_SetData]);
__internal_VirtualMethod ? __internal_VirtualMethod(this, (void *)(destNode), value) : (unsigned int)1;
}));
}
}
}
if(isBuiltInContainer)
(__extension__ ({
void (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *);

__internal_VirtualMethod = ((void (*)(struct __eCNameSpace__eC__types__Instance *))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = source;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__containers__Container->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__containers__Container_Free]);
__internal_VirtualMethod ? __internal_VirtualMethod(source) : (void)1;
}));
}
}

void __eCMethod___eCNameSpace__eC__types__Map_OnSerialize(struct __eCNameSpace__eC__types__Class * class, struct __eCNameSpace__eC__types__Instance * this, struct __eCNameSpace__eC__types__Instance * channel)
{
unsigned int count = (__extension__ ({
int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *);

__internal_VirtualMethod = ((int (*)(struct __eCNameSpace__eC__types__Instance *))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = this;

__internal_ClassInst ? __internal_ClassInst->_vTbl : class->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__containers__Container_GetCount]);
__internal_VirtualMethod ? __internal_VirtualMethod(this) : (int)1;
}));
struct __eCNameSpace__eC__containers__IteratorPointer * i;
struct __eCNameSpace__eC__types__Class * Kclass = class->templateArgs[5].__anon1.__anon1.dataTypeClass;
struct __eCNameSpace__eC__types__Class * Dclass = class->templateArgs[6].__anon1.__anon1.dataTypeClass;
unsigned int kIsNormalClass = (Kclass->type == 0) && Kclass->structSize;
unsigned int dIsNormalClass = (Dclass->type == 0) && Dclass->structSize;

__eCMethod___eCNameSpace__eC__types__IOChannel_Put(channel, __eCClass_uint, (void *)&count);
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
struct __eCNameSpace__eC__types__MapNode * srcNode = (struct __eCNameSpace__eC__types__MapNode *)i;
uint64 key = __eCMethod___eCNameSpace__eC__types__Map_GetKey(this, (struct __eCNameSpace__eC__types__MapNode *)srcNode);
uint64 data = (__extension__ ({
uint64 (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, struct __eCNameSpace__eC__containers__IteratorPointer * pointer);

__internal_VirtualMethod = ((uint64 (*)(struct __eCNameSpace__eC__types__Instance *, struct __eCNameSpace__eC__containers__IteratorPointer * pointer))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = this;

__internal_ClassInst ? __internal_ClassInst->_vTbl : class->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__containers__Container_GetData]);
__internal_VirtualMethod ? __internal_VirtualMethod(this, (void *)(srcNode)) : (uint64)1;
}));
struct __eCNameSpace__eC__types__Class * kEclass = kIsNormalClass ? ((struct __eCNameSpace__eC__types__Instance *)(char *)((struct __eCNameSpace__eC__types__Instance *)((uintptr_t)((uint64)(key)))))->_class : Kclass;
struct __eCNameSpace__eC__types__Class * dEclass = dIsNormalClass ? ((struct __eCNameSpace__eC__types__Instance *)(char *)((struct __eCNameSpace__eC__types__Instance *)((uintptr_t)((uint64)(data)))))->_class : Dclass;

((void (*)(void *, void *, void *))(void *)kEclass->_vTbl[__eCVMethodID_class_OnSerialize])(kEclass, ((Kclass->type == 1000 && !Kclass->byValueSystemClass) || Kclass->type == 2 || Kclass->type == 4 || Kclass->type == 3) ? ((char *)&key + __ENDIAN_PAD(class->templateArgs[5].__anon1.__anon1.dataTypeClass->typeSize)) : (void *)(uintptr_t)key, channel);
((void (*)(void *, void *, void *))(void *)dEclass->_vTbl[__eCVMethodID_class_OnSerialize])(dEclass, ((Dclass->type == 1000 && !Dclass->byValueSystemClass) || Dclass->type == 2 || Dclass->type == 4 || Dclass->type == 3) ? ((char *)&data + __ENDIAN_PAD(class->templateArgs[2].__anon1.__anon1.dataTypeClass->typeSize)) : (void *)(uintptr_t)data, channel);
}
}

void __eCMethod___eCNameSpace__eC__types__Map_OnUnserialize(struct __eCNameSpace__eC__types__Class * class, struct __eCNameSpace__eC__types__Instance ** this, struct __eCNameSpace__eC__types__Instance * channel)
{
unsigned int c, count;
struct __eCNameSpace__eC__types__Instance * container = __eCNameSpace__eC__types__eInstance_New(__eCProp___eCNameSpace__eC__types__Class_Set_char__PTR_(class->fullName));
struct __eCNameSpace__eC__types__Class * Kclass = class->templateArgs[5].__anon1.__anon1.dataTypeClass;
struct __eCNameSpace__eC__types__Class * Dclass = class->templateArgs[6].__anon1.__anon1.dataTypeClass;

container->_refCount++;
__eCMethod___eCNameSpace__eC__types__IOChannel_Get(channel, __eCClass_uint, (void *)&count);
for(c = 0; c < count; c++)
{
struct __eCNameSpace__eC__types__MapNode * destNode;
uint64 key = (Kclass->type == 1) ? (uint64)(uintptr_t)__eCNameSpace__eC__types__eSystem_New(sizeof(unsigned char) * (Kclass->structSize)) : 0;
uint64 data = (Dclass->type == 1) ? (uint64)(uintptr_t)__eCNameSpace__eC__types__eSystem_New(sizeof(unsigned char) * (Dclass->structSize)) : 0;

((void (*)(void *, void *, void *))(void *)Kclass->_vTbl[__eCVMethodID_class_OnUnserialize])(Kclass, &key, channel);
((void (*)(void *, void *, void *))(void *)Dclass->_vTbl[__eCVMethodID_class_OnUnserialize])(Dclass, (Dclass->type == 1) ? (void *)(uintptr_t)data : &data, channel);
destNode = (struct __eCNameSpace__eC__types__MapNode *)(__extension__ ({
struct __eCNameSpace__eC__containers__IteratorPointer * (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const uint64 pos, unsigned int create, unsigned int *  justAdded);

__internal_VirtualMethod = ((struct __eCNameSpace__eC__containers__IteratorPointer * (*)(struct __eCNameSpace__eC__types__Instance *, const uint64 pos, unsigned int create, unsigned int *  justAdded))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = container;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__types__Map->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__containers__Container_GetAtPosition]);
__internal_VirtualMethod ? __internal_VirtualMethod(container, (uint64)key, 1, (((void *)0))) : (struct __eCNameSpace__eC__containers__IteratorPointer *)1;
}));
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, struct __eCNameSpace__eC__containers__IteratorPointer * pointer, uint64 data);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, struct __eCNameSpace__eC__containers__IteratorPointer * pointer, uint64 data))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = container;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__types__Map->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__containers__Container_SetData]);
__internal_VirtualMethod ? __internal_VirtualMethod(container, (void *)(destNode), (uint64)data) : (unsigned int)1;
}));
if(Kclass->type == 1)
(__eCNameSpace__eC__types__eSystem_Delete((void *)(uintptr_t)key), key = 0);
if(Dclass->type == 1)
(__eCNameSpace__eC__types__eSystem_Delete((void *)(uintptr_t)data), data = 0);
}
(*this) = container;
}

void __eCUnregisterModule_Map(struct __eCNameSpace__eC__types__Instance * module)
{

__eCPropM___eCNameSpace__eC__types__MapNode_key = (void *)0;
__eCPropM___eCNameSpace__eC__types__MapNode_value = (void *)0;
__eCPropM___eCNameSpace__eC__types__MapNode_prev = (void *)0;
__eCPropM___eCNameSpace__eC__types__MapNode_next = (void *)0;
__eCPropM___eCNameSpace__eC__types__MapNode_minimum = (void *)0;
__eCPropM___eCNameSpace__eC__types__MapNode_maximum = (void *)0;
__eCPropM___eCNameSpace__eC__types__MapIterator_map = (void *)0;
__eCPropM___eCNameSpace__eC__types__MapIterator_key = (void *)0;
__eCPropM___eCNameSpace__eC__types__MapIterator_value = (void *)0;
__eCPropM___eCNameSpace__eC__types__Map_mapSrc = (void *)0;
}

void __eCMethod___eCNameSpace__eC__types__Map_RemoveAll(struct __eCNameSpace__eC__types__Instance * this)
{
struct __eCNameSpace__eC__types__MapNode * node = (void *)(((struct __eCNameSpace__eC__types__CustomAVLTree *)(((char *)this + 0 + sizeof(struct __eCNameSpace__eC__types__Instance))))->root);

while(node)
{
if(node->left)
{
struct __eCNameSpace__eC__types__MapNode * left = node->left;

node->left = (((void *)0));
node = left;
}
else if(node->right)
{
struct __eCNameSpace__eC__types__MapNode * right = node->right;

node->right = (((void *)0));
node = right;
}
else
{
struct __eCNameSpace__eC__types__MapNode * parent = node->parent;

__eCMethod___eCNameSpace__eC__types__Map_FreeKey(this, node);
((node ? __extension__ ({
void * __eCPtrToDelete = (node);

__eCClass___eCNameSpace__eC__types__MapNode->Destructor ? __eCClass___eCNameSpace__eC__types__MapNode->Destructor((void *)__eCPtrToDelete) : 0, __eCClass___eCNameSpace__eC__types__AVLNode->Destructor ? __eCClass___eCNameSpace__eC__types__AVLNode->Destructor((void *)__eCPtrToDelete) : 0, __eCClass___eCNameSpace__eC__containers__IteratorPointer->Destructor ? __eCClass___eCNameSpace__eC__containers__IteratorPointer->Destructor((void *)__eCPtrToDelete) : 0, __eCNameSpace__eC__types__eSystem_Delete(__eCPtrToDelete);
}) : 0), node = 0);
node = parent;
}
}
((struct __eCNameSpace__eC__types__CustomAVLTree *)(((char *)this + 0 + sizeof(struct __eCNameSpace__eC__types__Instance))))->root = (((void *)0));
((struct __eCNameSpace__eC__types__CustomAVLTree *)(((char *)this + 0 + sizeof(struct __eCNameSpace__eC__types__Instance))))->count = 0;
}

void __eCMethod___eCNameSpace__eC__types__Map_Remove(struct __eCNameSpace__eC__types__Instance * this, struct __eCNameSpace__eC__types__MapNode * node)
{
(__extension__ ({
void (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, struct __eCNameSpace__eC__containers__IteratorPointer * it);

__internal_VirtualMethod = ((void (*)(struct __eCNameSpace__eC__types__Instance *, struct __eCNameSpace__eC__containers__IteratorPointer * it))__eCClass___eCNameSpace__eC__types__CustomAVLTree->_vTbl[__eCVMethodID___eCNameSpace__eC__containers__Container_Remove]);
__internal_VirtualMethod ? __internal_VirtualMethod(this, (void *)(node)) : (void)1;
}));
__eCMethod___eCNameSpace__eC__types__Map_FreeKey(this, node);
((node ? __extension__ ({
void * __eCPtrToDelete = (node);

__eCClass___eCNameSpace__eC__types__MapNode->Destructor ? __eCClass___eCNameSpace__eC__types__MapNode->Destructor((void *)__eCPtrToDelete) : 0, __eCClass___eCNameSpace__eC__types__AVLNode->Destructor ? __eCClass___eCNameSpace__eC__types__AVLNode->Destructor((void *)__eCPtrToDelete) : 0, __eCClass___eCNameSpace__eC__containers__IteratorPointer->Destructor ? __eCClass___eCNameSpace__eC__containers__IteratorPointer->Destructor((void *)__eCPtrToDelete) : 0, __eCNameSpace__eC__types__eSystem_Delete(__eCPtrToDelete);
}) : 0), node = 0);
}

void __eCMethod___eCNameSpace__eC__types__Map_Free(struct __eCNameSpace__eC__types__Instance * this)
{
struct __eCNameSpace__eC__types__MapNode * node = (void *)(((struct __eCNameSpace__eC__types__CustomAVLTree *)(((char *)this + 0 + sizeof(struct __eCNameSpace__eC__types__Instance))))->root);

__eCNameSpace__eC__types__eSystem_LockMem();
while(node)
{
if(node->left)
{
struct __eCNameSpace__eC__types__MapNode * left = node->left;

node->left = (((void *)0));
node = left;
}
else if(node->right)
{
struct __eCNameSpace__eC__types__MapNode * right = node->right;

node->right = (((void *)0));
node = right;
}
else
{
struct __eCNameSpace__eC__types__MapNode * parent = node->parent;
uint64 value = (__extension__ ({
uint64 (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, struct __eCNameSpace__eC__containers__IteratorPointer * pointer);

__internal_VirtualMethod = ((uint64 (*)(struct __eCNameSpace__eC__types__Instance *, struct __eCNameSpace__eC__containers__IteratorPointer * pointer))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = this;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__types__Map->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__containers__Container_GetData]);
__internal_VirtualMethod ? __internal_VirtualMethod(this, (void *)(node)) : (uint64)1;
}));

(((void (* )(void *  _class, void *  data))((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[6].__anon1.__anon1.dataTypeClass->_vTbl[__eCVMethodID_class_OnFree])(((struct __eCNameSpace__eC__types__Instance * )(char * )this)->_class->templateArgs[6].__anon1.__anon1.dataTypeClass, ((void * )((uintptr_t)(value)))), value = 0);
__eCMethod___eCNameSpace__eC__types__Map_FreeKey(this, node);
((node ? __extension__ ({
void * __eCPtrToDelete = (node);

__eCClass___eCNameSpace__eC__types__MapNode->Destructor ? __eCClass___eCNameSpace__eC__types__MapNode->Destructor((void *)__eCPtrToDelete) : 0, __eCClass___eCNameSpace__eC__types__AVLNode->Destructor ? __eCClass___eCNameSpace__eC__types__AVLNode->Destructor((void *)__eCPtrToDelete) : 0, __eCClass___eCNameSpace__eC__containers__IteratorPointer->Destructor ? __eCClass___eCNameSpace__eC__containers__IteratorPointer->Destructor((void *)__eCPtrToDelete) : 0, __eCNameSpace__eC__types__eSystem_Delete(__eCPtrToDelete);
}) : 0), node = 0);
node = parent;
}
}
__eCNameSpace__eC__types__eSystem_UnlockMem();
((struct __eCNameSpace__eC__types__CustomAVLTree *)(((char *)this + 0 + sizeof(struct __eCNameSpace__eC__types__Instance))))->root = (((void *)0));
((struct __eCNameSpace__eC__types__CustomAVLTree *)(((char *)this + 0 + sizeof(struct __eCNameSpace__eC__types__Instance))))->count = 0;
}

void __eCMethod___eCNameSpace__eC__types__Map_Delete(struct __eCNameSpace__eC__types__Instance * this, struct __eCNameSpace__eC__types__MapNode * node)
{
uint64 value = (__extension__ ({
uint64 (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, struct __eCNameSpace__eC__containers__IteratorPointer * pointer);

__internal_VirtualMethod = ((uint64 (*)(struct __eCNameSpace__eC__types__Instance *, struct __eCNameSpace__eC__containers__IteratorPointer * pointer))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = this;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__types__Map->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__containers__Container_GetData]);
__internal_VirtualMethod ? __internal_VirtualMethod(this, (void *)(node)) : (uint64)1;
}));

(((void (* )(void *  _class, void *  data))((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[6].__anon1.__anon1.dataTypeClass->_vTbl[__eCVMethodID_class_OnFree])(((struct __eCNameSpace__eC__types__Instance * )(char * )this)->_class->templateArgs[6].__anon1.__anon1.dataTypeClass, ((void * )((uintptr_t)(value)))), value = 0);
__eCMethod___eCNameSpace__eC__types__Map_FreeKey(this, node);
(__extension__ ({
void (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, struct __eCNameSpace__eC__containers__IteratorPointer * it);

__internal_VirtualMethod = ((void (*)(struct __eCNameSpace__eC__types__Instance *, struct __eCNameSpace__eC__containers__IteratorPointer * it))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = this;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__types__Map->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__containers__Container_Remove]);
__internal_VirtualMethod ? __internal_VirtualMethod(this, (void *)(node)) : (void)1;
}));
}

void __eCRegisterModule_Map(struct __eCNameSpace__eC__types__Instance * module)
{
struct __eCNameSpace__eC__types__Class __attribute__((unused)) * class;

class = __eCNameSpace__eC__types__eSystem_RegisterClass(5, "eC::types::MapNode", "eC::types::AVLNode<KT>", sizeof(struct __eCNameSpace__eC__types__MapNode), 0, (void *)0, (void *)0, module, 4, 2);
if(((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application == ((struct __eCNameSpace__eC__types__Module *)(((char *)__thisModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->application && class)
__eCClass___eCNameSpace__eC__types__MapNode = class;
__eCPropM___eCNameSpace__eC__types__MapNode_key = __eCNameSpace__eC__types__eClass_AddProperty(class, "key", "const KT", __eCProp___eCNameSpace__eC__types__MapNode_Set_key, __eCProp___eCNameSpace__eC__types__MapNode_Get_key, 1);
if(((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application == ((struct __eCNameSpace__eC__types__Module *)(((char *)__thisModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->application)
__eCProp___eCNameSpace__eC__types__MapNode_key = __eCPropM___eCNameSpace__eC__types__MapNode_key, __eCPropM___eCNameSpace__eC__types__MapNode_key = (void *)0;
__eCPropM___eCNameSpace__eC__types__MapNode_value = __eCNameSpace__eC__types__eClass_AddProperty(class, "value", "V", __eCProp___eCNameSpace__eC__types__MapNode_Set_value, __eCProp___eCNameSpace__eC__types__MapNode_Get_value, 1);
if(((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application == ((struct __eCNameSpace__eC__types__Module *)(((char *)__thisModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->application)
__eCProp___eCNameSpace__eC__types__MapNode_value = __eCPropM___eCNameSpace__eC__types__MapNode_value, __eCPropM___eCNameSpace__eC__types__MapNode_value = (void *)0;
__eCNameSpace__eC__types__eClass_AddDataMember(class, "value", "V", 8, 8, 1);
__eCPropM___eCNameSpace__eC__types__MapNode_prev = __eCNameSpace__eC__types__eClass_AddProperty(class, "prev", "thisclass", 0, __eCProp___eCNameSpace__eC__types__MapNode_Get_prev, 1);
if(((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application == ((struct __eCNameSpace__eC__types__Module *)(((char *)__thisModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->application)
__eCProp___eCNameSpace__eC__types__MapNode_prev = __eCPropM___eCNameSpace__eC__types__MapNode_prev, __eCPropM___eCNameSpace__eC__types__MapNode_prev = (void *)0;
__eCPropM___eCNameSpace__eC__types__MapNode_next = __eCNameSpace__eC__types__eClass_AddProperty(class, "next", "thisclass", 0, __eCProp___eCNameSpace__eC__types__MapNode_Get_next, 1);
if(((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application == ((struct __eCNameSpace__eC__types__Module *)(((char *)__thisModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->application)
__eCProp___eCNameSpace__eC__types__MapNode_next = __eCPropM___eCNameSpace__eC__types__MapNode_next, __eCPropM___eCNameSpace__eC__types__MapNode_next = (void *)0;
__eCPropM___eCNameSpace__eC__types__MapNode_minimum = __eCNameSpace__eC__types__eClass_AddProperty(class, "minimum", "thisclass", 0, __eCProp___eCNameSpace__eC__types__MapNode_Get_minimum, 1);
if(((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application == ((struct __eCNameSpace__eC__types__Module *)(((char *)__thisModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->application)
__eCProp___eCNameSpace__eC__types__MapNode_minimum = __eCPropM___eCNameSpace__eC__types__MapNode_minimum, __eCPropM___eCNameSpace__eC__types__MapNode_minimum = (void *)0;
__eCPropM___eCNameSpace__eC__types__MapNode_maximum = __eCNameSpace__eC__types__eClass_AddProperty(class, "maximum", "thisclass", 0, __eCProp___eCNameSpace__eC__types__MapNode_Get_maximum, 1);
if(((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application == ((struct __eCNameSpace__eC__types__Module *)(((char *)__thisModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->application)
__eCProp___eCNameSpace__eC__types__MapNode_maximum = __eCPropM___eCNameSpace__eC__types__MapNode_maximum, __eCPropM___eCNameSpace__eC__types__MapNode_maximum = (void *)0;
__eCNameSpace__eC__types__eClass_AddTemplateParameter(class, "KT", 0, 0, (((void *)0)));
__eCNameSpace__eC__types__eClass_AddTemplateParameter(class, "V", 0, 0, (((void *)0)));
__eCNameSpace__eC__types__eClass_DoneAddingTemplateParameters(class);
if(class)
class->fixed = (unsigned int)1;
class = __eCNameSpace__eC__types__eSystem_RegisterClass(1, "eC::types::MapIterator", "eC::types::Iterator<V, IT = KT>", sizeof(struct __eCNameSpace__eC__types__MapIterator) - sizeof(struct __eCNameSpace__eC__types__Iterator), 0, (void *)0, (void *)0, module, 4, 1);
if(((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application == ((struct __eCNameSpace__eC__types__Module *)(((char *)__thisModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->application && class)
__eCClass___eCNameSpace__eC__types__MapIterator = class;
__eCPropM___eCNameSpace__eC__types__MapIterator_map = __eCNameSpace__eC__types__eClass_AddProperty(class, "map", "eC::types::Map<KT, V>", __eCProp___eCNameSpace__eC__types__MapIterator_Set_map, __eCProp___eCNameSpace__eC__types__MapIterator_Get_map, 1);
if(((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application == ((struct __eCNameSpace__eC__types__Module *)(((char *)__thisModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->application)
__eCProp___eCNameSpace__eC__types__MapIterator_map = __eCPropM___eCNameSpace__eC__types__MapIterator_map, __eCPropM___eCNameSpace__eC__types__MapIterator_map = (void *)0;
__eCPropM___eCNameSpace__eC__types__MapIterator_key = __eCNameSpace__eC__types__eClass_AddProperty(class, "key", "const KT", 0, __eCProp___eCNameSpace__eC__types__MapIterator_Get_key, 1);
if(((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application == ((struct __eCNameSpace__eC__types__Module *)(((char *)__thisModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->application)
__eCProp___eCNameSpace__eC__types__MapIterator_key = __eCPropM___eCNameSpace__eC__types__MapIterator_key, __eCPropM___eCNameSpace__eC__types__MapIterator_key = (void *)0;
__eCPropM___eCNameSpace__eC__types__MapIterator_value = __eCNameSpace__eC__types__eClass_AddProperty(class, "value", "V", __eCProp___eCNameSpace__eC__types__MapIterator_Set_value, __eCProp___eCNameSpace__eC__types__MapIterator_Get_value, 1);
if(((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application == ((struct __eCNameSpace__eC__types__Module *)(((char *)__thisModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->application)
__eCProp___eCNameSpace__eC__types__MapIterator_value = __eCPropM___eCNameSpace__eC__types__MapIterator_value, __eCPropM___eCNameSpace__eC__types__MapIterator_value = (void *)0;
__eCNameSpace__eC__types__eClass_AddTemplateParameter(class, "KT", 0, 0, (((void *)0)));
__eCNameSpace__eC__types__eClass_AddTemplateParameter(class, "V", 0, 0, (((void *)0)));
__eCNameSpace__eC__types__eClass_DoneAddingTemplateParameters(class);
class = __eCNameSpace__eC__types__eSystem_RegisterClass(0, "eC::types::Map", "eC::types::CustomAVLTree<eC::types::MapNode<MT, V>, I = MT, D = V, KT = MT>", 0, 0, (void *)0, (void *)0, module, 4, 1);
if(((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application == ((struct __eCNameSpace__eC__types__Module *)(((char *)__thisModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->application && class)
__eCClass___eCNameSpace__eC__types__Map = class;
__eCNameSpace__eC__types__eClass_AddMethod(class, "OnSerialize", 0, __eCMethod___eCNameSpace__eC__types__Map_OnSerialize, 1);
__eCNameSpace__eC__types__eClass_AddMethod(class, "OnUnserialize", 0, __eCMethod___eCNameSpace__eC__types__Map_OnUnserialize, 1);
__eCNameSpace__eC__types__eClass_AddMethod(class, "GetData", 0, __eCMethod___eCNameSpace__eC__types__Map_GetData, 1);
__eCNameSpace__eC__types__eClass_AddMethod(class, "SetData", 0, __eCMethod___eCNameSpace__eC__types__Map_SetData, 1);
__eCNameSpace__eC__types__eClass_AddMethod(class, "GetAtPosition", 0, __eCMethod___eCNameSpace__eC__types__Map_GetAtPosition, 1);
__eCNameSpace__eC__types__eClass_AddMethod(class, "Add", 0, __eCMethod___eCNameSpace__eC__types__Map_Add, 1);
__eCNameSpace__eC__types__eClass_AddMethod(class, "Remove", 0, __eCMethod___eCNameSpace__eC__types__Map_Remove, 1);
__eCNameSpace__eC__types__eClass_AddMethod(class, "RemoveAll", 0, __eCMethod___eCNameSpace__eC__types__Map_RemoveAll, 1);
__eCNameSpace__eC__types__eClass_AddMethod(class, "Copy", 0, __eCMethod___eCNameSpace__eC__types__Map_Copy, 1);
__eCNameSpace__eC__types__eClass_AddMethod(class, "Find", 0, __eCMethod___eCNameSpace__eC__types__Map_Find, 1);
__eCNameSpace__eC__types__eClass_AddMethod(class, "Free", 0, __eCMethod___eCNameSpace__eC__types__Map_Free, 1);
__eCNameSpace__eC__types__eClass_AddMethod(class, "Delete", 0, __eCMethod___eCNameSpace__eC__types__Map_Delete, 1);
__eCPropM___eCNameSpace__eC__types__Map_mapSrc = __eCNameSpace__eC__types__eClass_AddProperty(class, "mapSrc", "eC::types::Map", __eCProp___eCNameSpace__eC__types__Map_Set_mapSrc, 0, 1);
if(((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application == ((struct __eCNameSpace__eC__types__Module *)(((char *)__thisModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->application)
__eCProp___eCNameSpace__eC__types__Map_mapSrc = __eCPropM___eCNameSpace__eC__types__Map_mapSrc, __eCPropM___eCNameSpace__eC__types__Map_mapSrc = (void *)0;
__eCNameSpace__eC__types__eClass_AddTemplateParameter(class, "MT", 0, 0, (((void *)0)));
__eCNameSpace__eC__types__eClass_AddTemplateParameter(class, "V", 0, 0, (((void *)0)));
__eCNameSpace__eC__types__eClass_DoneAddingTemplateParameters(class);
if(class)
class->fixed = (unsigned int)1;
}

