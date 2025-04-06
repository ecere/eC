/* Code generated from eC source file: ecc.ec */
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
static struct Context * globalContext;

extern struct __eCNameSpace__eC__types__Property * __eCProp___eCNameSpace__eC__types__Platform_char__PTR_;

struct __eCNameSpace__eC__containers__OldList
{
void *  first;
void *  last;
int count;
unsigned int offset;
unsigned int circ;
} eC_gcc_struct;

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

struct External;

struct CodePosition
{
int line;
int charPos;
int pos;
int included;
} eC_gcc_struct;

struct Expression;

extern int GetRuntimeBits(void);

extern void SetSymbolsDir(const char *  s);

extern int strcmp(const char * , const char * );

extern size_t strlen(const char * );

extern char *  strcpy(char * , const char * );

extern char *  PassArg(char *  output, const char *  input);

extern void SetBuildingEcereCom(unsigned int b);

extern void SetBuildingEcereComModule(unsigned int b);

extern char *  __eCNameSpace__eC__types__CopyString(const char *  string);

extern const char *  GetOutputFile(void);

extern void SetOutputFile(const char *  s);

extern const char *  GetSourceFile(void);

extern void SetSourceFile(const char *  s);

extern void SetI18nModuleName(const char *  s);

extern void SetMemoryGuard(unsigned int b);

extern void SetDefaultNameSpace(const char *  s);

extern void SetStrictNameSpaces(unsigned int b);

extern void SetOutputLineNumbers(unsigned int value);

extern char *  __eCNameSpace__eC__types__PathCat(char *  string, const char *  addedPath);

extern char *  __eCNameSpace__eC__types__ChangeExtension(const char *  string, const char *  ext, char *  output);

extern int printf(const char * , ...);

extern const char *  __eCNameSpace__eC__i18n__GetTranslatedString(const char * name, const char *  string, const char *  stringAndContext);

extern void SetInCompiler(unsigned int b);

extern void SetTargetPlatform(int platform);

extern void SetTargetBits(int bits);

extern void SetEchoOn(unsigned int b);

struct ClassDefinition;

extern int snprintf(char * , size_t, const char * , ...);

extern char *  __eCNameSpace__eC__types__GetLastDirectory(const char *  string, char *  output);

extern unsigned int __eCNameSpace__eC__types__StripExtension(char *  string);

extern void resetScanner(void);

extern const char *  GetSymbolsDir(void);

extern unsigned int LoadSymbols(const char *  fileName, int importType, unsigned int loadDllOnly);

extern int strcasecmp(const char * , const char * );

extern unsigned int GetEcereImported(void);

extern unsigned int GetBuildingECRT(void);

extern void ParseEc(void);

extern void CheckDataRedefinitions(void);

extern void SetYydebug(unsigned int b);

extern void SetCurrentNameSpace(const char *  s);

extern void SetDeclMode(int accessMode);

extern void ProcessDBTableDefinitions(void);

extern void PrePreProcessClassDefinitions(void);

extern void PreProcessClassDefinitions(void);

extern void ProcessClassDefinitions(void);

extern void ComputeDataTypes(void);

extern void ProcessInstantiations(void);

extern void ProcessMemberAccess(void);

extern void ProcessInstanceDeclarations(void);

struct Definition;

extern void FreeIncludeFiles(void);

extern void OutputIntlStrings(void);

const char *  __eCProp___eCNameSpace__eC__types__Platform_Get_char__PTR_(int this);

int __eCProp___eCNameSpace__eC__types__Platform_Set_char__PTR_(const char *  value);

static struct __eCNameSpace__eC__containers__OldList defines, imports;

extern void SetExcludedSymbols(struct __eCNameSpace__eC__containers__OldList *  list);

extern void SetDefines(struct __eCNameSpace__eC__containers__OldList *  list);

extern void SetImports(struct __eCNameSpace__eC__containers__OldList *  list);

extern struct __eCNameSpace__eC__containers__OldList *  GetAST(void);

extern void FreeASTTree(struct __eCNameSpace__eC__containers__OldList * ast);

extern void FreeExcludedSymbols(struct __eCNameSpace__eC__containers__OldList * excludedSymbols);

void __eCMethod___eCNameSpace__eC__containers__OldList_Add(struct __eCNameSpace__eC__containers__OldList * this, void *  item);

unsigned int __eCMethod___eCNameSpace__eC__containers__OldList_AddName(struct __eCNameSpace__eC__containers__OldList * this, void *  item);

void __eCMethod___eCNameSpace__eC__containers__OldList_Delete(struct __eCNameSpace__eC__containers__OldList * this, void *  item);

void __eCMethod___eCNameSpace__eC__containers__OldList_Free(struct __eCNameSpace__eC__containers__OldList * this, void (*  freeFn)(void * ));

extern struct Type * ProcessTypeString(const char *  string, unsigned int staticMethod);

struct Location
{
struct CodePosition start;
struct CodePosition end;
} eC_gcc_struct;

extern void FreeModuleDefine(struct Definition * def);

struct ModuleImport;

static struct ModuleImport * mainModule;

struct ModuleImport
{
struct ModuleImport * prev;
struct ModuleImport * next;
char *  name;
struct __eCNameSpace__eC__containers__OldList classes;
struct __eCNameSpace__eC__containers__OldList functions;
int importType;
int importAccess;
} eC_gcc_struct;

extern void SetMainModule(struct ModuleImport * moduleImport);

extern void FreeModuleImport(struct ModuleImport * imp);

struct __eCNameSpace__eC__containers__BTNode;

struct __eCNameSpace__eC__containers__BTNode
{
uintptr_t key;
struct __eCNameSpace__eC__containers__BTNode * parent;
struct __eCNameSpace__eC__containers__BTNode * left;
struct __eCNameSpace__eC__containers__BTNode * right;
int depth;
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

extern void *  __eCNameSpace__eC__types__eInstance_New(struct __eCNameSpace__eC__types__Class * _class);

extern void __eCNameSpace__eC__types__eInstance_SetMethod(struct __eCNameSpace__eC__types__Instance * instance, const char *  name, void *  function);

extern void __eCNameSpace__eC__types__eInstance_IncRef(struct __eCNameSpace__eC__types__Instance * instance);

extern struct __eCNameSpace__eC__types__Instance * __eCNameSpace__eC__files__FileOpen(const char *  fileName, int mode);

extern struct __eCNameSpace__eC__types__Instance * __eCNameSpace__eC__files__DualPipeOpen(unsigned int mode, const char *  commandLine);

extern void SetFileInput(struct __eCNameSpace__eC__types__Instance * file);

extern void OutputTree(struct __eCNameSpace__eC__containers__OldList * ast, struct __eCNameSpace__eC__types__Instance * f);

int __eCMethod___eCNameSpace__eC__files__File_Printf(struct __eCNameSpace__eC__types__Instance * this, const char *  format, ...);

extern void __eCNameSpace__eC__types__eInstance_DecRef(struct __eCNameSpace__eC__types__Instance * instance);

extern int __eCVMethodID___eCNameSpace__eC__files__File_Eof;

extern int __eCVMethodID___eCNameSpace__eC__files__File_Read;

extern int __eCVMethodID___eCNameSpace__eC__files__File_Write;

int __eCMethod___eCNameSpace__eC__files__DualPipe_GetExitCode(struct __eCNameSpace__eC__types__Instance * this);

extern int __eCVMethodID___eCNameSpace__eC__files__File_Seek;

struct FunctionImport;

struct FunctionImport
{
struct FunctionImport * prev;
struct FunctionImport * next;
char *  name;
} eC_gcc_struct;

struct MethodImport;

struct MethodImport
{
struct MethodImport * prev;
struct MethodImport * next;
char *  name;
unsigned int isVirtual;
} eC_gcc_struct;

struct PropertyImport;

struct PropertyImport
{
struct PropertyImport * prev;
struct PropertyImport * next;
char *  name;
unsigned int isVirtual;
unsigned int hasSet;
unsigned int hasGet;
} eC_gcc_struct;

struct __eCNameSpace__eC__types__NameSpace;

extern void SetGlobalData(struct __eCNameSpace__eC__types__NameSpace *  nameSpace);

struct Context;

extern void SetGlobalContext(struct Context * context);

extern void SetCurrentContext(struct Context * context);

extern void SetTopContext(struct Context * context);

extern void FreeContext(struct Context * context);

struct ImportedModule;

struct ImportedModule
{
struct ImportedModule * prev;
struct ImportedModule * next;
char *  name;
int type;
int importType;
unsigned int globalInstance;
unsigned int dllOnly;
int importAccess;
} eC_gcc_struct;

struct ClassImport;

struct ClassImport
{
struct ClassImport * prev;
struct ClassImport * next;
char *  name;
struct __eCNameSpace__eC__containers__OldList methods;
struct __eCNameSpace__eC__containers__OldList properties;
unsigned int itself;
int isRemote;
} eC_gcc_struct;

static void OutputImports(char * fileName)
{
struct __eCNameSpace__eC__types__Instance * f = __eCNameSpace__eC__files__FileOpen(fileName, 2);

if(f)
{
if(imports.first)
{
struct ModuleImport * module;

__eCMethod___eCNameSpace__eC__files__File_Printf(f, "[Imported Modules]\n");
for(module = imports.first; module; module = module->next)
{
struct ClassImport * _class;
struct FunctionImport * function;

if(module->name)
__eCMethod___eCNameSpace__eC__files__File_Printf(f, "   %s\n", module->name);
else
__eCMethod___eCNameSpace__eC__files__File_Printf(f, "   [This]\n");
if(module->importType == 1)
__eCMethod___eCNameSpace__eC__files__File_Printf(f, "      [Static]\n");
else if(module->importType == 2)
__eCMethod___eCNameSpace__eC__files__File_Printf(f, "      [Remote]\n");
if(module->importAccess == 2)
__eCMethod___eCNameSpace__eC__files__File_Printf(f, "      [Private]\n");
else
__eCMethod___eCNameSpace__eC__files__File_Printf(f, "      [Public]\n");
if(module->classes.first)
{
__eCMethod___eCNameSpace__eC__files__File_Printf(f, "      [Imported Classes]\n");
for(_class = module->classes.first; _class; _class = _class->next)
{
__eCMethod___eCNameSpace__eC__files__File_Printf(f, "         %s\n", _class->name);
if(_class->itself)
{
__eCMethod___eCNameSpace__eC__files__File_Printf(f, "            [Instantiated]\n");
}
if(_class->isRemote)
{
__eCMethod___eCNameSpace__eC__files__File_Printf(f, "            [Remote]\n");
}
if(_class->methods.first)
{
struct MethodImport * method;

__eCMethod___eCNameSpace__eC__files__File_Printf(f, "            [Imported Methods]\n");
for(method = _class->methods.first; method; method = method->next)
{
__eCMethod___eCNameSpace__eC__files__File_Printf(f, "               %s\n", method->name);
if(method->isVirtual)
__eCMethod___eCNameSpace__eC__files__File_Printf(f, "                  [Virtual]\n");
}
__eCMethod___eCNameSpace__eC__files__File_Printf(f, "               .\n");
}
if(_class->properties.first)
{
struct PropertyImport * prop;

__eCMethod___eCNameSpace__eC__files__File_Printf(f, "            [Imported Properties]\n");
for(prop = _class->properties.first; prop; prop = prop->next)
{
__eCMethod___eCNameSpace__eC__files__File_Printf(f, "               %s\n", prop->name);
if(prop->isVirtual)
__eCMethod___eCNameSpace__eC__files__File_Printf(f, "                  [Virtual]\n");
if(prop->hasSet)
__eCMethod___eCNameSpace__eC__files__File_Printf(f, "                  [Set]\n");
if(prop->hasGet)
__eCMethod___eCNameSpace__eC__files__File_Printf(f, "                  [Get]\n");
}
__eCMethod___eCNameSpace__eC__files__File_Printf(f, "               .\n");
}
}
__eCMethod___eCNameSpace__eC__files__File_Printf(f, "        .\n");
}
if(module->functions.first)
{
__eCMethod___eCNameSpace__eC__files__File_Printf(f, "      [Imported Functions]\n");
for(function = module->functions.first; function; function = function->next)
{
__eCMethod___eCNameSpace__eC__files__File_Printf(f, "         %s\n", function->name);
}
__eCMethod___eCNameSpace__eC__files__File_Printf(f, "        .\n");
}
}
__eCMethod___eCNameSpace__eC__files__File_Printf(f, "   .\n");
}
}
(__eCNameSpace__eC__types__eInstance_DecRef(f), f = 0);
}

struct __eCNameSpace__eC__containers__BinaryTree;

struct __eCNameSpace__eC__containers__BinaryTree
{
struct __eCNameSpace__eC__containers__BTNode * root;
int count;
int (*  CompareKey)(struct __eCNameSpace__eC__containers__BinaryTree * tree, uintptr_t a, uintptr_t b);
void (*  FreeKey)(void *  key);
} eC_gcc_struct;

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

struct Context
{
struct Context * parent;
struct __eCNameSpace__eC__containers__BinaryTree types;
struct __eCNameSpace__eC__containers__BinaryTree classes;
struct __eCNameSpace__eC__containers__BinaryTree symbols;
struct __eCNameSpace__eC__containers__BinaryTree structSymbols;
int nextID;
int simpleID;
struct __eCNameSpace__eC__containers__BinaryTree templateTypes;
struct ClassDefinition * classDef;
unsigned int templateTypesOnly;
unsigned int hasNameSpace;
} eC_gcc_struct;

unsigned int __eCMethod___eCNameSpace__eC__containers__BinaryTree_Add(struct __eCNameSpace__eC__containers__BinaryTree * this, struct __eCNameSpace__eC__containers__BTNode * node);

int __eCMethod___eCNameSpace__eC__containers__BinaryTree_CompareString(struct __eCNameSpace__eC__containers__BinaryTree * this, const char *  a, const char *  b);

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

static struct __eCNameSpace__eC__types__NameSpace globalData;

extern void FreeGlobalData(struct __eCNameSpace__eC__types__NameSpace * globalDataList);

extern struct __eCNameSpace__eC__types__Instance * __eCNameSpace__eC__typeseCrt_Initialize(unsigned int guiApp, int argc, char *  argv[]);

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
struct Type * dataType;
int memberAccess;
} eC_gcc_struct;

extern struct __eCNameSpace__eC__types__Method * __eCNameSpace__eC__types__eClass_AddMethod(struct __eCNameSpace__eC__types__Class * _class, const char *  name, const char *  type, void *  function, int declMode);

struct __eCNameSpace__eC__types__Module;

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

static struct __eCNameSpace__eC__types__Instance * privateModule;

extern void SetPrivateModule(struct __eCNameSpace__eC__types__Instance * module);

struct GlobalData
{
uintptr_t key;
struct __eCNameSpace__eC__containers__BTNode * parent;
struct __eCNameSpace__eC__containers__BTNode * left;
struct __eCNameSpace__eC__containers__BTNode * right;
int depth;
struct __eCNameSpace__eC__types__Instance * module;
char *  dataTypeString;
struct Type * dataType;
void *  symbol;
char *  fullName;
char __eC_padding1[4];
} eC_gcc_struct;

extern struct __eCNameSpace__eC__types__Instance * __eCNameSpace__eC__types__eModule_LoadStrict(struct __eCNameSpace__eC__types__Instance * fromModule, const char *  name, int importAccess);

extern void ComputeModuleClasses(struct __eCNameSpace__eC__types__Instance * module);

extern void FreeTypeData(struct __eCNameSpace__eC__types__Instance * privateModule);

extern struct __eCNameSpace__eC__types__Class * __eCNameSpace__eC__types__eSystem_RegisterClass(int type, const char *  name, const char *  baseName, int size, int sizeClass, unsigned int (*  Constructor)(void * ), void (*  Destructor)(void * ), struct __eCNameSpace__eC__types__Instance * module, int declMode, int inheritanceAccess);

extern struct __eCNameSpace__eC__types__Instance * __thisModule;

void __eCUnregisterModule_ecc(struct __eCNameSpace__eC__types__Instance * module)
{

}

static struct __eCNameSpace__eC__types__Class * __eCClass_CompilerApp;

extern void __eCNameSpace__eC__types__PrintLn(struct __eCNameSpace__eC__types__Class * class, const void * object, ...);

extern struct __eCNameSpace__eC__types__Class * __eCClass_Symbol;

extern struct __eCNameSpace__eC__types__Class * __eCClass_GlobalData;

extern struct __eCNameSpace__eC__types__Class * __eCClass___eCNameSpace__eC__files__TempFile;

extern struct __eCNameSpace__eC__types__Class * __eCClass_ModuleImport;

extern struct __eCNameSpace__eC__types__Class * __eCClass_ImportedModule;

extern struct __eCNameSpace__eC__types__Class * __eCClass_Context;

extern struct __eCNameSpace__eC__types__Class * __eCClass___eCNameSpace__eC__types__Application;

extern struct __eCNameSpace__eC__types__Class * __eCClass_char__PTR_;

extern struct __eCNameSpace__eC__types__Class * __eCClass___eCNameSpace__eC__files__DualPipe;

extern struct __eCNameSpace__eC__types__Class * __eCClass___eCNameSpace__eC__types__Module;

void __eCCreateModuleInstances_ecc()
{
globalContext = __eCNameSpace__eC__types__eInstance_New(__eCClass_Context);
(globalData.classes.CompareKey = (void *)__eCMethod___eCNameSpace__eC__containers__BinaryTree_CompareString, globalData.defines.CompareKey = (void *)__eCMethod___eCNameSpace__eC__containers__BinaryTree_CompareString, globalData.functions.CompareKey = (void *)__eCMethod___eCNameSpace__eC__containers__BinaryTree_CompareString, globalData.nameSpaces.CompareKey = (void *)__eCMethod___eCNameSpace__eC__containers__BinaryTree_CompareString);
}

void __eCDestroyModuleInstances_ecc()
{
((globalContext ? __extension__ ({
void * __eCPtrToDelete = (globalContext);

__eCClass_Context->Destructor ? __eCClass_Context->Destructor((void *)__eCPtrToDelete) : 0, __eCNameSpace__eC__types__eSystem_Delete(__eCPtrToDelete);
}) : 0), globalContext = 0);
}

struct Symbol;

struct Symbol
{
char *  string;
struct Symbol * parent;
struct Symbol * left;
struct Symbol * right;
int depth;
struct Type * type;
union
{
struct __eCNameSpace__eC__types__Method * method;
struct __eCNameSpace__eC__types__Property * _property;
struct __eCNameSpace__eC__types__Class * registered;
} eC_gcc_struct __anon1;
unsigned int notYetDeclared;
union
{
struct
{
struct External * pointerExternal;
struct External * structExternal;
} eC_gcc_struct __anon1;
struct
{
struct External * externalGet;
struct External * externalSet;
struct External * externalPtr;
struct External * externalIsSet;
} eC_gcc_struct __anon2;
struct
{
struct External * methodExternal;
struct External * methodCodeExternal;
} eC_gcc_struct __anon3;
} eC_gcc_struct __anon2;
unsigned int imported;
unsigned int declaredStructSym;
struct __eCNameSpace__eC__types__Class * _class;
unsigned int declaredStruct;
unsigned int needConstructor;
unsigned int needDestructor;
char *  constructorName;
char *  structName;
char *  className;
char *  destructorName;
struct ModuleImport * module;
struct ClassImport * _import;
struct Location nameLoc;
unsigned int isParam;
unsigned int isRemote;
unsigned int isStruct;
unsigned int fireWatchersDone;
int declaring;
unsigned int classData;
unsigned int isStatic;
char *  shortName;
struct __eCNameSpace__eC__containers__OldList *  templateParams;
struct __eCNameSpace__eC__containers__OldList templatedClasses;
struct Context * ctx;
int isIterator;
struct Expression * propCategory;
unsigned int mustRegister;
} eC_gcc_struct;

struct __eCNameSpace__eC__containers__OldList _excludedSymbols =
{
0, 0, 0, (unsigned int)(uintptr_t)&((struct Symbol *)(void * )0)->left, 0
};

void __eCMethod_CompilerApp_Main(struct __eCNameSpace__eC__types__Instance * this)
{
char * cppCommand = (((void *)0));
char * cppOptions = (((void *)0));
int cppOptionsLen = 0;
int c;
unsigned int valid = 1;
char defaultOutputFile[797];
unsigned int buildingBootStrap = 0;
int targetPlatform = __runtimePlatform;
int targetBits = GetRuntimeBits();

SetSymbolsDir("");
for(c = 1; c < ((struct __eCNameSpace__eC__types__Application *)(((char *)this + sizeof(struct __eCNameSpace__eC__types__Module) + sizeof(struct __eCNameSpace__eC__types__Instance))))->argc; c++)
{
const char * arg = ((struct __eCNameSpace__eC__types__Application *)(((char *)this + sizeof(struct __eCNameSpace__eC__types__Module) + sizeof(struct __eCNameSpace__eC__types__Instance))))->argv[c];

if(arg[0] == '-')
{
if(!strcmp(arg + 1, "m32") || !strcmp(arg + 1, "m64"))
{
int newLen = cppOptionsLen + 1 + strlen(arg);

cppOptions = __eCNameSpace__eC__types__eSystem_Renew(cppOptions, sizeof(char) * (newLen + 1));
cppOptions[cppOptionsLen] = ' ';
strcpy(cppOptions + cppOptionsLen + 1, arg);
cppOptionsLen = newLen;
targetBits = !strcmp(arg + 1, "m32") ? 32 : 64;
}
else if(!strcmp(arg + 1, "t32") || !strcmp(arg + 1, "t64"))
{
targetBits = !strcmp(arg + 1, "t32") ? 32 : 64;
}
else if(arg[1] == 'D' || arg[1] == 'I')
{
char * buf;
int size = cppOptionsLen + 1 + strlen(arg) * 2 + 1;

cppOptions = __eCNameSpace__eC__types__eSystem_Renew(cppOptions, sizeof(char) * (size));
buf = cppOptions + cppOptionsLen;
*buf++ = ' ';
PassArg(buf, arg);
cppOptionsLen = cppOptionsLen + 1 + strlen(buf);
if(arg[1] == 'D')
{
if(!strcmp(arg, "-DBUILDING_ECRT"))
SetBuildingEcereCom(1);
else if(!strcmp(arg, "-DECRT_MODULE"))
SetBuildingEcereComModule(1);
else if(!strcmp(arg, "-DECERE_BOOTSTRAP"))
buildingBootStrap = 1;
}
}
else if(!strcmp(arg + 1, "t"))
{
if(++c < ((struct __eCNameSpace__eC__types__Application *)(((char *)this + sizeof(struct __eCNameSpace__eC__types__Module) + sizeof(struct __eCNameSpace__eC__types__Instance))))->argc)
{
targetPlatform = __eCProp___eCNameSpace__eC__types__Platform_Set_char__PTR_(((struct __eCNameSpace__eC__types__Application *)(((char *)this + sizeof(struct __eCNameSpace__eC__types__Module) + sizeof(struct __eCNameSpace__eC__types__Instance))))->argv[c]);
if(targetPlatform == 0)
{
__eCNameSpace__eC__types__PrintLn(__eCClass_char__PTR_, "Unknown platform: ", __eCClass_char__PTR_, ((struct __eCNameSpace__eC__types__Application *)(((char *)this + sizeof(struct __eCNameSpace__eC__types__Module) + sizeof(struct __eCNameSpace__eC__types__Instance))))->argv[c], (void *)0);
if(!strcmp(((struct __eCNameSpace__eC__types__Application *)(((char *)this + sizeof(struct __eCNameSpace__eC__types__Module) + sizeof(struct __eCNameSpace__eC__types__Instance))))->argv[c], "32") || !strcmp(((struct __eCNameSpace__eC__types__Application *)(((char *)this + sizeof(struct __eCNameSpace__eC__types__Module) + sizeof(struct __eCNameSpace__eC__types__Instance))))->argv[c], "64"))
__eCNameSpace__eC__types__PrintLn(__eCClass_char__PTR_, "hint: bitness is specified with -t32 or -t64 without a space", (void *)0);
valid = 0;
}
}
else
valid = 0;
}
else if(!strcmp(arg + 1, "cpp"))
{
if(++c < ((struct __eCNameSpace__eC__types__Application *)(((char *)this + sizeof(struct __eCNameSpace__eC__types__Module) + sizeof(struct __eCNameSpace__eC__types__Instance))))->argc)
cppCommand = __eCNameSpace__eC__types__CopyString(((struct __eCNameSpace__eC__types__Application *)(((char *)this + sizeof(struct __eCNameSpace__eC__types__Module) + sizeof(struct __eCNameSpace__eC__types__Instance))))->argv[c]);
else
valid = 0;
}
else if(!strcmp(arg + 1, "o"))
{
if(!GetOutputFile() && c + 1 < ((struct __eCNameSpace__eC__types__Application *)(((char *)this + sizeof(struct __eCNameSpace__eC__types__Module) + sizeof(struct __eCNameSpace__eC__types__Instance))))->argc)
{
SetOutputFile(((struct __eCNameSpace__eC__types__Application *)(((char *)this + sizeof(struct __eCNameSpace__eC__types__Module) + sizeof(struct __eCNameSpace__eC__types__Instance))))->argv[c + 1]);
c++;
}
else
valid = 0;
}
else if(!strcmp(arg + 1, "c"))
{
if(!GetSourceFile() && c + 1 < ((struct __eCNameSpace__eC__types__Application *)(((char *)this + sizeof(struct __eCNameSpace__eC__types__Module) + sizeof(struct __eCNameSpace__eC__types__Instance))))->argc)
{
SetSourceFile(((struct __eCNameSpace__eC__types__Application *)(((char *)this + sizeof(struct __eCNameSpace__eC__types__Module) + sizeof(struct __eCNameSpace__eC__types__Instance))))->argv[c + 1]);
c++;
}
else
valid = 0;
}
else if(!strcmp(arg + 1, "isystem") || !strcmp(arg + 1, "isysroot") || !strcmp(arg + 1, "s") || !strcmp(arg + 1, "include") || !strcmp(arg, "--source-map-base"))
{
if(c + 1 < ((struct __eCNameSpace__eC__types__Application *)(((char *)this + sizeof(struct __eCNameSpace__eC__types__Module) + sizeof(struct __eCNameSpace__eC__types__Instance))))->argc)
{
char * buf;
const char * arg1 = ((struct __eCNameSpace__eC__types__Application *)(((char *)this + sizeof(struct __eCNameSpace__eC__types__Module) + sizeof(struct __eCNameSpace__eC__types__Instance))))->argv[++c];
int size = cppOptionsLen + 1 + strlen(arg) * 2 + strlen(arg1) * 2 + 1;

cppOptions = __eCNameSpace__eC__types__eSystem_Renew(cppOptions, sizeof(char) * (size));
buf = cppOptions + cppOptionsLen;
*buf++ = ' ';
buf = PassArg(buf, arg);
*buf++ = ' ';
buf = PassArg(buf, arg1);
cppOptionsLen = buf - cppOptions;
}
else
valid = 0;
}
else if(!strcmp(arg + 1, "fno-diagnostics-show-caret"))
{
char * buf;
int size = cppOptionsLen + 1 + strlen(arg) * 2 + 1;

cppOptions = __eCNameSpace__eC__types__eSystem_Renew(cppOptions, sizeof(char) * (size));
buf = cppOptions + cppOptionsLen;
*buf++ = ' ';
PassArg(buf, arg);
cppOptionsLen = cppOptionsLen + 1 + strlen(buf);
}
else if(!strcmp(arg + 1, "symbols"))
{
if(c + 1 < ((struct __eCNameSpace__eC__types__Application *)(((char *)this + sizeof(struct __eCNameSpace__eC__types__Module) + sizeof(struct __eCNameSpace__eC__types__Instance))))->argc)
{
SetSymbolsDir(((struct __eCNameSpace__eC__types__Application *)(((char *)this + sizeof(struct __eCNameSpace__eC__types__Module) + sizeof(struct __eCNameSpace__eC__types__Instance))))->argv[c + 1]);
c++;
}
else
valid = 0;
}
else if(!strcmp(arg + 1, "module"))
{
if(c + 1 < ((struct __eCNameSpace__eC__types__Application *)(((char *)this + sizeof(struct __eCNameSpace__eC__types__Module) + sizeof(struct __eCNameSpace__eC__types__Instance))))->argc)
{
SetI18nModuleName(((struct __eCNameSpace__eC__types__Application *)(((char *)this + sizeof(struct __eCNameSpace__eC__types__Module) + sizeof(struct __eCNameSpace__eC__types__Instance))))->argv[c + 1]);
c++;
}
else
valid = 0;
}
else if(!strcmp(arg + 1, "memguard"))
{
SetMemoryGuard(1);
}
else if(!strcmp(arg + 1, "defaultns"))
{
if(c + 1 < ((struct __eCNameSpace__eC__types__Application *)(((char *)this + sizeof(struct __eCNameSpace__eC__types__Module) + sizeof(struct __eCNameSpace__eC__types__Instance))))->argc)
{
SetDefaultNameSpace(((struct __eCNameSpace__eC__types__Application *)(((char *)this + sizeof(struct __eCNameSpace__eC__types__Module) + sizeof(struct __eCNameSpace__eC__types__Instance))))->argv[c + 1]);
c++;
}
else
valid = 0;
}
else if(!strcmp(arg + 1, "strictns"))
{
SetStrictNameSpaces(1);
}
else if(!strcmp(arg + 1, "nolinenumbers"))
{
SetOutputLineNumbers(0);
}
}
else
valid = 0;
}
if(valid)
{
if(!cppCommand)
cppCommand = __eCNameSpace__eC__types__CopyString("gcc");
if(!GetSourceFile())
valid = 0;
else if(!GetOutputFile())
{
strcpy(defaultOutputFile, "");
__eCNameSpace__eC__types__PathCat(defaultOutputFile, GetSourceFile());
__eCNameSpace__eC__types__ChangeExtension(defaultOutputFile, "c", defaultOutputFile);
SetOutputFile(defaultOutputFile);
}
}
if(!valid)
{
printf("%s", __eCNameSpace__eC__i18n__GetTranslatedString("ecc", "Syntax:\n   ecc [-t <target platform>] [-cpp <c preprocessor>] [-o <output>] [-module <module>] [-symbols <outputdir>] [-I<includedir>]* [-isystem <sysincludedir>]* [-D<definition>]* -c <input>\n", (((void *)0))));
}
else
{
struct __eCNameSpace__eC__types__Instance * cppOutput;
char command[3075];

SetGlobalData(&globalData);
SetExcludedSymbols(&_excludedSymbols);
SetGlobalContext(globalContext);
SetCurrentContext(globalContext);
SetTopContext(globalContext);
SetDefines(&defines);
SetImports(&imports);
SetInCompiler(1);
SetTargetPlatform(targetPlatform);
SetTargetBits(targetBits);
SetEchoOn(0);
privateModule = (struct __eCNameSpace__eC__types__Instance *)__eCNameSpace__eC__typeseCrt_Initialize((unsigned int)(1 | (targetBits == sizeof(uintptr_t) * 8 ? (unsigned int)0 : targetBits == 64 ? 2 : targetBits == 32 ? 4 : (unsigned int)0) | 8), 1, (((void *)0)));
SetPrivateModule(privateModule);
__eCMethod___eCNameSpace__eC__containers__BinaryTree_Add(&globalContext->types, (struct __eCNameSpace__eC__containers__BTNode *)__extension__ ({
struct Symbol * __eCInstance1 = __eCNameSpace__eC__types__eInstance_New(__eCClass_Symbol);

__eCInstance1->string = __eCNameSpace__eC__types__CopyString("uint"), __eCInstance1->type = ProcessTypeString("unsigned int", 0), __eCInstance1;
}));
__eCMethod___eCNameSpace__eC__containers__BinaryTree_Add(&globalContext->types, (struct __eCNameSpace__eC__containers__BTNode *)__extension__ ({
struct Symbol * __eCInstance1 = __eCNameSpace__eC__types__eInstance_New(__eCClass_Symbol);

__eCInstance1->string = __eCNameSpace__eC__types__CopyString("uint64"), __eCInstance1->type = ProcessTypeString("unsigned int64", 0), __eCInstance1;
}));
__eCMethod___eCNameSpace__eC__containers__BinaryTree_Add(&globalContext->types, (struct __eCNameSpace__eC__containers__BTNode *)__extension__ ({
struct Symbol * __eCInstance1 = __eCNameSpace__eC__types__eInstance_New(__eCClass_Symbol);

__eCInstance1->string = __eCNameSpace__eC__types__CopyString("uint32"), __eCInstance1->type = ProcessTypeString("unsigned int", 0), __eCInstance1;
}));
__eCMethod___eCNameSpace__eC__containers__BinaryTree_Add(&globalContext->types, (struct __eCNameSpace__eC__containers__BTNode *)__extension__ ({
struct Symbol * __eCInstance1 = __eCNameSpace__eC__types__eInstance_New(__eCClass_Symbol);

__eCInstance1->string = __eCNameSpace__eC__types__CopyString("uint16"), __eCInstance1->type = ProcessTypeString("unsigned short", 0), __eCInstance1;
}));
__eCMethod___eCNameSpace__eC__containers__BinaryTree_Add(&globalContext->types, (struct __eCNameSpace__eC__containers__BTNode *)__extension__ ({
struct Symbol * __eCInstance1 = __eCNameSpace__eC__types__eInstance_New(__eCClass_Symbol);

__eCInstance1->string = __eCNameSpace__eC__types__CopyString("byte"), __eCInstance1->type = ProcessTypeString("unsigned char", 0), __eCInstance1;
}));
if(buildingBootStrap)
{
__eCMethod___eCNameSpace__eC__containers__BinaryTree_Add(&globalContext->types, (struct __eCNameSpace__eC__containers__BTNode *)__extension__ ({
struct Symbol * __eCInstance1 = __eCNameSpace__eC__types__eInstance_New(__eCClass_Symbol);

__eCInstance1->string = __eCNameSpace__eC__types__CopyString("intptr_t"), __eCInstance1->type = ProcessTypeString("intptr", 0), __eCInstance1;
}));
__eCMethod___eCNameSpace__eC__containers__BinaryTree_Add(&globalContext->types, (struct __eCNameSpace__eC__containers__BTNode *)__extension__ ({
struct Symbol * __eCInstance1 = __eCNameSpace__eC__types__eInstance_New(__eCClass_Symbol);

__eCInstance1->string = __eCNameSpace__eC__types__CopyString("uintptr_t"), __eCInstance1->type = ProcessTypeString("uintptr", 0), __eCInstance1;
}));
__eCMethod___eCNameSpace__eC__containers__BinaryTree_Add(&globalContext->types, (struct __eCNameSpace__eC__containers__BTNode *)__extension__ ({
struct Symbol * __eCInstance1 = __eCNameSpace__eC__types__eInstance_New(__eCClass_Symbol);

__eCInstance1->string = __eCNameSpace__eC__types__CopyString("ssize_t"), __eCInstance1->type = ProcessTypeString("intsize", 0), __eCInstance1;
}));
__eCMethod___eCNameSpace__eC__containers__BinaryTree_Add(&globalContext->types, (struct __eCNameSpace__eC__containers__BTNode *)__extension__ ({
struct Symbol * __eCInstance1 = __eCNameSpace__eC__types__eInstance_New(__eCClass_Symbol);

__eCInstance1->string = __eCNameSpace__eC__types__CopyString("size_t"), __eCInstance1->type = ProcessTypeString("uintsize", 0), __eCInstance1;
}));
}
{
struct GlobalData * data = (data = __eCNameSpace__eC__types__eInstance_New(__eCClass_GlobalData), data->fullName = __eCNameSpace__eC__types__CopyString("__thisModule"), data->dataTypeString = __eCNameSpace__eC__types__CopyString("Module"), data->module = privateModule, data);

data->key = (uintptr_t)data->fullName;
__eCMethod___eCNameSpace__eC__containers__BinaryTree_Add(&globalData.functions, (struct __eCNameSpace__eC__containers__BTNode *)data);
}
snprintf(command, sizeof (command), "%s%s -x c -E %s \"%s\"", cppCommand, cppOptions ? cppOptions : "", buildingBootStrap ? "" : "-include stdint.h -include sys/types.h", GetSourceFile());
command[sizeof (command) - 1] = 0;
if((cppOutput = __eCNameSpace__eC__files__DualPipeOpen((((unsigned int)(1))), command)))
{
char impFile[797];
struct ImportedModule * module;
char sourceFileName[274];
char mainModuleName[274];
int exitCode;
struct __eCNameSpace__eC__containers__OldList * ast;
struct __eCNameSpace__eC__types__Instance * fileInput = __eCNameSpace__eC__types__eInstance_New(__eCClass___eCNameSpace__eC__files__TempFile);

SetFileInput(fileInput);
__eCMethod___eCNameSpace__eC__containers__OldList_Add(&imports, (mainModule = __eCNameSpace__eC__types__eInstance_New(__eCClass_ModuleImport)));
SetMainModule(mainModule);
__eCNameSpace__eC__types__GetLastDirectory(GetSourceFile(), sourceFileName);
strcpy(mainModuleName, sourceFileName);
__eCNameSpace__eC__types__StripExtension(mainModuleName);
module = __extension__ ({
struct ImportedModule * __eCInstance1 = __eCNameSpace__eC__types__eInstance_New(__eCClass_ImportedModule);

__eCInstance1->name = __eCNameSpace__eC__types__CopyString(mainModuleName), __eCInstance1->type = 0, __eCInstance1;
});
__eCMethod___eCNameSpace__eC__containers__OldList_AddName(&defines, module);
resetScanner();
while(!(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = cppOutput;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__DualPipe->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Eof]);
__internal_VirtualMethod ? __internal_VirtualMethod(cppOutput) : (unsigned int)1;
})))
{
char junk[4096];
long long count = (__extension__ ({
size_t (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, void *  buffer, size_t size, size_t count);

__internal_VirtualMethod = ((size_t (*)(struct __eCNameSpace__eC__types__Instance *, void *  buffer, size_t size, size_t count))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = cppOutput;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__DualPipe->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Read]);
__internal_VirtualMethod ? __internal_VirtualMethod(cppOutput, junk, 1, 4096) : (size_t)1;
}));

(__extension__ ({
size_t (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const void *  buffer, size_t size, size_t count);

__internal_VirtualMethod = ((size_t (*)(struct __eCNameSpace__eC__types__Instance *, const void *  buffer, size_t size, size_t count))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = fileInput;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__TempFile->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Write]);
__internal_VirtualMethod ? __internal_VirtualMethod(fileInput, junk, 1, count) : (size_t)1;
}));
}
exitCode = __eCMethod___eCNameSpace__eC__files__DualPipe_GetExitCode(cppOutput);
(__eCNameSpace__eC__types__eInstance_DecRef(cppOutput), cppOutput = 0);
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, long long pos, int mode);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, long long pos, int mode))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = fileInput;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__TempFile->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Seek]);
__internal_VirtualMethod ? __internal_VirtualMethod(fileInput, 0, 0) : (unsigned int)1;
}));
{
char symFile[274];
char symLocation[797];
struct ImportedModule * module, * next;

strcpy(symFile, sourceFileName);
__eCNameSpace__eC__types__ChangeExtension(symFile, "sym", symFile);
strcpy(symLocation, GetSymbolsDir());
__eCNameSpace__eC__types__PathCat(symLocation, symFile);
LoadSymbols(symLocation, 3, 0);
for(module = defines.first; module; module = next)
{
next = module->next;
if(module->type == 0 && (strcasecmp)(module->name, mainModuleName))
{
(__eCNameSpace__eC__types__eSystem_Delete(module->name), module->name = 0);
__eCMethod___eCNameSpace__eC__containers__OldList_Delete(&defines, module);
}
}
if(!GetEcereImported() && !GetBuildingECRT())
__eCNameSpace__eC__types__eModule_LoadStrict(privateModule, "ecrt", 1);
}
ParseEc();
CheckDataRedefinitions();
SetYydebug(0);
SetCurrentNameSpace((((void *)0)));
SetDefaultNameSpace((((void *)0)));
SetDeclMode(2);
(__eCNameSpace__eC__types__eInstance_DecRef(fileInput), fileInput = 0);
SetFileInput((((void *)0)));
ast = GetAST();
if(!exitCode)
{
ProcessDBTableDefinitions();
PrePreProcessClassDefinitions();
ComputeModuleClasses(privateModule);
PreProcessClassDefinitions();
ComputeModuleClasses(privateModule);
ProcessClassDefinitions();
ComputeDataTypes();
ProcessInstantiations();
ProcessMemberAccess();
ProcessInstanceDeclarations();
strcpy(impFile, GetSymbolsDir());
__eCNameSpace__eC__types__PathCat(impFile, sourceFileName);
__eCNameSpace__eC__types__ChangeExtension(impFile, "imp", impFile);
if(imports.first)
OutputImports(impFile);
if(!((struct __eCNameSpace__eC__types__Application *)(((char *)this + sizeof(struct __eCNameSpace__eC__types__Module) + sizeof(struct __eCNameSpace__eC__types__Instance))))->exitCode)
{
struct __eCNameSpace__eC__types__Instance * output = __eCNameSpace__eC__files__FileOpen(GetOutputFile(), 2);

if(output)
{
__eCMethod___eCNameSpace__eC__files__File_Printf(output, "/* Code generated from eC source file: %s */\n", sourceFileName);
__eCMethod___eCNameSpace__eC__files__File_Printf(output, "#if defined(_WIN32)\n");
__eCMethod___eCNameSpace__eC__files__File_Printf(output, "#define __runtimePlatform 1\n");
__eCMethod___eCNameSpace__eC__files__File_Printf(output, "#elif defined(__APPLE__)\n");
__eCMethod___eCNameSpace__eC__files__File_Printf(output, "#define __runtimePlatform 3\n");
__eCMethod___eCNameSpace__eC__files__File_Printf(output, "#else\n");
__eCMethod___eCNameSpace__eC__files__File_Printf(output, "#define __runtimePlatform 2\n");
__eCMethod___eCNameSpace__eC__files__File_Printf(output, "#endif\n");
__eCMethod___eCNameSpace__eC__files__File_Printf(output, "#if defined(__GNUC__) || defined(__clang__)\n");
__eCMethod___eCNameSpace__eC__files__File_Printf(output, "#if defined(__clang__) && defined(__WIN32__)\n");
__eCMethod___eCNameSpace__eC__files__File_Printf(output, "#define int64 long long\n");
__eCMethod___eCNameSpace__eC__files__File_Printf(output, "#define uint64 unsigned long long\n");
__eCMethod___eCNameSpace__eC__files__File_Printf(output, "#if defined(_WIN64)\n");
__eCMethod___eCNameSpace__eC__files__File_Printf(output, "#define ssize_t long long\n");
__eCMethod___eCNameSpace__eC__files__File_Printf(output, "#else\n");
__eCMethod___eCNameSpace__eC__files__File_Printf(output, "#define ssize_t long\n");
__eCMethod___eCNameSpace__eC__files__File_Printf(output, "#endif\n");
__eCMethod___eCNameSpace__eC__files__File_Printf(output, "#else\n");
__eCMethod___eCNameSpace__eC__files__File_Printf(output, "typedef long long int64;\n");
__eCMethod___eCNameSpace__eC__files__File_Printf(output, "typedef unsigned long long uint64;\n");
__eCMethod___eCNameSpace__eC__files__File_Printf(output, "#endif\n");
__eCMethod___eCNameSpace__eC__files__File_Printf(output, "#ifndef _WIN32\n");
__eCMethod___eCNameSpace__eC__files__File_Printf(output, "#define __declspec(x)\n");
__eCMethod___eCNameSpace__eC__files__File_Printf(output, "#endif\n");
__eCMethod___eCNameSpace__eC__files__File_Printf(output, "#elif defined(__TINYC__)\n");
__eCMethod___eCNameSpace__eC__files__File_Printf(output, "#include <stdarg.h>\n");
__eCMethod___eCNameSpace__eC__files__File_Printf(output, "#define __builtin_va_list va_list\n");
__eCMethod___eCNameSpace__eC__files__File_Printf(output, "#define __builtin_va_start va_start\n");
__eCMethod___eCNameSpace__eC__files__File_Printf(output, "#define __builtin_va_end va_end\n");
__eCMethod___eCNameSpace__eC__files__File_Printf(output, "#ifdef _WIN32\n");
__eCMethod___eCNameSpace__eC__files__File_Printf(output, "#define strcasecmp stricmp\n");
__eCMethod___eCNameSpace__eC__files__File_Printf(output, "#define strncasecmp strnicmp\n");
__eCMethod___eCNameSpace__eC__files__File_Printf(output, "#define __declspec(x) __attribute__((x))\n");
__eCMethod___eCNameSpace__eC__files__File_Printf(output, "#else\n");
__eCMethod___eCNameSpace__eC__files__File_Printf(output, "#define __declspec(x)\n");
__eCMethod___eCNameSpace__eC__files__File_Printf(output, "#endif\n");
__eCMethod___eCNameSpace__eC__files__File_Printf(output, "typedef long long int64;\n");
__eCMethod___eCNameSpace__eC__files__File_Printf(output, "typedef unsigned long long uint64;\n");
__eCMethod___eCNameSpace__eC__files__File_Printf(output, "#else\n");
__eCMethod___eCNameSpace__eC__files__File_Printf(output, "typedef __int64 int64;\n");
__eCMethod___eCNameSpace__eC__files__File_Printf(output, "typedef unsigned __int64 uint64;\n");
__eCMethod___eCNameSpace__eC__files__File_Printf(output, "#endif\n");
__eCMethod___eCNameSpace__eC__files__File_Printf(output, "#ifdef __BIG_ENDIAN__\n");
__eCMethod___eCNameSpace__eC__files__File_Printf(output, "#define __ENDIAN_PAD(x) (8 - (x))\n");
__eCMethod___eCNameSpace__eC__files__File_Printf(output, "#else\n");
__eCMethod___eCNameSpace__eC__files__File_Printf(output, "#define __ENDIAN_PAD(x) 0\n");
__eCMethod___eCNameSpace__eC__files__File_Printf(output, "#endif\n");
__eCMethod___eCNameSpace__eC__files__File_Printf(output, "#if defined(_WIN32)\n");
__eCMethod___eCNameSpace__eC__files__File_Printf(output, "#   if defined(__clang__) && defined(__WIN32__)\n");
__eCMethod___eCNameSpace__eC__files__File_Printf(output, "#      define eC_stdcall __stdcall\n");
__eCMethod___eCNameSpace__eC__files__File_Printf(output, "#      define eC_gcc_struct\n");
__eCMethod___eCNameSpace__eC__files__File_Printf(output, "#   elif defined(__GNUC__) || defined(__TINYC__)\n");
__eCMethod___eCNameSpace__eC__files__File_Printf(output, "#      define eC_stdcall __attribute__((__stdcall__))\n");
__eCMethod___eCNameSpace__eC__files__File_Printf(output, "#      define eC_gcc_struct __attribute__((gcc_struct))\n");
__eCMethod___eCNameSpace__eC__files__File_Printf(output, "#   else\n");
__eCMethod___eCNameSpace__eC__files__File_Printf(output, "#      define eC_stdcall __stdcall\n");
__eCMethod___eCNameSpace__eC__files__File_Printf(output, "#      define eC_gcc_struct\n");
__eCMethod___eCNameSpace__eC__files__File_Printf(output, "#   endif\n");
__eCMethod___eCNameSpace__eC__files__File_Printf(output, "#else\n");
__eCMethod___eCNameSpace__eC__files__File_Printf(output, "#   define eC_stdcall\n");
__eCMethod___eCNameSpace__eC__files__File_Printf(output, "#   define eC_gcc_struct\n");
__eCMethod___eCNameSpace__eC__files__File_Printf(output, "#endif\n");
if(buildingBootStrap)
{
__eCMethod___eCNameSpace__eC__files__File_Printf(output, "#include <stdint.h>\n");
__eCMethod___eCNameSpace__eC__files__File_Printf(output, "#include <sys/types.h>\n");
}
if(ast)
OutputTree(ast, output);
(__eCNameSpace__eC__types__eInstance_DecRef(output), output = 0);
}
}
}
else
((struct __eCNameSpace__eC__types__Application *)(((char *)this + sizeof(struct __eCNameSpace__eC__types__Module) + sizeof(struct __eCNameSpace__eC__types__Instance))))->exitCode = exitCode;
if(ast)
{
FreeASTTree(ast);
}
}
else
{
((struct __eCNameSpace__eC__types__Application *)(((char *)this + sizeof(struct __eCNameSpace__eC__types__Module) + sizeof(struct __eCNameSpace__eC__types__Instance))))->exitCode = 1;
__eCNameSpace__eC__types__PrintLn(__eCClass_char__PTR_, "(ecc) error: failed to execute C preprocessor", (void *)0);
}
FreeContext(globalContext);
FreeExcludedSymbols(&_excludedSymbols);
__eCMethod___eCNameSpace__eC__containers__OldList_Free(&defines, (void *)(FreeModuleDefine));
__eCMethod___eCNameSpace__eC__containers__OldList_Free(&imports, (void *)(FreeModuleImport));
FreeTypeData(privateModule);
FreeIncludeFiles();
FreeGlobalData(&globalData);
(__eCNameSpace__eC__types__eInstance_DecRef(privateModule), privateModule = 0);
}
(__eCNameSpace__eC__types__eSystem_Delete(cppCommand), cppCommand = 0);
(__eCNameSpace__eC__types__eSystem_Delete(cppOptions), cppOptions = 0);
SetSymbolsDir((((void *)0)));
OutputIntlStrings();
}

void __eCRegisterModule_ecc(struct __eCNameSpace__eC__types__Instance * module)
{
struct __eCNameSpace__eC__types__Class __attribute__((unused)) * class;

class = __eCNameSpace__eC__types__eSystem_RegisterClass(0, "CompilerApp", "eC::types::Application", 0, 0, (void *)0, (void *)0, module, 2, 1);
if(((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application == ((struct __eCNameSpace__eC__types__Module *)(((char *)__thisModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->application && class)
__eCClass_CompilerApp = class;
__eCNameSpace__eC__types__eClass_AddMethod(class, "Main", 0, __eCMethod_CompilerApp_Main, 1);
}

