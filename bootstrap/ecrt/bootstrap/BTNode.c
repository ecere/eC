/* Code generated from eC source file: BTNode.ec */
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

extern int vsprintf(char * , const char * , __builtin_va_list);

extern size_t strlen(const char * );

extern int strcmp(const char * , const char * );

extern int strncmp(const char * , const char * , size_t n);

extern char *  strcat(char * , const char * );

extern int sprintf(char * , const char * , ...);

extern int printf(const char * , ...);

struct __eCNameSpace__eC__types__GlobalFunction;

void __eCNameSpace__eC__files__strcatf(char * string, const char * format, ...)
{
va_list args;

__builtin_va_start(args, format);
vsprintf(string + strlen(string), format, args);
__builtin_va_end(args);
}

struct __eCNameSpace__eC__types__Property;

static __attribute__((unused)) struct __eCNameSpace__eC__types__Property * __eCProp___eCNameSpace__eC__containers__BTNode_prev, * __eCPropM___eCNameSpace__eC__containers__BTNode_prev;

static __attribute__((unused)) struct __eCNameSpace__eC__types__Property * __eCProp___eCNameSpace__eC__containers__BTNode_next, * __eCPropM___eCNameSpace__eC__containers__BTNode_next;

static __attribute__((unused)) struct __eCNameSpace__eC__types__Property * __eCProp___eCNameSpace__eC__containers__BTNode_minimum, * __eCPropM___eCNameSpace__eC__containers__BTNode_minimum;

static __attribute__((unused)) struct __eCNameSpace__eC__types__Property * __eCProp___eCNameSpace__eC__containers__BTNode_maximum, * __eCPropM___eCNameSpace__eC__containers__BTNode_maximum;

static __attribute__((unused)) struct __eCNameSpace__eC__types__Property * __eCProp___eCNameSpace__eC__containers__BTNode_count, * __eCPropM___eCNameSpace__eC__containers__BTNode_count;

static __attribute__((unused)) struct __eCNameSpace__eC__types__Property * __eCProp___eCNameSpace__eC__containers__BTNode_depthProp, * __eCPropM___eCNameSpace__eC__containers__BTNode_depthProp;

static __attribute__((unused)) struct __eCNameSpace__eC__types__Property * __eCProp___eCNameSpace__eC__containers__BTNode_balanceFactor, * __eCPropM___eCNameSpace__eC__containers__BTNode_balanceFactor;

struct __eCNameSpace__eC__containers__BTNode;

struct __eCNameSpace__eC__containers__BTNode
{
uintptr_t key;
struct __eCNameSpace__eC__containers__BTNode * parent, * left, * right;
int depth;
} eC_gcc_struct;

struct __eCNameSpace__eC__containers__BTNode * __eCProp___eCNameSpace__eC__containers__BTNode_Get_minimum(struct __eCNameSpace__eC__containers__BTNode * this)
{
while(this->left)
this = this->left;
return this;
}

struct __eCNameSpace__eC__containers__BTNode * __eCProp___eCNameSpace__eC__containers__BTNode_Get_maximum(struct __eCNameSpace__eC__containers__BTNode * this)
{
while(this->right)
this = this->right;
return this;
}

struct __eCNameSpace__eC__containers__BTNode * __eCMethod___eCNameSpace__eC__containers__BTNode_FindString(struct __eCNameSpace__eC__containers__BTNode * this, const char * key)
{
while(this)
{
int result;

if(key && this->key)
result = strcmp(key, (const char *)this->key);
else if(key && !this->key)
result = 1;
else if(!key && this->key)
result = -1;
else
result = 0;
if(result < 0)
this = this->left;
else if(result > 0)
this = this->right;
else
break;
}
return this;
}

struct __eCNameSpace__eC__containers__BTNode * __eCMethod___eCNameSpace__eC__containers__BTNode_FindPrefix(struct __eCNameSpace__eC__containers__BTNode * this, const char * key)
{
struct __eCNameSpace__eC__containers__BTNode * subString = (((void *)0));
int len = key ? strlen(key) : 0;

while(this)
{
int result;

if(key && this->key)
result = strcmp(key, (const char *)this->key);
else if(key && !this->key)
result = 1;
else if(!key && this->key)
result = -1;
else
result = 0;
if(result < 0)
{
if(!strncmp(key, (const char *)this->key, len))
subString = this;
this = this->left;
}
else if(result > 0)
this = this->right;
else
{
subString = this;
break;
}
}
return subString;
}

void __eCMethod___eCNameSpace__eC__containers__BTNode_RemoveSwap(struct __eCNameSpace__eC__containers__BTNode * this, struct __eCNameSpace__eC__containers__BTNode * swap)
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
struct __eCNameSpace__eC__containers__BTNode * n;

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
{
swap->left = this->left;
if(this->left)
this->left->parent = swap;
}
{
swap->right = this->right;
if(this->right)
this->right->parent = swap;
}
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

int __eCProp___eCNameSpace__eC__containers__BTNode_Get_balanceFactor(struct __eCNameSpace__eC__containers__BTNode * this)
{
int leftDepth = this->left ? (this->left->depth + 1) : 0;
int rightDepth = this->right ? (this->right->depth + 1) : 0;

return rightDepth - leftDepth;
}

void __eCMethod___eCNameSpace__eC__containers__BTNode_SingleRotateRight(struct __eCNameSpace__eC__containers__BTNode * this)
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
struct __eCNameSpace__eC__containers__BTNode * n;

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

void __eCMethod___eCNameSpace__eC__containers__BTNode_SingleRotateLeft(struct __eCNameSpace__eC__containers__BTNode * this)
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
struct __eCNameSpace__eC__containers__BTNode * n;

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

int __eCProp___eCNameSpace__eC__containers__BTNode_Get_depthProp(struct __eCNameSpace__eC__containers__BTNode * this);

struct __eCNameSpace__eC__containers__BTNode * __eCProp___eCNameSpace__eC__containers__BTNode_Get_maximum(struct __eCNameSpace__eC__containers__BTNode * this);

struct __eCNameSpace__eC__containers__BTNode * __eCProp___eCNameSpace__eC__containers__BTNode_Get_minimum(struct __eCNameSpace__eC__containers__BTNode * this);

int __eCProp___eCNameSpace__eC__containers__BTNode_Get_count(struct __eCNameSpace__eC__containers__BTNode * this);

int __eCProp___eCNameSpace__eC__containers__BTNode_Get_balanceFactor(struct __eCNameSpace__eC__containers__BTNode * this);

void __eCMethod___eCNameSpace__eC__containers__BTNode_DoubleRotateRight(struct __eCNameSpace__eC__containers__BTNode * this)
{
__eCMethod___eCNameSpace__eC__containers__BTNode_SingleRotateLeft(this->left);
__eCMethod___eCNameSpace__eC__containers__BTNode_SingleRotateRight(this);
}

void __eCMethod___eCNameSpace__eC__containers__BTNode_DoubleRotateLeft(struct __eCNameSpace__eC__containers__BTNode * this)
{
__eCMethod___eCNameSpace__eC__containers__BTNode_SingleRotateRight(this->right);
__eCMethod___eCNameSpace__eC__containers__BTNode_SingleRotateLeft(this);
}

int __eCProp___eCNameSpace__eC__containers__BTNode_Get_depthProp(struct __eCNameSpace__eC__containers__BTNode * this)
{
int leftDepth = this->left ? (__eCProp___eCNameSpace__eC__containers__BTNode_Get_depthProp(this->left) + 1) : 0;
int rightDepth = this->right ? (__eCProp___eCNameSpace__eC__containers__BTNode_Get_depthProp(this->right) + 1) : 0;

return ((leftDepth > rightDepth) ? leftDepth : rightDepth);
}

struct __eCNameSpace__eC__containers__BTNode * __eCProp___eCNameSpace__eC__containers__BTNode_Get_prev(struct __eCNameSpace__eC__containers__BTNode * this)
{
if(this->left)
return __eCProp___eCNameSpace__eC__containers__BTNode_Get_maximum(this->left);
while(this)
{
if(this->parent && this == this->parent->right)
return this->parent;
else
this = this->parent;
}
return this;
}

struct __eCNameSpace__eC__containers__BTNode * __eCProp___eCNameSpace__eC__containers__BTNode_Get_next(struct __eCNameSpace__eC__containers__BTNode * this)
{
struct __eCNameSpace__eC__containers__BTNode * right = this->right;

if(right)
return __eCProp___eCNameSpace__eC__containers__BTNode_Get_minimum(right);
while(this)
{
struct __eCNameSpace__eC__containers__BTNode * parent = this->parent;

if(parent && this == parent->left)
return parent;
else
this = parent;
}
return (((void *)0));
}

int __eCProp___eCNameSpace__eC__containers__BTNode_Get_count(struct __eCNameSpace__eC__containers__BTNode * this)
{
return 1 + (this->left ? __eCProp___eCNameSpace__eC__containers__BTNode_Get_count(this->left) : 0) + (this->right ? __eCProp___eCNameSpace__eC__containers__BTNode_Get_count(this->right) : 0);
}

struct __eCNameSpace__eC__containers__BTNode * __eCMethod___eCNameSpace__eC__containers__BTNode_Rebalance(struct __eCNameSpace__eC__containers__BTNode * this)
{
while(1)
{
int factor = __eCProp___eCNameSpace__eC__containers__BTNode_Get_balanceFactor(this);

if(factor < -1)
{
if(__eCProp___eCNameSpace__eC__containers__BTNode_Get_balanceFactor(this->left) == 1)
__eCMethod___eCNameSpace__eC__containers__BTNode_DoubleRotateRight(this);
else
__eCMethod___eCNameSpace__eC__containers__BTNode_SingleRotateRight(this);
}
else if(factor > 1)
{
if(__eCProp___eCNameSpace__eC__containers__BTNode_Get_balanceFactor(this->right) == -1)
__eCMethod___eCNameSpace__eC__containers__BTNode_DoubleRotateLeft(this);
else
__eCMethod___eCNameSpace__eC__containers__BTNode_SingleRotateLeft(this);
}
if(this->parent)
this = this->parent;
else
return this;
}
}

struct __eCNameSpace__eC__containers__BTNode * __eCMethod___eCNameSpace__eC__containers__BTNode_RemoveSwapLeft(struct __eCNameSpace__eC__containers__BTNode * this)
{
struct __eCNameSpace__eC__containers__BTNode * swap = this->left ? __eCProp___eCNameSpace__eC__containers__BTNode_Get_maximum(this->left) : this->right;
struct __eCNameSpace__eC__containers__BTNode * swapParent = (((void *)0));

if(swap)
{
swapParent = swap->parent;
__eCMethod___eCNameSpace__eC__containers__BTNode_RemoveSwap(this, swap);
}
if(this->parent)
{
if(this == this->parent->left)
this->parent->left = (((void *)0));
else if(this == this->parent->right)
this->parent->right = (((void *)0));
}
{
struct __eCNameSpace__eC__containers__BTNode * n;

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
return __eCMethod___eCNameSpace__eC__containers__BTNode_Rebalance(swapParent);
else if(swap)
return __eCMethod___eCNameSpace__eC__containers__BTNode_Rebalance(swap);
else if(this->parent)
return __eCMethod___eCNameSpace__eC__containers__BTNode_Rebalance(this->parent);
else
return (((void *)0));
}

struct __eCNameSpace__eC__containers__BTNode * __eCMethod___eCNameSpace__eC__containers__BTNode_RemoveSwapRight(struct __eCNameSpace__eC__containers__BTNode * this)
{
struct __eCNameSpace__eC__containers__BTNode * result;
struct __eCNameSpace__eC__containers__BTNode * swap = this->right ? __eCProp___eCNameSpace__eC__containers__BTNode_Get_minimum(this->right) : this->left;
struct __eCNameSpace__eC__containers__BTNode * swapParent = (((void *)0));

if(swap)
{
swapParent = swap->parent;
__eCMethod___eCNameSpace__eC__containers__BTNode_RemoveSwap(this, swap);
}
if(this->parent)
{
if(this == this->parent->left)
this->parent->left = (((void *)0));
else if(this == this->parent->right)
this->parent->right = (((void *)0));
}
{
struct __eCNameSpace__eC__containers__BTNode * n;

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
result = __eCMethod___eCNameSpace__eC__containers__BTNode_Rebalance(swapParent);
else if(swap)
result = __eCMethod___eCNameSpace__eC__containers__BTNode_Rebalance(swap);
else if(this->parent)
result = __eCMethod___eCNameSpace__eC__containers__BTNode_Rebalance(this->parent);
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

extern void *  __eCNameSpace__eC__types__eInstance_New(struct __eCNameSpace__eC__types__Class * _class);

extern void __eCNameSpace__eC__types__eEnum_AddFixedValue(struct __eCNameSpace__eC__types__Class * _class, const char *  string, long long value);

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

struct __eCNameSpace__eC__files__StringBTNode;

struct __eCNameSpace__eC__files__StringBTNode
{
char * key;
struct __eCNameSpace__eC__files__StringBTNode * parent, * left, * right;
int depth;
} eC_gcc_struct;

struct __eCNameSpace__eC__files__BinaryTree;

struct __eCNameSpace__eC__files__BinaryTree
{
struct __eCNameSpace__eC__containers__BTNode * root;
int count;
int (*  CompareKey)(struct __eCNameSpace__eC__files__BinaryTree * tree, uintptr_t a, uintptr_t b);
void (*  FreeKey)(void *  key);
} eC_gcc_struct;

unsigned int __eCMethod___eCNameSpace__eC__containers__BTNode_Add(struct __eCNameSpace__eC__containers__BTNode * this, struct __eCNameSpace__eC__files__BinaryTree * tree, struct __eCNameSpace__eC__containers__BTNode * node)
{
uintptr_t newKey = node->key;

while(1)
{
int result = tree->CompareKey(tree, newKey, this->key);

if(!result)
{
return 0;
}
else if(result > 0)
{
if(this->right)
this = this->right;
else
{
node->parent = this;
this->right = node;
node->depth = 0;
{
struct __eCNameSpace__eC__containers__BTNode * n;

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
}
else
{
if(this->left)
this = this->left;
else
{
node->parent = this;
this->left = node;
node->depth = 0;
{
struct __eCNameSpace__eC__containers__BTNode * n;

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
}
}
}

struct __eCNameSpace__eC__containers__BTNode * __eCMethod___eCNameSpace__eC__containers__BTNode_Find(struct __eCNameSpace__eC__containers__BTNode * this, struct __eCNameSpace__eC__files__BinaryTree * tree, uintptr_t key)
{
while(this)
{
int result = tree->CompareKey(tree, key, this->key);

if(result < 0)
this = this->left;
else if(result > 0)
this = this->right;
else
break;
}
return this;
}

unsigned int __eCMethod___eCNameSpace__eC__containers__BTNode_FindNode(struct __eCNameSpace__eC__containers__BTNode *  this, struct __eCNameSpace__eC__containers__BTNode *  node);

unsigned int __eCMethod___eCNameSpace__eC__containers__BTNode_FindNode(struct __eCNameSpace__eC__containers__BTNode * this, struct __eCNameSpace__eC__containers__BTNode * node)
{
if(this == node)
return 1;
else if(this->left && __eCMethod___eCNameSpace__eC__containers__BTNode_FindNode(this->left, node))
return 1;
else if(this->right && __eCMethod___eCNameSpace__eC__containers__BTNode_FindNode(this->right, node))
return 1;
return 0;
}

struct __eCNameSpace__eC__containers__BTNode *  __eCMethod___eCNameSpace__eC__containers__BTNode_FindAll(struct __eCNameSpace__eC__containers__BTNode *  this, uintptr_t key);

struct __eCNameSpace__eC__containers__BTNode * __eCMethod___eCNameSpace__eC__containers__BTNode_FindAll(struct __eCNameSpace__eC__containers__BTNode * this, uintptr_t key)
{
struct __eCNameSpace__eC__containers__BTNode * result = (((void *)0));

if(this->key == key)
result = this;
if(!result && this->left)
result = __eCMethod___eCNameSpace__eC__containers__BTNode_FindAll(this->left, key);
if(!result && this->right)
result = __eCMethod___eCNameSpace__eC__containers__BTNode_FindAll(this->right, key);
return result;
}

char *  __eCMethod___eCNameSpace__eC__containers__BTNode_Print(struct __eCNameSpace__eC__containers__BTNode *  this, char *  output, int tps);

void __eCMethod___eCNameSpace__eC__containers__BTNode_PrintDepth(struct __eCNameSpace__eC__containers__BTNode *  this, char *  output, int wantedDepth, int curDepth, int maxDepth, unsigned int last);

char * __eCMethod___eCNameSpace__eC__containers__BTNode_Print(struct __eCNameSpace__eC__containers__BTNode * this, char * output, int tps)
{
switch(tps)
{
case 0:
case 2:
case 1:
{
if(tps == 2)
__eCNameSpace__eC__files__strcatf(output, "%d ", this->key);
if(this->left)
__eCMethod___eCNameSpace__eC__containers__BTNode_Print(this->left, output, tps);
if(tps == 0)
__eCNameSpace__eC__files__strcatf(output, "%d ", this->key);
if(this->right)
__eCMethod___eCNameSpace__eC__containers__BTNode_Print(this->right, output, tps);
if(tps == 1)
__eCNameSpace__eC__files__strcatf(output, "%d ", this->key);
return output;
}
case 3:
{
int maxDepth = this->depth;
int curDepth;

for(curDepth = 0; curDepth <= maxDepth; curDepth++)
{
int c;

for(c = 0; c < ((1 << (maxDepth - curDepth)) - 1) * 4 / 2; c++)
strcat(output, " ");
__eCMethod___eCNameSpace__eC__containers__BTNode_PrintDepth(this, output, curDepth, 0, maxDepth, 1);
strcat(output, "\n");
}
return output;
}
}
return (((void *)0));
}

void __eCMethod___eCNameSpace__eC__containers__BTNode_PrintDepth(struct __eCNameSpace__eC__containers__BTNode * this, char * output, int wantedDepth, int curDepth, int maxDepth, unsigned int last)
{
int c;

if(wantedDepth == curDepth)
{
char nodeString[10] = "";
int len;

if(this)
sprintf(nodeString, "%d", (int)this->key);
len = strlen(nodeString);
for(c = 0; c < (4 - len) / 2; c++)
strcat(output, " ");
len += c;
strcat(output, nodeString);
for(c = len; c < 4; c++)
strcat(output, " ");
if(curDepth && !last)
{
for(c = 0; c < ((1 << (maxDepth - curDepth)) - 1) * 4; c++)
strcat(output, " ");
}
}
else if(curDepth <= maxDepth)
{
__eCMethod___eCNameSpace__eC__containers__BTNode_PrintDepth((this ? this->left : (struct __eCNameSpace__eC__containers__BTNode *)(((void *)0))), output, wantedDepth, curDepth + 1, maxDepth, last && this && !this->right);
__eCMethod___eCNameSpace__eC__containers__BTNode_PrintDepth((this ? this->right : (struct __eCNameSpace__eC__containers__BTNode *)(((void *)0))), output, wantedDepth, curDepth + 1, maxDepth, last);
}
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

static struct __eCNameSpace__eC__types__Class * __eCClass___eCNameSpace__eC__files__TreePrintStyle;

static struct __eCNameSpace__eC__types__Class * __eCClass___eCNameSpace__eC__containers__BTNode;

static struct __eCNameSpace__eC__types__Class * __eCClass___eCNameSpace__eC__files__StringBTNode;

extern struct __eCNameSpace__eC__types__Class * __eCClass_bool;

extern struct __eCNameSpace__eC__types__Class * __eCClass_uint;

extern struct __eCNameSpace__eC__types__Class * __eCClass_String;

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

void __eCMethod___eCNameSpace__eC__containers__BTNode_OnSerialize(struct __eCNameSpace__eC__types__Class * class, struct __eCNameSpace__eC__containers__BTNode * this, struct __eCNameSpace__eC__types__Instance * channel)
{
if((struct __eCNameSpace__eC__containers__BTNode *)this)
{
unsigned int __internalValue000;
unsigned int truth = 1;

__eCMethod___eCNameSpace__eC__types__IOChannel_Serialize(channel, __eCClass_bool, (void *)&truth);
__eCMethod___eCNameSpace__eC__types__IOChannel_Serialize(channel, __eCClass_uint, __extension__ ({
__internalValue000 = (unsigned int)this->key;
(void *)&__internalValue000;
}));
__eCMethod___eCNameSpace__eC__types__IOChannel_Serialize(channel, __eCClass___eCNameSpace__eC__containers__BTNode, this->left);
__eCMethod___eCNameSpace__eC__types__IOChannel_Serialize(channel, __eCClass___eCNameSpace__eC__containers__BTNode, this->right);
}
else
{
unsigned int nothing = 0;

__eCMethod___eCNameSpace__eC__types__IOChannel_Serialize(channel, __eCClass_uint, (void *)&nothing);
}
}

void __eCMethod___eCNameSpace__eC__containers__BTNode_OnUnserialize(struct __eCNameSpace__eC__types__Class * class, struct __eCNameSpace__eC__containers__BTNode ** this, struct __eCNameSpace__eC__types__Instance * channel)
{
unsigned int truth;

__eCMethod___eCNameSpace__eC__types__IOChannel_Unserialize(channel, __eCClass_bool, (void *)&truth);
if(truth)
{
(*this) = __eCNameSpace__eC__types__eInstance_New(__eCClass___eCNameSpace__eC__containers__BTNode);
{
unsigned int k;

__eCMethod___eCNameSpace__eC__types__IOChannel_Unserialize(channel, __eCClass_uint, (void *)&k);
(*this)->key = k;
}
__eCMethod___eCNameSpace__eC__types__IOChannel_Unserialize(channel, __eCClass___eCNameSpace__eC__containers__BTNode, (void *)&(*this)->left);
if((*this)->left)
{
(*this)->left->parent = *(struct __eCNameSpace__eC__containers__BTNode **)this;
}
__eCMethod___eCNameSpace__eC__types__IOChannel_Unserialize(channel, __eCClass___eCNameSpace__eC__containers__BTNode, (void *)&(*this)->right);
if((*this)->right)
{
(*this)->right->parent = *(struct __eCNameSpace__eC__containers__BTNode **)this;
}
(*this)->depth = __eCProp___eCNameSpace__eC__containers__BTNode_Get_depthProp((*(struct __eCNameSpace__eC__containers__BTNode **)this));
}
else
(*this) = (((void *)0));
}

void __eCMethod___eCNameSpace__eC__containers__StringBTNode_OnSerialize(struct __eCNameSpace__eC__types__Class * class, struct __eCNameSpace__eC__files__StringBTNode * this, struct __eCNameSpace__eC__types__Instance * channel)
{
if((struct __eCNameSpace__eC__files__StringBTNode *)this)
{
unsigned int truth = 1;

__eCMethod___eCNameSpace__eC__types__IOChannel_Serialize(channel, __eCClass_bool, (void *)&truth);
__eCMethod___eCNameSpace__eC__types__IOChannel_Serialize(channel, __eCClass_String, this->key);
__eCMethod___eCNameSpace__eC__types__IOChannel_Serialize(channel, __eCClass___eCNameSpace__eC__files__StringBTNode, this->left);
__eCMethod___eCNameSpace__eC__types__IOChannel_Serialize(channel, __eCClass___eCNameSpace__eC__files__StringBTNode, this->right);
}
else
{
unsigned int nothing = 0;

__eCMethod___eCNameSpace__eC__types__IOChannel_Serialize(channel, __eCClass_uint, (void *)&nothing);
}
}

void __eCMethod___eCNameSpace__eC__containers__StringBTNode_OnUnserialize(struct __eCNameSpace__eC__types__Class * class, struct __eCNameSpace__eC__files__StringBTNode ** this, struct __eCNameSpace__eC__types__Instance * channel)
{
unsigned int truth;

__eCMethod___eCNameSpace__eC__types__IOChannel_Unserialize(channel, __eCClass_bool, (void *)&truth);
if(truth)
{
(*this) = __eCNameSpace__eC__types__eSystem_New0(sizeof(struct __eCNameSpace__eC__files__StringBTNode));
__eCMethod___eCNameSpace__eC__types__IOChannel_Unserialize(channel, __eCClass_String, (void *)&(*this)->key);
__eCMethod___eCNameSpace__eC__types__IOChannel_Unserialize(channel, __eCClass___eCNameSpace__eC__files__StringBTNode, (void *)&(*this)->left);
if((*this)->left)
{
(*this)->left->parent = *(struct __eCNameSpace__eC__files__StringBTNode **)this;
}
__eCMethod___eCNameSpace__eC__types__IOChannel_Unserialize(channel, __eCClass___eCNameSpace__eC__files__StringBTNode, (void *)&(*this)->right);
if((*this)->right)
{
(*this)->right->parent = *(struct __eCNameSpace__eC__files__StringBTNode **)this;
}
(*this)->depth = __eCProp___eCNameSpace__eC__containers__BTNode_Get_depthProp(((struct __eCNameSpace__eC__containers__BTNode *)*(struct __eCNameSpace__eC__files__StringBTNode **)this));
}
else
(*this) = (((void *)0));
}

void __eCUnregisterModule_BTNode(struct __eCNameSpace__eC__types__Instance * module)
{

__eCPropM___eCNameSpace__eC__containers__BTNode_prev = (void *)0;
__eCPropM___eCNameSpace__eC__containers__BTNode_next = (void *)0;
__eCPropM___eCNameSpace__eC__containers__BTNode_minimum = (void *)0;
__eCPropM___eCNameSpace__eC__containers__BTNode_maximum = (void *)0;
__eCPropM___eCNameSpace__eC__containers__BTNode_count = (void *)0;
__eCPropM___eCNameSpace__eC__containers__BTNode_depthProp = (void *)0;
__eCPropM___eCNameSpace__eC__containers__BTNode_balanceFactor = (void *)0;
}

void __eCRegisterModule_BTNode(struct __eCNameSpace__eC__types__Instance * module)
{
struct __eCNameSpace__eC__types__Class __attribute__((unused)) * class;

class = __eCNameSpace__eC__types__eSystem_RegisterClass(4, "eC::files::TreePrintStyle", 0, 0, 0, (void *)0, (void *)0, module, 4, 1);
if(((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application == ((struct __eCNameSpace__eC__types__Module *)(((char *)__thisModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->application && class)
__eCClass___eCNameSpace__eC__files__TreePrintStyle = class;
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "inOrder", 0);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "postOrder", 1);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "preOrder", 2);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "depthOrder", 3);
__eCNameSpace__eC__types__eSystem_RegisterFunction("eC::files::strcatf", "void eC::files::strcatf(char * string, const char * format, ...)", __eCNameSpace__eC__files__strcatf, module, 4);
class = __eCNameSpace__eC__types__eSystem_RegisterClass(5, "eC::files::BTNode", 0, sizeof(struct __eCNameSpace__eC__containers__BTNode), 0, (void *)0, (void *)0, module, 4, 1);
if(((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application == ((struct __eCNameSpace__eC__types__Module *)(((char *)__thisModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->application && class)
__eCClass___eCNameSpace__eC__containers__BTNode = class;
__eCNameSpace__eC__types__eClass_AddMethod(class, "OnSerialize", 0, __eCMethod___eCNameSpace__eC__containers__BTNode_OnSerialize, 1);
__eCNameSpace__eC__types__eClass_AddMethod(class, "OnUnserialize", 0, __eCMethod___eCNameSpace__eC__containers__BTNode_OnUnserialize, 1);
__eCNameSpace__eC__types__eClass_AddMethod(class, "FindPrefix", "eC::files::BTNode FindPrefix(const char * key)", __eCMethod___eCNameSpace__eC__containers__BTNode_FindPrefix, 1);
__eCNameSpace__eC__types__eClass_AddMethod(class, "FindString", "eC::files::BTNode FindString(const char * key)", __eCMethod___eCNameSpace__eC__containers__BTNode_FindString, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "key", "uintptr", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "parent", "eC::files::BTNode", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "left", "eC::files::BTNode", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "right", "eC::files::BTNode", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "depth", "int", 4, 4, 1);
__eCPropM___eCNameSpace__eC__containers__BTNode_prev = __eCNameSpace__eC__types__eClass_AddProperty(class, "prev", "eC::files::BTNode", 0, __eCProp___eCNameSpace__eC__containers__BTNode_Get_prev, 1);
if(((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application == ((struct __eCNameSpace__eC__types__Module *)(((char *)__thisModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->application)
__eCProp___eCNameSpace__eC__containers__BTNode_prev = __eCPropM___eCNameSpace__eC__containers__BTNode_prev, __eCPropM___eCNameSpace__eC__containers__BTNode_prev = (void *)0;
__eCPropM___eCNameSpace__eC__containers__BTNode_next = __eCNameSpace__eC__types__eClass_AddProperty(class, "next", "eC::files::BTNode", 0, __eCProp___eCNameSpace__eC__containers__BTNode_Get_next, 1);
if(((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application == ((struct __eCNameSpace__eC__types__Module *)(((char *)__thisModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->application)
__eCProp___eCNameSpace__eC__containers__BTNode_next = __eCPropM___eCNameSpace__eC__containers__BTNode_next, __eCPropM___eCNameSpace__eC__containers__BTNode_next = (void *)0;
__eCPropM___eCNameSpace__eC__containers__BTNode_minimum = __eCNameSpace__eC__types__eClass_AddProperty(class, "minimum", "eC::files::BTNode", 0, __eCProp___eCNameSpace__eC__containers__BTNode_Get_minimum, 1);
if(((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application == ((struct __eCNameSpace__eC__types__Module *)(((char *)__thisModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->application)
__eCProp___eCNameSpace__eC__containers__BTNode_minimum = __eCPropM___eCNameSpace__eC__containers__BTNode_minimum, __eCPropM___eCNameSpace__eC__containers__BTNode_minimum = (void *)0;
__eCPropM___eCNameSpace__eC__containers__BTNode_maximum = __eCNameSpace__eC__types__eClass_AddProperty(class, "maximum", "eC::files::BTNode", 0, __eCProp___eCNameSpace__eC__containers__BTNode_Get_maximum, 1);
if(((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application == ((struct __eCNameSpace__eC__types__Module *)(((char *)__thisModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->application)
__eCProp___eCNameSpace__eC__containers__BTNode_maximum = __eCPropM___eCNameSpace__eC__containers__BTNode_maximum, __eCPropM___eCNameSpace__eC__containers__BTNode_maximum = (void *)0;
__eCPropM___eCNameSpace__eC__containers__BTNode_count = __eCNameSpace__eC__types__eClass_AddProperty(class, "count", "int", 0, __eCProp___eCNameSpace__eC__containers__BTNode_Get_count, 1);
if(((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application == ((struct __eCNameSpace__eC__types__Module *)(((char *)__thisModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->application)
__eCProp___eCNameSpace__eC__containers__BTNode_count = __eCPropM___eCNameSpace__eC__containers__BTNode_count, __eCPropM___eCNameSpace__eC__containers__BTNode_count = (void *)0;
__eCPropM___eCNameSpace__eC__containers__BTNode_depthProp = __eCNameSpace__eC__types__eClass_AddProperty(class, "depthProp", "int", 0, __eCProp___eCNameSpace__eC__containers__BTNode_Get_depthProp, 1);
if(((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application == ((struct __eCNameSpace__eC__types__Module *)(((char *)__thisModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->application)
__eCProp___eCNameSpace__eC__containers__BTNode_depthProp = __eCPropM___eCNameSpace__eC__containers__BTNode_depthProp, __eCPropM___eCNameSpace__eC__containers__BTNode_depthProp = (void *)0;
__eCPropM___eCNameSpace__eC__containers__BTNode_balanceFactor = __eCNameSpace__eC__types__eClass_AddProperty(class, "balanceFactor", "int", 0, __eCProp___eCNameSpace__eC__containers__BTNode_Get_balanceFactor, 2);
if(((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application == ((struct __eCNameSpace__eC__types__Module *)(((char *)__thisModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->application)
__eCProp___eCNameSpace__eC__containers__BTNode_balanceFactor = __eCPropM___eCNameSpace__eC__containers__BTNode_balanceFactor, __eCPropM___eCNameSpace__eC__containers__BTNode_balanceFactor = (void *)0;
if(class)
class->fixed = (unsigned int)1;
class = __eCNameSpace__eC__types__eSystem_RegisterClass(5, "eC::files::StringBTNode", 0, sizeof(struct __eCNameSpace__eC__files__StringBTNode), 0, (void *)0, (void *)0, module, 4, 1);
if(((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application == ((struct __eCNameSpace__eC__types__Module *)(((char *)__thisModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->application && class)
__eCClass___eCNameSpace__eC__files__StringBTNode = class;
__eCNameSpace__eC__types__eClass_AddMethod(class, "OnSerialize", 0, __eCMethod___eCNameSpace__eC__containers__StringBTNode_OnSerialize, 1);
__eCNameSpace__eC__types__eClass_AddMethod(class, "OnUnserialize", 0, __eCMethod___eCNameSpace__eC__containers__StringBTNode_OnUnserialize, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "key", "String", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "parent", "eC::files::StringBTNode", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "left", "eC::files::StringBTNode", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "right", "eC::files::StringBTNode", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "depth", "int", 4, 4, 1);
if(class)
class->fixed = (unsigned int)1;
}

unsigned int __eCMethod___eCNameSpace__eC__containers__BTNode_Check(struct __eCNameSpace__eC__containers__BTNode *  this, struct __eCNameSpace__eC__files__BinaryTree *  tree);

unsigned int __eCMethod___eCNameSpace__eC__containers__BTNode_Check(struct __eCNameSpace__eC__containers__BTNode * this, struct __eCNameSpace__eC__files__BinaryTree * tree)
{
unsigned int valid = 1;
int leftHeight = this->left ? __eCProp___eCNameSpace__eC__containers__BTNode_Get_depthProp(this->left) + 1 : 0;
int rightHeight = this->right ? __eCProp___eCNameSpace__eC__containers__BTNode_Get_depthProp(this->right) + 1 : 0;
int diffHeight = rightHeight - leftHeight;

if(this->left)
{
if(this->left->parent != this)
{
printf("Parent not set properly at node %d\n", (int)this->left->key);
valid = 0;
}
valid *= __eCMethod___eCNameSpace__eC__containers__BTNode_Check(this->left, tree);
}
if(this->right)
{
if(this->right->parent != this)
{
printf("Parent not set properly at node %d\n", (int)this->right->key);
valid = 0;
}
valid *= __eCMethod___eCNameSpace__eC__containers__BTNode_Check(this->right, tree);
}
if(this->depth != __eCProp___eCNameSpace__eC__containers__BTNode_Get_depthProp(this))
{
printf("Depth value at node %d (%d) doesn't match depth property (%d)\n", (int)this->key, this->depth, __eCProp___eCNameSpace__eC__containers__BTNode_Get_depthProp(this));
valid = (unsigned int)0;
}
if(diffHeight < -1 || diffHeight > 1)
{
valid = (unsigned int)0;
printf("Height difference is %d at node %d\n", diffHeight, (int)this->key);
}
if(diffHeight != __eCProp___eCNameSpace__eC__containers__BTNode_Get_balanceFactor(this))
{
valid = (unsigned int)0;
printf("Height difference %d doesn't match balance-factor of %d at node %d\n", diffHeight, __eCProp___eCNameSpace__eC__containers__BTNode_Get_balanceFactor(this), (int)this->key);
}
if(this->left && tree->CompareKey(tree, this->left->key, this->key) > 0)
{
valid = 0;
printf("Node %d is *smaller* than left subtree %d\n", (int)this->key, (int)this->left->key);
}
if(this->right && tree->CompareKey(tree, this->right->key, this->key) < 0)
{
valid = 0;
printf("Node %d is *greater* than right subtree %d\n", (int)this->key, (int)this->right->key);
}
return valid;
}

void __eCMethod___eCNameSpace__eC__containers__BTNode_Free(struct __eCNameSpace__eC__containers__BTNode *  this, void (*  FreeKey)(void *  key));

void __eCMethod___eCNameSpace__eC__containers__BTNode_Free(struct __eCNameSpace__eC__containers__BTNode * this, void (* FreeKey)(void * key))
{
if(this->left)
__eCMethod___eCNameSpace__eC__containers__BTNode_Free(this->left, FreeKey);
if(this->right)
__eCMethod___eCNameSpace__eC__containers__BTNode_Free(this->right, FreeKey);
if(FreeKey)
FreeKey((void *)this->key);
((this ? __extension__ ({
void * __eCPtrToDelete = (this);

__eCClass___eCNameSpace__eC__containers__BTNode->Destructor ? __eCClass___eCNameSpace__eC__containers__BTNode->Destructor((void *)__eCPtrToDelete) : 0, __eCNameSpace__eC__types__eSystem_Delete(__eCPtrToDelete);
}) : 0), this = 0);
}

