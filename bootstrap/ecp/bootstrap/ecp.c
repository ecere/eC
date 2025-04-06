/* Code generated from eC source file: ecp.ec */
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
extern int yydebug;

enum yytokentype
{
IDENTIFIER = 258, CONSTANT = 259, STRING_LITERAL = 260, SIZEOF = 261, PTR_OP = 262, INC_OP = 263, DEC_OP = 264, LEFT_OP = 265, RIGHT_OP = 266, LE_OP = 267, GE_OP = 268, EQ_OP = 269, NE_OP = 270, AND_OP = 271, OR_OP = 272, MUL_ASSIGN = 273, DIV_ASSIGN = 274, MOD_ASSIGN = 275, ADD_ASSIGN = 276, SUB_ASSIGN = 277, LEFT_ASSIGN = 278, RIGHT_ASSIGN = 279, AND_ASSIGN = 280, XOR_ASSIGN = 281, OR_ASSIGN = 282, TYPE_NAME = 283, TYPEDEF = 284, EXTERN = 285, STATIC = 286, AUTO = 287, REGISTER = 288, CHAR = 289, SHORT = 290, INT = 291, UINT = 292, INT64 = 293, INT128 = 294, FLOAT128 = 295, FLOAT16 = 296, LONG = 297, SIGNED = 298, UNSIGNED = 299, FLOAT = 300, DOUBLE = 301, CONST = 302, VOLATILE = 303, VOID = 304, VALIST = 305, STRUCT = 306, UNION = 307, ENUM = 308, ELLIPSIS = 309, CASE = 310, DEFAULT = 311, IF = 312, SWITCH = 313, WHILE = 314, DO = 315, FOR = 316, GOTO = 317, CONTINUE = 318, BREAK = 319, RETURN = 320, IFX = 321, ELSE = 322, CLASS = 323, THISCLASS = 324, PROPERTY = 325, SETPROP = 326, GETPROP = 327, NEWOP = 328, RENEW = 329, DELETE = 330, EXT_DECL = 331, EXT_STORAGE = 332, IMPORT = 333, DEFINE = 334, VIRTUAL = 335, ATTRIB = 336, PUBLIC = 337, PRIVATE = 338, TYPED_OBJECT = 339, ANY_OBJECT = 340, _INCREF = 341, EXTENSION = 342, ASM = 343, TYPEOF = 344, WATCH = 345, STOPWATCHING = 346, FIREWATCHERS = 347, WATCHABLE = 348, CLASS_DESIGNER = 349, CLASS_NO_EXPANSION = 350, CLASS_FIXED = 351, ISPROPSET = 352, CLASS_DEFAULT_PROPERTY = 353, PROPERTY_CATEGORY = 354, CLASS_DATA = 355, CLASS_PROPERTY = 356, SUBCLASS = 357, NAMESPACE = 358, NEW0OP = 359, RENEW0 = 360, VAARG = 361, DBTABLE = 362, DBFIELD = 363, DBINDEX = 364, DATABASE_OPEN = 365, ALIGNOF = 366, ATTRIB_DEP = 367, __ATTRIB = 368, BOOL = 369, _BOOL = 370, _COMPLEX = 371, _IMAGINARY = 372, RESTRICT = 373, THREAD = 374, WIDE_STRING_LITERAL = 375, BUILTIN_OFFSETOF = 376, PRAGMA = 377, STATIC_ASSERT = 378
};

int yyparse(void);

static unsigned int globalInstance = 0;

static struct Context * globalContext;

extern struct __eCNameSpace__eC__types__Property * __eCProp___eCNameSpace__eC__types__Platform_char__PTR_;

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

struct Initializer;

struct TypeName;

struct Statement;

struct Attrib;

struct ExtDecl;

struct Attribute;

struct MembersInit;

struct MemberInit;

struct PropertyWatch;

struct DBTableDef;

struct CodePosition
{
int line;
int charPos;
int pos;
int included;
} eC_gcc_struct;

struct ModuleImport;

struct ClassImport;

extern char *  __eCNameSpace__eC__types__CopyString(const char *  string);

extern int strtol(const char * , char * * , int base);

extern char *  strcpy(char * , const char * );

extern char *  strcat(char * , const char * );

extern void SetParsingType(unsigned int b);

extern int strcmp(const char * , const char * );

extern char *  PrintInt64(long long result);

extern int printf(const char * , ...);

extern const char *  __eCNameSpace__eC__i18n__GetTranslatedString(const char * name, const char *  string, const char *  stringAndContext);

struct __eCNameSpace__eC__containers__LinkList
{
void * first;
void * last;
int count;
} eC_gcc_struct;

extern void SetCurrentNameSpace(const char *  s);

extern void __eCNameSpace__eC__types__ChangeCh(char *  string, char ch1, char ch2);

extern int GetRuntimeBits(void);

extern size_t strlen(const char * );

extern char *  PassArg(char *  output, const char *  input);

extern const char *  GetOutputFile(void);

extern void SetOutputFile(const char *  s);

extern const char *  GetSourceFile(void);

extern void SetSourceFile(const char *  s);

extern void SetSymbolsDir(const char *  s);

extern void SetDefaultNameSpace(const char *  s);

extern void SetStrictNameSpaces(unsigned int b);

extern void SetI18nModuleName(const char *  s);

extern const char *  GetSymbolsDir(void);

extern char *  __eCNameSpace__eC__types__PathCat(char *  string, const char *  addedPath);

extern char *  __eCNameSpace__eC__types__ChangeExtension(const char *  string, const char *  ext, char *  output);

extern void SetInPreCompiler(unsigned int b);

extern void SetTargetPlatform(int platform);

extern void SetTargetBits(int bits);

extern void SetEchoOn(unsigned int b);

extern unsigned int __eCNameSpace__eC__files__FileExists(const char *  fileName);

extern unsigned int __eCNameSpace__eC__files__DeleteFile(const char *  fileName);

extern int snprintf(char * , size_t, const char * , ...);

extern void resetScanner(void);

extern void ParseEc(void);

extern void SetYydebug(unsigned int b);

extern void ProcessDBTableDefinitions(void);

extern void FreeIncludeFiles(void);

struct __eCNameSpace__eC__types__GlobalFunction;

const char *  __eCProp___eCNameSpace__eC__types__Platform_Get_char__PTR_(int this);

int __eCProp___eCNameSpace__eC__types__Platform_Set_char__PTR_(const char *  value);

static struct __eCNameSpace__eC__containers__OldList defines, imports, precompDefines;

extern struct __eCNameSpace__eC__containers__OldList *  MkListOne(void *  item);

extern struct __eCNameSpace__eC__containers__OldList *  GetAST(void);

struct __eCNameSpace__eC__types__EnumClassData
{
struct __eCNameSpace__eC__containers__OldList values;
long long largest;
} eC_gcc_struct;

extern void SetExcludedSymbols(struct __eCNameSpace__eC__containers__OldList *  list);

extern void SetDefines(struct __eCNameSpace__eC__containers__OldList *  list);

extern void SetImports(struct __eCNameSpace__eC__containers__OldList *  list);

extern void SetPrecompDefines(struct __eCNameSpace__eC__containers__OldList *  list);

extern void FreeASTTree(struct __eCNameSpace__eC__containers__OldList * ast);

extern void FreeExcludedSymbols(struct __eCNameSpace__eC__containers__OldList * excludedSymbols);

void __eCMethod___eCNameSpace__eC__containers__OldList_Free(struct __eCNameSpace__eC__containers__OldList * this, void (*  freeFn)(void * ));

void __eCMethod___eCNameSpace__eC__containers__OldList_Add(struct __eCNameSpace__eC__containers__OldList * this, void *  item);

struct Location
{
struct CodePosition start;
struct CodePosition end;
} eC_gcc_struct;

extern void SetMainModule(struct ModuleImport * moduleImport);

extern void FreeModuleImport(struct ModuleImport * imp);

extern struct Location yylloc;

struct Definition;

struct ClassDefine
{
struct Definition * prev;
struct Definition * next;
char *  name;
int type;
char * base;
struct __eCNameSpace__eC__containers__OldList propertiesAndMembers;
struct __eCNameSpace__eC__containers__OldList classProperties;
struct __eCNameSpace__eC__containers__OldList methods;
unsigned int isRemote;
unsigned int isWatchable;
unsigned int fixed;
unsigned int noExpansion;
int accessMode;
} eC_gcc_struct;

struct FunctionDefine
{
struct Definition * prev;
struct Definition * next;
char *  name;
int type;
char * dataType;
} eC_gcc_struct;

struct DataDefine
{
struct Definition * prev;
struct Definition * next;
char *  name;
int type;
char * dataType;
} eC_gcc_struct;

struct Definition
{
struct Definition * prev;
struct Definition * next;
char *  name;
int type;
} eC_gcc_struct;

extern void FreeModuleDefine(struct Definition * def);

void FreeDataDefine(struct DataDefine * data)
{
(__eCNameSpace__eC__types__eSystem_Delete(data->name), data->name = 0);
(__eCNameSpace__eC__types__eSystem_Delete(data->dataType), data->dataType = 0);
}

struct MethodDefine;

struct MethodDefine
{
struct MethodDefine * prev, * next;
char * name;
int memberAccess;
char * type;
unsigned int isVirtual;
} eC_gcc_struct;

void FreeMethodDefine(struct MethodDefine * method)
{
(__eCNameSpace__eC__types__eSystem_Delete(method->name), method->name = 0);
(__eCNameSpace__eC__types__eSystem_Delete(method->type), method->type = 0);
}

struct PropertyDefine;

struct PropertyDefine
{
struct PropertyDefine * prev, * next;
char * name;
int isProperty;
char * type;
unsigned int isWatchable;
int memberAccess;
unsigned int isVirtual;
unsigned int hasSet, hasGet;
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

extern void __eCNameSpace__eC__types__eEnum_AddFixedValue(struct __eCNameSpace__eC__types__Class * _class, const char *  string, long long value);

extern long long __eCNameSpace__eC__types__eEnum_AddValue(struct __eCNameSpace__eC__types__Class * _class, const char *  string);

extern void *  __eCNameSpace__eC__types__eInstance_New(struct __eCNameSpace__eC__types__Class * _class);

extern void __eCNameSpace__eC__types__eInstance_SetMethod(struct __eCNameSpace__eC__types__Instance * instance, const char *  name, void *  function);

extern void __eCNameSpace__eC__types__eInstance_IncRef(struct __eCNameSpace__eC__types__Instance * instance);

extern struct __eCNameSpace__eC__types__Instance * __eCNameSpace__eC__files__FileOpen(const char *  fileName, int mode);

extern struct __eCNameSpace__eC__types__Instance * __eCNameSpace__eC__files__DualPipeOpen(unsigned int mode, const char *  commandLine);

extern void SetFileInput(struct __eCNameSpace__eC__types__Instance * file);

int __eCMethod___eCNameSpace__eC__files__File_Printf(struct __eCNameSpace__eC__types__Instance * this, const char *  format, ...);

extern int __eCVMethodID___eCNameSpace__eC__files__File_Puts;

extern void __eCNameSpace__eC__types__eInstance_DecRef(struct __eCNameSpace__eC__types__Instance * instance);

extern int __eCVMethodID___eCNameSpace__eC__files__File_Eof;

extern int __eCVMethodID___eCNameSpace__eC__files__File_Read;

extern int __eCVMethodID___eCNameSpace__eC__files__File_Write;

int __eCMethod___eCNameSpace__eC__files__DualPipe_GetExitCode(struct __eCNameSpace__eC__types__Instance * this);

extern int __eCVMethodID___eCNameSpace__eC__files__File_Seek;

struct Declarator;

extern char *  StringFromSpecDecl(struct __eCNameSpace__eC__containers__OldList * specs, struct Declarator * decl);

struct TemplateDatatype
{
struct __eCNameSpace__eC__containers__OldList *  specifiers;
struct Declarator * decl;
} eC_gcc_struct;

struct Expression;

struct Define
{
struct Definition * prev;
struct Definition * next;
char *  name;
int type;
struct Expression * exp;
} eC_gcc_struct;

extern void ProcessExpressionType(struct Expression * exp);

extern void ComputeExpression(struct Expression * exp);

extern void FreeExpression(struct Expression * exp);

extern void FreeExpContents(struct Expression * exp);

extern void PrintExpression(struct Expression * exp, char *  string);

extern void OutputExpression(struct Expression * exp, struct __eCNameSpace__eC__types__Instance * f);

struct Type;

extern struct Type * ProcessType(struct __eCNameSpace__eC__containers__OldList * specs, struct Declarator * decl);

extern void PrintType(struct Type * type, char *  string, unsigned int printName, unsigned int fullName);

extern void FreeType(struct Type * type);

extern struct Type * ProcessTypeString(const char *  string, unsigned int staticMethod);

struct __eCNameSpace__eC__types__DataMember;

extern struct __eCNameSpace__eC__types__DataMember * __eCNameSpace__eC__types__eMember_AddDataMember(struct __eCNameSpace__eC__types__DataMember * member, const char *  name, const char *  type, unsigned int size, unsigned int alignment, int declMode);

extern struct __eCNameSpace__eC__types__DataMember * __eCNameSpace__eC__types__eClass_AddDataMember(struct __eCNameSpace__eC__types__Class * _class, const char *  name, const char *  type, unsigned int size, unsigned int alignment, int declMode);

extern struct __eCNameSpace__eC__types__DataMember * __eCNameSpace__eC__types__eMember_New(int type, int declMode);

extern unsigned int __eCNameSpace__eC__types__eMember_AddMember(struct __eCNameSpace__eC__types__DataMember * addTo, struct __eCNameSpace__eC__types__DataMember * dataMember);

extern unsigned int __eCNameSpace__eC__types__eClass_AddMember(struct __eCNameSpace__eC__types__Class * _class, struct __eCNameSpace__eC__types__DataMember * dataMember);

struct __eCNameSpace__eC__files__NamedLink64;

struct __eCNameSpace__eC__files__NamedLink64
{
struct __eCNameSpace__eC__files__NamedLink64 * prev;
struct __eCNameSpace__eC__files__NamedLink64 * next;
char *  name;
long long data;
} eC_gcc_struct;

struct Symbol;

extern struct Symbol * FindClass(const char *  name);

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

struct __eCNameSpace__eC__types__NameSpace;

extern void SetGlobalData(struct __eCNameSpace__eC__types__NameSpace *  nameSpace);

struct Context;

extern void SetGlobalContext(struct Context * context);

extern void SetCurrentContext(struct Context * context);

extern void SetTopContext(struct Context * context);

extern void FreeContext(struct Context * context);

struct __eCNameSpace__eC__files__BinaryTree;

struct __eCNameSpace__eC__files__BinaryTree
{
struct __eCNameSpace__eC__containers__BTNode * root;
int count;
int (*  CompareKey)(struct __eCNameSpace__eC__files__BinaryTree * tree, uintptr_t a, uintptr_t b);
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
struct __eCNameSpace__eC__files__BinaryTree nameSpaces;
struct __eCNameSpace__eC__files__BinaryTree classes;
struct __eCNameSpace__eC__files__BinaryTree defines;
struct __eCNameSpace__eC__files__BinaryTree functions;
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

unsigned int __eCMethod___eCNameSpace__eC__containers__BinaryTree_Add(struct __eCNameSpace__eC__files__BinaryTree * this, struct __eCNameSpace__eC__containers__BTNode * node);

int __eCMethod___eCNameSpace__eC__containers__BinaryTree_CompareString(struct __eCNameSpace__eC__files__BinaryTree * this, const char *  a, const char *  b);

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

struct DataMemberDefine;

struct DataMemberDefine
{
struct DataMemberDefine * prev, * next;
char * name;
int isProperty;
char * type;
struct __eCNameSpace__eC__containers__OldList dataMembers;
struct __eCNameSpace__eC__containers__OldList classProperties;
int memberAccess;
int memberType;
int size, bitPos;
} eC_gcc_struct;

void FreeDataMemberDefine(struct DataMemberDefine * dataMember)
{
(__eCNameSpace__eC__types__eSystem_Delete(dataMember->name), dataMember->name = 0);
(__eCNameSpace__eC__types__eSystem_Delete(dataMember->type), dataMember->type = 0);
}

void FreeDefinition(struct Definition * definition)
{
(__eCNameSpace__eC__types__eSystem_Delete(definition->name), definition->name = 0);
switch(definition->type)
{
case 1:
{
struct ClassDefine * classDefine = (struct ClassDefine *)definition;

(__eCNameSpace__eC__types__eSystem_Delete(classDefine->base), classDefine->base = 0);
__eCMethod___eCNameSpace__eC__containers__OldList_Free(&classDefine->methods, (void *)(FreeMethodDefine));
__eCMethod___eCNameSpace__eC__containers__OldList_Free(&classDefine->propertiesAndMembers, (void *)(FreeDataMemberDefine));
break;
}
case 3:
(__eCNameSpace__eC__types__eSystem_Delete(((struct FunctionDefine *)definition)->dataType), ((struct FunctionDefine *)definition)->dataType = 0);
break;
case 4:
(__eCNameSpace__eC__types__eSystem_Delete(((struct DataDefine *)definition)->dataType), ((struct DataDefine *)definition)->dataType = 0);
break;
case 2:
break;
}
}

struct ClassDef;

struct __eCNameSpace__eC__types__BitMember;

extern struct __eCNameSpace__eC__types__BitMember * __eCNameSpace__eC__types__eClass_AddBitMember(struct __eCNameSpace__eC__types__Class * _class, const char *  name, const char *  type, int bitSize, int bitPos, int declMode);

struct __eCNameSpace__eC__types__BitMember
{
struct __eCNameSpace__eC__types__BitMember * prev;
struct __eCNameSpace__eC__types__BitMember * next;
const char *  name;
unsigned int isProperty;
int memberAccess;
int id;
struct __eCNameSpace__eC__types__Class * _class;
const char *  dataTypeString;
struct __eCNameSpace__eC__types__Class * dataTypeClass;
struct Type * dataType;
int type;
int size;
int pos;
uint64 mask;
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

extern struct __eCNameSpace__eC__types__Property * __eCNameSpace__eC__types__eClass_AddProperty(struct __eCNameSpace__eC__types__Class * _class, const char *  name, const char *  dataType, void *  setStmt, void *  getStmt, int declMode);

struct __eCNameSpace__eC__types__ClassProperty;

extern struct __eCNameSpace__eC__types__ClassProperty * __eCNameSpace__eC__types__eClass_AddClassProperty(struct __eCNameSpace__eC__types__Class * _class, const char *  name, const char *  dataType, void *  setStmt, void *  getStmt);

struct __eCNameSpace__eC__types__ClassProperty
{
const char *  name;
struct __eCNameSpace__eC__types__ClassProperty * parent;
struct __eCNameSpace__eC__types__ClassProperty * left;
struct __eCNameSpace__eC__types__ClassProperty * right;
int depth;
void (*  Set)(struct __eCNameSpace__eC__types__Class *, long long);
long long (*  Get)(struct __eCNameSpace__eC__types__Class *);
const char *  dataTypeString;
struct Type * dataType;
unsigned int constant;
} eC_gcc_struct;

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

extern struct __eCNameSpace__eC__types__Method * __eCNameSpace__eC__types__eClass_AddVirtualMethod(struct __eCNameSpace__eC__types__Class * _class, const char *  name, const char *  type, void *  function, int declMode);

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

static struct __eCNameSpace__eC__types__Instance * privateModule;

extern struct __eCNameSpace__eC__types__Property * __eCNameSpace__eC__types__eClass_FindProperty(struct __eCNameSpace__eC__types__Class * _class, const char *  name, struct __eCNameSpace__eC__types__Instance * module);

extern struct __eCNameSpace__eC__types__DataMember * __eCNameSpace__eC__types__eClass_FindDataMember(struct __eCNameSpace__eC__types__Class * _class, const char *  name, struct __eCNameSpace__eC__types__Instance * module, struct __eCNameSpace__eC__types__DataMember **  subMemberStack, int *  subMemberStackPos);

extern struct __eCNameSpace__eC__types__Class * __eCNameSpace__eC__types__eSystem_RegisterClass(int type, const char *  name, const char *  baseName, int size, int sizeClass, unsigned int (*  Constructor)(void * ), void (*  Destructor)(void * ), struct __eCNameSpace__eC__types__Instance * module, int declMode, int inheritanceAccess);

extern struct __eCNameSpace__eC__types__Method * __eCNameSpace__eC__types__eClass_FindMethod(struct __eCNameSpace__eC__types__Class * _class, const char *  name, struct __eCNameSpace__eC__types__Instance * module);

extern struct __eCNameSpace__eC__types__Instance * __thisModule;

extern void ComputeModuleClasses(struct __eCNameSpace__eC__types__Instance * module);

extern struct __eCNameSpace__eC__types__Class * __eCNameSpace__eC__types__eSystem_FindClass(struct __eCNameSpace__eC__types__Instance * module, const char *  name);

extern void SetPrivateModule(struct __eCNameSpace__eC__types__Instance * module);

extern void FreeTypeData(struct __eCNameSpace__eC__types__Instance * privateModule);

extern struct __eCNameSpace__eC__types__GlobalFunction * __eCNameSpace__eC__types__eSystem_RegisterFunction(const char *  name, const char *  type, void *  func, struct __eCNameSpace__eC__types__Instance * module, int declMode);

void __eCUnregisterModule_ecp(struct __eCNameSpace__eC__types__Instance * module)
{

}

static struct __eCNameSpace__eC__types__Class * __eCClass_ClassDefine;

static struct __eCNameSpace__eC__types__Class * __eCClass_Define;

static struct __eCNameSpace__eC__types__Class * __eCClass_FunctionDefine;

static struct __eCNameSpace__eC__types__Class * __eCClass_DataDefine;

static struct __eCNameSpace__eC__types__Class * __eCClass_MethodDefine;

static struct __eCNameSpace__eC__types__Class * __eCClass_PropertyDefine;

static struct __eCNameSpace__eC__types__Class * __eCClass_DataMemberDefine;

static struct __eCNameSpace__eC__types__Class * __eCClass_PrecompApp;

static void OutputDataMembers(struct ClassDefine * classDefine, struct __eCNameSpace__eC__types__Class * _class, struct __eCNameSpace__eC__types__Instance * f)
{
if(classDefine->propertiesAndMembers.first)
{
struct DataMemberDefine * member = classDefine->propertiesAndMembers.first;
int last = 0;

for(member = classDefine->propertiesAndMembers.first; member; member = member->next)
{
if(member->isProperty == 1)
{
struct PropertyDefine * prop = (struct PropertyDefine *)member;

if(last != 1)
{
if(last)
__eCMethod___eCNameSpace__eC__files__File_Printf(f, "         .\n");
__eCMethod___eCNameSpace__eC__files__File_Printf(f, "      [Defined Properties]\n");
}
if(prop->name)
__eCMethod___eCNameSpace__eC__files__File_Printf(f, "         %s\n", prop->name);
else
__eCMethod___eCNameSpace__eC__files__File_Printf(f, "         [Conversion]\n");
if(prop->memberAccess == 1)
__eCMethod___eCNameSpace__eC__files__File_Printf(f, "            [Public]\n");
else
__eCMethod___eCNameSpace__eC__files__File_Printf(f, "            [Private]\n");
if(prop->isVirtual)
__eCMethod___eCNameSpace__eC__files__File_Printf(f, "            [Virtual]\n");
if(prop->hasSet)
__eCMethod___eCNameSpace__eC__files__File_Printf(f, "            [Set]\n");
if(prop->hasGet)
__eCMethod___eCNameSpace__eC__files__File_Printf(f, "            [Get]\n");
if(prop->isWatchable)
__eCMethod___eCNameSpace__eC__files__File_Printf(f, "            [Watchable]\n");
__eCMethod___eCNameSpace__eC__files__File_Printf(f, "            [Type]\n");
__eCMethod___eCNameSpace__eC__files__File_Printf(f, "               %s\n", prop->type ? prop->type : "");
}
else
{
if(last != 3)
{
if(last)
__eCMethod___eCNameSpace__eC__files__File_Printf(f, "         .\n");
__eCMethod___eCNameSpace__eC__files__File_Printf(f, "      [Defined Data Members]\n");
}
if(member->memberType == 0)
{
__eCMethod___eCNameSpace__eC__files__File_Printf(f, "         %s\n", member->name);
if(member->memberAccess == 1)
__eCMethod___eCNameSpace__eC__files__File_Printf(f, "            [Public]\n");
else
__eCMethod___eCNameSpace__eC__files__File_Printf(f, "            [Private]\n");
if(_class && _class->type == 2)
{
if(member->size)
{
__eCMethod___eCNameSpace__eC__files__File_Printf(f, "            [Size]\n");
__eCMethod___eCNameSpace__eC__files__File_Printf(f, "               %d\n", member->size);
}
if(member->bitPos != -1)
{
__eCMethod___eCNameSpace__eC__files__File_Printf(f, "            [Pos]\n");
__eCMethod___eCNameSpace__eC__files__File_Printf(f, "               %d\n", member->bitPos);
}
}
__eCMethod___eCNameSpace__eC__files__File_Printf(f, "            [Type]\n");
__eCMethod___eCNameSpace__eC__files__File_Printf(f, "               %s\n", member->type ? member->type : "");
}
else
{
if(member->memberAccess == 1)
__eCMethod___eCNameSpace__eC__files__File_Printf(f, "            [Public]\n");
else
__eCMethod___eCNameSpace__eC__files__File_Printf(f, "            [Private]\n");
__eCMethod___eCNameSpace__eC__files__File_Printf(f, (member->memberType == 1) ? "      [Union]\n" : "      [Struct]\n");
OutputDataMembers((struct ClassDefine *)member, (((void *)0)), f);
}
}
last = member->isProperty;
}
__eCMethod___eCNameSpace__eC__files__File_Printf(f, "         .\n");
}
if(classDefine->classProperties.first)
{
struct PropertyDefine * prop = classDefine->propertiesAndMembers.first;

__eCMethod___eCNameSpace__eC__files__File_Printf(f, "      [Defined Class Properties]\n");
for(prop = classDefine->classProperties.first; prop; prop = prop->next)
{
if(prop->name)
__eCMethod___eCNameSpace__eC__files__File_Printf(f, "         %s\n", prop->name);
if(prop->hasSet)
__eCMethod___eCNameSpace__eC__files__File_Printf(f, "            [Set]\n");
if(prop->hasGet)
__eCMethod___eCNameSpace__eC__files__File_Printf(f, "            [Get]\n");
__eCMethod___eCNameSpace__eC__files__File_Printf(f, "            [Type]\n");
__eCMethod___eCNameSpace__eC__files__File_Printf(f, "               %s\n", prop->type ? prop->type : "");
}
__eCMethod___eCNameSpace__eC__files__File_Printf(f, "         .\n");
}
}

extern void __eCNameSpace__eC__types__PrintLn(struct __eCNameSpace__eC__types__Class * class, const void * object, ...);

extern struct __eCNameSpace__eC__types__Class * __eCClass_Type;

extern struct __eCNameSpace__eC__types__Class * __eCClass_Symbol;

extern struct __eCNameSpace__eC__types__Class * __eCClass___eCNameSpace__eC__files__TempFile;

extern struct __eCNameSpace__eC__types__Class * __eCClass_ModuleImport;

extern struct __eCNameSpace__eC__types__Class * __eCClass_Context;

extern struct __eCNameSpace__eC__types__Class * __eCClass___eCNameSpace__eC__types__Application;

extern struct __eCNameSpace__eC__types__Class * __eCClass___eCNameSpace__eC__files__File;

extern struct __eCNameSpace__eC__types__Class * __eCClass_char__PTR_;

extern struct __eCNameSpace__eC__types__Class * __eCClass___eCNameSpace__eC__files__DualPipe;

extern struct __eCNameSpace__eC__types__Class * __eCClass___eCNameSpace__eC__types__Module;

void __eCCreateModuleInstances_ecp()
{
globalContext = __eCNameSpace__eC__types__eInstance_New(__eCClass_Context);
(globalData.classes.CompareKey = (void *)__eCMethod___eCNameSpace__eC__containers__BinaryTree_CompareString, globalData.defines.CompareKey = (void *)__eCMethod___eCNameSpace__eC__containers__BinaryTree_CompareString, globalData.functions.CompareKey = (void *)__eCMethod___eCNameSpace__eC__containers__BinaryTree_CompareString, globalData.nameSpaces.CompareKey = (void *)__eCMethod___eCNameSpace__eC__containers__BinaryTree_CompareString);
}

void __eCDestroyModuleInstances_ecp()
{
((globalContext ? __extension__ ({
void * __eCPtrToDelete = (globalContext);

__eCClass_Context->Destructor ? __eCClass_Context->Destructor((void *)__eCPtrToDelete) : 0, __eCNameSpace__eC__types__eSystem_Delete(__eCPtrToDelete);
}) : 0), globalContext = 0);
}

struct Identifier;

extern struct Identifier * GetDeclId(struct Declarator * decl);

extern struct Declarator * MkDeclaratorIdentifier(struct Identifier * id);

struct InitDeclarator;

struct InitDeclarator
{
struct InitDeclarator * prev;
struct InitDeclarator * next;
struct Location loc;
struct Declarator * declarator;
struct Initializer * initializer;
} eC_gcc_struct;

struct Operand;

struct OpTable
{
unsigned int (*  Add)(struct Expression *, struct Operand *, struct Operand *);
unsigned int (*  Sub)(struct Expression *, struct Operand *, struct Operand *);
unsigned int (*  Mul)(struct Expression *, struct Operand *, struct Operand *);
unsigned int (*  Div)(struct Expression *, struct Operand *, struct Operand *);
unsigned int (*  Mod)(struct Expression *, struct Operand *, struct Operand *);
unsigned int (*  Neg)(struct Expression *, struct Operand *);
unsigned int (*  Inc)(struct Expression *, struct Operand *);
unsigned int (*  Dec)(struct Expression *, struct Operand *);
unsigned int (*  Asign)(struct Expression *, struct Operand *, struct Operand *);
unsigned int (*  AddAsign)(struct Expression *, struct Operand *, struct Operand *);
unsigned int (*  SubAsign)(struct Expression *, struct Operand *, struct Operand *);
unsigned int (*  MulAsign)(struct Expression *, struct Operand *, struct Operand *);
unsigned int (*  DivAsign)(struct Expression *, struct Operand *, struct Operand *);
unsigned int (*  ModAsign)(struct Expression *, struct Operand *, struct Operand *);
unsigned int (*  BitAnd)(struct Expression *, struct Operand *, struct Operand *);
unsigned int (*  BitOr)(struct Expression *, struct Operand *, struct Operand *);
unsigned int (*  BitXor)(struct Expression *, struct Operand *, struct Operand *);
unsigned int (*  LShift)(struct Expression *, struct Operand *, struct Operand *);
unsigned int (*  RShift)(struct Expression *, struct Operand *, struct Operand *);
unsigned int (*  BitNot)(struct Expression *, struct Operand *);
unsigned int (*  AndAsign)(struct Expression *, struct Operand *, struct Operand *);
unsigned int (*  OrAsign)(struct Expression *, struct Operand *, struct Operand *);
unsigned int (*  XorAsign)(struct Expression *, struct Operand *, struct Operand *);
unsigned int (*  LShiftAsign)(struct Expression *, struct Operand *, struct Operand *);
unsigned int (*  RShiftAsign)(struct Expression *, struct Operand *, struct Operand *);
unsigned int (*  Not)(struct Expression *, struct Operand *);
unsigned int (*  Equ)(struct Expression *, struct Operand *, struct Operand *);
unsigned int (*  Nqu)(struct Expression *, struct Operand *, struct Operand *);
unsigned int (*  And)(struct Expression *, struct Operand *, struct Operand *);
unsigned int (*  Or)(struct Expression *, struct Operand *, struct Operand *);
unsigned int (*  Grt)(struct Expression *, struct Operand *, struct Operand *);
unsigned int (*  Sma)(struct Expression *, struct Operand *, struct Operand *);
unsigned int (*  GrtEqu)(struct Expression *, struct Operand *, struct Operand *);
unsigned int (*  SmaEqu)(struct Expression *, struct Operand *, struct Operand *);
unsigned int (*  Cond)(struct Expression *, struct Operand *, struct Operand *, struct Operand *);
} eC_gcc_struct;

struct Operand
{
int kind;
struct Type * type;
unsigned int ptrSize;
union
{
char c;
unsigned char uc;
short s;
unsigned short us;
int i;
unsigned int ui;
float f;
double d;
long long i64;
uint64 ui64;
} eC_gcc_struct __anon1;
struct OpTable ops;
} eC_gcc_struct;

extern struct Operand GetOperand(struct Expression * exp);

struct Instantiation;

struct ClassFunction;

struct ClassFunction
{
struct ClassFunction * prev;
struct ClassFunction * next;
struct Location loc;
struct __eCNameSpace__eC__containers__OldList *  specifiers;
struct Declarator * declarator;
struct __eCNameSpace__eC__containers__OldList *  declarations;
struct Statement * body;
struct __eCNameSpace__eC__types__Class * _class;
struct __eCNameSpace__eC__containers__OldList attached;
int declMode;
struct Type * type;
struct Symbol * propSet;
unsigned int isVirtual;
unsigned int isConstructor;
unsigned int isDestructor;
unsigned int dontMangle;
int id;
int idCode;
} eC_gcc_struct;

struct ClassDefinition;

struct Context
{
struct Context * parent;
struct __eCNameSpace__eC__files__BinaryTree types;
struct __eCNameSpace__eC__files__BinaryTree classes;
struct __eCNameSpace__eC__files__BinaryTree symbols;
struct __eCNameSpace__eC__files__BinaryTree structSymbols;
int nextID;
int simpleID;
struct __eCNameSpace__eC__files__BinaryTree templateTypes;
struct ClassDefinition * classDef;
unsigned int templateTypesOnly;
unsigned int hasNameSpace;
} eC_gcc_struct;

struct FunctionDefinition;

struct FunctionDefinition
{
struct FunctionDefinition * prev;
struct FunctionDefinition * next;
struct Location loc;
struct __eCNameSpace__eC__containers__OldList *  specifiers;
struct Declarator * declarator;
struct __eCNameSpace__eC__containers__OldList *  declarations;
struct Statement * body;
struct __eCNameSpace__eC__types__Class * _class;
struct __eCNameSpace__eC__containers__OldList attached;
int declMode;
struct Type * type;
struct Symbol * propSet;
int tempCount;
unsigned int propertyNoThis;
} eC_gcc_struct;

struct External;

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

struct TemplateParameter;

struct Type
{
struct Type * prev;
struct Type * next;
int refCount;
union
{
struct Symbol * _class;
struct
{
struct __eCNameSpace__eC__containers__OldList members;
char *  enumName;
} eC_gcc_struct __anon1;
struct
{
struct Type * returnType;
struct __eCNameSpace__eC__containers__OldList params;
struct Symbol * thisClass;
unsigned int staticMethod;
struct TemplateParameter * thisClassTemplate;
} eC_gcc_struct __anon2;
struct
{
struct __eCNameSpace__eC__types__Method * method;
struct __eCNameSpace__eC__types__Class * methodClass;
struct __eCNameSpace__eC__types__Class * usedClass;
} eC_gcc_struct __anon3;
struct
{
struct Type * arrayType;
int arraySize;
struct Expression * arraySizeExp;
unsigned int freeExp;
struct Symbol * enumClass;
} eC_gcc_struct __anon4;
struct Type * type;
struct TemplateParameter * templateParameter;
} eC_gcc_struct __anon1;
int kind;
unsigned int size;
char *  name;
char *  typeName;
struct __eCNameSpace__eC__types__Class * thisClassFrom;
int promotedFrom;
int classObjectType;
int alignment;
unsigned int offset;
int bitFieldCount;
int count;
int bitMemberSize;
unsigned int isSigned : 1;
unsigned int constant : 1;
unsigned int truth : 1;
unsigned int byReference : 1;
unsigned int extraParam : 1;
unsigned int directClassAccess : 1;
unsigned int computing : 1;
unsigned int keepCast : 1;
unsigned int passAsTemplate : 1;
unsigned int dllExport : 1;
unsigned int attrStdcall : 1;
unsigned int declaredWithStruct : 1;
unsigned int typedByReference : 1;
unsigned int casted : 1;
unsigned int pointerAlignment : 1;
unsigned int isLong : 1;
unsigned int signedBeforePromotion : 1;
unsigned int isVector : 1;
} eC_gcc_struct;

struct __eCNameSpace__eC__types__ClassTemplateParameter;

extern struct __eCNameSpace__eC__types__ClassTemplateParameter * __eCNameSpace__eC__types__eClass_AddTemplateParameter(struct __eCNameSpace__eC__types__Class * _class, const char *  name, int type, const void *  info, struct __eCNameSpace__eC__types__ClassTemplateArgument * defaultArg);

struct __eCNameSpace__eC__types__ClassTemplateParameter
{
struct __eCNameSpace__eC__types__ClassTemplateParameter * prev;
struct __eCNameSpace__eC__types__ClassTemplateParameter * next;
const char *  name;
int type;
union
{
const char *  dataTypeString;
int memberType;
} eC_gcc_struct __anon1;
struct __eCNameSpace__eC__types__ClassTemplateArgument defaultArg;
void *  param;
} eC_gcc_struct;

void __eCMethod_PrecompApp_Main(struct __eCNameSpace__eC__types__Instance *  this);

struct Specifier;

struct Declarator
{
struct Declarator * prev;
struct Declarator * next;
struct Location loc;
int type;
struct Symbol * symbol;
struct Declarator * declarator;
union
{
struct Identifier * identifier;
struct
{
struct Expression * exp;
struct Expression * posExp;
struct Attrib * attrib;
} eC_gcc_struct structDecl;
struct
{
struct Expression * exp;
struct Specifier * enumClass;
} eC_gcc_struct array;
struct
{
struct __eCNameSpace__eC__containers__OldList * parameters;
} eC_gcc_struct function;
struct
{
struct __eCNameSpace__eC__types__Instance * pointer;
} eC_gcc_struct pointer;
struct
{
struct ExtDecl * extended;
} eC_gcc_struct extended;
} eC_gcc_struct __anon1;
} eC_gcc_struct;

struct Identifier
{
struct Identifier * prev;
struct Identifier * next;
struct Location loc;
struct Symbol * classSym;
struct Specifier * _class;
char *  string;
struct Identifier * badID;
} eC_gcc_struct;

struct Expression
{
struct Expression * prev;
struct Expression * next;
struct Location loc;
int type;
union
{
struct
{
char *  constant;
struct Identifier * identifier;
} eC_gcc_struct __anon1;
struct Statement * compound;
struct Instantiation * instance;
struct
{
char *  string;
unsigned int intlString;
unsigned int wideString;
} eC_gcc_struct __anon2;
struct __eCNameSpace__eC__containers__OldList *  list;
struct
{
struct __eCNameSpace__eC__containers__OldList * specifiers;
struct Declarator * decl;
} eC_gcc_struct _classExp;
struct
{
struct Identifier * id;
} eC_gcc_struct classData;
struct
{
struct Expression * exp;
struct __eCNameSpace__eC__containers__OldList * arguments;
struct Location argLoc;
} eC_gcc_struct call;
struct
{
struct Expression * exp;
struct __eCNameSpace__eC__containers__OldList * index;
} eC_gcc_struct index;
struct
{
struct Expression * exp;
struct Identifier * member;
int memberType;
unsigned int thisPtr;
} eC_gcc_struct member;
struct
{
int op;
struct Expression * exp1;
struct Expression * exp2;
} eC_gcc_struct op;
struct TypeName * typeName;
struct Specifier * _class;
struct
{
struct TypeName * typeName;
struct Expression * exp;
} eC_gcc_struct cast;
struct
{
struct Expression * cond;
struct __eCNameSpace__eC__containers__OldList * exp;
struct Expression * elseExp;
} eC_gcc_struct cond;
struct
{
struct TypeName * typeName;
struct Expression * size;
} eC_gcc_struct _new;
struct
{
struct TypeName * typeName;
struct Expression * size;
struct Expression * exp;
} eC_gcc_struct _renew;
struct
{
char * table;
struct Identifier * id;
} eC_gcc_struct db;
struct
{
struct Expression * ds;
struct Expression * name;
} eC_gcc_struct dbopen;
struct
{
struct TypeName * typeName;
struct Initializer * initializer;
} eC_gcc_struct initializer;
struct
{
struct Expression * exp;
struct TypeName * typeName;
} eC_gcc_struct vaArg;
struct
{
struct TypeName * typeName;
struct Identifier * id;
} eC_gcc_struct offset;
} eC_gcc_struct __anon1;
unsigned int debugValue;
struct __eCNameSpace__eC__types__DataValue val;
uint64 address;
unsigned int hasAddress;
struct Type * expType;
struct Type * destType;
unsigned int usage;
int tempCount;
unsigned int byReference;
unsigned int isConstant;
unsigned int addedThis;
unsigned int needCast;
unsigned int thisPtr;
unsigned int opDestType;
unsigned int usedInComparison;
unsigned int ambiguousUnits;
unsigned int parentOpDestType;
unsigned int needTemplateCast;
} eC_gcc_struct;

struct Specifier
{
struct Specifier * prev;
struct Specifier * next;
struct Location loc;
int type;
union
{
int specifier;
struct
{
struct ExtDecl * extDecl;
char *  name;
struct Symbol * symbol;
struct __eCNameSpace__eC__containers__OldList *  templateArgs;
struct Specifier * nsSpec;
} eC_gcc_struct __anon1;
struct
{
struct Identifier * id;
struct __eCNameSpace__eC__containers__OldList *  list;
struct __eCNameSpace__eC__containers__OldList *  baseSpecs;
struct __eCNameSpace__eC__containers__OldList *  definitions;
unsigned int addNameSpace;
struct Context * ctx;
struct ExtDecl * extDeclStruct;
} eC_gcc_struct __anon2;
struct Expression * expression;
struct Specifier * _class;
struct TemplateParameter * templateParameter;
} eC_gcc_struct __anon1;
} eC_gcc_struct;

struct Instantiation
{
struct Instantiation * prev;
struct Instantiation * next;
struct Location loc;
struct Specifier * _class;
struct Expression * exp;
struct __eCNameSpace__eC__containers__OldList *  members;
struct Symbol * symbol;
unsigned int fullSet;
unsigned int isConstant;
unsigned char *  data;
struct Location nameLoc;
struct Location insideLoc;
unsigned int built;
} eC_gcc_struct;

struct ClassDefinition
{
struct ClassDefinition * prev;
struct ClassDefinition * next;
struct Location loc;
struct Specifier * _class;
struct __eCNameSpace__eC__containers__OldList *  baseSpecs;
struct __eCNameSpace__eC__containers__OldList *  definitions;
struct Symbol * symbol;
struct Location blockStart;
struct Location nameLoc;
int declMode;
unsigned int deleteWatchable;
} eC_gcc_struct;

struct PropertyDef;

struct PropertyDef
{
struct PropertyDef * prev;
struct PropertyDef * next;
struct Location loc;
struct __eCNameSpace__eC__containers__OldList *  specifiers;
struct Declarator * declarator;
struct Identifier * id;
struct Statement * getStmt;
struct Statement * setStmt;
struct Statement * issetStmt;
struct Symbol * symbol;
struct Expression * category;
struct
{
unsigned int conversion : 1;
unsigned int isWatchable : 1;
unsigned int isDBProp : 1;
} eC_gcc_struct __anon1;
} eC_gcc_struct;

struct TemplateArgument;

struct TemplateParameter
{
struct TemplateParameter * prev;
struct TemplateParameter * next;
struct Location loc;
int type;
struct Identifier * identifier;
union
{
struct TemplateDatatype * dataType;
int memberType;
} eC_gcc_struct __anon1;
struct TemplateArgument * defaultArgument;
const char *  dataTypeString;
struct Type * baseType;
} eC_gcc_struct;

struct TemplateArgument
{
struct TemplateArgument * prev;
struct TemplateArgument * next;
struct Location loc;
struct Identifier * name;
int type;
union
{
struct Expression * expression;
struct Identifier * identifier;
struct TemplateDatatype * templateDatatype;
} eC_gcc_struct __anon1;
} eC_gcc_struct;

static void OutputSymbols(const char * fileName)
{
struct __eCNameSpace__eC__types__Instance * f = __eCNameSpace__eC__files__FileOpen(fileName, 2);

if(f)
{
int lastType = (int)-1;
struct Definition * definition;

if(globalInstance)
__eCMethod___eCNameSpace__eC__files__File_Printf(f, "[Global Instance]\n");
for(definition = precompDefines.first; definition; definition = definition->next)
{
if(definition->type != lastType)
{
if(lastType != (int)-1)
__eCMethod___eCNameSpace__eC__files__File_Printf(f, "   .\n");
if(definition->type == 0)
__eCMethod___eCNameSpace__eC__files__File_Printf(f, "[Imported Modules]\n");
else if(definition->type == 1)
__eCMethod___eCNameSpace__eC__files__File_Printf(f, "[Defined Classes]\n");
else if(definition->type == 2)
__eCMethod___eCNameSpace__eC__files__File_Printf(f, "[Defined Expressions]\n");
else if(definition->type == 3)
__eCMethod___eCNameSpace__eC__files__File_Printf(f, "[Defined Functions]\n");
else if(definition->type == 4)
__eCMethod___eCNameSpace__eC__files__File_Printf(f, "[Defined Data]\n");
lastType = definition->type;
}
if(definition->type == 0)
{
struct ImportedModule * module = (struct ImportedModule *)definition;

if(module->importType == 1)
__eCMethod___eCNameSpace__eC__files__File_Printf(f, "   [Static]\n");
else if(module->importType == 2)
__eCMethod___eCNameSpace__eC__files__File_Printf(f, "   [Remote]\n");
if(module->importAccess == 2)
__eCMethod___eCNameSpace__eC__files__File_Printf(f, "   [Private]\n");
__eCMethod___eCNameSpace__eC__files__File_Printf(f, "   %s\n", module->name);
}
else if(definition->type == 1)
{
struct __eCNameSpace__eC__types__Class * _class = __eCNameSpace__eC__types__eSystem_FindClass(privateModule, definition->name);
struct ClassDefine * classDefine = (struct ClassDefine *)definition;

__eCMethod___eCNameSpace__eC__files__File_Printf(f, "   %s\n", definition->name);
if(classDefine->accessMode == 3)
__eCMethod___eCNameSpace__eC__files__File_Printf(f, "      [Static]\n");
if(classDefine->accessMode == 2)
__eCMethod___eCNameSpace__eC__files__File_Printf(f, "      [Private]\n");
if(classDefine->fixed)
__eCMethod___eCNameSpace__eC__files__File_Printf(f, "      [Fixed]\n");
if(classDefine->noExpansion)
__eCMethod___eCNameSpace__eC__files__File_Printf(f, "      [No Expansion]\n");
if(classDefine->isRemote)
__eCMethod___eCNameSpace__eC__files__File_Printf(f, "      [Remote]\n");
if(classDefine->isWatchable)
__eCMethod___eCNameSpace__eC__files__File_Printf(f, "      [Watchable]\n");
if(_class->type == 4)
__eCMethod___eCNameSpace__eC__files__File_Printf(f, "      [Enum]\n");
else if(_class->type == 2)
__eCMethod___eCNameSpace__eC__files__File_Printf(f, "      [Bit]\n");
else if(_class->type == 1)
__eCMethod___eCNameSpace__eC__files__File_Printf(f, "      [Struct]\n");
else if(_class->type == 3)
__eCMethod___eCNameSpace__eC__files__File_Printf(f, "      [Unit]\n");
else if(_class->type == 5)
__eCMethod___eCNameSpace__eC__files__File_Printf(f, "      [NoHead]\n");
if(_class->inheritanceAccess == 2)
__eCMethod___eCNameSpace__eC__files__File_Printf(f, "      [Private Base]\n");
else
__eCMethod___eCNameSpace__eC__files__File_Printf(f, "      [Base]\n");
if(classDefine->base)
__eCMethod___eCNameSpace__eC__files__File_Printf(f, "         %s\n", classDefine->base);
else
__eCMethod___eCNameSpace__eC__files__File_Printf(f, "         [None]\n");
if(_class->templateParams.count)
{
struct __eCNameSpace__eC__types__ClassTemplateParameter * param;
struct TemplateParameter * tp;

__eCMethod___eCNameSpace__eC__files__File_Printf(f, "         [Template Parameters]\n");
for(tp = (*((struct Symbol *)_class->symbol)->templateParams).first, param = _class->templateParams.first; param && tp; param = param->next, tp = tp->next)
{
__eCMethod___eCNameSpace__eC__files__File_Printf(f, "               %s\n", param->name);
switch(param->type)
{
case 0:
__eCMethod___eCNameSpace__eC__files__File_Printf(f, "               [Type]\n");
__eCMethod___eCNameSpace__eC__files__File_Printf(f, "               %s\n", param->__anon1.dataTypeString ? param->__anon1.dataTypeString : "[None]");
__eCMethod___eCNameSpace__eC__files__File_Printf(f, "               %s\n", param->defaultArg.__anon1.__anon1.dataTypeString ? param->defaultArg.__anon1.__anon1.dataTypeString : "[None]");
break;
case 2:
__eCMethod___eCNameSpace__eC__files__File_Printf(f, "               [Expression]\n");
__eCMethod___eCNameSpace__eC__files__File_Printf(f, "               %s\n", param->__anon1.dataTypeString ? param->__anon1.dataTypeString : "[None]");
if(tp->defaultArgument && tp->defaultArgument->__anon1.expression)
{
char temp[8192];

temp[0] = 0;
PrintExpression(tp->defaultArgument->__anon1.expression, temp);
__eCNameSpace__eC__types__ChangeCh(temp, '\n', ' ');
__eCMethod___eCNameSpace__eC__files__File_Printf(f, "               ");
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, temp) : (unsigned int)1;
}));
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, "\n") : (unsigned int)1;
}));
}
else
__eCMethod___eCNameSpace__eC__files__File_Printf(f, "               [None]\n");
break;
case 1:
__eCMethod___eCNameSpace__eC__files__File_Printf(f, "               [Identifier]\n");
__eCMethod___eCNameSpace__eC__files__File_Printf(f, "               %s\n", (param->__anon1.memberType == 0) ? "[Data member]" : ((param->__anon1.memberType == 1) ? "[Method]" : "[Property]"));
if(tp->defaultArgument && tp->defaultArgument->__anon1.identifier)
{
__eCMethod___eCNameSpace__eC__files__File_Printf(f, "               ");
if(tp->defaultArgument->__anon1.identifier->_class && tp->defaultArgument->__anon1.identifier->_class->type == 1 && tp->defaultArgument->__anon1.identifier->_class->__anon1.__anon1.name)
{
__eCMethod___eCNameSpace__eC__files__File_Printf(f, "%s::", tp->defaultArgument->__anon1.identifier->_class->__anon1.__anon1.name);
}
else if(tp->defaultArgument->__anon1.identifier->_class && tp->defaultArgument->__anon1.identifier->_class->type == 8 && tp->defaultArgument->__anon1.identifier->_class->__anon1.templateParameter->identifier)
{
__eCMethod___eCNameSpace__eC__files__File_Printf(f, "%s::", tp->defaultArgument->__anon1.identifier->_class->__anon1.templateParameter->identifier->string);
}
__eCMethod___eCNameSpace__eC__files__File_Printf(f, "%s\n", tp->defaultArgument->__anon1.identifier->string);
}
else
{
__eCMethod___eCNameSpace__eC__files__File_Printf(f, "               [None]\n");
}
break;
}
}
__eCMethod___eCNameSpace__eC__files__File_Printf(f, "         .\n");
}
if(classDefine->accessMode != 3)
{
if(classDefine->methods.first)
{
struct MethodDefine * method;

__eCMethod___eCNameSpace__eC__files__File_Printf(f, "      [Defined Methods]\n");
for(method = classDefine->methods.first; method; method = method->next)
{
__eCMethod___eCNameSpace__eC__files__File_Printf(f, "         %s\n", method->name);
if(method->memberAccess == 1)
__eCMethod___eCNameSpace__eC__files__File_Printf(f, "            [Public]\n");
else
__eCMethod___eCNameSpace__eC__files__File_Printf(f, "            [Private]\n");
if(method->isVirtual)
__eCMethod___eCNameSpace__eC__files__File_Printf(f, "            [Virtual]\n");
__eCMethod___eCNameSpace__eC__files__File_Printf(f, "            [Type]\n");
__eCMethod___eCNameSpace__eC__files__File_Printf(f, "               %s\n", method->type ? method->type : "");
}
__eCMethod___eCNameSpace__eC__files__File_Printf(f, "         .\n");
}
OutputDataMembers(classDefine, _class, f);
if(_class->type == 4)
{
struct __eCNameSpace__eC__files__NamedLink64 * value;
struct __eCNameSpace__eC__types__Class * enumClass = __eCNameSpace__eC__types__eSystem_FindClass(privateModule, "enum");
struct __eCNameSpace__eC__types__EnumClassData * e = (_class ? ((void *)(((char *)_class->data) + enumClass->offsetClass)) : (((void *)0)));

__eCMethod___eCNameSpace__eC__files__File_Printf(f, "      [Enum Values]\n");
for(value = e->values.first; value; value = value->next)
{
__eCMethod___eCNameSpace__eC__files__File_Printf(f, "         %s = ", value->name);
if(_class->dataTypeString && !strcmp(_class->dataTypeString, "uint64") && *(uint64 *)&value->data > (((long long)0x7fffffffffffffffLL)))
__eCMethod___eCNameSpace__eC__files__File_Printf(f, ((__runtimePlatform == 1) ? "0x%I64X" : "0x%llX"), *(uint64 *)&value->data);
else
__eCMethod___eCNameSpace__eC__files__File_Printf(f, ((__runtimePlatform == 1) ? "%I64d" : "%lld"), value->data);
__eCMethod___eCNameSpace__eC__files__File_Printf(f, "\n");
}
__eCMethod___eCNameSpace__eC__files__File_Printf(f, "         .\n");
}
}
}
else if(definition->type == 2)
{
struct Define * defineDefine = (struct Define *)definition;

__eCMethod___eCNameSpace__eC__files__File_Printf(f, "   %s\n", definition->name);
__eCMethod___eCNameSpace__eC__files__File_Printf(f, "      [Value]\n");
__eCMethod___eCNameSpace__eC__files__File_Printf(f, "         ");
OutputExpression(defineDefine->exp, f);
__eCMethod___eCNameSpace__eC__files__File_Printf(f, "\n");
}
else if(definition->type == 3)
{
struct FunctionDefine * functionDefine = (struct FunctionDefine *)definition;

__eCMethod___eCNameSpace__eC__files__File_Printf(f, "   %s\n", functionDefine->name);
__eCMethod___eCNameSpace__eC__files__File_Printf(f, "      [Type]\n");
__eCMethod___eCNameSpace__eC__files__File_Printf(f, "         %s\n", functionDefine->dataType);
}
else if(definition->type == 4)
{
struct DataDefine * dataDefine = (struct DataDefine *)definition;

__eCMethod___eCNameSpace__eC__files__File_Printf(f, "   %s\n", dataDefine->name);
__eCMethod___eCNameSpace__eC__files__File_Printf(f, "      [Type]\n");
__eCMethod___eCNameSpace__eC__files__File_Printf(f, "         %s\n", dataDefine->dataType);
}
}
__eCMethod___eCNameSpace__eC__files__File_Printf(f, "   .\n");
(__eCNameSpace__eC__types__eInstance_DecRef(f), f = 0);
}
}

struct Enumerator;

struct Enumerator
{
struct Enumerator * prev;
struct Enumerator * next;
struct Location loc;
struct Identifier * id;
struct Expression * exp;
struct __eCNameSpace__eC__containers__OldList *  attribs;
} eC_gcc_struct;

static void ProcessClassEnumValues(int classType, struct __eCNameSpace__eC__containers__OldList * definitions, struct Symbol * symbol, struct __eCNameSpace__eC__containers__OldList * baseSpecs, struct __eCNameSpace__eC__containers__OldList * enumValues)
{
struct __eCNameSpace__eC__types__Class * regClass = symbol->__anon1.registered;

if(regClass && enumValues)
{
struct Enumerator * e;
long long lastValue = -1;
unsigned int lastValueSet = 0;

for(e = enumValues->first; e; e = e->next)
{
if(e->exp)
{
struct Type * destType = (destType = __eCNameSpace__eC__types__eInstance_New(__eCClass_Type), destType->kind = 4, destType->refCount = 1, destType);

e->exp->destType = destType;
SetParsingType(1);
ProcessExpressionType(e->exp);
SetParsingType(0);
if(!e->exp->expType)
{
destType->kind = 8;
destType->__anon1._class = symbol;
ProcessExpressionType(e->exp);
}
if(e->exp->isConstant)
{
if(e->exp->type == 0 && e->exp->expType && e->exp->__anon1.__anon1.identifier && e->exp->__anon1.__anon1.identifier->string && e->exp->expType->kind == 15)
{
struct __eCNameSpace__eC__files__NamedLink64 * l;
char * string = e->exp->__anon1.__anon1.identifier->string;

for(l = e->exp->expType->__anon1.__anon1.members.first; l; l = l->next)
{
if(!strcmp(l->name, string))
{
if(l->data)
{
FreeExpContents(e->exp);
e->exp->type = 2;
e->exp->__anon1.__anon1.constant = PrintInt64(l->data);
FreeType(e->exp->expType);
e->exp->expType = ProcessTypeString("int64", 0);
}
break;
}
}
}
else
ComputeExpression(e->exp);
}
if(e->exp->isConstant && e->exp->type == 2)
{
struct Operand op = GetOperand(e->exp);
long long value;

switch(op.kind)
{
case 1:
value = op.type->isSigned ? (long long)op.__anon1.c : (long long)op.__anon1.uc;
break;
case 2:
value = op.type->isSigned ? (long long)op.__anon1.s : (long long)op.__anon1.us;
break;
case 4:
value = op.type->isSigned ? op.__anon1.i64 : (long long)op.__anon1.ui64;
break;
case 3:
default:
value = op.type->isSigned ? (long long)op.__anon1.i : (int)op.__anon1.ui;
}
__eCNameSpace__eC__types__eEnum_AddFixedValue(regClass, e->id->string, value);
lastValueSet = 1;
lastValue = value;
}
else
{
char expString[8192];

expString[0] = 0;
PrintExpression(e->exp, expString);
printf(__eCNameSpace__eC__i18n__GetTranslatedString("ecp", "error: could not resolve value %s for enum %s in precompiler\n", (((void *)0))), expString, regClass->name);
((struct __eCNameSpace__eC__types__Application *)(((char *)((struct __eCNameSpace__eC__types__Instance *)__thisModule) + sizeof(struct __eCNameSpace__eC__types__Module) + sizeof(struct __eCNameSpace__eC__types__Instance))))->exitCode = 1;
if(lastValueSet)
__eCNameSpace__eC__types__eEnum_AddFixedValue(regClass, e->id->string, ++lastValue);
else
__eCNameSpace__eC__types__eEnum_AddValue(regClass, e->id->string);
}
}
else
{
if(lastValueSet)
__eCNameSpace__eC__types__eEnum_AddFixedValue(regClass, e->id->string, ++lastValue);
else
__eCNameSpace__eC__types__eEnum_AddValue(regClass, e->id->string);
}
}
}
}

struct Declaration;

typedef union YYSTYPE
{
int specifierType;
int i;
int declMode;
struct Identifier * id;
struct Expression * exp;
struct Specifier * specifier;
struct __eCNameSpace__eC__containers__OldList * list;
struct Enumerator * enumerator;
struct Declarator * declarator;
struct __eCNameSpace__eC__types__Instance * pointer;
struct Initializer * initializer;
struct InitDeclarator * initDeclarator;
struct TypeName * typeName;
struct Declaration * declaration;
struct Statement * stmt;
struct FunctionDefinition * function;
struct External * external;
struct Context * context;
struct __eCNameSpace__eC__types__Instance * asmField;
struct Attrib * attrib;
struct ExtDecl * extDecl;
struct Attribute * attribute;
struct Instantiation * instance;
struct MembersInit * membersInit;
struct MemberInit * memberInit;
struct ClassFunction * classFunction;
struct ClassDefinition * _class;
struct ClassDef * classDef;
struct PropertyDef * prop;
char * string;
struct Symbol * symbol;
struct PropertyWatch * propertyWatch;
struct TemplateParameter * templateParameter;
struct TemplateArgument * templateArgument;
struct TemplateDatatype * templateDatatype;
struct __eCNameSpace__eC__types__Instance * dbtableEntry;
struct __eCNameSpace__eC__types__Instance * dbindexItem;
struct DBTableDef * dbtableDef;
} eC_gcc_struct YYSTYPE;

extern YYSTYPE yylval;

struct ClassDef
{
struct ClassDef * prev;
struct ClassDef * next;
struct Location loc;
int type;
union
{
struct Declaration * decl;
struct ClassFunction * function;
struct __eCNameSpace__eC__containers__OldList *  defProperties;
struct PropertyDef * propertyDef;
struct PropertyWatch * propertyWatch;
char *  designer;
struct Identifier * defaultProperty;
struct
{
struct Identifier * id;
struct Initializer * initializer;
} eC_gcc_struct __anon1;
} eC_gcc_struct __anon1;
int memberAccess;
void *  object;
} eC_gcc_struct;

struct Declaration
{
struct Declaration * prev;
struct Declaration * next;
struct Location loc;
int type;
union
{
struct
{
struct __eCNameSpace__eC__containers__OldList *  specifiers;
struct __eCNameSpace__eC__containers__OldList *  declarators;
} eC_gcc_struct __anon1;
struct Instantiation * inst;
struct
{
struct Identifier * id;
struct Expression * exp;
} eC_gcc_struct __anon2;
} eC_gcc_struct __anon1;
struct Specifier * extStorage;
struct Symbol * symbol;
int declMode;
} eC_gcc_struct;

struct External
{
struct External * prev;
struct External * next;
struct Location loc;
int type;
struct Symbol * symbol;
union
{
struct FunctionDefinition * function;
struct ClassDefinition * _class;
struct Declaration * declaration;
char *  importString;
struct Identifier * id;
struct DBTableDef * table;
char *  pragma;
} eC_gcc_struct __anon1;
int importType;
struct External * fwdDecl;
struct __eCNameSpace__eC__types__Instance * outgoing;
struct __eCNameSpace__eC__types__Instance * incoming;
int nonBreakableIncoming;
} eC_gcc_struct;

static void AddDefinitions(struct ClassDefine * classDefine, struct DataMemberDefine * parentMemberDefine, struct __eCNameSpace__eC__types__Class * regClass, struct __eCNameSpace__eC__types__DataMember * member, struct __eCNameSpace__eC__containers__OldList * definitions)
{
if(definitions != (((void *)0)))
{
struct ClassDef * def;

for(def = definitions->first; def; def = def->next)
{
if(def->type == 2)
{
struct Declaration * decl = def->__anon1.decl;
struct __eCNameSpace__eC__types__DataMember * dataMember;
struct Type * dataType;
struct DataMemberDefine * dataMemberDefine;

if(decl->type == 0)
{
struct Declarator * d;

if(decl->__anon1.__anon1.declarators)
{
for(d = (*decl->__anon1.__anon1.declarators).first; d; d = d->next)
{
struct Identifier * declId = GetDeclId(d);

if(declId)
{
dataMemberDefine = __extension__ ({
struct DataMemberDefine * __eCInstance1 = __eCNameSpace__eC__types__eInstance_New(__eCClass_DataMemberDefine);

__eCInstance1->isProperty = 3, __eCInstance1->memberType = 0, __eCInstance1->name = __eCNameSpace__eC__types__CopyString(declId->string), __eCInstance1;
});
__eCMethod___eCNameSpace__eC__containers__OldList_Add(&parentMemberDefine->dataMembers, dataMemberDefine);
if(regClass && regClass->type == 2)
{
struct Expression * sizeExp = d->__anon1.structDecl.exp, * posExp = d->__anon1.structDecl.posExp;
int bitSize = 0, bitPos = -1;
char dataTypeString[1024];

dataTypeString[0] = '\0';
if(sizeExp)
{
ProcessExpressionType(sizeExp);
ComputeExpression(sizeExp);
if(sizeExp->isConstant)
bitSize = strtol(sizeExp->__anon1.__anon1.constant, (((void *)0)), 0);
FreeExpression(sizeExp);
}
if(posExp)
{
ProcessExpressionType(posExp);
ComputeExpression(posExp);
if(posExp->isConstant)
bitPos = strtol(posExp->__anon1.__anon1.constant, (((void *)0)), 0);
FreeExpression(posExp);
}
d->__anon1.structDecl.exp = (((void *)0));
d->__anon1.structDecl.posExp = (((void *)0));
dataType = ProcessType(decl->__anon1.__anon1.specifiers, d);
PrintType(dataType, dataTypeString, 0, 1);
{
struct __eCNameSpace__eC__types__BitMember * member = __eCNameSpace__eC__types__eClass_AddBitMember(regClass, declId->string, dataTypeString, 0, 0, def->memberAccess);

if(member)
{
member->size = bitSize;
member->pos = bitPos;
}
dataMember = (struct __eCNameSpace__eC__types__DataMember *)member;
}
if(dataMember)
dataMember->dataType = dataType;
dataMemberDefine->size = bitSize;
dataMemberDefine->bitPos = bitPos;
dataMemberDefine->type = __eCNameSpace__eC__types__CopyString(dataTypeString);
}
else
{
{
char typeString[1024];

typeString[0] = '\0';
dataType = ProcessType(decl->__anon1.__anon1.specifiers, d);
PrintType(dataType, typeString, 0, 1);
if(member)
dataMember = __eCNameSpace__eC__types__eMember_AddDataMember(member, declId->string, typeString, 0, 0, def->memberAccess);
else
dataMember = __eCNameSpace__eC__types__eClass_AddDataMember(regClass, declId->string, typeString, 0, 0, def->memberAccess);
if(dataMember)
dataMember->dataType = dataType;
dataMemberDefine->type = __eCNameSpace__eC__types__CopyString(typeString);
}
}
dataMemberDefine->memberAccess = def->memberAccess;
}
}
}
else if(decl->__anon1.__anon1.specifiers)
{
struct Specifier * spec;

for(spec = (*decl->__anon1.__anon1.specifiers).first; spec; spec = spec->next)
{
if(spec->type == 3 || spec->type == 4)
{
if(spec->__anon1.__anon2.definitions && !spec->__anon1.__anon2.id)
{
struct __eCNameSpace__eC__types__DataMember * dataMember = __eCNameSpace__eC__types__eMember_New((spec->type == 4) ? 1 : 2, def->memberAccess);

dataMemberDefine = __extension__ ({
struct DataMemberDefine * __eCInstance1 = __eCNameSpace__eC__types__eInstance_New(__eCClass_DataMemberDefine);

__eCInstance1->isProperty = 3, __eCInstance1->memberType = (spec->type == 4) ? 1 : 2, __eCInstance1;
});
__eCMethod___eCNameSpace__eC__containers__OldList_Add(&parentMemberDefine->dataMembers, dataMemberDefine);
AddDefinitions((((void *)0)), dataMemberDefine, (((void *)0)), dataMember, spec->__anon1.__anon2.definitions);
if(member)
__eCNameSpace__eC__types__eMember_AddMember(member, dataMember);
else
__eCNameSpace__eC__types__eClass_AddMember(regClass, dataMember);
}
else if(spec->__anon1.__anon2.definitions && spec->__anon1.__anon2.id && (*spec->__anon1.__anon2.definitions).count)
{
{
struct Identifier * id = spec->__anon1.__anon2.id;
char typeString[1024];

typeString[0] = '\0';
spec->__anon1.__anon2.id = (((void *)0));
decl->__anon1.__anon1.declarators = MkListOne(MkDeclaratorIdentifier(id));
dataType = ProcessType(decl->__anon1.__anon1.specifiers, (((void *)0)));
PrintType(dataType, typeString, 0, 1);
if(member)
dataMember = __eCNameSpace__eC__types__eMember_AddDataMember(member, id->string, typeString, 0, 0, def->memberAccess);
else
dataMember = __eCNameSpace__eC__types__eClass_AddDataMember(regClass, id->string, typeString, 0, 0, def->memberAccess);
if(dataMember)
dataMember->dataType = dataType;
}
}
}
}
}
}
else if(decl->type == 2)
{
struct Instantiation * inst = decl->__anon1.inst;
struct Expression * exp = inst->exp;

if(exp)
{
{
char * string = exp->__anon1.__anon1.identifier->string;

{
struct Type * dataType = (dataType = __eCNameSpace__eC__types__eInstance_New(__eCClass_Type), dataType->kind = 8, dataType->__anon1._class = inst->_class->__anon1.__anon1.symbol, dataType->refCount = 1, dataType);

if(member)
dataMember = __eCNameSpace__eC__types__eMember_AddDataMember(member, string, inst->_class->__anon1.__anon1.name, 0, 0, def->memberAccess);
else
dataMember = __eCNameSpace__eC__types__eClass_AddDataMember(regClass, string, inst->_class->__anon1.__anon1.name, 0, 0, def->memberAccess);
if(dataMember)
dataMember->dataType = dataType;
}
dataMemberDefine = __extension__ ({
struct DataMemberDefine * __eCInstance1 = __eCNameSpace__eC__types__eInstance_New(__eCClass_DataMemberDefine);

__eCInstance1->isProperty = 3, __eCInstance1->memberType = 0, __eCInstance1->name = __eCNameSpace__eC__types__CopyString(string), __eCInstance1->type = __eCNameSpace__eC__types__CopyString(inst->_class->__anon1.__anon1.name), __eCInstance1;
});
__eCMethod___eCNameSpace__eC__containers__OldList_Add(&parentMemberDefine->dataMembers, dataMemberDefine);
}
}
}
}
else if(def->type == 3 && def->__anon1.propertyDef)
{
struct PropertyDef * propertyDef = def->__anon1.propertyDef;

{
struct __eCNameSpace__eC__types__Property * prop;
struct PropertyDefine * propDefine;

{
char * dataTypeString = StringFromSpecDecl(propertyDef->specifiers, propertyDef->declarator);

prop = __eCNameSpace__eC__types__eClass_AddProperty(regClass, propertyDef->__anon1.conversion ? (((void *)0)) : propertyDef->id->string, dataTypeString, propertyDef->setStmt, propertyDef->getStmt, def->memberAccess);
if(prop)
{
prop->IsSet = (void *)propertyDef->issetStmt;
prop->compiled = 0;
}
(__eCNameSpace__eC__types__eSystem_Delete(dataTypeString), dataTypeString = 0);
}
if(prop)
{
prop->symbol = __extension__ ({
struct Symbol * __eCInstance1 = __eCNameSpace__eC__types__eInstance_New(__eCClass_Symbol);

__eCInstance1->string = __eCNameSpace__eC__types__CopyString(propertyDef->symbol->string), __eCInstance1->type = propertyDef->symbol->type, __eCInstance1;
});
if(propertyDef->symbol->type)
propertyDef->symbol->type->refCount++;
propDefine = __extension__ ({
struct PropertyDefine * __eCInstance1 = __eCNameSpace__eC__types__eInstance_New(__eCClass_PropertyDefine);

__eCInstance1->isProperty = 1, __eCInstance1->name = prop->conversion ? (((void *)0)) : __eCNameSpace__eC__types__CopyString(prop->name), __eCInstance1->type = __eCNameSpace__eC__types__CopyString(prop->dataTypeString), __eCInstance1->isVirtual = 0, __eCInstance1->memberAccess = def->memberAccess, __eCInstance1->hasSet = propertyDef->setStmt ? 1 : 0, __eCInstance1->hasGet = propertyDef->getStmt ? 1 : 0, __eCInstance1->isWatchable = propertyDef->__anon1.isWatchable, __eCInstance1;
});
__eCMethod___eCNameSpace__eC__containers__OldList_Add(&classDefine->propertiesAndMembers, propDefine);
}
}
}
else if(def->type == 10 && def->__anon1.propertyDef)
{
struct PropertyDef * propertyDef = def->__anon1.propertyDef;

{
struct __eCNameSpace__eC__types__ClassProperty * prop;
struct PropertyDefine * propDefine;

{
char * dataTypeString = StringFromSpecDecl(propertyDef->specifiers, propertyDef->declarator);

prop = __eCNameSpace__eC__types__eClass_AddClassProperty(regClass, propertyDef->id->string, dataTypeString, propertyDef->setStmt, propertyDef->getStmt);
(__eCNameSpace__eC__types__eSystem_Delete(dataTypeString), dataTypeString = 0);
}
if(prop)
{
propDefine = __extension__ ({
struct PropertyDefine * __eCInstance1 = __eCNameSpace__eC__types__eInstance_New(__eCClass_PropertyDefine);

__eCInstance1->name = __eCNameSpace__eC__types__CopyString(prop->name), __eCInstance1->type = __eCNameSpace__eC__types__CopyString(prop->dataTypeString), __eCInstance1->hasSet = propertyDef->setStmt ? 1 : 0, __eCInstance1->hasGet = propertyDef->getStmt ? 1 : 0, __eCInstance1;
});
__eCMethod___eCNameSpace__eC__containers__OldList_Add(&classDefine->classProperties, propDefine);
}
}
}
else if(def->type == 7)
{
if(classDefine)
classDefine->fixed = 1;
}
else if(def->type == 6)
{
if(classDefine)
classDefine->noExpansion = 1;
}
else if(def->type == 13)
{
struct __eCNameSpace__eC__types__DataMember * member;
struct __eCNameSpace__eC__types__Property * prop;

if((prop = __eCNameSpace__eC__types__eClass_FindProperty(regClass, def->__anon1.__anon1.id->string, privateModule)))
{
struct PropertyDefine * propDefine;

prop = __eCNameSpace__eC__types__eClass_AddProperty(regClass, def->__anon1.__anon1.id->string, (((void *)0)), (((void *)0)), (((void *)0)), def->memberAccess);
if(prop)
{
propDefine = __extension__ ({
struct PropertyDefine * __eCInstance1 = __eCNameSpace__eC__types__eInstance_New(__eCClass_PropertyDefine);

__eCInstance1->isProperty = 1, __eCInstance1->name = __eCNameSpace__eC__types__CopyString(prop->name), __eCInstance1->memberAccess = def->memberAccess, __eCInstance1;
});
__eCMethod___eCNameSpace__eC__containers__OldList_Add(&classDefine->propertiesAndMembers, propDefine);
}
}
else if((member = __eCNameSpace__eC__types__eClass_FindDataMember(regClass, def->__anon1.__anon1.id->string, privateModule, (((void *)0)), (((void *)0)))))
{
struct DataMemberDefine * dataMemberDefine;

member = __eCNameSpace__eC__types__eClass_AddDataMember(regClass, def->__anon1.__anon1.id->string, (((void *)0)), 0, 0, def->memberAccess);
dataMemberDefine = __extension__ ({
struct DataMemberDefine * __eCInstance1 = __eCNameSpace__eC__types__eInstance_New(__eCClass_DataMemberDefine);

__eCInstance1->isProperty = 3, __eCInstance1->memberType = 0, __eCInstance1->name = __eCNameSpace__eC__types__CopyString(def->__anon1.__anon1.id->string), __eCInstance1->memberAccess = def->memberAccess, __eCInstance1;
});
__eCMethod___eCNameSpace__eC__containers__OldList_Add(&parentMemberDefine->dataMembers, dataMemberDefine);
}
}
}
}
}

static void ProcessClass(int classType, struct __eCNameSpace__eC__containers__OldList * definitions, struct Symbol * symbol, struct __eCNameSpace__eC__containers__OldList * baseSpecs, struct __eCNameSpace__eC__containers__OldList * enumValues, unsigned int isWatchable, int declMode)
{
struct __eCNameSpace__eC__types__Class * regClass;
struct ClassDef * def;
struct ClassDefine * classDefine;
char baseName[1024];
unsigned int unitType = 0;
unsigned int wouldBeEnum = 0;
int inheritanceAccess = 1;

baseName[0] = '\0';
if(baseSpecs != (((void *)0)))
{
struct Type * baseType = ProcessType(baseSpecs, (((void *)0)));

PrintType(baseType, baseName, 0, 1);
if(baseType->kind == 8)
{
if(baseType->__anon1._class->__anon1.registered && classType == 0)
{
if(baseType->__anon1._class->__anon1.registered->type == 3)
classType = 3;
else if(baseType->__anon1._class->__anon1.registered->type == 2)
classType = 2;
else if(baseType->__anon1._class->__anon1.registered->type == 5)
classType = 5;
else if(baseType->__anon1._class->__anon1.registered->type == 4)
{
wouldBeEnum = 1;
}
}
}
else if(baseType->kind == 9 || baseType->kind == 10)
{
classType = 5;
baseName[0] = '\0';
}
else
unitType = 1;
FreeType(baseType);
if(((struct Specifier *)baseSpecs->first)->type == 0 && ((struct Specifier *)baseSpecs->first)->__anon1.specifier == PRIVATE)
inheritanceAccess = 2;
}
if(classType == 0)
{
if(unitType)
classType = 3;
if(definitions != (((void *)0)))
{
for(def = definitions->first; def; def = def->next)
{
if(def->type == 2)
{
struct Declaration * decl = def->__anon1.decl;

if(decl->type == 0)
{
if(unitType)
{
classType = 2;
break;
}
if(decl->__anon1.__anon1.declarators)
{
struct Declarator * d;

for(d = (*decl->__anon1.__anon1.declarators).first; d; d = d->next)
{
if(d->__anon1.structDecl.exp)
{
classType = 2;
break;
}
}
if(d)
break;
}
}
}
}
}
}
if(classType == 0 && wouldBeEnum)
classType = 4;
regClass = symbol->__anon1.registered = __eCNameSpace__eC__types__eSystem_RegisterClass((classType == 6) ? 1 : classType, symbol->string, baseName[0] ? baseName : (((void *)0)), 0, 0, (((void *)0)), (((void *)0)), privateModule, 1, inheritanceAccess);
if(regClass)
regClass->symbol = symbol;
classDefine = __extension__ ({
struct ClassDefine * __eCInstance1 = __eCNameSpace__eC__types__eInstance_New(__eCClass_ClassDefine);

__eCInstance1->type = 1, __eCInstance1->name = __eCNameSpace__eC__types__CopyString(symbol->string), __eCInstance1->base = baseName[0] ? __eCNameSpace__eC__types__CopyString(baseName) : (((void *)0)), __eCInstance1->accessMode = declMode, __eCInstance1->isRemote = symbol->isRemote, __eCInstance1->isWatchable = isWatchable, __eCInstance1;
});
__eCMethod___eCNameSpace__eC__containers__OldList_Add(&precompDefines, classDefine);
if(classType == 6)
{
struct __eCNameSpace__eC__types__DataMember * unionMember = __eCNameSpace__eC__types__eMember_New(1, 1);
struct DataMemberDefine * unionDefine;

unionDefine = __extension__ ({
struct DataMemberDefine * __eCInstance1 = __eCNameSpace__eC__types__eInstance_New(__eCClass_DataMemberDefine);

__eCInstance1->isProperty = 3, __eCInstance1->memberType = 1, __eCInstance1;
});
__eCMethod___eCNameSpace__eC__containers__OldList_Add(&classDefine->propertiesAndMembers, unionDefine);
AddDefinitions(classDefine, unionDefine, regClass, unionMember, definitions);
__eCNameSpace__eC__types__eClass_AddMember(regClass, unionMember);
}
else if(regClass)
AddDefinitions(classDefine, (struct DataMemberDefine *)classDefine, regClass, (((void *)0)), definitions);
if(definitions != (((void *)0)))
{
for(def = definitions->first; def; def = def->next)
{
if(def->type == 0)
{
struct ClassFunction * func = def->__anon1.function;

if(!func->dontMangle && func->declarator)
{
struct Identifier * id = GetDeclId(func->declarator);
struct __eCNameSpace__eC__types__Method * method;
struct MethodDefine * methodDefine;

{
char * dataTypeString = StringFromSpecDecl(func->specifiers, func->declarator);

if(func->isVirtual)
method = __eCNameSpace__eC__types__eClass_AddVirtualMethod(regClass, id->string, dataTypeString, func->declarator->symbol, def->memberAccess);
else
method = __eCNameSpace__eC__types__eClass_AddMethod(regClass, id->string, dataTypeString, func->declarator->symbol, def->memberAccess);
(__eCNameSpace__eC__types__eSystem_Delete(dataTypeString), dataTypeString = 0);
}
if(method)
{
method->symbol = __extension__ ({
struct Symbol * __eCInstance1 = __eCNameSpace__eC__types__eInstance_New(__eCClass_Symbol);

__eCInstance1->string = __eCNameSpace__eC__types__CopyString(func->declarator->symbol->string), __eCInstance1->type = func->declarator->symbol->type, __eCInstance1;
});
if(func->declarator->symbol->type)
func->declarator->symbol->type->refCount++;
((struct Symbol *)method->symbol)->__anon1.method = method;
func->declarator->symbol = (((void *)0));
if(method->type != 1 || method->_class == regClass)
{
methodDefine = __extension__ ({
struct MethodDefine * __eCInstance1 = __eCNameSpace__eC__types__eInstance_New(__eCClass_MethodDefine);

__eCInstance1->name = __eCNameSpace__eC__types__CopyString(method->name), __eCInstance1->type = __eCNameSpace__eC__types__CopyString(method->dataTypeString), __eCInstance1->memberAccess = def->memberAccess, __eCInstance1->isVirtual = method->type == 1, __eCInstance1;
});
__eCMethod___eCNameSpace__eC__containers__OldList_Add(&classDefine->methods, methodDefine);
}
}
}
}
else if(def->type == 13)
{
struct __eCNameSpace__eC__types__Method * method;

if((method = __eCNameSpace__eC__types__eClass_FindMethod(regClass, def->__anon1.__anon1.id->string, privateModule)))
{
struct MethodDefine * methodDefine;

method = __eCNameSpace__eC__types__eClass_AddMethod(regClass, def->__anon1.__anon1.id->string, (((void *)0)), (((void *)0)), def->memberAccess);
methodDefine = __extension__ ({
struct MethodDefine * __eCInstance1 = __eCNameSpace__eC__types__eInstance_New(__eCClass_MethodDefine);

__eCInstance1->name = __eCNameSpace__eC__types__CopyString(method->name), __eCInstance1->memberAccess = def->memberAccess, __eCInstance1;
});
__eCMethod___eCNameSpace__eC__containers__OldList_Add(&classDefine->methods, methodDefine);
}
}
}
}
if(regClass && symbol->templateParams)
{
struct TemplateParameter * param;

for(param = (*symbol->templateParams).first; param; param = param->next)
{
struct __eCNameSpace__eC__types__ClassTemplateArgument defaultArg =
{

.__anon1 = {

.__anon1 = {
.dataTypeString = 0
}
}
};

if(param->defaultArgument)
{
switch(param->type)
{
case 0:
defaultArg.__anon1.__anon1.dataTypeString = StringFromSpecDecl(param->defaultArgument->__anon1.templateDatatype->specifiers, param->defaultArgument->__anon1.templateDatatype->decl);
break;
case 1:
{
char memberString[1024];

memberString[0] = '\0';
if(param->defaultArgument->__anon1.identifier->_class && param->defaultArgument->__anon1.identifier->_class->__anon1.__anon1.name)
{
if(param->defaultArgument->__anon1.identifier->_class->type == 8)
strcpy(memberString, param->defaultArgument->__anon1.identifier->_class->__anon1.templateParameter->identifier->string);
else
strcpy(memberString, param->defaultArgument->__anon1.identifier->_class->__anon1.__anon1.name);
}
if(memberString[0])
{
strcat(memberString, "::");
}
strcat(memberString, param->defaultArgument->__anon1.identifier->string);
defaultArg.__anon1.__anon2.memberString = __eCNameSpace__eC__types__CopyString(memberString);
break;
}
case 2:
{
struct Operand op;

ProcessExpressionType(param->defaultArgument->__anon1.expression);
ComputeExpression(param->defaultArgument->__anon1.expression);
op = GetOperand(param->defaultArgument->__anon1.expression);
defaultArg.__anon1.expression.__anon1.ui64 = op.__anon1.ui64;
break;
}
}
}
if(param->type == 1)
{
__eCNameSpace__eC__types__eClass_AddTemplateParameter(regClass, param->identifier->string, param->type, (void *)(uintptr_t)param->__anon1.memberType, &defaultArg);
}
else
{
char * typeString = param->__anon1.dataType ? StringFromSpecDecl(param->__anon1.dataType->specifiers, param->__anon1.dataType->decl) : (((void *)0));

__eCNameSpace__eC__types__eClass_AddTemplateParameter(regClass, param->identifier->string, param->type, typeString, &defaultArg);
}
}
}
}

void PreCompPreProcessClassDefinitions()
{
struct __eCNameSpace__eC__containers__OldList * ast = GetAST();
struct External * external, * next;

for(external = (*ast).first; external; external = next)
{
next = external->next;
if(external->type == 2)
{
struct ClassDefinition * _class = external->__anon1._class;

if(_class->declMode == 1 || _class->declMode == 2 || _class->declMode == 3)
{
if(_class->definitions)
{
ProcessClass(0, _class->definitions, _class->symbol, _class->baseSpecs, (((void *)0)), _class->deleteWatchable, _class->declMode);
}
}
}
else if(external->type == 1)
{
struct Declaration * declaration = external->__anon1.declaration;

if(declaration->type == 1)
{
if(external->__anon1.declaration->declMode == 1 || external->__anon1.declaration->declMode == 2 || external->__anon1.declaration->declMode == 3)
{
if(declaration->__anon1.__anon1.specifiers)
{
struct Specifier * specifier;

for(specifier = (*declaration->__anon1.__anon1.specifiers).first; specifier; specifier = specifier->next)
{
if((specifier->type == 2 || specifier->type == 3 || specifier->type == 4) && specifier->__anon1.__anon2.id && specifier->__anon1.__anon2.id->string && (declaration->declMode || specifier->__anon1.__anon2.baseSpecs || (specifier->type == 2 && specifier->__anon1.__anon2.definitions)))
{
struct Symbol * symbol = FindClass(specifier->__anon1.__anon2.id->string);

if(symbol)
{
int classType;

if(specifier->type == 2)
classType = 4;
else if(specifier->type == 4)
classType = 6;
else
classType = 1;
ProcessClass(classType, specifier->__anon1.__anon2.definitions, symbol, specifier->__anon1.__anon2.baseSpecs, specifier->__anon1.__anon2.list, 0, external->__anon1.declaration->declMode);
}
}
}
}
if(external->__anon1.declaration->declMode == 1 || external->__anon1.declaration->declMode == 2)
{
if(declaration->__anon1.__anon1.declarators)
{
struct InitDeclarator * d;

for(d = (*declaration->__anon1.__anon1.declarators).first; d; d = d->next)
{
if(d->declarator)
{
struct Symbol * symbol = d->declarator->symbol;

if(symbol)
{
struct DataDefine * dataDefine;
char typeString[1024];

typeString[0] = '\0';
PrintType(symbol->type, typeString, 0, 1);
dataDefine = __extension__ ({
struct DataDefine * __eCInstance1 = __eCNameSpace__eC__types__eInstance_New(__eCClass_DataDefine);

__eCInstance1->type = 4, __eCInstance1->name = __eCNameSpace__eC__types__CopyString(symbol->string), __eCInstance1->dataType = __eCNameSpace__eC__types__CopyString(typeString), __eCInstance1;
});
__eCMethod___eCNameSpace__eC__containers__OldList_Add(&precompDefines, dataDefine);
}
}
}
}
}
}
}
else if(declaration->type == 2)
{
if(external->__anon1.declaration->declMode == 1 || external->__anon1.declaration->declMode == 2)
{
struct Symbol * symbol = declaration->__anon1.inst->symbol;

if(symbol)
{
struct DataDefine * dataDefine;
char typeString[1024];

typeString[0] = '\0';
PrintType(symbol->type, typeString, 0, 1);
dataDefine = __extension__ ({
struct DataDefine * __eCInstance1 = __eCNameSpace__eC__types__eInstance_New(__eCClass_DataDefine);

__eCInstance1->type = 4, __eCInstance1->name = __eCNameSpace__eC__types__CopyString(symbol->string), __eCInstance1->dataType = __eCNameSpace__eC__types__CopyString(typeString), __eCInstance1;
});
__eCMethod___eCNameSpace__eC__containers__OldList_Add(&precompDefines, dataDefine);
}
}
globalInstance = 1;
}
else if(declaration->type == 3)
{
if(external->__anon1.declaration->declMode == 1 || external->__anon1.declaration->declMode == 2)
{
struct Define * definition = (definition = __eCNameSpace__eC__types__eInstance_New(__eCClass_Define), definition->type = 2, definition->name = __eCNameSpace__eC__types__CopyString(declaration->__anon1.__anon2.id->string), definition->exp = declaration->__anon1.__anon2.exp, definition);

__eCMethod___eCNameSpace__eC__containers__OldList_Add(&precompDefines, definition);
}
}
}
else if(external->type == 0 && (external->__anon1.function->declMode == 1 || external->__anon1.function->declMode == 2))
{
struct FunctionDefinition * function = external->__anon1.function;
struct FunctionDefine * functionDefine;
char typeString[1024];

typeString[0] = '\0';
PrintType(function->declarator->symbol->type, typeString, 1, 1);
functionDefine = __extension__ ({
struct FunctionDefine * __eCInstance1 = __eCNameSpace__eC__types__eInstance_New(__eCClass_FunctionDefine);

__eCInstance1->type = 3, __eCInstance1->name = __eCNameSpace__eC__types__CopyString(function->declarator->symbol->string), __eCInstance1->dataType = __eCNameSpace__eC__types__CopyString(typeString), __eCInstance1;
});
__eCMethod___eCNameSpace__eC__containers__OldList_Add(&precompDefines, functionDefine);
}
else if(external->type == 4)
{
SetCurrentNameSpace(external->__anon1.id->string);
}
}
ComputeModuleClasses(privateModule);
for(external = (*ast).first; external; external = next)
{
next = external->next;
if(external->type == 1 && (external->__anon1.declaration->declMode == 1 || external->__anon1.declaration->declMode == 2))
{
struct Declaration * declaration = external->__anon1.declaration;

if(declaration->type == 1)
{
if(declaration->__anon1.__anon1.specifiers)
{
struct Specifier * specifier;

for(specifier = (*declaration->__anon1.__anon1.specifiers).first; specifier; specifier = specifier->next)
{
if((specifier->type == 2) && specifier->__anon1.__anon2.id && specifier->__anon1.__anon2.id->string && (declaration->declMode || specifier->__anon1.__anon2.baseSpecs || (specifier->type == 2 && specifier->__anon1.__anon2.definitions)))
{
struct Symbol * symbol = FindClass(specifier->__anon1.__anon2.id->string);

if(symbol)
{
ProcessClassEnumValues(4, specifier->__anon1.__anon2.definitions, symbol, specifier->__anon1.__anon2.baseSpecs, specifier->__anon1.__anon2.list);
}
}
}
}
}
}
}
}

void __eCMethod_PrecompApp_Main(struct __eCNameSpace__eC__types__Instance * this)
{
int c;
unsigned int valid = 1;
char defaultSymFile[797];
char * cppCommand = (((void *)0));
char * cppOptions = (((void *)0));
int cppOptionsLen = 0;
int targetPlatform = __runtimePlatform;
int targetBits = GetRuntimeBits();

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
strcpy(defaultSymFile, GetSymbolsDir());
__eCNameSpace__eC__types__PathCat(defaultSymFile, GetSourceFile());
__eCNameSpace__eC__types__ChangeExtension(defaultSymFile, "sym", defaultSymFile);
SetOutputFile(defaultSymFile);
}
}
if(!valid)
{
printf("%s", __eCNameSpace__eC__i18n__GetTranslatedString("ecp", "Syntax:\n   ecp [-t <target platform>] [-cpp <c preprocessor>] [-o <output>] [-symbols <outputdir>] [-I<includedir>]* [-isystem <sysincludedir>]* [-D<definition>]* -c <input>\n", (((void *)0))));
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
SetInPreCompiler(1);
SetPrecompDefines(&precompDefines);
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
{
const char * outputFilePath = GetOutputFile();

if(__eCNameSpace__eC__files__FileExists(outputFilePath))
__eCNameSpace__eC__files__DeleteFile(outputFilePath);
}
snprintf(command, sizeof (command), "%s%s -x c -E \"%s\"", cppCommand, cppOptions ? cppOptions : "", GetSourceFile());
command[sizeof (command) - 1] = 0;
if((cppOutput = __eCNameSpace__eC__files__DualPipeOpen((((unsigned int)(1))), command)))
{
int exitCode;
struct __eCNameSpace__eC__containers__OldList * ast;
struct __eCNameSpace__eC__types__Instance * fileInput = __eCNameSpace__eC__types__eInstance_New(__eCClass___eCNameSpace__eC__files__TempFile);
struct ModuleImport * mainModule = __eCNameSpace__eC__types__eInstance_New(__eCClass_ModuleImport);

SetFileInput(fileInput);
SetMainModule(mainModule);
__eCMethod___eCNameSpace__eC__containers__OldList_Add(&imports, mainModule);
resetScanner();
for(; !(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = cppOutput;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__DualPipe->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Eof]);
__internal_VirtualMethod ? __internal_VirtualMethod(cppOutput) : (unsigned int)1;
})); )
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
ParseEc();
SetCurrentNameSpace((((void *)0)));
SetYydebug(0);
(__eCNameSpace__eC__types__eInstance_DecRef(fileInput), fileInput = 0);
SetFileInput((((void *)0)));
ast = GetAST();
if(!exitCode)
{
if(ast)
{
ProcessDBTableDefinitions();
PreCompPreProcessClassDefinitions();
}
if(!((struct __eCNameSpace__eC__types__Application *)(((char *)this + sizeof(struct __eCNameSpace__eC__types__Module) + sizeof(struct __eCNameSpace__eC__types__Instance))))->exitCode)
OutputSymbols(GetOutputFile());
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
__eCNameSpace__eC__types__PrintLn(__eCClass_char__PTR_, "(ecp) error: failed to execute C preprocessor", (void *)0);
((struct __eCNameSpace__eC__types__Application *)(((char *)this + sizeof(struct __eCNameSpace__eC__types__Module) + sizeof(struct __eCNameSpace__eC__types__Instance))))->exitCode = 1;
}
FreeContext(globalContext);
FreeExcludedSymbols(&_excludedSymbols);
__eCMethod___eCNameSpace__eC__containers__OldList_Free(&defines, (void *)(FreeModuleDefine));
__eCMethod___eCNameSpace__eC__containers__OldList_Free(&imports, (void *)(FreeModuleImport));
__eCMethod___eCNameSpace__eC__containers__OldList_Free(&precompDefines, (void *)(FreeDefinition));
FreeTypeData(privateModule);
FreeIncludeFiles();
FreeGlobalData(&globalData);
(__eCNameSpace__eC__types__eInstance_DecRef(privateModule), privateModule = 0);
}
(__eCNameSpace__eC__types__eSystem_Delete(cppCommand), cppCommand = 0);
(__eCNameSpace__eC__types__eSystem_Delete(cppOptions), cppOptions = 0);
SetSymbolsDir((((void *)0)));
}

void __eCRegisterModule_ecp(struct __eCNameSpace__eC__types__Instance * module)
{
struct __eCNameSpace__eC__types__Class __attribute__((unused)) * class;

class = __eCNameSpace__eC__types__eSystem_RegisterClass(5, "ClassDefine", "Definition", sizeof(struct ClassDefine), 0, (void *)0, (void *)0, module, 2, 1);
if(((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application == ((struct __eCNameSpace__eC__types__Module *)(((char *)__thisModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->application && class)
__eCClass_ClassDefine = class;
__eCNameSpace__eC__types__eClass_AddDataMember(class, "base", "char *", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "propertiesAndMembers", "eC::containers::OldList", sizeof(struct __eCNameSpace__eC__containers__OldList), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "classProperties", "eC::containers::OldList", sizeof(struct __eCNameSpace__eC__containers__OldList), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "methods", "eC::containers::OldList", sizeof(struct __eCNameSpace__eC__containers__OldList), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "isRemote", "bool", 4, 4, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "isWatchable", "bool", 4, 4, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "fixed", "bool", 4, 4, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "noExpansion", "bool", 4, 4, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "accessMode", "eC::types::AccessMode", 4, 4, 1);
class = __eCNameSpace__eC__types__eSystem_RegisterClass(5, "Define", "Definition", sizeof(struct Define), 0, (void *)0, (void *)0, module, 2, 1);
if(((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application == ((struct __eCNameSpace__eC__types__Module *)(((char *)__thisModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->application && class)
__eCClass_Define = class;
__eCNameSpace__eC__types__eClass_AddDataMember(class, "exp", "Expression", sizeof(void *), 0xF000F000, 1);
class = __eCNameSpace__eC__types__eSystem_RegisterClass(5, "FunctionDefine", "Definition", sizeof(struct FunctionDefine), 0, (void *)0, (void *)0, module, 2, 1);
if(((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application == ((struct __eCNameSpace__eC__types__Module *)(((char *)__thisModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->application && class)
__eCClass_FunctionDefine = class;
__eCNameSpace__eC__types__eClass_AddDataMember(class, "dataType", "char *", sizeof(void *), 0xF000F000, 1);
class = __eCNameSpace__eC__types__eSystem_RegisterClass(5, "DataDefine", "Definition", sizeof(struct DataDefine), 0, (void *)0, (void *)0, module, 2, 1);
if(((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application == ((struct __eCNameSpace__eC__types__Module *)(((char *)__thisModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->application && class)
__eCClass_DataDefine = class;
__eCNameSpace__eC__types__eClass_AddDataMember(class, "dataType", "char *", sizeof(void *), 0xF000F000, 1);
class = __eCNameSpace__eC__types__eSystem_RegisterClass(5, "MethodDefine", 0, sizeof(struct MethodDefine), 0, (void *)0, (void *)0, module, 2, 1);
if(((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application == ((struct __eCNameSpace__eC__types__Module *)(((char *)__thisModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->application && class)
__eCClass_MethodDefine = class;
__eCNameSpace__eC__types__eClass_AddDataMember(class, (((void *)0)), (((void *)0)), 0, sizeof(void *) > 4 ? sizeof(void *) : 4, 2);
class = __eCNameSpace__eC__types__eSystem_RegisterClass(5, "PropertyDefine", 0, sizeof(struct PropertyDefine), 0, (void *)0, (void *)0, module, 2, 1);
if(((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application == ((struct __eCNameSpace__eC__types__Module *)(((char *)__thisModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->application && class)
__eCClass_PropertyDefine = class;
__eCNameSpace__eC__types__eClass_AddDataMember(class, (((void *)0)), (((void *)0)), 0, sizeof(void *) > 4 ? sizeof(void *) : 4, 2);
class = __eCNameSpace__eC__types__eSystem_RegisterClass(5, "DataMemberDefine", 0, sizeof(struct DataMemberDefine), 0, (void *)0, (void *)0, module, 2, 1);
if(((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application == ((struct __eCNameSpace__eC__types__Module *)(((char *)__thisModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->application && class)
__eCClass_DataMemberDefine = class;
__eCNameSpace__eC__types__eClass_AddDataMember(class, (((void *)0)), (((void *)0)), 0, sizeof(void *) > 4 ? sizeof(void *) : 4, 2);
__eCNameSpace__eC__types__eSystem_RegisterFunction("FreeMethodDefine", "void FreeMethodDefine(MethodDefine method)", FreeMethodDefine, module, 2);
__eCNameSpace__eC__types__eSystem_RegisterFunction("FreeDataMemberDefine", "void FreeDataMemberDefine(DataMemberDefine dataMember)", FreeDataMemberDefine, module, 2);
__eCNameSpace__eC__types__eSystem_RegisterFunction("FreeDataDefine", "void FreeDataDefine(DataDefine data)", FreeDataDefine, module, 2);
__eCNameSpace__eC__types__eSystem_RegisterFunction("FreeDefinition", "void FreeDefinition(Definition definition)", FreeDefinition, module, 2);
__eCNameSpace__eC__types__eSystem_RegisterFunction("PreCompPreProcessClassDefinitions", "void PreCompPreProcessClassDefinitions(void)", PreCompPreProcessClassDefinitions, module, 2);
class = __eCNameSpace__eC__types__eSystem_RegisterClass(0, "PrecompApp", "eC::types::Application", 0, 0, (void *)0, (void *)0, module, 2, 1);
if(((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application == ((struct __eCNameSpace__eC__types__Module *)(((char *)__thisModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->application && class)
__eCClass_PrecompApp = class;
__eCNameSpace__eC__types__eClass_AddMethod(class, "Main", 0, __eCMethod_PrecompApp_Main, 1);
}

