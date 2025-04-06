/* Code generated from eC source file: CustomAVLTree.ec */
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

extern int __eCVMethodID_class_OnCopy;

extern int __eCVMethodID_class_OnFree;

struct __eCNameSpace__eC__types__CustomAVLTree
{
struct __eCNameSpace__eC__types__AVLNode * root;
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

struct __eCNameSpace__eC__types__AVLNode;

extern int strcmp(const char * , const char * );

extern int printf(const char * , ...);

struct __eCNameSpace__eC__containers__IteratorPointer;

struct __eCNameSpace__eC__types__AVLNode;

extern void *  memcpy(void * , const void * , size_t size);

struct __eCNameSpace__eC__types__ClassTemplateParameter;

extern int __eCVMethodID_class_OnCompare;

extern int __eCVMethodID_class_OnFree;

struct __eCNameSpace__eC__types__AVLNode
{
struct __eCNameSpace__eC__types__AVLNode * parent, * left, * right;
int depth;
uint64 key;
} eC_gcc_struct;

struct __eCNameSpace__eC__types__AVLNode * __eCProp___eCNameSpace__eC__types__AVLNode_Get_minimum(struct __eCNameSpace__eC__types__AVLNode * this)
{
while(this->left)
this = this->left;
return this;
}

struct __eCNameSpace__eC__types__AVLNode * __eCProp___eCNameSpace__eC__types__AVLNode_Get_maximum(struct __eCNameSpace__eC__types__AVLNode * this)
{
while(this->right)
this = this->right;
return this;
}

void __eCMethod___eCNameSpace__eC__types__AVLNode_RemoveSwap(struct __eCNameSpace__eC__types__AVLNode * this, struct __eCNameSpace__eC__types__AVLNode * swap)
{
if(swap->left)
{
swap->left->parent = swap->parent;
if(swap == swap->parent->left)
swap->parent->left = swap->left;
else if(swap == swap->parent->right)
swap->parent->right = swap->left;
swap->left = (((void *)0));
}
if(swap->right)
{
swap->right->parent = swap->parent;
if(swap == swap->parent->left)
swap->parent->left = swap->right;
else if(swap == swap->parent->right)
swap->parent->right = swap->right;
swap->right = (((void *)0));
}
if(swap == swap->parent->left)
swap->parent->left = (((void *)0));
else if(swap == swap->parent->right)
swap->parent->right = (((void *)0));
{
struct __eCNameSpace__eC__types__AVLNode * n;

for(n = swap->parent; n; n = n->parent)
{
int __simpleStruct0, __simpleStruct1;
int newDepth = (__simpleStruct0 = n->left ? (n->left->depth + 1) : 0, __simpleStruct1 = n->right ? (n->right->depth + 1) : 0, (__simpleStruct0 > __simpleStruct1) ? __simpleStruct0 : __simpleStruct1);

if(newDepth == n->depth)
break;
n->depth = newDepth;
if(n == this)
break;
}
}
swap->left = this->left;
if(this->left)
this->left->parent = swap;
swap->right = this->right;
if(this->right)
this->right->parent = swap;
swap->parent = this->parent;
this->left = (((void *)0));
this->right = (((void *)0));
if(this->parent)
{
if(this == this->parent->left)
this->parent->left = swap;
else if(this == this->parent->right)
this->parent->right = swap;
}
}

int __eCProp___eCNameSpace__eC__types__AVLNode_Get_balanceFactor(struct __eCNameSpace__eC__types__AVLNode * this)
{
int leftDepth = this->left ? (this->left->depth + 1) : 0;
int rightDepth = this->right ? (this->right->depth + 1) : 0;

return rightDepth - leftDepth;
}

void __eCMethod___eCNameSpace__eC__types__AVLNode_SingleRotateRight(struct __eCNameSpace__eC__types__AVLNode * this)
{
int __simpleStruct2, __simpleStruct3;
int __simpleStruct0, __simpleStruct1;

if(this->parent)
{
if(this == this->parent->left)
this->parent->left = this->left;
else if(this == this->parent->right)
this->parent->right = this->left;
}
this->left->parent = this->parent;
this->parent = this->left;
this->left = this->parent->right;
if(this->left)
this->left->parent = this;
this->parent->right = this;
this->depth = (__simpleStruct0 = this->left ? (this->left->depth + 1) : 0, __simpleStruct1 = this->right ? (this->right->depth + 1) : 0, (__simpleStruct0 > __simpleStruct1) ? __simpleStruct0 : __simpleStruct1);
this->parent->depth = (__simpleStruct2 = this->parent->left ? (this->parent->left->depth + 1) : 0, __simpleStruct3 = this->parent->right ? (this->parent->right->depth + 1) : 0, (__simpleStruct2 > __simpleStruct3) ? __simpleStruct2 : __simpleStruct3);
{
struct __eCNameSpace__eC__types__AVLNode * n;

for(n = this->parent->parent; n; n = n->parent)
{
int __simpleStruct0, __simpleStruct1;
int newDepth = (__simpleStruct0 = n->left ? (n->left->depth + 1) : 0, __simpleStruct1 = n->right ? (n->right->depth + 1) : 0, (__simpleStruct0 > __simpleStruct1) ? __simpleStruct0 : __simpleStruct1);

if(newDepth == n->depth)
break;
n->depth = newDepth;
}
}
}

void __eCMethod___eCNameSpace__eC__types__AVLNode_SingleRotateLeft(struct __eCNameSpace__eC__types__AVLNode * this)
{
int __simpleStruct2, __simpleStruct3;
int __simpleStruct0, __simpleStruct1;

if(this->parent)
{
if(this == this->parent->right)
this->parent->right = this->right;
else if(this == this->parent->left)
this->parent->left = this->right;
}
this->right->parent = this->parent;
this->parent = this->right;
this->right = this->parent->left;
if(this->right)
this->right->parent = this;
this->parent->left = this;
this->depth = (__simpleStruct0 = this->left ? (this->left->depth + 1) : 0, __simpleStruct1 = this->right ? (this->right->depth + 1) : 0, (__simpleStruct0 > __simpleStruct1) ? __simpleStruct0 : __simpleStruct1);
this->parent->depth = (__simpleStruct2 = this->parent->left ? (this->parent->left->depth + 1) : 0, __simpleStruct3 = this->parent->right ? (this->parent->right->depth + 1) : 0, (__simpleStruct2 > __simpleStruct3) ? __simpleStruct2 : __simpleStruct3);
{
struct __eCNameSpace__eC__types__AVLNode * n;

for(n = this->parent->parent; n; n = n->parent)
{
int __simpleStruct0, __simpleStruct1;
int newDepth = (__simpleStruct0 = n->left ? (n->left->depth + 1) : 0, __simpleStruct1 = n->right ? (n->right->depth + 1) : 0, (__simpleStruct0 > __simpleStruct1) ? __simpleStruct0 : __simpleStruct1);

if(newDepth == n->depth)
break;
n->depth = newDepth;
}
}
}

struct __eCNameSpace__eC__types__AVLNode * __eCProp___eCNameSpace__eC__types__AVLNode_Get_maximum(struct __eCNameSpace__eC__types__AVLNode * this);

struct __eCNameSpace__eC__types__AVLNode * __eCProp___eCNameSpace__eC__types__AVLNode_Get_minimum(struct __eCNameSpace__eC__types__AVLNode * this);

int __eCProp___eCNameSpace__eC__types__AVLNode_Get_count(struct __eCNameSpace__eC__types__AVLNode * this);

int __eCProp___eCNameSpace__eC__types__AVLNode_Get_depthProp(struct __eCNameSpace__eC__types__AVLNode * this);

int __eCProp___eCNameSpace__eC__types__AVLNode_Get_balanceFactor(struct __eCNameSpace__eC__types__AVLNode * this);

struct __eCNameSpace__eC__types__AVLNode * __eCProp___eCNameSpace__eC__types__AVLNode_Get_prev(struct __eCNameSpace__eC__types__AVLNode * this);

struct __eCNameSpace__eC__types__AVLNode * __eCProp___eCNameSpace__eC__types__AVLNode_Get_next(struct __eCNameSpace__eC__types__AVLNode * this);

void __eCMethod___eCNameSpace__eC__types__AVLNode_DoubleRotateRight(struct __eCNameSpace__eC__types__AVLNode * this)
{
__eCMethod___eCNameSpace__eC__types__AVLNode_SingleRotateLeft(this->left);
__eCMethod___eCNameSpace__eC__types__AVLNode_SingleRotateRight(this);
}

void __eCMethod___eCNameSpace__eC__types__AVLNode_DoubleRotateLeft(struct __eCNameSpace__eC__types__AVLNode * this)
{
__eCMethod___eCNameSpace__eC__types__AVLNode_SingleRotateRight(this->right);
__eCMethod___eCNameSpace__eC__types__AVLNode_SingleRotateLeft(this);
}

struct __eCNameSpace__eC__types__Property;

static __attribute__((unused)) struct __eCNameSpace__eC__types__Property * __eCProp___eCNameSpace__eC__types__AVLNode_prev, * __eCPropM___eCNameSpace__eC__types__AVLNode_prev;

static __attribute__((unused)) struct __eCNameSpace__eC__types__Property * __eCProp___eCNameSpace__eC__types__AVLNode_next, * __eCPropM___eCNameSpace__eC__types__AVLNode_next;

static __attribute__((unused)) struct __eCNameSpace__eC__types__Property * __eCProp___eCNameSpace__eC__types__AVLNode_minimum, * __eCPropM___eCNameSpace__eC__types__AVLNode_minimum;

static __attribute__((unused)) struct __eCNameSpace__eC__types__Property * __eCProp___eCNameSpace__eC__types__AVLNode_maximum, * __eCPropM___eCNameSpace__eC__types__AVLNode_maximum;

static __attribute__((unused)) struct __eCNameSpace__eC__types__Property * __eCProp___eCNameSpace__eC__types__AVLNode_count, * __eCPropM___eCNameSpace__eC__types__AVLNode_count;

static __attribute__((unused)) struct __eCNameSpace__eC__types__Property * __eCProp___eCNameSpace__eC__types__AVLNode_depthProp, * __eCPropM___eCNameSpace__eC__types__AVLNode_depthProp;

static __attribute__((unused)) struct __eCNameSpace__eC__types__Property * __eCProp___eCNameSpace__eC__types__AVLNode_balanceFactor, * __eCPropM___eCNameSpace__eC__types__AVLNode_balanceFactor;

struct __eCNameSpace__eC__types__AVLNode * __eCProp___eCNameSpace__eC__types__AVLNode_Get_next(struct __eCNameSpace__eC__types__AVLNode * this)
{
struct __eCNameSpace__eC__types__AVLNode * right = this->right;

if(right)
return __eCProp___eCNameSpace__eC__types__AVLNode_Get_minimum(right);
while(this)
{
struct __eCNameSpace__eC__types__AVLNode * parent = this->parent;

if(parent && this == parent->left)
return parent;
else
this = parent;
}
return (((void *)0));
}

struct __eCNameSpace__eC__types__AVLNode * __eCProp___eCNameSpace__eC__types__AVLNode_Get_prev(struct __eCNameSpace__eC__types__AVLNode * this)
{
if(this->left)
return __eCProp___eCNameSpace__eC__types__AVLNode_Get_maximum(this->left);
while(this)
{
if(this->parent && this == this->parent->right)
return this->parent;
else
this = this->parent;
}
return this;
}

int __eCProp___eCNameSpace__eC__types__AVLNode_Get_count(struct __eCNameSpace__eC__types__AVLNode * this)
{
return 1 + (this->left ? __eCProp___eCNameSpace__eC__types__AVLNode_Get_count(this->left) : 0) + (this->right ? __eCProp___eCNameSpace__eC__types__AVLNode_Get_count(this->right) : 0);
}

int __eCProp___eCNameSpace__eC__types__AVLNode_Get_depthProp(struct __eCNameSpace__eC__types__AVLNode * this)
{
int leftDepth = this->left ? (__eCProp___eCNameSpace__eC__types__AVLNode_Get_depthProp(this->left) + 1) : 0;
int rightDepth = this->right ? (__eCProp___eCNameSpace__eC__types__AVLNode_Get_depthProp(this->right) + 1) : 0;

return ((leftDepth > rightDepth) ? leftDepth : rightDepth);
}

struct __eCNameSpace__eC__types__AVLNode * __eCMethod___eCNameSpace__eC__types__AVLNode_Rebalance(struct __eCNameSpace__eC__types__AVLNode * this)
{
while(1)
{
int factor = __eCProp___eCNameSpace__eC__types__AVLNode_Get_balanceFactor(this);

if(factor < -1)
{
if(__eCProp___eCNameSpace__eC__types__AVLNode_Get_balanceFactor(this->left) == 1)
__eCMethod___eCNameSpace__eC__types__AVLNode_DoubleRotateRight(this);
else
__eCMethod___eCNameSpace__eC__types__AVLNode_SingleRotateRight(this);
}
else if(factor > 1)
{
if(__eCProp___eCNameSpace__eC__types__AVLNode_Get_balanceFactor(this->right) == -1)
__eCMethod___eCNameSpace__eC__types__AVLNode_DoubleRotateLeft(this);
else
__eCMethod___eCNameSpace__eC__types__AVLNode_SingleRotateLeft(this);
}
if(this->parent)
this = this->parent;
else
return this;
}
}

struct __eCNameSpace__eC__types__AVLNode * __eCMethod___eCNameSpace__eC__types__AVLNode_RemoveSwapLeft(struct __eCNameSpace__eC__types__AVLNode * this)
{
struct __eCNameSpace__eC__types__AVLNode * swap = this->left ? __eCProp___eCNameSpace__eC__types__AVLNode_Get_maximum(this->left) : this->right;
struct __eCNameSpace__eC__types__AVLNode * swapParent = (((void *)0));

if(swap)
{
swapParent = swap->parent;
__eCMethod___eCNameSpace__eC__types__AVLNode_RemoveSwap(this, swap);
}
if(this->parent)
{
if(this == this->parent->left)
this->parent->left = (((void *)0));
else if(this == this->parent->right)
this->parent->right = (((void *)0));
}
{
struct __eCNameSpace__eC__types__AVLNode * n;

for(n = swap ? swap : this->parent; n; n = n->parent)
{
int __simpleStruct0, __simpleStruct1;
int newDepth = (__simpleStruct0 = n->left ? (n->left->depth + 1) : 0, __simpleStruct1 = n->right ? (n->right->depth + 1) : 0, (__simpleStruct0 > __simpleStruct1) ? __simpleStruct0 : __simpleStruct1);

if(newDepth == n->depth && n != swap)
break;
n->depth = newDepth;
}
}
if(swapParent && swapParent != this)
return __eCMethod___eCNameSpace__eC__types__AVLNode_Rebalance(swapParent);
else if(swap)
return __eCMethod___eCNameSpace__eC__types__AVLNode_Rebalance(swap);
else if(this->parent)
return __eCMethod___eCNameSpace__eC__types__AVLNode_Rebalance(this->parent);
else
return (((void *)0));
}

struct __eCNameSpace__eC__types__AVLNode * __eCMethod___eCNameSpace__eC__types__AVLNode_RemoveSwapRight(struct __eCNameSpace__eC__types__AVLNode * this)
{
struct __eCNameSpace__eC__types__AVLNode * result;
struct __eCNameSpace__eC__types__AVLNode * swap = this->right ? __eCProp___eCNameSpace__eC__types__AVLNode_Get_minimum(this->right) : this->left;
struct __eCNameSpace__eC__types__AVLNode * swapParent = (((void *)0));

if(swap)
{
swapParent = swap->parent;
__eCMethod___eCNameSpace__eC__types__AVLNode_RemoveSwap(this, swap);
}
if(this->parent)
{
if(this == this->parent->left)
this->parent->left = (((void *)0));
else if(this == this->parent->right)
this->parent->right = (((void *)0));
}
{
struct __eCNameSpace__eC__types__AVLNode * n;

for(n = swap ? swap : this->parent; n; n = n->parent)
{
int __simpleStruct0, __simpleStruct1;
int newDepth = (__simpleStruct0 = n->left ? (n->left->depth + 1) : 0, __simpleStruct1 = n->right ? (n->right->depth + 1) : 0, (__simpleStruct0 > __simpleStruct1) ? __simpleStruct0 : __simpleStruct1);

if(newDepth == n->depth && n != swap)
break;
n->depth = newDepth;
}
}
if(swapParent && swapParent != this)
result = __eCMethod___eCNameSpace__eC__types__AVLNode_Rebalance(swapParent);
else if(swap)
result = __eCMethod___eCNameSpace__eC__types__AVLNode_Rebalance(swap);
else if(this->parent)
result = __eCMethod___eCNameSpace__eC__types__AVLNode_Rebalance(this->parent);
else
result = (((void *)0));
return result;
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

extern void __eCNameSpace__eC__types__eEnum_AddFixedValue(struct __eCNameSpace__eC__types__Class * _class, const char *  string, long long value);

extern struct __eCNameSpace__eC__types__Property * __eCNameSpace__eC__types__eClass_AddProperty(struct __eCNameSpace__eC__types__Class * _class, const char *  name, const char *  dataType, void *  setStmt, void *  getStmt, int declMode);

extern void __eCNameSpace__eC__types__eClass_DoneAddingTemplateParameters(struct __eCNameSpace__eC__types__Class * base);

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

extern int __eCVMethodID___eCNameSpace__eC__containers__Container_Remove;

struct __eCNameSpace__eC__files__BinaryTree;

struct __eCNameSpace__eC__files__BinaryTree
{
struct __eCNameSpace__eC__containers__BTNode * root;
int count;
int (*  CompareKey)(struct __eCNameSpace__eC__files__BinaryTree * tree, uintptr_t a, uintptr_t b);
void (*  FreeKey)(void *  key);
} eC_gcc_struct;

struct __eCNameSpace__eC__types__AVLNode *  __eCMethod___eCNameSpace__eC__types__AVLNode_FindAll(struct __eCNameSpace__eC__types__AVLNode *  this, const uint64 key);

struct __eCNameSpace__eC__types__AVLNode * __eCMethod___eCNameSpace__eC__types__AVLNode_FindAll(struct __eCNameSpace__eC__types__AVLNode * this, const uint64 key)
{
struct __eCNameSpace__eC__types__AVLNode * result = (((void *)0));

if(this->key == key)
result = this;
if(!result && this->left)
result = __eCMethod___eCNameSpace__eC__types__AVLNode_FindAll(this->left, key);
if(!result && this->right)
result = __eCMethod___eCNameSpace__eC__types__AVLNode_FindAll(this->right, key);
return result;
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

struct __eCNameSpace__eC__types__AVLNode *  __eCMethod___eCNameSpace__eC__types__AVLNode_FindEx(struct __eCNameSpace__eC__types__AVLNode *  this, struct __eCNameSpace__eC__types__Class *  Tclass, const uint64 key, struct __eCNameSpace__eC__types__AVLNode * *  addTo, int *  addSide);

struct __eCNameSpace__eC__types__AVLNode * __eCMethod___eCNameSpace__eC__types__AVLNode_Find(struct __eCNameSpace__eC__types__AVLNode * this, struct __eCNameSpace__eC__types__Class * Tclass, const uint64 key)
{
return __eCMethod___eCNameSpace__eC__types__AVLNode_FindEx(this, Tclass, key, (((void *)0)), (((void *)0)));
}

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

extern struct __eCNameSpace__eC__types__Class * __eCNameSpace__eC__types__eSystem_FindClass(struct __eCNameSpace__eC__types__Instance * module, const char *  name);

extern struct __eCNameSpace__eC__types__Instance * __thisModule;

extern struct __eCNameSpace__eC__types__Class * __eCNameSpace__eC__types__eSystem_RegisterClass(int type, const char *  name, const char *  baseName, int size, int sizeClass, unsigned int (*  Constructor)(void * ), void (*  Destructor)(void * ), struct __eCNameSpace__eC__types__Instance * module, int declMode, int inheritanceAccess);

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

static struct __eCNameSpace__eC__types__Class * __eCClass___eCNameSpace__eC__types__AddSide;

static struct __eCNameSpace__eC__types__Class * __eCClass___eCNameSpace__eC__types__AVLNode;

static struct __eCNameSpace__eC__types__Class * __eCClass___eCNameSpace__eC__types__CustomAVLTree;

extern struct __eCNameSpace__eC__types__Class * __eCClass___eCNameSpace__eC__containers__IteratorPointer;

extern struct __eCNameSpace__eC__types__Class * __eCClass_uint64;

extern struct __eCNameSpace__eC__types__Class * __eCClass_int64;

extern struct __eCNameSpace__eC__types__Class * __eCClass_double;

extern struct __eCNameSpace__eC__types__Class * __eCClass_int;

extern struct __eCNameSpace__eC__types__Class * __eCClass_uint;

extern struct __eCNameSpace__eC__types__Class * __eCClass___eCNameSpace__eC__types__Instance;

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

struct __eCNameSpace__eC__containers__IteratorPointer * __eCMethod___eCNameSpace__eC__types__CustomAVLTree_GetFirst(struct __eCNameSpace__eC__types__Instance * this)
{
__attribute__((unused)) struct __eCNameSpace__eC__types__CustomAVLTree * __eCPointer___eCNameSpace__eC__types__CustomAVLTree = (struct __eCNameSpace__eC__types__CustomAVLTree *)(this ? (((char *)this) + 0 + sizeof(struct __eCNameSpace__eC__types__Instance)) : 0);

return (struct __eCNameSpace__eC__containers__IteratorPointer *)(__eCPointer___eCNameSpace__eC__types__CustomAVLTree->root ? __eCProp___eCNameSpace__eC__types__AVLNode_Get_minimum(((struct __eCNameSpace__eC__types__AVLNode *)((uintptr_t)(__eCPointer___eCNameSpace__eC__types__CustomAVLTree->root)))) : (((void *)0)));
}

struct __eCNameSpace__eC__containers__IteratorPointer * __eCMethod___eCNameSpace__eC__types__CustomAVLTree_GetLast(struct __eCNameSpace__eC__types__Instance * this)
{
__attribute__((unused)) struct __eCNameSpace__eC__types__CustomAVLTree * __eCPointer___eCNameSpace__eC__types__CustomAVLTree = (struct __eCNameSpace__eC__types__CustomAVLTree *)(this ? (((char *)this) + 0 + sizeof(struct __eCNameSpace__eC__types__Instance)) : 0);

return (struct __eCNameSpace__eC__containers__IteratorPointer *)(__eCPointer___eCNameSpace__eC__types__CustomAVLTree->root ? __eCProp___eCNameSpace__eC__types__AVLNode_Get_maximum(((struct __eCNameSpace__eC__types__AVLNode *)((uintptr_t)(__eCPointer___eCNameSpace__eC__types__CustomAVLTree->root)))) : (((void *)0)));
}

struct __eCNameSpace__eC__containers__IteratorPointer * __eCMethod___eCNameSpace__eC__types__CustomAVLTree_GetPrev(struct __eCNameSpace__eC__types__Instance * this, struct __eCNameSpace__eC__containers__IteratorPointer * node)
{
__attribute__((unused)) struct __eCNameSpace__eC__types__CustomAVLTree * __eCPointer___eCNameSpace__eC__types__CustomAVLTree = (struct __eCNameSpace__eC__types__CustomAVLTree *)(this ? (((char *)this) + 0 + sizeof(struct __eCNameSpace__eC__types__Instance)) : 0);

return (void *)(__eCProp___eCNameSpace__eC__types__AVLNode_Get_prev(((struct __eCNameSpace__eC__types__AVLNode *)node)));
}

struct __eCNameSpace__eC__containers__IteratorPointer * __eCMethod___eCNameSpace__eC__types__CustomAVLTree_GetNext(struct __eCNameSpace__eC__types__Instance * this, struct __eCNameSpace__eC__containers__IteratorPointer * node)
{
__attribute__((unused)) struct __eCNameSpace__eC__types__CustomAVLTree * __eCPointer___eCNameSpace__eC__types__CustomAVLTree = (struct __eCNameSpace__eC__types__CustomAVLTree *)(this ? (((char *)this) + 0 + sizeof(struct __eCNameSpace__eC__types__Instance)) : 0);

return (void *)(__eCProp___eCNameSpace__eC__types__AVLNode_Get_next(((struct __eCNameSpace__eC__types__AVLNode *)node)));
}

uint64 __eCMethod___eCNameSpace__eC__types__CustomAVLTree_GetData(struct __eCNameSpace__eC__types__Instance * this, struct __eCNameSpace__eC__containers__IteratorPointer * node)
{
__attribute__((unused)) struct __eCNameSpace__eC__types__CustomAVLTree * __eCPointer___eCNameSpace__eC__types__CustomAVLTree = (struct __eCNameSpace__eC__types__CustomAVLTree *)(this ? (((char *)this) + 0 + sizeof(struct __eCNameSpace__eC__types__Instance)) : 0);

return (uint64)(uintptr_t)(struct __eCNameSpace__eC__types__AVLNode *)(uintptr_t)node;
}

unsigned int __eCMethod___eCNameSpace__eC__types__CustomAVLTree_SetData(struct __eCNameSpace__eC__types__Instance * this, struct __eCNameSpace__eC__containers__IteratorPointer * node, uint64 data)
{
__attribute__((unused)) struct __eCNameSpace__eC__types__CustomAVLTree * __eCPointer___eCNameSpace__eC__types__CustomAVLTree = (struct __eCNameSpace__eC__types__CustomAVLTree *)(this ? (((char *)this) + 0 + sizeof(struct __eCNameSpace__eC__types__Instance)) : 0);

return 0;
}

void __eCMethod___eCNameSpace__eC__types__CustomAVLTree_Remove(struct __eCNameSpace__eC__types__Instance * this, struct __eCNameSpace__eC__containers__IteratorPointer * node)
{
__attribute__((unused)) struct __eCNameSpace__eC__types__CustomAVLTree * __eCPointer___eCNameSpace__eC__types__CustomAVLTree = (struct __eCNameSpace__eC__types__CustomAVLTree *)(this ? (((char *)this) + 0 + sizeof(struct __eCNameSpace__eC__types__Instance)) : 0);
struct __eCNameSpace__eC__types__AVLNode * parent = ((struct __eCNameSpace__eC__types__AVLNode *)node)->parent;

if(parent || ((struct __eCNameSpace__eC__types__AVLNode *)((uintptr_t)(__eCPointer___eCNameSpace__eC__types__CustomAVLTree->root))) == (struct __eCNameSpace__eC__types__AVLNode *)node)
{
__eCPointer___eCNameSpace__eC__types__CustomAVLTree->root = __eCMethod___eCNameSpace__eC__types__AVLNode_RemoveSwapRight(((struct __eCNameSpace__eC__types__AVLNode *)node));
__eCPointer___eCNameSpace__eC__types__CustomAVLTree->count--;
((struct __eCNameSpace__eC__types__AVLNode *)node)->parent = (((void *)0));
}
}

struct __eCNameSpace__eC__containers__IteratorPointer * __eCMethod___eCNameSpace__eC__types__CustomAVLTree_Find(struct __eCNameSpace__eC__types__Instance * this, uint64 value)
{
__attribute__((unused)) struct __eCNameSpace__eC__types__CustomAVLTree * __eCPointer___eCNameSpace__eC__types__CustomAVLTree = (struct __eCNameSpace__eC__types__CustomAVLTree *)(this ? (((char *)this) + 0 + sizeof(struct __eCNameSpace__eC__types__Instance)) : 0);

return (struct __eCNameSpace__eC__containers__IteratorPointer *)((struct __eCNameSpace__eC__types__AVLNode *)((uintptr_t)(value)));
}

unsigned int __eCMethod___eCNameSpace__eC__types__AVLNode_Add(struct __eCNameSpace__eC__types__AVLNode * this, struct __eCNameSpace__eC__types__Class * Tclass, struct __eCNameSpace__eC__types__AVLNode * node, int addSide)
{
int t;
int (* onCompare)(void *, void *, void *);
unsigned int offset = 0;
unsigned int reference = 0;
unsigned char * a;

if(!Tclass)
Tclass = __eCClass_uint64;
t = Tclass->type;
onCompare = (void *)Tclass->_vTbl[__eCVMethodID_class_OnCompare];
if((t == 1000 && !Tclass->byValueSystemClass) || t == 2 || t == 4 || t == 3 || t == 1)
{
reference = 1;
offset = __ENDIAN_PAD((t == 1) ? sizeof(void *) : Tclass->typeSize);
}
a = reference ? ((unsigned char *)&node->key + offset) : ((unsigned char *)(uintptr_t)(uint64)(node->key));
while(1)
{
int result;

if(addSide)
result = addSide;
else
{
unsigned char * b = reference ? ((unsigned char *)&this->key + offset) : (unsigned char *)(uintptr_t)(uint64)(this->key);

result = onCompare(Tclass, a, b);
}
if(!result)
return 0;
else if(result > 0)
{
if(this->right)
this = this->right;
else
{
this->right = node;
break;
}
}
else
{
if(this->left)
this = this->left;
else
{
this->left = node;
break;
}
}
}
node->parent = this;
node->depth = 0;
{
struct __eCNameSpace__eC__types__AVLNode * n;

for(n = this; n; n = n->parent)
{
int __simpleStruct0, __simpleStruct1;
int newDepth = (__simpleStruct0 = n->left ? (n->left->depth + 1) : 0, __simpleStruct1 = n->right ? (n->right->depth + 1) : 0, (__simpleStruct0 > __simpleStruct1) ? __simpleStruct0 : __simpleStruct1);

if(newDepth == n->depth)
break;
n->depth = newDepth;
}
}
return 1;
}

struct __eCNameSpace__eC__types__AVLNode * __eCMethod___eCNameSpace__eC__types__AVLNode_FindEx(struct __eCNameSpace__eC__types__AVLNode * this, struct __eCNameSpace__eC__types__Class * Tclass, const uint64 key, struct __eCNameSpace__eC__types__AVLNode ** addTo, int * addSide)
{
unsigned char * a;
unsigned int reference = 0;
unsigned int offset = 0;
int t = Tclass->type;
int (* onCompare)(void *, void *, void *) = (void *)Tclass->_vTbl[__eCVMethodID_class_OnCompare];
unsigned int isInt64 = 0, isDouble = 0;
struct __eCNameSpace__eC__types__AVLNode * to = (((void *)0));
int side = (int)0;

if(onCompare == (void *)__eCClass_int64->_vTbl[__eCVMethodID_class_OnCompare] || (t == 3 && Tclass->typeSize == sizeof(long long) && !strcmp(Tclass->name, "Id")) || (t == 2 && Tclass->typeSize == sizeof(long long)))
isInt64 = 1;
else if(onCompare == (void *)__eCClass_double->_vTbl[__eCVMethodID_class_OnCompare])
isDouble = 1;
reference = (t == 1000 && !Tclass->byValueSystemClass) || t == 2 || t == 4 || t == 3;
offset = __ENDIAN_PAD(Tclass->typeSize);
a = reference ? ((unsigned char *)&key) + offset : (unsigned char *)(uintptr_t)key;
if(t == 1)
{
reference = 1;
offset = __ENDIAN_PAD(sizeof(void *));
}
if(Tclass == __eCClass_int)
{
int ia = *(int *)a;

if(reference)
{
while(this)
{
unsigned char * b = (((unsigned char *)&this->key) + __ENDIAN_PAD(sizeof(int)));
int ib = *(int *)b;
int result = ia > ib ? 1 : ia < ib ? -1 : 0;

if(result)
{
struct __eCNameSpace__eC__types__AVLNode * node = result < 0 ? this->left : this->right;

if(!node)
to = this, side = (int)result;
this = node;
}
else
break;
}
}
else
{
while(this)
{
int ib = *(int *)((unsigned char *)(uintptr_t)(uint64)(this->key));
int result = ia > ib ? 1 : ia < ib ? -1 : 0;

if(result)
{
struct __eCNameSpace__eC__types__AVLNode * node = result < 0 ? this->left : this->right;

if(!node)
to = this, side = (int)result;
this = node;
}
else
break;
}
}
}
else if(Tclass == __eCClass_uint)
{
unsigned int ia = *(unsigned int *)a;

if(reference)
{
while(this)
{
unsigned char * b = (((unsigned char *)&this->key) + __ENDIAN_PAD(sizeof(unsigned int)));
unsigned int ib = *(unsigned int *)b;
int result = ia > ib ? 1 : ia < ib ? -1 : 0;

if(result)
{
struct __eCNameSpace__eC__types__AVLNode * node = result < 0 ? this->left : this->right;

if(!node)
to = this, side = (int)result;
this = node;
}
else
break;
}
}
else
{
while(this)
{
unsigned int ib = *(unsigned int *)((unsigned char *)(uintptr_t)(uint64)(this->key));
int result = ia > ib ? 1 : ia < ib ? -1 : 0;

if(result)
{
struct __eCNameSpace__eC__types__AVLNode * node = result < 0 ? this->left : this->right;

if(!node)
to = this, side = (int)result;
this = node;
}
else
break;
}
}
}
else
{
int result;
long long a64;
double aDouble;

if(isInt64)
a64 = *(long long *)a;
else if(isDouble)
aDouble = *(double *)a;
if(reference)
{
if(isInt64)
{
while(this)
{
long long b64 = this->key;

if(a64 > b64)
result = 1;
else if(a64 < b64)
result = -1;
else
result = 0;
if(result)
{
struct __eCNameSpace__eC__types__AVLNode * node = result < 0 ? this->left : this->right;

if(!node)
to = this, side = (int)result;
this = node;
}
else
break;
}
}
else if(isDouble)
{
while(this)
{
const unsigned char * b = (unsigned char *)&this->key;
double bDouble = *(double *)(unsigned char *)b;

if(aDouble > bDouble)
result = 1;
else if(aDouble < bDouble)
result = -1;
else
result = 0;
if(result)
{
struct __eCNameSpace__eC__types__AVLNode * node = result < 0 ? this->left : this->right;

if(!node)
to = this, side = (int)result;
this = node;
}
else
break;
}
}
else
{
while(this)
{
const unsigned char * b = ((unsigned char *)&this->key) + offset;

result = onCompare(Tclass, a, (unsigned char *)b);
if(result)
{
struct __eCNameSpace__eC__types__AVLNode * node = result < 0 ? this->left : this->right;

if(!node)
to = this, side = (int)result;
this = node;
}
else
break;
}
}
}
else
{
if(isInt64)
{
while(this)
{
long long b64 = *(long long *)(uintptr_t)(uint64)(this->key);

if(a64 > b64)
result = 1;
else if(a64 < b64)
result = -1;
else
result = 0;
if(result)
{
struct __eCNameSpace__eC__types__AVLNode * node = result < 0 ? this->left : this->right;

if(!node)
to = this, side = (int)result;
this = node;
}
else
break;
}
}
else if(isDouble)
{
while(this)
{
double bDouble = *(double *)(uintptr_t)(uint64)(this->key);

if(aDouble > bDouble)
result = 1;
else if(aDouble < bDouble)
result = -1;
else
result = 0;
if(result)
{
struct __eCNameSpace__eC__types__AVLNode * node = result < 0 ? this->left : this->right;

if(!node)
to = this, side = (int)result;
this = node;
}
else
break;
}
}
else
{
while(this)
{
const unsigned char * b = (unsigned char *)(uintptr_t)(uint64)(this->key);

result = onCompare(Tclass, a, (unsigned char *)b);
if(result)
{
struct __eCNameSpace__eC__types__AVLNode * node = result < 0 ? this->left : this->right;

if(!node)
to = this, side = (int)result;
this = node;
}
else
break;
}
}
}
}
if(addTo)
*addTo = to;
if(addSide)
*addSide = side;
return this;
}

void __eCMethod___eCNameSpace__eC__types__CustomAVLTree_FreeKey(struct __eCNameSpace__eC__types__Instance * this, struct __eCNameSpace__eC__types__AVLNode * item)
{
__attribute__((unused)) struct __eCNameSpace__eC__types__CustomAVLTree * __eCPointer___eCNameSpace__eC__types__CustomAVLTree = (struct __eCNameSpace__eC__types__CustomAVLTree *)(this ? (((char *)this) + 0 + sizeof(struct __eCNameSpace__eC__types__Instance)) : 0);

if(((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[3].__anon1.__anon1.dataTypeClass->type == 1)
{
struct __eCNameSpace__eC__types__Class * Tclass = ((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[3].__anon1.__anon1.dataTypeClass;

((void (*)(void *, void *))(void *)Tclass->_vTbl[__eCVMethodID_class_OnFree])(Tclass, (((unsigned char *)&item->key) + __ENDIAN_PAD(sizeof(void *))));
}
else
(((void (* )(void *  _class, void *  data))((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[4].__anon1.__anon1.dataTypeClass->_vTbl[__eCVMethodID_class_OnFree])(((struct __eCNameSpace__eC__types__Instance * )(char * )this)->_class->templateArgs[4].__anon1.__anon1.dataTypeClass, ((void * )((uintptr_t)(item->key)))), item->key = 0);
}

void __eCUnregisterModule_CustomAVLTree(struct __eCNameSpace__eC__types__Instance * module)
{

__eCPropM___eCNameSpace__eC__types__AVLNode_prev = (void *)0;
__eCPropM___eCNameSpace__eC__types__AVLNode_next = (void *)0;
__eCPropM___eCNameSpace__eC__types__AVLNode_minimum = (void *)0;
__eCPropM___eCNameSpace__eC__types__AVLNode_maximum = (void *)0;
__eCPropM___eCNameSpace__eC__types__AVLNode_count = (void *)0;
__eCPropM___eCNameSpace__eC__types__AVLNode_depthProp = (void *)0;
__eCPropM___eCNameSpace__eC__types__AVLNode_balanceFactor = (void *)0;
}

struct __eCNameSpace__eC__containers__IteratorPointer * __eCMethod___eCNameSpace__eC__types__CustomAVLTree_Add(struct __eCNameSpace__eC__types__Instance * this, uint64 node)
{
__attribute__((unused)) struct __eCNameSpace__eC__types__CustomAVLTree * __eCPointer___eCNameSpace__eC__types__CustomAVLTree = (struct __eCNameSpace__eC__types__CustomAVLTree *)(this ? (((char *)this) + 0 + sizeof(struct __eCNameSpace__eC__types__Instance)) : 0);

if(!((struct __eCNameSpace__eC__types__AVLNode *)((uintptr_t)(__eCPointer___eCNameSpace__eC__types__CustomAVLTree->root))))
__eCPointer___eCNameSpace__eC__types__CustomAVLTree->root = ((struct __eCNameSpace__eC__types__AVLNode *)((uintptr_t)(node)));
else
{
struct __eCNameSpace__eC__types__Class * btClass = ((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[3].__anon1.__anon1.dataTypeClass;
struct __eCNameSpace__eC__types__Class * Tclass = btClass->templateArgs[0].__anon1.__anon1.dataTypeClass;

if(!Tclass)
{
Tclass = btClass->templateArgs[0].__anon1.__anon1.dataTypeClass = __eCNameSpace__eC__types__eSystem_FindClass(((struct __eCNameSpace__eC__types__Module *)(((char *)__thisModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->application, btClass->templateArgs[0].__anon1.__anon1.dataTypeString);
}
if(__eCMethod___eCNameSpace__eC__types__AVLNode_Add(((struct __eCNameSpace__eC__types__AVLNode *)((uintptr_t)(__eCPointer___eCNameSpace__eC__types__CustomAVLTree->root))), Tclass, ((struct __eCNameSpace__eC__types__AVLNode *)((uintptr_t)(node))), (int)0))
__eCPointer___eCNameSpace__eC__types__CustomAVLTree->root = __eCMethod___eCNameSpace__eC__types__AVLNode_Rebalance(((struct __eCNameSpace__eC__types__AVLNode *)((uintptr_t)(node))));
else
return (((void *)0));
}
__eCPointer___eCNameSpace__eC__types__CustomAVLTree->count++;
return (struct __eCNameSpace__eC__containers__IteratorPointer *)((struct __eCNameSpace__eC__types__AVLNode *)((uintptr_t)(node)));
}

struct __eCNameSpace__eC__containers__IteratorPointer * __eCMethod___eCNameSpace__eC__types__CustomAVLTree_AddEx(struct __eCNameSpace__eC__types__Instance * this, uint64 node, uint64 addNode, int addSide)
{
__attribute__((unused)) struct __eCNameSpace__eC__types__CustomAVLTree * __eCPointer___eCNameSpace__eC__types__CustomAVLTree = (struct __eCNameSpace__eC__types__CustomAVLTree *)(this ? (((char *)this) + 0 + sizeof(struct __eCNameSpace__eC__types__Instance)) : 0);

if(!((struct __eCNameSpace__eC__types__AVLNode *)((uintptr_t)(__eCPointer___eCNameSpace__eC__types__CustomAVLTree->root))))
__eCPointer___eCNameSpace__eC__types__CustomAVLTree->root = ((struct __eCNameSpace__eC__types__AVLNode *)((uintptr_t)(node)));
else
{
struct __eCNameSpace__eC__types__Class * Tclass = ((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[3].__anon1.__anon1.dataTypeClass->templateArgs[0].__anon1.__anon1.dataTypeClass;

if(!Tclass)
{
Tclass = ((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[3].__anon1.__anon1.dataTypeClass->templateArgs[0].__anon1.__anon1.dataTypeClass = __eCNameSpace__eC__types__eSystem_FindClass(((struct __eCNameSpace__eC__types__Module *)(((char *)__thisModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->application, ((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[3].__anon1.__anon1.dataTypeClass->templateArgs[0].__anon1.__anon1.dataTypeString);
}
if(__eCMethod___eCNameSpace__eC__types__AVLNode_Add(((struct __eCNameSpace__eC__types__AVLNode *)((uintptr_t)(addNode))), Tclass, ((struct __eCNameSpace__eC__types__AVLNode *)((uintptr_t)(node))), addSide))
__eCPointer___eCNameSpace__eC__types__CustomAVLTree->root = __eCMethod___eCNameSpace__eC__types__AVLNode_Rebalance(((struct __eCNameSpace__eC__types__AVLNode *)((uintptr_t)(node))));
else
return (((void *)0));
}
__eCPointer___eCNameSpace__eC__types__CustomAVLTree->count++;
return (struct __eCNameSpace__eC__containers__IteratorPointer *)((struct __eCNameSpace__eC__types__AVLNode *)((uintptr_t)(node)));
}

void __eCMethod___eCNameSpace__eC__types__CustomAVLTree_Delete(struct __eCNameSpace__eC__types__Instance * this, struct __eCNameSpace__eC__containers__IteratorPointer * _item)
{
__attribute__((unused)) struct __eCNameSpace__eC__types__CustomAVLTree * __eCPointer___eCNameSpace__eC__types__CustomAVLTree = (struct __eCNameSpace__eC__types__CustomAVLTree *)(this ? (((char *)this) + 0 + sizeof(struct __eCNameSpace__eC__types__Instance)) : 0);
struct __eCNameSpace__eC__types__AVLNode * item = (struct __eCNameSpace__eC__types__AVLNode *)_item;

(__extension__ ({
void (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, struct __eCNameSpace__eC__containers__IteratorPointer * it);

__internal_VirtualMethod = ((void (*)(struct __eCNameSpace__eC__types__Instance *, struct __eCNameSpace__eC__containers__IteratorPointer * it))__eCClass___eCNameSpace__eC__types__CustomAVLTree->_vTbl[__eCVMethodID___eCNameSpace__eC__containers__Container_Remove]);
__internal_VirtualMethod ? __internal_VirtualMethod(this, _item) : (void)1;
}));
__eCMethod___eCNameSpace__eC__types__CustomAVLTree_FreeKey(this, ((struct __eCNameSpace__eC__types__AVLNode *)((uintptr_t)(item))));
(((void (* )(void *  _class, void *  data))((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[3].__anon1.__anon1.dataTypeClass->_vTbl[__eCVMethodID_class_OnFree])(((struct __eCNameSpace__eC__types__Instance * )(char * )this)->_class->templateArgs[3].__anon1.__anon1.dataTypeClass, ((void * )((uintptr_t)(item)))), item = 0);
}

void __eCMethod___eCNameSpace__eC__types__CustomAVLTree_Free(struct __eCNameSpace__eC__types__Instance * this)
{
__attribute__((unused)) struct __eCNameSpace__eC__types__CustomAVLTree * __eCPointer___eCNameSpace__eC__types__CustomAVLTree = (struct __eCNameSpace__eC__types__CustomAVLTree *)(this ? (((char *)this) + 0 + sizeof(struct __eCNameSpace__eC__types__Instance)) : 0);
struct __eCNameSpace__eC__types__AVLNode * item;

item = ((struct __eCNameSpace__eC__types__AVLNode *)((uintptr_t)(__eCPointer___eCNameSpace__eC__types__CustomAVLTree->root)));
while(item)
{
if(((struct __eCNameSpace__eC__types__AVLNode *)((uintptr_t)(item)))->left)
{
struct __eCNameSpace__eC__types__AVLNode * left = ((struct __eCNameSpace__eC__types__AVLNode *)((uintptr_t)(item)))->left;

((struct __eCNameSpace__eC__types__AVLNode *)((uintptr_t)(item)))->left = (((void *)0));
item = ((struct __eCNameSpace__eC__types__AVLNode *)((uintptr_t)(left)));
}
else if(((struct __eCNameSpace__eC__types__AVLNode *)((uintptr_t)(item)))->right)
{
struct __eCNameSpace__eC__types__AVLNode * right = ((struct __eCNameSpace__eC__types__AVLNode *)((uintptr_t)(item)))->right;

((struct __eCNameSpace__eC__types__AVLNode *)((uintptr_t)(item)))->right = (((void *)0));
item = ((struct __eCNameSpace__eC__types__AVLNode *)((uintptr_t)(right)));
}
else
{
struct __eCNameSpace__eC__types__AVLNode * parent = ((struct __eCNameSpace__eC__types__AVLNode *)((uintptr_t)(item)))->parent;

__eCMethod___eCNameSpace__eC__types__CustomAVLTree_FreeKey(this, ((struct __eCNameSpace__eC__types__AVLNode *)((uintptr_t)(item))));
(((void (* )(void *  _class, void *  data))((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[3].__anon1.__anon1.dataTypeClass->_vTbl[__eCVMethodID_class_OnFree])(((struct __eCNameSpace__eC__types__Instance * )(char * )this)->_class->templateArgs[3].__anon1.__anon1.dataTypeClass, ((void * )((uintptr_t)(item)))), item = 0);
item = ((struct __eCNameSpace__eC__types__AVLNode *)((uintptr_t)(parent)));
}
}
__eCPointer___eCNameSpace__eC__types__CustomAVLTree->root = (((void *)0));
__eCPointer___eCNameSpace__eC__types__CustomAVLTree->count = 0;
}

struct __eCNameSpace__eC__types__AVLNode * __eCMethod___eCNameSpace__eC__types__CustomAVLTree_GetAtPosition(struct __eCNameSpace__eC__types__Instance * this, const uint64 pos, unsigned int create, unsigned int * justAdded)
{
__attribute__((unused)) struct __eCNameSpace__eC__types__CustomAVLTree * __eCPointer___eCNameSpace__eC__types__CustomAVLTree = (struct __eCNameSpace__eC__types__CustomAVLTree *)(this ? (((char *)this) + 0 + sizeof(struct __eCNameSpace__eC__types__Instance)) : 0);
struct __eCNameSpace__eC__types__AVLNode * addNode = (((void *)0));
int addSide = 0;
struct __eCNameSpace__eC__types__AVLNode * node = __eCPointer___eCNameSpace__eC__types__CustomAVLTree->root ? __eCMethod___eCNameSpace__eC__types__AVLNode_FindEx(((struct __eCNameSpace__eC__types__AVLNode *)((uintptr_t)(__eCPointer___eCNameSpace__eC__types__CustomAVLTree->root))), ((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[4].__anon1.__anon1.dataTypeClass, pos, &addNode, &addSide) : (((void *)0));

if(!node && create)
{
struct __eCNameSpace__eC__types__Class * Tclass = ((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[4].__anon1.__anon1.dataTypeClass;
void (* onCopy)(void *, void *, void *) = Tclass->_vTbl[__eCVMethodID_class_OnCopy];

if(((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[4].__anon1.__anon1.dataTypeClass->type == 1)
{
unsigned int size = sizeof(struct __eCNameSpace__eC__types__AVLNode);

if(((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[4].__anon1.__anon1.dataTypeClass->type == 1)
size += ((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[4].__anon1.__anon1.dataTypeClass->typeSize - sizeof node->key;
node = (struct __eCNameSpace__eC__types__AVLNode *)__eCNameSpace__eC__types__eSystem_New0(sizeof(unsigned char) * (size));
}
else
{
node = __extension__ ({
struct __eCNameSpace__eC__types__AVLNode * __eCInstance1 = __eCNameSpace__eC__types__eSystem_New0(sizeof(struct __eCNameSpace__eC__types__AVLNode));

__eCInstance1->key = pos, __eCInstance1;
});
}
if((Tclass->type == 1000 && !Tclass->byValueSystemClass) || Tclass->type == 2 || Tclass->type == 4 || Tclass->type == 3)
memcpy((unsigned char *)&node->key + __ENDIAN_PAD(Tclass->typeSize), (unsigned char *)((char *)&pos + __ENDIAN_PAD(((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[4].__anon1.__anon1.dataTypeClass->typeSize)) + __ENDIAN_PAD(Tclass->typeSize), Tclass->typeSize);
else
onCopy(Tclass, (unsigned char *)&node->key + __ENDIAN_PAD(sizeof(void *)), (void *)(uintptr_t)pos);
__eCMethod___eCNameSpace__eC__types__CustomAVLTree_AddEx(this, (uint64)(uintptr_t)node, (uint64)(uintptr_t)addNode, addSide);
if(justAdded)
*justAdded = 1;
}
return node;
}

void __eCMethod___eCNameSpace__eC__types__AVLNode_Free(struct __eCNameSpace__eC__types__AVLNode *  this);

void __eCMethod___eCNameSpace__eC__types__AVLNode_Free(struct __eCNameSpace__eC__types__AVLNode * this)
{
if(this->left)
__eCMethod___eCNameSpace__eC__types__AVLNode_Free(this->left);
if(this->right)
__eCMethod___eCNameSpace__eC__types__AVLNode_Free(this->right);
((this ? __extension__ ({
void * __eCPtrToDelete = (this);

__eCClass___eCNameSpace__eC__types__AVLNode->Destructor ? __eCClass___eCNameSpace__eC__types__AVLNode->Destructor((void *)__eCPtrToDelete) : 0, __eCClass___eCNameSpace__eC__containers__IteratorPointer->Destructor ? __eCClass___eCNameSpace__eC__containers__IteratorPointer->Destructor((void *)__eCPtrToDelete) : 0, __eCNameSpace__eC__types__eSystem_Delete(__eCPtrToDelete);
}) : 0), this = 0);
}

unsigned int __eCMethod___eCNameSpace__eC__types__AVLNode_Check(struct __eCNameSpace__eC__types__AVLNode *  this, struct __eCNameSpace__eC__types__Class *  Tclass);

unsigned int __eCMethod___eCNameSpace__eC__types__AVLNode_Check(struct __eCNameSpace__eC__types__AVLNode * this, struct __eCNameSpace__eC__types__Class * Tclass)
{
unsigned int valid = 1;
unsigned int offset = 0;
unsigned int reference = 0;
unsigned char * b;
int (* onCompare)(void *, void *, void *);
int t;
int leftHeight = this->left ? __eCProp___eCNameSpace__eC__types__AVLNode_Get_depthProp(this->left) + 1 : 0;
int rightHeight = this->right ? __eCProp___eCNameSpace__eC__types__AVLNode_Get_depthProp(this->right) + 1 : 0;
int diffHeight = rightHeight - leftHeight;

if(!Tclass)
Tclass = __eCClass_uint64;
t = Tclass->type;
onCompare = (void *)Tclass->_vTbl[__eCVMethodID_class_OnCompare];
if((t == 1000 && !Tclass->byValueSystemClass) || t == 2 || t == 4 || t == 3 || t == 1)
{
reference = 1;
offset = __ENDIAN_PAD((t == 1) ? sizeof(void *) : Tclass->typeSize);
}
if(this->left)
{
if(this->left->parent != this)
{
printf("Parent not set properly at node %d\n", (int)(uint64)(this->left->key));
valid = 0;
}
valid *= __eCMethod___eCNameSpace__eC__types__AVLNode_Check(this->left, Tclass);
}
if(this->right)
{
if(this->right->parent != this)
{
printf("Parent not set properly at node %d\n", (int)(uint64)(this->right->key));
valid = 0;
}
valid *= __eCMethod___eCNameSpace__eC__types__AVLNode_Check(this->right, Tclass);
}
if(this->depth != __eCProp___eCNameSpace__eC__types__AVLNode_Get_depthProp(this))
{
printf("Depth value at node %d (%d) doesn't match depth property (%d)\n", (int)(uint64)(this->key), this->depth, __eCProp___eCNameSpace__eC__types__AVLNode_Get_depthProp(this));
valid = 0;
}
if(diffHeight < -1 || diffHeight > 1)
{
valid = 0;
printf("Height difference is %d at node %d\n", diffHeight, (int)(uint64)(this->key));
}
if(diffHeight != __eCProp___eCNameSpace__eC__types__AVLNode_Get_balanceFactor(this))
{
valid = 0;
printf("Height difference %d doesn't match balance-factor of %d at node %d\n", diffHeight, __eCProp___eCNameSpace__eC__types__AVLNode_Get_balanceFactor(this), (int)(uint64)(this->key));
}
b = reference ? ((unsigned char *)&this->key + offset) : ((unsigned char *)(uintptr_t)(uint64)(this->key));
if(this->left)
{
unsigned char * a = reference ? ((unsigned char *)&this->left->key + offset) : ((unsigned char *)(uintptr_t)(uint64)(this->left->key));

if(onCompare(Tclass, a, b) > 0)
{
valid = 0;
printf("Node %d is *smaller* than left subtree %d\n", (int)(uint64)(this->key), (int)(uint64)(this->left->key));
}
}
if(this->right)
{
unsigned char * a = reference ? ((unsigned char *)&this->right->key + offset) : ((unsigned char *)(uintptr_t)(uint64)(this->right->key));

if(onCompare(Tclass, a, b) < 0)
{
valid = 0;
printf("Node %d is *greater* than right subtree %d\n", (int)(uint64)(this->key), (int)(uint64)(this->right->key));
}
}
return valid;
}

unsigned int __eCMethod___eCNameSpace__eC__types__CustomAVLTree_Check(struct __eCNameSpace__eC__types__Instance * this)
{
__attribute__((unused)) struct __eCNameSpace__eC__types__CustomAVLTree * __eCPointer___eCNameSpace__eC__types__CustomAVLTree = (struct __eCNameSpace__eC__types__CustomAVLTree *)(this ? (((char *)this) + 0 + sizeof(struct __eCNameSpace__eC__types__Instance)) : 0);

return __eCPointer___eCNameSpace__eC__types__CustomAVLTree->root ? __eCMethod___eCNameSpace__eC__types__AVLNode_Check(((struct __eCNameSpace__eC__types__AVLNode *)((uintptr_t)(__eCPointer___eCNameSpace__eC__types__CustomAVLTree->root))), ((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[4].__anon1.__anon1.dataTypeClass) : 1;
}

void __eCRegisterModule_CustomAVLTree(struct __eCNameSpace__eC__types__Instance * module)
{
struct __eCNameSpace__eC__types__ClassTemplateArgument __simpleStruct0 =
{

.__anon1 = {

.__anon1 = {
.dataTypeString = "uint64"
}
}
};
struct __eCNameSpace__eC__types__Class __attribute__((unused)) * class;

class = __eCNameSpace__eC__types__eSystem_RegisterClass(4, "eC::types::AddSide", "int", 0, 0, (void *)0, (void *)0, module, 2, 1);
if(((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application == ((struct __eCNameSpace__eC__types__Module *)(((char *)__thisModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->application && class)
__eCClass___eCNameSpace__eC__types__AddSide = class;
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "compare", 0);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "left", -1);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "right", 1);
class = __eCNameSpace__eC__types__eSystem_RegisterClass(5, "eC::types::AVLNode", "eC::types::IteratorPointer", sizeof(struct __eCNameSpace__eC__types__AVLNode), 0, (void *)0, (void *)0, module, 4, 1);
if(((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application == ((struct __eCNameSpace__eC__types__Module *)(((char *)__thisModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->application && class)
__eCClass___eCNameSpace__eC__types__AVLNode = class;
__eCNameSpace__eC__types__eClass_AddMethod(class, "Find", "thisclass Find(eC::types::Class Tclass, const T key)", __eCMethod___eCNameSpace__eC__types__AVLNode_Find, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "__eCPrivateData0", "byte[32]", 32, 1, 2);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "key", "T", 8, 8, 1);
__eCPropM___eCNameSpace__eC__types__AVLNode_prev = __eCNameSpace__eC__types__eClass_AddProperty(class, "prev", "thisclass", 0, __eCProp___eCNameSpace__eC__types__AVLNode_Get_prev, 1);
if(((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application == ((struct __eCNameSpace__eC__types__Module *)(((char *)__thisModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->application)
__eCProp___eCNameSpace__eC__types__AVLNode_prev = __eCPropM___eCNameSpace__eC__types__AVLNode_prev, __eCPropM___eCNameSpace__eC__types__AVLNode_prev = (void *)0;
__eCPropM___eCNameSpace__eC__types__AVLNode_next = __eCNameSpace__eC__types__eClass_AddProperty(class, "next", "thisclass", 0, __eCProp___eCNameSpace__eC__types__AVLNode_Get_next, 1);
if(((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application == ((struct __eCNameSpace__eC__types__Module *)(((char *)__thisModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->application)
__eCProp___eCNameSpace__eC__types__AVLNode_next = __eCPropM___eCNameSpace__eC__types__AVLNode_next, __eCPropM___eCNameSpace__eC__types__AVLNode_next = (void *)0;
__eCPropM___eCNameSpace__eC__types__AVLNode_minimum = __eCNameSpace__eC__types__eClass_AddProperty(class, "minimum", "thisclass", 0, __eCProp___eCNameSpace__eC__types__AVLNode_Get_minimum, 1);
if(((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application == ((struct __eCNameSpace__eC__types__Module *)(((char *)__thisModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->application)
__eCProp___eCNameSpace__eC__types__AVLNode_minimum = __eCPropM___eCNameSpace__eC__types__AVLNode_minimum, __eCPropM___eCNameSpace__eC__types__AVLNode_minimum = (void *)0;
__eCPropM___eCNameSpace__eC__types__AVLNode_maximum = __eCNameSpace__eC__types__eClass_AddProperty(class, "maximum", "thisclass", 0, __eCProp___eCNameSpace__eC__types__AVLNode_Get_maximum, 1);
if(((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application == ((struct __eCNameSpace__eC__types__Module *)(((char *)__thisModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->application)
__eCProp___eCNameSpace__eC__types__AVLNode_maximum = __eCPropM___eCNameSpace__eC__types__AVLNode_maximum, __eCPropM___eCNameSpace__eC__types__AVLNode_maximum = (void *)0;
__eCPropM___eCNameSpace__eC__types__AVLNode_count = __eCNameSpace__eC__types__eClass_AddProperty(class, "count", "int", 0, __eCProp___eCNameSpace__eC__types__AVLNode_Get_count, 1);
if(((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application == ((struct __eCNameSpace__eC__types__Module *)(((char *)__thisModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->application)
__eCProp___eCNameSpace__eC__types__AVLNode_count = __eCPropM___eCNameSpace__eC__types__AVLNode_count, __eCPropM___eCNameSpace__eC__types__AVLNode_count = (void *)0;
__eCPropM___eCNameSpace__eC__types__AVLNode_depthProp = __eCNameSpace__eC__types__eClass_AddProperty(class, "depthProp", "int", 0, __eCProp___eCNameSpace__eC__types__AVLNode_Get_depthProp, 1);
if(((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application == ((struct __eCNameSpace__eC__types__Module *)(((char *)__thisModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->application)
__eCProp___eCNameSpace__eC__types__AVLNode_depthProp = __eCPropM___eCNameSpace__eC__types__AVLNode_depthProp, __eCPropM___eCNameSpace__eC__types__AVLNode_depthProp = (void *)0;
__eCPropM___eCNameSpace__eC__types__AVLNode_balanceFactor = __eCNameSpace__eC__types__eClass_AddProperty(class, "balanceFactor", "int", 0, __eCProp___eCNameSpace__eC__types__AVLNode_Get_balanceFactor, 2);
if(((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application == ((struct __eCNameSpace__eC__types__Module *)(((char *)__thisModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->application)
__eCProp___eCNameSpace__eC__types__AVLNode_balanceFactor = __eCPropM___eCNameSpace__eC__types__AVLNode_balanceFactor, __eCPropM___eCNameSpace__eC__types__AVLNode_balanceFactor = (void *)0;
__eCNameSpace__eC__types__eClass_AddDataMember(class, (((void *)0)), (((void *)0)), 0, sizeof(void *) > 4 ? sizeof(void *) : 4, 2);
__eCNameSpace__eC__types__eClass_AddTemplateParameter(class, "T", 0, 0, (((void *)0)));
__eCNameSpace__eC__types__eClass_DoneAddingTemplateParameters(class);
if(class)
class->fixed = (unsigned int)1;
class = __eCNameSpace__eC__types__eSystem_RegisterClass(0, "eC::types::CustomAVLTree", "eC::types::Container<BT, I = KT>", sizeof(struct __eCNameSpace__eC__types__CustomAVLTree), 0, (void *)0, (void *)0, module, 4, 1);
if(((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application == ((struct __eCNameSpace__eC__types__Module *)(((char *)__thisModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->application && class)
__eCClass___eCNameSpace__eC__types__CustomAVLTree = class;
__eCNameSpace__eC__types__eClass_AddMethod(class, "GetFirst", 0, __eCMethod___eCNameSpace__eC__types__CustomAVLTree_GetFirst, 1);
__eCNameSpace__eC__types__eClass_AddMethod(class, "GetLast", 0, __eCMethod___eCNameSpace__eC__types__CustomAVLTree_GetLast, 1);
__eCNameSpace__eC__types__eClass_AddMethod(class, "GetPrev", 0, __eCMethod___eCNameSpace__eC__types__CustomAVLTree_GetPrev, 1);
__eCNameSpace__eC__types__eClass_AddMethod(class, "GetNext", 0, __eCMethod___eCNameSpace__eC__types__CustomAVLTree_GetNext, 1);
__eCNameSpace__eC__types__eClass_AddMethod(class, "GetData", 0, __eCMethod___eCNameSpace__eC__types__CustomAVLTree_GetData, 1);
__eCNameSpace__eC__types__eClass_AddMethod(class, "SetData", 0, __eCMethod___eCNameSpace__eC__types__CustomAVLTree_SetData, 1);
__eCNameSpace__eC__types__eClass_AddMethod(class, "GetAtPosition", 0, __eCMethod___eCNameSpace__eC__types__CustomAVLTree_GetAtPosition, 1);
__eCNameSpace__eC__types__eClass_AddMethod(class, "Add", 0, __eCMethod___eCNameSpace__eC__types__CustomAVLTree_Add, 1);
__eCNameSpace__eC__types__eClass_AddMethod(class, "Remove", 0, __eCMethod___eCNameSpace__eC__types__CustomAVLTree_Remove, 1);
__eCNameSpace__eC__types__eClass_AddMethod(class, "Find", 0, __eCMethod___eCNameSpace__eC__types__CustomAVLTree_Find, 1);
__eCNameSpace__eC__types__eClass_AddMethod(class, "Free", 0, __eCMethod___eCNameSpace__eC__types__CustomAVLTree_Free, 1);
__eCNameSpace__eC__types__eClass_AddMethod(class, "Delete", 0, __eCMethod___eCNameSpace__eC__types__CustomAVLTree_Delete, 1);
__eCNameSpace__eC__types__eClass_AddMethod(class, "Check", "bool Check()", __eCMethod___eCNameSpace__eC__types__CustomAVLTree_Check, 1);
__eCNameSpace__eC__types__eClass_AddMethod(class, "FreeKey", "void FreeKey(eC::types::AVLNode<KT> item)", __eCMethod___eCNameSpace__eC__types__CustomAVLTree_FreeKey, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "root", "BT", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "count", "int", 4, 4, 1);
__eCNameSpace__eC__types__eClass_AddTemplateParameter(class, "BT", 0, "eC::types::AVLNode<KT>", (((void *)0)));
__eCNameSpace__eC__types__eClass_AddTemplateParameter(class, "KT", 0, 0, &__simpleStruct0);
__eCNameSpace__eC__types__eClass_DoneAddingTemplateParameters(class);
if(class)
class->fixed = (unsigned int)1;
}

