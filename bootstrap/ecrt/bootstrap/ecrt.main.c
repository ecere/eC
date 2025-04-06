/* Code generated from eC source file: ecrt.main.ec */
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
__attribute__((__common__)) int __eCVMethodID_class_OnCompare;

__attribute__((__common__)) int __eCVMethodID_class_OnCopy;

__attribute__((__common__)) int __eCVMethodID_class_OnEdit;

__attribute__((__common__)) int __eCVMethodID_class_OnFree;

__attribute__((__common__)) int __eCVMethodID_class_OnGetDataFromString;

__attribute__((__common__)) int __eCVMethodID_class_OnGetString;

__attribute__((__common__)) int __eCVMethodID_class_OnSaveEdit;

__attribute__((__common__)) int __eCVMethodID_class_OnSerialize;

__attribute__((__common__)) int __eCVMethodID_class_OnUnserialize;

__attribute__((__common__)) void * __eCProp_double_Get_isInf;

__attribute__((__common__)) void * __eCProp_double_Get_isNan;

__attribute__((__common__)) void * __eCProp_double_Get_signBit;

__attribute__((__common__)) int __eCVMethodID___eCNameSpace__eC__containers__BuiltInContainer_Add;

__attribute__((__common__)) int __eCVMethodID___eCNameSpace__eC__containers__BuiltInContainer_Copy;

__attribute__((__common__)) int __eCVMethodID___eCNameSpace__eC__containers__BuiltInContainer_Delete;

__attribute__((__common__)) int __eCVMethodID___eCNameSpace__eC__containers__BuiltInContainer_Find;

__attribute__((__common__)) int __eCVMethodID___eCNameSpace__eC__containers__BuiltInContainer_Free;

__attribute__((__common__)) int __eCVMethodID___eCNameSpace__eC__containers__BuiltInContainer_FreeIterator;

__attribute__((__common__)) int __eCVMethodID___eCNameSpace__eC__containers__BuiltInContainer_GetAtPosition;

__attribute__((__common__)) int __eCVMethodID___eCNameSpace__eC__containers__BuiltInContainer_GetCount;

__attribute__((__common__)) int __eCVMethodID___eCNameSpace__eC__containers__BuiltInContainer_GetData;

__attribute__((__common__)) int __eCVMethodID___eCNameSpace__eC__containers__BuiltInContainer_GetFirst;

__attribute__((__common__)) int __eCVMethodID___eCNameSpace__eC__containers__BuiltInContainer_GetLast;

__attribute__((__common__)) int __eCVMethodID___eCNameSpace__eC__containers__BuiltInContainer_GetNext;

__attribute__((__common__)) int __eCVMethodID___eCNameSpace__eC__containers__BuiltInContainer_GetPrev;

__attribute__((__common__)) int __eCVMethodID___eCNameSpace__eC__containers__BuiltInContainer_Insert;

__attribute__((__common__)) int __eCVMethodID___eCNameSpace__eC__containers__BuiltInContainer_Move;

__attribute__((__common__)) int __eCVMethodID___eCNameSpace__eC__containers__BuiltInContainer_Remove;

__attribute__((__common__)) int __eCVMethodID___eCNameSpace__eC__containers__BuiltInContainer_RemoveAll;

__attribute__((__common__)) int __eCVMethodID___eCNameSpace__eC__containers__BuiltInContainer_SetData;

__attribute__((__common__)) int __eCVMethodID___eCNameSpace__eC__containers__BuiltInContainer_Sort;

__attribute__((__common__)) int __eCVMethodID___eCNameSpace__eC__types__ClassDesignerBase_AddObject;

__attribute__((__common__)) int __eCVMethodID___eCNameSpace__eC__types__ClassDesignerBase_CreateNew;

__attribute__((__common__)) int __eCVMethodID___eCNameSpace__eC__types__ClassDesignerBase_CreateObject;

__attribute__((__common__)) int __eCVMethodID___eCNameSpace__eC__types__ClassDesignerBase_DestroyObject;

__attribute__((__common__)) int __eCVMethodID___eCNameSpace__eC__types__ClassDesignerBase_DroppedObject;

__attribute__((__common__)) int __eCVMethodID___eCNameSpace__eC__types__ClassDesignerBase_FixProperty;

__attribute__((__common__)) int __eCVMethodID___eCNameSpace__eC__types__ClassDesignerBase_ListToolBoxClasses;

__attribute__((__common__)) int __eCVMethodID___eCNameSpace__eC__types__ClassDesignerBase_PostCreateObject;

__attribute__((__common__)) int __eCVMethodID___eCNameSpace__eC__types__ClassDesignerBase_PrepareTestObject;

__attribute__((__common__)) int __eCVMethodID___eCNameSpace__eC__types__ClassDesignerBase_Reset;

__attribute__((__common__)) int __eCVMethodID___eCNameSpace__eC__types__ClassDesignerBase_SelectObject;

__attribute__((__common__)) int __eCVMethodID___eCNameSpace__eC__containers__Container_Add;

__attribute__((__common__)) int __eCVMethodID___eCNameSpace__eC__containers__Container_Copy;

__attribute__((__common__)) int __eCVMethodID___eCNameSpace__eC__containers__Container_Delete;

__attribute__((__common__)) int __eCVMethodID___eCNameSpace__eC__containers__Container_Find;

__attribute__((__common__)) int __eCVMethodID___eCNameSpace__eC__containers__Container_Free;

__attribute__((__common__)) int __eCVMethodID___eCNameSpace__eC__containers__Container_FreeIterator;

__attribute__((__common__)) int __eCVMethodID___eCNameSpace__eC__containers__Container_GetAtPosition;

__attribute__((__common__)) int __eCVMethodID___eCNameSpace__eC__containers__Container_GetCount;

__attribute__((__common__)) int __eCVMethodID___eCNameSpace__eC__containers__Container_GetData;

__attribute__((__common__)) int __eCVMethodID___eCNameSpace__eC__containers__Container_GetFirst;

__attribute__((__common__)) int __eCVMethodID___eCNameSpace__eC__containers__Container_GetLast;

__attribute__((__common__)) int __eCVMethodID___eCNameSpace__eC__containers__Container_GetNext;

__attribute__((__common__)) int __eCVMethodID___eCNameSpace__eC__containers__Container_GetPrev;

__attribute__((__common__)) int __eCVMethodID___eCNameSpace__eC__containers__Container_Insert;

__attribute__((__common__)) int __eCVMethodID___eCNameSpace__eC__containers__Container_Move;

__attribute__((__common__)) int __eCVMethodID___eCNameSpace__eC__containers__Container_Remove;

__attribute__((__common__)) int __eCVMethodID___eCNameSpace__eC__containers__Container_RemoveAll;

__attribute__((__common__)) int __eCVMethodID___eCNameSpace__eC__containers__Container_SetData;

__attribute__((__common__)) int __eCVMethodID___eCNameSpace__eC__containers__Container_Sort;

__attribute__((__common__)) int __eCVMethodID___eCNameSpace__eC__types__DesignerBase_AddDefaultMethod;

__attribute__((__common__)) int __eCVMethodID___eCNameSpace__eC__types__DesignerBase_AddToolBoxClass;

__attribute__((__common__)) int __eCVMethodID___eCNameSpace__eC__types__DesignerBase_CodeAddObject;

__attribute__((__common__)) int __eCVMethodID___eCNameSpace__eC__types__DesignerBase_DeleteObject;

__attribute__((__common__)) int __eCVMethodID___eCNameSpace__eC__types__DesignerBase_FindObject;

__attribute__((__common__)) int __eCVMethodID___eCNameSpace__eC__types__DesignerBase_ModifyCode;

__attribute__((__common__)) int __eCVMethodID___eCNameSpace__eC__types__DesignerBase_ObjectContainsCode;

__attribute__((__common__)) int __eCVMethodID___eCNameSpace__eC__types__DesignerBase_RenameObject;

__attribute__((__common__)) int __eCVMethodID___eCNameSpace__eC__types__DesignerBase_SelectObjectFromDesigner;

__attribute__((__common__)) int __eCVMethodID___eCNameSpace__eC__types__DesignerBase_SheetAddObject;

__attribute__((__common__)) int __eCVMethodID___eCNameSpace__eC__types__DesignerBase_UpdateProperties;

__attribute__((__common__)) int __eCVMethodID___eCNameSpace__eC__types__IOChannel_ReadData;

__attribute__((__common__)) int __eCVMethodID___eCNameSpace__eC__types__IOChannel_WriteData;

__attribute__((__common__)) int __eCVMethodID___eCNameSpace__eC__files__File_Close;

__attribute__((__common__)) int __eCVMethodID___eCNameSpace__eC__files__File_CloseInput;

__attribute__((__common__)) int __eCVMethodID___eCNameSpace__eC__files__File_CloseOutput;

__attribute__((__common__)) int __eCVMethodID___eCNameSpace__eC__files__File_Eof;

__attribute__((__common__)) int __eCVMethodID___eCNameSpace__eC__files__File_GetSize;

__attribute__((__common__)) int __eCVMethodID___eCNameSpace__eC__files__File_Getc;

__attribute__((__common__)) int __eCVMethodID___eCNameSpace__eC__files__File_Lock;

__attribute__((__common__)) int __eCVMethodID___eCNameSpace__eC__files__File_Putc;

__attribute__((__common__)) int __eCVMethodID___eCNameSpace__eC__files__File_Puts;

__attribute__((__common__)) int __eCVMethodID___eCNameSpace__eC__files__File_Read;

__attribute__((__common__)) int __eCVMethodID___eCNameSpace__eC__files__File_Seek;

__attribute__((__common__)) int __eCVMethodID___eCNameSpace__eC__files__File_Tell;

__attribute__((__common__)) int __eCVMethodID___eCNameSpace__eC__files__File_Truncate;

__attribute__((__common__)) int __eCVMethodID___eCNameSpace__eC__files__File_Unlock;

__attribute__((__common__)) int __eCVMethodID___eCNameSpace__eC__files__File_Write;

__attribute__((__common__)) int __eCVMethodID___eCNameSpace__eC__files__FileSystem_CloseDir;

__attribute__((__common__)) int __eCVMethodID___eCNameSpace__eC__files__FileSystem_Exists;

__attribute__((__common__)) int __eCVMethodID___eCNameSpace__eC__files__FileSystem_Find;

__attribute__((__common__)) int __eCVMethodID___eCNameSpace__eC__files__FileSystem_FindNext;

__attribute__((__common__)) int __eCVMethodID___eCNameSpace__eC__files__FileSystem_FixCase;

__attribute__((__common__)) int __eCVMethodID___eCNameSpace__eC__files__FileSystem_GetSize;

__attribute__((__common__)) int __eCVMethodID___eCNameSpace__eC__files__FileSystem_Open;

__attribute__((__common__)) int __eCVMethodID___eCNameSpace__eC__files__FileSystem_OpenArchive;

__attribute__((__common__)) int __eCVMethodID___eCNameSpace__eC__files__FileSystem_QuerySize;

__attribute__((__common__)) int __eCVMethodID___eCNameSpace__eC__files__FileSystem_Stats;

__attribute__((__common__)) void * __eCProp_float_Get_isInf;

__attribute__((__common__)) void * __eCProp_float_Get_isNan;

__attribute__((__common__)) void * __eCProp_float_Get_signBit;

void __eCCreateModuleInstances_System();

void __eCDestroyModuleInstances_System();

void __eCCreateModuleInstances_i18n();

void __eCDestroyModuleInstances_i18n();

struct __eCNameSpace__eC__containers__OldList
{
void *  first;
void *  last;
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

extern void __eCNameSpace__eC__i18n__LoadTranslatedStrings(const char * moduleName, const char *  name);

extern void __eCNameSpace__eC__i18n__UnloadTranslatedStrings(const char * name);

struct __eCNameSpace__eC__types__Class;

struct __eCNameSpace__eC__types__Instance
{
void * *  _vTbl;
struct __eCNameSpace__eC__types__Class * _class;
int _refCount;
} eC_gcc_struct;

extern long long __eCNameSpace__eC__types__eClass_GetProperty(struct __eCNameSpace__eC__types__Class * _class, const char *  name);

extern void __eCNameSpace__eC__types__eClass_SetProperty(struct __eCNameSpace__eC__types__Class * _class, const char *  name, long long value);

__attribute__((__common__)) struct __eCNameSpace__eC__types__Class * __eCClass_String;

__attribute__((__common__)) struct __eCNameSpace__eC__types__Class * __eCClass_bool;

__attribute__((__common__)) struct __eCNameSpace__eC__types__Class * __eCClass_char__PTR_;

__attribute__((__common__)) struct __eCNameSpace__eC__types__Class * __eCClass_double;

__attribute__((__common__)) struct __eCNameSpace__eC__types__Class * __eCClass___eCNameSpace__eC__types__AVLNode;

__attribute__((__common__)) struct __eCNameSpace__eC__types__Class * __eCClass___eCNameSpace__eC__types__Application;

__attribute__((__common__)) struct __eCNameSpace__eC__types__Class * __eCClass___eCNameSpace__eC__types__Array;

__attribute__((__common__)) struct __eCNameSpace__eC__types__Class * __eCClass___eCNameSpace__eC__types__Array_TPL_String_;

__attribute__((__common__)) struct __eCNameSpace__eC__types__Class * __eCClass___eCNameSpace__eC__types__Array_TPL_eC__containers__Array_TPL_String___;

__attribute__((__common__)) struct __eCNameSpace__eC__types__Class * __eCClass___eCNameSpace__eC__containers__BuiltInContainer;

__attribute__((__common__)) struct __eCNameSpace__eC__types__Class * __eCClass___eCNameSpace__eC__containers__Container;

__attribute__((__common__)) struct __eCNameSpace__eC__types__Class * __eCClass___eCNameSpace__eC__types__CustomAVLTree;

__attribute__((__common__)) struct __eCNameSpace__eC__types__Class * __eCClass___eCNameSpace__eC__types__Instance;

__attribute__((__common__)) struct __eCNameSpace__eC__types__Class * __eCClass___eCNameSpace__eC__containers__IteratorPointer;

__attribute__((__common__)) struct __eCNameSpace__eC__types__Class * __eCClass___eCNameSpace__eC__containers__LinkList;

__attribute__((__common__)) struct __eCNameSpace__eC__types__Class * __eCClass___eCNameSpace__eC__containers__List;

__attribute__((__common__)) struct __eCNameSpace__eC__types__Class * __eCClass___eCNameSpace__eC__containers__ListItem;

__attribute__((__common__)) struct __eCNameSpace__eC__types__Class * __eCClass___eCNameSpace__eC__types__Map;

__attribute__((__common__)) struct __eCNameSpace__eC__types__Class * __eCClass___eCNameSpace__eC__types__Map_TPL_String__const_String_;

__attribute__((__common__)) struct __eCNameSpace__eC__types__Class * __eCClass___eCNameSpace__eC__types__Map_TPL_String__eC__types__Map_TPL_String__const_String___;

__attribute__((__common__)) struct __eCNameSpace__eC__types__Class * __eCClass___eCNameSpace__eC__types__Module;

__attribute__((__common__)) struct __eCNameSpace__eC__types__Class * __eCClass___eCNameSpace__eC__containers__BTNode;

__attribute__((__common__)) struct __eCNameSpace__eC__types__Class * __eCClass___eCNameSpace__eC__files__File;

__attribute__((__common__)) struct __eCNameSpace__eC__types__Class * __eCClass___eCNameSpace__eC__files__OldLink;

__attribute__((__common__)) struct __eCNameSpace__eC__types__Class * __eCClass___eCNameSpace__eC__files__StringBTNode;

__attribute__((__common__)) struct __eCNameSpace__eC__types__Class * __eCClass___eCNameSpace__eC__files__TempFile;

__attribute__((__common__)) struct __eCNameSpace__eC__types__Class * __eCClass_float;

__attribute__((__common__)) struct __eCNameSpace__eC__types__Class * __eCClass_int;

__attribute__((__common__)) struct __eCNameSpace__eC__types__Class * __eCClass_int64;

__attribute__((__common__)) struct __eCNameSpace__eC__types__Class * __eCClass_uint;

__attribute__((__common__)) struct __eCNameSpace__eC__types__Class * __eCClass_uint64;

extern void __eCNameSpace__eC__types__eInstance_SetMethod(struct __eCNameSpace__eC__types__Instance * instance, const char *  name, void *  function);

extern void __eCNameSpace__eC__types__eInstance_IncRef(struct __eCNameSpace__eC__types__Instance * instance);

struct __eCNameSpace__eC__types__Property;

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

__attribute__((__common__)) struct __eCNameSpace__eC__types__Property * __eCProp_double_isInf;

__attribute__((__common__)) struct __eCNameSpace__eC__types__Property * __eCProp_double_isNan;

__attribute__((__common__)) struct __eCNameSpace__eC__types__Property * __eCProp_double_signBit;

__attribute__((__common__)) struct __eCNameSpace__eC__types__Property * __eCProp___eCNameSpace__eC__types__AVLNode_maximum;

__attribute__((__common__)) struct __eCNameSpace__eC__types__Property * __eCProp___eCNameSpace__eC__types__AVLNode_minimum;

__attribute__((__common__)) struct __eCNameSpace__eC__types__Property * __eCProp___eCNameSpace__eC__types__AVLNode_next;

__attribute__((__common__)) struct __eCNameSpace__eC__types__Property * __eCProp___eCNameSpace__eC__types__AVLNode_prev;

__attribute__((__common__)) struct __eCNameSpace__eC__types__Property * __eCProp___eCNameSpace__eC__types__Class_char__PTR_;

__attribute__((__common__)) struct __eCNameSpace__eC__types__Property * __eCProp___eCNameSpace__eC__containers__Container_copySrc;

__attribute__((__common__)) struct __eCNameSpace__eC__types__Property * __eCProp___eCNameSpace__eC__types__Iterator_data;

__attribute__((__common__)) struct __eCNameSpace__eC__types__Property * __eCProp___eCNameSpace__eC__types__MapIterator_map;

__attribute__((__common__)) struct __eCNameSpace__eC__types__Property * __eCProp___eCNameSpace__eC__containers__BTNode_count;

__attribute__((__common__)) struct __eCNameSpace__eC__types__Property * __eCProp___eCNameSpace__eC__containers__BTNode_maximum;

__attribute__((__common__)) struct __eCNameSpace__eC__types__Property * __eCProp___eCNameSpace__eC__containers__BTNode_minimum;

__attribute__((__common__)) struct __eCNameSpace__eC__types__Property * __eCProp___eCNameSpace__eC__containers__BTNode_next;

__attribute__((__common__)) struct __eCNameSpace__eC__types__Property * __eCProp___eCNameSpace__eC__containers__BinaryTree_first;

__attribute__((__common__)) struct __eCNameSpace__eC__types__Property * __eCProp___eCNameSpace__eC__files__File_buffered;

__attribute__((__common__)) struct __eCNameSpace__eC__types__Property * __eCProp___eCNameSpace__eC__files__File_input;

__attribute__((__common__)) struct __eCNameSpace__eC__types__Property * __eCProp___eCNameSpace__eC__files__File_output;

__attribute__((__common__)) struct __eCNameSpace__eC__types__Property * __eCProp_float_isInf;

__attribute__((__common__)) struct __eCNameSpace__eC__types__Property * __eCProp_float_isNan;

__attribute__((__common__)) struct __eCNameSpace__eC__types__Property * __eCProp_float_signBit;

struct __eCNameSpace__eC__files__BinaryTree;

struct __eCNameSpace__eC__files__BinaryTree
{
struct __eCNameSpace__eC__containers__BTNode * root;
int count;
int (*  CompareKey)(struct __eCNameSpace__eC__files__BinaryTree * tree, uintptr_t a, uintptr_t b);
void (*  FreeKey)(void *  key);
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

struct __eCNameSpace__eC__types__Module;

static struct __eCNameSpace__eC__types__Instance * __currentModule;

void __eCRegisterModule_BufferedFile(struct __eCNameSpace__eC__types__Instance * module);

void __eCUnregisterModule_BufferedFile(struct __eCNameSpace__eC__types__Instance * module);

void __eCRegisterModule_DualPipe(struct __eCNameSpace__eC__types__Instance * module);

void __eCUnregisterModule_DualPipe(struct __eCNameSpace__eC__types__Instance * module);

void __eCRegisterModule_File(struct __eCNameSpace__eC__types__Instance * module);

void __eCUnregisterModule_File(struct __eCNameSpace__eC__types__Instance * module);

void __eCRegisterModule_memory(struct __eCNameSpace__eC__types__Instance * module);

void __eCUnregisterModule_memory(struct __eCNameSpace__eC__types__Instance * module);

void __eCRegisterModule_System(struct __eCNameSpace__eC__types__Instance * module);

void __eCUnregisterModule_System(struct __eCNameSpace__eC__types__Instance * module);

void __eCRegisterModule_TempFile(struct __eCNameSpace__eC__types__Instance * module);

void __eCUnregisterModule_TempFile(struct __eCNameSpace__eC__types__Instance * module);

void __eCRegisterModule_i18n(struct __eCNameSpace__eC__types__Instance * module);

void __eCUnregisterModule_i18n(struct __eCNameSpace__eC__types__Instance * module);

void __eCRegisterModule_Array(struct __eCNameSpace__eC__types__Instance * module);

void __eCUnregisterModule_Array(struct __eCNameSpace__eC__types__Instance * module);

void __eCRegisterModule_AVLTree(struct __eCNameSpace__eC__types__Instance * module);

void __eCUnregisterModule_AVLTree(struct __eCNameSpace__eC__types__Instance * module);

void __eCRegisterModule_BuiltInContainer(struct __eCNameSpace__eC__types__Instance * module);

void __eCUnregisterModule_BuiltInContainer(struct __eCNameSpace__eC__types__Instance * module);

void __eCRegisterModule_Container(struct __eCNameSpace__eC__types__Instance * module);

void __eCUnregisterModule_Container(struct __eCNameSpace__eC__types__Instance * module);

void __eCRegisterModule_CustomAVLTree(struct __eCNameSpace__eC__types__Instance * module);

void __eCUnregisterModule_CustomAVLTree(struct __eCNameSpace__eC__types__Instance * module);

void __eCRegisterModule_LinkList(struct __eCNameSpace__eC__types__Instance * module);

void __eCUnregisterModule_LinkList(struct __eCNameSpace__eC__types__Instance * module);

void __eCRegisterModule_List(struct __eCNameSpace__eC__types__Instance * module);

void __eCUnregisterModule_List(struct __eCNameSpace__eC__types__Instance * module);

void __eCRegisterModule_Map(struct __eCNameSpace__eC__types__Instance * module);

void __eCUnregisterModule_Map(struct __eCNameSpace__eC__types__Instance * module);

void __eCRegisterModule_BinaryTree(struct __eCNameSpace__eC__types__Instance * module);

void __eCUnregisterModule_BinaryTree(struct __eCNameSpace__eC__types__Instance * module);

void __eCRegisterModule_BTNode(struct __eCNameSpace__eC__types__Instance * module);

void __eCUnregisterModule_BTNode(struct __eCNameSpace__eC__types__Instance * module);

void __eCRegisterModule_dataTypes(struct __eCNameSpace__eC__types__Instance * module);

void __eCUnregisterModule_dataTypes(struct __eCNameSpace__eC__types__Instance * module);

void __eCRegisterModule_instance(struct __eCNameSpace__eC__types__Instance * module);

void __eCUnregisterModule_instance(struct __eCNameSpace__eC__types__Instance * module);

void __eCRegisterModule_String(struct __eCNameSpace__eC__types__Instance * module);

void __eCUnregisterModule_String(struct __eCNameSpace__eC__types__Instance * module);

void __eCRegisterModule_OldList(struct __eCNameSpace__eC__types__Instance * module);

void __eCUnregisterModule_OldList(struct __eCNameSpace__eC__types__Instance * module);

extern struct __eCNameSpace__eC__types__Class * __eCNameSpace__eC__types__eSystem_FindClass(struct __eCNameSpace__eC__types__Instance * module, const char *  name);

extern struct __eCNameSpace__eC__types__Method * __eCNameSpace__eC__types__eClass_FindMethod(struct __eCNameSpace__eC__types__Class * _class, const char *  name, struct __eCNameSpace__eC__types__Instance * module);

extern struct __eCNameSpace__eC__types__Property * __eCNameSpace__eC__types__eClass_FindProperty(struct __eCNameSpace__eC__types__Class * _class, const char *  name, struct __eCNameSpace__eC__types__Instance * module);

unsigned int __eCDll_Unload_ecrt(struct __eCNameSpace__eC__types__Instance * module)
{
if(__currentModule == module)
{
__eCDestroyModuleInstances_System();
__eCNameSpace__eC__i18n__UnloadTranslatedStrings("ecrt");
__eCDestroyModuleInstances_i18n();
}
__eCUnregisterModule_BufferedFile(module);
__eCUnregisterModule_DualPipe(module);
__eCUnregisterModule_File(module);
__eCUnregisterModule_memory(module);
__eCUnregisterModule_System(module);
__eCUnregisterModule_TempFile(module);
__eCUnregisterModule_i18n(module);
__eCUnregisterModule_Array(module);
__eCUnregisterModule_AVLTree(module);
__eCUnregisterModule_BuiltInContainer(module);
__eCUnregisterModule_Container(module);
__eCUnregisterModule_CustomAVLTree(module);
__eCUnregisterModule_LinkList(module);
__eCUnregisterModule_List(module);
__eCUnregisterModule_Map(module);
__eCUnregisterModule_BinaryTree(module);
__eCUnregisterModule_BTNode(module);
__eCUnregisterModule_dataTypes(module);
__eCUnregisterModule_instance(module);
__eCUnregisterModule_String(module);
__eCUnregisterModule_OldList(module);
if(__currentModule == module)
__currentModule = (void *)0;
return 1;
}

unsigned int __eCDll_Load_ecrt(struct __eCNameSpace__eC__types__Instance * module)
{
__attribute__((unused)) struct __eCNameSpace__eC__types__Class * _class;
__attribute__((unused)) struct __eCNameSpace__eC__types__Method * method;
__attribute__((unused)) struct __eCNameSpace__eC__types__Property * _property;

if(!__currentModule)
{
__currentModule = module;
}
__eCRegisterModule_BufferedFile(module);
__eCRegisterModule_DualPipe(module);
__eCRegisterModule_File(module);
__eCRegisterModule_memory(module);
__eCRegisterModule_System(module);
__eCRegisterModule_TempFile(module);
__eCRegisterModule_i18n(module);
__eCRegisterModule_Array(module);
__eCRegisterModule_AVLTree(module);
__eCRegisterModule_BuiltInContainer(module);
__eCRegisterModule_Container(module);
__eCRegisterModule_CustomAVLTree(module);
__eCRegisterModule_LinkList(module);
__eCRegisterModule_List(module);
__eCRegisterModule_Map(module);
__eCRegisterModule_BinaryTree(module);
__eCRegisterModule_BTNode(module);
__eCRegisterModule_dataTypes(module);
__eCRegisterModule_instance(module);
__eCRegisterModule_String(module);
__eCRegisterModule_OldList(module);
if(__currentModule == module)
{
__eCClass_String = __eCNameSpace__eC__types__eSystem_FindClass(module, "String");
__eCClass_bool = __eCNameSpace__eC__types__eSystem_FindClass(module, "bool");
__eCClass_char__PTR_ = __eCNameSpace__eC__types__eSystem_FindClass(module, "char *");
_class = __eCNameSpace__eC__types__eSystem_FindClass(module, "class");
method = __eCNameSpace__eC__types__eClass_FindMethod(_class, "OnCompare", module);
if(method)
__eCVMethodID_class_OnCompare = method->vid;
method = __eCNameSpace__eC__types__eClass_FindMethod(_class, "OnCopy", module);
if(method)
__eCVMethodID_class_OnCopy = method->vid;
method = __eCNameSpace__eC__types__eClass_FindMethod(_class, "OnEdit", module);
if(method)
__eCVMethodID_class_OnEdit = method->vid;
method = __eCNameSpace__eC__types__eClass_FindMethod(_class, "OnFree", module);
if(method)
__eCVMethodID_class_OnFree = method->vid;
method = __eCNameSpace__eC__types__eClass_FindMethod(_class, "OnGetDataFromString", module);
if(method)
__eCVMethodID_class_OnGetDataFromString = method->vid;
method = __eCNameSpace__eC__types__eClass_FindMethod(_class, "OnGetString", module);
if(method)
__eCVMethodID_class_OnGetString = method->vid;
method = __eCNameSpace__eC__types__eClass_FindMethod(_class, "OnSaveEdit", module);
if(method)
__eCVMethodID_class_OnSaveEdit = method->vid;
method = __eCNameSpace__eC__types__eClass_FindMethod(_class, "OnSerialize", module);
if(method)
__eCVMethodID_class_OnSerialize = method->vid;
method = __eCNameSpace__eC__types__eClass_FindMethod(_class, "OnUnserialize", module);
if(method)
__eCVMethodID_class_OnUnserialize = method->vid;
__eCClass_double = __eCNameSpace__eC__types__eSystem_FindClass(module, "double");
__eCProp_double_isInf = _property = __eCNameSpace__eC__types__eClass_FindProperty(__eCClass_double, "isInf", module);
if(_property)
__eCProp_double_Get_isInf = _property->Get;
__eCProp_double_isNan = _property = __eCNameSpace__eC__types__eClass_FindProperty(__eCClass_double, "isNan", module);
if(_property)
__eCProp_double_Get_isNan = _property->Get;
__eCProp_double_signBit = _property = __eCNameSpace__eC__types__eClass_FindProperty(__eCClass_double, "signBit", module);
if(_property)
__eCProp_double_Get_signBit = _property->Get;
__eCClass___eCNameSpace__eC__types__AVLNode = __eCNameSpace__eC__types__eSystem_FindClass(module, "eC::types::AVLNode");
__eCProp___eCNameSpace__eC__types__AVLNode_maximum = _property = __eCNameSpace__eC__types__eClass_FindProperty(__eCClass___eCNameSpace__eC__types__AVLNode, "maximum", module);
__eCProp___eCNameSpace__eC__types__AVLNode_minimum = _property = __eCNameSpace__eC__types__eClass_FindProperty(__eCClass___eCNameSpace__eC__types__AVLNode, "minimum", module);
__eCProp___eCNameSpace__eC__types__AVLNode_next = _property = __eCNameSpace__eC__types__eClass_FindProperty(__eCClass___eCNameSpace__eC__types__AVLNode, "next", module);
__eCProp___eCNameSpace__eC__types__AVLNode_prev = _property = __eCNameSpace__eC__types__eClass_FindProperty(__eCClass___eCNameSpace__eC__types__AVLNode, "prev", module);
__eCClass___eCNameSpace__eC__types__Application = __eCNameSpace__eC__types__eSystem_FindClass(module, "eC::types::Application");
__eCClass___eCNameSpace__eC__types__Array = __eCNameSpace__eC__types__eSystem_FindClass(module, "eC::types::Array");
__eCClass___eCNameSpace__eC__types__Array_TPL_String_ = __eCNameSpace__eC__types__eSystem_FindClass(module, "eC::types::Array<const String>");
__eCClass___eCNameSpace__eC__types__Array_TPL_eC__containers__Array_TPL_String___ = __eCNameSpace__eC__types__eSystem_FindClass(module, "eC::types::Array<eC::types::Array<const String> >");
__eCClass___eCNameSpace__eC__containers__BuiltInContainer = __eCNameSpace__eC__types__eSystem_FindClass(module, "eC::types::BuiltInContainer");
method = __eCNameSpace__eC__types__eClass_FindMethod(__eCClass___eCNameSpace__eC__containers__BuiltInContainer, "Add", module);
if(method)
__eCVMethodID___eCNameSpace__eC__containers__BuiltInContainer_Add = method->vid;
method = __eCNameSpace__eC__types__eClass_FindMethod(__eCClass___eCNameSpace__eC__containers__BuiltInContainer, "Copy", module);
if(method)
__eCVMethodID___eCNameSpace__eC__containers__BuiltInContainer_Copy = method->vid;
method = __eCNameSpace__eC__types__eClass_FindMethod(__eCClass___eCNameSpace__eC__containers__BuiltInContainer, "Delete", module);
if(method)
__eCVMethodID___eCNameSpace__eC__containers__BuiltInContainer_Delete = method->vid;
method = __eCNameSpace__eC__types__eClass_FindMethod(__eCClass___eCNameSpace__eC__containers__BuiltInContainer, "Find", module);
if(method)
__eCVMethodID___eCNameSpace__eC__containers__BuiltInContainer_Find = method->vid;
method = __eCNameSpace__eC__types__eClass_FindMethod(__eCClass___eCNameSpace__eC__containers__BuiltInContainer, "Free", module);
if(method)
__eCVMethodID___eCNameSpace__eC__containers__BuiltInContainer_Free = method->vid;
method = __eCNameSpace__eC__types__eClass_FindMethod(__eCClass___eCNameSpace__eC__containers__BuiltInContainer, "FreeIterator", module);
if(method)
__eCVMethodID___eCNameSpace__eC__containers__BuiltInContainer_FreeIterator = method->vid;
method = __eCNameSpace__eC__types__eClass_FindMethod(__eCClass___eCNameSpace__eC__containers__BuiltInContainer, "GetAtPosition", module);
if(method)
__eCVMethodID___eCNameSpace__eC__containers__BuiltInContainer_GetAtPosition = method->vid;
method = __eCNameSpace__eC__types__eClass_FindMethod(__eCClass___eCNameSpace__eC__containers__BuiltInContainer, "GetCount", module);
if(method)
__eCVMethodID___eCNameSpace__eC__containers__BuiltInContainer_GetCount = method->vid;
method = __eCNameSpace__eC__types__eClass_FindMethod(__eCClass___eCNameSpace__eC__containers__BuiltInContainer, "GetData", module);
if(method)
__eCVMethodID___eCNameSpace__eC__containers__BuiltInContainer_GetData = method->vid;
method = __eCNameSpace__eC__types__eClass_FindMethod(__eCClass___eCNameSpace__eC__containers__BuiltInContainer, "GetFirst", module);
if(method)
__eCVMethodID___eCNameSpace__eC__containers__BuiltInContainer_GetFirst = method->vid;
method = __eCNameSpace__eC__types__eClass_FindMethod(__eCClass___eCNameSpace__eC__containers__BuiltInContainer, "GetLast", module);
if(method)
__eCVMethodID___eCNameSpace__eC__containers__BuiltInContainer_GetLast = method->vid;
method = __eCNameSpace__eC__types__eClass_FindMethod(__eCClass___eCNameSpace__eC__containers__BuiltInContainer, "GetNext", module);
if(method)
__eCVMethodID___eCNameSpace__eC__containers__BuiltInContainer_GetNext = method->vid;
method = __eCNameSpace__eC__types__eClass_FindMethod(__eCClass___eCNameSpace__eC__containers__BuiltInContainer, "GetPrev", module);
if(method)
__eCVMethodID___eCNameSpace__eC__containers__BuiltInContainer_GetPrev = method->vid;
method = __eCNameSpace__eC__types__eClass_FindMethod(__eCClass___eCNameSpace__eC__containers__BuiltInContainer, "Insert", module);
if(method)
__eCVMethodID___eCNameSpace__eC__containers__BuiltInContainer_Insert = method->vid;
method = __eCNameSpace__eC__types__eClass_FindMethod(__eCClass___eCNameSpace__eC__containers__BuiltInContainer, "Move", module);
if(method)
__eCVMethodID___eCNameSpace__eC__containers__BuiltInContainer_Move = method->vid;
method = __eCNameSpace__eC__types__eClass_FindMethod(__eCClass___eCNameSpace__eC__containers__BuiltInContainer, "Remove", module);
if(method)
__eCVMethodID___eCNameSpace__eC__containers__BuiltInContainer_Remove = method->vid;
method = __eCNameSpace__eC__types__eClass_FindMethod(__eCClass___eCNameSpace__eC__containers__BuiltInContainer, "RemoveAll", module);
if(method)
__eCVMethodID___eCNameSpace__eC__containers__BuiltInContainer_RemoveAll = method->vid;
method = __eCNameSpace__eC__types__eClass_FindMethod(__eCClass___eCNameSpace__eC__containers__BuiltInContainer, "SetData", module);
if(method)
__eCVMethodID___eCNameSpace__eC__containers__BuiltInContainer_SetData = method->vid;
method = __eCNameSpace__eC__types__eClass_FindMethod(__eCClass___eCNameSpace__eC__containers__BuiltInContainer, "Sort", module);
if(method)
__eCVMethodID___eCNameSpace__eC__containers__BuiltInContainer_Sort = method->vid;
_class = __eCNameSpace__eC__types__eSystem_FindClass(module, "eC::types::Class");
__eCProp___eCNameSpace__eC__types__Class_char__PTR_ = _property = __eCNameSpace__eC__types__eClass_FindProperty(_class, "char *", module);
_class = __eCNameSpace__eC__types__eSystem_FindClass(module, "eC::types::ClassDesignerBase");
method = __eCNameSpace__eC__types__eClass_FindMethod(_class, "AddObject", module);
if(method)
__eCVMethodID___eCNameSpace__eC__types__ClassDesignerBase_AddObject = method->vid;
method = __eCNameSpace__eC__types__eClass_FindMethod(_class, "CreateNew", module);
if(method)
__eCVMethodID___eCNameSpace__eC__types__ClassDesignerBase_CreateNew = method->vid;
method = __eCNameSpace__eC__types__eClass_FindMethod(_class, "CreateObject", module);
if(method)
__eCVMethodID___eCNameSpace__eC__types__ClassDesignerBase_CreateObject = method->vid;
method = __eCNameSpace__eC__types__eClass_FindMethod(_class, "DestroyObject", module);
if(method)
__eCVMethodID___eCNameSpace__eC__types__ClassDesignerBase_DestroyObject = method->vid;
method = __eCNameSpace__eC__types__eClass_FindMethod(_class, "DroppedObject", module);
if(method)
__eCVMethodID___eCNameSpace__eC__types__ClassDesignerBase_DroppedObject = method->vid;
method = __eCNameSpace__eC__types__eClass_FindMethod(_class, "FixProperty", module);
if(method)
__eCVMethodID___eCNameSpace__eC__types__ClassDesignerBase_FixProperty = method->vid;
method = __eCNameSpace__eC__types__eClass_FindMethod(_class, "ListToolBoxClasses", module);
if(method)
__eCVMethodID___eCNameSpace__eC__types__ClassDesignerBase_ListToolBoxClasses = method->vid;
method = __eCNameSpace__eC__types__eClass_FindMethod(_class, "PostCreateObject", module);
if(method)
__eCVMethodID___eCNameSpace__eC__types__ClassDesignerBase_PostCreateObject = method->vid;
method = __eCNameSpace__eC__types__eClass_FindMethod(_class, "PrepareTestObject", module);
if(method)
__eCVMethodID___eCNameSpace__eC__types__ClassDesignerBase_PrepareTestObject = method->vid;
method = __eCNameSpace__eC__types__eClass_FindMethod(_class, "Reset", module);
if(method)
__eCVMethodID___eCNameSpace__eC__types__ClassDesignerBase_Reset = method->vid;
method = __eCNameSpace__eC__types__eClass_FindMethod(_class, "SelectObject", module);
if(method)
__eCVMethodID___eCNameSpace__eC__types__ClassDesignerBase_SelectObject = method->vid;
__eCClass___eCNameSpace__eC__containers__Container = __eCNameSpace__eC__types__eSystem_FindClass(module, "eC::types::Container");
method = __eCNameSpace__eC__types__eClass_FindMethod(__eCClass___eCNameSpace__eC__containers__Container, "Add", module);
if(method)
__eCVMethodID___eCNameSpace__eC__containers__Container_Add = method->vid;
method = __eCNameSpace__eC__types__eClass_FindMethod(__eCClass___eCNameSpace__eC__containers__Container, "Copy", module);
if(method)
__eCVMethodID___eCNameSpace__eC__containers__Container_Copy = method->vid;
method = __eCNameSpace__eC__types__eClass_FindMethod(__eCClass___eCNameSpace__eC__containers__Container, "Delete", module);
if(method)
__eCVMethodID___eCNameSpace__eC__containers__Container_Delete = method->vid;
method = __eCNameSpace__eC__types__eClass_FindMethod(__eCClass___eCNameSpace__eC__containers__Container, "Find", module);
if(method)
__eCVMethodID___eCNameSpace__eC__containers__Container_Find = method->vid;
method = __eCNameSpace__eC__types__eClass_FindMethod(__eCClass___eCNameSpace__eC__containers__Container, "Free", module);
if(method)
__eCVMethodID___eCNameSpace__eC__containers__Container_Free = method->vid;
method = __eCNameSpace__eC__types__eClass_FindMethod(__eCClass___eCNameSpace__eC__containers__Container, "FreeIterator", module);
if(method)
__eCVMethodID___eCNameSpace__eC__containers__Container_FreeIterator = method->vid;
method = __eCNameSpace__eC__types__eClass_FindMethod(__eCClass___eCNameSpace__eC__containers__Container, "GetAtPosition", module);
if(method)
__eCVMethodID___eCNameSpace__eC__containers__Container_GetAtPosition = method->vid;
method = __eCNameSpace__eC__types__eClass_FindMethod(__eCClass___eCNameSpace__eC__containers__Container, "GetCount", module);
if(method)
__eCVMethodID___eCNameSpace__eC__containers__Container_GetCount = method->vid;
method = __eCNameSpace__eC__types__eClass_FindMethod(__eCClass___eCNameSpace__eC__containers__Container, "GetData", module);
if(method)
__eCVMethodID___eCNameSpace__eC__containers__Container_GetData = method->vid;
method = __eCNameSpace__eC__types__eClass_FindMethod(__eCClass___eCNameSpace__eC__containers__Container, "GetFirst", module);
if(method)
__eCVMethodID___eCNameSpace__eC__containers__Container_GetFirst = method->vid;
method = __eCNameSpace__eC__types__eClass_FindMethod(__eCClass___eCNameSpace__eC__containers__Container, "GetLast", module);
if(method)
__eCVMethodID___eCNameSpace__eC__containers__Container_GetLast = method->vid;
method = __eCNameSpace__eC__types__eClass_FindMethod(__eCClass___eCNameSpace__eC__containers__Container, "GetNext", module);
if(method)
__eCVMethodID___eCNameSpace__eC__containers__Container_GetNext = method->vid;
method = __eCNameSpace__eC__types__eClass_FindMethod(__eCClass___eCNameSpace__eC__containers__Container, "GetPrev", module);
if(method)
__eCVMethodID___eCNameSpace__eC__containers__Container_GetPrev = method->vid;
method = __eCNameSpace__eC__types__eClass_FindMethod(__eCClass___eCNameSpace__eC__containers__Container, "Insert", module);
if(method)
__eCVMethodID___eCNameSpace__eC__containers__Container_Insert = method->vid;
method = __eCNameSpace__eC__types__eClass_FindMethod(__eCClass___eCNameSpace__eC__containers__Container, "Move", module);
if(method)
__eCVMethodID___eCNameSpace__eC__containers__Container_Move = method->vid;
method = __eCNameSpace__eC__types__eClass_FindMethod(__eCClass___eCNameSpace__eC__containers__Container, "Remove", module);
if(method)
__eCVMethodID___eCNameSpace__eC__containers__Container_Remove = method->vid;
method = __eCNameSpace__eC__types__eClass_FindMethod(__eCClass___eCNameSpace__eC__containers__Container, "RemoveAll", module);
if(method)
__eCVMethodID___eCNameSpace__eC__containers__Container_RemoveAll = method->vid;
method = __eCNameSpace__eC__types__eClass_FindMethod(__eCClass___eCNameSpace__eC__containers__Container, "SetData", module);
if(method)
__eCVMethodID___eCNameSpace__eC__containers__Container_SetData = method->vid;
method = __eCNameSpace__eC__types__eClass_FindMethod(__eCClass___eCNameSpace__eC__containers__Container, "Sort", module);
if(method)
__eCVMethodID___eCNameSpace__eC__containers__Container_Sort = method->vid;
__eCProp___eCNameSpace__eC__containers__Container_copySrc = _property = __eCNameSpace__eC__types__eClass_FindProperty(__eCClass___eCNameSpace__eC__containers__Container, "copySrc", module);
__eCClass___eCNameSpace__eC__types__CustomAVLTree = __eCNameSpace__eC__types__eSystem_FindClass(module, "eC::types::CustomAVLTree");
_class = __eCNameSpace__eC__types__eSystem_FindClass(module, "eC::types::DesignerBase");
method = __eCNameSpace__eC__types__eClass_FindMethod(_class, "AddDefaultMethod", module);
if(method)
__eCVMethodID___eCNameSpace__eC__types__DesignerBase_AddDefaultMethod = method->vid;
method = __eCNameSpace__eC__types__eClass_FindMethod(_class, "AddToolBoxClass", module);
if(method)
__eCVMethodID___eCNameSpace__eC__types__DesignerBase_AddToolBoxClass = method->vid;
method = __eCNameSpace__eC__types__eClass_FindMethod(_class, "CodeAddObject", module);
if(method)
__eCVMethodID___eCNameSpace__eC__types__DesignerBase_CodeAddObject = method->vid;
method = __eCNameSpace__eC__types__eClass_FindMethod(_class, "DeleteObject", module);
if(method)
__eCVMethodID___eCNameSpace__eC__types__DesignerBase_DeleteObject = method->vid;
method = __eCNameSpace__eC__types__eClass_FindMethod(_class, "FindObject", module);
if(method)
__eCVMethodID___eCNameSpace__eC__types__DesignerBase_FindObject = method->vid;
method = __eCNameSpace__eC__types__eClass_FindMethod(_class, "ModifyCode", module);
if(method)
__eCVMethodID___eCNameSpace__eC__types__DesignerBase_ModifyCode = method->vid;
method = __eCNameSpace__eC__types__eClass_FindMethod(_class, "ObjectContainsCode", module);
if(method)
__eCVMethodID___eCNameSpace__eC__types__DesignerBase_ObjectContainsCode = method->vid;
method = __eCNameSpace__eC__types__eClass_FindMethod(_class, "RenameObject", module);
if(method)
__eCVMethodID___eCNameSpace__eC__types__DesignerBase_RenameObject = method->vid;
method = __eCNameSpace__eC__types__eClass_FindMethod(_class, "SelectObjectFromDesigner", module);
if(method)
__eCVMethodID___eCNameSpace__eC__types__DesignerBase_SelectObjectFromDesigner = method->vid;
method = __eCNameSpace__eC__types__eClass_FindMethod(_class, "SheetAddObject", module);
if(method)
__eCVMethodID___eCNameSpace__eC__types__DesignerBase_SheetAddObject = method->vid;
method = __eCNameSpace__eC__types__eClass_FindMethod(_class, "UpdateProperties", module);
if(method)
__eCVMethodID___eCNameSpace__eC__types__DesignerBase_UpdateProperties = method->vid;
_class = __eCNameSpace__eC__types__eSystem_FindClass(module, "eC::types::IOChannel");
method = __eCNameSpace__eC__types__eClass_FindMethod(_class, "ReadData", module);
if(method)
__eCVMethodID___eCNameSpace__eC__types__IOChannel_ReadData = method->vid;
method = __eCNameSpace__eC__types__eClass_FindMethod(_class, "WriteData", module);
if(method)
__eCVMethodID___eCNameSpace__eC__types__IOChannel_WriteData = method->vid;
__eCClass___eCNameSpace__eC__types__Instance = __eCNameSpace__eC__types__eSystem_FindClass(module, "eC::types::Instance");
_class = __eCNameSpace__eC__types__eSystem_FindClass(module, "eC::types::Iterator");
__eCProp___eCNameSpace__eC__types__Iterator_data = _property = __eCNameSpace__eC__types__eClass_FindProperty(_class, "data", module);
__eCClass___eCNameSpace__eC__containers__IteratorPointer = __eCNameSpace__eC__types__eSystem_FindClass(module, "eC::types::IteratorPointer");
__eCClass___eCNameSpace__eC__containers__LinkList = __eCNameSpace__eC__types__eSystem_FindClass(module, "eC::containers::LinkList");
__eCClass___eCNameSpace__eC__containers__List = __eCNameSpace__eC__types__eSystem_FindClass(module, "eC::containers::List");
__eCClass___eCNameSpace__eC__containers__ListItem = __eCNameSpace__eC__types__eSystem_FindClass(module, "eC::containers::ListItem");
__eCClass___eCNameSpace__eC__types__Map = __eCNameSpace__eC__types__eSystem_FindClass(module, "eC::types::Map");
__eCClass___eCNameSpace__eC__types__Map_TPL_String__const_String_ = __eCNameSpace__eC__types__eSystem_FindClass(module, "eC::types::Map<const String, const String>");
__eCClass___eCNameSpace__eC__types__Map_TPL_String__eC__types__Map_TPL_String__const_String___ = __eCNameSpace__eC__types__eSystem_FindClass(module, "eC::types::Map<const String, eC::types::Map<const String, const String> >");
_class = __eCNameSpace__eC__types__eSystem_FindClass(module, "eC::types::MapIterator");
__eCProp___eCNameSpace__eC__types__MapIterator_map = _property = __eCNameSpace__eC__types__eClass_FindProperty(_class, "map", module);
__eCClass___eCNameSpace__eC__types__Module = __eCNameSpace__eC__types__eSystem_FindClass(module, "eC::types::Module");
__eCClass___eCNameSpace__eC__containers__BTNode = __eCNameSpace__eC__types__eSystem_FindClass(module, "eC::files::BTNode");
__eCProp___eCNameSpace__eC__containers__BTNode_count = _property = __eCNameSpace__eC__types__eClass_FindProperty(__eCClass___eCNameSpace__eC__containers__BTNode, "count", module);
__eCProp___eCNameSpace__eC__containers__BTNode_maximum = _property = __eCNameSpace__eC__types__eClass_FindProperty(__eCClass___eCNameSpace__eC__containers__BTNode, "maximum", module);
__eCProp___eCNameSpace__eC__containers__BTNode_minimum = _property = __eCNameSpace__eC__types__eClass_FindProperty(__eCClass___eCNameSpace__eC__containers__BTNode, "minimum", module);
__eCProp___eCNameSpace__eC__containers__BTNode_next = _property = __eCNameSpace__eC__types__eClass_FindProperty(__eCClass___eCNameSpace__eC__containers__BTNode, "next", module);
_class = __eCNameSpace__eC__types__eSystem_FindClass(module, "eC::files::BinaryTree");
__eCProp___eCNameSpace__eC__containers__BinaryTree_first = _property = __eCNameSpace__eC__types__eClass_FindProperty(_class, "first", module);
__eCClass___eCNameSpace__eC__files__File = __eCNameSpace__eC__types__eSystem_FindClass(module, "eC::files::File");
method = __eCNameSpace__eC__types__eClass_FindMethod(__eCClass___eCNameSpace__eC__files__File, "Close", module);
if(method)
__eCVMethodID___eCNameSpace__eC__files__File_Close = method->vid;
method = __eCNameSpace__eC__types__eClass_FindMethod(__eCClass___eCNameSpace__eC__files__File, "CloseInput", module);
if(method)
__eCVMethodID___eCNameSpace__eC__files__File_CloseInput = method->vid;
method = __eCNameSpace__eC__types__eClass_FindMethod(__eCClass___eCNameSpace__eC__files__File, "CloseOutput", module);
if(method)
__eCVMethodID___eCNameSpace__eC__files__File_CloseOutput = method->vid;
method = __eCNameSpace__eC__types__eClass_FindMethod(__eCClass___eCNameSpace__eC__files__File, "Eof", module);
if(method)
__eCVMethodID___eCNameSpace__eC__files__File_Eof = method->vid;
method = __eCNameSpace__eC__types__eClass_FindMethod(__eCClass___eCNameSpace__eC__files__File, "GetSize", module);
if(method)
__eCVMethodID___eCNameSpace__eC__files__File_GetSize = method->vid;
method = __eCNameSpace__eC__types__eClass_FindMethod(__eCClass___eCNameSpace__eC__files__File, "Getc", module);
if(method)
__eCVMethodID___eCNameSpace__eC__files__File_Getc = method->vid;
method = __eCNameSpace__eC__types__eClass_FindMethod(__eCClass___eCNameSpace__eC__files__File, "Lock", module);
if(method)
__eCVMethodID___eCNameSpace__eC__files__File_Lock = method->vid;
method = __eCNameSpace__eC__types__eClass_FindMethod(__eCClass___eCNameSpace__eC__files__File, "Putc", module);
if(method)
__eCVMethodID___eCNameSpace__eC__files__File_Putc = method->vid;
method = __eCNameSpace__eC__types__eClass_FindMethod(__eCClass___eCNameSpace__eC__files__File, "Puts", module);
if(method)
__eCVMethodID___eCNameSpace__eC__files__File_Puts = method->vid;
method = __eCNameSpace__eC__types__eClass_FindMethod(__eCClass___eCNameSpace__eC__files__File, "Read", module);
if(method)
__eCVMethodID___eCNameSpace__eC__files__File_Read = method->vid;
method = __eCNameSpace__eC__types__eClass_FindMethod(__eCClass___eCNameSpace__eC__files__File, "Seek", module);
if(method)
__eCVMethodID___eCNameSpace__eC__files__File_Seek = method->vid;
method = __eCNameSpace__eC__types__eClass_FindMethod(__eCClass___eCNameSpace__eC__files__File, "Tell", module);
if(method)
__eCVMethodID___eCNameSpace__eC__files__File_Tell = method->vid;
method = __eCNameSpace__eC__types__eClass_FindMethod(__eCClass___eCNameSpace__eC__files__File, "Truncate", module);
if(method)
__eCVMethodID___eCNameSpace__eC__files__File_Truncate = method->vid;
method = __eCNameSpace__eC__types__eClass_FindMethod(__eCClass___eCNameSpace__eC__files__File, "Unlock", module);
if(method)
__eCVMethodID___eCNameSpace__eC__files__File_Unlock = method->vid;
method = __eCNameSpace__eC__types__eClass_FindMethod(__eCClass___eCNameSpace__eC__files__File, "Write", module);
if(method)
__eCVMethodID___eCNameSpace__eC__files__File_Write = method->vid;
__eCProp___eCNameSpace__eC__files__File_buffered = _property = __eCNameSpace__eC__types__eClass_FindProperty(__eCClass___eCNameSpace__eC__files__File, "buffered", module);
__eCProp___eCNameSpace__eC__files__File_input = _property = __eCNameSpace__eC__types__eClass_FindProperty(__eCClass___eCNameSpace__eC__files__File, "input", module);
__eCProp___eCNameSpace__eC__files__File_output = _property = __eCNameSpace__eC__types__eClass_FindProperty(__eCClass___eCNameSpace__eC__files__File, "output", module);
_class = __eCNameSpace__eC__types__eSystem_FindClass(module, "eC::files::FileSystem");
method = __eCNameSpace__eC__types__eClass_FindMethod(_class, "CloseDir", module);
if(method)
__eCVMethodID___eCNameSpace__eC__files__FileSystem_CloseDir = method->vid;
method = __eCNameSpace__eC__types__eClass_FindMethod(_class, "Exists", module);
if(method)
__eCVMethodID___eCNameSpace__eC__files__FileSystem_Exists = method->vid;
method = __eCNameSpace__eC__types__eClass_FindMethod(_class, "Find", module);
if(method)
__eCVMethodID___eCNameSpace__eC__files__FileSystem_Find = method->vid;
method = __eCNameSpace__eC__types__eClass_FindMethod(_class, "FindNext", module);
if(method)
__eCVMethodID___eCNameSpace__eC__files__FileSystem_FindNext = method->vid;
method = __eCNameSpace__eC__types__eClass_FindMethod(_class, "FixCase", module);
if(method)
__eCVMethodID___eCNameSpace__eC__files__FileSystem_FixCase = method->vid;
method = __eCNameSpace__eC__types__eClass_FindMethod(_class, "GetSize", module);
if(method)
__eCVMethodID___eCNameSpace__eC__files__FileSystem_GetSize = method->vid;
method = __eCNameSpace__eC__types__eClass_FindMethod(_class, "Open", module);
if(method)
__eCVMethodID___eCNameSpace__eC__files__FileSystem_Open = method->vid;
method = __eCNameSpace__eC__types__eClass_FindMethod(_class, "OpenArchive", module);
if(method)
__eCVMethodID___eCNameSpace__eC__files__FileSystem_OpenArchive = method->vid;
method = __eCNameSpace__eC__types__eClass_FindMethod(_class, "QuerySize", module);
if(method)
__eCVMethodID___eCNameSpace__eC__files__FileSystem_QuerySize = method->vid;
method = __eCNameSpace__eC__types__eClass_FindMethod(_class, "Stats", module);
if(method)
__eCVMethodID___eCNameSpace__eC__files__FileSystem_Stats = method->vid;
__eCClass___eCNameSpace__eC__files__OldLink = __eCNameSpace__eC__types__eSystem_FindClass(module, "eC::files::OldLink");
_class = __eCNameSpace__eC__types__eSystem_FindClass(module, "eC::files::OldList");
__eCClass___eCNameSpace__eC__files__StringBTNode = __eCNameSpace__eC__types__eSystem_FindClass(module, "eC::files::StringBTNode");
__eCClass___eCNameSpace__eC__files__TempFile = __eCNameSpace__eC__types__eSystem_FindClass(module, "eC::files::TempFile");
__eCClass_float = __eCNameSpace__eC__types__eSystem_FindClass(module, "float");
__eCProp_float_isInf = _property = __eCNameSpace__eC__types__eClass_FindProperty(__eCClass_float, "isInf", module);
if(_property)
__eCProp_float_Get_isInf = _property->Get;
__eCProp_float_isNan = _property = __eCNameSpace__eC__types__eClass_FindProperty(__eCClass_float, "isNan", module);
if(_property)
__eCProp_float_Get_isNan = _property->Get;
__eCProp_float_signBit = _property = __eCNameSpace__eC__types__eClass_FindProperty(__eCClass_float, "signBit", module);
if(_property)
__eCProp_float_Get_signBit = _property->Get;
__eCClass_int = __eCNameSpace__eC__types__eSystem_FindClass(module, "int");
__eCClass_int64 = __eCNameSpace__eC__types__eSystem_FindClass(module, "int64");
__eCClass_uint = __eCNameSpace__eC__types__eSystem_FindClass(module, "uint");
__eCClass_uint64 = __eCNameSpace__eC__types__eSystem_FindClass(module, "uint64");
__eCCreateModuleInstances_i18n();
__eCNameSpace__eC__i18n__LoadTranslatedStrings("ecrt", "ecrt");
}
if(__currentModule == module)
{
__eCCreateModuleInstances_System();
}
return 1;
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

void __eCRegisterModule_ecrt_main(struct __eCNameSpace__eC__types__Instance * module)
{
struct __eCNameSpace__eC__types__Class __attribute__((unused)) * class;

}

void __eCUnregisterModule_ecrt_main(struct __eCNameSpace__eC__types__Instance * module)
{

}

struct __eCNameSpace__eC__types__DataMember;

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

