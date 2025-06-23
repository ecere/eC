/* Code generated from eC source file: output.ec */
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
IDENTIFIER = 258, CONSTANT = 259, STRING_LITERAL = 260, SIZEOF = 261, PTR_OP = 262, INC_OP = 263, DEC_OP = 264, LEFT_OP = 265, RIGHT_OP = 266, LE_OP = 267, GE_OP = 268, EQ_OP = 269, NE_OP = 270, AND_OP = 271, OR_OP = 272, MUL_ASSIGN = 273, DIV_ASSIGN = 274, MOD_ASSIGN = 275, ADD_ASSIGN = 276, SUB_ASSIGN = 277, LEFT_ASSIGN = 278, RIGHT_ASSIGN = 279, AND_ASSIGN = 280, XOR_ASSIGN = 281, OR_ASSIGN = 282, TYPE_NAME = 283, TYPEDEF = 284, EXTERN = 285, STATIC = 286, AUTO = 287, REGISTER = 288, CHAR = 289, SHORT = 290, INT = 291, UINT = 292, INT64 = 293, INT128 = 294, FLOAT128 = 295, FLOAT16 = 296, LONG = 297, SIGNED = 298, UNSIGNED = 299, FLOAT = 300, DOUBLE = 301, CONST = 302, VOLATILE = 303, VOID = 304, VALIST = 305, STRUCT = 306, UNION = 307, ENUM = 308, ELLIPSIS = 309, CASE = 310, DEFAULT = 311, IF = 312, SWITCH = 313, WHILE = 314, DO = 315, FOR = 316, GOTO = 317, CONTINUE = 318, BREAK = 319, RETURN = 320, IFX = 321, ELSE = 322, CLASS = 323, THISCLASS = 324, PROPERTY = 325, SETPROP = 326, GETPROP = 327, NEWOP = 328, RENEW = 329, DELETE = 330, EXT_DECL = 331, EXT_STORAGE = 332, IMPORT = 333, DEFINE = 334, VIRTUAL = 335, ATTRIB = 336, PUBLIC = 337, PRIVATE = 338, TYPED_OBJECT = 339, ANY_OBJECT = 340, _INCREF = 341, EXTENSION = 342, ASM = 343, TYPEOF = 344, WATCH = 345, STOPWATCHING = 346, FIREWATCHERS = 347, WATCHABLE = 348, CLASS_DESIGNER = 349, CLASS_NO_EXPANSION = 350, CLASS_FIXED = 351, ISPROPSET = 352, CLASS_DEFAULT_PROPERTY = 353, PROPERTY_CATEGORY = 354, CLASS_DATA = 355, CLASS_PROPERTY = 356, SUBCLASS = 357, NAMESPACE = 358, NEW0OP = 359, RENEW0 = 360, VAARG = 361, DBTABLE = 362, DBFIELD = 363, DBINDEX = 364, DATABASE_OPEN = 365, ALIGNOF = 366, ATTRIB_DEP = 367, __ATTRIB = 368, BOOL = 369, _BOOL = 370, _COMPLEX = 371, _IMAGINARY = 372, RESTRICT = 373, THREAD = 374, WIDE_STRING_LITERAL = 375, BUILTIN_OFFSETOF = 376, PRAGMA = 377, STATIC_ASSERT = 378, _ALIGNAS = 379
};

int yyparse(void);

int outputLine;

unsigned int memoryGuard = 0;

extern unsigned int inBGen;

extern unsigned int inCompiler;

extern unsigned int outputLineNumbers;

extern const char *  sourceFile;

extern const char *  outputFile;

extern const char *  (*  bgenSymbolSwap)(const char *  symbol, unsigned int reduce, unsigned int macro);

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

struct Context;

struct PropertyDef;

struct PropertyWatch;

struct TemplateArgument;

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

extern char *  strstr(const char * , const char * );

extern int strcmp(const char * , const char * );

extern char *  strcpy(char * , const char * );

extern char *  GetIncludeFileFromID(int id);

extern char *  strchr(const char * , int);

extern char *  __eCNameSpace__eC__types__StripLastDirectory(const char *  string, char *  output);

extern char *  __eCNameSpace__eC__types__PathCat(char *  string, const char *  addedPath);

extern void __eCNameSpace__eC__types__ChangeCh(char *  string, char ch1, char ch2);

struct ModuleImport;

struct ClassImport;

struct __eCNameSpace__eC__containers__LinkList
{
void * first;
void * last;
int count;
} eC_gcc_struct;

extern char *  __eCNameSpace__eC__types__TrimRSpaces(const char *  string, char *  output);

struct __eCNameSpace__eC__types__GlobalFunction;

void SetMemoryGuard(unsigned int b)
{
memoryGuard = b;
}

unsigned int GetMemoryGuard()
{
return memoryGuard;
}

extern struct __eCNameSpace__eC__containers__OldList *  MkList(void);

extern struct __eCNameSpace__eC__containers__OldList *  CopyList(struct __eCNameSpace__eC__containers__OldList *  source, void *  (*  CopyFunction)(void * ));

extern void ListAdd(struct __eCNameSpace__eC__containers__OldList * list, void *  item);

struct Location
{
struct CodePosition start;
struct CodePosition end;
} eC_gcc_struct;

static inline const char * strptrNoNamespace(const char * str)
{
const char * t, * s = str;

while((t = strstr(s, "::")))
s = t + 2;
return s;
}

char * GetOperatorString(char s[10], int op)
{
switch(op)
{
case INC_OP:
strcpy(s, "++");
break;
case DEC_OP:
strcpy(s, "--");
break;
case SIZEOF:
strcpy(s, "sizeof ");
break;
case LEFT_OP:
strcpy(s, "<<");
break;
case RIGHT_OP:
strcpy(s, ">>");
break;
case LE_OP:
strcpy(s, "<=");
break;
case GE_OP:
strcpy(s, ">=");
break;
case EQ_OP:
strcpy(s, "==");
break;
case NE_OP:
strcpy(s, "!=");
break;
case AND_OP:
strcpy(s, "&&");
break;
case OR_OP:
strcpy(s, "||");
break;
case MUL_ASSIGN:
strcpy(s, "*=");
break;
case DIV_ASSIGN:
strcpy(s, "/=");
break;
case MOD_ASSIGN:
strcpy(s, "%=");
break;
case ADD_ASSIGN:
strcpy(s, "+=");
break;
case SUB_ASSIGN:
strcpy(s, "-=");
break;
case LEFT_ASSIGN:
strcpy(s, "<<=");
break;
case RIGHT_ASSIGN:
strcpy(s, ">>=");
break;
case AND_ASSIGN:
strcpy(s, "&=");
break;
case XOR_ASSIGN:
strcpy(s, "^=");
break;
case OR_ASSIGN:
strcpy(s, "|=");
break;
case '&':
case '*':
case '+':
case '-':
case '~':
case '!':
case '/':
case '%':
case '<':
case '>':
case '|':
case '^':
case '=':
s[0] = (char)op;
s[1] = 0;
break;
case DELETE:
strcpy(s, "delete ");
break;
default:
s[0] = 0;
}
return s;
}

static void GetSourceName(char * name, const char * src)
{
name[0] = 0;
if(src)
{
if(!strchr(src, '/') && !strchr(src, '\\'))
__eCNameSpace__eC__types__StripLastDirectory(sourceFile, name);
__eCNameSpace__eC__types__PathCat(name, src);
}
else if(sourceFile)
__eCNameSpace__eC__types__PathCat(name, sourceFile);
__eCNameSpace__eC__types__ChangeCh(name, '\\', '/');
}

extern struct Location yylloc;

struct Expression;

extern void ProcessExpressionType(struct Expression * exp);

extern void ComputeExpression(struct Expression * exp);

struct FunctionDefinition;

static struct FunctionDefinition * curFunction;

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

extern int __eCVMethodID___eCNameSpace__eC__files__File_Puts;

int __eCMethod___eCNameSpace__eC__files__File_Printf(struct __eCNameSpace__eC__types__Instance * this, const char *  format, ...);

extern int __eCVMethodID___eCNameSpace__eC__files__File_GetSize;

extern int __eCVMethodID___eCNameSpace__eC__files__File_Seek;

extern int __eCVMethodID___eCNameSpace__eC__files__File_Read;

extern void __eCNameSpace__eC__types__eInstance_DecRef(struct __eCNameSpace__eC__types__Instance * instance);

struct Identifier;

extern struct Identifier * MkIdentifier(const char *  string);

struct Specifier;

extern struct Specifier * CopySpecifier(struct Specifier * spec);

extern struct Specifier * MkSpecifierName(const char *  name);

struct Declarator;

extern struct Declarator * SpecDeclFromString(const char *  string, struct __eCNameSpace__eC__containers__OldList *  specs, struct Declarator * baseDecl);

extern struct Declarator * MkDeclaratorIdentifier(struct Identifier * id);

struct TemplateDatatype
{
struct __eCNameSpace__eC__containers__OldList *  specifiers;
struct Declarator * decl;
} eC_gcc_struct;

extern struct Declarator * PlugDeclarator(struct Declarator * decl, struct Declarator * baseDecl);

extern struct Identifier * GetDeclId(struct Declarator * decl);

struct Type;

extern void PrintType(struct Type * type, char *  string, unsigned int printName, unsigned int fullName);

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

extern void InstDeclPassTypeName(struct TypeName * type, unsigned int param);

extern void FreeTypeName(struct TypeName * typeName);

struct Symbol;

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

extern struct Symbol * FindClass(const char *  name);

struct __eCNameSpace__eC__containers__BinaryTree;

struct __eCNameSpace__eC__containers__BinaryTree
{
struct __eCNameSpace__eC__containers__BTNode * root;
int count;
int (*  CompareKey)(struct __eCNameSpace__eC__containers__BinaryTree * tree, uintptr_t a, uintptr_t b);
void (*  FreeKey)(void *  key);
} eC_gcc_struct;

struct Pointer;

struct Pointer
{
struct Pointer * prev;
struct Pointer * next;
struct Location loc;
struct __eCNameSpace__eC__containers__OldList *  qualifiers;
struct Pointer * pointer;
} eC_gcc_struct;

struct Attrib;

struct Attrib
{
struct Attrib * prev;
struct Attrib * next;
struct Location loc;
int type;
struct __eCNameSpace__eC__containers__OldList *  attribs;
} eC_gcc_struct;

struct ExtDecl
{
struct Location loc;
int type;
union
{
char * s;
struct Attrib * attr;
struct __eCNameSpace__eC__containers__OldList *  multiAttr;
} eC_gcc_struct __anon1;
} eC_gcc_struct;

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

struct MemberInit;

struct MembersInit;

struct Attribute;

struct Attribute
{
struct Attribute * prev;
struct Attribute * next;
struct Location loc;
char * attr;
struct Expression * exp;
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

struct __eCNameSpace__eC__types__Module;

extern struct __eCNameSpace__eC__types__GlobalFunction * __eCNameSpace__eC__types__eSystem_RegisterFunction(const char *  name, const char *  type, void *  func, struct __eCNameSpace__eC__types__Instance * module, int declMode);

struct AsmField;

struct AsmField
{
struct AsmField * prev;
struct AsmField * next;
struct Location loc;
char *  command;
struct Expression * expression;
struct Identifier * symbolic;
} eC_gcc_struct;

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

struct ClassDef;

struct Initializer;

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

struct Statement;

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

struct Instantiation;

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

extern struct __eCNameSpace__eC__types__Class * __eCClass_TypeName;

extern struct __eCNameSpace__eC__types__Class * __eCClass___eCNameSpace__eC__files__TempFile;

extern struct __eCNameSpace__eC__types__Class * __eCClass___eCNameSpace__eC__files__File;

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

static void OutputIdentifier(struct Identifier * id, struct __eCNameSpace__eC__types__Instance * f)
{
if(id)
{
if(id->_class)
{
if(id->_class->type == 8)
{
if(id->_class->__anon1.templateParameter && id->_class->__anon1.templateParameter->identifier && id->_class->__anon1.templateParameter->identifier->string)
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, id->_class->__anon1.templateParameter->identifier->string) : (unsigned int)1;
}));
}
else
{
if(id->_class->__anon1.__anon1.name)
{
if(!strcmp(id->_class->__anon1.__anon1.name, "class"))
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, "typed_object") : (unsigned int)1;
}));
else if(inBGen)
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, strptrNoNamespace(id->_class->__anon1.__anon1.name)) : (unsigned int)1;
}));
else
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, id->_class->__anon1.__anon1.name) : (unsigned int)1;
}));
}
}
if(inBGen)
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, "_") : (unsigned int)1;
}));
else
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, "::") : (unsigned int)1;
}));
}
}
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, (id && id->string) ? id->string : "(null identifier)") : (unsigned int)1;
}));
}

void __eCUnregisterModule_output(struct __eCNameSpace__eC__types__Instance * module)
{

}

struct ClassFunction;

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

struct InitDeclarator;

struct InitDeclarator
{
struct InitDeclarator * prev;
struct InitDeclarator * next;
struct Location loc;
struct Declarator * declarator;
struct Initializer * initializer;
} eC_gcc_struct;

struct External;

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

static void OutputSpecifier(struct Specifier *  spec, struct __eCNameSpace__eC__types__Instance *  f, unsigned int typeName);

static void OutputPointer(struct Pointer * ptr, struct __eCNameSpace__eC__types__Instance * f)
{
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, "*") : (unsigned int)1;
}));
if(ptr->qualifiers)
{
struct Specifier * spec;

(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, " ") : (unsigned int)1;
}));
for(spec = (*ptr->qualifiers).first; spec; spec = spec->next)
{
OutputSpecifier(spec, f, 0);
if(spec->next)
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, " ") : (unsigned int)1;
}));
}
}
if(ptr->pointer)
{
OutputPointer(ptr->pointer, f);
}
}

void OutputExpression(struct Expression *  exp, struct __eCNameSpace__eC__types__Instance *  f);

static void OutputAsmField(struct AsmField * field, struct __eCNameSpace__eC__types__Instance * f)
{
if(field->symbolic)
{
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, "[") : (unsigned int)1;
}));
OutputIdentifier(field->symbolic, f);
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, "]") : (unsigned int)1;
}));
}
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, field->command) : (unsigned int)1;
}));
if(field->expression)
{
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, "(") : (unsigned int)1;
}));
OutputExpression(field->expression, f);
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, ")") : (unsigned int)1;
}));
}
}

static void OutputAttribute(struct Attribute * attr, struct __eCNameSpace__eC__types__Instance * f)
{
if(attr->attr)
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, attr->attr) : (unsigned int)1;
}));
if(attr->exp)
{
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, " ") : (unsigned int)1;
}));
OutputExpression(attr->exp, f);
}
}

static void OutputInitializer(struct Initializer * initializer, struct __eCNameSpace__eC__types__Instance * f)
{
char name[274] = "";
char origName[274] = "";

if(inCompiler)
{
GetSourceName(name, initializer->loc.start.included ? GetIncludeFileFromID(initializer->loc.start.included) : (((void *)0)));
__eCNameSpace__eC__types__PathCat(origName, outputFile);
__eCNameSpace__eC__types__ChangeCh(origName, '\\', '/');
}
if(initializer->type == 1)
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, "\n") : (unsigned int)1;
}));
if(initializer->id)
{
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, ".") : (unsigned int)1;
}));
OutputIdentifier(initializer->id, f);
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, " =") : (unsigned int)1;
}));
}
switch(initializer->type)
{
case 1:
{
struct Initializer * init;

if(initializer->id)
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, " ") : (unsigned int)1;
}));
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, "{\n") : (unsigned int)1;
}));
outputLine += 2;
if(inCompiler && outputLineNumbers && initializer->loc.start.line)
{
__eCMethod___eCNameSpace__eC__files__File_Printf(f, "\n#line %d \"%s\"\n", initializer->loc.start.line, name);
outputLine += 2;
}
for(init = (*initializer->__anon1.list).first; init; init = init->next)
{
OutputInitializer(init, f);
if(init->next)
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, init->next->type == 1 ? "," : ", ") : (unsigned int)1;
}));
}
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, "\n}") : (unsigned int)1;
}));
if(inCompiler && outputLineNumbers && initializer->loc.start.line)
{
__eCMethod___eCNameSpace__eC__files__File_Printf(f, "\n#line %d \"%s\"\n", initializer->loc.start.line, name);
outputLine += 2;
}
outputLine++;
break;
}
case 0:
if(initializer->id)
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, " ") : (unsigned int)1;
}));
if(initializer->__anon1.exp)
OutputExpression(initializer->__anon1.exp, f);
break;
}
}

static void OutputAttrib(struct Attrib * attr, struct __eCNameSpace__eC__types__Instance * f)
{
switch(attr->type)
{
case ATTRIB:
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, "__attribute__((") : (unsigned int)1;
}));
break;
case __ATTRIB:
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, "__attribute((") : (unsigned int)1;
}));
break;
case ATTRIB_DEP:
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, "__attribute_deprecated__((") : (unsigned int)1;
}));
break;
}
if(attr->attribs)
{
struct Attribute * attrib;

for(attrib = (*attr->attribs).first; attrib; attrib = attrib->next)
{
if(attrib->prev)
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, ", ") : (unsigned int)1;
}));
OutputAttribute(attrib, f);
}
}
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, "))") : (unsigned int)1;
}));
}

static void OutputMemberInit(struct MemberInit * init, struct __eCNameSpace__eC__types__Instance * f)
{
if(init->identifiers)
{
if((*init->identifiers).count > 1)
{
struct Identifier * id;

for(id = (*init->identifiers).first; id; id = id->next)
{
OutputIdentifier(id, f);
if(id->next)
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, ".") : (unsigned int)1;
}));
}
}
else if((*init->identifiers).first)
OutputIdentifier((*init->identifiers).first, f);
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, " =") : (unsigned int)1;
}));
if(init->initializer && init->initializer->type == 0)
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, " ") : (unsigned int)1;
}));
}
if(init->initializer)
OutputInitializer(init->initializer, f);
}

static void OutputEnumerator(struct Enumerator * enumerator, struct __eCNameSpace__eC__types__Instance * f)
{
OutputIdentifier(enumerator->id, f);
if(enumerator->attribs)
{
struct Attrib * a;

for(a = (*enumerator->attribs).first; a; a = a->next)
{
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, " ") : (unsigned int)1;
}));
OutputAttrib(a, f);
}
}
if(enumerator->exp)
{
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, " = ") : (unsigned int)1;
}));
OutputExpression(enumerator->exp, f);
}
}

void OutputExtDecl(struct ExtDecl * extDecl, struct __eCNameSpace__eC__types__Instance * f)
{
if(extDecl->type == 0 && extDecl->__anon1.s)
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, extDecl->__anon1.s) : (unsigned int)1;
}));
else if(extDecl->type == 1)
OutputAttrib(extDecl->__anon1.attr, f);
else if(extDecl->type == 2 && extDecl->__anon1.multiAttr)
{
struct Attrib * a;

for(a = (*extDecl->__anon1.multiAttr).first; a; a = a->next)
OutputAttrib(a, f);
}
}

void OutputTypeName(struct TypeName *  type, struct __eCNameSpace__eC__types__Instance *  f, unsigned int typeName);

static void OutputDeclarator(struct Declarator * decl, struct __eCNameSpace__eC__types__Instance * f)
{
switch(decl->type)
{
case 0:
if(decl->declarator)
{
OutputDeclarator(decl->declarator, f);
}
if(decl->__anon1.structDecl.exp)
{
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, " : ") : (unsigned int)1;
}));
OutputExpression(decl->__anon1.structDecl.exp, f);
}
if(decl->__anon1.structDecl.posExp)
{
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, " : ") : (unsigned int)1;
}));
OutputExpression(decl->__anon1.structDecl.posExp, f);
}
if(decl->__anon1.structDecl.attrib)
{
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, " ") : (unsigned int)1;
}));
OutputAttrib(decl->__anon1.structDecl.attrib, f);
}
break;
case 1:
OutputIdentifier(decl->__anon1.identifier, f);
break;
case 2:
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, "(") : (unsigned int)1;
}));
OutputDeclarator(decl->declarator, f);
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, ")") : (unsigned int)1;
}));
break;
case 6:
if(decl->__anon1.extended.extended)
OutputExtDecl(decl->__anon1.extended.extended, f);
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, " ") : (unsigned int)1;
}));
OutputDeclarator(decl->declarator, f);
break;
case 7:
OutputDeclarator(decl->declarator, f);
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, " ") : (unsigned int)1;
}));
if(decl->__anon1.extended.extended)
OutputExtDecl(decl->__anon1.extended.extended, f);
break;
case 3:
if(decl->declarator)
{
OutputDeclarator(decl->declarator, f);
}
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, "[") : (unsigned int)1;
}));
if(decl->__anon1.array.exp)
{
ProcessExpressionType(decl->__anon1.array.exp);
ComputeExpression(decl->__anon1.array.exp);
OutputExpression(decl->__anon1.array.exp, f);
}
else if(decl->__anon1.array.enumClass)
{
struct Symbol * _class = decl->__anon1.array.enumClass->__anon1.__anon1.symbol;

if(_class && _class->__anon1.registered)
{
__eCMethod___eCNameSpace__eC__files__File_Printf(f, "%d", (int)__eCNameSpace__eC__types__eClass_GetProperty(_class->__anon1.registered, "enumSize"));
}
}
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, "]") : (unsigned int)1;
}));
break;
case 4:
{
struct TypeName * param;

if(decl->declarator)
OutputDeclarator(decl->declarator, f);
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, "(") : (unsigned int)1;
}));
if(decl->__anon1.function.parameters && (*decl->__anon1.function.parameters).first)
{
for(param = (*decl->__anon1.function.parameters).first; param; param = param->next)
{
OutputTypeName(param, f, 0);
if(param->next)
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, ", ") : (unsigned int)1;
}));
}
}
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, ")") : (unsigned int)1;
}));
break;
}
case 5:
if(decl->__anon1.pointer.pointer)
OutputPointer(decl->__anon1.pointer.pointer, f);
if(decl->declarator)
{
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, " ") : (unsigned int)1;
}));
OutputDeclarator(decl->declarator, f);
}
break;
}
}

char * StringFromSpecDecl(struct __eCNameSpace__eC__containers__OldList * specs, struct Declarator * decl)
{
char * string;
struct TypeName * typeName = __eCNameSpace__eC__types__eInstance_New(__eCClass_TypeName);
struct __eCNameSpace__eC__types__Instance * f = __eCNameSpace__eC__types__eInstance_New(__eCClass___eCNameSpace__eC__files__TempFile);
uint64 size;

typeName->qualifiers = specs;
typeName->declarator = decl;
OutputTypeName(typeName, f, 1);
((typeName ? __extension__ ({
void * __eCPtrToDelete = (typeName);

__eCClass_TypeName->Destructor ? __eCClass_TypeName->Destructor((void *)__eCPtrToDelete) : 0, __eCNameSpace__eC__types__eSystem_Delete(__eCPtrToDelete);
}) : 0), typeName = 0);
size = (__extension__ ({
uint64 (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *);

__internal_VirtualMethod = ((uint64 (*)(struct __eCNameSpace__eC__types__Instance *))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_GetSize]);
__internal_VirtualMethod ? __internal_VirtualMethod(f) : (uint64)1;
}));
string = __eCNameSpace__eC__types__eSystem_New(sizeof(char) * (size + 1));
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, long long pos, int mode);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, long long pos, int mode))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Seek]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, 0, 0) : (unsigned int)1;
}));
(__extension__ ({
size_t (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, void *  buffer, size_t size, size_t count);

__internal_VirtualMethod = ((size_t (*)(struct __eCNameSpace__eC__types__Instance *, void *  buffer, size_t size, size_t count))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Read]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, string, 1, size) : (size_t)1;
}));
string[size] = '\0';
__eCNameSpace__eC__types__TrimRSpaces(string, string);
(__eCNameSpace__eC__types__eInstance_DecRef(f), f = 0);
return string;
}

void OutputTypeName(struct TypeName * type, struct __eCNameSpace__eC__types__Instance * f, unsigned int typeName)
{
if(type->qualifiers)
{
struct Specifier * spec;

for(spec = (*type->qualifiers).first; spec; spec = spec->next)
{
OutputSpecifier(spec, f, typeName);
if(spec->next)
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, " ") : (unsigned int)1;
}));
}
}
if(type->declarator)
{
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, " ") : (unsigned int)1;
}));
OutputDeclarator(type->declarator, f);
}
if(!type->qualifiers && !type->declarator)
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, "...") : (unsigned int)1;
}));
}

static void OutputInitDeclarator(struct InitDeclarator * decl, struct __eCNameSpace__eC__types__Instance * f)
{
OutputDeclarator(decl->declarator, f);
if(decl->initializer)
{
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, " =") : (unsigned int)1;
}));
if(decl->initializer->type == 0)
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, " ") : (unsigned int)1;
}));
OutputInitializer(decl->initializer, f);
}
}

void OutputExternal(struct External *  external, struct __eCNameSpace__eC__types__Instance *  f);

void OutputTree(struct __eCNameSpace__eC__containers__OldList * ast, struct __eCNameSpace__eC__types__Instance * f)
{
struct External * external;

outputLine = 50;
for(external = ast->first; external; external = external->next)
OutputExternal(external, f);
}

void __eCRegisterModule_output(struct __eCNameSpace__eC__types__Instance * module)
{
struct __eCNameSpace__eC__types__Class __attribute__((unused)) * class;

__eCNameSpace__eC__types__eSystem_RegisterFunction("SetMemoryGuard", "void SetMemoryGuard(bool b)", SetMemoryGuard, module, 1);
__eCNameSpace__eC__types__eSystem_RegisterFunction("GetMemoryGuard", "bool GetMemoryGuard(void)", GetMemoryGuard, module, 1);
__eCNameSpace__eC__types__eSystem_RegisterFunction("GetOperatorString", "char * GetOperatorString(char s[10], int op)", GetOperatorString, module, 2);
__eCNameSpace__eC__types__eSystem_RegisterFunction("OutputTypeName", "void OutputTypeName(TypeName type, eC::files::File f, bool typeName)", OutputTypeName, module, 1);
__eCNameSpace__eC__types__eSystem_RegisterFunction("OutputExpression", "void OutputExpression(Expression exp, eC::files::File f)", OutputExpression, module, 1);
__eCNameSpace__eC__types__eSystem_RegisterFunction("OutputExtDecl", "void OutputExtDecl(ExtDecl extDecl, eC::files::File f)", OutputExtDecl, module, 2);
__eCNameSpace__eC__types__eSystem_RegisterFunction("OutputTree", "void OutputTree(eC::containers::OldList ast, eC::files::File f)", OutputTree, module, 1);
__eCNameSpace__eC__types__eSystem_RegisterFunction("OutputExternal", "void OutputExternal(External external, eC::files::File f)", OutputExternal, module, 1);
__eCNameSpace__eC__types__eSystem_RegisterFunction("StringFromSpecDecl", "char * StringFromSpecDecl(eC::containers::OldList specs, Declarator decl)", StringFromSpecDecl, module, 1);
}

static void OutputFunction(struct FunctionDefinition *  func, struct __eCNameSpace__eC__types__Instance *  f);

static void OutputClassDef(struct ClassDef *  def, struct __eCNameSpace__eC__types__Instance *  f);

static void OutputSpecifier(struct Specifier * spec, struct __eCNameSpace__eC__types__Instance * f, unsigned int typeName)
{
switch(spec->type)
{
case 0:
switch(spec->__anon1.specifier)
{
case TYPEDEF:
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, "typedef") : (unsigned int)1;
}));
break;
case EXTERN:
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, "extern") : (unsigned int)1;
}));
break;
case STATIC:
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, "static") : (unsigned int)1;
}));
break;
case AUTO:
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, "auto") : (unsigned int)1;
}));
break;
case REGISTER:
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, "register") : (unsigned int)1;
}));
break;
case THREAD:
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, "__thread") : (unsigned int)1;
}));
break;
case CONST:
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, "const") : (unsigned int)1;
}));
break;
case VOLATILE:
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, "volatile") : (unsigned int)1;
}));
break;
case VOID:
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, "void") : (unsigned int)1;
}));
break;
case CHAR:
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, "char") : (unsigned int)1;
}));
break;
case _BOOL:
case BOOL:
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, "_Bool") : (unsigned int)1;
}));
break;
case _COMPLEX:
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, "_Complex") : (unsigned int)1;
}));
break;
case _IMAGINARY:
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, "_Imaginary") : (unsigned int)1;
}));
break;
case RESTRICT:
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, "restrict") : (unsigned int)1;
}));
break;
case SHORT:
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, "short") : (unsigned int)1;
}));
break;
case INT:
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, "int") : (unsigned int)1;
}));
break;
case UINT:
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, typeName ? "uint" : "unsigned int") : (unsigned int)1;
}));
break;
case INT64:
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, typeName ? "int64" : "long long") : (unsigned int)1;
}));
break;
case INT128:
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, "__int128") : (unsigned int)1;
}));
break;
case FLOAT128:
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, "__float128") : (unsigned int)1;
}));
break;
case FLOAT16:
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, "_Float16") : (unsigned int)1;
}));
break;
case VALIST:
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, "__builtin_va_list") : (unsigned int)1;
}));
break;
case LONG:
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, "long") : (unsigned int)1;
}));
break;
case FLOAT:
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, "float") : (unsigned int)1;
}));
break;
case DOUBLE:
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, "double") : (unsigned int)1;
}));
break;
case SIGNED:
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, "signed") : (unsigned int)1;
}));
break;
case UNSIGNED:
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, "unsigned") : (unsigned int)1;
}));
break;
case TYPED_OBJECT:
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, "typed_object") : (unsigned int)1;
}));
break;
case ANY_OBJECT:
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, "any_object") : (unsigned int)1;
}));
break;
case CLASS:
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, "class") : (unsigned int)1;
}));
break;
case THISCLASS:
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, "thisclass") : (unsigned int)1;
}));
break;
}
break;
case 5:
if(spec->__anon1.__anon1.extDecl)
OutputExtDecl(spec->__anon1.__anon1.extDecl, f);
break;
case 1:
if(spec->__anon1.__anon1.name && !strcmp(spec->__anon1.__anon1.name, "class"))
{
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, "typed_object") : (unsigned int)1;
}));
}
else
{
struct Symbol * symbol = spec->__anon1.__anon1.symbol;

if(!symbol && spec->__anon1.__anon1.name)
symbol = FindClass(spec->__anon1.__anon1.name);
if(symbol)
{
if(inBGen && bgenSymbolSwap && symbol->string)
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, bgenSymbolSwap(symbol->string, 0, 1)) : (unsigned int)1;
}));
else
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, symbol->string ? symbol->string : "(null)") : (unsigned int)1;
}));
}
else if(spec->__anon1.__anon1.name)
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, spec->__anon1.__anon1.name) : (unsigned int)1;
}));
}
break;
case 2:
{
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, "enum") : (unsigned int)1;
}));
if(spec->__anon1.__anon2.id)
{
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, " ") : (unsigned int)1;
}));
OutputIdentifier(spec->__anon1.__anon2.id, f);
}
if(spec->__anon1.__anon2.list)
{
struct Enumerator * enumerator;

(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, "\n{\n") : (unsigned int)1;
}));
outputLine += 2;
for(enumerator = (*spec->__anon1.__anon2.list).first; enumerator; enumerator = enumerator->next)
{
OutputEnumerator(enumerator, f);
if(enumerator->next)
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, ", ") : (unsigned int)1;
}));
}
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, "\n}") : (unsigned int)1;
}));
outputLine++;
}
break;
}
case 3:
case 4:
{
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, (spec->type == 3) ? "struct" : "union") : (unsigned int)1;
}));
if(spec->__anon1.__anon2.extDeclStruct)
{
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, " ") : (unsigned int)1;
}));
OutputExtDecl(spec->__anon1.__anon2.extDeclStruct, f);
}
if(spec->__anon1.__anon2.id)
{
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, " ") : (unsigned int)1;
}));
OutputIdentifier(spec->__anon1.__anon2.id, f);
}
if(spec->__anon1.__anon2.definitions)
{
struct ClassDef * def;

(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, "\n{\n") : (unsigned int)1;
}));
outputLine += 2;
for(def = (*spec->__anon1.__anon2.definitions).first; def; def = def->next)
{
OutputClassDef(def, f);
}
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, "} eC_gcc_struct") : (unsigned int)1;
}));
}
break;
}
case 6:
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, "__typeof(") : (unsigned int)1;
}));
OutputExpression(spec->__anon1.expression, f);
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, ")") : (unsigned int)1;
}));
break;
case 7:
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, "subclass(") : (unsigned int)1;
}));
OutputSpecifier(spec->__anon1._class, f, 0);
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, ")") : (unsigned int)1;
}));
break;
case 8:
OutputIdentifier(spec->__anon1.templateParameter->identifier, f);
break;
}
}

static void OutputClass(struct ClassDefinition * _class, struct __eCNameSpace__eC__types__Instance * f)
{
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, "class ") : (unsigned int)1;
}));
OutputSpecifier(_class->_class, f, 0);
if(_class->baseSpecs)
{
struct Specifier * spec;

(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, " : ") : (unsigned int)1;
}));
for(spec = (*_class->baseSpecs).first; spec; spec = spec->next)
{
OutputSpecifier(spec, f, 0);
}
}
if(_class->definitions)
{
struct ClassDef * def;

(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, "\n{\n") : (unsigned int)1;
}));
outputLine += 2;
for(def = (*_class->definitions).first; def; def = def->next)
{
OutputClassDef(def, f);
}
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, "}\n") : (unsigned int)1;
}));
outputLine++;
}
else
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, ";") : (unsigned int)1;
}));
}

static void OutputMembersInit(struct MembersInit *  init, struct __eCNameSpace__eC__types__Instance *  f);

static void OutputInstance(struct Instantiation * inst, struct __eCNameSpace__eC__types__Instance * f)
{
if(inst->_class)
OutputSpecifier(inst->_class, f, 0);
if(inst->exp)
{
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, " ") : (unsigned int)1;
}));
OutputExpression(inst->exp, f);
}
if(inst->members && (*inst->members).count > 1)
{
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, "\n{\n") : (unsigned int)1;
}));
outputLine += 2;
}
else if(inst->members)
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, " { ") : (unsigned int)1;
}));
else
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, "{") : (unsigned int)1;
}));
if(inst->members)
{
struct MembersInit * init;

for(init = (*inst->members).first; init; init = init->next)
{
OutputMembersInit(init, f);
if(init->type == 0 && init->next)
{
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, ";\n") : (unsigned int)1;
}));
outputLine++;
}
}
}
if(inst->members)
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, " }") : (unsigned int)1;
}));
else
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, "}") : (unsigned int)1;
}));
}

static void OutputDeclaration(struct Declaration * decl, struct __eCNameSpace__eC__types__Instance * f)
{
struct Specifier * spec;
char origName[274];
char name[274];

if(inCompiler)
{
strcpy(origName, outputFile);
__eCNameSpace__eC__types__ChangeCh(origName, '\\', '/');
}
GetSourceName(name, decl->loc.start.included ? GetIncludeFileFromID(decl->loc.start.included) : (((void *)0)));
if(inCompiler && outputLineNumbers && decl->loc.start.line)
{
__eCMethod___eCNameSpace__eC__files__File_Printf(f, "\n#line %d \"%s\"\n", decl->loc.start.line, name);
outputLine += 2;
}
switch(decl->type)
{
case 1:
{
struct InitDeclarator * d;

if(decl->__anon1.__anon1.specifiers)
{
unsigned int inTypeDef = 0;

for(spec = (*decl->__anon1.__anon1.specifiers).first; spec; spec = spec->next)
{
if(spec->type == 0 && spec->__anon1.specifier == TYPEDEF)
inTypeDef = 1;
OutputSpecifier(spec, f, inTypeDef && !spec->next);
if(spec->next)
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, " ") : (unsigned int)1;
}));
}
}
if(decl->__anon1.__anon1.declarators && (*decl->__anon1.__anon1.declarators).first)
{
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, " ") : (unsigned int)1;
}));
for(d = (*decl->__anon1.__anon1.declarators).first; d; d = d->next)
{
OutputInitDeclarator(d, f);
if(d->next)
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, ", ") : (unsigned int)1;
}));
}
}
break;
}
case 0:
{
if(decl->__anon1.__anon1.specifiers)
{
for(spec = (*decl->__anon1.__anon1.specifiers).first; spec; spec = spec->next)
{
OutputSpecifier(spec, f, 0);
if(spec->next)
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, " ") : (unsigned int)1;
}));
}
}
if(decl->__anon1.__anon1.declarators)
{
struct Declarator * d;

(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, " ") : (unsigned int)1;
}));
for(d = (*decl->__anon1.__anon1.declarators).first; d; d = d->next)
{
OutputDeclarator(d, f);
if(d->next)
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, ", ") : (unsigned int)1;
}));
}
}
if(decl->extStorage)
{
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, " ") : (unsigned int)1;
}));
OutputSpecifier(decl->extStorage, f, 0);
}
break;
}
case 2:
if(decl->__anon1.inst)
{
OutputInstance(decl->__anon1.inst, f);
}
break;
case 4:
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, "\n#") : (unsigned int)1;
}));
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, decl->pragma) : (unsigned int)1;
}));
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, "\n") : (unsigned int)1;
}));
return ;
case 3:
return ;
}
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, ";\n") : (unsigned int)1;
}));
outputLine++;
if(inCompiler && outputLineNumbers && decl->loc.start.line)
{
__eCMethod___eCNameSpace__eC__files__File_Printf(f, "\n#line %d \"%s\"\n", outputLine + 2, origName);
outputLine += 2;
}
}

static void OutputStatement(struct Statement * stmt, struct __eCNameSpace__eC__types__Instance * f)
{
char name[274] = "";
char origName[274] = "";

if(inCompiler)
{
GetSourceName(name, stmt->loc.start.included ? GetIncludeFileFromID(stmt->loc.start.included) : (((void *)0)));
__eCNameSpace__eC__types__PathCat(origName, outputFile);
__eCNameSpace__eC__types__ChangeCh(origName, '\\', '/');
}
if(inCompiler && outputLineNumbers && stmt->loc.start.line)
{
__eCMethod___eCNameSpace__eC__files__File_Printf(f, "\n#line %d \"%s\"\n", stmt->loc.start.line, name);
outputLine += 2;
}
switch(stmt->type)
{
case 14:
OutputDeclaration(stmt->__anon1.decl, f);
break;
case 0:
OutputIdentifier(stmt->__anon1.labeled.id, f);
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, ":\n") : (unsigned int)1;
}));
outputLine++;
if(stmt->__anon1.labeled.stmt)
{
if(stmt->__anon1.labeled.stmt->type == 14)
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, "; ") : (unsigned int)1;
}));
OutputStatement(stmt->__anon1.labeled.stmt, f);
}
break;
case 1:
if(stmt->__anon1.caseStmt.exp)
{
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, "case ") : (unsigned int)1;
}));
OutputExpression(stmt->__anon1.caseStmt.exp, f);
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, ":\n") : (unsigned int)1;
}));
outputLine++;
}
else
{
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, "default:\n") : (unsigned int)1;
}));
outputLine++;
}
if(stmt->__anon1.caseStmt.stmt)
{
if(stmt->__anon1.caseStmt.stmt->type == 14)
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, "; ") : (unsigned int)1;
}));
OutputStatement(stmt->__anon1.caseStmt.stmt, f);
}
break;
case 2:
{
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, "{\n") : (unsigned int)1;
}));
outputLine++;
if(stmt->__anon1.compound.declarations)
{
struct Declaration * decl;

for(decl = (*stmt->__anon1.compound.declarations).first; decl; decl = decl->next)
{
OutputDeclaration(decl, f);
}
}
if(stmt->__anon1.compound.statements)
{
struct Statement * statement;

if(stmt->__anon1.compound.declarations)
{
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, "\n") : (unsigned int)1;
}));
outputLine++;
}
for(statement = (*stmt->__anon1.compound.statements).first; statement; statement = statement->next)
{
OutputStatement(statement, f);
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, "\n") : (unsigned int)1;
}));
outputLine++;
}
}
if(inCompiler && outputLineNumbers && stmt->loc.end.line)
{
__eCMethod___eCNameSpace__eC__files__File_Printf(f, "\n#line %d \"%s\"\n", stmt->loc.end.line, name);
outputLine += 2;
}
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, "}") : (unsigned int)1;
}));
break;
}
case 3:
{
if(stmt->__anon1.expressions)
{
struct Expression * exp;

for(exp = (*stmt->__anon1.expressions).first; exp; exp = exp->next)
{
OutputExpression(exp, f);
if(exp->next)
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, ", ") : (unsigned int)1;
}));
}
}
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, ";") : (unsigned int)1;
}));
break;
}
case 4:
{
struct Expression * exp;

(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, "if(") : (unsigned int)1;
}));
for(exp = (*stmt->__anon1.ifStmt.exp).first; exp; exp = exp->next)
{
OutputExpression(exp, f);
if(exp->next)
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, ", ") : (unsigned int)1;
}));
}
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, ")\n") : (unsigned int)1;
}));
outputLine++;
if(stmt->__anon1.ifStmt.stmt)
OutputStatement(stmt->__anon1.ifStmt.stmt, f);
if(stmt->__anon1.ifStmt.elseStmt)
{
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, "\n") : (unsigned int)1;
}));
outputLine++;
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, "else") : (unsigned int)1;
}));
if(stmt->__anon1.ifStmt.elseStmt->type != 4)
{
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, "\n") : (unsigned int)1;
}));
outputLine++;
}
else
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, " ") : (unsigned int)1;
}));
OutputStatement(stmt->__anon1.ifStmt.elseStmt, f);
}
break;
}
case 5:
{
struct Expression * exp;

(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, "switch(") : (unsigned int)1;
}));
if(stmt->__anon1.switchStmt.exp)
{
for(exp = (*stmt->__anon1.switchStmt.exp).first; exp; exp = exp->next)
{
OutputExpression(exp, f);
if(exp->next)
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, ", ") : (unsigned int)1;
}));
}
}
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, ")\n") : (unsigned int)1;
}));
outputLine++;
OutputStatement(stmt->__anon1.switchStmt.stmt, f);
break;
}
case 6:
{
struct Expression * exp;

(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, "while(") : (unsigned int)1;
}));
if(stmt->__anon1.switchStmt.exp)
{
for(exp = (*stmt->__anon1.switchStmt.exp).first; exp; exp = exp->next)
{
OutputExpression(exp, f);
if(exp->next)
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, ", ") : (unsigned int)1;
}));
}
}
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, ")\n") : (unsigned int)1;
}));
outputLine++;
OutputStatement(stmt->__anon1.whileStmt.stmt, f);
break;
}
case 7:
{
struct Expression * exp;

(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, "do\n") : (unsigned int)1;
}));
outputLine++;
OutputStatement(stmt->__anon1.whileStmt.stmt, f);
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, "while(") : (unsigned int)1;
}));
for(exp = (*stmt->__anon1.switchStmt.exp).first; exp; exp = exp->next)
{
OutputExpression(exp, f);
if(exp->next)
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, ", ") : (unsigned int)1;
}));
}
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, ");") : (unsigned int)1;
}));
break;
}
case 8:
{
struct Expression * exp;

(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, "for(") : (unsigned int)1;
}));
OutputStatement(stmt->__anon1.forStmt.init, f);
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, " ") : (unsigned int)1;
}));
OutputStatement(stmt->__anon1.forStmt.check, f);
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, " ") : (unsigned int)1;
}));
if(stmt->__anon1.forStmt.increment)
{
if(inCompiler && outputLineNumbers && stmt->loc.end.line)
{
__eCMethod___eCNameSpace__eC__files__File_Printf(f, "\n#line %d \"%s\"\n", stmt->loc.end.line, name);
outputLine += 2;
}
for(exp = (*stmt->__anon1.forStmt.increment).first; exp; exp = exp->next)
{
OutputExpression(exp, f);
if(exp->next)
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, ", ") : (unsigned int)1;
}));
}
}
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, ")\n") : (unsigned int)1;
}));
outputLine++;
OutputStatement(stmt->__anon1.forStmt.stmt, f);
break;
}
case 9:
{
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, "goto ") : (unsigned int)1;
}));
OutputIdentifier(stmt->__anon1.gotoStmt.id, f);
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, ";") : (unsigned int)1;
}));
break;
}
case 10:
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, "continue;") : (unsigned int)1;
}));
break;
case 11:
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, "break;") : (unsigned int)1;
}));
break;
case 12:
{
struct Expression * exp;

if(inCompiler && memoryGuard)
{
struct Expression * exp = stmt->__anon1.expressions ? (*stmt->__anon1.expressions).last : (((void *)0));
struct Type * returnType = exp ? (exp->destType ? exp->destType : exp->expType) : (((void *)0));

__eCMethod___eCNameSpace__eC__files__File_Printf(f, "{ ");
if(returnType && returnType->kind != 0)
{
char string[1024] = "";
struct __eCNameSpace__eC__containers__OldList * specs = MkList();
struct Declarator * decl;
struct TypeName * typeName;

if(returnType->kind == 20)
{
if(returnType->__anon1.templateParameter->dataTypeString)
decl = SpecDeclFromString(returnType->__anon1.templateParameter->dataTypeString, specs, MkDeclaratorIdentifier(MkIdentifier("__eCReturnVal")));
else if(returnType->__anon1.templateParameter->__anon1.dataType)
{
(__eCNameSpace__eC__types__eSystem_Delete(specs), specs = 0);
specs = CopyList(returnType->__anon1.templateParameter->__anon1.dataType->specifiers, (void *)(CopySpecifier));
decl = PlugDeclarator(returnType->__anon1.templateParameter->__anon1.dataType->decl, MkDeclaratorIdentifier(MkIdentifier("__eCReturnVal")));
}
else
{
ListAdd(specs, MkSpecifierName("uint64"));
decl = MkDeclaratorIdentifier(MkIdentifier("__eCReturnVal"));
}
}
else
{
if(returnType->passAsTemplate)
strcpy(string, "uint64");
else
PrintType(returnType, string, returnType->kind == 18 ? 1 : 0, 1);
decl = SpecDeclFromString(string, specs, MkDeclaratorIdentifier(MkIdentifier("__eCReturnVal")));
}
typeName = MkTypeName(specs, decl);
InstDeclPassTypeName(typeName, 0);
OutputTypeName(typeName, f, 0);
__eCMethod___eCNameSpace__eC__files__File_Printf(f, ";");
FreeTypeName(typeName);
}
}
if(!memoryGuard)
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, "return ") : (unsigned int)1;
}));
else
{
struct Expression * exp = stmt->__anon1.expressions ? (*stmt->__anon1.expressions).last : (((void *)0));

if(exp && exp->expType && exp->expType->kind != 0)
__eCMethod___eCNameSpace__eC__files__File_Printf(f, "__eCReturnVal = ");
}
if(stmt->__anon1.expressions)
{
for(exp = (*stmt->__anon1.expressions).first; exp; exp = exp->next)
{
OutputExpression(exp, f);
if(exp->next)
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, ", ") : (unsigned int)1;
}));
}
}
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, ";") : (unsigned int)1;
}));
if(inCompiler && memoryGuard)
{
struct Expression * exp = stmt->__anon1.expressions ? (struct Expression *)(*stmt->__anon1.expressions).last : (((void *)0));

__eCMethod___eCNameSpace__eC__files__File_Printf(f, " __eCNameSpace__eC__types__MemoryGuard_PopLoc();");
if(exp && exp->expType && exp->expType->kind != 0)
__eCMethod___eCNameSpace__eC__files__File_Printf(f, "return __eCReturnVal;");
else
__eCMethod___eCNameSpace__eC__files__File_Printf(f, "return;");
__eCMethod___eCNameSpace__eC__files__File_Printf(f, "}");
}
break;
}
case 13:
{
struct AsmField * field;

(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, "__asm__ ") : (unsigned int)1;
}));
if(stmt->__anon1.asmStmt.spec)
OutputSpecifier(stmt->__anon1.asmStmt.spec, f, 0);
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, "(") : (unsigned int)1;
}));
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, stmt->__anon1.asmStmt.statements) : (unsigned int)1;
}));
if(stmt->__anon1.asmStmt.inputFields || stmt->__anon1.asmStmt.outputFields || stmt->__anon1.asmStmt.clobberedFields)
{
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, ":") : (unsigned int)1;
}));
if(stmt->__anon1.asmStmt.inputFields)
{
for(field = (*stmt->__anon1.asmStmt.inputFields).first; field; field = field->next)
{
if(field->prev)
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, ",") : (unsigned int)1;
}));
OutputAsmField(field, f);
}
}
}
if(stmt->__anon1.asmStmt.outputFields || stmt->__anon1.asmStmt.clobberedFields)
{
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, ":") : (unsigned int)1;
}));
if(stmt->__anon1.asmStmt.outputFields)
{
for(field = (*stmt->__anon1.asmStmt.outputFields).first; field; field = field->next)
{
if(field->prev)
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, ",") : (unsigned int)1;
}));
OutputAsmField(field, f);
}
}
}
if(stmt->__anon1.asmStmt.clobberedFields)
{
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, ":") : (unsigned int)1;
}));
for(field = (*stmt->__anon1.asmStmt.clobberedFields).first; field; field = field->next)
{
if(field->prev)
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, ",") : (unsigned int)1;
}));
OutputAsmField(field, f);
}
}
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, ");\n") : (unsigned int)1;
}));
outputLine++;
break;
}
}
if(inCompiler && outputLineNumbers && stmt->loc.start.line)
{
__eCMethod___eCNameSpace__eC__files__File_Printf(f, "\n#line %d \"%s\"\n", outputLine + 2, origName);
outputLine += 2;
}
}

void OutputExternal(struct External * external, struct __eCNameSpace__eC__types__Instance * f)
{
switch(external->type)
{
case 0:
OutputFunction(external->__anon1.function, f);
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, "\n") : (unsigned int)1;
}));
outputLine++;
break;
case 1:
if(external->__anon1.declaration)
OutputDeclaration(external->__anon1.declaration, f);
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, "\n") : (unsigned int)1;
}));
outputLine++;
break;
case 2:
OutputClass(external->__anon1._class, f);
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, "\n") : (unsigned int)1;
}));
outputLine++;
break;
case 6:
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, "#") : (unsigned int)1;
}));
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, external->__anon1.pragma) : (unsigned int)1;
}));
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, "\n") : (unsigned int)1;
}));
outputLine++;
break;
}
}

void OutputExpression(struct Expression * exp, struct __eCNameSpace__eC__types__Instance * f)
{
switch(exp->type)
{
case 24:
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, "class(") : (unsigned int)1;
}));
if(exp->__anon1._classExp.specifiers)
{
struct Specifier * spec;

for(spec = (*exp->__anon1._classExp.specifiers).first; spec; spec = spec->next)
{
OutputSpecifier(spec, f, 0);
if(spec->next)
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, " ") : (unsigned int)1;
}));
}
if(exp->__anon1._classExp.decl)
{
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, " ") : (unsigned int)1;
}));
OutputDeclarator(exp->__anon1._classExp.decl, f);
}
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, ")") : (unsigned int)1;
}));
}
break;
case 23:
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, "__extension__ (") : (unsigned int)1;
}));
OutputStatement(exp->__anon1.compound, f);
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, ")") : (unsigned int)1;
}));
if(inCompiler && outputLineNumbers && exp->loc.end.line)
{
char name[274] = "";

GetSourceName(name, exp->loc.end.included ? GetIncludeFileFromID(exp->loc.end.included) : (((void *)0)));
__eCMethod___eCNameSpace__eC__files__File_Printf(f, "\n#line %d \"%s\"\n", exp->loc.end.line, name);
outputLine += 2;
}
break;
case 13:
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, "new ") : (unsigned int)1;
}));
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, " ") : (unsigned int)1;
}));
OutputTypeName(exp->__anon1._renew.typeName, f, 0);
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, "[") : (unsigned int)1;
}));
OutputExpression(exp->__anon1._renew.size, f);
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, "]") : (unsigned int)1;
}));
break;
case 26:
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, "new0 ") : (unsigned int)1;
}));
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, " ") : (unsigned int)1;
}));
OutputTypeName(exp->__anon1._renew.typeName, f, 0);
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, "[") : (unsigned int)1;
}));
OutputExpression(exp->__anon1._renew.size, f);
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, "]") : (unsigned int)1;
}));
break;
case 14:
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, "renew ") : (unsigned int)1;
}));
OutputExpression(exp->__anon1._renew.exp, f);
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, " ") : (unsigned int)1;
}));
OutputTypeName(exp->__anon1._renew.typeName, f, 0);
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, "[") : (unsigned int)1;
}));
OutputExpression(exp->__anon1._renew.size, f);
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, "]") : (unsigned int)1;
}));
break;
case 27:
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, "renew0 ") : (unsigned int)1;
}));
OutputExpression(exp->__anon1._renew.exp, f);
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, " ") : (unsigned int)1;
}));
OutputTypeName(exp->__anon1._renew.typeName, f, 0);
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, "[") : (unsigned int)1;
}));
OutputExpression(exp->__anon1._renew.size, f);
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, "]") : (unsigned int)1;
}));
break;
case 0:
if(exp->__anon1.__anon1.identifier)
OutputIdentifier(exp->__anon1.__anon1.identifier, f);
break;
case 1:
if(exp->__anon1.instance)
OutputInstance(exp->__anon1.instance, f);
break;
case 2:
if(exp->__anon1.__anon1.constant)
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, exp->__anon1.__anon1.constant) : (unsigned int)1;
}));
break;
case 3:
if(exp->__anon1.__anon2.string)
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, exp->__anon1.__anon2.string) : (unsigned int)1;
}));
break;
case 4:
if(exp->__anon1.op.exp1)
{
OutputExpression(exp->__anon1.op.exp1, f);
if(exp->__anon1.op.exp2)
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, " ") : (unsigned int)1;
}));
}
{
char s[10];

(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, GetOperatorString(s, exp->__anon1.op.op)) : (unsigned int)1;
}));
}
if(exp->__anon1.op.exp2)
{
if(exp->__anon1.op.exp1 || (exp->__anon1.op.exp2->type == 4 && !exp->__anon1.op.exp2->__anon1.op.exp1 && exp->__anon1.op.exp2->__anon1.op.op == exp->__anon1.op.op))
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, " ") : (unsigned int)1;
}));
OutputExpression(exp->__anon1.op.exp2, f);
}
break;
case 32:
case 5:
{
struct Expression * expression;

if(exp->type == 32)
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, "__extension__ ") : (unsigned int)1;
}));
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, "(") : (unsigned int)1;
}));
if(exp->__anon1.list)
{
for(expression = (*exp->__anon1.list).first; expression; expression = expression->next)
{
OutputExpression(expression, f);
if(expression->next)
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, ", ") : (unsigned int)1;
}));
}
}
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, ")") : (unsigned int)1;
}));
break;
}
case 6:
{
struct Expression * expression;

if(exp->__anon1.index.exp)
OutputExpression(exp->__anon1.index.exp, f);
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, "[") : (unsigned int)1;
}));
if(exp->__anon1.index.index)
for(expression = (*exp->__anon1.index.index).first; expression; expression = expression->next)
{
OutputExpression(expression, f);
if(expression->next)
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, ", ") : (unsigned int)1;
}));
}
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, "]") : (unsigned int)1;
}));
break;
}
case 7:
{
OutputExpression(exp->__anon1.call.exp, f);
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, "(") : (unsigned int)1;
}));
if(exp->__anon1.call.arguments)
{
struct Expression * expression;

for(expression = (*exp->__anon1.call.arguments).first; expression; expression = expression->next)
{
OutputExpression(expression, f);
if(expression->next)
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, ", ") : (unsigned int)1;
}));
}
}
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, ")") : (unsigned int)1;
}));
break;
}
case 8:
if(exp->__anon1.member.exp)
OutputExpression(exp->__anon1.member.exp, f);
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, ".") : (unsigned int)1;
}));
if(exp->__anon1.member.member)
OutputIdentifier(exp->__anon1.member.member, f);
break;
case 9:
OutputExpression(exp->__anon1.member.exp, f);
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, "->") : (unsigned int)1;
}));
OutputIdentifier(exp->__anon1.member.member, f);
break;
case 10:
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, "sizeof(") : (unsigned int)1;
}));
OutputTypeName(exp->__anon1.typeName, f, 0);
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, ")") : (unsigned int)1;
}));
break;
case 36:
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, "__alignof__(") : (unsigned int)1;
}));
OutputTypeName(exp->__anon1.typeName, f, 0);
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, ")") : (unsigned int)1;
}));
break;
case 40:
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, "__builtin_offsetof(") : (unsigned int)1;
}));
if(exp->__anon1.typeName)
OutputTypeName(exp->__anon1.typeName, f, 0);
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, ", ") : (unsigned int)1;
}));
if(exp->__anon1.__anon1.identifier)
OutputIdentifier(exp->__anon1.__anon1.identifier, f);
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, ")") : (unsigned int)1;
}));
break;
case 33:
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, "__extension__ (") : (unsigned int)1;
}));
if(exp->__anon1.initializer.typeName)
OutputTypeName(exp->__anon1.initializer.typeName, f, 0);
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, ")") : (unsigned int)1;
}));
if(exp->__anon1.initializer.initializer)
OutputInitializer(exp->__anon1.initializer.initializer, f);
break;
case 11:
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, "(") : (unsigned int)1;
}));
OutputTypeName(exp->__anon1.cast.typeName, f, 0);
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, ")") : (unsigned int)1;
}));
if(exp->__anon1.cast.exp)
OutputExpression(exp->__anon1.cast.exp, f);
break;
case 12:
OutputExpression(exp->__anon1.cond.cond, f);
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, " ? ") : (unsigned int)1;
}));
{
struct Expression * expression;

for(expression = (*exp->__anon1.cond.exp).first; expression; expression = expression->next)
{
OutputExpression(expression, f);
if(expression->next)
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, ", ") : (unsigned int)1;
}));
}
}
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, " : ") : (unsigned int)1;
}));
if(exp->__anon1.cond.elseExp)
OutputExpression(exp->__anon1.cond.elseExp, f);
break;
case 34:
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, "__builtin_va_arg(") : (unsigned int)1;
}));
OutputExpression(exp->__anon1.vaArg.exp, f);
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, ", ") : (unsigned int)1;
}));
OutputTypeName(exp->__anon1.vaArg.typeName, f, 0);
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, ")") : (unsigned int)1;
}));
break;
case 35:
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, "[") : (unsigned int)1;
}));
if(exp->__anon1.list)
{
struct Expression * expression;

for(expression = (*exp->__anon1.list).first; expression; expression = expression->next)
{
OutputExpression(expression, f);
if(expression->next)
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, ", ") : (unsigned int)1;
}));
}
}
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, "]") : (unsigned int)1;
}));
break;
}
}

static void OutputFunction(struct FunctionDefinition * func, struct __eCNameSpace__eC__types__Instance * f)
{
struct FunctionDefinition * oldFunc = curFunction;

curFunction = func;
if(func->specifiers)
{
struct Specifier * spec;

for(spec = (*func->specifiers).first; spec; spec = spec->next)
{
OutputSpecifier(spec, f, 0);
if(spec->next)
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, " ") : (unsigned int)1;
}));
}
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, " ") : (unsigned int)1;
}));
}
if(func->declarator)
OutputDeclarator(func->declarator, f);
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, "\n") : (unsigned int)1;
}));
outputLine++;
if(func->declarations)
{
struct Declaration * decl;

for(decl = (*func->declarations).first; decl; decl = decl->next)
{
OutputDeclaration(decl, f);
}
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, "\n") : (unsigned int)1;
}));
outputLine++;
}
if(func->body)
{
if(inCompiler && memoryGuard)
{
char name[1024] = "";
struct Identifier * id = GetDeclId(func->declarator);

GetSourceName(name, func->loc.start.included ? GetIncludeFileFromID(func->loc.start.included) : (((void *)0)));
__eCMethod___eCNameSpace__eC__files__File_Printf(f, "{\n");
__eCMethod___eCNameSpace__eC__files__File_Printf(f, "   __eCNameSpace__eC__types__MemoryGuard_PushLoc(\"%s:%s\");\n", name, id->string);
outputLine += 2;
}
OutputStatement(func->body, f);
if(inCompiler && memoryGuard)
{
__eCMethod___eCNameSpace__eC__files__File_Printf(f, "   __eCNameSpace__eC__types__MemoryGuard_PopLoc();\n");
__eCMethod___eCNameSpace__eC__files__File_Printf(f, "}\n");
outputLine += 2;
}
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, "\n") : (unsigned int)1;
}));
outputLine++;
}
curFunction = oldFunc;
}

static void OutputClassFunction(struct ClassFunction * func, struct __eCNameSpace__eC__types__Instance * f)
{
if(func->specifiers)
{
struct Specifier * spec;

for(spec = (*func->specifiers).first; spec; spec = spec->next)
{
OutputSpecifier(spec, f, 0);
if(spec->next)
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, " ") : (unsigned int)1;
}));
}
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, " ") : (unsigned int)1;
}));
}
if(func->declarator)
OutputDeclarator(func->declarator, f);
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, "\n") : (unsigned int)1;
}));
outputLine++;
if(func->declarations)
{
struct Declaration * decl;

for(decl = (*func->declarations).first; decl; decl = decl->next)
{
OutputDeclaration(decl, f);
}
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, "\n") : (unsigned int)1;
}));
outputLine++;
}
if(func->body)
{
OutputStatement(func->body, f);
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, "\n") : (unsigned int)1;
}));
outputLine++;
}
else
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, ";") : (unsigned int)1;
}));
}

static void OutputMembersInit(struct MembersInit * init, struct __eCNameSpace__eC__types__Instance * f)
{
switch(init->type)
{
case 0:
{
struct MemberInit * member;

if(init->__anon1.dataMembers)
{
for(member = (*init->__anon1.dataMembers).first; member; member = member->next)
{
OutputMemberInit(member, f);
if(member->next)
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, ", ") : (unsigned int)1;
}));
}
}
break;
}
case 1:
OutputClassFunction(init->__anon1.function, f);
break;
}
}

static void OutputClassDef(struct ClassDef * def, struct __eCNameSpace__eC__types__Instance * f)
{
switch(def->type)
{
case 2:
if(def->__anon1.decl)
{
OutputDeclaration(def->__anon1.decl, f);
if(def->next && def->next->type != 2)
{
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, "\n") : (unsigned int)1;
}));
outputLine++;
}
}
break;
case 1:
{
struct MemberInit * init;

for(init = (*def->__anon1.defProperties).first; init; init = init->next)
{
OutputMemberInit(init, f);
if(init->next)
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, ", ") : (unsigned int)1;
}));
}
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, ";\n\n") : (unsigned int)1;
}));
outputLine += 2;
break;
}
case 0:
OutputClassFunction(def->__anon1.function, f);
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, const char *  string);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, const char *  string))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Puts]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, "\n") : (unsigned int)1;
}));
outputLine++;
break;
}
}

