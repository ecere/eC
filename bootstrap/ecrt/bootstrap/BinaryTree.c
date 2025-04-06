/* Code generated from eC source file: BinaryTree.ec */
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
extern struct __eCNameSpace__eC__types__Property * __eCProp___eCNameSpace__eC__containers__BTNode_count;

extern struct __eCNameSpace__eC__types__Property * __eCProp___eCNameSpace__eC__containers__BTNode_minimum;

extern struct __eCNameSpace__eC__types__Property * __eCProp___eCNameSpace__eC__containers__BTNode_maximum;

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

extern int strcmp(const char * , const char * );

struct __eCNameSpace__eC__files__StringBTNode;

void __eCMethod___eCNameSpace__eC__containers__BinaryTree_FreeString(char * string)
{
(__eCNameSpace__eC__types__eSystem_Delete(string), string = 0);
}

struct __eCNameSpace__eC__types__Property;

static __attribute__((unused)) struct __eCNameSpace__eC__types__Property * __eCProp___eCNameSpace__eC__containers__BinaryTree_first, * __eCPropM___eCNameSpace__eC__containers__BinaryTree_first;

static __attribute__((unused)) struct __eCNameSpace__eC__types__Property * __eCProp___eCNameSpace__eC__containers__BinaryTree_last, * __eCPropM___eCNameSpace__eC__containers__BinaryTree_last;

struct __eCNameSpace__eC__containers__BTNode;

struct __eCNameSpace__eC__containers__BTNode
{
uintptr_t key;
struct __eCNameSpace__eC__containers__BTNode * parent;
struct __eCNameSpace__eC__containers__BTNode * left;
struct __eCNameSpace__eC__containers__BTNode * right;
int depth;
} eC_gcc_struct;

int __eCProp___eCNameSpace__eC__containers__BTNode_Get_count(struct __eCNameSpace__eC__containers__BTNode * this);

void __eCMethod___eCNameSpace__eC__containers__BTNode_Free(struct __eCNameSpace__eC__containers__BTNode * this, void (*  FreeKey)(void *  key));

struct __eCNameSpace__eC__containers__BTNode * __eCMethod___eCNameSpace__eC__containers__BTNode_Rebalance(struct __eCNameSpace__eC__containers__BTNode * this);

struct __eCNameSpace__eC__containers__BTNode * __eCMethod___eCNameSpace__eC__containers__BTNode_FindString(struct __eCNameSpace__eC__containers__BTNode * this, const char *  key);

struct __eCNameSpace__eC__containers__BTNode * __eCMethod___eCNameSpace__eC__containers__BTNode_FindPrefix(struct __eCNameSpace__eC__containers__BTNode * this, const char *  key);

struct __eCNameSpace__eC__containers__BTNode * __eCMethod___eCNameSpace__eC__containers__BTNode_FindAll(struct __eCNameSpace__eC__containers__BTNode * this, uintptr_t key);

struct __eCNameSpace__eC__containers__BTNode * __eCMethod___eCNameSpace__eC__containers__BTNode_RemoveSwapRight(struct __eCNameSpace__eC__containers__BTNode * this);

char *  __eCMethod___eCNameSpace__eC__containers__BTNode_Print(struct __eCNameSpace__eC__containers__BTNode * this, char *  output, int tps);

struct __eCNameSpace__eC__containers__BTNode * __eCProp___eCNameSpace__eC__containers__BTNode_Get_minimum(struct __eCNameSpace__eC__containers__BTNode * this);

struct __eCNameSpace__eC__containers__BTNode * __eCProp___eCNameSpace__eC__containers__BTNode_Get_maximum(struct __eCNameSpace__eC__containers__BTNode * this);

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

void __eCMethod___eCNameSpace__eC__types__IOChannel_Serialize(struct __eCNameSpace__eC__types__Instance * this, struct __eCNameSpace__eC__types__Class * class, const void * data);

void __eCMethod___eCNameSpace__eC__types__IOChannel_Unserialize(struct __eCNameSpace__eC__types__Instance * this, struct __eCNameSpace__eC__types__Class * class, void * *  data);

struct __eCNameSpace__eC__files__BinaryTree;

struct __eCNameSpace__eC__files__BinaryTree
{
struct __eCNameSpace__eC__containers__BTNode * root;
int count;
int (* CompareKey)(struct __eCNameSpace__eC__files__BinaryTree * tree, uintptr_t a, uintptr_t b);
void (* FreeKey)(void * key);
} eC_gcc_struct;

struct __eCNameSpace__eC__files__StringBinaryTree
{
struct __eCNameSpace__eC__containers__BTNode * root;
int count;
int (*  CompareKey)(struct __eCNameSpace__eC__files__BinaryTree * tree, uintptr_t a, uintptr_t b);
void (*  FreeKey)(void *  key);
} eC_gcc_struct;

__attribute__((unused)) static struct __eCNameSpace__eC__files__BinaryTree __eCNameSpace__eC__files__dummy;

int __eCMethod___eCNameSpace__eC__containers__BinaryTree_CompareInt(struct __eCNameSpace__eC__files__BinaryTree * this, uintptr_t a, uintptr_t b)
{
return (a > b) ? 1 : ((a < b) ? -1 : 0);
}

int __eCMethod___eCNameSpace__eC__containers__BinaryTree_CompareString(struct __eCNameSpace__eC__files__BinaryTree * this, const char * a, const char * b)
{
return (a && b) ? strcmp(a, b) : -1;
}

void __eCMethod___eCNameSpace__eC__containers__BinaryTree_Free(struct __eCNameSpace__eC__files__BinaryTree * this)
{
if(this->root)
__eCMethod___eCNameSpace__eC__containers__BTNode_Free(this->root, this->FreeKey);
this->root = (((void *)0));
this->count = 0;
}

struct __eCNameSpace__eC__containers__BTNode * __eCMethod___eCNameSpace__eC__containers__BinaryTree_FindString(struct __eCNameSpace__eC__files__BinaryTree * this, const char * key)
{
return this->root ? __eCMethod___eCNameSpace__eC__containers__BTNode_FindString(this->root, key) : (((void *)0));
}

struct __eCNameSpace__eC__containers__BTNode * __eCMethod___eCNameSpace__eC__containers__BinaryTree_FindPrefix(struct __eCNameSpace__eC__files__BinaryTree * this, const char * key)
{
return this->root ? __eCMethod___eCNameSpace__eC__containers__BTNode_FindPrefix(this->root, key) : (((void *)0));
}

struct __eCNameSpace__eC__containers__BTNode * __eCMethod___eCNameSpace__eC__containers__BinaryTree_FindAll(struct __eCNameSpace__eC__files__BinaryTree * this, uintptr_t key)
{
return this->root ? __eCMethod___eCNameSpace__eC__containers__BTNode_FindAll(this->root, key) : (((void *)0));
}

void __eCMethod___eCNameSpace__eC__containers__BinaryTree_Remove(struct __eCNameSpace__eC__files__BinaryTree * this, struct __eCNameSpace__eC__containers__BTNode * node)
{
struct __eCNameSpace__eC__containers__BTNode * parent = node->parent;

if(parent || this->root == node)
{
this->root = __eCMethod___eCNameSpace__eC__containers__BTNode_RemoveSwapRight(node);
this->count--;
node->parent = (((void *)0));
}
}

char * __eCMethod___eCNameSpace__eC__containers__BinaryTree_Print(struct __eCNameSpace__eC__files__BinaryTree * this, char * output, int tps)
{
output[0] = 0;
if(this->root)
__eCMethod___eCNameSpace__eC__containers__BTNode_Print(this->root, output, tps);
return output;
}

struct __eCNameSpace__eC__containers__BTNode * __eCProp___eCNameSpace__eC__containers__BinaryTree_Get_first(struct __eCNameSpace__eC__files__BinaryTree * this)
{
return this->root ? __eCProp___eCNameSpace__eC__containers__BTNode_Get_minimum(this->root) : (((void *)0));
}

struct __eCNameSpace__eC__containers__BTNode * __eCProp___eCNameSpace__eC__containers__BinaryTree_Get_last(struct __eCNameSpace__eC__files__BinaryTree * this)
{
return this->root ? __eCProp___eCNameSpace__eC__containers__BTNode_Get_maximum(this->root) : (((void *)0));
}

unsigned int __eCMethod___eCNameSpace__eC__containers__BTNode_Add(struct __eCNameSpace__eC__containers__BTNode * this, struct __eCNameSpace__eC__files__BinaryTree * tree, struct __eCNameSpace__eC__containers__BTNode * node);

struct __eCNameSpace__eC__containers__BTNode * __eCMethod___eCNameSpace__eC__containers__BTNode_Find(struct __eCNameSpace__eC__containers__BTNode * this, struct __eCNameSpace__eC__files__BinaryTree * tree, uintptr_t key);

unsigned int __eCMethod___eCNameSpace__eC__containers__BTNode_Check(struct __eCNameSpace__eC__containers__BTNode * this, struct __eCNameSpace__eC__files__BinaryTree * tree);

void __eCMethod___eCNameSpace__eC__containers__BinaryTree_Delete(struct __eCNameSpace__eC__files__BinaryTree * this, struct __eCNameSpace__eC__containers__BTNode * node)
{
void * voidNode = node;

__eCMethod___eCNameSpace__eC__containers__BinaryTree_Remove(this, node);
(__eCNameSpace__eC__types__eSystem_Delete(voidNode), voidNode = 0);
}

unsigned int __eCMethod___eCNameSpace__eC__containers__BinaryTree_Add(struct __eCNameSpace__eC__files__BinaryTree * this, struct __eCNameSpace__eC__containers__BTNode * node)
{
if(!this->CompareKey)
this->CompareKey = (void *)(__eCMethod___eCNameSpace__eC__containers__BinaryTree_CompareInt);
if(!this->root)
this->root = node;
else if(__eCMethod___eCNameSpace__eC__containers__BTNode_Add(this->root, this, node))
this->root = __eCMethod___eCNameSpace__eC__containers__BTNode_Rebalance(node);
else
return 0;
this->count++;
return 1;
}

struct __eCNameSpace__eC__containers__BTNode * __eCMethod___eCNameSpace__eC__containers__BinaryTree_Find(struct __eCNameSpace__eC__files__BinaryTree * this, uintptr_t key)
{
if(!this->CompareKey)
this->CompareKey = (void *)(__eCMethod___eCNameSpace__eC__containers__BinaryTree_CompareInt);
return this->root ? __eCMethod___eCNameSpace__eC__containers__BTNode_Find(this->root, this, key) : (((void *)0));
}

unsigned int __eCMethod___eCNameSpace__eC__containers__BinaryTree_Check(struct __eCNameSpace__eC__files__BinaryTree * this)
{
return this->root ? __eCMethod___eCNameSpace__eC__containers__BTNode_Check(this->root, this) : 1;
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

static struct __eCNameSpace__eC__types__Class * __eCClass___eCNameSpace__eC__files__BinaryTree;

static struct __eCNameSpace__eC__types__Class * __eCClass___eCNameSpace__eC__files__StringBinaryTree;

extern struct __eCNameSpace__eC__types__Class * __eCClass___eCNameSpace__eC__containers__BTNode;

extern struct __eCNameSpace__eC__types__Class * __eCClass___eCNameSpace__eC__files__StringBTNode;

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

void __eCMethod___eCNameSpace__eC__containers__BinaryTree_OnSerialize(struct __eCNameSpace__eC__types__Class * class, struct __eCNameSpace__eC__files__BinaryTree * this, struct __eCNameSpace__eC__types__Instance * channel)
{
__eCMethod___eCNameSpace__eC__types__IOChannel_Serialize(channel, __eCClass___eCNameSpace__eC__containers__BTNode, this->root);
}

void __eCMethod___eCNameSpace__eC__containers__BinaryTree_OnUnserialize(struct __eCNameSpace__eC__types__Class * class, struct __eCNameSpace__eC__files__BinaryTree * this, struct __eCNameSpace__eC__types__Instance * channel)
{
__eCMethod___eCNameSpace__eC__types__IOChannel_Unserialize(channel, __eCClass___eCNameSpace__eC__containers__BTNode, (void *)&(*this).root);
(*this).count = (*this).root ? __eCProp___eCNameSpace__eC__containers__BTNode_Get_count((*this).root) : 0;
}

void __eCMethod___eCNameSpace__eC__containers__StringBinaryTree_OnSerialize(struct __eCNameSpace__eC__types__Class * class, struct __eCNameSpace__eC__files__StringBinaryTree * this, struct __eCNameSpace__eC__types__Instance * channel)
{
__eCMethod___eCNameSpace__eC__types__IOChannel_Serialize(channel, __eCClass___eCNameSpace__eC__files__StringBTNode, (struct __eCNameSpace__eC__files__StringBTNode *)this->root);
}

void __eCMethod___eCNameSpace__eC__containers__StringBinaryTree_OnUnserialize(struct __eCNameSpace__eC__types__Class * class, struct __eCNameSpace__eC__files__StringBinaryTree * this, struct __eCNameSpace__eC__types__Instance * channel)
{
struct __eCNameSpace__eC__files__StringBTNode * root = (((void *)0));

__eCMethod___eCNameSpace__eC__types__IOChannel_Unserialize(channel, __eCClass___eCNameSpace__eC__files__StringBTNode, (void *)&root);
(*this).root = (struct __eCNameSpace__eC__containers__BTNode *)root;
(*this).count = root ? __eCProp___eCNameSpace__eC__containers__BTNode_Get_count((*this).root) : 0;
}

void __eCUnregisterModule_BinaryTree(struct __eCNameSpace__eC__types__Instance * module)
{

__eCPropM___eCNameSpace__eC__containers__BinaryTree_first = (void *)0;
__eCPropM___eCNameSpace__eC__containers__BinaryTree_last = (void *)0;
}

void __eCRegisterModule_BinaryTree(struct __eCNameSpace__eC__types__Instance * module)
{
struct __eCNameSpace__eC__types__Class __attribute__((unused)) * class;

class = __eCNameSpace__eC__types__eSystem_RegisterClass(1, "eC::files::BinaryTree", 0, sizeof(struct __eCNameSpace__eC__files__BinaryTree), 0, (void *)0, (void *)0, module, 4, 1);
if(((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application == ((struct __eCNameSpace__eC__types__Module *)(((char *)__thisModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->application && class)
__eCClass___eCNameSpace__eC__files__BinaryTree = class;
__eCNameSpace__eC__types__eClass_AddMethod(class, "OnSerialize", 0, __eCMethod___eCNameSpace__eC__containers__BinaryTree_OnSerialize, 1);
__eCNameSpace__eC__types__eClass_AddMethod(class, "OnUnserialize", 0, __eCMethod___eCNameSpace__eC__containers__BinaryTree_OnUnserialize, 1);
__eCNameSpace__eC__types__eClass_AddMethod(class, "Add", "bool Add(eC::files::BTNode node)", __eCMethod___eCNameSpace__eC__containers__BinaryTree_Add, 1);
__eCNameSpace__eC__types__eClass_AddMethod(class, "Check", "bool Check()", __eCMethod___eCNameSpace__eC__containers__BinaryTree_Check, 1);
__eCNameSpace__eC__types__eClass_AddMethod(class, "CompareInt", "int CompareInt(uintptr a, uintptr b)", __eCMethod___eCNameSpace__eC__containers__BinaryTree_CompareInt, 1);
__eCNameSpace__eC__types__eClass_AddMethod(class, "CompareString", "int CompareString(const char * a, const char * b)", __eCMethod___eCNameSpace__eC__containers__BinaryTree_CompareString, 1);
__eCNameSpace__eC__types__eClass_AddMethod(class, "Delete", "void Delete(eC::files::BTNode node)", __eCMethod___eCNameSpace__eC__containers__BinaryTree_Delete, 1);
__eCNameSpace__eC__types__eClass_AddMethod(class, "Find", "eC::files::BTNode Find(uintptr key)", __eCMethod___eCNameSpace__eC__containers__BinaryTree_Find, 1);
__eCNameSpace__eC__types__eClass_AddMethod(class, "FindAll", "eC::files::BTNode FindAll(uintptr key)", __eCMethod___eCNameSpace__eC__containers__BinaryTree_FindAll, 1);
__eCNameSpace__eC__types__eClass_AddMethod(class, "FindPrefix", "eC::files::BTNode FindPrefix(const char * key)", __eCMethod___eCNameSpace__eC__containers__BinaryTree_FindPrefix, 1);
__eCNameSpace__eC__types__eClass_AddMethod(class, "FindString", "eC::files::BTNode FindString(const char * key)", __eCMethod___eCNameSpace__eC__containers__BinaryTree_FindString, 1);
__eCNameSpace__eC__types__eClass_AddMethod(class, "Free", "void Free()", __eCMethod___eCNameSpace__eC__containers__BinaryTree_Free, 1);
__eCNameSpace__eC__types__eClass_AddMethod(class, "FreeString", "void ::FreeString(char * string)", __eCMethod___eCNameSpace__eC__containers__BinaryTree_FreeString, 1);
__eCNameSpace__eC__types__eClass_AddMethod(class, "Print", "char * Print(char * output, eC::files::TreePrintStyle tps)", __eCMethod___eCNameSpace__eC__containers__BinaryTree_Print, 1);
__eCNameSpace__eC__types__eClass_AddMethod(class, "Remove", "void Remove(eC::files::BTNode node)", __eCMethod___eCNameSpace__eC__containers__BinaryTree_Remove, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "root", "eC::files::BTNode", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "count", "int", 4, 4, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "CompareKey", "int (*)(eC::files::BinaryTree tree, uintptr a, uintptr b)", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "FreeKey", "void (*)(void * key)", sizeof(void *), 0xF000F000, 1);
__eCPropM___eCNameSpace__eC__containers__BinaryTree_first = __eCNameSpace__eC__types__eClass_AddProperty(class, "first", "eC::files::BTNode", 0, __eCProp___eCNameSpace__eC__containers__BinaryTree_Get_first, 1);
if(((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application == ((struct __eCNameSpace__eC__types__Module *)(((char *)__thisModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->application)
__eCProp___eCNameSpace__eC__containers__BinaryTree_first = __eCPropM___eCNameSpace__eC__containers__BinaryTree_first, __eCPropM___eCNameSpace__eC__containers__BinaryTree_first = (void *)0;
__eCPropM___eCNameSpace__eC__containers__BinaryTree_last = __eCNameSpace__eC__types__eClass_AddProperty(class, "last", "eC::files::BTNode", 0, __eCProp___eCNameSpace__eC__containers__BinaryTree_Get_last, 1);
if(((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application == ((struct __eCNameSpace__eC__types__Module *)(((char *)__thisModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->application)
__eCProp___eCNameSpace__eC__containers__BinaryTree_last = __eCPropM___eCNameSpace__eC__containers__BinaryTree_last, __eCPropM___eCNameSpace__eC__containers__BinaryTree_last = (void *)0;
class = __eCNameSpace__eC__types__eSystem_RegisterClass(1, "eC::files::StringBinaryTree", "eC::files::BinaryTree", sizeof(struct __eCNameSpace__eC__files__StringBinaryTree) - sizeof(struct __eCNameSpace__eC__files__BinaryTree), 0, (void *)0, (void *)0, module, 4, 1);
if(((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application == ((struct __eCNameSpace__eC__types__Module *)(((char *)__thisModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->application && class)
__eCClass___eCNameSpace__eC__files__StringBinaryTree = class;
__eCNameSpace__eC__types__eClass_AddMethod(class, "OnSerialize", 0, __eCMethod___eCNameSpace__eC__containers__StringBinaryTree_OnSerialize, 1);
__eCNameSpace__eC__types__eClass_AddMethod(class, "OnUnserialize", 0, __eCMethod___eCNameSpace__eC__containers__StringBinaryTree_OnUnserialize, 1);
}

