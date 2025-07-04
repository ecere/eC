/* Code generated from eC source file: OldList.ec */
#if defined(_WIN32)
#define __runtimePlatform 1
#elif defined(__APPLE__)
#define __runtimePlatform 3
#else
#define __runtimePlatform 2
#endif
#if defined(__APPLE__) && defined(__SIZEOF_INT128__) // Fix for incomplete __darwin_arm_neon_state64
typedef unsigned __int128 __uint128_t;
typedef          __int128  __int128_t;
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
struct __eCNameSpace__eC__containers__OldList
{
void * first, * last;
int count;
unsigned int offset;
unsigned int circ;
} eC_gcc_struct;

struct __eCNameSpace__eC__containers__BTNode;

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

extern int strcmp(const char * , const char * );

void __eCMethod___eCNameSpace__eC__containers__OldList_Clear(struct __eCNameSpace__eC__containers__OldList * this)
{
this->offset = 0;
this->circ = 0;
this->count = 0;
this->first = this->last = (((void *)0));
}

struct __eCNameSpace__eC__containers__Item;

struct __eCNameSpace__eC__containers__Item
{
struct __eCNameSpace__eC__containers__Item * prev, * next;
} eC_gcc_struct;

void __eCMethod___eCNameSpace__eC__containers__Item_Copy(struct __eCNameSpace__eC__containers__Item * this, struct __eCNameSpace__eC__containers__Item * src, int size)
{
memcpy((unsigned char *)this + sizeof(struct __eCNameSpace__eC__containers__Item), (unsigned char *)src + sizeof(struct __eCNameSpace__eC__containers__Item), size - sizeof(struct __eCNameSpace__eC__containers__Item *));
}

void __eCMethod___eCNameSpace__eC__containers__OldList_Add(struct __eCNameSpace__eC__containers__OldList * this, void * item)
{
if(item)
{
struct __eCNameSpace__eC__containers__Item * link = (struct __eCNameSpace__eC__containers__Item *)((unsigned char *)item + this->offset);

link->prev = this->last;
if(link->prev)
((struct __eCNameSpace__eC__containers__Item *)((unsigned char *)link->prev + this->offset))->next = item;
if(!this->first)
this->first = item;
this->last = item;
link->next = this->circ ? this->first : (((void *)0));
if(this->circ)
((struct __eCNameSpace__eC__containers__Item *)((unsigned char *)this->first + this->offset))->prev = item;
this->count++;
}
}

unsigned int __eCMethod___eCNameSpace__eC__containers__OldList_Insert(struct __eCNameSpace__eC__containers__OldList * this, void * prevItem, void * item)
{
if(item && prevItem != item)
{
struct __eCNameSpace__eC__containers__Item * prevLink = (struct __eCNameSpace__eC__containers__Item *)((unsigned char *)prevItem + this->offset);
struct __eCNameSpace__eC__containers__Item * link = (struct __eCNameSpace__eC__containers__Item *)((unsigned char *)item + this->offset);

link->prev = prevItem ? prevItem : (this->circ ? this->last : (((void *)0)));
if(prevItem)
{
link->next = prevLink->next;
prevLink->next = item;
}
else
{
link->next = this->first;
this->first = item;
if(this->circ)
{
if(link->prev)
((struct __eCNameSpace__eC__containers__Item *)((unsigned char *)link->prev + this->offset))->next = item;
else
link->next = item;
}
}
if(prevItem == this->last)
this->last = item;
if(link->next)
((struct __eCNameSpace__eC__containers__Item *)((unsigned char *)link->next + this->offset))->prev = item;
this->count++;
return 1;
}
return 0;
}

void __eCMethod___eCNameSpace__eC__containers__OldList_Remove(struct __eCNameSpace__eC__containers__OldList * this, void * item)
{
if(item)
{
struct __eCNameSpace__eC__containers__Item * link = (struct __eCNameSpace__eC__containers__Item *)((unsigned char *)item + this->offset);

if(link->prev)
((struct __eCNameSpace__eC__containers__Item *)((unsigned char *)link->prev + this->offset))->next = link->next;
if(link->next)
((struct __eCNameSpace__eC__containers__Item *)((unsigned char *)link->next + this->offset))->prev = link->prev;
if(this->circ && this->last == this->first)
this->last = this->first = (((void *)0));
else
{
if(this->last == item)
this->last = link->prev;
if(this->first == item)
this->first = link->next;
}
link->prev = (((void *)0));
link->next = (((void *)0));
this->count--;
}
}

void __eCMethod___eCNameSpace__eC__containers__OldList_Free(struct __eCNameSpace__eC__containers__OldList * this, void (* freeFn)(void *))
{
void * item, * next;

for(item = this->first; item; item = next)
{
struct __eCNameSpace__eC__containers__Item * link = (struct __eCNameSpace__eC__containers__Item *)((unsigned char *)item + this->offset);

next = link->next;
if(freeFn)
freeFn(item);
(__eCNameSpace__eC__types__eSystem_Delete(item), item = 0);
if(next == this->first)
break;
}
this->first = this->last = (((void *)0));
this->count = 0;
}

void __eCMethod___eCNameSpace__eC__containers__OldList_RemoveAll(struct __eCNameSpace__eC__containers__OldList * this, void (* freeFn)(void *))
{
void * item, * next;

for(item = this->first; item; item = next)
{
struct __eCNameSpace__eC__containers__Item * link = (struct __eCNameSpace__eC__containers__Item *)((unsigned char *)item + this->offset);

next = link->next;
if(freeFn)
freeFn(item);
if(next == this->first)
break;
}
this->first = this->last = (((void *)0));
this->count = 0;
}

void __eCMethod___eCNameSpace__eC__containers__OldList_Move(struct __eCNameSpace__eC__containers__OldList * this, void * item, void * prevItem)
{
if(item)
{
struct __eCNameSpace__eC__containers__Item * link = (struct __eCNameSpace__eC__containers__Item *)((unsigned char *)item + this->offset);
struct __eCNameSpace__eC__containers__Item * prevLink = (struct __eCNameSpace__eC__containers__Item *)((unsigned char *)prevItem + this->offset);

if(prevItem != item && (this->first != item || prevItem))
{
if(link->prev)
((struct __eCNameSpace__eC__containers__Item *)((unsigned char *)link->prev + this->offset))->next = link->next;
if(link->next)
((struct __eCNameSpace__eC__containers__Item *)((unsigned char *)link->next + this->offset))->prev = link->prev;
if(item == this->first)
this->first = link->next;
if(item == this->last)
this->last = link->prev;
if(prevItem == this->last)
this->last = item;
link->prev = prevItem ? prevItem : (this->circ ? this->last : (((void *)0)));
if(prevItem)
{
link->next = prevLink->next;
prevLink->next = item;
}
else
{
link->next = this->first;
this->first = item;
if(this->circ)
{
if(link->prev)
((struct __eCNameSpace__eC__containers__Item *)((unsigned char *)link->prev + this->offset))->next = item;
else
link->next = item;
}
}
if(link->next)
((struct __eCNameSpace__eC__containers__Item *)((unsigned char *)link->next + this->offset))->prev = item;
}
}
}

void __eCMethod___eCNameSpace__eC__containers__OldList_Swap(struct __eCNameSpace__eC__containers__OldList * this, void * item1, void * item2)
{
struct __eCNameSpace__eC__containers__Item * link1 = (struct __eCNameSpace__eC__containers__Item *)((unsigned char *)item1 + this->offset);
struct __eCNameSpace__eC__containers__Item * link2 = (struct __eCNameSpace__eC__containers__Item *)((unsigned char *)item2 + this->offset);
struct __eCNameSpace__eC__containers__Item * prev1 = link1->prev, * next1 = link1->next;
void * tmp1 = item1, * tmp2 = item2;

link1->prev = link2->prev;
link1->next = link2->next;
link2->prev = prev1;
link2->next = next1;
if(this->first == tmp1)
this->first = item2;
else if(this->first == tmp2)
this->first = item1;
if(this->last == tmp1)
this->last = item1;
else if(this->last == tmp2)
this->last = item2;
if(link1->next)
((struct __eCNameSpace__eC__containers__Item *)((unsigned char *)link1->next + this->offset))->prev = item2;
if(link1->prev)
((struct __eCNameSpace__eC__containers__Item *)((unsigned char *)link1->prev + this->offset))->next = item2;
if(link2->next)
((struct __eCNameSpace__eC__containers__Item *)((unsigned char *)link2->next + this->offset))->prev = item1;
if(link2->prev)
((struct __eCNameSpace__eC__containers__Item *)((unsigned char *)link2->prev + this->offset))->next = item1;
}

void __eCMethod___eCNameSpace__eC__containers__OldList_Copy(struct __eCNameSpace__eC__containers__OldList * this, struct __eCNameSpace__eC__containers__OldList * src, int size, void (* copy)(void * dest, void * src))
{
struct __eCNameSpace__eC__containers__Item * item;

__eCMethod___eCNameSpace__eC__containers__OldList_Clear(this);
for(item = src->first; item; item = item->next)
{
struct __eCNameSpace__eC__containers__Item * newItem = (struct __eCNameSpace__eC__containers__Item *)__eCNameSpace__eC__types__eSystem_New0(sizeof(unsigned char) * (size));

__eCMethod___eCNameSpace__eC__containers__OldList_Add(this, newItem);
__eCMethod___eCNameSpace__eC__containers__Item_Copy(newItem, item, size);
if(copy)
copy(newItem, item);
}
}

void __eCMethod___eCNameSpace__eC__containers__OldList_Merge(struct __eCNameSpace__eC__containers__OldList * this, struct __eCNameSpace__eC__containers__OldList * list1, struct __eCNameSpace__eC__containers__OldList * list2, int (* compare)(void *, void *, void *), void * data)
{
void * item;

__eCMethod___eCNameSpace__eC__containers__OldList_Clear(this);
this->offset = list1->offset;
while((list1->first && list2->first))
{
if(compare(list1->first, list2->first, data) <= 0)
{
item = list1->first;
__eCMethod___eCNameSpace__eC__containers__OldList_Remove(list1, item);
}
else
{
item = list2->first;
__eCMethod___eCNameSpace__eC__containers__OldList_Remove(list2, item);
}
__eCMethod___eCNameSpace__eC__containers__OldList_Add(this, item);
}
while((item = list1->first))
{
__eCMethod___eCNameSpace__eC__containers__OldList_Remove(list1, item);
__eCMethod___eCNameSpace__eC__containers__OldList_Add(this, item);
}
while((item = list2->first))
{
__eCMethod___eCNameSpace__eC__containers__OldList_Remove(list2, item);
__eCMethod___eCNameSpace__eC__containers__OldList_Add(this, item);
}
}

void __eCMethod___eCNameSpace__eC__containers__OldList_Delete(struct __eCNameSpace__eC__containers__OldList * this, void * item)
{
if(item)
{
__eCMethod___eCNameSpace__eC__containers__OldList_Remove(this, item);
(__eCNameSpace__eC__types__eSystem_Delete(item), item = 0);
}
}

struct __eCNameSpace__eC__containers__NamedItem;

struct __eCNameSpace__eC__containers__NamedItem
{
struct __eCNameSpace__eC__containers__NamedItem * prev, * next;
char * name;
} eC_gcc_struct;

void * __eCMethod___eCNameSpace__eC__containers__OldList_FindName(struct __eCNameSpace__eC__containers__OldList * this, const char * name, unsigned int warn)
{
void * result = (((void *)0));

if(name)
{
void * item;
struct __eCNameSpace__eC__containers__NamedItem * link;
int compare = 1;

for(item = this->first; item; item = link->next)
{
link = (struct __eCNameSpace__eC__containers__NamedItem *)(((unsigned char *)item) + this->offset);
if(link->name && (compare = strcmp(link->name, name)) >= 0)
break;
}
if(!compare)
result = item;
else if(warn)
;
}
return result;
}

unsigned int __eCMethod___eCNameSpace__eC__containers__OldList_PlaceName(struct __eCNameSpace__eC__containers__OldList * this, const char * name, void ** place)
{
unsigned int result = 1;
void * item;
struct __eCNameSpace__eC__containers__NamedItem * link;
int compare = 1;

for(item = this->first; item; item = link->next)
{
link = (struct __eCNameSpace__eC__containers__NamedItem *)((unsigned char *)item + this->offset);
if(link->name && (compare = strcmp(link->name, name)) >= 0)
break;
}
if(!item)
*place = this->last;
else
*place = link->prev;
if(compare)
result = 1;
else
;
return result;
}

unsigned int __eCMethod___eCNameSpace__eC__containers__OldList_AddName(struct __eCNameSpace__eC__containers__OldList * this, void * item)
{
unsigned int result = 0;
void * place;
struct __eCNameSpace__eC__containers__NamedItem * link = ((struct __eCNameSpace__eC__containers__NamedItem *)((unsigned char *)item + this->offset));

if(__eCMethod___eCNameSpace__eC__containers__OldList_PlaceName(this, link->name, &place))
{
__eCMethod___eCNameSpace__eC__containers__OldList_Insert(this, place, item);
result = 1;
}
return result;
}

struct __eCNameSpace__eC__containers__OldLink;

struct __eCNameSpace__eC__containers__OldLink
{
struct __eCNameSpace__eC__containers__OldLink * prev, * next;
void * data;
} eC_gcc_struct;

void __eCMethod___eCNameSpace__eC__containers__OldLink_Free(struct __eCNameSpace__eC__containers__OldLink * this)
{
(__eCNameSpace__eC__types__eSystem_Delete(this->data), this->data = 0);
}

struct __eCNameSpace__eC__containers__OldLink * __eCMethod___eCNameSpace__eC__containers__OldList_FindLink(struct __eCNameSpace__eC__containers__OldList * this, void * data)
{
void * item;
struct __eCNameSpace__eC__containers__OldLink * link;

for(item = this->first; item; item = link->next)
{
link = (struct __eCNameSpace__eC__containers__OldLink *)((unsigned char *)item + this->offset);
if(link->data == data)
break;
}
return item;
}

struct __eCNameSpace__eC__containers__NamedLink;

struct __eCNameSpace__eC__containers__NamedLink
{
struct __eCNameSpace__eC__containers__NamedLink * prev, * next;
char * name;
void * data;
} eC_gcc_struct;

void * __eCMethod___eCNameSpace__eC__containers__OldList_FindNamedLink(struct __eCNameSpace__eC__containers__OldList * this, const char * name, unsigned int warn)
{
if(name)
{
void * item = __eCMethod___eCNameSpace__eC__containers__OldList_FindName(this, name, warn);

return item ? ((struct __eCNameSpace__eC__containers__NamedLink *)((unsigned char *)item + this->offset))->data : (((void *)0));
}
return (((void *)0));
}

struct __eCNameSpace__eC__containers__NamedLink64;

struct __eCNameSpace__eC__containers__NamedLink64
{
struct __eCNameSpace__eC__containers__NamedLink64 * prev, * next;
char * name;
long long data;
} eC_gcc_struct;

struct __eCNameSpace__eC__types__Class;

struct __eCNameSpace__eC__types__Instance
{
void * *  _vTbl;
struct __eCNameSpace__eC__types__Class * _class;
int _refCount;
} eC_gcc_struct;

extern long long __eCNameSpace__eC__types__eClass_GetProperty(struct __eCNameSpace__eC__types__Class * _class, const char *  name);

extern void __eCNameSpace__eC__types__eClass_SetProperty(struct __eCNameSpace__eC__types__Class * _class, const char *  name, long long value);

extern void __eCNameSpace__eC__types__eInstance_SetMethod(struct __eCNameSpace__eC__types__Instance * instance, const char *  name, void *  function);

extern void __eCNameSpace__eC__types__eInstance_IncRef(struct __eCNameSpace__eC__types__Instance * instance);

struct __eCNameSpace__eC__containers__BinaryTree;

struct __eCNameSpace__eC__containers__BinaryTree
{
struct __eCNameSpace__eC__containers__BTNode * root;
int count;
int (*  CompareKey)(struct __eCNameSpace__eC__containers__BinaryTree * tree, uintptr_t a, uintptr_t b);
void (*  FreeKey)(void *  key);
} eC_gcc_struct;

void __eCMethod___eCNameSpace__eC__containers__OldList_Sort(struct __eCNameSpace__eC__containers__OldList *  this, int (*  compare)(void * , void * , void * ), void *  data);

void __eCMethod___eCNameSpace__eC__containers__OldList_Sort(struct __eCNameSpace__eC__containers__OldList * this, int (* compare)(void *, void *, void *), void * data)
{
if(this->first && ((struct __eCNameSpace__eC__containers__Item *)((unsigned char *)this->first + this->offset))->next)
{
struct __eCNameSpace__eC__containers__OldList list1, list2;
void * middle, * end;

for(middle = this->first, list1.count = 0, list2.count = 0, end = ((struct __eCNameSpace__eC__containers__Item *)((unsigned char *)this->first + this->offset))->next; middle && end; middle = ((struct __eCNameSpace__eC__containers__Item *)((unsigned char *)middle + this->offset))->next, list1.count++, end = ((struct __eCNameSpace__eC__containers__Item *)((unsigned char *)end + this->offset))->next, list2.count++)
{
end = ((struct __eCNameSpace__eC__containers__Item *)((unsigned char *)end + this->offset))->next;
if(!end)
break;
}
list1.offset = this->offset;
list2.offset = this->offset;
list1.circ = this->circ;
list2.circ = this->circ;
list1.first = this->first;
list1.last = middle;
list2.first = ((struct __eCNameSpace__eC__containers__Item *)((unsigned char *)middle + this->offset))->next;
list2.last = this->last;
((struct __eCNameSpace__eC__containers__Item *)((unsigned char *)list1.last + this->offset))->next = (((void *)0));
((struct __eCNameSpace__eC__containers__Item *)((unsigned char *)list2.first + this->offset))->prev = (((void *)0));
__eCMethod___eCNameSpace__eC__containers__OldList_Sort(&list1, compare, data);
__eCMethod___eCNameSpace__eC__containers__OldList_Sort(&list2, compare, data);
__eCMethod___eCNameSpace__eC__containers__OldList_Merge(this, &list1, &list2, compare, data);
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
struct __eCNameSpace__eC__containers__BinaryTree membersAlpha;
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
struct __eCNameSpace__eC__containers__BinaryTree nameSpaces;
struct __eCNameSpace__eC__containers__BinaryTree classes;
struct __eCNameSpace__eC__containers__BinaryTree defines;
struct __eCNameSpace__eC__containers__BinaryTree functions;
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
struct __eCNameSpace__eC__containers__BinaryTree methods;
struct __eCNameSpace__eC__containers__BinaryTree members;
struct __eCNameSpace__eC__containers__BinaryTree prop;
struct __eCNameSpace__eC__containers__OldList membersAndProperties;
struct __eCNameSpace__eC__containers__BinaryTree classProperties;
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

static struct __eCNameSpace__eC__types__Class * __eCClass___eCNameSpace__eC__containers__Item;

static struct __eCNameSpace__eC__types__Class * __eCClass___eCNameSpace__eC__containers__NamedItem;

static struct __eCNameSpace__eC__types__Class * __eCClass___eCNameSpace__eC__containers__OldLink;

static struct __eCNameSpace__eC__types__Class * __eCClass___eCNameSpace__eC__containers__NamedLink;

static struct __eCNameSpace__eC__types__Class * __eCClass___eCNameSpace__eC__containers__NamedLink64;

static struct __eCNameSpace__eC__types__Class * __eCClass___eCNameSpace__eC__containers__OldList;

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

void __eCRegisterModule_OldList(struct __eCNameSpace__eC__types__Instance * module)
{
struct __eCNameSpace__eC__types__Class __attribute__((unused)) * class;

class = __eCNameSpace__eC__types__eSystem_RegisterClass(5, "eC::containers::Item", 0, sizeof(struct __eCNameSpace__eC__containers__Item), 0, (void *)0, (void *)0, module, 1, 1);
if(((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application == ((struct __eCNameSpace__eC__types__Module *)(((char *)__thisModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->application && class)
__eCClass___eCNameSpace__eC__containers__Item = class;
__eCNameSpace__eC__types__eClass_AddMethod(class, "Copy", "void Copy(eC::containers::Item src, int size)", __eCMethod___eCNameSpace__eC__containers__Item_Copy, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "prev", "eC::containers::Item", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "next", "eC::containers::Item", sizeof(void *), 0xF000F000, 1);
if(class)
class->fixed = (unsigned int)1;
class = __eCNameSpace__eC__types__eSystem_RegisterClass(5, "eC::containers::NamedItem", 0, sizeof(struct __eCNameSpace__eC__containers__NamedItem), 0, (void *)0, (void *)0, module, 1, 1);
if(((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application == ((struct __eCNameSpace__eC__types__Module *)(((char *)__thisModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->application && class)
__eCClass___eCNameSpace__eC__containers__NamedItem = class;
__eCNameSpace__eC__types__eClass_AddDataMember(class, "prev", "eC::containers::NamedItem", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "next", "eC::containers::NamedItem", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "name", "char *", sizeof(void *), 0xF000F000, 1);
if(class)
class->fixed = (unsigned int)1;
class = __eCNameSpace__eC__types__eSystem_RegisterClass(5, "eC::containers::OldLink", 0, sizeof(struct __eCNameSpace__eC__containers__OldLink), 0, (void *)0, (void *)0, module, 1, 1);
if(((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application == ((struct __eCNameSpace__eC__types__Module *)(((char *)__thisModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->application && class)
__eCClass___eCNameSpace__eC__containers__OldLink = class;
__eCNameSpace__eC__types__eClass_AddMethod(class, "Free", "void Free()", __eCMethod___eCNameSpace__eC__containers__OldLink_Free, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "prev", "eC::containers::OldLink", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "next", "eC::containers::OldLink", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "data", "void *", sizeof(void *), 0xF000F000, 1);
if(class)
class->fixed = (unsigned int)1;
class = __eCNameSpace__eC__types__eSystem_RegisterClass(5, "eC::containers::NamedLink", 0, sizeof(struct __eCNameSpace__eC__containers__NamedLink), 0, (void *)0, (void *)0, module, 1, 1);
if(((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application == ((struct __eCNameSpace__eC__types__Module *)(((char *)__thisModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->application && class)
__eCClass___eCNameSpace__eC__containers__NamedLink = class;
__eCNameSpace__eC__types__eClass_AddDataMember(class, "prev", "eC::containers::NamedLink", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "next", "eC::containers::NamedLink", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "name", "char *", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "data", "void *", sizeof(void *), 0xF000F000, 1);
if(class)
class->fixed = (unsigned int)1;
class = __eCNameSpace__eC__types__eSystem_RegisterClass(5, "eC::containers::NamedLink64", 0, sizeof(struct __eCNameSpace__eC__containers__NamedLink64), 0, (void *)0, (void *)0, module, 1, 1);
if(((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application == ((struct __eCNameSpace__eC__types__Module *)(((char *)__thisModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->application && class)
__eCClass___eCNameSpace__eC__containers__NamedLink64 = class;
__eCNameSpace__eC__types__eClass_AddDataMember(class, "prev", "eC::containers::NamedLink64", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "next", "eC::containers::NamedLink64", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "name", "char *", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "data", "int64", 8, 8, 1);
if(class)
class->fixed = (unsigned int)1;
class = __eCNameSpace__eC__types__eSystem_RegisterClass(1, "eC::containers::OldList", 0, sizeof(struct __eCNameSpace__eC__containers__OldList), 0, (void *)0, (void *)0, module, 1, 1);
if(((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application == ((struct __eCNameSpace__eC__types__Module *)(((char *)__thisModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->application && class)
__eCClass___eCNameSpace__eC__containers__OldList = class;
__eCNameSpace__eC__types__eClass_AddMethod(class, "Add", "void Add(void * item)", __eCMethod___eCNameSpace__eC__containers__OldList_Add, 1);
__eCNameSpace__eC__types__eClass_AddMethod(class, "AddName", "bool AddName(void * item)", __eCMethod___eCNameSpace__eC__containers__OldList_AddName, 1);
__eCNameSpace__eC__types__eClass_AddMethod(class, "Clear", "void Clear(void)", __eCMethod___eCNameSpace__eC__containers__OldList_Clear, 1);
__eCNameSpace__eC__types__eClass_AddMethod(class, "Copy", "void Copy(eC::containers::OldList src, int size, void (* copy)(void * dest, void * src))", __eCMethod___eCNameSpace__eC__containers__OldList_Copy, 1);
__eCNameSpace__eC__types__eClass_AddMethod(class, "Delete", "void Delete(void * item)", __eCMethod___eCNameSpace__eC__containers__OldList_Delete, 1);
__eCNameSpace__eC__types__eClass_AddMethod(class, "FindLink", "eC::containers::OldLink FindLink(void * data)", __eCMethod___eCNameSpace__eC__containers__OldList_FindLink, 1);
__eCNameSpace__eC__types__eClass_AddMethod(class, "FindName", "void * FindName(const char * name, bool warn)", __eCMethod___eCNameSpace__eC__containers__OldList_FindName, 1);
__eCNameSpace__eC__types__eClass_AddMethod(class, "FindNamedLink", "void * FindNamedLink(const char * name, bool warn)", __eCMethod___eCNameSpace__eC__containers__OldList_FindNamedLink, 1);
__eCNameSpace__eC__types__eClass_AddMethod(class, "Free", "void Free(void (* freeFn)(void *))", __eCMethod___eCNameSpace__eC__containers__OldList_Free, 1);
__eCNameSpace__eC__types__eClass_AddMethod(class, "Insert", "bool Insert(void * prevItem, void * item)", __eCMethod___eCNameSpace__eC__containers__OldList_Insert, 1);
__eCNameSpace__eC__types__eClass_AddMethod(class, "Move", "void Move(void * item, void * prevItem)", __eCMethod___eCNameSpace__eC__containers__OldList_Move, 1);
__eCNameSpace__eC__types__eClass_AddMethod(class, "PlaceName", "bool PlaceName(const char * name, void ** place)", __eCMethod___eCNameSpace__eC__containers__OldList_PlaceName, 1);
__eCNameSpace__eC__types__eClass_AddMethod(class, "Remove", "void Remove(void * item)", __eCMethod___eCNameSpace__eC__containers__OldList_Remove, 1);
__eCNameSpace__eC__types__eClass_AddMethod(class, "RemoveAll", "void RemoveAll(void (* freeFn)(void *))", __eCMethod___eCNameSpace__eC__containers__OldList_RemoveAll, 1);
__eCNameSpace__eC__types__eClass_AddMethod(class, "Sort", "void Sort(int (* compare)(void *, void *, void *), void * data)", __eCMethod___eCNameSpace__eC__containers__OldList_Sort, 1);
__eCNameSpace__eC__types__eClass_AddMethod(class, "Swap", "void Swap(void * item1, void * item2)", __eCMethod___eCNameSpace__eC__containers__OldList_Swap, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "first", "void *", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "last", "void *", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "count", "int", 4, 4, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "offset", "uint", 4, 4, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "circ", "bool", 4, 4, 1);
if(class)
class->fixed = (unsigned int)1;
}

void __eCUnregisterModule_OldList(struct __eCNameSpace__eC__types__Instance * module)
{

}

