/* Code generated from eC source file: ecp.main.ec */
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
__attribute__((__common__)) int __eCVMethodID___eCNameSpace__eC__files__File_Eof;

__attribute__((__common__)) int __eCVMethodID___eCNameSpace__eC__files__File_Puts;

__attribute__((__common__)) int __eCVMethodID___eCNameSpace__eC__files__File_Read;

__attribute__((__common__)) int __eCVMethodID___eCNameSpace__eC__files__File_Seek;

__attribute__((__common__)) int __eCVMethodID___eCNameSpace__eC__files__File_Write;

void __eCCreateModuleInstances_ecp();

void __eCDestroyModuleInstances_ecp();

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

__attribute__((__common__)) struct __eCNameSpace__eC__types__Class * __eCClass_char__PTR_;

__attribute__((__common__)) struct __eCNameSpace__eC__types__Class * __eCClass___eCNameSpace__eC__types__Application;

__attribute__((__common__)) struct __eCNameSpace__eC__types__Class * __eCClass___eCNameSpace__eC__types__Module;

__attribute__((__common__)) struct __eCNameSpace__eC__types__Class * __eCClass_Context;

__attribute__((__common__)) struct __eCNameSpace__eC__types__Class * __eCClass_ModuleImport;

__attribute__((__common__)) struct __eCNameSpace__eC__types__Class * __eCClass_Symbol;

__attribute__((__common__)) struct __eCNameSpace__eC__types__Class * __eCClass_Type;

__attribute__((__common__)) struct __eCNameSpace__eC__types__Class * __eCClass___eCNameSpace__eC__files__DualPipe;

__attribute__((__common__)) struct __eCNameSpace__eC__types__Class * __eCClass___eCNameSpace__eC__files__File;

__attribute__((__common__)) struct __eCNameSpace__eC__types__Class * __eCClass___eCNameSpace__eC__files__TempFile;

extern void __eCNameSpace__eC__types__eInstance_SetMethod(struct __eCNameSpace__eC__types__Instance * instance, const char *  name, void *  function);

extern void __eCNameSpace__eC__types__eInstance_IncRef(struct __eCNameSpace__eC__types__Instance * instance);

extern void __eCNameSpace__eC__types__eInstance_Evolve(struct __eCNameSpace__eC__types__Instance **  instancePtr, struct __eCNameSpace__eC__types__Class * _class);

extern void __eCNameSpace__eC__types__eInstance_DecRef(struct __eCNameSpace__eC__types__Instance * instance);

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

__attribute__((__common__)) struct __eCNameSpace__eC__types__Property * __eCProp___eCNameSpace__eC__types__Platform_char__PTR_;

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
struct Type * dataType;
int memberAccess;
} eC_gcc_struct;

struct __eCNameSpace__eC__types__Module;

static struct __eCNameSpace__eC__types__Instance * __currentModule;

__attribute__((__common__)) struct __eCNameSpace__eC__types__Instance * __thisModule;

unsigned int __eCDll_Load_ecrt(struct __eCNameSpace__eC__types__Instance * module);

unsigned int __eCDll_Unload_ecrt(struct __eCNameSpace__eC__types__Instance * module);

unsigned int __eCDll_Load_ec(struct __eCNameSpace__eC__types__Instance * module);

unsigned int __eCDll_Unload_ec(struct __eCNameSpace__eC__types__Instance * module);

void __eCRegisterModule_ecp(struct __eCNameSpace__eC__types__Instance * module);

void __eCUnregisterModule_ecp(struct __eCNameSpace__eC__types__Instance * module);

extern struct __eCNameSpace__eC__types__Instance * __eCNameSpace__eC__types__eModule_LoadStatic(struct __eCNameSpace__eC__types__Instance * fromModule, const char *  name, int importAccess, unsigned int (*  Load)(struct __eCNameSpace__eC__types__Instance * module), unsigned int (*  Unload)(struct __eCNameSpace__eC__types__Instance * module));

extern struct __eCNameSpace__eC__types__Class * __eCNameSpace__eC__types__eSystem_FindClass(struct __eCNameSpace__eC__types__Instance * module, const char *  name);

extern struct __eCNameSpace__eC__types__Property * __eCNameSpace__eC__types__eClass_FindProperty(struct __eCNameSpace__eC__types__Class * _class, const char *  name, struct __eCNameSpace__eC__types__Instance * module);

extern struct __eCNameSpace__eC__types__Method * __eCNameSpace__eC__types__eClass_FindMethod(struct __eCNameSpace__eC__types__Class * _class, const char *  name, struct __eCNameSpace__eC__types__Instance * module);

struct __eCNameSpace__eC__types__Application;

extern struct __eCNameSpace__eC__types__Instance * __eCNameSpace__eC__typeseCrt_Initialize(unsigned int guiApp, int argc, char *  argv[]);

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

void __eCRegisterModule_ecp_main(struct __eCNameSpace__eC__types__Instance * module)
{
struct __eCNameSpace__eC__types__Class __attribute__((unused)) * class;

}

void __eCUnregisterModule_ecp_main(struct __eCNameSpace__eC__types__Instance * module)
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

extern struct __eCNameSpace__eC__types__Class * __eCClass___eCNameSpace__eC__types__Instance;

extern struct __eCNameSpace__eC__types__Class * __eCClass___eCNameSpace__eC__types__Application;

int main(int _argc, char * _argv[])
{
int exitCode;
struct __eCNameSpace__eC__types__Instance * module;
unsigned int setThingsUp = !__thisModule;
__attribute__((unused)) struct __eCNameSpace__eC__types__Class * _class;
__attribute__((unused)) struct __eCNameSpace__eC__types__Method * method;
__attribute__((unused)) struct __eCNameSpace__eC__types__Property * _property;

if(setThingsUp)
__thisModule = __eCNameSpace__eC__typeseCrt_Initialize((unsigned int)1, _argc, (void *)_argv);
__currentModule = module = __thisModule;
if(!__eCNameSpace__eC__types__eModule_LoadStatic(module, "ecrt", 2, (void *)(__eCDll_Load_ecrt), (void *)(__eCDll_Unload_ecrt)))
printf("Error loading eC module \"%s\" (statically linked)\nThings might go very wrong.\n", "ecrt");
if(!__eCNameSpace__eC__types__eModule_LoadStatic(module, "ec", 2, (void *)(__eCDll_Load_ec), (void *)(__eCDll_Unload_ec)))
printf("Error loading eC module \"%s\" (statically linked)\nThings might go very wrong.\n", "ec");
__eCRegisterModule_ecp(module);
__eCClass_char__PTR_ = __eCNameSpace__eC__types__eSystem_FindClass(module, "char *");
__eCClass___eCNameSpace__eC__types__Application = __eCNameSpace__eC__types__eSystem_FindClass(module, "eC::types::Application");
__eCClass___eCNameSpace__eC__types__Module = __eCNameSpace__eC__types__eSystem_FindClass(module, "eC::types::Module");
__eCClass_Context = __eCNameSpace__eC__types__eSystem_FindClass(module, "Context");
__eCClass_ModuleImport = __eCNameSpace__eC__types__eSystem_FindClass(module, "ModuleImport");
__eCClass_Symbol = __eCNameSpace__eC__types__eSystem_FindClass(module, "Symbol");
__eCClass_Type = __eCNameSpace__eC__types__eSystem_FindClass(module, "Type");
_class = __eCNameSpace__eC__types__eSystem_FindClass(module, "eC::types::Platform");
__eCProp___eCNameSpace__eC__types__Platform_char__PTR_ = _property = __eCNameSpace__eC__types__eClass_FindProperty(_class, "char *", module);
_class = __eCNameSpace__eC__types__eSystem_FindClass(module, "eC::containers::BinaryTree");
__eCClass___eCNameSpace__eC__files__DualPipe = __eCNameSpace__eC__types__eSystem_FindClass(module, "eC::files::DualPipe");
__eCClass___eCNameSpace__eC__files__File = __eCNameSpace__eC__types__eSystem_FindClass(module, "eC::files::File");
method = __eCNameSpace__eC__types__eClass_FindMethod(__eCClass___eCNameSpace__eC__files__File, "Eof", module);
if(method)
__eCVMethodID___eCNameSpace__eC__files__File_Eof = method->vid;
method = __eCNameSpace__eC__types__eClass_FindMethod(__eCClass___eCNameSpace__eC__files__File, "Puts", module);
if(method)
__eCVMethodID___eCNameSpace__eC__files__File_Puts = method->vid;
method = __eCNameSpace__eC__types__eClass_FindMethod(__eCClass___eCNameSpace__eC__files__File, "Read", module);
if(method)
__eCVMethodID___eCNameSpace__eC__files__File_Read = method->vid;
method = __eCNameSpace__eC__types__eClass_FindMethod(__eCClass___eCNameSpace__eC__files__File, "Seek", module);
if(method)
__eCVMethodID___eCNameSpace__eC__files__File_Seek = method->vid;
method = __eCNameSpace__eC__types__eClass_FindMethod(__eCClass___eCNameSpace__eC__files__File, "Write", module);
if(method)
__eCVMethodID___eCNameSpace__eC__files__File_Write = method->vid;
_class = __eCNameSpace__eC__types__eSystem_FindClass(module, "eC::containers::OldList");
__eCClass___eCNameSpace__eC__files__TempFile = __eCNameSpace__eC__types__eSystem_FindClass(module, "eC::files::TempFile");
__eCNameSpace__eC__i18n__LoadTranslatedStrings((((void *)0)), "ecp");
_class = __eCNameSpace__eC__types__eSystem_FindClass(__currentModule, "PrecompApp");
if(setThingsUp)
__eCNameSpace__eC__types__eInstance_Evolve((struct __eCNameSpace__eC__types__Instance **)&__currentModule, _class);
__thisModule = __currentModule;
__eCCreateModuleInstances_ecp();
((void (*)(void *))(void *)((struct __eCNameSpace__eC__types__Instance *)(char *)__currentModule)->_vTbl[12])(__currentModule);
__eCDestroyModuleInstances_ecp();
__eCNameSpace__eC__i18n__UnloadTranslatedStrings("ecp");
_class = __eCNameSpace__eC__types__eSystem_FindClass(__currentModule, "eC::types::Application");
exitCode = ((struct __eCNameSpace__eC__types__Application *)(((char *)((struct __eCNameSpace__eC__types__Instance *)__currentModule) + sizeof(struct __eCNameSpace__eC__types__Module) + sizeof(struct __eCNameSpace__eC__types__Instance))))->exitCode;
(__eCNameSpace__eC__types__eInstance_DecRef(__currentModule), __currentModule = 0);
return exitCode;
}

