/* Code generated from eC source file: ec.main.ec */
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
__attribute__((__common__)) int __eCVMethodID_class_OnGetString;

__attribute__((__common__)) int (* __eCMethod_double_inf)();

__attribute__((__common__)) int (* __eCMethod_double_nan)();

__attribute__((__common__)) void * __eCProp_double_Get_isInf;

__attribute__((__common__)) void * __eCProp_double_Get_isNan;

__attribute__((__common__)) void * __eCProp_double_Get_signBit;

__attribute__((__common__)) int (* __eCMethod_float_inf)();

__attribute__((__common__)) int (* __eCMethod_float_nan)();

__attribute__((__common__)) void * __eCProp_float_Get_isInf;

__attribute__((__common__)) void * __eCProp_float_Get_isNan;

__attribute__((__common__)) void * __eCProp_float_Get_signBit;

__attribute__((__common__)) int __eCVMethodID___eCNameSpace__eC__containers__Container_Add;

__attribute__((__common__)) int __eCVMethodID___eCNameSpace__eC__containers__Container_Free;

__attribute__((__common__)) int __eCVMethodID___eCNameSpace__eC__containers__Container_GetFirst;

__attribute__((__common__)) int __eCVMethodID___eCNameSpace__eC__containers__Container_GetNext;

__attribute__((__common__)) int __eCVMethodID___eCNameSpace__eC__containers__Container_Remove;

__attribute__((__common__)) int __eCVMethodID___eCNameSpace__eC__files__File_Eof;

__attribute__((__common__)) int __eCVMethodID___eCNameSpace__eC__files__File_GetSize;

__attribute__((__common__)) int __eCVMethodID___eCNameSpace__eC__files__File_Putc;

__attribute__((__common__)) int __eCVMethodID___eCNameSpace__eC__files__File_Puts;

__attribute__((__common__)) int __eCVMethodID___eCNameSpace__eC__files__File_Read;

__attribute__((__common__)) int __eCVMethodID___eCNameSpace__eC__files__File_Seek;

__attribute__((__common__)) int __eCVMethodID___eCNameSpace__eC__files__File_Write;

void __eCCreateModuleInstances_ast();

void __eCDestroyModuleInstances_ast();

void __eCCreateModuleInstances_loadSymbols();

void __eCDestroyModuleInstances_loadSymbols();

void __eCCreateModuleInstances_pass1();

void __eCDestroyModuleInstances_pass1();

struct __eCNameSpace__eC__containers__OldList
{
void *  first;
void *  last;
int count;
unsigned int offset;
unsigned int circ;
} eC_gcc_struct;

struct __eCNameSpace__eC__containers__BTNode;

struct Type;

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

extern int printf(const char * , ...);

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

__attribute__((__common__)) struct __eCNameSpace__eC__types__Class * __eCClass_AsmField;

__attribute__((__common__)) struct __eCNameSpace__eC__types__Class * __eCClass_Attrib;

__attribute__((__common__)) struct __eCNameSpace__eC__types__Class * __eCClass_Attribute;

__attribute__((__common__)) struct __eCNameSpace__eC__types__Class * __eCClass_ClassDef;

__attribute__((__common__)) struct __eCNameSpace__eC__types__Class * __eCClass_ClassDefinition;

__attribute__((__common__)) struct __eCNameSpace__eC__types__Class * __eCClass_ClassFunction;

__attribute__((__common__)) struct __eCNameSpace__eC__types__Class * __eCClass_ClassImport;

__attribute__((__common__)) struct __eCNameSpace__eC__types__Class * __eCClass_Context;

__attribute__((__common__)) struct __eCNameSpace__eC__types__Class * __eCClass_DBIndexItem;

__attribute__((__common__)) struct __eCNameSpace__eC__types__Class * __eCClass_DBTableDef;

__attribute__((__common__)) struct __eCNameSpace__eC__types__Class * __eCClass_DBTableEntry;

__attribute__((__common__)) struct __eCNameSpace__eC__types__Class * __eCClass_DataRedefinition;

__attribute__((__common__)) struct __eCNameSpace__eC__types__Class * __eCClass_Declaration;

__attribute__((__common__)) struct __eCNameSpace__eC__types__Class * __eCClass_Declarator;

__attribute__((__common__)) struct __eCNameSpace__eC__types__Class * __eCClass_DeclaratorType;

__attribute__((__common__)) struct __eCNameSpace__eC__types__Class * __eCClass_Enumerator;

__attribute__((__common__)) struct __eCNameSpace__eC__types__Class * __eCClass_Expression;

__attribute__((__common__)) struct __eCNameSpace__eC__types__Class * __eCClass_ExtDecl;

__attribute__((__common__)) struct __eCNameSpace__eC__types__Class * __eCClass_External;

__attribute__((__common__)) struct __eCNameSpace__eC__types__Class * __eCClass_FunctionDefinition;

__attribute__((__common__)) struct __eCNameSpace__eC__types__Class * __eCClass_FunctionImport;

__attribute__((__common__)) struct __eCNameSpace__eC__types__Class * __eCClass_GlobalData;

__attribute__((__common__)) struct __eCNameSpace__eC__types__Class * __eCClass_Identifier;

__attribute__((__common__)) struct __eCNameSpace__eC__types__Class * __eCClass_ImportedModule;

__attribute__((__common__)) struct __eCNameSpace__eC__types__Class * __eCClass_InitDeclarator;

__attribute__((__common__)) struct __eCNameSpace__eC__types__Class * __eCClass_Initializer;

__attribute__((__common__)) struct __eCNameSpace__eC__types__Class * __eCClass_Instantiation;

__attribute__((__common__)) struct __eCNameSpace__eC__types__Class * __eCClass_MemberInit;

__attribute__((__common__)) struct __eCNameSpace__eC__types__Class * __eCClass_MembersInit;

__attribute__((__common__)) struct __eCNameSpace__eC__types__Class * __eCClass_MethodImport;

__attribute__((__common__)) struct __eCNameSpace__eC__types__Class * __eCClass_ModuleImport;

__attribute__((__common__)) struct __eCNameSpace__eC__types__Class * __eCClass_Pointer;

__attribute__((__common__)) struct __eCNameSpace__eC__types__Class * __eCClass_PropertyDef;

__attribute__((__common__)) struct __eCNameSpace__eC__types__Class * __eCClass_PropertyImport;

__attribute__((__common__)) struct __eCNameSpace__eC__types__Class * __eCClass_PropertyWatch;

__attribute__((__common__)) struct __eCNameSpace__eC__types__Class * __eCClass_Specifier;

__attribute__((__common__)) struct __eCNameSpace__eC__types__Class * __eCClass_Statement;

__attribute__((__common__)) struct __eCNameSpace__eC__types__Class * __eCClass_String;

__attribute__((__common__)) struct __eCNameSpace__eC__types__Class * __eCClass_Symbol;

__attribute__((__common__)) struct __eCNameSpace__eC__types__Class * __eCClass_TemplateArgument;

__attribute__((__common__)) struct __eCNameSpace__eC__types__Class * __eCClass_TemplateDatatype;

__attribute__((__common__)) struct __eCNameSpace__eC__types__Class * __eCClass_TemplateParameter;

__attribute__((__common__)) struct __eCNameSpace__eC__types__Class * __eCClass_TemplatedType;

__attribute__((__common__)) struct __eCNameSpace__eC__types__Class * __eCClass_TopoEdge;

__attribute__((__common__)) struct __eCNameSpace__eC__types__Class * __eCClass_Type;

__attribute__((__common__)) struct __eCNameSpace__eC__types__Class * __eCClass_TypeName;

__attribute__((__common__)) struct __eCNameSpace__eC__types__Class * __eCClass_char__PTR_;

__attribute__((__common__)) struct __eCNameSpace__eC__types__Class * __eCClass___eCNameSpace__eC__types__Application;

__attribute__((__common__)) struct __eCNameSpace__eC__types__Class * __eCClass___eCNameSpace__eC__types__Instance;

__attribute__((__common__)) struct __eCNameSpace__eC__types__Class * __eCClass___eCNameSpace__eC__containers__LinkList_TPL_TopoEdge__link__EQU__in_;

__attribute__((__common__)) struct __eCNameSpace__eC__types__Class * __eCClass___eCNameSpace__eC__containers__LinkList_TPL_TopoEdge__link__EQU__out_;

__attribute__((__common__)) struct __eCNameSpace__eC__types__Class * __eCClass___eCNameSpace__eC__containers__List_TPL_ClassPropertyValue_;

__attribute__((__common__)) struct __eCNameSpace__eC__types__Class * __eCClass___eCNameSpace__eC__containers__List_TPL_Location_;

__attribute__((__common__)) struct __eCNameSpace__eC__types__Class * __eCClass___eCNameSpace__eC__containers__List_TPL_eC__types__Module_;

__attribute__((__common__)) struct __eCNameSpace__eC__types__Class * __eCClass___eCNameSpace__eC__types__Map_TPL_ContextStringPair__eC__containers__List_TPL_Location___;

__attribute__((__common__)) struct __eCNameSpace__eC__types__Class * __eCClass___eCNameSpace__eC__types__Map_TPL_String__eC__containers__List_TPL_eC__types__Module___;

__attribute__((__common__)) struct __eCNameSpace__eC__types__Class * __eCClass___eCNameSpace__eC__types__Module;

__attribute__((__common__)) struct __eCNameSpace__eC__types__Class * __eCClass_int;

__attribute__((__common__)) struct __eCNameSpace__eC__types__Class * __eCClass_uint;

__attribute__((__common__)) struct __eCNameSpace__eC__types__Class * __eCClass___eCNameSpace__eC__types__CustomAVLTree;

__attribute__((__common__)) struct __eCNameSpace__eC__types__Class * __eCClass___eCNameSpace__eC__containers__LinkList;

__attribute__((__common__)) struct __eCNameSpace__eC__types__Class * __eCClass___eCNameSpace__eC__containers__List;

__attribute__((__common__)) struct __eCNameSpace__eC__types__Class * __eCClass___eCNameSpace__eC__types__Map;

__attribute__((__common__)) struct __eCNameSpace__eC__types__Class * __eCClass___eCNameSpace__eC__types__TemplateMemberType;

__attribute__((__common__)) struct __eCNameSpace__eC__types__Class * __eCClass___eCNameSpace__eC__containers__BTNode;

__attribute__((__common__)) struct __eCNameSpace__eC__types__Class * __eCClass___eCNameSpace__eC__sys__File;

__attribute__((__common__)) struct __eCNameSpace__eC__types__Class * __eCClass___eCNameSpace__eC__sys__NamedLink64;

__attribute__((__common__)) struct __eCNameSpace__eC__types__Class * __eCClass___eCNameSpace__eC__files__TempFile;

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
struct Type * dataType;
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

__attribute__((__common__)) struct __eCNameSpace__eC__types__Property * __eCProp_Type_isPointerType;

__attribute__((__common__)) struct __eCNameSpace__eC__types__Property * __eCProp_Type_isPointerTypeSize;

__attribute__((__common__)) struct __eCNameSpace__eC__types__Property * __eCProp_Type_specConst;

__attribute__((__common__)) struct __eCNameSpace__eC__types__Property * __eCProp_double_isInf;

__attribute__((__common__)) struct __eCNameSpace__eC__types__Property * __eCProp_double_isNan;

__attribute__((__common__)) struct __eCNameSpace__eC__types__Property * __eCProp_double_signBit;

__attribute__((__common__)) struct __eCNameSpace__eC__types__Property * __eCProp_float_isInf;

__attribute__((__common__)) struct __eCNameSpace__eC__types__Property * __eCProp_float_isNan;

__attribute__((__common__)) struct __eCNameSpace__eC__types__Property * __eCProp_float_signBit;

__attribute__((__common__)) struct __eCNameSpace__eC__types__Property * __eCProp___eCNameSpace__eC__types__Iterator_data;

__attribute__((__common__)) struct __eCNameSpace__eC__types__Property * __eCProp___eCNameSpace__eC__types__MapIterator_key;

__attribute__((__common__)) struct __eCNameSpace__eC__types__Property * __eCProp___eCNameSpace__eC__types__MapIterator_map;

__attribute__((__common__)) struct __eCNameSpace__eC__types__Property * __eCProp___eCNameSpace__eC__containers__BTNode_next;

__attribute__((__common__)) struct __eCNameSpace__eC__types__Property * __eCProp___eCNameSpace__eC__containers__BinaryTree_first;

struct __eCNameSpace__eC__containers__BinaryTree;

struct __eCNameSpace__eC__containers__BinaryTree
{
struct __eCNameSpace__eC__containers__BTNode * root;
int count;
int (*  CompareKey)(struct __eCNameSpace__eC__containers__BinaryTree * tree, uintptr_t a, uintptr_t b);
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
struct Type * dataType;
int memberAccess;
} eC_gcc_struct;

struct __eCNameSpace__eC__types__Module;

static struct __eCNameSpace__eC__types__Instance * __currentModule;

unsigned int __eCDll_Load_ecrt(struct __eCNameSpace__eC__types__Instance * module);

unsigned int __eCDll_Unload_ecrt(struct __eCNameSpace__eC__types__Instance * module);

void __eCRegisterModule_ast(struct __eCNameSpace__eC__types__Instance * module);

void __eCUnregisterModule_ast(struct __eCNameSpace__eC__types__Instance * module);

void __eCRegisterModule_copy(struct __eCNameSpace__eC__types__Instance * module);

void __eCUnregisterModule_copy(struct __eCNameSpace__eC__types__Instance * module);

void __eCRegisterModule_dbpass(struct __eCNameSpace__eC__types__Instance * module);

void __eCUnregisterModule_dbpass(struct __eCNameSpace__eC__types__Instance * module);

void __eCRegisterModule_ecdefs(struct __eCNameSpace__eC__types__Instance * module);

void __eCUnregisterModule_ecdefs(struct __eCNameSpace__eC__types__Instance * module);

void __eCRegisterModule_expression(struct __eCNameSpace__eC__types__Instance * module);

void __eCUnregisterModule_expression(struct __eCNameSpace__eC__types__Instance * module);

void __eCRegisterModule_firstPass(struct __eCNameSpace__eC__types__Instance * module);

void __eCUnregisterModule_firstPass(struct __eCNameSpace__eC__types__Instance * module);

void __eCRegisterModule_freeAst(struct __eCNameSpace__eC__types__Instance * module);

void __eCUnregisterModule_freeAst(struct __eCNameSpace__eC__types__Instance * module);

void __eCRegisterModule_grammar(struct __eCNameSpace__eC__types__Instance * module);

void __eCUnregisterModule_grammar(struct __eCNameSpace__eC__types__Instance * module);

void __eCRegisterModule_lexer(struct __eCNameSpace__eC__types__Instance * module);

void __eCUnregisterModule_lexer(struct __eCNameSpace__eC__types__Instance * module);

void __eCRegisterModule_loadSymbols(struct __eCNameSpace__eC__types__Instance * module);

void __eCUnregisterModule_loadSymbols(struct __eCNameSpace__eC__types__Instance * module);

void __eCRegisterModule_output(struct __eCNameSpace__eC__types__Instance * module);

void __eCUnregisterModule_output(struct __eCNameSpace__eC__types__Instance * module);

void __eCRegisterModule_pass0(struct __eCNameSpace__eC__types__Instance * module);

void __eCUnregisterModule_pass0(struct __eCNameSpace__eC__types__Instance * module);

void __eCRegisterModule_pass1(struct __eCNameSpace__eC__types__Instance * module);

void __eCUnregisterModule_pass1(struct __eCNameSpace__eC__types__Instance * module);

void __eCRegisterModule_pass15(struct __eCNameSpace__eC__types__Instance * module);

void __eCUnregisterModule_pass15(struct __eCNameSpace__eC__types__Instance * module);

void __eCRegisterModule_pass16(struct __eCNameSpace__eC__types__Instance * module);

void __eCUnregisterModule_pass16(struct __eCNameSpace__eC__types__Instance * module);

void __eCRegisterModule_pass2(struct __eCNameSpace__eC__types__Instance * module);

void __eCUnregisterModule_pass2(struct __eCNameSpace__eC__types__Instance * module);

void __eCRegisterModule_pass3(struct __eCNameSpace__eC__types__Instance * module);

void __eCUnregisterModule_pass3(struct __eCNameSpace__eC__types__Instance * module);

void __eCRegisterModule_shortcuts(struct __eCNameSpace__eC__types__Instance * module);

void __eCUnregisterModule_shortcuts(struct __eCNameSpace__eC__types__Instance * module);

void __eCRegisterModule_type(struct __eCNameSpace__eC__types__Instance * module);

void __eCUnregisterModule_type(struct __eCNameSpace__eC__types__Instance * module);

extern struct __eCNameSpace__eC__types__Instance * __eCNameSpace__eC__types__eModule_LoadStatic(struct __eCNameSpace__eC__types__Instance * fromModule, const char *  name, int importAccess, unsigned int (*  Load)(struct __eCNameSpace__eC__types__Instance * module), unsigned int (*  Unload)(struct __eCNameSpace__eC__types__Instance * module));

extern struct __eCNameSpace__eC__types__Class * __eCNameSpace__eC__types__eSystem_FindClass(struct __eCNameSpace__eC__types__Instance * module, const char *  name);

extern struct __eCNameSpace__eC__types__Property * __eCNameSpace__eC__types__eClass_FindProperty(struct __eCNameSpace__eC__types__Class * _class, const char *  name, struct __eCNameSpace__eC__types__Instance * module);

extern struct __eCNameSpace__eC__types__Method * __eCNameSpace__eC__types__eClass_FindMethod(struct __eCNameSpace__eC__types__Class * _class, const char *  name, struct __eCNameSpace__eC__types__Instance * module);

unsigned int __eCDll_Unload_ec(struct __eCNameSpace__eC__types__Instance * module)
{
if(__currentModule == module)
{
__eCDestroyModuleInstances_pass1();
__eCDestroyModuleInstances_loadSymbols();
__eCDestroyModuleInstances_ast();
__eCNameSpace__eC__i18n__UnloadTranslatedStrings("ec");
}
__eCUnregisterModule_ast(module);
__eCUnregisterModule_copy(module);
__eCUnregisterModule_dbpass(module);
__eCUnregisterModule_ecdefs(module);
__eCUnregisterModule_expression(module);
__eCUnregisterModule_firstPass(module);
__eCUnregisterModule_freeAst(module);
__eCUnregisterModule_grammar(module);
__eCUnregisterModule_lexer(module);
__eCUnregisterModule_loadSymbols(module);
__eCUnregisterModule_output(module);
__eCUnregisterModule_pass0(module);
__eCUnregisterModule_pass1(module);
__eCUnregisterModule_pass15(module);
__eCUnregisterModule_pass16(module);
__eCUnregisterModule_pass2(module);
__eCUnregisterModule_pass3(module);
__eCUnregisterModule_shortcuts(module);
__eCUnregisterModule_type(module);
if(__currentModule == module)
__currentModule = (void *)0;
return 1;
}

unsigned int __eCDll_Load_ec(struct __eCNameSpace__eC__types__Instance * module)
{
__attribute__((unused)) struct __eCNameSpace__eC__types__Class * _class;
__attribute__((unused)) struct __eCNameSpace__eC__types__Method * method;
__attribute__((unused)) struct __eCNameSpace__eC__types__Property * _property;

if(!__currentModule)
{
__currentModule = module;
}
if(!__eCNameSpace__eC__types__eModule_LoadStatic(module, "ecrt", 1, (void *)(__eCDll_Load_ecrt), (void *)(__eCDll_Unload_ecrt)))
printf("Error loading eC module \"%s\" (statically linked)\nThings might go very wrong.\n", "ecrt");
__eCRegisterModule_ast(module);
__eCRegisterModule_copy(module);
__eCRegisterModule_dbpass(module);
__eCRegisterModule_ecdefs(module);
__eCRegisterModule_expression(module);
__eCRegisterModule_firstPass(module);
__eCRegisterModule_freeAst(module);
__eCRegisterModule_grammar(module);
__eCRegisterModule_lexer(module);
__eCRegisterModule_loadSymbols(module);
__eCRegisterModule_output(module);
__eCRegisterModule_pass0(module);
__eCRegisterModule_pass1(module);
__eCRegisterModule_pass15(module);
__eCRegisterModule_pass16(module);
__eCRegisterModule_pass2(module);
__eCRegisterModule_pass3(module);
__eCRegisterModule_shortcuts(module);
__eCRegisterModule_type(module);
if(__currentModule == module)
{
__eCClass_AsmField = __eCNameSpace__eC__types__eSystem_FindClass(module, "AsmField");
__eCClass_Attrib = __eCNameSpace__eC__types__eSystem_FindClass(module, "Attrib");
__eCClass_Attribute = __eCNameSpace__eC__types__eSystem_FindClass(module, "Attribute");
__eCClass_ClassDef = __eCNameSpace__eC__types__eSystem_FindClass(module, "ClassDef");
__eCClass_ClassDefinition = __eCNameSpace__eC__types__eSystem_FindClass(module, "ClassDefinition");
__eCClass_ClassFunction = __eCNameSpace__eC__types__eSystem_FindClass(module, "ClassFunction");
__eCClass_ClassImport = __eCNameSpace__eC__types__eSystem_FindClass(module, "ClassImport");
__eCClass_Context = __eCNameSpace__eC__types__eSystem_FindClass(module, "Context");
__eCClass_DBIndexItem = __eCNameSpace__eC__types__eSystem_FindClass(module, "DBIndexItem");
__eCClass_DBTableDef = __eCNameSpace__eC__types__eSystem_FindClass(module, "DBTableDef");
__eCClass_DBTableEntry = __eCNameSpace__eC__types__eSystem_FindClass(module, "DBTableEntry");
__eCClass_DataRedefinition = __eCNameSpace__eC__types__eSystem_FindClass(module, "DataRedefinition");
__eCClass_Declaration = __eCNameSpace__eC__types__eSystem_FindClass(module, "Declaration");
__eCClass_Declarator = __eCNameSpace__eC__types__eSystem_FindClass(module, "Declarator");
__eCClass_DeclaratorType = __eCNameSpace__eC__types__eSystem_FindClass(module, "DeclaratorType");
__eCClass_Enumerator = __eCNameSpace__eC__types__eSystem_FindClass(module, "Enumerator");
__eCClass_Expression = __eCNameSpace__eC__types__eSystem_FindClass(module, "Expression");
__eCClass_ExtDecl = __eCNameSpace__eC__types__eSystem_FindClass(module, "ExtDecl");
__eCClass_External = __eCNameSpace__eC__types__eSystem_FindClass(module, "External");
__eCClass_FunctionDefinition = __eCNameSpace__eC__types__eSystem_FindClass(module, "FunctionDefinition");
__eCClass_FunctionImport = __eCNameSpace__eC__types__eSystem_FindClass(module, "FunctionImport");
__eCClass_GlobalData = __eCNameSpace__eC__types__eSystem_FindClass(module, "GlobalData");
__eCClass_Identifier = __eCNameSpace__eC__types__eSystem_FindClass(module, "Identifier");
__eCClass_ImportedModule = __eCNameSpace__eC__types__eSystem_FindClass(module, "ImportedModule");
__eCClass_InitDeclarator = __eCNameSpace__eC__types__eSystem_FindClass(module, "InitDeclarator");
__eCClass_Initializer = __eCNameSpace__eC__types__eSystem_FindClass(module, "Initializer");
__eCClass_Instantiation = __eCNameSpace__eC__types__eSystem_FindClass(module, "Instantiation");
__eCClass_MemberInit = __eCNameSpace__eC__types__eSystem_FindClass(module, "MemberInit");
__eCClass_MembersInit = __eCNameSpace__eC__types__eSystem_FindClass(module, "MembersInit");
__eCClass_MethodImport = __eCNameSpace__eC__types__eSystem_FindClass(module, "MethodImport");
__eCClass_ModuleImport = __eCNameSpace__eC__types__eSystem_FindClass(module, "ModuleImport");
__eCClass_Pointer = __eCNameSpace__eC__types__eSystem_FindClass(module, "Pointer");
__eCClass_PropertyDef = __eCNameSpace__eC__types__eSystem_FindClass(module, "PropertyDef");
__eCClass_PropertyImport = __eCNameSpace__eC__types__eSystem_FindClass(module, "PropertyImport");
__eCClass_PropertyWatch = __eCNameSpace__eC__types__eSystem_FindClass(module, "PropertyWatch");
__eCClass_Specifier = __eCNameSpace__eC__types__eSystem_FindClass(module, "Specifier");
__eCClass_Statement = __eCNameSpace__eC__types__eSystem_FindClass(module, "Statement");
__eCClass_String = __eCNameSpace__eC__types__eSystem_FindClass(module, "String");
__eCClass_Symbol = __eCNameSpace__eC__types__eSystem_FindClass(module, "Symbol");
__eCClass_TemplateArgument = __eCNameSpace__eC__types__eSystem_FindClass(module, "TemplateArgument");
__eCClass_TemplateDatatype = __eCNameSpace__eC__types__eSystem_FindClass(module, "TemplateDatatype");
__eCClass_TemplateParameter = __eCNameSpace__eC__types__eSystem_FindClass(module, "TemplateParameter");
__eCClass_TemplatedType = __eCNameSpace__eC__types__eSystem_FindClass(module, "TemplatedType");
__eCClass_TopoEdge = __eCNameSpace__eC__types__eSystem_FindClass(module, "TopoEdge");
__eCClass_Type = __eCNameSpace__eC__types__eSystem_FindClass(module, "Type");
__eCProp_Type_isPointerType = _property = __eCNameSpace__eC__types__eClass_FindProperty(__eCClass_Type, "isPointerType", module);
__eCProp_Type_isPointerTypeSize = _property = __eCNameSpace__eC__types__eClass_FindProperty(__eCClass_Type, "isPointerTypeSize", module);
__eCProp_Type_specConst = _property = __eCNameSpace__eC__types__eClass_FindProperty(__eCClass_Type, "specConst", module);
__eCClass_TypeName = __eCNameSpace__eC__types__eSystem_FindClass(module, "TypeName");
__eCClass_char__PTR_ = __eCNameSpace__eC__types__eSystem_FindClass(module, "char *");
_class = __eCNameSpace__eC__types__eSystem_FindClass(module, "class");
method = __eCNameSpace__eC__types__eClass_FindMethod(_class, "OnGetString", module);
if(method)
__eCVMethodID_class_OnGetString = method->vid;
_class = __eCNameSpace__eC__types__eSystem_FindClass(module, "double");
method = __eCNameSpace__eC__types__eClass_FindMethod(_class, "inf", module);
if(method)
__eCMethod_double_inf = method->function;
method = __eCNameSpace__eC__types__eClass_FindMethod(_class, "nan", module);
if(method)
__eCMethod_double_nan = method->function;
__eCProp_double_isInf = _property = __eCNameSpace__eC__types__eClass_FindProperty(_class, "isInf", module);
if(_property)
__eCProp_double_Get_isInf = _property->Get;
__eCProp_double_isNan = _property = __eCNameSpace__eC__types__eClass_FindProperty(_class, "isNan", module);
if(_property)
__eCProp_double_Get_isNan = _property->Get;
__eCProp_double_signBit = _property = __eCNameSpace__eC__types__eClass_FindProperty(_class, "signBit", module);
if(_property)
__eCProp_double_Get_signBit = _property->Get;
__eCClass___eCNameSpace__eC__types__Application = __eCNameSpace__eC__types__eSystem_FindClass(module, "eC::types::Application");
__eCClass___eCNameSpace__eC__types__Instance = __eCNameSpace__eC__types__eSystem_FindClass(module, "eC::types::Instance");
__eCClass___eCNameSpace__eC__containers__LinkList_TPL_TopoEdge__link__EQU__in_ = __eCNameSpace__eC__types__eSystem_FindClass(module, "eC::containers::LinkList<TopoEdge, link = in>");
__eCClass___eCNameSpace__eC__containers__LinkList_TPL_TopoEdge__link__EQU__out_ = __eCNameSpace__eC__types__eSystem_FindClass(module, "eC::containers::LinkList<TopoEdge, link = out>");
__eCClass___eCNameSpace__eC__containers__List_TPL_ClassPropertyValue_ = __eCNameSpace__eC__types__eSystem_FindClass(module, "eC::containers::List<ClassPropertyValue>");
__eCClass___eCNameSpace__eC__containers__List_TPL_Location_ = __eCNameSpace__eC__types__eSystem_FindClass(module, "eC::containers::List<Location>");
__eCClass___eCNameSpace__eC__containers__List_TPL_eC__types__Module_ = __eCNameSpace__eC__types__eSystem_FindClass(module, "eC::containers::List<eC::types::Module>");
__eCClass___eCNameSpace__eC__types__Map_TPL_ContextStringPair__eC__containers__List_TPL_Location___ = __eCNameSpace__eC__types__eSystem_FindClass(module, "eC::types::Map<ContextStringPair, eC::containers::List<Location> >");
__eCClass___eCNameSpace__eC__types__Map_TPL_String__eC__containers__List_TPL_eC__types__Module___ = __eCNameSpace__eC__types__eSystem_FindClass(module, "eC::types::Map<String, eC::containers::List<eC::types::Module> >");
__eCClass___eCNameSpace__eC__types__Module = __eCNameSpace__eC__types__eSystem_FindClass(module, "eC::types::Module");
_class = __eCNameSpace__eC__types__eSystem_FindClass(module, "float");
method = __eCNameSpace__eC__types__eClass_FindMethod(_class, "inf", module);
if(method)
__eCMethod_float_inf = method->function;
method = __eCNameSpace__eC__types__eClass_FindMethod(_class, "nan", module);
if(method)
__eCMethod_float_nan = method->function;
__eCProp_float_isInf = _property = __eCNameSpace__eC__types__eClass_FindProperty(_class, "isInf", module);
if(_property)
__eCProp_float_Get_isInf = _property->Get;
__eCProp_float_isNan = _property = __eCNameSpace__eC__types__eClass_FindProperty(_class, "isNan", module);
if(_property)
__eCProp_float_Get_isNan = _property->Get;
__eCProp_float_signBit = _property = __eCNameSpace__eC__types__eClass_FindProperty(_class, "signBit", module);
if(_property)
__eCProp_float_Get_signBit = _property->Get;
__eCClass_int = __eCNameSpace__eC__types__eSystem_FindClass(module, "int");
__eCClass_uint = __eCNameSpace__eC__types__eSystem_FindClass(module, "uint");
_class = __eCNameSpace__eC__types__eSystem_FindClass(module, "eC::types::Container");
method = __eCNameSpace__eC__types__eClass_FindMethod(_class, "Add", module);
if(method)
__eCVMethodID___eCNameSpace__eC__containers__Container_Add = method->vid;
method = __eCNameSpace__eC__types__eClass_FindMethod(_class, "Free", module);
if(method)
__eCVMethodID___eCNameSpace__eC__containers__Container_Free = method->vid;
method = __eCNameSpace__eC__types__eClass_FindMethod(_class, "GetFirst", module);
if(method)
__eCVMethodID___eCNameSpace__eC__containers__Container_GetFirst = method->vid;
method = __eCNameSpace__eC__types__eClass_FindMethod(_class, "GetNext", module);
if(method)
__eCVMethodID___eCNameSpace__eC__containers__Container_GetNext = method->vid;
method = __eCNameSpace__eC__types__eClass_FindMethod(_class, "Remove", module);
if(method)
__eCVMethodID___eCNameSpace__eC__containers__Container_Remove = method->vid;
__eCClass___eCNameSpace__eC__types__CustomAVLTree = __eCNameSpace__eC__types__eSystem_FindClass(module, "eC::types::CustomAVLTree");
_class = __eCNameSpace__eC__types__eSystem_FindClass(module, "eC::types::Iterator");
__eCProp___eCNameSpace__eC__types__Iterator_data = _property = __eCNameSpace__eC__types__eClass_FindProperty(_class, "data", module);
__eCClass___eCNameSpace__eC__containers__LinkList = __eCNameSpace__eC__types__eSystem_FindClass(module, "eC::containers::LinkList");
__eCClass___eCNameSpace__eC__containers__List = __eCNameSpace__eC__types__eSystem_FindClass(module, "eC::containers::List");
__eCClass___eCNameSpace__eC__types__Map = __eCNameSpace__eC__types__eSystem_FindClass(module, "eC::types::Map");
_class = __eCNameSpace__eC__types__eSystem_FindClass(module, "eC::types::MapIterator");
__eCProp___eCNameSpace__eC__types__MapIterator_key = _property = __eCNameSpace__eC__types__eClass_FindProperty(_class, "key", module);
__eCProp___eCNameSpace__eC__types__MapIterator_map = _property = __eCNameSpace__eC__types__eClass_FindProperty(_class, "map", module);
__eCClass___eCNameSpace__eC__types__TemplateMemberType = __eCNameSpace__eC__types__eSystem_FindClass(module, "eC::types::TemplateMemberType");
__eCClass___eCNameSpace__eC__containers__BTNode = __eCNameSpace__eC__types__eSystem_FindClass(module, "eC::containers::BTNode");
__eCProp___eCNameSpace__eC__containers__BTNode_next = _property = __eCNameSpace__eC__types__eClass_FindProperty(__eCClass___eCNameSpace__eC__containers__BTNode, "next", module);
_class = __eCNameSpace__eC__types__eSystem_FindClass(module, "eC::containers::BinaryTree");
__eCProp___eCNameSpace__eC__containers__BinaryTree_first = _property = __eCNameSpace__eC__types__eClass_FindProperty(_class, "first", module);
_class = __eCNameSpace__eC__types__eSystem_FindClass(module, "eC::files::DualPipe");
__eCClass___eCNameSpace__eC__sys__File = __eCNameSpace__eC__types__eSystem_FindClass(module, "eC::files::File");
method = __eCNameSpace__eC__types__eClass_FindMethod(__eCClass___eCNameSpace__eC__sys__File, "Eof", module);
if(method)
__eCVMethodID___eCNameSpace__eC__files__File_Eof = method->vid;
method = __eCNameSpace__eC__types__eClass_FindMethod(__eCClass___eCNameSpace__eC__sys__File, "GetSize", module);
if(method)
__eCVMethodID___eCNameSpace__eC__files__File_GetSize = method->vid;
method = __eCNameSpace__eC__types__eClass_FindMethod(__eCClass___eCNameSpace__eC__sys__File, "Putc", module);
if(method)
__eCVMethodID___eCNameSpace__eC__files__File_Putc = method->vid;
method = __eCNameSpace__eC__types__eClass_FindMethod(__eCClass___eCNameSpace__eC__sys__File, "Puts", module);
if(method)
__eCVMethodID___eCNameSpace__eC__files__File_Puts = method->vid;
method = __eCNameSpace__eC__types__eClass_FindMethod(__eCClass___eCNameSpace__eC__sys__File, "Read", module);
if(method)
__eCVMethodID___eCNameSpace__eC__files__File_Read = method->vid;
method = __eCNameSpace__eC__types__eClass_FindMethod(__eCClass___eCNameSpace__eC__sys__File, "Seek", module);
if(method)
__eCVMethodID___eCNameSpace__eC__files__File_Seek = method->vid;
method = __eCNameSpace__eC__types__eClass_FindMethod(__eCClass___eCNameSpace__eC__sys__File, "Write", module);
if(method)
__eCVMethodID___eCNameSpace__eC__files__File_Write = method->vid;
__eCClass___eCNameSpace__eC__sys__NamedLink64 = __eCNameSpace__eC__types__eSystem_FindClass(module, "eC::files::NamedLink64");
_class = __eCNameSpace__eC__types__eSystem_FindClass(module, "eC::containers::OldList");
__eCClass___eCNameSpace__eC__files__TempFile = __eCNameSpace__eC__types__eSystem_FindClass(module, "eC::files::TempFile");
__eCNameSpace__eC__i18n__LoadTranslatedStrings("ec", "ec");
}
if(__currentModule == module)
{
__eCCreateModuleInstances_ast();
__eCCreateModuleInstances_loadSymbols();
__eCCreateModuleInstances_pass1();
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
struct __eCNameSpace__eC__containers__BinaryTree nameSpaces;
struct __eCNameSpace__eC__containers__BinaryTree classes;
struct __eCNameSpace__eC__containers__BinaryTree defines;
struct __eCNameSpace__eC__containers__BinaryTree functions;
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

void __eCRegisterModule_ec_main(struct __eCNameSpace__eC__types__Instance * module)
{
struct __eCNameSpace__eC__types__Class __attribute__((unused)) * class;

}

void __eCUnregisterModule_ec_main(struct __eCNameSpace__eC__types__Instance * module)
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
struct Type * dataType;
int type;
int offset;
int memberID;
struct __eCNameSpace__eC__containers__OldList members;
struct __eCNameSpace__eC__containers__BinaryTree membersAlpha;
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
struct Type * dataType;
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

