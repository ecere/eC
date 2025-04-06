/* Code generated from eC source file: Array.ec */
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
extern int __eCVMethodID_class_OnUnserialize;

extern int __eCVMethodID_class_OnCompare;

struct __eCNameSpace__eC__types__SortRData
{
void * arg;
int (* compare)(void *, const void *, const void *);
} eC_gcc_struct;

struct __eCNameSpace__eC__types__Array
{
uint64 * array;
unsigned int count;
unsigned int minAllocSize;
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

struct __eCNameSpace__eC__containers__IteratorPointer;

extern void *  memmove(void * , const void * , size_t size);

extern void *  memset(void *  area, int value, size_t count);

struct __eCNameSpace__eC__types__GlobalFunction;

extern int __eCVMethodID_class_OnFree;

static inline int __eCNameSpace__eC__types__compareDeref(struct __eCNameSpace__eC__types__SortRData * cs, const void ** a, const void ** b)
{
return cs->compare(cs->arg, *a, *b);
}

static inline int __eCNameSpace__eC__types__compareDescDeref(struct __eCNameSpace__eC__types__SortRData * cs, const void ** a, const void ** b)
{
return -cs->compare(cs->arg, *a, *b);
}

static inline int __eCNameSpace__eC__types__compareDesc(struct __eCNameSpace__eC__types__SortRData * cs, const void * a, const void * b)
{
return -cs->compare(cs->arg, a, b);
}

static inline int __eCNameSpace__eC__types__compareArgLast(const void * a, const void * b, struct __eCNameSpace__eC__types__SortRData * cs)
{
return cs->compare(cs->arg, a, b);
}

static inline int __eCNameSpace__eC__types__compareDerefArgLast(const void ** a, const void ** b, struct __eCNameSpace__eC__types__SortRData * cs)
{
return cs->compare(cs->arg, *a, *b);
}

static inline int __eCNameSpace__eC__types__compareDescDerefArgLast(const void ** a, const void ** b, struct __eCNameSpace__eC__types__SortRData * cs)
{
return -cs->compare(cs->arg, *a, *b);
}

static inline int __eCNameSpace__eC__types__compareDescArgLast(const void * a, const void * b, struct __eCNameSpace__eC__types__SortRData * cs)
{
return -cs->compare(cs->arg, a, b);
}

static inline void __eCNameSpace__eC__types__quickSort(void * base, size_t nel, size_t w, char * piv, int (* compare)(void *, const void *, const void *), void * arg)
{
ssize_t beg[300], end[300];
int frame = 0;

beg[0] = 0;
end[0] = nel;
while(frame >= 0)
{
ssize_t L = beg[frame], R = end[frame] - 1;

if(L < R)
{
memcpy(piv, (char *)base + L * w, w);
while(L < R)
{
while(compare(arg, (char *)base + (R * w), piv) >= 0 && L < R)
R--;
if(L < R)
{
memcpy((char *)base + L * w, (char *)base + R * w, w);
L++;
}
while(compare(arg, (char *)base + (L * w), piv) <= 0 && L < R)
L++;
if(L < R)
{
memcpy((char *)base + R * w, (char *)base + L * w, w);
R--;
}
}
memcpy((char *)base + L * w, piv, w);
beg[frame + 1] = L + 1;
end[frame + 1] = end[frame];
end[frame++] = L;
if(end[frame] - beg[frame] > end[frame - 1] - beg[frame - 1])
{
ssize_t swap;

swap = beg[frame];
beg[frame] = beg[frame - 1];
beg[frame - 1] = swap;
swap = end[frame];
end[frame] = end[frame - 1];
end[frame - 1] = swap;
}
}
else
frame--;
}
}

static inline void __eCNameSpace__eC__types___qsortrx(void * base, size_t nel, size_t width, int (* compare)(void * arg, const void * a, const void * b), int (* optCompareArgLast)(const void * a, const void * b, void * arg), void * arg, unsigned int deref, unsigned int ascending)
{
if(!deref && ascending)
{
{
char * buf = __eCNameSpace__eC__types__eSystem_New(sizeof(char) * (width));

__eCNameSpace__eC__types__quickSort(base, nel, width, buf, compare, arg);
(__eCNameSpace__eC__types__eSystem_Delete(buf), buf = 0);
}
}
else
{
struct __eCNameSpace__eC__types__SortRData s =
{
arg, compare
};

{
char * buf = __eCNameSpace__eC__types__eSystem_New(sizeof(char) * (width));

__eCNameSpace__eC__types__quickSort(base, nel, width, buf, (void *)(!deref ? (void *)(__eCNameSpace__eC__types__compareDesc) : (void *)(ascending ? (void *)(__eCNameSpace__eC__types__compareDeref) : (void *)(__eCNameSpace__eC__types__compareDescDeref))), &s);
(__eCNameSpace__eC__types__eSystem_Delete(buf), buf = 0);
}
}
}

void __eCNameSpace__eC__types__qsortrx(void * base, size_t nel, size_t width, int (* compare)(void * arg, const void * a, const void * b), int (* optCompareArgLast)(const void * a, const void * b, void * arg), void * arg, unsigned int deref, unsigned int ascending)
{
__eCNameSpace__eC__types___qsortrx(base, nel, width, compare, optCompareArgLast, arg, deref, ascending);
}

void __eCNameSpace__eC__types__qsortr(void * base, size_t nel, size_t width, int (* compare)(void * arg, const void * a, const void * b), void * arg)
{
__eCNameSpace__eC__types___qsortrx(base, nel, width, compare, (((void *)0)), arg, 0, 1);
}

struct __eCNameSpace__eC__types__Property;

static __attribute__((unused)) struct __eCNameSpace__eC__types__Property * __eCProp___eCNameSpace__eC__types__Array_size, * __eCPropM___eCNameSpace__eC__types__Array_size;

static __attribute__((unused)) struct __eCNameSpace__eC__types__Property * __eCProp___eCNameSpace__eC__types__Array_minAllocSize, * __eCPropM___eCNameSpace__eC__types__Array_minAllocSize;

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

struct __eCNameSpace__eC__containers__BuiltInContainer
{
void * *  _vTbl;
struct __eCNameSpace__eC__types__Class * _class;
int _refCount;
void *  data;
int count;
struct __eCNameSpace__eC__types__Class * type;
} eC_gcc_struct;

extern unsigned int __eCNameSpace__eC__types__eClass_IsDerived(struct __eCNameSpace__eC__types__Class * _class, struct __eCNameSpace__eC__types__Class * from);

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

unsigned int __eCProp___eCNameSpace__eC__types__Array_Get_size(struct __eCNameSpace__eC__types__Instance * this);

void __eCProp___eCNameSpace__eC__types__Array_Set_size(struct __eCNameSpace__eC__types__Instance * this, unsigned int value);

unsigned int __eCProp___eCNameSpace__eC__types__Array_Get_minAllocSize(struct __eCNameSpace__eC__types__Instance * this);

void __eCProp___eCNameSpace__eC__types__Array_Set_minAllocSize(struct __eCNameSpace__eC__types__Instance * this, unsigned int value);

void __eCMethod___eCNameSpace__eC__types__IOChannel_Get(struct __eCNameSpace__eC__types__Instance * this, struct __eCNameSpace__eC__types__Class * class, void * *  data);

extern int __eCVMethodID___eCNameSpace__eC__containers__Container_GetCount;

extern int __eCVMethodID___eCNameSpace__eC__containers__Container_GetFirst;

extern int __eCVMethodID___eCNameSpace__eC__containers__Container_GetNext;

extern int __eCVMethodID___eCNameSpace__eC__containers__Container_GetData;

extern int __eCVMethodID___eCNameSpace__eC__containers__Container_Remove;

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

static struct __eCNameSpace__eC__types__Class * __eCClass___eCNameSpace__eC__types__SortRData;

static struct __eCNameSpace__eC__types__Class * __eCClass___eCNameSpace__eC__types__Array;

extern void __eCNameSpace__eC__types__PrintLn(struct __eCNameSpace__eC__types__Class * class, const void * object, ...);

extern struct __eCNameSpace__eC__types__Class * __eCClass_uint;

extern struct __eCNameSpace__eC__types__Class * __eCClass___eCNameSpace__eC__types__Instance;

extern struct __eCNameSpace__eC__types__Class * __eCClass___eCNameSpace__eC__containers__Container;

extern struct __eCNameSpace__eC__types__Class * __eCClass_char__PTR_;

extern struct __eCNameSpace__eC__types__Class * __eCClass___eCNameSpace__eC__containers__BuiltInContainer;

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

void __eCDestructor___eCNameSpace__eC__types__Array(struct __eCNameSpace__eC__types__Instance * this)
{
__attribute__((unused)) struct __eCNameSpace__eC__types__Array * __eCPointer___eCNameSpace__eC__types__Array = (struct __eCNameSpace__eC__types__Array *)(this ? (((char *)this) + 0 + sizeof(struct __eCNameSpace__eC__types__Instance)) : 0);

{
(__eCNameSpace__eC__types__eSystem_Delete(__eCPointer___eCNameSpace__eC__types__Array->array), __eCPointer___eCNameSpace__eC__types__Array->array = 0);
}
}

struct __eCNameSpace__eC__containers__IteratorPointer * __eCMethod___eCNameSpace__eC__types__Array_GetFirst(struct __eCNameSpace__eC__types__Instance * this)
{
__attribute__((unused)) struct __eCNameSpace__eC__types__Array * __eCPointer___eCNameSpace__eC__types__Array = (struct __eCNameSpace__eC__types__Array *)(this ? (((char *)this) + 0 + sizeof(struct __eCNameSpace__eC__types__Instance)) : 0);

return (struct __eCNameSpace__eC__containers__IteratorPointer *)(__eCPointer___eCNameSpace__eC__types__Array->count ? __eCPointer___eCNameSpace__eC__types__Array->array : (((void *)0)));
}

int __eCMethod___eCNameSpace__eC__types__Array_GetCount(struct __eCNameSpace__eC__types__Instance * this)
{
__attribute__((unused)) struct __eCNameSpace__eC__types__Array * __eCPointer___eCNameSpace__eC__types__Array = (struct __eCNameSpace__eC__types__Array *)(this ? (((char *)this) + 0 + sizeof(struct __eCNameSpace__eC__types__Instance)) : 0);

return __eCPointer___eCNameSpace__eC__types__Array->count;
}

unsigned int __eCProp___eCNameSpace__eC__types__Array_Get_size(struct __eCNameSpace__eC__types__Instance * this)
{
__attribute__((unused)) struct __eCNameSpace__eC__types__Array * __eCPointer___eCNameSpace__eC__types__Array = (struct __eCNameSpace__eC__types__Array *)(this ? (((char *)this) + 0 + sizeof(struct __eCNameSpace__eC__types__Instance)) : 0);

return __eCPointer___eCNameSpace__eC__types__Array->count;
}

unsigned int __eCProp___eCNameSpace__eC__types__Array_Get_minAllocSize(struct __eCNameSpace__eC__types__Instance * this)
{
__attribute__((unused)) struct __eCNameSpace__eC__types__Array * __eCPointer___eCNameSpace__eC__types__Array = (struct __eCNameSpace__eC__types__Array *)(this ? (((char *)this) + 0 + sizeof(struct __eCNameSpace__eC__types__Instance)) : 0);

return __eCPointer___eCNameSpace__eC__types__Array->minAllocSize;
}

void __eCMethod___eCNameSpace__eC__types__Array_OnUnserialize(struct __eCNameSpace__eC__types__Class * class, struct __eCNameSpace__eC__types__Instance ** this, struct __eCNameSpace__eC__types__Instance * channel)
{
__attribute__((unused)) struct __eCNameSpace__eC__types__Array * __eCPointer___eCNameSpace__eC__types__Array = (struct __eCNameSpace__eC__types__Array *)(this ? (((char *)this) + 0 + sizeof(struct __eCNameSpace__eC__types__Instance)) : 0);
struct __eCNameSpace__eC__types__Instance * array = __eCNameSpace__eC__types__eInstance_New(class);
unsigned int count, c;
struct __eCNameSpace__eC__types__Class * Dclass = class->templateArgs[2].__anon1.__anon1.dataTypeClass;

array->_refCount++;
__eCMethod___eCNameSpace__eC__types__IOChannel_Get(channel, __eCClass_uint, (void *)&count);
__eCProp___eCNameSpace__eC__types__Array_Set_size(array, count);
for(c = 0; c < count; c++)
((void (*)(void *, void *, void *))(void *)Dclass->_vTbl[__eCVMethodID_class_OnUnserialize])(Dclass, ((unsigned char *)((struct __eCNameSpace__eC__types__Array *)(((char *)array + 0 + sizeof(struct __eCNameSpace__eC__types__Instance))))->array) + Dclass->typeSize * c, channel);
(*this) = array;
}

struct __eCNameSpace__eC__containers__IteratorPointer * __eCMethod___eCNameSpace__eC__types__Array_GetLast(struct __eCNameSpace__eC__types__Instance * this)
{
__attribute__((unused)) struct __eCNameSpace__eC__types__Array * __eCPointer___eCNameSpace__eC__types__Array = (struct __eCNameSpace__eC__types__Array *)(this ? (((char *)this) + 0 + sizeof(struct __eCNameSpace__eC__types__Instance)) : 0);

return (struct __eCNameSpace__eC__containers__IteratorPointer *)(__eCPointer___eCNameSpace__eC__types__Array->count && __eCPointer___eCNameSpace__eC__types__Array->array ? (((unsigned char *)__eCPointer___eCNameSpace__eC__types__Array->array) + ((__eCPointer___eCNameSpace__eC__types__Array->count - 1) * ((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[0].__anon1.__anon1.dataTypeClass->typeSize)) : (((void *)0)));
}

struct __eCNameSpace__eC__containers__IteratorPointer * __eCMethod___eCNameSpace__eC__types__Array_GetPrev(struct __eCNameSpace__eC__types__Instance * this, struct __eCNameSpace__eC__containers__IteratorPointer * ip)
{
__attribute__((unused)) struct __eCNameSpace__eC__types__Array * __eCPointer___eCNameSpace__eC__types__Array = (struct __eCNameSpace__eC__types__Array *)(this ? (((char *)this) + 0 + sizeof(struct __eCNameSpace__eC__types__Instance)) : 0);
uint64 * item = (uint64 *)ip;

return (struct __eCNameSpace__eC__containers__IteratorPointer *)((item && (void *)(item) > (void *)(__eCPointer___eCNameSpace__eC__types__Array->array)) ? (((unsigned char *)item) - (1 * ((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[0].__anon1.__anon1.dataTypeClass->typeSize)) : (((void *)0)));
}

struct __eCNameSpace__eC__containers__IteratorPointer * __eCMethod___eCNameSpace__eC__types__Array_GetNext(struct __eCNameSpace__eC__types__Instance * this, struct __eCNameSpace__eC__containers__IteratorPointer * ip)
{
__attribute__((unused)) struct __eCNameSpace__eC__types__Array * __eCPointer___eCNameSpace__eC__types__Array = (struct __eCNameSpace__eC__types__Array *)(this ? (((char *)this) + 0 + sizeof(struct __eCNameSpace__eC__types__Instance)) : 0);
uint64 * item = (uint64 *)ip;

return (struct __eCNameSpace__eC__containers__IteratorPointer *)((item && (void *)(item) < (void *)(((unsigned char *)((unsigned char *)__eCPointer___eCNameSpace__eC__types__Array->array) + (__eCPointer___eCNameSpace__eC__types__Array->count * ((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[0].__anon1.__anon1.dataTypeClass->typeSize)) - (1 * ((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[0].__anon1.__anon1.dataTypeClass->typeSize))) ? (((unsigned char *)item) + (1 * ((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[0].__anon1.__anon1.dataTypeClass->typeSize)) : (((void *)0)));
}

uint64 __eCMethod___eCNameSpace__eC__types__Array_GetData(struct __eCNameSpace__eC__types__Instance * this, struct __eCNameSpace__eC__containers__IteratorPointer * ip)
{
__attribute__((unused)) struct __eCNameSpace__eC__types__Array * __eCPointer___eCNameSpace__eC__types__Array = (struct __eCNameSpace__eC__types__Array *)(this ? (((char *)this) + 0 + sizeof(struct __eCNameSpace__eC__types__Instance)) : 0);
uint64 * item = (uint64 *)ip;

return ((((((struct __eCNameSpace__eC__types__Instance * )(char * )this)->_class->templateArgs[0].__anon1.__anon1.dataTypeClass->type == 1) ? ((uint64)(uintptr_t)item) : ((((struct __eCNameSpace__eC__types__Instance * )(char * )this)->_class->templateArgs[0].__anon1.__anon1.dataTypeClass->typeSize == 1) ? *((unsigned char *)item) : ((((struct __eCNameSpace__eC__types__Instance * )(char * )this)->_class->templateArgs[0].__anon1.__anon1.dataTypeClass->typeSize == 2) ? *((unsigned short *)item) : ((((struct __eCNameSpace__eC__types__Instance * )(char * )this)->_class->templateArgs[0].__anon1.__anon1.dataTypeClass->typeSize == 4) ? *((unsigned int *)item) : *(item)))))));
}

unsigned int __eCMethod___eCNameSpace__eC__types__Array_SetData(struct __eCNameSpace__eC__types__Instance * this, struct __eCNameSpace__eC__containers__IteratorPointer * ip, uint64 value)
{
__attribute__((unused)) struct __eCNameSpace__eC__types__Array * __eCPointer___eCNameSpace__eC__types__Array = (struct __eCNameSpace__eC__types__Array *)(this ? (((char *)this) + 0 + sizeof(struct __eCNameSpace__eC__types__Instance)) : 0);
uint64 * item = (uint64 *)ip;

(memcpy(item, (((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[0].__anon1.__anon1.dataTypeClass->type == 1) ? (char *)(uintptr_t)(value) : ((char *)&value + __ENDIAN_PAD(((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[0].__anon1.__anon1.dataTypeClass->typeSize)), ((struct __eCNameSpace__eC__types__Instance * )(char * )this)->_class->templateArgs[0].__anon1.__anon1.dataTypeClass->typeSize));
return 1;
}

struct __eCNameSpace__eC__containers__IteratorPointer * __eCMethod___eCNameSpace__eC__types__Array_GetAtPosition(struct __eCNameSpace__eC__types__Instance * this, const uint64 pos, unsigned int create, unsigned int * justAdded)
{
__attribute__((unused)) struct __eCNameSpace__eC__types__Array * __eCPointer___eCNameSpace__eC__types__Array = (struct __eCNameSpace__eC__types__Array *)(this ? (((char *)this) + 0 + sizeof(struct __eCNameSpace__eC__types__Instance)) : 0);

if((int)((const uint64)(pos)) > __eCPointer___eCNameSpace__eC__types__Array->count && create)
{
if((int)((const uint64)(pos)) + 1 > __eCPointer___eCNameSpace__eC__types__Array->minAllocSize)
__eCPointer___eCNameSpace__eC__types__Array->array = __eCNameSpace__eC__types__eSystem_Renew(__eCPointer___eCNameSpace__eC__types__Array->array, ((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[0].__anon1.__anon1.dataTypeClass->typeSize * ((int)((const uint64)(pos)) + 1));
__eCPointer___eCNameSpace__eC__types__Array->count = (int)((const uint64)(pos)) + 1;
if(justAdded)
*justAdded = 1;
}
return ((int)((const uint64)(pos)) < __eCPointer___eCNameSpace__eC__types__Array->count && __eCPointer___eCNameSpace__eC__types__Array->array) ? (struct __eCNameSpace__eC__containers__IteratorPointer *)(((unsigned char *)__eCPointer___eCNameSpace__eC__types__Array->array) + ((int)((const uint64)(pos)) * ((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[0].__anon1.__anon1.dataTypeClass->typeSize)) : (((void *)0));
}

struct __eCNameSpace__eC__containers__IteratorPointer * __eCMethod___eCNameSpace__eC__types__Array_Insert(struct __eCNameSpace__eC__types__Instance * this, struct __eCNameSpace__eC__containers__IteratorPointer * ip, uint64 value)
{
__attribute__((unused)) struct __eCNameSpace__eC__types__Array * __eCPointer___eCNameSpace__eC__types__Array = (struct __eCNameSpace__eC__types__Array *)(this ? (((char *)this) + 0 + sizeof(struct __eCNameSpace__eC__types__Instance)) : 0);
unsigned int tsize = ((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[0].__anon1.__anon1.dataTypeClass->typeSize;
unsigned char * pos = ip ? ((unsigned char *)ip + tsize) : (unsigned char *)__eCPointer___eCNameSpace__eC__types__Array->array;

if(__eCPointer___eCNameSpace__eC__types__Array->count + 1 > __eCPointer___eCNameSpace__eC__types__Array->minAllocSize)
{
int offset = pos - (unsigned char *)__eCPointer___eCNameSpace__eC__types__Array->array;

__eCPointer___eCNameSpace__eC__types__Array->array = __eCNameSpace__eC__types__eSystem_Renew(__eCPointer___eCNameSpace__eC__types__Array->array, ((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[0].__anon1.__anon1.dataTypeClass->typeSize * (__eCPointer___eCNameSpace__eC__types__Array->count + 1));
pos = (unsigned char *)__eCPointer___eCNameSpace__eC__types__Array->array + offset;
}
memmove(pos + tsize, pos, (unsigned char *)__eCPointer___eCNameSpace__eC__types__Array->array + (__eCPointer___eCNameSpace__eC__types__Array->count++) * tsize - pos);
(memcpy((uint64 *)pos, (((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[0].__anon1.__anon1.dataTypeClass->type == 1) ? (char *)(uintptr_t)(value) : ((char *)&value + __ENDIAN_PAD(((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[0].__anon1.__anon1.dataTypeClass->typeSize)), ((struct __eCNameSpace__eC__types__Instance * )(char * )this)->_class->templateArgs[0].__anon1.__anon1.dataTypeClass->typeSize));
return (struct __eCNameSpace__eC__containers__IteratorPointer *)pos;
}

struct __eCNameSpace__eC__containers__IteratorPointer * __eCMethod___eCNameSpace__eC__types__Array_Add(struct __eCNameSpace__eC__types__Instance * this, uint64 value)
{
__attribute__((unused)) struct __eCNameSpace__eC__types__Array * __eCPointer___eCNameSpace__eC__types__Array = (struct __eCNameSpace__eC__types__Array *)(this ? (((char *)this) + 0 + sizeof(struct __eCNameSpace__eC__types__Instance)) : 0);

if(__eCPointer___eCNameSpace__eC__types__Array->count + 1 > __eCPointer___eCNameSpace__eC__types__Array->minAllocSize)
__eCPointer___eCNameSpace__eC__types__Array->array = __eCNameSpace__eC__types__eSystem_Renew(__eCPointer___eCNameSpace__eC__types__Array->array, ((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[0].__anon1.__anon1.dataTypeClass->typeSize * (__eCPointer___eCNameSpace__eC__types__Array->count + 1));
(memcpy((char *)__eCPointer___eCNameSpace__eC__types__Array->array + (__eCPointer___eCNameSpace__eC__types__Array->count * ((struct __eCNameSpace__eC__types__Instance * )(char * )this)->_class->templateArgs[0].__anon1.__anon1.dataTypeClass->typeSize), (((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[0].__anon1.__anon1.dataTypeClass->type == 1) ? (char *)(uintptr_t)(value) : ((char *)&value + __ENDIAN_PAD(((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[0].__anon1.__anon1.dataTypeClass->typeSize)), ((struct __eCNameSpace__eC__types__Instance * )(char * )this)->_class->templateArgs[0].__anon1.__anon1.dataTypeClass->typeSize));
return (struct __eCNameSpace__eC__containers__IteratorPointer *)(((unsigned char *)__eCPointer___eCNameSpace__eC__types__Array->array) + ((__eCPointer___eCNameSpace__eC__types__Array->count++) * ((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[0].__anon1.__anon1.dataTypeClass->typeSize));
}

void __eCMethod___eCNameSpace__eC__types__Array_Remove(struct __eCNameSpace__eC__types__Instance * this, struct __eCNameSpace__eC__containers__IteratorPointer * ip)
{
__attribute__((unused)) struct __eCNameSpace__eC__types__Array * __eCPointer___eCNameSpace__eC__types__Array = (struct __eCNameSpace__eC__types__Array *)(this ? (((char *)this) + 0 + sizeof(struct __eCNameSpace__eC__types__Instance)) : 0);
uint64 * it = (uint64 *)ip;

memmove(it, ((unsigned char *)it) + (1 * ((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[0].__anon1.__anon1.dataTypeClass->typeSize), (__eCPointer___eCNameSpace__eC__types__Array->count - ((((unsigned char *)(it) - (unsigned char *)(__eCPointer___eCNameSpace__eC__types__Array->array)) / ((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[0].__anon1.__anon1.dataTypeClass->typeSize)) - 1) * ((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[0].__anon1.__anon1.dataTypeClass->typeSize);
__eCPointer___eCNameSpace__eC__types__Array->count--;
if(__eCPointer___eCNameSpace__eC__types__Array->count + 1 > __eCPointer___eCNameSpace__eC__types__Array->minAllocSize)
__eCPointer___eCNameSpace__eC__types__Array->array = __eCNameSpace__eC__types__eSystem_Renew(__eCPointer___eCNameSpace__eC__types__Array->array, ((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[0].__anon1.__anon1.dataTypeClass->typeSize * (__eCPointer___eCNameSpace__eC__types__Array->count));
}

void __eCMethod___eCNameSpace__eC__types__Array_Move(struct __eCNameSpace__eC__types__Instance * this, struct __eCNameSpace__eC__containers__IteratorPointer * ip, struct __eCNameSpace__eC__containers__IteratorPointer * afterIp)
{
__attribute__((unused)) struct __eCNameSpace__eC__types__Array * __eCPointer___eCNameSpace__eC__types__Array = (struct __eCNameSpace__eC__types__Array *)(this ? (((char *)this) + 0 + sizeof(struct __eCNameSpace__eC__types__Instance)) : 0);
uint64 * it = (uint64 *)ip;
uint64 * after = (uint64 *)afterIp;
size_t size = ((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[0].__anon1.__anon1.dataTypeClass->typeSize;
unsigned char * temp = __eCNameSpace__eC__types__eSystem_New(sizeof(unsigned char) * (size));

memcpy(temp, it, size);
if(!after)
{
memmove(((unsigned char *)__eCPointer___eCNameSpace__eC__types__Array->array) + (1 * ((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[0].__anon1.__anon1.dataTypeClass->typeSize), __eCPointer___eCNameSpace__eC__types__Array->array, (unsigned char *)it - (unsigned char *)__eCPointer___eCNameSpace__eC__types__Array->array);
memcpy(__eCPointer___eCNameSpace__eC__types__Array->array, temp, size);
}
else
{
if((void *)(it) < (void *)(after))
{
memmove(it, ((unsigned char *)it) + (1 * ((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[0].__anon1.__anon1.dataTypeClass->typeSize), (unsigned char *)after - (unsigned char *)it);
memcpy(after, temp, size);
}
else if((void *)(it) > (void *)(after))
{
memmove(((unsigned char *)after) + (2 * ((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[0].__anon1.__anon1.dataTypeClass->typeSize), ((unsigned char *)after) + (1 * ((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[0].__anon1.__anon1.dataTypeClass->typeSize), (unsigned char *)it - (unsigned char *)(((unsigned char *)after) + (1 * ((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[0].__anon1.__anon1.dataTypeClass->typeSize)));
memcpy(((unsigned char *)after) + (1 * ((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[0].__anon1.__anon1.dataTypeClass->typeSize), temp, size);
}
}
(__eCNameSpace__eC__types__eSystem_Delete(temp), temp = 0);
}

void __eCMethod___eCNameSpace__eC__types__Array_RemoveAll(struct __eCNameSpace__eC__types__Instance * this)
{
__attribute__((unused)) struct __eCNameSpace__eC__types__Array * __eCPointer___eCNameSpace__eC__types__Array = (struct __eCNameSpace__eC__types__Array *)(this ? (((char *)this) + 0 + sizeof(struct __eCNameSpace__eC__types__Instance)) : 0);

if(__eCPointer___eCNameSpace__eC__types__Array->minAllocSize && __eCPointer___eCNameSpace__eC__types__Array->array)
__eCPointer___eCNameSpace__eC__types__Array->array = __eCNameSpace__eC__types__eSystem_Renew0(__eCPointer___eCNameSpace__eC__types__Array->array, ((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[0].__anon1.__anon1.dataTypeClass->typeSize * (__eCPointer___eCNameSpace__eC__types__Array->minAllocSize));
else
(__eCNameSpace__eC__types__eSystem_Delete(__eCPointer___eCNameSpace__eC__types__Array->array), __eCPointer___eCNameSpace__eC__types__Array->array = 0);
__eCPointer___eCNameSpace__eC__types__Array->count = 0;
}

void __eCProp___eCNameSpace__eC__types__Array_Set_size(struct __eCNameSpace__eC__types__Instance * this, unsigned int value)
{
__attribute__((unused)) struct __eCNameSpace__eC__types__Array * __eCPointer___eCNameSpace__eC__types__Array = (struct __eCNameSpace__eC__types__Array *)(this ? (((char *)this) + 0 + sizeof(struct __eCNameSpace__eC__types__Instance)) : 0);

if(__eCPointer___eCNameSpace__eC__types__Array->count != value)
{
if(!__eCPointer___eCNameSpace__eC__types__Array->minAllocSize || value > __eCPointer___eCNameSpace__eC__types__Array->minAllocSize)
__eCPointer___eCNameSpace__eC__types__Array->array = __eCNameSpace__eC__types__eSystem_Renew0(__eCPointer___eCNameSpace__eC__types__Array->array, ((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[0].__anon1.__anon1.dataTypeClass->typeSize * (value));
else if(value > __eCPointer___eCNameSpace__eC__types__Array->count)
memset((unsigned char *)__eCPointer___eCNameSpace__eC__types__Array->array + __eCPointer___eCNameSpace__eC__types__Array->count * ((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[0].__anon1.__anon1.dataTypeClass->typeSize, 0, (value - __eCPointer___eCNameSpace__eC__types__Array->count) * ((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[0].__anon1.__anon1.dataTypeClass->typeSize);
__eCPointer___eCNameSpace__eC__types__Array->count = value;
}
__eCProp___eCNameSpace__eC__types__Array_size && __eCProp___eCNameSpace__eC__types__Array_size->selfWatchable ? __eCNameSpace__eC__types__eInstance_FireSelfWatchers(this, __eCProp___eCNameSpace__eC__types__Array_size) : (void)0, __eCPropM___eCNameSpace__eC__types__Array_size && __eCPropM___eCNameSpace__eC__types__Array_size->selfWatchable ? __eCNameSpace__eC__types__eInstance_FireSelfWatchers(this, __eCPropM___eCNameSpace__eC__types__Array_size) : (void)0;
}

void __eCProp___eCNameSpace__eC__types__Array_Set_minAllocSize(struct __eCNameSpace__eC__types__Instance * this, unsigned int value)
{
__attribute__((unused)) struct __eCNameSpace__eC__types__Array * __eCPointer___eCNameSpace__eC__types__Array = (struct __eCNameSpace__eC__types__Array *)(this ? (((char *)this) + 0 + sizeof(struct __eCNameSpace__eC__types__Instance)) : 0);

if(__eCPointer___eCNameSpace__eC__types__Array->minAllocSize != value)
{
if(value > __eCPointer___eCNameSpace__eC__types__Array->count)
__eCPointer___eCNameSpace__eC__types__Array->array = __eCNameSpace__eC__types__eSystem_Renew(__eCPointer___eCNameSpace__eC__types__Array->array, ((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[0].__anon1.__anon1.dataTypeClass->typeSize * (value));
__eCPointer___eCNameSpace__eC__types__Array->minAllocSize = value;
}
__eCProp___eCNameSpace__eC__types__Array_minAllocSize && __eCProp___eCNameSpace__eC__types__Array_minAllocSize->selfWatchable ? __eCNameSpace__eC__types__eInstance_FireSelfWatchers(this, __eCProp___eCNameSpace__eC__types__Array_minAllocSize) : (void)0, __eCPropM___eCNameSpace__eC__types__Array_minAllocSize && __eCPropM___eCNameSpace__eC__types__Array_minAllocSize->selfWatchable ? __eCNameSpace__eC__types__eInstance_FireSelfWatchers(this, __eCPropM___eCNameSpace__eC__types__Array_minAllocSize) : (void)0;
}

void __eCMethod___eCNameSpace__eC__types__Array_Free(struct __eCNameSpace__eC__types__Instance * this)
{
__attribute__((unused)) struct __eCNameSpace__eC__types__Array * __eCPointer___eCNameSpace__eC__types__Array = (struct __eCNameSpace__eC__types__Array *)(this ? (((char *)this) + 0 + sizeof(struct __eCNameSpace__eC__types__Instance)) : 0);
int c;

for(c = 0; c < __eCPointer___eCNameSpace__eC__types__Array->count; c++)
{
uint64 data = ((((((struct __eCNameSpace__eC__types__Instance * )(char * )this)->_class->templateArgs[0].__anon1.__anon1.dataTypeClass->type == 1) ? (uint64)(uintptr_t)(((unsigned char *)__eCPointer___eCNameSpace__eC__types__Array->array) + (c) * ((struct __eCNameSpace__eC__types__Instance * )(char * )this)->_class->templateArgs[0].__anon1.__anon1.dataTypeClass->typeSize) : ((((struct __eCNameSpace__eC__types__Instance * )(char * )this)->_class->templateArgs[0].__anon1.__anon1.dataTypeClass->typeSize == 1) ? ((unsigned char *)__eCPointer___eCNameSpace__eC__types__Array->array)[c] : ((((struct __eCNameSpace__eC__types__Instance * )(char * )this)->_class->templateArgs[0].__anon1.__anon1.dataTypeClass->typeSize == 2) ? ((unsigned short *)__eCPointer___eCNameSpace__eC__types__Array->array)[c] : ((((struct __eCNameSpace__eC__types__Instance * )(char * )this)->_class->templateArgs[0].__anon1.__anon1.dataTypeClass->typeSize == 4) ? ((unsigned int *)__eCPointer___eCNameSpace__eC__types__Array->array)[c] : (__eCPointer___eCNameSpace__eC__types__Array->array)[c]))))));

(((void (* )(void *  _class, void *  data))((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[0].__anon1.__anon1.dataTypeClass->_vTbl[__eCVMethodID_class_OnFree])(((struct __eCNameSpace__eC__types__Instance * )(char * )this)->_class->templateArgs[0].__anon1.__anon1.dataTypeClass, ((void * )((uintptr_t)(data)))), data = 0);
}
(__eCNameSpace__eC__types__eSystem_Delete(__eCPointer___eCNameSpace__eC__types__Array->array), __eCPointer___eCNameSpace__eC__types__Array->array = 0);
__eCPointer___eCNameSpace__eC__types__Array->count = 0;
__eCPointer___eCNameSpace__eC__types__Array->minAllocSize = 0;
}

void __eCMethod___eCNameSpace__eC__types__Array_Delete(struct __eCNameSpace__eC__types__Instance * this, struct __eCNameSpace__eC__containers__IteratorPointer * item)
{
__attribute__((unused)) struct __eCNameSpace__eC__types__Array * __eCPointer___eCNameSpace__eC__types__Array = (struct __eCNameSpace__eC__types__Array *)(this ? (((char *)this) + 0 + sizeof(struct __eCNameSpace__eC__types__Instance)) : 0);
uint64 data = ((((((struct __eCNameSpace__eC__types__Instance * )(char * )this)->_class->templateArgs[0].__anon1.__anon1.dataTypeClass->type == 1) ? ((uint64)(uintptr_t)(uint64 * )item) : ((((struct __eCNameSpace__eC__types__Instance * )(char * )this)->_class->templateArgs[0].__anon1.__anon1.dataTypeClass->typeSize == 1) ? *((unsigned char *)(uint64 * )item) : ((((struct __eCNameSpace__eC__types__Instance * )(char * )this)->_class->templateArgs[0].__anon1.__anon1.dataTypeClass->typeSize == 2) ? *((unsigned short *)(uint64 * )item) : ((((struct __eCNameSpace__eC__types__Instance * )(char * )this)->_class->templateArgs[0].__anon1.__anon1.dataTypeClass->typeSize == 4) ? *((unsigned int *)(uint64 * )item) : *((uint64 *)item)))))));

(((void (* )(void *  _class, void *  data))((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[0].__anon1.__anon1.dataTypeClass->_vTbl[__eCVMethodID_class_OnFree])(((struct __eCNameSpace__eC__types__Instance * )(char * )this)->_class->templateArgs[0].__anon1.__anon1.dataTypeClass, ((void * )((uintptr_t)(data)))), data = 0);
(__extension__ ({
void (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, struct __eCNameSpace__eC__containers__IteratorPointer * it);

__internal_VirtualMethod = ((void (*)(struct __eCNameSpace__eC__types__Instance *, struct __eCNameSpace__eC__containers__IteratorPointer * it))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = this;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__types__Array->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__containers__Container_Remove]);
__internal_VirtualMethod ? __internal_VirtualMethod(this, item) : (void)1;
}));
}

void __eCMethod___eCNameSpace__eC__types__Array_Sort(struct __eCNameSpace__eC__types__Instance * this, unsigned int ascending)
{
__attribute__((unused)) struct __eCNameSpace__eC__types__Array * __eCPointer___eCNameSpace__eC__types__Array = (struct __eCNameSpace__eC__types__Array *)(this ? (((char *)this) + 0 + sizeof(struct __eCNameSpace__eC__types__Instance)) : 0);
struct __eCNameSpace__eC__types__Class * Dclass = ((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[2].__anon1.__anon1.dataTypeClass;
unsigned int byRef = (Dclass->type == 1000 && !Dclass->byValueSystemClass) || Dclass->type == 2 || Dclass->type == 4 || Dclass->type == 3 || Dclass->type == 1;

__eCNameSpace__eC__types___qsortrx(__eCPointer___eCNameSpace__eC__types__Array->array, __eCPointer___eCNameSpace__eC__types__Array->count, Dclass->typeSize, (void *)Dclass->_vTbl[__eCVMethodID_class_OnCompare], (((void *)0)), Dclass, !byRef, ascending);
}

void __eCMethod___eCNameSpace__eC__types__Array_Copy(struct __eCNameSpace__eC__types__Instance * this, struct __eCNameSpace__eC__types__Instance * source)
{
__attribute__((unused)) struct __eCNameSpace__eC__types__Array * __eCPointer___eCNameSpace__eC__types__Array = (struct __eCNameSpace__eC__types__Array *)(this ? (((char *)this) + 0 + sizeof(struct __eCNameSpace__eC__types__Instance)) : 0);

__eCPointer___eCNameSpace__eC__types__Array->count = (__extension__ ({
int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *);

__internal_VirtualMethod = ((int (*)(struct __eCNameSpace__eC__types__Instance *))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = source;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__containers__Container->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__containers__Container_GetCount]);
__internal_VirtualMethod ? __internal_VirtualMethod(source) : (int)1;
}));
if(__eCPointer___eCNameSpace__eC__types__Array->count > __eCPointer___eCNameSpace__eC__types__Array->minAllocSize)
{
if(!((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[0].__anon1.__anon1.dataTypeClass)
{
__eCNameSpace__eC__types__PrintLn(__eCClass_char__PTR_, "ERROR: Array::Copy() called with undefined type", (void *)0);
return ;
}
__eCPointer___eCNameSpace__eC__types__Array->array = __eCNameSpace__eC__types__eSystem_Renew(__eCPointer___eCNameSpace__eC__types__Array->array, ((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[0].__anon1.__anon1.dataTypeClass->typeSize * (__eCPointer___eCNameSpace__eC__types__Array->count));
}
if((((struct __eCNameSpace__eC__types__Instance *)(char *)source)->_class == __eCClass___eCNameSpace__eC__containers__BuiltInContainer && (*((struct __eCNameSpace__eC__containers__BuiltInContainer *)source)).type->type != 1) || __eCNameSpace__eC__types__eClass_IsDerived(((struct __eCNameSpace__eC__types__Instance *)(char *)source)->_class, __eCClass___eCNameSpace__eC__types__Array))
{
memcpy(__eCPointer___eCNameSpace__eC__types__Array->array, ((struct __eCNameSpace__eC__types__Array *)(((char *)((struct __eCNameSpace__eC__types__Instance *)source) + 0 + sizeof(struct __eCNameSpace__eC__types__Instance))))->array, __eCPointer___eCNameSpace__eC__types__Array->count * ((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[0].__anon1.__anon1.dataTypeClass->typeSize);
}
else
{
struct __eCNameSpace__eC__containers__IteratorPointer * i;
int c;

for(c = 0, i = (__extension__ ({
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
})), c++)
{
uint64 data = (__extension__ ({
uint64 (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, struct __eCNameSpace__eC__containers__IteratorPointer * pointer);

__internal_VirtualMethod = ((uint64 (*)(struct __eCNameSpace__eC__types__Instance *, struct __eCNameSpace__eC__containers__IteratorPointer * pointer))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = source;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__containers__Container->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__containers__Container_GetData]);
__internal_VirtualMethod ? __internal_VirtualMethod(source, i) : (uint64)1;
}));

(memcpy((char *)__eCPointer___eCNameSpace__eC__types__Array->array + ((c) * ((struct __eCNameSpace__eC__types__Instance * )(char * )this)->_class->templateArgs[0].__anon1.__anon1.dataTypeClass->typeSize), (((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[0].__anon1.__anon1.dataTypeClass->type == 1) ? (char *)(uintptr_t)(data) : ((char *)&data + __ENDIAN_PAD(((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[2].__anon1.__anon1.dataTypeClass->typeSize)), ((struct __eCNameSpace__eC__types__Instance * )(char * )this)->_class->templateArgs[0].__anon1.__anon1.dataTypeClass->typeSize));
}
}
}

void __eCUnregisterModule_Array(struct __eCNameSpace__eC__types__Instance * module)
{

__eCPropM___eCNameSpace__eC__types__Array_size = (void *)0;
__eCPropM___eCNameSpace__eC__types__Array_minAllocSize = (void *)0;
}

void __eCRegisterModule_Array(struct __eCNameSpace__eC__types__Instance * module)
{
struct __eCNameSpace__eC__types__Class __attribute__((unused)) * class;

class = __eCNameSpace__eC__types__eSystem_RegisterClass(1, "Array_ec}eC::types::SortRData", 0, sizeof(struct __eCNameSpace__eC__types__SortRData), 0, (void *)0, (void *)0, module, 3, 1);
if(((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application == ((struct __eCNameSpace__eC__types__Module *)(((char *)__thisModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->application && class)
__eCClass___eCNameSpace__eC__types__SortRData = class;
__eCNameSpace__eC__types__eClass_AddDataMember(class, "arg", "void *", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "compare", "int (*)(void *, const void *, const void *)", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eSystem_RegisterFunction("eC::types::qsortrx", "void eC::types::qsortrx(void * base, uintsize nel, uintsize width, int (* compare)(void * arg, const void * a, const void * b), int (* optCompareArgLast)(const void * a, const void * b, void * arg), void * arg, bool deref, bool ascending)", __eCNameSpace__eC__types__qsortrx, module, 4);
__eCNameSpace__eC__types__eSystem_RegisterFunction("eC::types::qsortr", "void eC::types::qsortr(void * base, uintsize nel, uintsize width, int (* compare)(void * arg, const void * a, const void * b), void * arg)", __eCNameSpace__eC__types__qsortr, module, 4);
class = __eCNameSpace__eC__types__eSystem_RegisterClass(0, "eC::types::Array", "eC::types::Container", sizeof(struct __eCNameSpace__eC__types__Array), 0, (void *)0, (void *)__eCDestructor___eCNameSpace__eC__types__Array, module, 4, 1);
if(((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application == ((struct __eCNameSpace__eC__types__Module *)(((char *)__thisModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->application && class)
__eCClass___eCNameSpace__eC__types__Array = class;
__eCNameSpace__eC__types__eClass_AddMethod(class, "OnUnserialize", 0, __eCMethod___eCNameSpace__eC__types__Array_OnUnserialize, 1);
__eCNameSpace__eC__types__eClass_AddMethod(class, "GetFirst", 0, __eCMethod___eCNameSpace__eC__types__Array_GetFirst, 1);
__eCNameSpace__eC__types__eClass_AddMethod(class, "GetLast", 0, __eCMethod___eCNameSpace__eC__types__Array_GetLast, 1);
__eCNameSpace__eC__types__eClass_AddMethod(class, "GetPrev", 0, __eCMethod___eCNameSpace__eC__types__Array_GetPrev, 1);
__eCNameSpace__eC__types__eClass_AddMethod(class, "GetNext", 0, __eCMethod___eCNameSpace__eC__types__Array_GetNext, 1);
__eCNameSpace__eC__types__eClass_AddMethod(class, "GetData", 0, __eCMethod___eCNameSpace__eC__types__Array_GetData, 1);
__eCNameSpace__eC__types__eClass_AddMethod(class, "SetData", 0, __eCMethod___eCNameSpace__eC__types__Array_SetData, 1);
__eCNameSpace__eC__types__eClass_AddMethod(class, "GetAtPosition", 0, __eCMethod___eCNameSpace__eC__types__Array_GetAtPosition, 1);
__eCNameSpace__eC__types__eClass_AddMethod(class, "Insert", 0, __eCMethod___eCNameSpace__eC__types__Array_Insert, 1);
__eCNameSpace__eC__types__eClass_AddMethod(class, "Add", 0, __eCMethod___eCNameSpace__eC__types__Array_Add, 1);
__eCNameSpace__eC__types__eClass_AddMethod(class, "Remove", 0, __eCMethod___eCNameSpace__eC__types__Array_Remove, 1);
__eCNameSpace__eC__types__eClass_AddMethod(class, "Move", 0, __eCMethod___eCNameSpace__eC__types__Array_Move, 1);
__eCNameSpace__eC__types__eClass_AddMethod(class, "RemoveAll", 0, __eCMethod___eCNameSpace__eC__types__Array_RemoveAll, 1);
__eCNameSpace__eC__types__eClass_AddMethod(class, "Copy", 0, __eCMethod___eCNameSpace__eC__types__Array_Copy, 1);
__eCNameSpace__eC__types__eClass_AddMethod(class, "GetCount", 0, __eCMethod___eCNameSpace__eC__types__Array_GetCount, 1);
__eCNameSpace__eC__types__eClass_AddMethod(class, "Free", 0, __eCMethod___eCNameSpace__eC__types__Array_Free, 1);
__eCNameSpace__eC__types__eClass_AddMethod(class, "Delete", 0, __eCMethod___eCNameSpace__eC__types__Array_Delete, 1);
__eCNameSpace__eC__types__eClass_AddMethod(class, "Sort", 0, __eCMethod___eCNameSpace__eC__types__Array_Sort, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "array", "T *", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "count", "uint", 4, 4, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "minAllocSize", "uint", 4, 4, 1);
__eCPropM___eCNameSpace__eC__types__Array_size = __eCNameSpace__eC__types__eClass_AddProperty(class, "size", "uint", __eCProp___eCNameSpace__eC__types__Array_Set_size, __eCProp___eCNameSpace__eC__types__Array_Get_size, 1);
if(((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application == ((struct __eCNameSpace__eC__types__Module *)(((char *)__thisModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->application)
__eCProp___eCNameSpace__eC__types__Array_size = __eCPropM___eCNameSpace__eC__types__Array_size, __eCPropM___eCNameSpace__eC__types__Array_size = (void *)0;
__eCPropM___eCNameSpace__eC__types__Array_minAllocSize = __eCNameSpace__eC__types__eClass_AddProperty(class, "minAllocSize", "uint", __eCProp___eCNameSpace__eC__types__Array_Set_minAllocSize, __eCProp___eCNameSpace__eC__types__Array_Get_minAllocSize, 1);
if(((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application == ((struct __eCNameSpace__eC__types__Module *)(((char *)__thisModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->application)
__eCProp___eCNameSpace__eC__types__Array_minAllocSize = __eCPropM___eCNameSpace__eC__types__Array_minAllocSize, __eCPropM___eCNameSpace__eC__types__Array_minAllocSize = (void *)0;
if(class)
class->fixed = (unsigned int)1;
}

