/* Code generated from eC source file: pass1.ec */
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

extern int propWatcherID;

unsigned int buildingECERECOM = 0;

unsigned int buildingECRTModule = 0;

extern unsigned int inCompiler;

extern const char *  outputFile;

extern struct __eCNameSpace__eC__types__Property * __eCProp_Type_isPointerTypeSize;

extern struct __eCNameSpace__eC__types__Property * __eCProp___eCNameSpace__eC__containers__BinaryTree_first;

extern struct __eCNameSpace__eC__types__Property * __eCProp___eCNameSpace__eC__containers__BTNode_next;

extern unsigned int parsingType;

extern const char *  sourceFile;

static struct __eCNameSpace__eC__types__Instance * classPropValues;

extern struct __eCNameSpace__eC__types__Property * __eCProp___eCNameSpace__eC__types__Iterator_data;

extern struct __eCNameSpace__eC__types__Property * __eCProp_Type_isPointerType;

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

struct Pointer;

struct InitDeclarator;

struct AsmField;

struct Attrib;

struct ExtDecl;

struct Attribute;

struct Instantiation;

struct MembersInit;

struct MemberInit;

struct PropertyDef;

struct DBTableEntry;

struct DBIndexItem;

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

struct __eCNameSpace__eC__containers__LinkList
{
void * first;
void * last;
int count;
} eC_gcc_struct;

extern void Compiler_Error(const char *  format, ...);

extern const char *  __eCNameSpace__eC__i18n__GetTranslatedString(const char * name, const char *  string, const char *  stringAndContext);

extern char *  __eCNameSpace__eC__types__CopyString(const char *  string);

extern char *  __eCNameSpace__eC__types__GetLastDirectory(const char *  string, char *  output);

extern unsigned int __eCNameSpace__eC__types__StripExtension(char *  string);

extern void FixModuleName(char *  moduleName);

extern int sprintf(char * , const char * , ...);

extern char *  QMkString(const char *  source);

extern char *  strcpy(char * , const char * );

extern void FullClassNameCat(char *  output, const char *  className, unsigned int includeTemplateParams);

extern char *  strcat(char * , const char * );

extern int strcmp(const char * , const char * );

extern char *  PrintInt64(long long result);

extern void __eCNameSpace__eC__types__ChangeCh(char *  string, char ch1, char ch2);

extern unsigned int DummyMethod(void);

extern char *  PrintUInt64(uint64 result);

extern size_t strlen(const char * );

extern char *  __eCNameSpace__eC__types__StripChars(char * string, const char * chars);

struct __eCNameSpace__eC__containers__IteratorPointer;

struct __eCNameSpace__eC__types__GlobalFunction;

extern int __eCVMethodID_class_OnGetString;

void SetBuildingEcereCom(unsigned int b)
{
buildingECERECOM = b;
}

unsigned int GetBuildingECRT()
{
return buildingECERECOM;
}

void SetBuildingEcereComModule(unsigned int b)
{
buildingECRTModule = b;
}

unsigned int GetBuildingECRTModule()
{
return buildingECRTModule;
}

extern struct __eCNameSpace__eC__containers__OldList *  MkList(void);

extern struct __eCNameSpace__eC__containers__OldList *  excludedSymbols;

extern struct __eCNameSpace__eC__containers__OldList *  CopyList(struct __eCNameSpace__eC__containers__OldList *  source, void *  (*  CopyFunction)(void * ));

extern void ListAdd(struct __eCNameSpace__eC__containers__OldList * list, void *  item);

extern struct __eCNameSpace__eC__containers__OldList *  MkListOne(void *  item);

extern struct __eCNameSpace__eC__containers__OldList *  ast;

struct __eCNameSpace__eC__types__EnumClassData
{
struct __eCNameSpace__eC__containers__OldList values;
long long largest;
} eC_gcc_struct;

unsigned int __eCMethod___eCNameSpace__eC__containers__OldList_Insert(struct __eCNameSpace__eC__containers__OldList * this, void *  prevItem, void *  item);

void __eCMethod___eCNameSpace__eC__containers__OldList_Add(struct __eCNameSpace__eC__containers__OldList * this, void *  item);

void __eCMethod___eCNameSpace__eC__containers__OldList_Remove(struct __eCNameSpace__eC__containers__OldList * this, void *  item);

extern struct Pointer * MkPointer(struct __eCNameSpace__eC__containers__OldList * qualifiers, struct Pointer * pointer);

extern struct Attrib * MkAttrib(int type, struct __eCNameSpace__eC__containers__OldList *  attribs);

extern struct ExtDecl * MkExtDeclAttrib(struct Attrib * attr);

extern struct MembersInit * MkMembersInitList(struct __eCNameSpace__eC__containers__OldList * dataMembers);

struct Location
{
struct CodePosition start;
struct CodePosition end;
} eC_gcc_struct;

extern struct Location yylloc;

struct Statement;

static struct Statement * registerModuleBody;

static struct Statement * unregisterModuleBody;

extern struct Statement * MkCompoundStmt(struct __eCNameSpace__eC__containers__OldList * declarations, struct __eCNameSpace__eC__containers__OldList * statements);

extern struct Statement * MkExpressionStmt(struct __eCNameSpace__eC__containers__OldList * expressions);

extern struct Statement * MkIfStmt(struct __eCNameSpace__eC__containers__OldList * exp, struct Statement * statement, struct Statement * elseStmt);

struct External;

static struct External * registerModuleExternal;

static struct External * unregisterModuleExternal;

extern void FreeExternal(struct External * external);

extern struct External * DeclareStruct(struct External * neededBy, const char *  name, unsigned int skipNoHead, unsigned int needDereference);

extern struct External * curExternal;

struct Context;

extern struct Context * globalContext;

extern struct Context * curContext;

extern struct Context * PushContext(void);

extern void PopContext(struct Context * ctx);

struct Expression;

extern struct Attribute * MkAttribute(char * attr, struct Expression * exp);

extern struct Expression * MkExpConstant(const char *  string);

extern struct Expression * MkExpString(const char *  string);

extern struct Expression * MkExpOp(struct Expression * exp1, int op, struct Expression * exp2);

extern struct Expression * MkExpCall(struct Expression * expression, struct __eCNameSpace__eC__containers__OldList * arguments);

extern struct Expression * CopyExpression(struct Expression * exp);

extern struct Expression * ParseExpressionString(char *  expression);

extern struct Expression * MkExpCondition(struct Expression * cond, struct __eCNameSpace__eC__containers__OldList * expressions, struct Expression * elseExp);

extern void ProcessExpressionType(struct Expression * exp);

extern void FreeExpContents(struct Expression * exp);

extern void ComputeExpression(struct Expression * exp);

extern struct Expression * MkExpInstance(struct Instantiation * inst);

extern void PrintExpression(struct Expression * exp, char *  string);

struct __eCNameSpace__eC__containers__BTNode;

struct __eCNameSpace__eC__containers__BTNode
{
uintptr_t key;
struct __eCNameSpace__eC__containers__BTNode * parent;
struct __eCNameSpace__eC__containers__BTNode * left;
struct __eCNameSpace__eC__containers__BTNode * right;
int depth;
} eC_gcc_struct;

struct __eCNameSpace__eC__containers__BTNode * __eCProp___eCNameSpace__eC__containers__BTNode_Get_next(struct __eCNameSpace__eC__containers__BTNode * this);

struct __eCNameSpace__eC__types__Class;

struct __eCNameSpace__eC__types__Instance
{
void * *  _vTbl;
struct __eCNameSpace__eC__types__Class * _class;
int _refCount;
} eC_gcc_struct;

extern long long __eCNameSpace__eC__types__eClass_GetProperty(struct __eCNameSpace__eC__types__Class * _class, const char *  name);

extern void __eCNameSpace__eC__types__eClass_SetProperty(struct __eCNameSpace__eC__types__Class * _class, const char *  name, long long value);

extern void ReplaceThisClassSpecifiers(struct __eCNameSpace__eC__containers__OldList * specs, struct __eCNameSpace__eC__types__Class * _class);

extern void __eCNameSpace__eC__types__eEnum_AddFixedValue(struct __eCNameSpace__eC__types__Class * _class, const char *  string, long long value);

extern long long __eCNameSpace__eC__types__eEnum_AddValue(struct __eCNameSpace__eC__types__Class * _class, const char *  string);

extern void *  __eCNameSpace__eC__types__eInstance_New(struct __eCNameSpace__eC__types__Class * _class);

extern void __eCNameSpace__eC__types__eInstance_SetMethod(struct __eCNameSpace__eC__types__Instance * instance, const char *  name, void *  function);

extern void __eCNameSpace__eC__types__eInstance_IncRef(struct __eCNameSpace__eC__types__Instance * instance);

struct __eCNameSpace__eC__types__Iterator
{
struct __eCNameSpace__eC__types__Instance * container;
struct __eCNameSpace__eC__containers__IteratorPointer * pointer;
} eC_gcc_struct;

extern int __eCVMethodID___eCNameSpace__eC__containers__Container_Add;

extern int __eCVMethodID___eCNameSpace__eC__containers__Container_Free;

extern void __eCNameSpace__eC__types__eInstance_DecRef(struct __eCNameSpace__eC__types__Instance * instance);

unsigned int __eCMethod___eCNameSpace__eC__types__Iterator_Next(struct __eCNameSpace__eC__types__Iterator * this);

uint64 __eCProp___eCNameSpace__eC__types__Iterator_Get_data(struct __eCNameSpace__eC__types__Iterator * this);

void __eCProp___eCNameSpace__eC__types__Iterator_Set_data(struct __eCNameSpace__eC__types__Iterator * this, uint64 value);

void __eCDestroyModuleInstances_pass1()
{
(__eCNameSpace__eC__types__eInstance_DecRef(classPropValues), classPropValues = 0);
}

struct Specifier;

extern struct Specifier * MkSpecifier(int specifier);

extern struct Specifier * CopySpecifier(struct Specifier * spec);

extern struct Specifier * MkSpecifierName(const char *  name);

extern struct Specifier * MkSpecifierExtended(struct ExtDecl * extDecl);

extern struct Instantiation * MkInstantiation(struct Specifier * _class, struct Expression * exp, struct __eCNameSpace__eC__containers__OldList * members);

struct __eCNameSpace__eC__types__Method;

extern void ProcessMethodType(struct __eCNameSpace__eC__types__Method * method);

extern void DeclareMethod(struct External * neededFor, struct __eCNameSpace__eC__types__Method * method, const char *  name);

struct Type;

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

extern struct Type * ProcessTypeString(const char *  string, unsigned int staticMethod);

extern unsigned int MatchTypes(struct Type * source, struct Type * dest, struct __eCNameSpace__eC__containers__OldList * conversions, struct __eCNameSpace__eC__types__Class * owningClassSource, struct __eCNameSpace__eC__types__Class * owningClassDest, unsigned int doConversion, unsigned int enumBaseType, unsigned int acceptReversedParams, unsigned int isConversionExploration, unsigned int warnConst);

extern void FreeType(struct Type * type);

extern int ComputeTypeSize(struct Type * type);

extern void PrintType(struct Type * type, char *  string, unsigned int printName, unsigned int fullName);

struct Symbol;

extern struct Symbol * FindClass(const char *  name);

struct Declarator;

extern struct Declarator * GetFuncDecl(struct Declarator * decl);

extern struct Declarator * CopyDeclarator(struct Declarator * declarator);

extern struct Declarator * MkDeclaratorFunction(struct Declarator * declarator, struct __eCNameSpace__eC__containers__OldList * parameters);

extern struct Declarator * MkDeclaratorPointer(struct Pointer * pointer, struct Declarator * declarator);

extern struct Type * ProcessType(struct __eCNameSpace__eC__containers__OldList * specs, struct Declarator * decl);

extern char *  StringFromSpecDecl(struct __eCNameSpace__eC__containers__OldList * specs, struct Declarator * decl);

struct TemplateDatatype
{
struct __eCNameSpace__eC__containers__OldList *  specifiers;
struct Declarator * decl;
} eC_gcc_struct;

struct Identifier;

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
struct Pointer * pointer;
} eC_gcc_struct pointer;
struct
{
struct ExtDecl * extended;
} eC_gcc_struct extended;
} eC_gcc_struct __anon1;
} eC_gcc_struct;

extern struct Declarator * MkDeclaratorIdentifier(struct Identifier * id);

extern struct Identifier * MkIdentifier(const char *  string);

extern struct Expression * MkExpIdentifier(struct Identifier * id);

extern struct Expression * MkExpMember(struct Expression * expression, struct Identifier * member);

extern struct Specifier * MkStructOrUnion(int type, struct Identifier * id, struct __eCNameSpace__eC__containers__OldList * definitions);

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

extern struct Identifier * GetDeclId(struct Declarator * decl);

struct ClassPropertyValue
{
struct __eCNameSpace__eC__types__Class * regClass;
unsigned int staticClass;
struct Identifier * id;
struct Expression * exp;
} eC_gcc_struct;

extern void FreeIdentifier(struct Identifier * id);

struct __eCNameSpace__eC__sys__NamedLink64;

struct __eCNameSpace__eC__sys__NamedLink64
{
struct __eCNameSpace__eC__sys__NamedLink64 * prev;
struct __eCNameSpace__eC__sys__NamedLink64 * next;
char *  name;
long long data;
} eC_gcc_struct;

struct __eCNameSpace__eC__sys__OldLink;

struct __eCNameSpace__eC__sys__OldLink
{
struct __eCNameSpace__eC__sys__OldLink * prev;
struct __eCNameSpace__eC__sys__OldLink * next;
void *  data;
} eC_gcc_struct;

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

extern struct ClassFunction * MkClassFunction(struct __eCNameSpace__eC__containers__OldList * specifiers, struct Specifier * _class, struct Declarator * decl, struct __eCNameSpace__eC__containers__OldList * declList);

extern void ProcessClassFunctionBody(struct ClassFunction * func, struct Statement * body);

struct PropertyWatch;

struct PropertyWatch
{
struct PropertyWatch * prev;
struct PropertyWatch * next;
struct Location loc;
struct Statement * compound;
struct __eCNameSpace__eC__containers__OldList *  properties;
unsigned int deleteWatch;
} eC_gcc_struct;

extern void FreePropertyWatch(struct PropertyWatch * watcher);

struct Declaration;

struct Statement
{
struct Statement * prev;
struct Statement * next;
struct Location loc;
int type;
union
{
struct __eCNameSpace__eC__containers__OldList *  expressions;
struct
{
struct Identifier * id;
struct Statement * stmt;
} eC_gcc_struct labeled;
struct
{
struct Expression * exp;
struct Statement * stmt;
} eC_gcc_struct caseStmt;
struct
{
struct __eCNameSpace__eC__containers__OldList * declarations;
struct __eCNameSpace__eC__containers__OldList * statements;
struct Context * context;
unsigned int isSwitch;
} eC_gcc_struct compound;
struct
{
struct __eCNameSpace__eC__containers__OldList * exp;
struct Statement * stmt;
struct Statement * elseStmt;
} eC_gcc_struct ifStmt;
struct
{
struct __eCNameSpace__eC__containers__OldList * exp;
struct Statement * stmt;
} eC_gcc_struct switchStmt;
struct
{
struct __eCNameSpace__eC__containers__OldList * exp;
struct Statement * stmt;
} eC_gcc_struct whileStmt;
struct
{
struct __eCNameSpace__eC__containers__OldList * exp;
struct Statement * stmt;
} eC_gcc_struct doWhile;
struct
{
struct Statement * init;
struct Statement * check;
struct __eCNameSpace__eC__containers__OldList * increment;
struct Statement * stmt;
} eC_gcc_struct forStmt;
struct
{
struct Identifier * id;
} eC_gcc_struct gotoStmt;
struct
{
struct Specifier * spec;
char * statements;
struct __eCNameSpace__eC__containers__OldList * inputFields;
struct __eCNameSpace__eC__containers__OldList * outputFields;
struct __eCNameSpace__eC__containers__OldList * clobberedFields;
} eC_gcc_struct asmStmt;
struct
{
struct Expression * watcher;
struct Expression * object;
struct __eCNameSpace__eC__containers__OldList * watches;
} eC_gcc_struct _watch;
struct
{
struct Identifier * id;
struct __eCNameSpace__eC__containers__OldList * exp;
struct __eCNameSpace__eC__containers__OldList * filter;
struct Statement * stmt;
} eC_gcc_struct forEachStmt;
struct Declaration * decl;
} eC_gcc_struct __anon1;
} eC_gcc_struct;

extern struct Declaration * MkDeclaration(struct __eCNameSpace__eC__containers__OldList * specifiers, struct __eCNameSpace__eC__containers__OldList * initDeclarators);

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

struct Initializer;

extern struct InitDeclarator * MkInitDeclarator(struct Declarator * declarator, struct Initializer * initializer);

extern struct Initializer * MkInitializerAssignment(struct Expression * exp);

extern struct MemberInit * MkMemberInit(struct __eCNameSpace__eC__containers__OldList * ids, struct Initializer * initializer);

struct Initializer
{
struct Initializer * prev;
struct Initializer * next;
struct Location loc;
int type;
union
{
struct Expression * exp;
struct __eCNameSpace__eC__containers__OldList *  list;
} eC_gcc_struct __anon1;
unsigned int isConstant;
struct Identifier * id;
} eC_gcc_struct;

struct FunctionDefinition;

extern struct FunctionDefinition * _MkFunction(struct __eCNameSpace__eC__containers__OldList * specifiers, struct Declarator * declarator, struct __eCNameSpace__eC__containers__OldList * declarationList, unsigned int errorOnOmit);

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

extern void ProcessFunctionBody(struct FunctionDefinition * func, struct Statement * body);

extern struct External * MkExternalFunction(struct FunctionDefinition * function);

struct TypeName;

struct TypeName
{
struct TypeName * prev;
struct TypeName * next;
struct Location loc;
struct __eCNameSpace__eC__containers__OldList *  qualifiers;
struct Declarator * declarator;
int classObjectType;
struct Expression * bitCount;
} eC_gcc_struct;

extern struct TypeName * MkTypeName(struct __eCNameSpace__eC__containers__OldList * qualifiers, struct Declarator * declarator);

extern struct Expression * MkExpCast(struct TypeName * typeName, struct Expression * expression);

extern struct Expression * MkExpTypeSize(struct TypeName * typeName);

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

struct __eCNameSpace__eC__containers__BinaryTree;

struct __eCNameSpace__eC__containers__BinaryTree
{
struct __eCNameSpace__eC__containers__BTNode * root;
int count;
int (*  CompareKey)(struct __eCNameSpace__eC__containers__BinaryTree * tree, uintptr_t a, uintptr_t b);
void (*  FreeKey)(void *  key);
} eC_gcc_struct;

void __eCMethod___eCNameSpace__eC__containers__BinaryTree_Remove(struct __eCNameSpace__eC__containers__BinaryTree * this, struct __eCNameSpace__eC__containers__BTNode * node);

struct __eCNameSpace__eC__containers__BTNode * __eCProp___eCNameSpace__eC__containers__BinaryTree_Get_first(struct __eCNameSpace__eC__containers__BinaryTree * this);

struct TemplateParameter;

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

unsigned int __eCProp_Type_Get_isPointerTypeSize(struct Type * this);

unsigned int __eCProp_Type_Get_isPointerType(struct Type * this);

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

extern struct __eCNameSpace__eC__types__DataMember * __eCNameSpace__eC__types__eClass_AddDataMember(struct __eCNameSpace__eC__types__Class * _class, const char *  name, const char *  type, unsigned int size, unsigned int alignment, int declMode);

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

extern struct __eCNameSpace__eC__types__ClassTemplateArgument *  FindTemplateArg(struct __eCNameSpace__eC__types__Class * _class, struct TemplateParameter * param);

struct __eCNameSpace__eC__types__Module;

extern struct __eCNameSpace__eC__types__Property * __eCNameSpace__eC__types__eClass_FindProperty(struct __eCNameSpace__eC__types__Class * _class, const char *  name, struct __eCNameSpace__eC__types__Instance * module);

extern struct __eCNameSpace__eC__types__Instance * privateModule;

extern struct __eCNameSpace__eC__types__Class * __eCNameSpace__eC__types__eSystem_FindClass(struct __eCNameSpace__eC__types__Instance * module, const char *  name);

extern struct __eCNameSpace__eC__types__GlobalFunction * __eCNameSpace__eC__types__eSystem_RegisterFunction(const char *  name, const char *  type, void *  func, struct __eCNameSpace__eC__types__Instance * module, int declMode);

extern struct __eCNameSpace__eC__types__Class * __eCNameSpace__eC__types__eSystem_RegisterClass(int type, const char *  name, const char *  baseName, int size, int sizeClass, unsigned int (*  Constructor)(void * ), void (*  Destructor)(void * ), struct __eCNameSpace__eC__types__Instance * module, int declMode, int inheritanceAccess);

extern struct __eCNameSpace__eC__types__Instance * __thisModule;

struct __eCNameSpace__eC__types__BitMember;

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

struct __eCNameSpace__eC__types__ClassProperty;

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

struct ClassDefinition;

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

void __eCMethod_External_CreateUniqueEdge(struct External * this, struct External * from, unsigned int soft);

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

struct ClassDef;

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
struct Pointer * pointer;
struct Initializer * initializer;
struct InitDeclarator * initDeclarator;
struct TypeName * typeName;
struct Declaration * declaration;
struct Statement * stmt;
struct FunctionDefinition * function;
struct External * external;
struct Context * context;
struct AsmField * asmField;
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
struct DBTableEntry * dbtableEntry;
struct DBIndexItem * dbindexItem;
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

extern struct ClassDef * MkClassDefFunction(struct ClassFunction * function);

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

void GetNameSpaceString(struct __eCNameSpace__eC__types__NameSpace * ns, char * string)
{
if(ns->parent)
GetNameSpaceString(ns->parent, string);
if(ns->name)
{
strcat(string, ns->name);
strcat(string, "::");
}
}

static struct __eCNameSpace__eC__types__Class * __eCClass_ClassPropertyValue;

struct External * ProcessClassFunction(struct __eCNameSpace__eC__types__Class * owningClass, struct ClassFunction * func, struct __eCNameSpace__eC__containers__OldList * defs, struct External * after, unsigned int makeStatic)
{
struct Type * type = (((void *)0));
struct Symbol * symbol;
struct External * external = (((void *)0));

if(defs && func->declarator)
{
struct FunctionDefinition * function = (((void *)0));
struct Symbol * propSymbol;

if(inCompiler)
{
if(!func->specifiers)
func->specifiers = MkList();
if(makeStatic)
{
struct Specifier * s;

for(s = (*func->specifiers).first; s; s = s->next)
if(s->type == 0 && s->__anon1.specifier == STATIC)
break;
if(!s)
__eCMethod___eCNameSpace__eC__containers__OldList_Insert((&*func->specifiers), (((void *)0)), MkSpecifier(STATIC));
}
}
propSymbol = func->declarator->symbol;
ReplaceThisClassSpecifiers(func->specifiers, owningClass);
if(propSymbol->__anon2.__anon2.externalGet == (struct External *)func)
func->declarator->symbol = (((void *)0));
else if(propSymbol->__anon2.__anon2.externalSet == (struct External *)func)
func->declarator->symbol = (((void *)0));
else if(propSymbol->__anon2.__anon2.externalIsSet == (struct External *)func)
func->declarator->symbol = (((void *)0));
{
function = _MkFunction(func->specifiers, func->declarator, (((void *)0)), 0);
function->propSet = func->propSet;
function->type = func->type;
if(func->type)
func->type->refCount++;
ProcessFunctionBody(function, func->body);
external = MkExternalFunction(function);
external->symbol = func->declarator->symbol;
external->__anon1.function->_class = func->_class;
}
symbol = func->declarator->symbol;
if(!func->dontMangle)
{
struct __eCNameSpace__eC__types__Method * method = func->declarator->symbol->__anon1.method;

func->declarator->symbol->__anon2.__anon3.methodExternal = external;
if(method && method->symbol)
((struct Symbol *)method->symbol)->__anon2.__anon3.methodCodeExternal = external;
if(method && method->type == 1)
{
struct Type * methodDataType;

ProcessMethodType(method);
methodDataType = method->dataType;
type = symbol->type;
if(!type->__anon1.__anon2.staticMethod && !type->__anon1.__anon2.thisClass && !type->__anon1.__anon2.thisClassTemplate)
{
if(method->dataType->__anon1.__anon2.thisClassTemplate)
{
if(owningClass->templateArgs)
{
struct __eCNameSpace__eC__types__ClassTemplateArgument * arg = FindTemplateArg(owningClass, method->dataType->__anon1.__anon2.thisClassTemplate);

type->byReference = method->dataType->byReference;
methodDataType = ProcessTypeString(method->dataTypeString, 0);
type->__anon1.__anon2.thisClass = methodDataType->__anon1.__anon2.thisClass = (arg && (*arg).__anon1.__anon1.dataTypeString) ? FindClass((*arg).__anon1.__anon1.dataTypeString) : (((void *)0));
}
}
else if(method->dataType->__anon1.__anon2.staticMethod)
type->__anon1.__anon2.staticMethod = 1;
else if(method->dataType->__anon1.__anon2.thisClass)
{
type->__anon1.__anon2.thisClass = method->dataType->__anon1.__anon2.thisClass;
type->byReference = method->dataType->byReference;
}
else
{
if(!owningClass->symbol)
owningClass->symbol = FindClass(owningClass->fullName);
type->__anon1.__anon2.thisClass = owningClass->symbol;
type->extraParam = 1;
}
}
yylloc = func->loc;
if(!MatchTypes(type, methodDataType, (((void *)0)), owningClass, method->_class, 1, 1, 1, 0, 1))
{
Compiler_Error(__eCNameSpace__eC__i18n__GetTranslatedString("ec", "Incompatible virtual function %s\n", (((void *)0))), method->name);
}
else
{
struct Type * typeParam;
struct Declarator * funcDecl = GetFuncDecl(func->declarator);

if(funcDecl->__anon1.function.parameters && (*funcDecl->__anon1.function.parameters).first)
{
struct TypeName * param = (*funcDecl->__anon1.function.parameters).first;

for(typeParam = methodDataType->__anon1.__anon2.params.first; typeParam && param; typeParam = typeParam->next)
{
if(typeParam->classObjectType)
{
param->classObjectType = typeParam->classObjectType;
if(param->declarator && param->declarator->symbol)
param->declarator->symbol->type->classObjectType = typeParam->classObjectType;
}
param = param ? param->next : (((void *)0));
}
}
}
if(methodDataType != method->dataType)
FreeType(methodDataType);
}
else
{
type = symbol->type;
if(!type->__anon1.__anon2.staticMethod && !type->__anon1.__anon2.thisClass)
{
if(owningClass && !owningClass->symbol)
owningClass->symbol = FindClass(owningClass->fullName);
type->__anon1.__anon2.thisClass = owningClass ? FindClass(owningClass->fullName) : (((void *)0));
}
}
}
else
{
if(symbol->type && !symbol->type->__anon1.__anon2.staticMethod && !symbol->type->__anon1.__anon2.thisClass)
{
if(!owningClass->symbol)
owningClass->symbol = FindClass(owningClass->fullName);
symbol->type->__anon1.__anon2.thisClass = owningClass->symbol;
}
if(propSymbol->__anon2.__anon2.externalSet == (struct External *)func && propSymbol->__anon1._property && propSymbol->__anon1._property->conversion)
{
if(symbol->type->__anon1.__anon2.thisClass && symbol->type->classObjectType != 1)
{
if(owningClass->type != 1)
symbol->type->__anon1.__anon2.thisClass = (((void *)0));
}
}
if(propSymbol->__anon2.__anon2.externalGet == (struct External *)func)
{
propSymbol->__anon2.__anon2.externalGet = external;
}
else if(propSymbol->__anon2.__anon2.externalSet == (struct External *)func)
{
propSymbol->__anon2.__anon2.externalSet = external;
}
else if(propSymbol->__anon2.__anon2.externalIsSet == (struct External *)func)
{
propSymbol->__anon2.__anon2.externalIsSet = external;
}
else
{
}
}
if(inCompiler)
{
if(func->body)
{
func->declarator = (((void *)0));
func->specifiers = (((void *)0));
func->body = (((void *)0));
__eCMethod___eCNameSpace__eC__containers__OldList_Insert(defs, after, external);
}
else
{
struct __eCNameSpace__eC__types__Method * method = func->declarator->symbol->__anon1.method;

if(method && method->symbol)
((struct Symbol *)method->symbol)->__anon2.__anon3.methodCodeExternal = (((void *)0));
if(func->declarator->symbol && func->declarator->symbol->__anon2.__anon3.methodExternal == external)
func->declarator->symbol->__anon2.__anon3.methodExternal = (((void *)0));
func->declarator = (((void *)0));
func->specifiers = (((void *)0));
FreeExternal(external);
}
}
else
{
__eCMethod___eCNameSpace__eC__containers__BinaryTree_Remove(&globalContext->symbols, (struct __eCNameSpace__eC__containers__BTNode *)symbol);
__eCMethod___eCNameSpace__eC__containers__OldList_Add((&*excludedSymbols), symbol);
__eCMethod___eCNameSpace__eC__containers__OldList_Insert(defs, after, external);
external->__anon1.function->declarator = CopyDeclarator(external->__anon1.function->declarator);
external->__anon1.function->specifiers = CopyList(external->__anon1.function->specifiers, (void *)(CopySpecifier));
external->__anon1.function->body = (((void *)0));
}
}
return external;
}

extern char *  __eCNameSpace__eC__types__PrintString(struct __eCNameSpace__eC__types__Class * class, const void * object, ...);

extern struct __eCNameSpace__eC__types__Class * __eCClass_Context;

extern struct __eCNameSpace__eC__types__Class * __eCClass_Type;

extern struct __eCNameSpace__eC__types__Class * __eCClass_Symbol;

extern struct __eCNameSpace__eC__types__Class * __eCClass___eCNameSpace__eC__containers__List_TPL_ClassPropertyValue_;

extern struct __eCNameSpace__eC__types__Class * __eCClass_char__PTR_;

extern struct __eCNameSpace__eC__types__Class * __eCClass_uint;

extern struct __eCNameSpace__eC__types__Class * __eCClass___eCNameSpace__eC__types__TemplateMemberType;

extern struct __eCNameSpace__eC__types__Class * __eCClass___eCNameSpace__eC__containers__List;

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

void __eCDestructor_ClassPropertyValue(struct __eCNameSpace__eC__types__Instance * this)
{
__attribute__((unused)) struct ClassPropertyValue * __eCPointer_ClassPropertyValue = (struct ClassPropertyValue *)(this ? (((char *)this) + __eCClass_ClassPropertyValue->offset) : 0);

{
FreeIdentifier(__eCPointer_ClassPropertyValue->id);
}
}

void CreateRegisterModuleBody()
{
if(!registerModuleBody && inCompiler)
{
char registerName[1024], moduleName[274];
struct __eCNameSpace__eC__containers__OldList * specifiers;
struct Declarator * declarator;
struct TypeName * moduleParam;

registerModuleBody = MkCompoundStmt(MkList(), MkList());
registerModuleBody->__anon1.compound.context = __extension__ ({
struct Context * __eCInstance1 = __eCNameSpace__eC__types__eInstance_New(__eCClass_Context);

__eCInstance1->parent = globalContext, __eCInstance1;
});
ListAdd(registerModuleBody->__anon1.compound.declarations, MkDeclaration((specifiers = MkListOne(MkSpecifierName("eC::types::Class"))), MkListOne(MkInitDeclarator(MkDeclaratorIdentifier(MkIdentifier("class")), (((void *)0))))));
__eCMethod___eCNameSpace__eC__containers__OldList_Add((&*specifiers), MkSpecifierExtended(MkExtDeclAttrib(MkAttrib(ATTRIB, MkListOne(MkAttribute(__eCNameSpace__eC__types__CopyString("unused"), (((void *)0))))))));
specifiers = MkList();
ListAdd(specifiers, MkSpecifier(VOID));
moduleParam = MkTypeName(MkListOne(MkSpecifierName("Module")), MkDeclaratorIdentifier(MkIdentifier("module")));
__eCNameSpace__eC__types__GetLastDirectory(outputFile, moduleName);
__eCNameSpace__eC__types__StripExtension(moduleName);
FixModuleName(moduleName);
sprintf(registerName, "__eCRegisterModule_%s", moduleName);
declarator = MkDeclaratorFunction(MkDeclaratorIdentifier(MkIdentifier(registerName)), MkListOne(moduleParam));
{
struct FunctionDefinition * function = _MkFunction(specifiers, declarator, (((void *)0)), 0);

ProcessFunctionBody(function, registerModuleBody);
function->declMode = 0;
if(!ast)
ast = MkList();
ListAdd(ast, (registerModuleExternal = MkExternalFunction(function)));
DeclareStruct(registerModuleExternal, "eC::types::Instance", 0, 1);
DeclareStruct(registerModuleExternal, "eC::types::Module", 0, 1);
}
}
if(!unregisterModuleBody && inCompiler)
{
char registerName[1024], moduleName[274];
struct __eCNameSpace__eC__containers__OldList * specifiers;
struct Declarator * declarator;
struct TypeName * moduleParam;

unregisterModuleBody = MkCompoundStmt(MkList(), MkList());
unregisterModuleBody->__anon1.compound.context = __extension__ ({
struct Context * __eCInstance1 = __eCNameSpace__eC__types__eInstance_New(__eCClass_Context);

__eCInstance1->parent = globalContext, __eCInstance1;
});
specifiers = MkList();
ListAdd(specifiers, MkSpecifier(VOID));
moduleParam = MkTypeName(MkListOne(MkSpecifierName("Module")), MkDeclaratorIdentifier(MkIdentifier("module")));
__eCNameSpace__eC__types__GetLastDirectory(outputFile, moduleName);
__eCNameSpace__eC__types__StripExtension(moduleName);
FixModuleName(moduleName);
sprintf(registerName, "__eCUnregisterModule_%s", moduleName);
declarator = MkDeclaratorFunction(MkDeclaratorIdentifier(MkIdentifier(registerName)), MkListOne(moduleParam));
{
struct FunctionDefinition * function = _MkFunction(specifiers, declarator, (((void *)0)), 0);

ProcessFunctionBody(function, unregisterModuleBody);
function->declMode = 0;
if(!ast)
ast = MkList();
ListAdd(ast, (unregisterModuleExternal = MkExternalFunction(function)));
DeclareStruct(unregisterModuleExternal, "eC::types::Instance", 0, 1);
DeclareStruct(unregisterModuleExternal, "eC::types::Module", 0, 1);
}
}
}

void __eCCreateModuleInstances_pass1()
{
classPropValues = __eCNameSpace__eC__types__eInstance_New(__eCClass___eCNameSpace__eC__containers__List_TPL_ClassPropertyValue_);
__eCNameSpace__eC__types__eInstance_IncRef(classPropValues);
}

void RegisterMembersAndProperties(struct __eCNameSpace__eC__types__Class * regClass, unsigned int isMember, const char * className, struct Statement * statement)
{
struct __eCNameSpace__eC__types__DataMember * dataMember = isMember ? (struct __eCNameSpace__eC__types__DataMember *)regClass : (((void *)0));
struct __eCNameSpace__eC__types__DataMember * member;
struct __eCNameSpace__eC__types__Property * prop;
struct Expression * exp;
struct Statement * stmt;
char dataMemberSize[16];
unsigned int lastOffset = 0;
int privateID = 0;
unsigned int privateMembers = 0;
unsigned int privateAlignment = 0;
unsigned int privateAlignmentPtr = 0;

sprintf(dataMemberSize, "%d", (int)sizeof(struct __eCNameSpace__eC__types__DataMember *));
if(!isMember)
{
for(prop = regClass->conversions.first; prop; prop = prop->next)
{
struct __eCNameSpace__eC__containers__OldList * args = MkList();
char name[1024];

ListAdd(args, MkExpIdentifier(MkIdentifier(className)));
ListAdd(args, MkExpConstant("0"));
{
char * string = QMkString(prop->dataTypeString);

ListAdd(args, MkExpString(string));
(__eCNameSpace__eC__types__eSystem_Delete(string), string = 0);
}
if(prop->Set)
{
strcpy(name, "__eCProp_");
FullClassNameCat(name, regClass->fullName, 0);
strcat(name, "_Set_");
FullClassNameCat(name, prop->name, 1);
ListAdd(args, MkExpIdentifier(MkIdentifier(name)));
}
else
ListAdd(args, MkExpConstant("0"));
if(prop->Get)
{
strcpy(name, "__eCProp_");
FullClassNameCat(name, regClass->fullName, 0);
strcat(name, "_Get_");
FullClassNameCat(name, prop->name, 1);
ListAdd(args, MkExpIdentifier(MkIdentifier(name)));
}
else
ListAdd(args, MkExpConstant("0"));
switch(prop->memberAccess)
{
case 3:
ListAdd(args, MkExpIdentifier(MkIdentifier("staticAccess")));
break;
case 2:
ListAdd(args, MkExpIdentifier(MkIdentifier("privateAccess")));
break;
case 1:
default:
ListAdd(args, MkExpIdentifier(MkIdentifier("publicAccess")));
break;
}
strcpy(name, "__eCProp_");
FullClassNameCat(name, regClass->fullName, 0);
strcat(name, "_");
FullClassNameCat(name, prop->name, 1);
stmt = MkExpressionStmt(MkListOne(MkExpOp(MkExpIdentifier(MkIdentifier(name)), '=', MkExpCall(MkExpIdentifier(MkIdentifier("eClass_AddProperty")), args))));
ListAdd(registerModuleBody->__anon1.compound.statements, stmt);
}
}
for(member = isMember ? dataMember->members.first : regClass->membersAndProperties.first; member; member = member->next)
{
if(member->isProperty)
{
prop = (struct __eCNameSpace__eC__types__Property *)member;
{
struct __eCNameSpace__eC__containers__OldList * args = MkList();
char name[1024], nameM[1024];
char * string = QMkString(prop->name);

ListAdd(args, MkExpIdentifier(MkIdentifier(className)));
ListAdd(args, MkExpString(string));
(__eCNameSpace__eC__types__eSystem_Delete(string), string = 0);
{
char * string = QMkString(prop->dataTypeString);

ListAdd(args, MkExpString(string));
(__eCNameSpace__eC__types__eSystem_Delete(string), string = 0);
}
if(prop->Set)
{
strcpy(name, "__eCProp_");
FullClassNameCat(name, regClass->fullName, 0);
strcat(name, "_Set_");
FullClassNameCat(name, prop->name, 1);
ListAdd(args, MkExpIdentifier(MkIdentifier(name)));
}
else
ListAdd(args, MkExpConstant("0"));
if(prop->Get)
{
strcpy(name, "__eCProp_");
FullClassNameCat(name, regClass->fullName, 0);
strcat(name, "_Get_");
FullClassNameCat(name, prop->name, 1);
ListAdd(args, MkExpIdentifier(MkIdentifier(name)));
}
else
ListAdd(args, MkExpConstant("0"));
switch(prop->memberAccess)
{
case 3:
ListAdd(args, MkExpIdentifier(MkIdentifier("staticAccess")));
break;
case 2:
ListAdd(args, MkExpIdentifier(MkIdentifier("privateAccess")));
break;
case 1:
default:
ListAdd(args, MkExpIdentifier(MkIdentifier("publicAccess")));
break;
}
strcpy(name, "__eCProp_");
FullClassNameCat(name, regClass->fullName, 0);
strcat(name, "_");
FullClassNameCat(name, prop->name, 1);
strcpy(nameM, "__eCPropM_");
FullClassNameCat(nameM, regClass->fullName, 0);
strcat(nameM, "_");
FullClassNameCat(nameM, prop->name, 1);
if(prop->dataTypeString)
{
stmt = MkExpressionStmt(MkListOne(MkExpOp(MkExpIdentifier(MkIdentifier(nameM)), '=', MkExpCall(MkExpIdentifier(MkIdentifier("eClass_AddProperty")), args))));
}
else
{
stmt = MkExpressionStmt(MkListOne(MkExpCall(MkExpIdentifier(MkIdentifier("eClass_AddProperty")), args)));
}
ListAdd(registerModuleBody->__anon1.compound.statements, stmt);
if(prop->IsSet)
{
char name[1024];

strcpy(name, "__eCProp_");
FullClassNameCat(name, regClass->fullName, 1);
strcat(name, "_IsSet_");
FullClassNameCat(name, prop->name, 0);
stmt = MkExpressionStmt(MkListOne(MkExpOp(MkExpMember(MkExpIdentifier(MkIdentifier(nameM)), MkIdentifier("IsSet")), '=', MkExpCast(MkTypeName(MkListOne(MkSpecifier(VOID)), MkDeclaratorPointer(MkPointer((((void *)0)), (((void *)0))), (((void *)0)))), MkExpIdentifier(MkIdentifier(name))))));
ListAdd(registerModuleBody->__anon1.compound.statements, stmt);
}
if(prop->symbol && ((struct Symbol *)prop->symbol)->propCategory)
{
stmt = MkExpressionStmt(MkListOne(MkExpOp(MkExpMember(MkExpIdentifier(MkIdentifier(nameM)), MkIdentifier("category")), '=', CopyExpression(((struct Symbol *)prop->symbol)->propCategory))));
ListAdd(registerModuleBody->__anon1.compound.statements, stmt);
}
if(prop->dataTypeString)
{
struct __eCNameSpace__eC__containers__OldList * list = MkList();

ListAdd(list, MkExpOp(MkExpIdentifier(MkIdentifier(name)), '=', MkExpIdentifier(MkIdentifier(nameM))));
ListAdd(list, MkExpOp(MkExpIdentifier(MkIdentifier(nameM)), '=', MkExpCast(MkTypeName(MkListOne(MkSpecifier(VOID)), MkDeclaratorPointer(MkPointer((((void *)0)), (((void *)0))), (((void *)0)))), MkExpConstant("0"))));
stmt = MkIfStmt(MkListOne(MkExpOp(MkExpMember(MkExpIdentifier(MkIdentifier("module")), MkIdentifier("application")), EQ_OP, MkExpMember(MkExpIdentifier(MkIdentifier("__thisModule")), MkIdentifier("application")))), MkExpressionStmt(list), (((void *)0)));
ListAdd(registerModuleBody->__anon1.compound.statements, stmt);
stmt = MkExpressionStmt(MkListOne(MkExpOp(MkExpIdentifier(MkIdentifier(nameM)), '=', MkExpCast(MkTypeName(MkListOne(MkSpecifier(VOID)), MkDeclaratorPointer(MkPointer((((void *)0)), (((void *)0))), (((void *)0)))), MkExpConstant("0")))));
ListAdd(unregisterModuleBody->__anon1.compound.statements, stmt);
}
}
}
else if(member->type == 0 && !isMember && regClass->type == 2)
{
struct __eCNameSpace__eC__types__BitMember * bitMember = (struct __eCNameSpace__eC__types__BitMember *)member;
struct __eCNameSpace__eC__containers__OldList * args = MkList();

ListAdd(args, MkExpIdentifier(MkIdentifier(className)));
{
char * string = QMkString(bitMember->name);

ListAdd(args, MkExpString(string));
(__eCNameSpace__eC__types__eSystem_Delete(string), string = 0);
}
{
char * string = QMkString(bitMember->dataTypeString);

ListAdd(args, MkExpString(string));
(__eCNameSpace__eC__types__eSystem_Delete(string), string = 0);
}
{
char string[256];

sprintf(string, "%d", bitMember->size);
ListAdd(args, (exp = MkExpConstant(string)));
}
{
char string[256];

sprintf(string, "%d", bitMember->pos);
ListAdd(args, (exp = MkExpConstant(string)));
}
switch(member->memberAccess)
{
case 3:
ListAdd(args, MkExpIdentifier(MkIdentifier("staticAccess")));
break;
case 2:
ListAdd(args, MkExpIdentifier(MkIdentifier("privateAccess")));
break;
case 1:
default:
ListAdd(args, MkExpIdentifier(MkIdentifier("publicAccess")));
break;
}
stmt = MkExpressionStmt(MkListOne(MkExpCall(MkExpIdentifier(MkIdentifier("eClass_AddBitMember")), args)));
ListAdd(statement->__anon1.compound.statements, stmt);
}
else if(member->memberAccess == 1 || (member->type == 0 && !member->dataTypeString))
{
struct __eCNameSpace__eC__containers__OldList * args;

if(privateMembers)
{
unsigned int offset = member->offset - lastOffset;

args = MkList();
ListAdd(args, MkExpIdentifier(MkIdentifier(className)));
{
char string[200];

sprintf(string, "\"__eCPrivateData%d\"", privateID++);
ListAdd(args, MkExpString(string));
}
{
char string[200];

sprintf(string, "\"byte[%d]\"", offset);
ListAdd(args, MkExpString(string));
}
{
char string[256];

sprintf(string, "%d", offset);
ListAdd(args, (exp = MkExpConstant(string)));
}
ListAdd(args, (exp = MkExpConstant("1")));
ListAdd(args, MkExpIdentifier(MkIdentifier("privateAccess")));
stmt = MkExpressionStmt(MkListOne(MkExpCall(MkExpIdentifier(MkIdentifier(isMember ? "eMember_AddDataMember" : "eClass_AddDataMember")), args)));
ListAdd(statement->__anon1.compound.statements, stmt);
privateMembers = 0;
}
if(member->type == 0)
{
if(!member->dataType)
member->dataType = ProcessTypeString(member->dataTypeString, 0);
ComputeTypeSize(member->dataType);
args = MkList();
ListAdd(args, MkExpIdentifier(MkIdentifier(className)));
{
char * string = QMkString(member->name);

ListAdd(args, MkExpString(string));
(__eCNameSpace__eC__types__eSystem_Delete(string), string = 0);
}
{
char * string = QMkString(member->dataTypeString);

ListAdd(args, MkExpString(string));
(__eCNameSpace__eC__types__eSystem_Delete(string), string = 0);
}
{
if(__eCProp_Type_Get_isPointerTypeSize(member->dataType))
{
ListAdd(args, (exp = MkExpTypeSize(MkTypeName(MkListOne(MkSpecifier(VOID)), MkDeclaratorPointer(MkPointer((((void *)0)), (((void *)0))), (((void *)0)))))));
ListAdd(args, (exp = MkExpConstant("0xF000F000")));
}
else
{
char string[256];

if(member->dataType->kind == 8 && member->dataType->__anon1._class && member->dataType->__anon1._class->__anon1.registered && member->dataType->__anon1._class->__anon1.registered->offset == 0 && (member->dataType->__anon1._class->__anon1.registered->type == 1 || member->dataType->__anon1._class->__anon1.registered->type == 5 || member->dataType->__anon1._class->__anon1.registered->type == 0))
{
string[0] = '\0';
DeclareStruct(registerModuleExternal, member->dataType->__anon1._class->string, 0, 1);
FullClassNameCat(string, member->dataType->__anon1._class->string, 0);
exp = MkExpTypeSize(MkTypeName(MkListOne(MkStructOrUnion(3, MkIdentifier(string), (((void *)0)))), (((void *)0))));
}
else
{
sprintf(string, "%d", member->dataType->size);
exp = MkExpConstant(string);
}
ListAdd(args, exp);
if(member->dataType->pointerAlignment)
exp = MkExpConstant("0xF000F000");
else
{
sprintf(string, "%d", member->dataType->alignment);
exp = MkExpConstant(string);
}
ListAdd(args, exp);
}
}
switch(member->memberAccess)
{
case 3:
ListAdd(args, MkExpIdentifier(MkIdentifier("staticAccess")));
break;
case 2:
ListAdd(args, MkExpIdentifier(MkIdentifier("privateAccess")));
break;
case 1:
default:
ListAdd(args, MkExpIdentifier(MkIdentifier("publicAccess")));
break;
}
stmt = MkExpressionStmt(MkListOne(MkExpCall(MkExpIdentifier(MkIdentifier(isMember ? "eMember_AddDataMember" : "eClass_AddDataMember")), args)));
ListAdd(statement->__anon1.compound.statements, stmt);
lastOffset = member->offset + member->dataType->size;
}
else
{
static int memberCount = 0;
struct Context * context;
struct Statement * compound;
char memberName[256];

sprintf(memberName, "dataMember%d", memberCount);
memberCount++;
curContext = statement->__anon1.compound.context;
context = PushContext();
args = MkListOne(MkExpIdentifier(MkIdentifier((member->type == 1) ? "unionMember" : "structMember")));
switch(member->memberAccess)
{
case 3:
ListAdd(args, MkExpIdentifier(MkIdentifier("staticAccess")));
break;
case 2:
ListAdd(args, MkExpIdentifier(MkIdentifier("privateAccess")));
break;
case 1:
default:
ListAdd(args, MkExpIdentifier(MkIdentifier("publicAccess")));
break;
}
compound = MkCompoundStmt(MkListOne(MkDeclaration(MkListOne(MkSpecifierName("DataMember")), MkListOne(MkInitDeclarator(MkDeclaratorIdentifier(MkIdentifier(memberName)), MkInitializerAssignment(MkExpCall(MkExpIdentifier(MkIdentifier("eMember_New")), args)))))), MkList());
compound->__anon1.compound.context = context;
args = MkList();
ListAdd(args, MkExpIdentifier(MkIdentifier(className)));
ListAdd(args, MkExpIdentifier(MkIdentifier(memberName)));
RegisterMembersAndProperties((struct __eCNameSpace__eC__types__Class *)member, 1, memberName, compound);
if(isMember)
stmt = MkExpressionStmt(MkListOne(MkExpCall(MkExpIdentifier(MkIdentifier("eMember_AddMember")), args)));
else
stmt = MkExpressionStmt(MkListOne(MkExpCall(MkExpIdentifier(MkIdentifier("eClass_AddMember")), args)));
ListAdd(compound->__anon1.compound.statements, stmt);
PopContext(context);
ListAdd(statement->__anon1.compound.statements, compound);
memberCount--;
lastOffset = member->offset + member->memberOffset;
}
}
else
{
privateMembers = 1;
if(member->type == 0)
{
unsigned int __simpleStruct0;

if(!member->dataType)
member->dataType = ProcessTypeString(member->dataTypeString, 0);
ComputeTypeSize(member->dataType);
if(__eCProp_Type_Get_isPointerTypeSize(member->dataType) || member->dataType->pointerAlignment)
privateAlignmentPtr = 1;
else
privateAlignment = (__simpleStruct0 = member->dataType->alignment, (privateAlignment > __simpleStruct0) ? privateAlignment : __simpleStruct0);
}
else
{
unsigned int __simpleStruct0;

if(member->pointerAlignment)
privateAlignmentPtr = 1;
privateAlignment = (__simpleStruct0 = member->structAlignment, (privateAlignment > __simpleStruct0) ? privateAlignment : __simpleStruct0);
}
}
}
if(privateAlignment)
{
struct __eCNameSpace__eC__containers__OldList * args = MkList();

ListAdd(args, MkExpIdentifier(MkIdentifier(className)));
ListAdd(args, MkExpIdentifier(MkIdentifier("null")));
ListAdd(args, MkExpIdentifier(MkIdentifier("null")));
ListAdd(args, MkExpConstant("0"));
if(privateAlignmentPtr)
{
char * s = __eCNameSpace__eC__types__PrintString(__eCClass_char__PTR_, "sizeof(void *) > ", __eCClass_uint, (void *)&privateAlignment, __eCClass_char__PTR_, " ? sizeof(void *) : ", __eCClass_uint, (void *)&privateAlignment, (void *)0);

ListAdd(args, ParseExpressionString(s));
(__eCNameSpace__eC__types__eSystem_Delete(s), s = 0);
}
else
{
char string[256];

sprintf(string, "%d", privateAlignment);
ListAdd(args, MkExpConstant(string));
}
ListAdd(args, MkExpIdentifier(MkIdentifier("privateAccess")));
stmt = MkExpressionStmt(MkListOne(MkExpCall(MkExpIdentifier(MkIdentifier(isMember ? "eMember_AddDataMember" : "eClass_AddDataMember")), args)));
ListAdd(statement->__anon1.compound.statements, stmt);
}
if(!isMember)
{
struct __eCNameSpace__eC__types__ClassProperty * classProperty;

for(prop = regClass->membersAndProperties.first; prop; prop = prop->next)
{
if(prop->isProperty && prop->isWatchable)
{
struct __eCNameSpace__eC__containers__OldList * args;
char name[1024], nameM[1024];

strcpy(name, "__eCProp_");
FullClassNameCat(name, regClass->fullName, 1);
strcat(name, "_");
FullClassNameCat(name, prop->name, 0);
strcpy(nameM, "__eCPropM_");
FullClassNameCat(nameM, regClass->fullName, 1);
strcat(nameM, "_");
FullClassNameCat(nameM, prop->name, 0);
args = MkListOne(MkExpCondition(MkExpIdentifier(MkIdentifier(nameM)), MkListOne(MkExpIdentifier(MkIdentifier(nameM))), MkExpIdentifier(MkIdentifier(name))));
stmt = MkExpressionStmt(MkListOne(MkExpCall(MkExpIdentifier(MkIdentifier("eProperty_Watchable")), args)));
ListAdd(registerModuleBody->__anon1.compound.statements, stmt);
}
}
for(classProperty = (struct __eCNameSpace__eC__types__ClassProperty *)__eCProp___eCNameSpace__eC__containers__BinaryTree_Get_first(&regClass->classProperties); classProperty; classProperty = (struct __eCNameSpace__eC__types__ClassProperty *)__eCProp___eCNameSpace__eC__containers__BTNode_Get_next(((struct __eCNameSpace__eC__containers__BTNode *)classProperty)))
{
struct __eCNameSpace__eC__containers__OldList * args = MkList();
char name[1024];
char * string = QMkString(classProperty->name);

ListAdd(args, MkExpIdentifier(MkIdentifier(className)));
ListAdd(args, MkExpString(string));
(__eCNameSpace__eC__types__eSystem_Delete(string), string = 0);
{
char * string = QMkString(classProperty->dataTypeString);

ListAdd(args, MkExpString(string));
(__eCNameSpace__eC__types__eSystem_Delete(string), string = 0);
}
if(classProperty->Set)
{
strcpy(name, "__eCClassProp_");
FullClassNameCat(name, regClass->fullName, 1);
strcat(name, "_Set_");
strcat(name, classProperty->name);
ListAdd(args, MkExpIdentifier(MkIdentifier(name)));
}
else
ListAdd(args, MkExpConstant("0"));
if(classProperty->Get)
{
strcpy(name, "__eCClassProp_");
FullClassNameCat(name, regClass->fullName, 1);
strcat(name, "_Get_");
strcat(name, classProperty->name);
ListAdd(args, MkExpIdentifier(MkIdentifier(name)));
}
else
ListAdd(args, MkExpConstant("0"));
stmt = MkExpressionStmt(MkListOne(MkExpCall(MkExpIdentifier(MkIdentifier("eClass_AddClassProperty")), args)));
ListAdd(registerModuleBody->__anon1.compound.statements, stmt);
}
}
}

void __eCUnregisterModule_pass1(struct __eCNameSpace__eC__types__Instance * module)
{

}

static void ProcessClass(int classType, struct __eCNameSpace__eC__containers__OldList * definitions, struct Symbol * symbol, struct __eCNameSpace__eC__containers__OldList * baseSpecs, struct __eCNameSpace__eC__containers__OldList * enumValues, struct __eCNameSpace__eC__containers__OldList * defs, struct External * external, int declMode)
{
struct ClassDef * def;
struct __eCNameSpace__eC__types__Class * regClass = symbol->__anon1.registered;

if(regClass)
{
classType = regClass->type;
if(classType == 4 && enumValues && (inCompiler || !buildingECRTModule))
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
parsingType = 1;
ProcessExpressionType(e->exp);
parsingType = 0;
if(!e->exp->expType)
{
destType->kind = 8;
destType->__anon1._class = symbol;
ProcessExpressionType(e->exp);
}
if(e->exp->type == 0 && e->exp->expType && e->exp->__anon1.__anon1.identifier && e->exp->__anon1.__anon1.identifier->string && e->exp->expType->kind == 15)
{
struct __eCNameSpace__eC__sys__NamedLink64 * l;
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
lastValue = value;
lastValueSet = 1;
__eCNameSpace__eC__types__eEnum_AddFixedValue(regClass, e->id->string, value);
}
else
{
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
{
struct __eCNameSpace__eC__types__EnumClassData * baseData = regClass->data;
struct __eCNameSpace__eC__sys__OldLink * deriv;

for(deriv = regClass->derivatives.first; deriv; deriv = deriv->next)
{
struct __eCNameSpace__eC__types__Class * c = deriv->data;

if(c && c->type == 4)
{
struct __eCNameSpace__eC__types__EnumClassData * data = c->data;

data->largest = baseData->largest;
}
}
}
}
if(definitions != (((void *)0)))
{
if(inCompiler)
{
for(def = definitions->first; def; def = def->next)
{
if(def->type == 4 && def->__anon1.propertyWatch)
{
struct PropertyWatch * propWatch = def->__anon1.propertyWatch;
struct ClassFunction * func;
char watcherName[1024];
struct Identifier * propID;
struct Statement * stmt = MkExpressionStmt(MkList());
struct Declarator * decl;
struct __eCNameSpace__eC__containers__OldList * specs;

sprintf(watcherName, "__eCPropertySelfWatcher_%d", propWatcherID++);
for(propID = (*propWatch->properties).first; propID; propID = propID->next)
{
strcat(watcherName, "_");
strcat(watcherName, propID->string);
}
decl = MkDeclaratorFunction(MkDeclaratorIdentifier(MkIdentifier(watcherName)), MkListOne(MkTypeName(MkListOne(MkSpecifier(VOID)), (((void *)0)))));
specs = MkList();
ListAdd(specs, MkSpecifier(STATIC));
ListAdd(specs, MkSpecifier(VOID));
func = MkClassFunction(specs, (((void *)0)), decl, (((void *)0)));
ProcessClassFunctionBody(func, propWatch->compound);
decl->symbol = __eCNameSpace__eC__types__eInstance_New(__eCClass_Symbol);
__eCMethod___eCNameSpace__eC__containers__OldList_Add((&*excludedSymbols), decl->symbol);
func->dontMangle = 1;
propWatch->compound = (((void *)0));
__eCMethod___eCNameSpace__eC__containers__OldList_Insert(definitions, (((void *)0)), MkClassDefFunction(func));
for(propID = (*propWatch->properties).first; propID; propID = propID->next)
{
struct __eCNameSpace__eC__types__Property * prop = __eCNameSpace__eC__types__eClass_FindProperty(regClass, propID->string, privateModule);

if(prop)
{
struct __eCNameSpace__eC__containers__OldList * args = MkList();

ListAdd(args, MkExpIdentifier(MkIdentifier("class")));
{
char * s = QMkString(propID->string);

ListAdd(args, MkExpString(s));
(__eCNameSpace__eC__types__eSystem_Delete(s), s = 0);
}
ListAdd(args, MkExpIdentifier(MkIdentifier(watcherName)));
ListAdd(stmt->__anon1.expressions, MkExpCall(MkExpIdentifier(MkIdentifier("eProperty_SelfWatch")), args));
}
else
Compiler_Error(__eCNameSpace__eC__i18n__GetTranslatedString("ec", "Property %s not found in class %s\n", (((void *)0))), propID->string, regClass->fullName);
}
FreePropertyWatch(def->__anon1.propertyWatch);
def->__anon1.propertyWatch = (struct PropertyWatch *)stmt;
}
}
}
for(def = definitions->first; def; def = def->next)
{
if(def->type == 0)
{
ProcessClassFunction(regClass, def->__anon1.function, defs, external->prev, declMode == 3);
}
}
}
if(inCompiler && symbol->mustRegister && regClass)
{
struct Statement * stmt;
struct __eCNameSpace__eC__containers__OldList * args = MkList();
struct __eCNameSpace__eC__types__Method * method;
struct Expression * exp;
const char * registerFunction = (((void *)0));
int inheritanceAccess = 1;

CreateRegisterModuleBody();
curExternal = registerModuleExternal;
switch(regClass->type)
{
case 1:
ListAdd(args, MkExpIdentifier(MkIdentifier("structClass")));
break;
case 2:
ListAdd(args, MkExpIdentifier(MkIdentifier("bitClass")));
break;
case 4:
ListAdd(args, MkExpIdentifier(MkIdentifier("enumClass")));
break;
case 5:
ListAdd(args, MkExpIdentifier(MkIdentifier("noHeadClass")));
break;
case 3:
ListAdd(args, MkExpIdentifier(MkIdentifier("unitClass")));
break;
case 0:
ListAdd(args, MkExpIdentifier(MkIdentifier("normalClass")));
break;
}
{
char nameSpace[1024] = "";
char className[1024] = "";
char * string;

GetNameSpaceString(regClass->nameSpace, nameSpace);
if(declMode == 3)
{
__eCNameSpace__eC__types__GetLastDirectory(sourceFile, className);
__eCNameSpace__eC__types__ChangeCh(className, '.', '_');
strcat(className, "}");
}
strcat(className, nameSpace);
strcat(className, regClass->name);
string = QMkString(className);
ListAdd(args, MkExpString(string));
(__eCNameSpace__eC__types__eSystem_Delete(string), string = 0);
}
if(baseSpecs != (((void *)0)))
{
struct Type * baseType = ProcessType(baseSpecs, (((void *)0)));

if(baseType->kind != 9 && baseType->kind != 10)
{
char baseName[1024] = "";
char * string;

if(baseType->kind == 8 && baseType->__anon1._class && baseType->__anon1._class->isStatic)
{
__eCNameSpace__eC__types__GetLastDirectory(sourceFile, baseName);
__eCNameSpace__eC__types__ChangeCh(baseName, '.', '_');
strcat(baseName, "}");
strcat(baseName, baseType->__anon1._class->string);
}
else
PrintType(baseType, baseName, 0, 1);
string = QMkString(baseName);
ListAdd(args, MkExpString(string));
(__eCNameSpace__eC__types__eSystem_Delete(string), string = 0);
}
else
ListAdd(args, MkExpConstant("0"));
FreeType(baseType);
if(((struct Specifier *)baseSpecs->first)->type == 0 && ((struct Specifier *)baseSpecs->first)->__anon1.specifier == PRIVATE)
inheritanceAccess = 2;
}
else
ListAdd(args, MkExpConstant("0"));
if(regClass->type == 1 || regClass->type == 0 || regClass->type == 5)
{
struct __eCNameSpace__eC__types__DataMember * member = (((void *)0));

{
struct __eCNameSpace__eC__types__Class * base;

for(base = regClass->base; base && base->type != 1000; base = base->next)
{
for(member = base->membersAndProperties.first; member; member = member->next)
if(!member->isProperty)
break;
if(member)
break;
}
}
if(regClass->type == 1 && symbol->declaredStruct && member)
{
char baseStructName[1024];

baseStructName[0] = 0;
strcpy(baseStructName, (regClass->base->templateClass ? regClass->base->templateClass : regClass->base)->fullName);
ListAdd(args, MkExpOp(MkExpTypeSize(MkTypeName(MkListOne(MkStructOrUnion(3, MkIdentifier(symbol->structName), (((void *)0)))), (((void *)0)))), '-', MkExpTypeSize(MkTypeName(MkListOne(MkStructOrUnion(3, MkIdentifier(baseStructName), (((void *)0)))), (((void *)0))))));
}
else
ListAdd(args, symbol->declaredStruct ? MkExpTypeSize(MkTypeName(MkListOne(MkStructOrUnion(3, MkIdentifier(symbol->structName), (((void *)0)))), (((void *)0)))) : MkExpConstant("0"));
}
else
{
ListAdd(args, MkExpConstant("0"));
}
{
char classDataStructName[1024];

strcpy(classDataStructName, "__eCClassData_");
FullClassNameCat(classDataStructName, symbol->string, 0);
ListAdd(args, symbol->classData ? MkExpTypeSize(MkTypeName(MkListOne(MkStructOrUnion(3, MkIdentifier(classDataStructName), (((void *)0)))), (((void *)0)))) : MkExpConstant("0"));
}
if(regClass->type == 0 || regClass->type == 5)
{
ListAdd(args, MkExpCast(MkTypeName(MkListOne(MkSpecifier(VOID)), MkDeclaratorPointer(MkPointer((((void *)0)), (((void *)0))), (((void *)0)))), symbol->needConstructor ? MkExpIdentifier(MkIdentifier(symbol->constructorName)) : MkExpConstant("0")));
ListAdd(args, MkExpCast(MkTypeName(MkListOne(MkSpecifier(VOID)), MkDeclaratorPointer(MkPointer((((void *)0)), (((void *)0))), (((void *)0)))), symbol->needDestructor ? MkExpIdentifier(MkIdentifier(symbol->destructorName)) : MkExpConstant("0")));
}
else
{
ListAdd(args, MkExpCast(MkTypeName(MkListOne(MkSpecifier(VOID)), MkDeclaratorPointer(MkPointer((((void *)0)), (((void *)0))), (((void *)0)))), MkExpConstant("0")));
ListAdd(args, MkExpCast(MkTypeName(MkListOne(MkSpecifier(VOID)), MkDeclaratorPointer(MkPointer((((void *)0)), (((void *)0))), (((void *)0)))), MkExpConstant("0")));
}
ListAdd(args, MkExpIdentifier(MkIdentifier("module")));
switch(declMode)
{
case 3:
ListAdd(args, MkExpIdentifier(MkIdentifier("staticAccess")));
break;
case 2:
ListAdd(args, MkExpIdentifier(MkIdentifier("privateAccess")));
break;
case 1:
default:
ListAdd(args, MkExpIdentifier(MkIdentifier(buildingECRTModule ? "baseSystemAccess" : "publicAccess")));
break;
}
switch(inheritanceAccess)
{
case 2:
ListAdd(args, MkExpIdentifier(MkIdentifier("privateAccess")));
break;
case 1:
default:
ListAdd(args, MkExpIdentifier(MkIdentifier("publicAccess")));
break;
}
registerFunction = "eSystem_RegisterClass";
stmt = MkExpressionStmt(MkListOne(MkExpOp(MkExpIdentifier(MkIdentifier("class")), '=', MkExpCall((exp = MkExpIdentifier(MkIdentifier(registerFunction))), args))));
ListAdd(registerModuleBody->__anon1.compound.statements, stmt);
stmt = MkIfStmt(MkListOne(MkExpOp(MkExpOp(MkExpMember(MkExpIdentifier(MkIdentifier("module")), MkIdentifier("application")), EQ_OP, MkExpMember(MkExpIdentifier(MkIdentifier("__thisModule")), MkIdentifier("application"))), AND_OP, MkExpIdentifier(MkIdentifier("class")))), MkExpressionStmt(MkListOne(MkExpOp(MkExpIdentifier(MkIdentifier(symbol->className)), '=', MkExpIdentifier(MkIdentifier("class"))))), (((void *)0)));
ListAdd(registerModuleBody->__anon1.compound.statements, stmt);
if(external && external->type == 2 && external->__anon1._class->deleteWatchable)
{
args = MkListOne(MkExpIdentifier(MkIdentifier("class")));
stmt = MkExpressionStmt(MkListOne(MkExpCall(MkExpIdentifier(MkIdentifier("eClass_DestructionWatchable")), args)));
ListAdd(registerModuleBody->__anon1.compound.statements, stmt);
}
if(regClass->base)
{
struct __eCNameSpace__eC__types__Class * base = regClass->base;
int c;

for(c = 0; c < base->vTblSize; c++)
{
struct Symbol * method = (struct Symbol *)regClass->_vTbl[c];

if((void *)method != DummyMethod && base->_vTbl[c] != (void *)method && method->__anon2.__anon3.methodExternal)
{
struct External * external = method->__anon2.__anon3.methodExternal;
struct __eCNameSpace__eC__containers__OldList * args = MkList();
struct Identifier * id = external->__anon1.function ? GetDeclId(external->__anon1.function->declarator) : (((void *)0));

{
struct External * e = method->__anon2.__anon3.methodExternal ? method->__anon2.__anon3.methodExternal : method->__anon2.__anon3.methodCodeExternal;

__eCMethod_External_CreateUniqueEdge(registerModuleExternal, e, e->type == 0);
}
ListAdd(args, MkExpIdentifier(MkIdentifier("class")));
{
char * string = QMkString(method->__anon1.method->name);

ListAdd(args, MkExpString(string));
(__eCNameSpace__eC__types__eSystem_Delete(string), string = 0);
}
ListAdd(args, MkExpConstant("0"));
ListAdd(args, (exp = MkExpIdentifier(MkIdentifier(id->string))));
ListAdd(args, MkExpIdentifier(MkIdentifier("publicAccess")));
exp->expType = __extension__ ({
struct Type * __eCInstance1 = __eCNameSpace__eC__types__eInstance_New(__eCClass_Type);

__eCInstance1->refCount = 1, __eCInstance1;
});
stmt = MkExpressionStmt(MkListOne(MkExpCall(MkExpIdentifier(MkIdentifier("eClass_AddMethod")), args)));
ListAdd(registerModuleBody->__anon1.compound.statements, stmt);
}
}
}
{
int c;

for(c = regClass->base ? regClass->base->vTblSize : 0; c < regClass->vTblSize; c++)
{
for(method = (struct __eCNameSpace__eC__types__Method *)__eCProp___eCNameSpace__eC__containers__BinaryTree_Get_first(&regClass->methods); method; method = (struct __eCNameSpace__eC__types__Method *)__eCProp___eCNameSpace__eC__containers__BTNode_Get_next(((struct __eCNameSpace__eC__containers__BTNode *)method)))
{
if(method->type == 1 && method->_class == regClass && method->vid == c)
{
char name[1024];
struct Expression * exp;
struct External * external = method->symbol ? ((struct Symbol *)method->symbol)->__anon2.__anon3.methodCodeExternal : (((void *)0));
struct __eCNameSpace__eC__containers__OldList * args = MkList();
struct Identifier * id = (external && external->__anon1.function) ? GetDeclId(external->__anon1.function->declarator) : (((void *)0));

ListAdd(args, MkExpIdentifier(MkIdentifier("class")));
{
char * string = QMkString(method->name);

ListAdd(args, MkExpString(string));
(__eCNameSpace__eC__types__eSystem_Delete(string), string = 0);
}
{
char * string = QMkString(method->dataTypeString);

ListAdd(args, MkExpString(string));
(__eCNameSpace__eC__types__eSystem_Delete(string), string = 0);
}
if(id && external->__anon1.function->body)
{
ListAdd(args, (exp = MkExpIdentifier(MkIdentifier(id->string))));
exp->expType = __extension__ ({
struct Type * __eCInstance1 = __eCNameSpace__eC__types__eInstance_New(__eCClass_Type);

__eCInstance1->refCount = 1, __eCInstance1;
});
}
else
{
ListAdd(args, (exp = MkExpConstant("0")));
}
switch(method->memberAccess)
{
case 3:
ListAdd(args, MkExpIdentifier(MkIdentifier("staticAccess")));
break;
case 2:
ListAdd(args, MkExpIdentifier(MkIdentifier("privateAccess")));
break;
case 1:
default:
ListAdd(args, MkExpIdentifier(MkIdentifier("publicAccess")));
break;
}
strcpy(name, "__eCVMethodID_");
FullClassNameCat(name, method->_class->fullName, 0);
strcat(name, "_");
strcat(name, method->name);
exp = MkExpCall(MkExpIdentifier(MkIdentifier("eClass_AddVirtualMethod")), args);
stmt = MkExpressionStmt(MkListOne(exp));
if(external)
__eCMethod_External_CreateUniqueEdge(registerModuleExternal, external, external->type == 0);
DeclareMethod(curExternal, method, name);
ListAdd(registerModuleBody->__anon1.compound.statements, stmt);
}
}
}
}
for(method = (struct __eCNameSpace__eC__types__Method *)__eCProp___eCNameSpace__eC__containers__BinaryTree_Get_first(&regClass->methods); method; method = (struct __eCNameSpace__eC__types__Method *)__eCProp___eCNameSpace__eC__containers__BTNode_Get_next(((struct __eCNameSpace__eC__containers__BTNode *)method)))
{
if(method->type == 1 && method->_class == regClass)
;
else if(method->memberAccess == 1 || !method->dataTypeString)
{
struct External * external = method->symbol ? ((struct Symbol *)method->symbol)->__anon2.__anon3.methodCodeExternal : (((void *)0));
struct __eCNameSpace__eC__containers__OldList * args = MkList();
struct Identifier * id = (external && external->__anon1.function) ? GetDeclId(external->__anon1.function->declarator) : (((void *)0));

ListAdd(args, MkExpIdentifier(MkIdentifier("class")));
{
char * string = QMkString(method->name);

ListAdd(args, MkExpString(string));
(__eCNameSpace__eC__types__eSystem_Delete(string), string = 0);
}
{
char * string = QMkString(method->dataTypeString);

ListAdd(args, MkExpString(string));
(__eCNameSpace__eC__types__eSystem_Delete(string), string = 0);
}
if(id && external->__anon1.function->body)
{
ListAdd(args, (exp = MkExpIdentifier(MkIdentifier(id->string))));
exp->expType = __extension__ ({
struct Type * __eCInstance1 = __eCNameSpace__eC__types__eInstance_New(__eCClass_Type);

__eCInstance1->refCount = 1, __eCInstance1;
});
}
else
{
ListAdd(args, (exp = MkExpConstant("0")));
}
switch(method->memberAccess)
{
case 3:
ListAdd(args, MkExpIdentifier(MkIdentifier("staticAccess")));
break;
case 2:
ListAdd(args, MkExpIdentifier(MkIdentifier("privateAccess")));
break;
case 1:
default:
ListAdd(args, MkExpIdentifier(MkIdentifier("publicAccess")));
break;
}
stmt = MkExpressionStmt(MkListOne(MkExpCall(MkExpIdentifier(MkIdentifier("eClass_AddMethod")), args)));
ListAdd(registerModuleBody->__anon1.compound.statements, stmt);
if(external)
__eCMethod_External_CreateUniqueEdge(registerModuleExternal, external, external->type == 0);
}
}
RegisterMembersAndProperties(regClass, 0, "class", registerModuleBody);
if(classType == 4)
{
struct __eCNameSpace__eC__sys__NamedLink64 * value;
struct __eCNameSpace__eC__types__Class * enumClass = __eCNameSpace__eC__types__eSystem_FindClass(privateModule, "enum");
struct __eCNameSpace__eC__types__EnumClassData * e = (regClass ? ((void *)(((char *)regClass->data) + enumClass->offsetClass)) : (((void *)0)));

for(value = e->values.first; value; value = value->next)
{
struct __eCNameSpace__eC__containers__OldList * args = MkList();

ListAdd(args, MkExpIdentifier(MkIdentifier("class")));
{
char * string = QMkString(value->name);

ListAdd(args, MkExpString(string));
(__eCNameSpace__eC__types__eSystem_Delete(string), string = 0);
}
{
char * temp;

if(regClass->dataTypeString && !strcmp(regClass->dataTypeString, "uint64"))
temp = PrintUInt64(value->data);
else
temp = PrintInt64(value->data);
ListAdd(args, MkExpConstant(temp));
(__eCNameSpace__eC__types__eSystem_Delete(temp), temp = 0);
}
stmt = MkExpressionStmt(MkListOne(MkExpCall(MkExpIdentifier(MkIdentifier("eEnum_AddFixedValue")), args)));
ListAdd(registerModuleBody->__anon1.compound.statements, stmt);
}
}
if(symbol->templateParams)
{
struct TemplateParameter * param;

for(param = (*symbol->templateParams).first; param; param = param->next)
{
struct __eCNameSpace__eC__containers__OldList * args = MkList();

ListAdd(args, MkExpIdentifier(MkIdentifier("class")));
{
char * string = QMkString(param->identifier->string);

ListAdd(args, MkExpString(string));
(__eCNameSpace__eC__types__eSystem_Delete(string), string = 0);
}
ListAdd(args, MkExpIdentifier(MkIdentifier((param->type == 0) ? "type" : ((param->type == 1) ? "identifier" : "expression"))));
switch(param->type)
{
case 0:
case 2:
{
char * typeString = param->__anon1.dataType ? StringFromSpecDecl(param->__anon1.dataType->specifiers, param->__anon1.dataType->decl) : (((void *)0));
char * string = QMkString(typeString);

ListAdd(args, MkExpString(string));
(__eCNameSpace__eC__types__eSystem_Delete(typeString), typeString = 0);
(__eCNameSpace__eC__types__eSystem_Delete(string), string = 0);
break;
}
case 1:
{
char memberTypeString[132] = "TemplateMemberType::";
unsigned int onType = 1;

(__extension__ ({
const char *  (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Class * , const void * , char *  tempString, void *  reserved, unsigned int *  onType);

__internal_VirtualMethod = ((const char *  (*)(struct __eCNameSpace__eC__types__Class *, const void *, char *  tempString, void *  reserved, unsigned int *  onType))__eCClass___eCNameSpace__eC__types__TemplateMemberType->_vTbl[__eCVMethodID_class_OnGetString]);
__internal_VirtualMethod ? __internal_VirtualMethod(__eCClass___eCNameSpace__eC__types__TemplateMemberType, (void *)&param->__anon1.memberType, memberTypeString + strlen(memberTypeString), (((void *)0)), &onType) : (const char * )1;
}));
ListAdd(args, MkExpCast(MkTypeName(MkListOne(MkSpecifier(VOID)), MkDeclaratorPointer(MkPointer((((void *)0)), (((void *)0))), (((void *)0)))), MkExpIdentifier(MkIdentifier(memberTypeString))));
break;
}
}
if(param->defaultArgument)
{
struct __eCNameSpace__eC__containers__OldList * members = MkList();

switch(param->type)
{
case 0:
{
char * typeString = param->defaultArgument->__anon1.templateDatatype ? StringFromSpecDecl(param->defaultArgument->__anon1.templateDatatype->specifiers, param->defaultArgument->__anon1.templateDatatype->decl) : (((void *)0));
char * string = QMkString(typeString);

__eCMethod___eCNameSpace__eC__containers__OldList_Add((&*members), MkMemberInit(MkListOne(MkIdentifier("dataTypeString")), MkInitializerAssignment(MkExpString(string))));
(__eCNameSpace__eC__types__eSystem_Delete(typeString), typeString = 0);
(__eCNameSpace__eC__types__eSystem_Delete(string), string = 0);
break;
}
case 1:
{
char memberString[1024];
char * string;

memberString[0] = '\0';
if(param->defaultArgument->__anon1.identifier->_class)
{
if(param->defaultArgument->__anon1.identifier->_class->type == 8)
strcpy(memberString, param->defaultArgument->__anon1.identifier->_class->__anon1.templateParameter->identifier->string);
else if(param->defaultArgument->__anon1.identifier->_class->__anon1.__anon1.name)
strcpy(memberString, param->defaultArgument->__anon1.identifier->_class->__anon1.__anon1.name);
}
if(memberString[0])
strcat(memberString, "::");
strcat(memberString, param->defaultArgument->__anon1.identifier->string);
string = QMkString(memberString);
__eCMethod___eCNameSpace__eC__containers__OldList_Add((&*members), MkMemberInit(MkListOne(MkIdentifier("dataTypeString")), MkInitializerAssignment(MkExpString(string))));
(__eCNameSpace__eC__types__eSystem_Delete(string), string = 0);
break;
}
case 2:
{
struct Operand op =
{
0, 0, 0,
.__anon1 = {
.c = 0
},
{
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
}
};
struct __eCNameSpace__eC__containers__OldList * ids = MkList();
char * ui64String;
char * string = (((void *)0));

op = GetOperand(param->defaultArgument->__anon1.expression);
ui64String = PrintUInt64(op.__anon1.ui64);
__eCMethod___eCNameSpace__eC__containers__OldList_Add((&*ids), MkIdentifier("expression"));
__eCMethod___eCNameSpace__eC__containers__OldList_Add((&*ids), MkIdentifier("ui64"));
__eCMethod___eCNameSpace__eC__containers__OldList_Add((&*members), MkMemberInit(ids, MkInitializerAssignment(MkExpConstant(ui64String))));
(__eCNameSpace__eC__types__eSystem_Delete(string), string = 0);
(__eCNameSpace__eC__types__eSystem_Delete(ui64String), ui64String = 0);
break;
}
}
ListAdd(args, MkExpInstance(MkInstantiation(MkSpecifierName("ClassTemplateArgument"), (((void *)0)), MkListOne(MkMembersInitList(members)))));
}
else
ListAdd(args, MkExpIdentifier(MkIdentifier("null")));
stmt = MkExpressionStmt(MkListOne(MkExpCall(MkExpIdentifier(MkIdentifier("eClass_AddTemplateParameter")), args)));
ListAdd(registerModuleBody->__anon1.compound.statements, stmt);
}
stmt = MkExpressionStmt(MkListOne(MkExpCall(MkExpIdentifier(MkIdentifier("eClass_DoneAddingTemplateParameters")), MkListOne(MkExpIdentifier(MkIdentifier("class"))))));
ListAdd(registerModuleBody->__anon1.compound.statements, stmt);
}
if(definitions != (((void *)0)))
{
for(def = definitions->first; def; def = def->next)
{
if(def->type == 4 && def->__anon1.propertyWatch)
{
ListAdd(registerModuleBody->__anon1.compound.statements, (struct Statement *)def->__anon1.propertyWatch);
def->__anon1.propertyWatch = (((void *)0));
}
else if(def->type == 5)
{
{
char * s = QMkString(def->__anon1.designer);

stmt = MkIfStmt(MkListOne(MkExpIdentifier(MkIdentifier("class"))), MkExpressionStmt(MkListOne(MkExpOp(MkExpMember(MkExpIdentifier(MkIdentifier("class")), MkIdentifier("designerClass")), '=', MkExpString(s)))), (((void *)0)));
(__eCNameSpace__eC__types__eSystem_Delete(s), s = 0);
}
ListAdd(registerModuleBody->__anon1.compound.statements, stmt);
}
else if(def->type == 6)
{
stmt = MkIfStmt(MkListOne(MkExpIdentifier(MkIdentifier("class"))), MkExpressionStmt(MkListOne(MkExpOp(MkExpMember(MkExpIdentifier(MkIdentifier("class")), MkIdentifier("noExpansion")), '=', MkExpConstant("1")))), (((void *)0)));
ListAdd(registerModuleBody->__anon1.compound.statements, stmt);
}
else if(def->type == 7)
{
stmt = MkIfStmt(MkListOne(MkExpIdentifier(MkIdentifier("class"))), MkExpressionStmt(MkListOne(MkExpOp(MkExpMember(MkExpIdentifier(MkIdentifier("class")), MkIdentifier("fixed")), '=', MkExpConstant("1")))), (((void *)0)));
ListAdd(registerModuleBody->__anon1.compound.statements, stmt);
if(regClass)
regClass->fixed = 1;
}
else if(def->type == 8)
{
char * s = QMkString(def->__anon1.defaultProperty->string);

stmt = MkIfStmt(MkListOne(MkExpIdentifier(MkIdentifier("class"))), MkExpressionStmt(MkListOne(MkExpOp(MkExpMember(MkExpIdentifier(MkIdentifier("class")), MkIdentifier("defaultProperty")), '=', MkExpString(s)))), (((void *)0)));
ListAdd(registerModuleBody->__anon1.compound.statements, stmt);
(__eCNameSpace__eC__types__eSystem_Delete(s), s = 0);
}
else if(def->type == 11)
{
(__extension__ ({
struct __eCNameSpace__eC__containers__IteratorPointer * (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, uint64 value);

__internal_VirtualMethod = ((struct __eCNameSpace__eC__containers__IteratorPointer * (*)(struct __eCNameSpace__eC__types__Instance *, uint64 value))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = classPropValues;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__containers__List->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__containers__Container_Add]);
__internal_VirtualMethod ? __internal_VirtualMethod(classPropValues, (uint64)(uintptr_t)(__extension__ ({
struct __eCNameSpace__eC__types__Instance * __eCInstance1 = __eCNameSpace__eC__types__eInstance_New(__eCClass_ClassPropertyValue);

((struct ClassPropertyValue *)(((char *)__eCInstance1 + __eCClass_ClassPropertyValue->offset)))->regClass = regClass, ((struct ClassPropertyValue *)(((char *)__eCInstance1 + __eCClass_ClassPropertyValue->offset)))->staticClass = (declMode == 3), ((struct ClassPropertyValue *)(((char *)__eCInstance1 + __eCClass_ClassPropertyValue->offset)))->id = def->__anon1.__anon1.id, ((struct ClassPropertyValue *)(((char *)__eCInstance1 + __eCClass_ClassPropertyValue->offset)))->exp = def->__anon1.__anon1.initializer->__anon1.exp, __eCInstance1;
}))) : (struct __eCNameSpace__eC__containers__IteratorPointer *)1;
}));
def->__anon1.__anon1.id = (((void *)0));
def->__anon1.__anon1.initializer->__anon1.exp = (((void *)0));
}
}
}
}
}
}

void ProcessClassDefinitions()
{
struct External * external, * next;

CreateRegisterModuleBody();
if(ast)
{
for(external = (*ast).first; external; external = next)
{
next = external->next;
curExternal = external;
if(external->type == 2)
{
struct ClassDefinition * _class = external->__anon1._class;

if(_class->definitions)
{
ProcessClass(0, _class->definitions, _class->symbol, _class->baseSpecs, (((void *)0)), ast, external, _class->declMode);
}
if(inCompiler)
{
__eCMethod___eCNameSpace__eC__containers__OldList_Remove((&*ast), external);
FreeExternal(external);
}
}
else if(external->type == 0)
{
unsigned int setStaticMethod = 0;

if(external->symbol && !external->symbol->type->__anon1.__anon2.thisClass && !external->symbol->type->__anon1.__anon2.staticMethod)
{
external->symbol->type->__anon1.__anon2.staticMethod = 1;
setStaticMethod = 1;
}
if(inCompiler)
{
struct FunctionDefinition * function = external->__anon1.function;
struct Statement * stmt;
struct __eCNameSpace__eC__containers__OldList * args;

if(!strcmp(function->declarator->symbol->string, "__on_register_module"))
{
ListAdd(registerModuleBody->__anon1.compound.statements, function->body);
function->body->__anon1.compound.context->parent = registerModuleBody->__anon1.compound.context;
__eCMethod___eCNameSpace__eC__containers__OldList_Remove((&*ast), external);
function->body = (((void *)0));
FreeExternal(external);
continue;
}
if(function->declMode != 2 && function->declMode != 1)
continue;
args = MkList();
CreateRegisterModuleBody();
{
char * string = QMkString(function->declarator->symbol->string);

ListAdd(args, MkExpString(string));
(__eCNameSpace__eC__types__eSystem_Delete(string), string = 0);
}
{
char * string;
char type[1024] = "";

if(setStaticMethod)
function->declarator->symbol->type->__anon1.__anon2.staticMethod = 0;
PrintType(function->declarator->symbol->type, type, 1, 1);
if(setStaticMethod)
function->declarator->symbol->type->__anon1.__anon2.staticMethod = 1;
string = QMkString(type);
ListAdd(args, MkExpString(string));
(__eCNameSpace__eC__types__eSystem_Delete(string), string = 0);
}
{
ListAdd(args, MkExpIdentifier(MkIdentifier(function->declarator->symbol->string)));
}
ListAdd(args, MkExpIdentifier(MkIdentifier("module")));
switch(function->declMode)
{
case 3:
ListAdd(args, MkExpIdentifier(MkIdentifier("staticAccess")));
break;
case 2:
ListAdd(args, MkExpIdentifier(MkIdentifier("privateAccess")));
break;
case 1:
default:
ListAdd(args, MkExpIdentifier(MkIdentifier(buildingECRTModule ? "baseSystemAccess" : "publicAccess")));
break;
}
stmt = MkExpressionStmt(MkListOne(MkExpCall((MkExpIdentifier(MkIdentifier("eSystem_RegisterFunction"))), args)));
ListAdd(registerModuleBody->__anon1.compound.statements, stmt);
}
}
else if(external->type == 1)
{
struct Declaration * declaration = external->__anon1.declaration;

if(external->symbol)
{
if(external->symbol->type && external->symbol->type->kind == 11 && !external->symbol->type->__anon1.__anon2.thisClass)
external->symbol->type->__anon1.__anon2.staticMethod = 1;
}
if(external->symbol && declaration && declaration->type == 1)
{
if(declaration->__anon1.__anon1.specifiers)
{
struct Specifier * specifier;
unsigned int removeExternal = 0;

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
else
classType = 1;
removeExternal = 1;
symbol->ctx = specifier->__anon1.__anon2.ctx;
specifier->__anon1.__anon2.ctx = (((void *)0));
ProcessClass(classType, specifier->__anon1.__anon2.definitions, symbol, specifier->__anon1.__anon2.baseSpecs, specifier->__anon1.__anon2.list, ast, external, declaration->declMode);
}
}
}
if(inCompiler && removeExternal)
{
__eCMethod___eCNameSpace__eC__containers__OldList_Remove((&*ast), external);
FreeExternal(external);
}
}
}
else if(declaration && declaration->type == 3)
{
if(inCompiler && declaration->declMode != 3)
{
struct Statement * stmt;
struct __eCNameSpace__eC__containers__OldList * args = MkList();

CreateRegisterModuleBody();
{
char * string = QMkString(declaration->__anon1.__anon2.id->string);

ListAdd(args, MkExpString(string));
(__eCNameSpace__eC__types__eSystem_Delete(string), string = 0);
}
{
char * string;
char expString[1024] = "";

PrintExpression(declaration->__anon1.__anon2.exp, expString);
__eCNameSpace__eC__types__StripChars(expString, "\t\n");
string = QMkString(expString);
ListAdd(args, MkExpString(string));
(__eCNameSpace__eC__types__eSystem_Delete(string), string = 0);
}
ListAdd(args, MkExpIdentifier(MkIdentifier("module")));
switch(declaration->declMode)
{
case 3:
ListAdd(args, MkExpIdentifier(MkIdentifier("staticAccess")));
break;
case 2:
ListAdd(args, MkExpIdentifier(MkIdentifier("privateAccess")));
break;
case 1:
default:
ListAdd(args, MkExpIdentifier(MkIdentifier(buildingECRTModule ? "baseSystemAccess" : "publicAccess")));
break;
}
stmt = MkExpressionStmt(MkListOne(MkExpCall((MkExpIdentifier(MkIdentifier("eSystem_RegisterDefine"))), args)));
ListAdd(registerModuleBody->__anon1.compound.statements, stmt);
}
}
}
}
{
struct __eCNameSpace__eC__types__Iterator v =
{
(classPropValues), 0
};

while(__eCMethod___eCNameSpace__eC__types__Iterator_Next(&v))
{
struct __eCNameSpace__eC__containers__OldList * findClassArgs = MkList();
struct __eCNameSpace__eC__containers__OldList * args = MkList();
struct Statement * compoundStmt;
char * s;
struct Expression * e;

if(__extension__ ({
char * __ecTemp1 = (char *)(((struct __eCNameSpace__eC__types__Instance *)(uintptr_t)__eCProp___eCNameSpace__eC__types__Iterator_Get_data(&v)));

((struct ClassPropertyValue *)(__ecTemp1 + __eCClass_ClassPropertyValue->offset));
})->exp)
yylloc = __extension__ ({
char * __ecTemp1 = (char *)(((struct __eCNameSpace__eC__types__Instance *)(uintptr_t)__eCProp___eCNameSpace__eC__types__Iterator_Get_data(&v)));

((struct ClassPropertyValue *)(__ecTemp1 + __eCClass_ClassPropertyValue->offset));
})->exp->loc;
ListAdd(findClassArgs, MkExpIdentifier(MkIdentifier("module")));
{
char nameSpace[1024] = "";
char className[1024] = "";
struct __eCNameSpace__eC__types__Class * regClass = __extension__ ({
char * __ecTemp1 = (char *)(((struct __eCNameSpace__eC__types__Instance *)(uintptr_t)__eCProp___eCNameSpace__eC__types__Iterator_Get_data(&v)));

((struct ClassPropertyValue *)(__ecTemp1 + __eCClass_ClassPropertyValue->offset));
})->regClass;

GetNameSpaceString(regClass->nameSpace, nameSpace);
if(__extension__ ({
char * __ecTemp1 = (char *)(((struct __eCNameSpace__eC__types__Instance *)(uintptr_t)__eCProp___eCNameSpace__eC__types__Iterator_Get_data(&v)));

((struct ClassPropertyValue *)(__ecTemp1 + __eCClass_ClassPropertyValue->offset));
})->staticClass)
{
__eCNameSpace__eC__types__GetLastDirectory(sourceFile, className);
__eCNameSpace__eC__types__ChangeCh(className, '.', '_');
strcat(className, "}");
}
strcat(className, nameSpace);
strcat(className, regClass->name);
s = QMkString(className);
}
ListAdd(findClassArgs, MkExpString(s));
(__eCNameSpace__eC__types__eSystem_Delete(s), s = 0);
ListAdd(args, MkExpIdentifier(MkIdentifier("_class")));
s = QMkString(__extension__ ({
char * __ecTemp1 = (char *)(((struct __eCNameSpace__eC__types__Instance *)(uintptr_t)__eCProp___eCNameSpace__eC__types__Iterator_Get_data(&v)));

((struct ClassPropertyValue *)(__ecTemp1 + __eCClass_ClassPropertyValue->offset));
})->id->string);
ListAdd(args, MkExpString(s));
(__eCNameSpace__eC__types__eSystem_Delete(s), s = 0);
e = __extension__ ({
char * __ecTemp1 = (char *)(((struct __eCNameSpace__eC__types__Instance *)(uintptr_t)__eCProp___eCNameSpace__eC__types__Iterator_Get_data(&v)));

((struct ClassPropertyValue *)(__ecTemp1 + __eCClass_ClassPropertyValue->offset));
})->exp;
ProcessExpressionType(e);
if(__eCProp_Type_Get_isPointerType(e->expType))
e = MkExpCast(MkTypeName(MkListOne(MkSpecifierName("intptr")), (((void *)0))), e);
ListAdd(args, MkExpCast(MkTypeName(MkListOne(MkSpecifier(INT64)), (((void *)0))), e));
compoundStmt = MkCompoundStmt(MkListOne(MkDeclaration(MkListOne(MkSpecifierName("eC::types::Class")), MkListOne(MkInitDeclarator(MkDeclaratorIdentifier(MkIdentifier("_class")), MkInitializerAssignment(MkExpCall(MkExpIdentifier(MkIdentifier("eC::types::eSystem_FindClass")), findClassArgs)))))), MkListOne(MkExpressionStmt(MkListOne(MkExpCall(MkExpIdentifier(MkIdentifier("eC::types::eClass_SetProperty")), args)))));
compoundStmt->__anon1.compound.context = __extension__ ({
struct Context * __eCInstance1 = __eCNameSpace__eC__types__eInstance_New(__eCClass_Context);

__eCInstance1->parent = registerModuleBody->__anon1.compound.context, __eCInstance1;
});
ListAdd(registerModuleBody->__anon1.compound.statements, compoundStmt);
}
}
(__extension__ ({
void (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *);

__internal_VirtualMethod = ((void (*)(struct __eCNameSpace__eC__types__Instance *))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = classPropValues;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__containers__List->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__containers__Container_Free]);
__internal_VirtualMethod ? __internal_VirtualMethod(classPropValues) : (void)1;
}));
}
}

void __eCRegisterModule_pass1(struct __eCNameSpace__eC__types__Instance * module)
{
struct __eCNameSpace__eC__types__Class __attribute__((unused)) * class;

__eCNameSpace__eC__types__eSystem_RegisterFunction("SetBuildingEcereCom", "void SetBuildingEcereCom(bool b)", SetBuildingEcereCom, module, 1);
__eCNameSpace__eC__types__eSystem_RegisterFunction("GetBuildingECRT", "bool GetBuildingECRT(void)", GetBuildingECRT, module, 1);
__eCNameSpace__eC__types__eSystem_RegisterFunction("SetBuildingEcereComModule", "void SetBuildingEcereComModule(bool b)", SetBuildingEcereComModule, module, 1);
__eCNameSpace__eC__types__eSystem_RegisterFunction("GetBuildingECRTModule", "bool GetBuildingECRTModule(void)", GetBuildingECRTModule, module, 1);
__eCNameSpace__eC__types__eSystem_RegisterFunction("ProcessClassFunction", "External ProcessClassFunction(eC::types::Class owningClass, ClassFunction func, eC::containers::OldList defs, External after, bool makeStatic)", ProcessClassFunction, module, 2);
__eCNameSpace__eC__types__eSystem_RegisterFunction("CreateRegisterModuleBody", "void CreateRegisterModuleBody(void)", CreateRegisterModuleBody, module, 2);
__eCNameSpace__eC__types__eSystem_RegisterFunction("RegisterMembersAndProperties", "void RegisterMembersAndProperties(eC::types::Class regClass, bool isMember, const char * className, Statement statement)", RegisterMembersAndProperties, module, 2);
__eCNameSpace__eC__types__eSystem_RegisterFunction("GetNameSpaceString", "void GetNameSpaceString(eC::types::NameSpace ns, char * string)", GetNameSpaceString, module, 2);
class = __eCNameSpace__eC__types__eSystem_RegisterClass(0, "ClassPropertyValue", 0, sizeof(struct ClassPropertyValue), 0, (void *)0, (void *)__eCDestructor_ClassPropertyValue, module, 2, 1);
if(((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application == ((struct __eCNameSpace__eC__types__Module *)(((char *)__thisModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->application && class)
__eCClass_ClassPropertyValue = class;
__eCNameSpace__eC__types__eClass_AddDataMember(class, (((void *)0)), (((void *)0)), 0, sizeof(void *) > 4 ? sizeof(void *) : 4, 2);
__eCNameSpace__eC__types__eSystem_RegisterFunction("ProcessClassDefinitions", "void ProcessClassDefinitions(void)", ProcessClassDefinitions, module, 1);
}

