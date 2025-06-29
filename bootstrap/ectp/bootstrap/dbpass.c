/* Code generated from eC source file: dbpass.ec */
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
extern int yydebug;

enum yytokentype
{
IDENTIFIER = 258, CONSTANT = 259, STRING_LITERAL = 260, SIZEOF = 261, PTR_OP = 262, INC_OP = 263, DEC_OP = 264, LEFT_OP = 265, RIGHT_OP = 266, LE_OP = 267, GE_OP = 268, EQ_OP = 269, NE_OP = 270, AND_OP = 271, OR_OP = 272, MUL_ASSIGN = 273, DIV_ASSIGN = 274, MOD_ASSIGN = 275, ADD_ASSIGN = 276, SUB_ASSIGN = 277, LEFT_ASSIGN = 278, RIGHT_ASSIGN = 279, AND_ASSIGN = 280, XOR_ASSIGN = 281, OR_ASSIGN = 282, TYPE_NAME = 283, TYPEDEF = 284, EXTERN = 285, STATIC = 286, AUTO = 287, REGISTER = 288, CHAR = 289, SHORT = 290, INT = 291, UINT = 292, INT64 = 293, INT128 = 294, FLOAT128 = 295, FLOAT16 = 296, LONG = 297, SIGNED = 298, UNSIGNED = 299, FLOAT = 300, DOUBLE = 301, CONST = 302, VOLATILE = 303, VOID = 304, VALIST = 305, STRUCT = 306, UNION = 307, ENUM = 308, ELLIPSIS = 309, CASE = 310, DEFAULT = 311, IF = 312, SWITCH = 313, WHILE = 314, DO = 315, FOR = 316, GOTO = 317, CONTINUE = 318, BREAK = 319, RETURN = 320, IFX = 321, ELSE = 322, CLASS = 323, THISCLASS = 324, PROPERTY = 325, SETPROP = 326, GETPROP = 327, NEWOP = 328, RENEW = 329, DELETE = 330, EXT_DECL = 331, EXT_STORAGE = 332, IMPORT = 333, DEFINE = 334, VIRTUAL = 335, ATTRIB = 336, PUBLIC = 337, PRIVATE = 338, TYPED_OBJECT = 339, ANY_OBJECT = 340, _INCREF = 341, EXTENSION = 342, ASM = 343, TYPEOF = 344, WATCH = 345, STOPWATCHING = 346, FIREWATCHERS = 347, WATCHABLE = 348, CLASS_DESIGNER = 349, CLASS_NO_EXPANSION = 350, CLASS_FIXED = 351, ISPROPSET = 352, CLASS_DEFAULT_PROPERTY = 353, PROPERTY_CATEGORY = 354, CLASS_DATA = 355, CLASS_PROPERTY = 356, SUBCLASS = 357, NAMESPACE = 358, NEW0OP = 359, RENEW0 = 360, VAARG = 361, DBTABLE = 362, DBFIELD = 363, DBINDEX = 364, DATABASE_OPEN = 365, ALIGNOF = 366, ATTRIB_DEP = 367, __ATTRIB = 368, BOOL = 369, _BOOL = 370, _COMPLEX = 371, _IMAGINARY = 372, RESTRICT = 373, THREAD = 374, WIDE_STRING_LITERAL = 375, BUILTIN_OFFSETOF = 376, PRAGMA = 377, STATIC_ASSERT = 378, _ALIGNAS = 379
};

int yyparse(void);

static int numIndexes;

extern unsigned int inCompiler;

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

struct Enumerator;

struct Declarator;

struct Pointer;

struct AsmField;

struct Attrib;

struct ExtDecl;

struct Attribute;

struct TemplateParameter;

struct TemplateArgument;

struct TemplateDatatype;

struct CodePosition
{
int line;
int charPos;
int pos;
int included;
} eC_gcc_struct;

extern size_t strlen(const char * );

extern void *  memcpy(void * , const void * , size_t size);

extern void __eCNameSpace__eC__types__ChangeCh(char *  string, char ch1, char ch2);

extern int sprintf(char * , const char * , ...);

extern void Compiler_Error(const char *  format, ...);

extern const char *  __eCNameSpace__eC__i18n__GetTranslatedString(const char * name, const char *  string, const char *  stringAndContext);

struct __eCNameSpace__eC__containers__LinkList
{
void * first;
void * last;
int count;
} eC_gcc_struct;

extern int strcmp(const char * , const char * );

extern char *  strcpy(char * , const char * );

struct ModuleImport;

struct ClassImport;

extern char *  __eCNameSpace__eC__types__CopyString(const char *  string);

extern void PrePreProcessClassDefinitions(void);

struct __eCNameSpace__eC__types__GlobalFunction;

static struct __eCNameSpace__eC__containers__OldList * tableStatements, * indexStatements, * addFieldStatements;

extern struct __eCNameSpace__eC__containers__OldList *  MkList(void);

extern struct __eCNameSpace__eC__containers__OldList *  MkListOne(void *  item);

extern struct __eCNameSpace__eC__containers__OldList *  ast;

extern struct __eCNameSpace__eC__containers__OldList *  CopyList(struct __eCNameSpace__eC__containers__OldList *  source, void *  (*  CopyFunction)(void * ));

void __eCMethod___eCNameSpace__eC__containers__OldList_Add(struct __eCNameSpace__eC__containers__OldList * this, void *  item);

unsigned int __eCMethod___eCNameSpace__eC__containers__OldList_Insert(struct __eCNameSpace__eC__containers__OldList * this, void *  prevItem, void *  item);

extern struct Declarator * CopyDeclarator(struct Declarator * declarator);

struct Location
{
struct CodePosition start;
struct CodePosition end;
} eC_gcc_struct;

extern struct Location yylloc;

struct External;

static struct External * addAfter;

extern struct External * curExternal;

struct Identifier;

static void ProcessIdentifier(struct Identifier * id)
{
}

extern struct Identifier * MkIdentifier(const char *  string);

extern struct Declarator * MkDeclaratorIdentifier(struct Identifier * id);

extern struct Identifier * CopyIdentifier(struct Identifier * id);

struct Context;

extern struct Context * curContext;

extern struct Context * PushContext(void);

extern void PopContext(struct Context * ctx);

extern struct Context * globalContext;

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

struct Expression;

extern void FreeExpContents(struct Expression * exp);

extern struct Expression * MkExpIdentifier(struct Identifier * id);

extern struct Expression * MkExpConstant(const char *  string);

extern struct Expression * MkExpOp(struct Expression * exp1, int op, struct Expression * exp2);

extern struct Expression * CopyExpression(struct Expression * exp);

extern struct Expression * MkExpCall(struct Expression * expression, struct __eCNameSpace__eC__containers__OldList * arguments);

extern struct Expression * MkExpMember(struct Expression * expression, struct Identifier * member);

extern struct Declarator * MkDeclaratorArray(struct Declarator * declarator, struct Expression * exp);

extern struct Expression * MkExpString(const char *  string);

extern struct Expression * MkExpClass(struct __eCNameSpace__eC__containers__OldList *  specifiers, struct Declarator * decl);

extern struct Expression * MkExpIndex(struct Expression * expression, struct __eCNameSpace__eC__containers__OldList * index);

extern struct Expression * MkExpDBTable(char *  table);

extern struct Expression * MkExpDBField(char *  table, struct Identifier * id);

struct Specifier;

extern struct Specifier * MkSpecifierName(const char *  name);

extern struct Specifier * MkSpecifier(int specifier);

extern struct Specifier * CopySpecifier(struct Specifier * spec);

struct PropertyDef;

struct Instantiation;

extern struct Expression * MkExpInstance(struct Instantiation * inst);

extern struct Instantiation * MkInstantiation(struct Specifier * _class, struct Expression * exp, struct __eCNameSpace__eC__containers__OldList * members);

struct Statement;

extern struct Statement * MkCompoundStmt(struct __eCNameSpace__eC__containers__OldList * declarations, struct __eCNameSpace__eC__containers__OldList * statements);

extern struct Statement * MkIfStmt(struct __eCNameSpace__eC__containers__OldList * exp, struct Statement * statement, struct Statement * elseStmt);

extern struct Statement * MkReturnStmt(struct __eCNameSpace__eC__containers__OldList * exp);

extern struct Statement * MkExpressionStmt(struct __eCNameSpace__eC__containers__OldList * expressions);

extern struct PropertyDef * MkProperty(struct __eCNameSpace__eC__containers__OldList * specs, struct Declarator * decl, struct Identifier * id, struct Statement * setStmt, struct Statement * getStmt);

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

extern struct External * MkExternalDeclaration(struct Declaration * declaration);

extern struct Declaration * MkDeclarationInst(struct Instantiation * inst);

struct Initializer;

extern struct Initializer * MkInitializerAssignment(struct Expression * exp);

extern struct Initializer * MkInitializerList(struct __eCNameSpace__eC__containers__OldList * list);

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

struct Symbol;

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
char * pragma;
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

struct DBTableDef
{
char *  name;
struct Symbol * symbol;
struct __eCNameSpace__eC__containers__OldList *  definitions;
int declMode;
} eC_gcc_struct;

extern struct Symbol * DeclClass(struct Specifier * _class, const char *  name);

struct MembersInit;

extern struct MembersInit * MkMembersInitList(struct __eCNameSpace__eC__containers__OldList * dataMembers);

struct ClassDef;

extern struct ClassDef * MkClassDefDefaultProperty(struct __eCNameSpace__eC__containers__OldList * defProperties);

extern struct ClassDef * MkClassDefProperty(struct PropertyDef * propertyDef);

extern struct ClassDef * MkClassDefClassPropertyValue(struct Identifier * id, struct Initializer * initializer);

struct __eCNameSpace__eC__containers__BinaryTree;

struct __eCNameSpace__eC__containers__BinaryTree
{
struct __eCNameSpace__eC__containers__BTNode * root;
int count;
int (*  CompareKey)(struct __eCNameSpace__eC__containers__BinaryTree * tree, uintptr_t a, uintptr_t b);
void (*  FreeKey)(void *  key);
} eC_gcc_struct;

struct ClassDefinition;

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

extern struct ClassDefinition * MkClass(struct Symbol * symbol, struct __eCNameSpace__eC__containers__OldList * baseSpecs, struct __eCNameSpace__eC__containers__OldList * definitions);

extern struct External * MkExternalClass(struct ClassDefinition * _class);

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

struct DBTableEntry;

struct DBIndexItem;

struct DBIndexItem
{
struct DBIndexItem * prev;
struct DBIndexItem * next;
struct Identifier * id;
int order;
} eC_gcc_struct;

struct __eCNameSpace__eC__types__DataMember;

struct __eCNameSpace__eC__types__Property;

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

struct __eCNameSpace__eC__types__Module;

extern struct __eCNameSpace__eC__types__GlobalFunction * __eCNameSpace__eC__types__eSystem_RegisterFunction(const char *  name, const char *  type, void *  func, struct __eCNameSpace__eC__types__Instance * module, int declMode);

struct TypeName;

struct DBTableEntry
{
struct DBTableEntry * prev;
struct DBTableEntry * next;
int type;
struct Identifier * id;
union
{
struct
{
struct TypeName * dataType;
char *  name;
} eC_gcc_struct __anon1;
struct __eCNameSpace__eC__containers__OldList *  items;
} eC_gcc_struct __anon1;
} eC_gcc_struct;

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

struct MemberInit;

struct MemberInit
{
struct MemberInit * prev;
struct MemberInit * next;
struct Location loc;
struct Location realLoc;
struct __eCNameSpace__eC__containers__OldList *  identifiers;
struct Initializer * initializer;
unsigned int used;
unsigned int variable;
unsigned int takeOutExp;
} eC_gcc_struct;

extern struct MemberInit * MkMemberInit(struct __eCNameSpace__eC__containers__OldList * ids, struct Initializer * initializer);

extern struct MemberInit * MkMemberInitExp(struct Expression * idExp, struct Initializer * initializer);

struct InitDeclarator;

extern struct InitDeclarator * MkInitDeclarator(struct Declarator * declarator, struct Initializer * initializer);

struct InitDeclarator
{
struct InitDeclarator * prev;
struct InitDeclarator * next;
struct Location loc;
struct Declarator * declarator;
struct Initializer * initializer;
} eC_gcc_struct;

static void ProcessExpression(struct Expression *  exp);

static void ProcessInitializer(struct Initializer * initializer)
{
switch(initializer->type)
{
case 1:
{
struct Initializer * init;

for(init = (*initializer->__anon1.list).first; init; init = init->next)
{
ProcessInitializer(init);
}
break;
}
case 0:
ProcessExpression(initializer->__anon1.exp);
break;
}
}

static void ProcessInitDeclarator(struct InitDeclarator * decl)
{
if(decl->initializer)
ProcessInitializer(decl->initializer);
}

static void ProcessMemberInit(struct MemberInit * init)
{
if(init->initializer)
{
ProcessInitializer(init->initializer);
}
}

struct FunctionDefinition;

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

struct ClassFunction;

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

struct MembersInit
{
struct MembersInit * prev;
struct MembersInit * next;
struct Location loc;
int type;
union
{
struct __eCNameSpace__eC__containers__OldList *  dataMembers;
struct ClassFunction * function;
} eC_gcc_struct __anon1;
} eC_gcc_struct;

static void ProcessStatement(struct Statement *  stmt);

static void ProcessProperty(struct PropertyDef * def)
{
if(def->getStmt)
{
ProcessStatement(def->getStmt);
}
if(def->setStmt)
{
ProcessStatement(def->setStmt);
}
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

void __eCUnregisterModule_dbpass(struct __eCNameSpace__eC__types__Instance * module)
{

}

struct Type;

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

extern struct __eCNameSpace__eC__types__Class * __eCClass_Context;

extern struct __eCNameSpace__eC__types__Class * __eCClass_Type;

static void ProcessFunction(struct FunctionDefinition * func)
{
if(func->body)
{
ProcessStatement(func->body);
}
}

static void ProcessClassFunction(struct ClassFunction * func)
{
if(func->body)
{
ProcessStatement(func->body);
}
}

static void ProcessDBTable(struct DBTableDef * table)
{
struct __eCNameSpace__eC__containers__OldList * rowClassDefs = MkList(), * idClassDefs = (((void *)0));
char tableName[1024];
char rowClassName[1027];
int len = strlen(table->name);
unsigned int indexed = 0;
char tableID[1039];
char nameField[1024];
struct __eCNameSpace__eC__containers__OldList * args;
struct __eCNameSpace__eC__containers__OldList * members;

if(table->symbol)
idClassDefs = MkList();
nameField[0] = 0;
memcpy(tableName, table->name + 1, len - 2);
tableName[len - 2] = 0;
__eCNameSpace__eC__types__ChangeCh(tableName, ' ', '_');
sprintf(tableID, "__eCDBTable_%s", tableName);
sprintf(rowClassName, "Row%s", tableName);
__eCNameSpace__eC__types__ChangeCh(rowClassName, ' ', '_');
if(!tableStatements)
{
tableStatements = MkList();
indexStatements = MkList();
addFieldStatements = MkList();
}
{
struct External * external;

external = MkExternalDeclaration(MkDeclaration(MkListOne(MkSpecifierName("Table")), MkListOne(MkInitDeclarator(MkDeclaratorIdentifier(MkIdentifier(tableID)), (((void *)0))))));
external->__anon1.declaration->declMode = table->declMode;
__eCMethod___eCNameSpace__eC__containers__OldList_Insert((&*ast), addAfter, external);
args = MkList();
__eCMethod___eCNameSpace__eC__containers__OldList_Add((&*tableStatements), MkExpressionStmt(MkListOne(MkExpOp(MkExpIdentifier(MkIdentifier(tableID)), '=', MkExpCall(MkExpMember(MkExpIdentifier(MkIdentifier("db")), MkIdentifier("OpenTable")), args)))));
__eCMethod___eCNameSpace__eC__containers__OldList_Add((&*args), MkExpString(table->name));
members = MkList();
__eCMethod___eCNameSpace__eC__containers__OldList_Add((&*args), MkExpInstance(MkInstantiation((((void *)0)), (((void *)0)), MkListOne(MkMembersInitList(members)))));
__eCMethod___eCNameSpace__eC__containers__OldList_Add((&*members), MkMemberInit((((void *)0)), MkInitializerAssignment(MkExpIdentifier(MkIdentifier("tableRows")))));
__eCMethod___eCNameSpace__eC__containers__OldList_Add((&*members), MkMemberInit((((void *)0)), MkInitializerAssignment(MkExpIdentifier(MkIdentifier("create")))));
}
{
struct ClassDefinition * _class;
struct ClassDef * def;
struct External * external;
struct __eCNameSpace__eC__containers__OldList * inheritanceSpecs = MkList();

__eCMethod___eCNameSpace__eC__containers__OldList_Add((&*inheritanceSpecs), MkSpecifier(PRIVATE));
__eCMethod___eCNameSpace__eC__containers__OldList_Add((&*inheritanceSpecs), MkSpecifierName("Row"));
PushContext();
_class = MkClass(DeclClass((((void *)0)), rowClassName), inheritanceSpecs, rowClassDefs);
PopContext(curContext);
def = MkClassDefDefaultProperty(MkListOne(MkMemberInitExp(MkExpIdentifier(MkIdentifier("tbl")), MkInitializerAssignment(MkExpIdentifier(MkIdentifier(tableID))))));
__eCMethod___eCNameSpace__eC__containers__OldList_Add((&*rowClassDefs), def);
_class->declMode = table->declMode;
external = MkExternalClass(_class);
__eCMethod___eCNameSpace__eC__containers__OldList_Insert((&*ast), addAfter, external);
addAfter = external;
}
if(table->definitions)
{
struct DBTableEntry * entry;

for(entry = (*table->definitions).first; entry; entry = entry->next)
{
switch(entry->type)
{
case 0:
{
unsigned int isIndex = 0;
char fieldID[2064];
struct __eCNameSpace__eC__containers__OldList * args;
struct Specifier * spec = entry->__anon1.__anon1.dataType->qualifiers ? (struct Specifier *)(*entry->__anon1.__anon1.dataType->qualifiers).first : (((void *)0));

sprintf(fieldID, "__eCDBField_%s_%s", tableName, entry->id->string);
if(idClassDefs)
{
if(!nameField[0] && spec->type == 1 && (!strcmp(spec->__anon1.__anon1.name, "String") || !strcmp(spec->__anon1.__anon1.name, "eC::types::CIString")))
{
strcpy(nameField, entry->id->string);
}
if(!indexed && spec->type == 1 && !strcmp(spec->__anon1.__anon1.name, table->symbol->string))
{
struct Statement * rowSet = MkCompoundStmt(MkList(), MkList());
char name[1024];
struct ClassDef * def;

numIndexes = ((numIndexes > 1) ? numIndexes : 1);
isIndex = 1;
indexed = 1;
sprintf(name, "_%s", entry->id->string);
curContext = rowSet->__anon1.compound.context = __extension__ ({
struct Context * __eCInstance1 = __eCNameSpace__eC__types__eInstance_New(__eCClass_Context);

__eCInstance1->parent = globalContext, __eCInstance1;
});
__eCMethod___eCNameSpace__eC__containers__OldList_Add((&*rowSet->__anon1.compound.statements), MkExpressionStmt(MkListOne(MkExpCall(MkExpIdentifier(MkIdentifier("Find")), args = MkList()))));
__eCMethod___eCNameSpace__eC__containers__OldList_Add((&*args), MkExpIdentifier(MkIdentifier(fieldID)));
__eCMethod___eCNameSpace__eC__containers__OldList_Add((&*args), MkExpIdentifier(MkIdentifier("middle")));
__eCMethod___eCNameSpace__eC__containers__OldList_Add((&*args), MkExpIdentifier(MkIdentifier("nil")));
__eCMethod___eCNameSpace__eC__containers__OldList_Add((&*args), MkExpIdentifier(MkIdentifier("value")));
curContext = globalContext;
def = MkClassDefProperty(MkProperty(CopyList(entry->__anon1.__anon1.dataType->qualifiers, (void *)(CopySpecifier)), CopyDeclarator(entry->__anon1.__anon1.dataType->declarator), MkIdentifier(name), rowSet, (((void *)0))));
def->__anon1.propertyDef->__anon1.isDBProp = 1;
def->memberAccess = 1;
__eCMethod___eCNameSpace__eC__containers__OldList_Add((&*rowClassDefs), def);
}
}
if(rowClassDefs)
{
struct Statement * rowSet = MkCompoundStmt(MkList(), MkList()), * rowGet = MkCompoundStmt(MkList(), MkList());
struct ClassDef * def;

curContext = rowGet->__anon1.compound.context = __extension__ ({
struct Context * __eCInstance1 = __eCNameSpace__eC__types__eInstance_New(__eCClass_Context);

__eCInstance1->parent = globalContext, __eCInstance1;
});
if(spec->type == 1 && spec->__anon1.__anon1.symbol && spec->__anon1.__anon1.symbol->__anon1.registered && spec->__anon1.__anon1.symbol->__anon1.registered->type == 1)
{
__eCMethod___eCNameSpace__eC__containers__OldList_Add((&*rowGet->__anon1.compound.declarations), MkDeclarationInst(MkInstantiation(MkSpecifierName(spec->__anon1.__anon1.name), MkExpIdentifier(MkIdentifier("d")), (((void *)0)))));
}
else
{
struct Expression * exp;

__eCMethod___eCNameSpace__eC__containers__OldList_Add((&*rowGet->__anon1.compound.declarations), MkDeclaration(CopyList(entry->__anon1.__anon1.dataType->qualifiers, (void *)(CopySpecifier)), MkListOne(MkInitDeclarator(MkDeclaratorIdentifier(MkIdentifier("d")), MkInitializerAssignment(exp = MkExpConstant("0"))))));
exp->destType = __extension__ ({
struct Type * __eCInstance1 = __eCNameSpace__eC__types__eInstance_New(__eCClass_Type);

__eCInstance1->kind = 3, __eCInstance1->refCount = 1, __eCInstance1;
});
}
__eCMethod___eCNameSpace__eC__containers__OldList_Add((&*rowGet->__anon1.compound.statements), MkExpressionStmt(MkListOne(MkExpCall(MkExpIdentifier(MkIdentifier("GetData")), args = MkList()))));
__eCMethod___eCNameSpace__eC__containers__OldList_Add((&*args), MkExpIdentifier(MkIdentifier(fieldID)));
__eCMethod___eCNameSpace__eC__containers__OldList_Add((&*args), MkExpIdentifier(MkIdentifier("d")));
if(spec->type == 1 && spec->__anon1.__anon1.symbol && spec->__anon1.__anon1.symbol->__anon1.registered && spec->__anon1.__anon1.symbol->__anon1.registered->type == 1)
{
__eCMethod___eCNameSpace__eC__containers__OldList_Add((&*rowGet->__anon1.compound.statements), MkExpressionStmt(MkListOne(MkExpOp(MkExpIdentifier(MkIdentifier("value")), '=', MkExpIdentifier(MkIdentifier("d"))))));
}
else
__eCMethod___eCNameSpace__eC__containers__OldList_Add((&*rowGet->__anon1.compound.statements), MkReturnStmt(MkListOne(MkExpIdentifier(MkIdentifier("d")))));
curContext = rowSet->__anon1.compound.context = __extension__ ({
struct Context * __eCInstance1 = __eCNameSpace__eC__types__eInstance_New(__eCClass_Context);

__eCInstance1->parent = globalContext, __eCInstance1;
});
__eCMethod___eCNameSpace__eC__containers__OldList_Add((&*rowSet->__anon1.compound.statements), MkExpressionStmt(MkListOne(MkExpCall(MkExpIdentifier(MkIdentifier("SetData")), args = MkList()))));
__eCMethod___eCNameSpace__eC__containers__OldList_Add((&*args), MkExpIdentifier(MkIdentifier(fieldID)));
__eCMethod___eCNameSpace__eC__containers__OldList_Add((&*args), MkExpIdentifier(MkIdentifier("value")));
curContext = globalContext;
def = MkClassDefProperty(MkProperty(CopyList(entry->__anon1.__anon1.dataType->qualifiers, (void *)(CopySpecifier)), entry->__anon1.__anon1.dataType->declarator, CopyIdentifier(entry->id), rowSet, rowGet));
def->__anon1.propertyDef->__anon1.isDBProp = 1;
def->memberAccess = 1;
__eCMethod___eCNameSpace__eC__containers__OldList_Add((&*rowClassDefs), def);
}
{
struct External * external;

external = MkExternalDeclaration(MkDeclaration(MkListOne(MkSpecifierName("Field")), MkListOne(MkInitDeclarator(MkDeclaratorIdentifier(MkIdentifier(fieldID)), (((void *)0))))));
__eCMethod___eCNameSpace__eC__containers__OldList_Add((&*ast), external);
external->__anon1.declaration->declMode = table->declMode;
args = MkList();
__eCMethod___eCNameSpace__eC__containers__OldList_Add((&*addFieldStatements), MkExpressionStmt(MkListOne(MkExpOp(MkExpIdentifier(MkIdentifier(fieldID)), '=', MkExpCall(MkExpMember(MkExpIdentifier(MkIdentifier(tableID)), MkIdentifier("FindField")), args)))));
__eCMethod___eCNameSpace__eC__containers__OldList_Add((&*args), MkExpString(entry->__anon1.__anon1.name));
args = MkList();
__eCMethod___eCNameSpace__eC__containers__OldList_Add((&*addFieldStatements), MkIfStmt(MkListOne(MkExpOp((((void *)0)), '!', MkExpIdentifier(MkIdentifier(fieldID)))), MkExpressionStmt(MkListOne(MkExpOp(MkExpIdentifier(MkIdentifier(fieldID)), '=', MkExpCall(MkExpMember(MkExpIdentifier(MkIdentifier(tableID)), MkIdentifier("AddField")), args)))), (((void *)0))));
__eCMethod___eCNameSpace__eC__containers__OldList_Add((&*args), MkExpString(entry->__anon1.__anon1.name));
__eCMethod___eCNameSpace__eC__containers__OldList_Add((&*args), MkExpClass(CopyList(entry->__anon1.__anon1.dataType->qualifiers, (void *)(CopySpecifier)), CopyDeclarator(entry->__anon1.__anon1.dataType->declarator)));
__eCMethod___eCNameSpace__eC__containers__OldList_Add((&*args), MkExpConstant("0"));
}
if(isIndex)
{
__eCMethod___eCNameSpace__eC__containers__OldList_Add((&*indexStatements), MkExpressionStmt(MkListOne(MkExpOp(MkExpMember(MkExpIndex(MkExpIdentifier(MkIdentifier("indexes")), MkListOne(MkExpConstant("0"))), MkIdentifier("field")), '=', MkExpIdentifier(MkIdentifier(fieldID))))));
__eCMethod___eCNameSpace__eC__containers__OldList_Add((&*indexStatements), MkExpressionStmt(MkListOne(MkExpOp(MkExpMember(MkExpIndex(MkExpIdentifier(MkIdentifier("indexes")), MkListOne(MkExpConstant("0"))), MkIdentifier("order")), '=', MkExpIdentifier(MkIdentifier("ascending"))))));
args = MkList();
__eCMethod___eCNameSpace__eC__containers__OldList_Add((&*indexStatements), MkExpressionStmt(MkListOne(MkExpCall(MkExpMember(MkExpIdentifier(MkIdentifier(tableID)), MkIdentifier("Index")), args))));
__eCMethod___eCNameSpace__eC__containers__OldList_Add((&*args), MkExpConstant("1"));
__eCMethod___eCNameSpace__eC__containers__OldList_Add((&*args), MkExpIdentifier(MkIdentifier("indexes")));
}
break;
}
}
}
}
if(table->symbol)
{
struct ClassDefinition * _class;
struct External * external;
struct ClassDef * def;
struct Expression * exp;

PushContext();
_class = MkClass(table->symbol, MkListOne(MkSpecifierName("Id")), idClassDefs);
PopContext(curContext);
_class->declMode = table->declMode;
external = MkExternalClass(_class);
__eCMethod___eCNameSpace__eC__containers__OldList_Insert((&*ast), addAfter, external);
addAfter = external;
def = MkClassDefClassPropertyValue(MkIdentifier("table"), MkInitializerAssignment(exp = MkExpOp((((void *)0)), '&', MkExpDBTable(__eCNameSpace__eC__types__CopyString(table->name)))));
ProcessExpression(exp);
__eCMethod___eCNameSpace__eC__containers__OldList_Add((&*idClassDefs), def);
if(nameField[0])
{
def = MkClassDefClassPropertyValue(MkIdentifier("nameField"), MkInitializerAssignment(exp = MkExpOp((((void *)0)), '&', MkExpDBField(__eCNameSpace__eC__types__CopyString(table->name), MkIdentifier(nameField)))));
ProcessExpression(exp);
__eCMethod___eCNameSpace__eC__containers__OldList_Add((&*idClassDefs), def);
}
}
if(table->definitions)
{
struct DBTableEntry * entry;

for(entry = (*table->definitions).first; entry; entry = entry->next)
{
switch(entry->type)
{
case 0:
{
char fieldID[2064];
struct __eCNameSpace__eC__containers__OldList * args;
struct Specifier * spec = entry->__anon1.__anon1.dataType->qualifiers ? (struct Specifier *)(*entry->__anon1.__anon1.dataType->qualifiers).first : (((void *)0));

sprintf(fieldID, "__eCDBField_%s_%s", tableName, entry->id->string);
if(idClassDefs && spec)
{
struct Statement * idSet = MkCompoundStmt(MkList(), MkList()), * idGet = MkCompoundStmt(MkList(), MkList());
struct ClassDef * def;

curContext = idGet->__anon1.compound.context = __extension__ ({
struct Context * __eCInstance1 = __eCNameSpace__eC__types__eInstance_New(__eCClass_Context);

__eCInstance1->parent = globalContext, __eCInstance1;
});
__eCMethod___eCNameSpace__eC__containers__OldList_Add((&*idGet->__anon1.compound.declarations), MkDeclarationInst(MkInstantiation(MkSpecifierName(rowClassName), MkExpIdentifier(MkIdentifier("r")), MkListOne(MkMembersInitList(MkListOne(MkMemberInit((((void *)0)), MkInitializerAssignment(MkExpIdentifier(MkIdentifier("this"))))))))));
if(spec->type == 1 && spec->__anon1.__anon1.symbol && spec->__anon1.__anon1.symbol->__anon1.registered && spec->__anon1.__anon1.symbol->__anon1.registered->type == 1)
{
__eCMethod___eCNameSpace__eC__containers__OldList_Add((&*idGet->__anon1.compound.declarations), MkDeclarationInst(MkInstantiation(MkSpecifierName(spec->__anon1.__anon1.name), MkExpIdentifier(MkIdentifier("d")), (((void *)0)))));
}
else
{
struct Expression * exp;

__eCMethod___eCNameSpace__eC__containers__OldList_Add((&*idGet->__anon1.compound.declarations), MkDeclaration(CopyList(entry->__anon1.__anon1.dataType->qualifiers, (void *)(CopySpecifier)), MkListOne(MkInitDeclarator(MkDeclaratorIdentifier(MkIdentifier("d")), MkInitializerAssignment(exp = MkExpConstant("0"))))));
exp->destType = __extension__ ({
struct Type * __eCInstance1 = __eCNameSpace__eC__types__eInstance_New(__eCClass_Type);

__eCInstance1->kind = 3, __eCInstance1->refCount = 1, __eCInstance1;
});
}
__eCMethod___eCNameSpace__eC__containers__OldList_Add((&*idGet->__anon1.compound.statements), MkExpressionStmt(MkListOne(MkExpCall(MkExpMember(MkExpIdentifier(MkIdentifier("r")), MkIdentifier("GetData")), args = MkList()))));
__eCMethod___eCNameSpace__eC__containers__OldList_Add((&*args), MkExpIdentifier(MkIdentifier(fieldID)));
__eCMethod___eCNameSpace__eC__containers__OldList_Add((&*args), MkExpIdentifier(MkIdentifier("d")));
__eCMethod___eCNameSpace__eC__containers__OldList_Add((&*idGet->__anon1.compound.statements), MkExpressionStmt(MkListOne(MkExpOp((((void *)0)), DELETE, MkExpIdentifier(MkIdentifier("r"))))));
if(spec->type == 1 && spec->__anon1.__anon1.symbol && spec->__anon1.__anon1.symbol->__anon1.registered && spec->__anon1.__anon1.symbol->__anon1.registered->type == 1)
{
__eCMethod___eCNameSpace__eC__containers__OldList_Add((&*idGet->__anon1.compound.statements), MkExpressionStmt(MkListOne(MkExpOp(MkExpIdentifier(MkIdentifier("value")), '=', MkExpIdentifier(MkIdentifier("d"))))));
}
else
__eCMethod___eCNameSpace__eC__containers__OldList_Add((&*idGet->__anon1.compound.statements), MkReturnStmt(MkListOne(MkExpIdentifier(MkIdentifier("d")))));
curContext = idSet->__anon1.compound.context = __extension__ ({
struct Context * __eCInstance1 = __eCNameSpace__eC__types__eInstance_New(__eCClass_Context);

__eCInstance1->parent = globalContext, __eCInstance1;
});
__eCMethod___eCNameSpace__eC__containers__OldList_Add((&*idSet->__anon1.compound.declarations), MkDeclarationInst(MkInstantiation(MkSpecifierName(rowClassName), MkExpIdentifier(MkIdentifier("r")), MkListOne(MkMembersInitList(MkListOne(MkMemberInit((((void *)0)), MkInitializerAssignment(MkExpIdentifier(MkIdentifier("this"))))))))));
__eCMethod___eCNameSpace__eC__containers__OldList_Add((&*idSet->__anon1.compound.statements), MkExpressionStmt(MkListOne(MkExpCall(MkExpMember(MkExpIdentifier(MkIdentifier("r")), MkIdentifier("SetData")), args = MkList()))));
__eCMethod___eCNameSpace__eC__containers__OldList_Add((&*args), MkExpIdentifier(MkIdentifier(fieldID)));
__eCMethod___eCNameSpace__eC__containers__OldList_Add((&*args), MkExpIdentifier(MkIdentifier("value")));
__eCMethod___eCNameSpace__eC__containers__OldList_Add((&*idSet->__anon1.compound.statements), MkExpressionStmt(MkListOne(MkExpOp((((void *)0)), DELETE, MkExpIdentifier(MkIdentifier("r"))))));
curContext = globalContext;
def = MkClassDefProperty(MkProperty(CopyList(entry->__anon1.__anon1.dataType->qualifiers, (void *)(CopySpecifier)), CopyDeclarator(entry->__anon1.__anon1.dataType->declarator), CopyIdentifier(entry->id), idSet, idGet));
def->__anon1.propertyDef->__anon1.isDBProp = 1;
def->memberAccess = 1;
__eCMethod___eCNameSpace__eC__containers__OldList_Add((&*idClassDefs), def);
}
break;
}
case 1:
{
if(entry->__anon1.items && (*entry->__anon1.items).count)
{
char indexID[2064];
struct DBIndexItem * item;
int c;
unsigned int needTable = 0;
char num[16];

if(entry->id || indexed)
{
if(entry->id || (*entry->__anon1.items).count == 1)
{
struct External * external;
struct Identifier * id = entry->id ? entry->id : ((struct DBIndexItem *)(*entry->__anon1.items).first)->id;

sprintf(indexID, "__eCDBIndex_%s_%s", tableName, id->string);
external = MkExternalDeclaration(MkDeclaration(MkListOne(MkSpecifierName("Table")), MkListOne(MkInitDeclarator(MkDeclaratorIdentifier(MkIdentifier(indexID)), (((void *)0))))));
__eCMethod___eCNameSpace__eC__containers__OldList_Add((&*ast), external);
external->__anon1.declaration->declMode = table->declMode;
needTable = 1;
}
else
Compiler_Error(__eCNameSpace__eC__i18n__GetTranslatedString("ectp", "Multiple field index requires a name\n", (((void *)0))));
}
else
{
indexed = 1;
strcpy(indexID, tableID);
}
for(c = 0, item = (*entry->__anon1.items).first; item; item = item->next, c++)
{
char fieldID[2064];

sprintf(num, "%d", c);
sprintf(fieldID, "__eCDBField_%s_%s", tableName, item->id->string);
__eCMethod___eCNameSpace__eC__containers__OldList_Add((&*indexStatements), MkExpressionStmt(MkListOne(MkExpOp(MkExpMember(MkExpIndex(MkExpIdentifier(MkIdentifier("indexes")), MkListOne(MkExpConstant(num))), MkIdentifier("field")), '=', MkExpIdentifier(MkIdentifier(fieldID))))));
__eCMethod___eCNameSpace__eC__containers__OldList_Add((&*indexStatements), MkExpressionStmt(MkListOne(MkExpOp(MkExpMember(MkExpIndex(MkExpIdentifier(MkIdentifier("indexes")), MkListOne(MkExpConstant(num))), MkIdentifier("order")), '=', MkExpIdentifier(MkIdentifier((item->order == 0) ? "ascending" : "descending"))))));
}
sprintf(num, "%d", c);
numIndexes = ((numIndexes > c) ? numIndexes : c);
if(needTable)
{
args = MkList();
__eCMethod___eCNameSpace__eC__containers__OldList_Add((&*indexStatements), MkExpressionStmt(MkListOne(MkExpOp(MkExpIdentifier(MkIdentifier(indexID)), '=', MkExpCall(MkExpMember(MkExpIdentifier(MkIdentifier("db")), MkIdentifier("OpenTable")), args)))));
__eCMethod___eCNameSpace__eC__containers__OldList_Add((&*args), MkExpString(table->name));
members = MkList();
__eCMethod___eCNameSpace__eC__containers__OldList_Add((&*args), MkExpInstance(MkInstantiation((((void *)0)), (((void *)0)), MkListOne(MkMembersInitList(members)))));
__eCMethod___eCNameSpace__eC__containers__OldList_Add((&*members), MkMemberInit((((void *)0)), MkInitializerAssignment(MkExpIdentifier(MkIdentifier("tableRows")))));
}
args = MkList();
__eCMethod___eCNameSpace__eC__containers__OldList_Add((&*indexStatements), MkExpressionStmt(MkListOne(MkExpCall(MkExpMember(MkExpIdentifier(MkIdentifier(indexID)), MkIdentifier("Index")), args))));
__eCMethod___eCNameSpace__eC__containers__OldList_Add((&*args), MkExpConstant(num));
__eCMethod___eCNameSpace__eC__containers__OldList_Add((&*args), MkExpIdentifier(MkIdentifier("indexes")));
}
break;
}
}
}
}
}

static void ProcessInstance(struct Instantiation * inst)
{
if(inst->members)
{
struct MembersInit * init;
struct MemberInit * memberInit;

for(init = (*inst->members).first; init; init = init->next)
{
if(init->type == 0 && init->__anon1.dataMembers)
{
for(memberInit = (*init->__anon1.dataMembers).first; memberInit; memberInit = memberInit->next)
{
ProcessMemberInit(memberInit);
}
}
if(init->type == 1)
{
ProcessClassFunction(init->__anon1.function);
}
}
}
}

static void ProcessExpression(struct Expression * exp)
{
switch(exp->type)
{
case 13:
ProcessExpression(exp->__anon1._new.size);
break;
case 14:
ProcessExpression(exp->__anon1._renew.exp);
ProcessExpression(exp->__anon1._renew.size);
break;
case 2:
break;
case 0:
ProcessIdentifier(exp->__anon1.__anon1.identifier);
break;
case 1:
ProcessInstance(exp->__anon1.instance);
break;
case 3:
break;
case 4:
if(exp->__anon1.op.exp1)
{
ProcessExpression(exp->__anon1.op.exp1);
}
if(exp->__anon1.op.exp2)
{
ProcessExpression(exp->__anon1.op.exp2);
}
break;
case 5:
{
struct Expression * expression;

for(expression = (*exp->__anon1.list).first; expression; expression = expression->next)
{
ProcessExpression(expression);
}
break;
}
case 6:
{
struct Expression * expression;

ProcessExpression(exp->__anon1.index.exp);
for(expression = (*exp->__anon1.index.index).first; expression; expression = expression->next)
{
ProcessExpression(expression);
}
break;
}
case 7:
{
ProcessExpression(exp->__anon1.call.exp);
if(exp->__anon1.call.arguments)
{
struct Expression * expression;

for(expression = (*exp->__anon1.call.arguments).first; expression; expression = expression->next)
{
ProcessExpression(expression);
}
}
break;
}
case 8:
ProcessExpression(exp->__anon1.member.exp);
break;
case 9:
ProcessExpression(exp->__anon1.member.exp);
break;
case 10:
break;
case 11:
ProcessExpression(exp->__anon1.cast.exp);
break;
case 12:
ProcessExpression(exp->__anon1.cond.cond);
{
struct Expression * expression;

for(expression = (*exp->__anon1.cond.exp).first; expression; expression = expression->next)
{
ProcessExpression(expression);
}
}
ProcessExpression(exp->__anon1.cond.elseExp);
break;
case 16:
break;
case 29:
{
char tableName[1024];
char name[2064];
int len = strlen(exp->__anon1.db.table);

memcpy(tableName, exp->__anon1.db.table + 1, len - 2);
tableName[len - 2] = 0;
__eCNameSpace__eC__types__ChangeCh(tableName, ' ', '_');
sprintf(name, "__eCDBField_%s_%s", tableName, exp->__anon1.db.id->string);
FreeExpContents(exp);
exp->type = 0;
exp->__anon1.__anon1.identifier = MkIdentifier(name);
break;
}
case 30:
{
char tableName[1024];
char name[1039];
int len = strlen(exp->__anon1.db.table);

memcpy(tableName, exp->__anon1.db.table + 1, len - 2);
tableName[len - 2] = 0;
__eCNameSpace__eC__types__ChangeCh(tableName, ' ', '_');
sprintf(name, "__eCDBTable_%s", tableName);
FreeExpContents(exp);
exp->type = 0;
exp->__anon1.__anon1.identifier = MkIdentifier(name);
break;
}
case 31:
{
char tableName[1024];
char name[2064];
int len = strlen(exp->__anon1.db.table);

memcpy(tableName, exp->__anon1.db.table + 1, len - 2);
tableName[len - 2] = 0;
__eCNameSpace__eC__types__ChangeCh(tableName, ' ', '_');
sprintf(name, "__eCDBIndex_%s_%s", tableName, exp->__anon1.db.id->string);
FreeExpContents(exp);
exp->type = 0;
exp->__anon1.__anon1.identifier = MkIdentifier(name);
break;
}
case 28:
{
if(tableStatements)
{
struct Statement * databaseOpenStmt = MkCompoundStmt(MkList(), MkList());
struct Statement * compound;
struct Statement * ifDBStmt;
struct __eCNameSpace__eC__containers__OldList * args;
char numIndexesString[16];

databaseOpenStmt->__anon1.compound.context = __extension__ ({
struct Context * __eCInstance1 = __eCNameSpace__eC__types__eInstance_New(__eCClass_Context);

__eCInstance1->parent = curContext, __eCInstance1;
});
__eCMethod___eCNameSpace__eC__containers__OldList_Add((&*databaseOpenStmt->__anon1.compound.declarations), MkDeclaration(MkListOne(MkSpecifierName("Database")), MkListOne(MkInitDeclarator(MkDeclaratorIdentifier(MkIdentifier("db")), (((void *)0))))));
args = MkList();
__eCMethod___eCNameSpace__eC__containers__OldList_Add((&*args), MkSpecifier(STATIC));
__eCMethod___eCNameSpace__eC__containers__OldList_Add((&*args), MkSpecifierName("bool"));
__eCMethod___eCNameSpace__eC__containers__OldList_Add((&*databaseOpenStmt->__anon1.compound.declarations), MkDeclaration(args, MkListOne(MkInitDeclarator(MkDeclaratorIdentifier(MkIdentifier("initialized")), MkInitializerAssignment(MkExpIdentifier(MkIdentifier("false")))))));
__eCMethod___eCNameSpace__eC__containers__OldList_Add((&*databaseOpenStmt->__anon1.compound.statements), MkIfStmt(MkListOne(MkExpIdentifier(MkIdentifier("initialized"))), MkReturnStmt(MkListOne(MkExpConstant("0"))), (((void *)0))));
__eCMethod___eCNameSpace__eC__containers__OldList_Add((&*databaseOpenStmt->__anon1.compound.statements), MkExpressionStmt(MkListOne(MkExpOp(MkExpIdentifier(MkIdentifier("initialized")), '=', MkExpIdentifier(MkIdentifier("true"))))));
args = MkList();
__eCMethod___eCNameSpace__eC__containers__OldList_Add((&*args), CopyExpression(exp->__anon1.dbopen.name));
__eCMethod___eCNameSpace__eC__containers__OldList_Add((&*args), MkExpIdentifier(MkIdentifier("no")));
__eCMethod___eCNameSpace__eC__containers__OldList_Add((&*databaseOpenStmt->__anon1.compound.statements), MkExpressionStmt(MkListOne(MkExpOp(MkExpIdentifier(MkIdentifier("db")), '=', MkExpCall(MkExpMember(CopyExpression(exp->__anon1.dbopen.ds), MkIdentifier("OpenDatabase")), args)))));
__eCMethod___eCNameSpace__eC__containers__OldList_Add((&*databaseOpenStmt->__anon1.compound.statements), MkIfStmt(MkListOne(MkExpOp((((void *)0)), '!', MkExpIdentifier(MkIdentifier("db")))), compound = MkCompoundStmt((((void *)0)), MkList()), (((void *)0))));
compound->__anon1.compound.context = __extension__ ({
struct Context * __eCInstance1 = __eCNameSpace__eC__types__eInstance_New(__eCClass_Context);

__eCInstance1->parent = databaseOpenStmt->__anon1.compound.context, __eCInstance1;
});
args = MkList();
__eCMethod___eCNameSpace__eC__containers__OldList_Add((&*args), exp->__anon1.dbopen.name);
__eCMethod___eCNameSpace__eC__containers__OldList_Add((&*args), MkExpIdentifier(MkIdentifier("create")));
__eCMethod___eCNameSpace__eC__containers__OldList_Add((&*compound->__anon1.compound.statements), MkExpressionStmt(MkListOne(MkExpOp(MkExpIdentifier(MkIdentifier("db")), '=', MkExpCall(MkExpMember(exp->__anon1.dbopen.ds, MkIdentifier("OpenDatabase")), args)))));
exp->__anon1.dbopen.name = (((void *)0));
exp->__anon1.dbopen.ds = (((void *)0));
__eCMethod___eCNameSpace__eC__containers__OldList_Add((&*databaseOpenStmt->__anon1.compound.statements), MkIfStmt(MkListOne(MkExpIdentifier(MkIdentifier("db"))), ifDBStmt = MkCompoundStmt(MkList(), MkList()), (((void *)0))));
ifDBStmt->__anon1.compound.context = __extension__ ({
struct Context * __eCInstance1 = __eCNameSpace__eC__types__eInstance_New(__eCClass_Context);

__eCInstance1->parent = databaseOpenStmt->__anon1.compound.context, __eCInstance1;
});
sprintf(numIndexesString, "%d", numIndexes);
__eCMethod___eCNameSpace__eC__containers__OldList_Add((&*ifDBStmt->__anon1.compound.declarations), MkDeclaration(MkListOne(MkSpecifierName("FieldIndex")), MkListOne(MkInitDeclarator(MkDeclaratorArray(MkDeclaratorIdentifier(MkIdentifier("indexes")), MkExpConstant(numIndexesString)), MkInitializerList(MkListOne(MkInitializerList(MkListOne(MkInitializerAssignment(MkExpIdentifier(MkIdentifier("null")))))))))));
__eCMethod___eCNameSpace__eC__containers__OldList_Add((&*ifDBStmt->__anon1.compound.statements), MkExpressionStmt(MkListOne(MkExpCall(MkExpMember(MkExpIdentifier(MkIdentifier("db")), MkIdentifier("Begin")), MkList()))));
__eCMethod___eCNameSpace__eC__containers__OldList_Add((&*ifDBStmt->__anon1.compound.statements), compound = MkCompoundStmt((((void *)0)), tableStatements));
compound->__anon1.compound.context = __extension__ ({
struct Context * __eCInstance1 = __eCNameSpace__eC__types__eInstance_New(__eCClass_Context);

__eCInstance1->parent = ifDBStmt->__anon1.compound.context, __eCInstance1;
});
__eCMethod___eCNameSpace__eC__containers__OldList_Add((&*ifDBStmt->__anon1.compound.statements), (compound = MkCompoundStmt((((void *)0)), addFieldStatements), compound->__anon1.compound.context = __extension__ ({
struct Context * __eCInstance1 = __eCNameSpace__eC__types__eInstance_New(__eCClass_Context);

__eCInstance1->parent = ifDBStmt->__anon1.compound.context, __eCInstance1;
}), compound));
__eCMethod___eCNameSpace__eC__containers__OldList_Add((&*ifDBStmt->__anon1.compound.statements), compound = MkCompoundStmt((((void *)0)), indexStatements));
compound->__anon1.compound.context = __extension__ ({
struct Context * __eCInstance1 = __eCNameSpace__eC__types__eInstance_New(__eCClass_Context);

__eCInstance1->parent = ifDBStmt->__anon1.compound.context, __eCInstance1;
});
__eCMethod___eCNameSpace__eC__containers__OldList_Add((&*ifDBStmt->__anon1.compound.statements), MkExpressionStmt(MkListOne(MkExpCall(MkExpMember(MkExpIdentifier(MkIdentifier("db")), MkIdentifier("Commit")), MkList()))));
exp->type = 23;
exp->__anon1.compound = databaseOpenStmt;
__eCMethod___eCNameSpace__eC__containers__OldList_Add((&*databaseOpenStmt->__anon1.compound.statements), MkExpressionStmt(MkListOne(MkExpIdentifier(MkIdentifier("db")))));
tableStatements = (((void *)0));
}
else
{
FreeExpContents(exp);
Compiler_Error(__eCNameSpace__eC__i18n__GetTranslatedString("ectp", "No database table defined in this module or database_open already used.\n", (((void *)0))));
exp->type = 16;
}
break;
}
}
}

static void ProcessClassDef(struct ClassDef *  def);

static void ProcessClass(struct ClassDefinition * _class)
{
if(_class->definitions)
{
struct ClassDef * def;

for(def = (*_class->definitions).first; def; def = def->next)
{
ProcessClassDef(def);
}
}
}

void ProcessDBTableDefinitions();

void __eCRegisterModule_dbpass(struct __eCNameSpace__eC__types__Instance * module)
{
struct __eCNameSpace__eC__types__Class __attribute__((unused)) * class;

__eCNameSpace__eC__types__eSystem_RegisterFunction("ProcessDBTableDefinitions", "void ProcessDBTableDefinitions(void)", ProcessDBTableDefinitions, module, 1);
}

static void ProcessDeclaration(struct Declaration *  decl);

static void ProcessSpecifier(struct Specifier * spec)
{
switch(spec->type)
{
case 2:
case 3:
case 4:
{
if(spec->__anon1.__anon2.definitions)
{
struct ClassDef * def;

for(def = (*spec->__anon1.__anon2.definitions).first; def; def = def->next)
{
switch(def->type)
{
case 2:
ProcessDeclaration(def->__anon1.decl);
break;
case 1:
{
struct MemberInit * init;

for(init = (*def->__anon1.defProperties).first; init; init = init->next)
{
ProcessMemberInit(init);
}
break;
}
case 0:
ProcessClassFunction(def->__anon1.function);
break;
case 3:
if(def->__anon1.propertyDef)
{
ProcessProperty(def->__anon1.propertyDef);
}
break;
case 4:
if(def->__anon1.propertyWatch && def->__anon1.propertyWatch->compound)
{
ProcessStatement(def->__anon1.propertyWatch->compound);
}
break;
case 11:
if(def->__anon1.__anon1.initializer)
ProcessInitializer(def->__anon1.__anon1.initializer);
break;
}
}
}
break;
}
}
}

static void ProcessStatement(struct Statement * stmt)
{
switch(stmt->type)
{
case 0:
ProcessStatement(stmt->__anon1.labeled.stmt);
break;
case 1:
if(stmt->__anon1.caseStmt.exp)
{
ProcessExpression(stmt->__anon1.caseStmt.exp);
}
if(stmt->__anon1.caseStmt.stmt)
{
ProcessStatement(stmt->__anon1.caseStmt.stmt);
}
break;
case 14:
{
ProcessDeclaration(stmt->__anon1.decl);
break;
}
case 2:
{
struct Context * oldContext = curContext;

curContext = stmt->__anon1.compound.context;
if(stmt->__anon1.compound.declarations)
{
struct Declaration * decl;

for(decl = (*stmt->__anon1.compound.declarations).first; decl; decl = decl->next)
{
ProcessDeclaration(decl);
}
}
if(stmt->__anon1.compound.statements)
{
struct Statement * statement;

for(statement = (*stmt->__anon1.compound.statements).first; statement; statement = statement->next)
{
ProcessStatement(statement);
}
}
curContext = oldContext;
break;
}
case 3:
{
if(stmt->__anon1.expressions)
{
struct Expression * exp;

for(exp = (*stmt->__anon1.expressions).first; exp; exp = exp->next)
{
ProcessExpression(exp);
}
}
break;
}
case 4:
{
struct Expression * exp;

for(exp = (*stmt->__anon1.ifStmt.exp).first; exp; exp = exp->next)
{
ProcessExpression(exp);
}
if(stmt->__anon1.ifStmt.stmt)
{
ProcessStatement(stmt->__anon1.ifStmt.stmt);
}
if(stmt->__anon1.ifStmt.elseStmt)
{
ProcessStatement(stmt->__anon1.ifStmt.elseStmt);
}
break;
}
case 5:
{
struct Expression * exp;

for(exp = (*stmt->__anon1.switchStmt.exp).first; exp; exp = exp->next)
{
ProcessExpression(exp);
}
ProcessStatement(stmt->__anon1.switchStmt.stmt);
break;
}
case 6:
{
struct Expression * exp;

if(stmt->__anon1.whileStmt.exp)
{
for(exp = (*stmt->__anon1.whileStmt.exp).first; exp; exp = exp->next)
{
ProcessExpression(exp);
}
}
if(stmt->__anon1.whileStmt.stmt)
ProcessStatement(stmt->__anon1.whileStmt.stmt);
break;
}
case 7:
{
ProcessStatement(stmt->__anon1.doWhile.stmt);
if(stmt->__anon1.doWhile.exp)
{
struct Expression * exp;

for(exp = (*stmt->__anon1.doWhile.exp).first; exp; exp = exp->next)
{
ProcessExpression(exp);
}
}
break;
}
case 8:
{
struct Expression * exp;

if(stmt->__anon1.forStmt.init)
{
ProcessStatement(stmt->__anon1.forStmt.init);
}
if(stmt->__anon1.forStmt.check)
{
ProcessStatement(stmt->__anon1.forStmt.check);
}
if(stmt->__anon1.forStmt.increment)
{
for(exp = (*stmt->__anon1.forStmt.increment).first; exp; exp = exp->next)
{
ProcessExpression(exp);
}
}
if(stmt->__anon1.forStmt.stmt)
ProcessStatement(stmt->__anon1.forStmt.stmt);
break;
}
case 18:
{
struct Expression * exp;

for(exp = stmt->__anon1.forEachStmt.exp ? (*stmt->__anon1.forEachStmt.exp).first : (((void *)0)); exp; exp = exp->next)
ProcessExpression(exp);
for(exp = stmt->__anon1.forEachStmt.filter ? (*stmt->__anon1.forEachStmt.filter).first : (((void *)0)); exp; exp = exp->next)
ProcessExpression(exp);
if(stmt->__anon1.forEachStmt.stmt)
ProcessStatement(stmt->__anon1.forEachStmt.stmt);
break;
}
case 9:
break;
case 10:
break;
case 11:
break;
case 12:
if(stmt->__anon1.expressions)
{
struct Expression * exp;

for(exp = (*stmt->__anon1.expressions).first; exp; exp = exp->next)
{
ProcessExpression(exp);
}
}
break;
case 15:
case 16:
{
struct Identifier * _watch;

if(stmt->__anon1._watch.watcher)
{
ProcessExpression(stmt->__anon1._watch.watcher);
}
if(stmt->__anon1._watch.object)
{
ProcessExpression(stmt->__anon1._watch.object);
}
if(stmt->__anon1._watch.watches)
{
for(_watch = (*stmt->__anon1._watch.watches).first; _watch; _watch = _watch->next)
{
ProcessIdentifier(_watch);
}
}
break;
}
case 17:
{
struct PropertyWatch * _watch;

if(stmt->__anon1._watch.watcher)
{
ProcessExpression(stmt->__anon1._watch.watcher);
}
if(stmt->__anon1._watch.object)
{
ProcessExpression(stmt->__anon1._watch.object);
}
if(stmt->__anon1._watch.watches)
{
for(_watch = (*stmt->__anon1._watch.watches).first; _watch; _watch = _watch->next)
{
if(_watch->compound)
{
ProcessStatement(_watch->compound);
}
}
}
break;
}
}
}

static void ProcessClassDef(struct ClassDef * def)
{
switch(def->type)
{
case 2:
ProcessDeclaration(def->__anon1.decl);
break;
case 1:
{
struct MemberInit * init;

for(init = (*def->__anon1.defProperties).first; init; init = init->next)
{
ProcessMemberInit(init);
}
break;
}
case 11:
if(def->__anon1.__anon1.initializer)
ProcessInitializer(def->__anon1.__anon1.initializer);
break;
case 0:
ProcessClassFunction(def->__anon1.function);
break;
case 3:
if(def->__anon1.propertyDef)
{
ProcessProperty(def->__anon1.propertyDef);
}
break;
case 4:
if(def->__anon1.propertyWatch && def->__anon1.propertyWatch->compound)
{
ProcessStatement(def->__anon1.propertyWatch->compound);
}
break;
}
}

void ProcessDBTableDefinitions()
{
struct External * external;

addAfter = (((void *)0));
curContext = globalContext;
if(inCompiler)
PrePreProcessClassDefinitions();
DeclClass((((void *)0)), "Field");
DeclClass((((void *)0)), "Table");
DeclClass((((void *)0)), "Row");
DeclClass((((void *)0)), "Id");
numIndexes = 0;
if(ast != (((void *)0)))
{
for(external = (*ast).first; external; external = external->next)
{
curExternal = external;
addAfter = external->prev;
switch(external->type)
{
case 5:
ProcessDBTable(external->__anon1.table);
break;
}
}
for(external = (*ast).first; external; external = external->next)
{
curExternal = external;
addAfter = external->prev;
switch(external->type)
{
case 0:
ProcessFunction(external->__anon1.function);
break;
case 1:
ProcessDeclaration(external->__anon1.declaration);
break;
case 2:
ProcessClass(external->__anon1._class);
break;
}
}
}
curContext = globalContext;
}

static void ProcessDeclaration(struct Declaration * decl)
{
switch(decl->type)
{
case 0:
{
struct Specifier * spec;

if(decl->__anon1.__anon1.specifiers)
{
for(spec = (*decl->__anon1.__anon1.specifiers).first; spec; spec = spec->next)
{
ProcessSpecifier(spec);
}
}
break;
}
case 1:
{
if(decl->__anon1.__anon1.specifiers)
{
struct Specifier * s;

for(s = (*decl->__anon1.__anon1.specifiers).first; s; s = s->next)
{
ProcessSpecifier(s);
}
}
if(decl->__anon1.__anon1.declarators && (*decl->__anon1.__anon1.declarators).first)
{
struct InitDeclarator * d;

for(d = (*decl->__anon1.__anon1.declarators).first; d; d = d->next)
{
ProcessInitDeclarator(d);
}
}
break;
}
case 2:
ProcessInstance(decl->__anon1.inst);
break;
}
}

