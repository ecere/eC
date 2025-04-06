/* Code generated from eC source file: pass0.ec */
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

extern unsigned int inCompiler;

extern int declMode;

extern int structDeclMode;

extern const char *  sourceFile;

extern struct __eCNameSpace__eC__types__Property * __eCProp_Type_isPointerType;

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

struct Pointer;

struct InitDeclarator;

struct AsmField;

struct Attrib;

struct ExtDecl;

struct Attribute;

struct PropertyWatch;

struct TemplateParameter;

struct TemplateArgument;

struct TemplateDatatype;

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

extern char *  strcat(char * , const char * );

extern size_t strlen(const char * );

extern int strncmp(const char * , const char * , size_t n);

struct ModuleImport;

struct ClassImport;

extern void Compiler_Error(const char *  format, ...);

extern const char *  __eCNameSpace__eC__i18n__GetTranslatedString(const char * name, const char *  string, const char *  stringAndContext);

struct __eCNameSpace__eC__containers__LinkList
{
void * first;
void * last;
int count;
} eC_gcc_struct;

extern char *  __eCNameSpace__eC__types__CopyString(const char *  string);

extern char *  strcpy(char * , const char * );

struct __eCNameSpace__eC__containers__LinkElement
{
void * prev;
void * next;
} eC_gcc_struct;

extern char *  strstr(const char * , const char * );

extern void Compiler_Warning(const char *  format, ...);

extern int sprintf(char * , const char * , ...);

struct __eCNameSpace__eC__types__GlobalFunction;

struct __eCNameSpace__eC__containers__IteratorPointer;

extern struct __eCNameSpace__eC__containers__OldList *  MkList(void);

extern void ListAdd(struct __eCNameSpace__eC__containers__OldList * list, void *  item);

extern void FreeList(struct __eCNameSpace__eC__containers__OldList * list, void (*  FreeFunction)(void * ));

extern struct __eCNameSpace__eC__containers__OldList *  MkListOne(void *  item);

extern struct __eCNameSpace__eC__containers__OldList *  ast;

extern struct __eCNameSpace__eC__containers__OldList *  excludedSymbols;

extern struct __eCNameSpace__eC__containers__OldList *  CopyList(struct __eCNameSpace__eC__containers__OldList *  source, void *  (*  CopyFunction)(void * ));

unsigned int __eCMethod___eCNameSpace__eC__containers__OldList_Insert(struct __eCNameSpace__eC__containers__OldList * this, void *  prevItem, void *  item);

void __eCMethod___eCNameSpace__eC__containers__OldList_Remove(struct __eCNameSpace__eC__containers__OldList * this, void *  item);

void __eCMethod___eCNameSpace__eC__containers__OldList_Add(struct __eCNameSpace__eC__containers__OldList * this, void *  item);

void __eCMethod___eCNameSpace__eC__containers__OldList_Clear(struct __eCNameSpace__eC__containers__OldList * this);

extern struct Pointer * MkPointer(struct __eCNameSpace__eC__containers__OldList * qualifiers, struct Pointer * pointer);

extern void FreeInitDeclarator(struct InitDeclarator * decl);

extern struct Attrib * MkAttrib(int type, struct __eCNameSpace__eC__containers__OldList *  attribs);

extern struct ExtDecl * MkExtDeclAttrib(struct Attrib * attr);

struct Location
{
struct CodePosition start;
struct CodePosition end;
} eC_gcc_struct;

void FullClassNameCat(char * output, const char * className, unsigned int includeTemplateParams)
{
int c;
char ch;
int len;

for(c = 0; (ch = className[c]) && ch != '<'; c++)
{
if(ch == ':')
{
strcat(output, "__eCNameSpace__");
break;
}
}
len = strlen(output);
c = 0;
if(!strncmp(className, "const ", 6))
c += 6;
for(; (ch = className[c]); c++)
{
if(ch == ':')
output[len++] = '_';
else if(ch == ' ')
output[len++] = '_';
else if(ch == '*')
{
output[len++] = '_';
output[len++] = 'P';
output[len++] = 'T';
output[len++] = 'R';
output[len++] = '_';
}
else if(ch == '=')
{
output[len++] = '_';
output[len++] = 'E';
output[len++] = 'Q';
output[len++] = 'U';
output[len++] = '_';
}
else if(ch == '<')
{
if(!includeTemplateParams)
break;
if(!strncmp(className + c + 1, "const ", 6))
c += 6;
output[len++] = '_';
output[len++] = 'T';
output[len++] = 'P';
output[len++] = 'L';
output[len++] = '_';
}
else if(ch == '>')
{
output[len++] = '_';
}
else if(ch == ',')
{
if(!strncmp(className + c + 1, "const ", 6))
c += 6;
output[len++] = '_';
}
else
output[len++] = ch;
}
output[len++] = 0;
}

extern struct Location yylloc;

struct External;

extern struct External * curExternal;

struct TopoEdge
{
struct __eCNameSpace__eC__containers__LinkElement in;
struct __eCNameSpace__eC__containers__LinkElement out;
struct External * from;
struct External * to;
unsigned int breakable;
} eC_gcc_struct;

extern void FreeExternal(struct External * external);

extern struct External * DeclareStruct(struct External * neededBy, const char *  name, unsigned int skipNoHead, unsigned int needDereference);

struct Context;

extern struct Context * PushContext(void);

extern void PopContext(struct Context * ctx);

extern struct Context * curContext;

struct __eCNameSpace__eC__types__Class;

struct __eCNameSpace__eC__types__Instance
{
void * *  _vTbl;
struct __eCNameSpace__eC__types__Class * _class;
int _refCount;
} eC_gcc_struct;

extern long long __eCNameSpace__eC__types__eClass_GetProperty(struct __eCNameSpace__eC__types__Class * _class, const char *  name);

extern void __eCNameSpace__eC__types__eClass_SetProperty(struct __eCNameSpace__eC__types__Class * _class, const char *  name, long long value);

extern int AddMembers(struct External * neededBy, struct __eCNameSpace__eC__containers__OldList *  declarations, struct __eCNameSpace__eC__types__Class * _class, unsigned int isMember, unsigned int *  retSize, struct __eCNameSpace__eC__types__Class * topClass, unsigned int *  addedPadding);

extern void *  __eCNameSpace__eC__types__eInstance_New(struct __eCNameSpace__eC__types__Class * _class);

extern void __eCNameSpace__eC__types__eInstance_SetMethod(struct __eCNameSpace__eC__types__Instance * instance, const char *  name, void *  function);

extern void __eCNameSpace__eC__types__eInstance_IncRef(struct __eCNameSpace__eC__types__Instance * instance);

extern int __eCVMethodID___eCNameSpace__eC__containers__Container_GetNext;

struct Declarator;

extern void FreeDeclarator(struct Declarator * decl);

extern struct Declarator * MkDeclaratorPointer(struct Pointer * pointer, struct Declarator * declarator);

extern struct Declarator * MkDeclaratorFunction(struct Declarator * declarator, struct __eCNameSpace__eC__containers__OldList * parameters);

extern struct Declarator * PlugDeclarator(struct Declarator * decl, struct Declarator * baseDecl);

extern struct Declarator * CopyDeclarator(struct Declarator * declarator);

extern struct Declarator * GetFuncDecl(struct Declarator * decl);

struct __eCNameSpace__eC__types__BTNamedLink;

struct __eCNameSpace__eC__types__BTNamedLink
{
const char *  name;
struct __eCNameSpace__eC__types__BTNamedLink * parent;
struct __eCNameSpace__eC__types__BTNamedLink * left;
struct __eCNameSpace__eC__types__BTNamedLink * right;
int depth;
void *  data;
} eC_gcc_struct;

struct Symbol;

extern struct Symbol * FindClass(const char *  name);

struct Declaration;

extern struct External * MkExternalDeclaration(struct Declaration * declaration);

extern struct Declaration * MkDeclaration(struct __eCNameSpace__eC__containers__OldList * specifiers, struct __eCNameSpace__eC__containers__OldList * initDeclarators);

struct Specifier;

extern struct Specifier * MkSpecifierName(const char *  name);

extern struct Declaration * MkStructDeclaration(struct __eCNameSpace__eC__containers__OldList * specifiers, struct __eCNameSpace__eC__containers__OldList * declarators, struct Specifier * extStorage);

extern void FreeSpecifier(struct Specifier * spec);

extern struct Specifier * MkSpecifier(int specifier);

extern struct Specifier * CopySpecifier(struct Specifier * spec);

extern struct Specifier * MkSpecifierExtended(struct ExtDecl * extDecl);

struct Identifier;

extern struct Identifier * GetDeclId(struct Declarator * decl);

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

extern struct Declarator * MkDeclaratorIdentifier(struct Identifier * id);

extern struct Identifier * MkIdentifier(const char *  string);

extern struct Specifier * MkStructOrUnion(int type, struct Identifier * id, struct __eCNameSpace__eC__containers__OldList * definitions);

struct Expression;

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

extern struct Expression * QMkExpId(const char *  id);

extern struct Expression * MkExpOp(struct Expression * exp1, int op, struct Expression * exp2);

extern struct Expression * CopyExpression(struct Expression * exp);

extern struct Expression * MkExpCall(struct Expression * expression, struct __eCNameSpace__eC__containers__OldList * arguments);

extern struct Expression * MkExpIdentifier(struct Identifier * id);

extern struct Expression * MkExpMember(struct Expression * expression, struct Identifier * member);

extern struct Attribute * MkAttribute(char * attr, struct Expression * exp);

struct Type;

extern struct Type * MkClassType(const char *  name);

extern struct Type * ProcessType(struct __eCNameSpace__eC__containers__OldList * specs, struct Declarator * decl);

extern void FreeType(struct Type * type);

struct ClassFunction;

extern struct ClassFunction * MkClassFunction(struct __eCNameSpace__eC__containers__OldList * specifiers, struct Specifier * _class, struct Declarator * decl, struct __eCNameSpace__eC__containers__OldList * declList);

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

extern struct InitDeclarator * MkInitDeclarator(struct Declarator * declarator, struct Initializer * initializer);

extern void FreeInitializer(struct Initializer * initializer);

extern struct Initializer * MkInitializerAssignment(struct Expression * exp);

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

extern struct __eCNameSpace__eC__types__Method * __eCNameSpace__eC__types__eClass_AddMethod(struct __eCNameSpace__eC__types__Class * _class, const char *  name, const char *  type, void *  function, int declMode);

extern void ProcessMethodType(struct __eCNameSpace__eC__types__Method * method);

unsigned int __eCProp_Type_Get_isPointerType(struct Type * this);

struct Statement;

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

extern struct Statement * MkExpressionStmt(struct __eCNameSpace__eC__containers__OldList * expressions);

extern struct Statement * MkCompoundStmt(struct __eCNameSpace__eC__containers__OldList * declarations, struct __eCNameSpace__eC__containers__OldList * statements);

extern void ProcessClassFunctionBody(struct ClassFunction * func, struct Statement * body);

extern struct Statement * MkReturnStmt(struct __eCNameSpace__eC__containers__OldList * exp);

struct __eCNameSpace__eC__containers__BinaryTree;

struct __eCNameSpace__eC__containers__BinaryTree
{
struct __eCNameSpace__eC__containers__BTNode * root;
int count;
int (*  CompareKey)(struct __eCNameSpace__eC__containers__BinaryTree * tree, uintptr_t a, uintptr_t b);
void (*  FreeKey)(void *  key);
} eC_gcc_struct;

struct __eCNameSpace__eC__containers__BTNode * __eCMethod___eCNameSpace__eC__containers__BinaryTree_FindString(struct __eCNameSpace__eC__containers__BinaryTree * this, const char *  key);

unsigned int __eCMethod___eCNameSpace__eC__containers__BinaryTree_Add(struct __eCNameSpace__eC__containers__BinaryTree * this, struct __eCNameSpace__eC__containers__BTNode * node);

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

extern struct __eCNameSpace__eC__types__Property * __eCNameSpace__eC__types__eClass_AddProperty(struct __eCNameSpace__eC__types__Class * _class, const char *  name, const char *  dataType, void *  setStmt, void *  getStmt, int declMode);

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

extern struct __eCNameSpace__eC__types__DataMember * __eCNameSpace__eC__types__eClass_AddDataMember(struct __eCNameSpace__eC__types__Class * _class, const char *  name, const char *  type, unsigned int size, unsigned int alignment, int declMode);

struct __eCNameSpace__eC__types__Module;

extern unsigned int ModuleAccess(struct __eCNameSpace__eC__types__Instance * searchIn, struct __eCNameSpace__eC__types__Instance * searchFor);

extern struct __eCNameSpace__eC__types__Instance * privateModule;

extern struct __eCNameSpace__eC__types__DataMember * __eCNameSpace__eC__types__eClass_FindDataMember(struct __eCNameSpace__eC__types__Class * _class, const char *  name, struct __eCNameSpace__eC__types__Instance * module, struct __eCNameSpace__eC__types__DataMember **  subMemberStack, int *  subMemberStackPos);

extern struct __eCNameSpace__eC__types__Class * __eCNameSpace__eC__types__eSystem_FindClass(struct __eCNameSpace__eC__types__Instance * module, const char *  name);

extern struct __eCNameSpace__eC__types__Property * __eCNameSpace__eC__types__eClass_FindProperty(struct __eCNameSpace__eC__types__Class * _class, const char *  name, struct __eCNameSpace__eC__types__Instance * module);

extern struct __eCNameSpace__eC__types__Method * __eCNameSpace__eC__types__eClass_FindMethod(struct __eCNameSpace__eC__types__Class * _class, const char *  name, struct __eCNameSpace__eC__types__Instance * module);

extern struct __eCNameSpace__eC__types__GlobalFunction * __eCNameSpace__eC__types__eSystem_RegisterFunction(const char *  name, const char *  type, void *  func, struct __eCNameSpace__eC__types__Instance * module, int declMode);

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

struct ClassDef;

extern struct ClassDef * MkClassDefDeclaration(struct Declaration * decl);

extern struct ClassDef * MkClassDefFunction(struct ClassFunction * function);

struct ClassDefinition;

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

extern struct Expression * MkExpInstance(struct Instantiation * inst);

struct MembersInit;

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

static void CheckPublicExpression(struct Expression *  exp, int access);

static void CheckPublicInitializer(struct Initializer * init, int access)
{
switch(init->type)
{
case 0:
CheckPublicExpression(init->__anon1.exp, access);
break;
case 1:
{
struct Initializer * i;

for(i = (*init->__anon1.list).first; i; i = i->next)
CheckPublicInitializer(i, access);
break;
}
}
}

static void CheckPublicClass(struct Symbol *  classSym, int access, const char *  word);

static void CheckPublicTypeName(struct TypeName * type, int access)
{
if(type->qualifiers)
{
struct Specifier * spec;

for(spec = (*type->qualifiers).first; spec; spec = spec->next)
{
if(spec->type == 1)
{
struct Symbol * classSym = spec->__anon1.__anon1.symbol;

CheckPublicClass(classSym, access, "define");
}
}
}
}

static void CheckPublicDataType(struct Type * type, int access, const char * word)
{
if(type)
{
switch(type->kind)
{
case 8:
{
CheckPublicClass(type->__anon1._class, access, word);
break;
}
case 9:
case 10:
{
break;
}
case 11:
{
struct Type * param;

CheckPublicDataType(type->__anon1.__anon2.returnType, access, word);
for(param = type->__anon1.__anon2.params.first; param; param = param->next)
CheckPublicDataType(param, access, word);
CheckPublicClass(type->__anon1.__anon2.thisClass, access, word);
break;
}
case 12:
CheckPublicDataType(type->__anon1.__anon4.arrayType, access, word);
if(type->__anon1.__anon4.enumClass)
CheckPublicClass(type->__anon1.__anon4.enumClass, access, word);
break;
case 13:
{
CheckPublicDataType(type->__anon1.type, access, word);
break;
}
case 16:
{
break;
}
case 19:
{
CheckPublicClass(type->__anon1._class, access, word);
break;
}
}
}
}

static void CheckPublicExpression(struct Expression * exp, int access)
{
if(exp)
{
switch(exp->type)
{
case 0:
break;
case 2:
break;
case 3:
break;
case 4:
if(exp->__anon1.op.exp1)
CheckPublicExpression(exp->__anon1.op.exp1, access);
if(exp->__anon1.op.exp2)
CheckPublicExpression(exp->__anon1.op.exp2, access);
break;
case 5:
{
struct Expression * e;

for(e = (*exp->__anon1.list).first; e; e = e->next)
CheckPublicExpression(e, access);
break;
}
case 6:
{
struct Expression * e;

CheckPublicExpression(exp->__anon1.index.exp, access);
for(e = (*exp->__anon1.index.index).first; e; e = e->next)
CheckPublicExpression(e, access);
break;
}
case 7:
{
struct Expression * e;

CheckPublicExpression(exp->__anon1.call.exp, access);
if(exp->__anon1.call.arguments)
{
for(e = (*exp->__anon1.call.arguments).first; e; e = e->next)
CheckPublicExpression(e, access);
}
break;
}
case 8:
{
CheckPublicExpression(exp->__anon1.member.exp, access);
break;
}
case 9:
{
CheckPublicExpression(exp->__anon1.member.exp, access);
break;
}
case 10:
CheckPublicTypeName(exp->__anon1.typeName, access);
break;
case 11:
{
CheckPublicTypeName(exp->__anon1.cast.typeName, access);
if(exp->__anon1.cast.exp)
CheckPublicExpression(exp->__anon1.cast.exp, access);
break;
}
case 12:
{
struct Expression * e;

CheckPublicExpression(exp->__anon1.cond.cond, access);
for(e = (*exp->__anon1.cond.exp).first; e; e = e->next)
CheckPublicExpression(e, access);
CheckPublicExpression(exp->__anon1.cond.elseExp, access);
break;
}
case 13:
case 26:
CheckPublicExpression(exp->__anon1._new.size, access);
break;
case 14:
case 27:
CheckPublicExpression(exp->__anon1._renew.size, access);
CheckPublicExpression(exp->__anon1._renew.exp, access);
break;
case 1:
{
struct MembersInit * members;

if(exp->__anon1.instance->_class)
CheckPublicClass(exp->__anon1.instance->_class->__anon1.__anon1.symbol, access, "define");
for(members = (*exp->__anon1.instance->members).first; members; members = members->next)
{
if(members->type == 0)
{
struct MemberInit * member;

for(member = (*members->__anon1.dataMembers).first; member; member = member->next)
{
CheckPublicInitializer(member->initializer, access);
}
}
}
break;
}
}
}
}

struct PropertyDef;

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

static void CheckMembersDefinitions(struct __eCNameSpace__eC__types__Class * regClass, struct __eCNameSpace__eC__types__DataMember * member, struct __eCNameSpace__eC__containers__OldList * definitions, int access)
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

yylloc = def->loc;
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
if(member)
{
struct __eCNameSpace__eC__types__BTNamedLink * link = (struct __eCNameSpace__eC__types__BTNamedLink *)__eCMethod___eCNameSpace__eC__containers__BinaryTree_FindString(&member->membersAlpha, declId->string);

dataMember = link ? link->data : (((void *)0));
}
else
dataMember = __eCNameSpace__eC__types__eClass_FindDataMember(regClass, declId->string, privateModule, (((void *)0)), (((void *)0)));
if(dataMember)
CheckPublicDataType(dataMember->dataType, (def->memberAccess == 2) ? 2 : access, __eCNameSpace__eC__i18n__GetTranslatedString("ec", "class data member", (((void *)0))));
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
CheckMembersDefinitions(regClass, member, spec->__anon1.__anon2.definitions, (def->memberAccess == 2) ? 2 : access);
}
else if(spec->__anon1.__anon2.definitions && spec->__anon1.__anon2.id)
{
if(member)
{
struct __eCNameSpace__eC__types__BTNamedLink * link = (struct __eCNameSpace__eC__types__BTNamedLink *)__eCMethod___eCNameSpace__eC__containers__BinaryTree_FindString(&member->membersAlpha, spec->__anon1.__anon2.id->string);

dataMember = link ? link->data : (((void *)0));
}
else
dataMember = __eCNameSpace__eC__types__eClass_FindDataMember(regClass, spec->__anon1.__anon2.id->string, privateModule, (((void *)0)), (((void *)0)));
if(dataMember)
CheckPublicDataType(dataMember->dataType, (def->memberAccess == 2) ? 2 : access, __eCNameSpace__eC__i18n__GetTranslatedString("ec", "class data member", (((void *)0))));
}
}
}
}
}
else if(decl->type == 2)
{
CheckPublicClass(decl->__anon1.inst->_class->__anon1.__anon1.symbol, (def->memberAccess == 2) ? 2 : access, __eCNameSpace__eC__i18n__GetTranslatedString("ec", "class member instance", (((void *)0))));
}
}
}
}
}

struct FunctionDefinition;

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

void __eCMethod_External_CreateUniqueEdge(struct External * this, struct External * from, unsigned int soft);

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

static unsigned int NameSpaceContained(struct __eCNameSpace__eC__types__NameSpace * ns, struct __eCNameSpace__eC__types__NameSpace * parent)
{
if(ns == parent)
return 1;
else if((*ns).parent)
return NameSpaceContained((*ns).parent, parent);
else
return 0;
}

static void AddSimpleBaseMembers(struct External * external, struct __eCNameSpace__eC__containers__OldList * list, struct __eCNameSpace__eC__types__Class * _class, struct __eCNameSpace__eC__types__Class * topClass)
{
if(_class->type != 1000)
AddMembers(external, list, _class, 0, (((void *)0)), topClass, (((void *)0)));
}

extern struct __eCNameSpace__eC__types__Class * __eCClass_Symbol;

extern struct __eCNameSpace__eC__types__Class * __eCClass_Instantiation;

extern struct __eCNameSpace__eC__types__Class * __eCClass___eCNameSpace__eC__types__Module;

extern struct __eCNameSpace__eC__types__Class * __eCClass___eCNameSpace__eC__types__Application;

extern struct __eCNameSpace__eC__types__Class * __eCClass___eCNameSpace__eC__containers__LinkList;

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

void __eCUnregisterModule_pass0(struct __eCNameSpace__eC__types__Instance * module)
{

}

static void CheckPublicClass(struct Symbol * classSym, int access, const char * word)
{
struct __eCNameSpace__eC__types__Class * regClass = classSym ? classSym->__anon1.registered : (((void *)0));

if(regClass)
{
if(regClass->templateClass)
regClass = regClass->templateClass;
if(classSym->isStatic && access != 3)
{
Compiler_Error(__eCNameSpace__eC__i18n__GetTranslatedString("ec", "Non-static %s making use of a static class\n", (((void *)0))), word);
}
else if(access == 1)
{
if(!NameSpaceContained(regClass->nameSpace, &((struct __eCNameSpace__eC__types__Application *)(((char *)((struct __eCNameSpace__eC__types__Module *)(((char *)regClass->module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application + sizeof(struct __eCNameSpace__eC__types__Module) + sizeof(struct __eCNameSpace__eC__types__Instance))))->systemNameSpace))
{
if(NameSpaceContained(regClass->nameSpace, &((struct __eCNameSpace__eC__types__Module *)(((char *)regClass->module + sizeof(struct __eCNameSpace__eC__types__Instance))))->privateNameSpace) || !ModuleAccess(privateModule, regClass->module))
Compiler_Error(__eCNameSpace__eC__i18n__GetTranslatedString("ec", "Public %s making use of a private class\n", (((void *)0))), word);
}
}
}
}

static void ProcessClass(int classType, struct __eCNameSpace__eC__containers__OldList * definitions, struct Symbol * symbol, struct __eCNameSpace__eC__containers__OldList * baseSpecs, struct __eCNameSpace__eC__containers__OldList * enumValues, struct Location * loc, struct __eCNameSpace__eC__containers__OldList * defs, void * after, struct __eCNameSpace__eC__containers__OldList * initDeclarators, struct ExtDecl * extDecl)
{
char structName[1024];
char className[1024];
char constructorName[1024];
char destructorName[1024];
struct __eCNameSpace__eC__types__Class * regClass;
struct ClassFunction * destructor = (((void *)0)), * constructor = (((void *)0));
unsigned int isUnion = classType == 6;
struct External * external = (((void *)0));
struct ClassDef * def;
struct __eCNameSpace__eC__containers__OldList * list = (((void *)0));
struct __eCNameSpace__eC__containers__OldList * classDataList = (((void *)0));

if(inCompiler)
{
list = MkList();
classDataList = MkList();
}
regClass = __eCNameSpace__eC__types__eSystem_FindClass(privateModule, symbol->string);
if(!regClass)
return ;
classType = regClass->type;
if(inCompiler && regClass->base)
{
yylloc = *loc;
if(!NameSpaceContained(regClass->nameSpace, &((struct __eCNameSpace__eC__types__Module *)(((char *)regClass->module + sizeof(struct __eCNameSpace__eC__types__Instance))))->privateNameSpace) && regClass->inheritanceAccess == 1)
{
if(!regClass->base->symbol)
regClass->base->symbol = FindClass(regClass->base->fullName);
CheckPublicClass(regClass->base->symbol, 1, __eCNameSpace__eC__i18n__GetTranslatedString("ec", "class", (((void *)0))));
}
else if(!symbol->isStatic && regClass->base)
{
if(!regClass->base->symbol)
regClass->base->symbol = FindClass(regClass->base->fullName);
CheckPublicClass(regClass->base->symbol, 2, __eCNameSpace__eC__i18n__GetTranslatedString("ec", "class", (((void *)0))));
}
}
if(definitions != (((void *)0)))
{
for(def = definitions->first; def; def = def->next)
{
if(def->type == 13)
{
struct __eCNameSpace__eC__types__DataMember * member;
struct __eCNameSpace__eC__types__Property * prop;
struct __eCNameSpace__eC__types__Method * method;

if((prop = __eCNameSpace__eC__types__eClass_FindProperty(regClass, def->__anon1.__anon1.id->string, privateModule)))
{
__eCNameSpace__eC__types__eClass_AddProperty(regClass, def->__anon1.__anon1.id->string, (((void *)0)), (((void *)0)), (((void *)0)), def->memberAccess);
}
else if((member = __eCNameSpace__eC__types__eClass_FindDataMember(regClass, def->__anon1.__anon1.id->string, privateModule, (((void *)0)), (((void *)0)))))
{
__eCNameSpace__eC__types__eClass_AddDataMember(regClass, def->__anon1.__anon1.id->string, (((void *)0)), 0, 0, def->memberAccess);
}
else if((method = __eCNameSpace__eC__types__eClass_FindMethod(regClass, def->__anon1.__anon1.id->string, privateModule)))
{
__eCNameSpace__eC__types__eClass_AddMethod(regClass, def->__anon1.__anon1.id->string, (((void *)0)), (((void *)0)), def->memberAccess);
}
else
{
yylloc = def->loc;
Compiler_Error(__eCNameSpace__eC__i18n__GetTranslatedString("ec", "Couldn't find member %s to override\n", (((void *)0))), def->__anon1.__anon1.id->string);
}
}
}
}
if(inCompiler)
{
external = MkExternalDeclaration((((void *)0)));
__eCMethod___eCNameSpace__eC__containers__OldList_Insert(defs, after, external);
curExternal = external;
curExternal->symbol = symbol;
}
if((classType == 1 || classType == 5) && inCompiler)
{
AddSimpleBaseMembers(external, list, regClass->base, regClass);
}
if(definitions != (((void *)0)))
{
if(inCompiler)
{
if(!NameSpaceContained(regClass->nameSpace, &((struct __eCNameSpace__eC__types__Module *)(((char *)regClass->module + sizeof(struct __eCNameSpace__eC__types__Instance))))->privateNameSpace))
CheckMembersDefinitions(regClass, (((void *)0)), definitions, 1);
else if(!symbol->isStatic)
CheckMembersDefinitions(regClass, (((void *)0)), definitions, 2);
}
for(def = definitions->first; def; def = def->next)
{
yylloc = def->loc;
if(def->type == 2)
{
struct Declaration * decl = def->__anon1.decl;

yylloc = decl->loc;
if(decl->type == 0)
{
if(inCompiler && classType != 2)
{
ListAdd(list, MkClassDefDeclaration(decl));
def->__anon1.decl = (((void *)0));
}
}
else if(decl->type == 2)
{
struct Instantiation * inst = decl->__anon1.inst;
struct Expression * exp = inst->exp;
struct Symbol * classSym;

if(exp)
{
struct __eCNameSpace__eC__containers__OldList * specifiers = MkList();
struct Declarator * d;

ListAdd(specifiers, MkSpecifierName(inst->_class->__anon1.__anon1.name));
d = MkDeclaratorIdentifier(MkIdentifier(exp->__anon1.__anon1.identifier->string));
if(inCompiler)
{
struct __eCNameSpace__eC__containers__OldList * declarators = MkList();

ListAdd(declarators, d);
decl = MkStructDeclaration(specifiers, declarators, (((void *)0)));
ListAdd(list, MkClassDefDeclaration(decl));
exp->type = 8;
exp->__anon1.member.member = exp->__anon1.__anon1.identifier;
exp->__anon1.member.exp = QMkExpId("this");
exp->__anon1.member.memberType = 3;
exp->__anon1.member.thisPtr = 1;
}
else
{
FreeDeclarator(d);
FreeList(specifiers, (void *)(FreeSpecifier));
}
}
classSym = inst->_class->__anon1.__anon1.symbol;
if(classSym && classSym->__anon1.registered && (classSym->__anon1.registered->type == 1 || classSym->__anon1.registered->type == 2 || classSym->__anon1.registered->type == 3))
{
if(inst->members && (*inst->members).count)
symbol->needConstructor = 1;
}
else
{
symbol->needConstructor = 1;
symbol->needDestructor = 1;
}
}
}
else if(def->type == 9)
{
struct Declaration * decl = def->__anon1.decl;

if(decl->type == 0)
{
if(inCompiler && classType != 2)
{
ListAdd(classDataList, MkClassDefDeclaration(decl));
def->__anon1.decl = (((void *)0));
}
}
}
else if(def->type == 1)
symbol->needConstructor = 1;
else if(def->type == 4)
symbol->needConstructor = 1;
else if(def->type == 0)
{
struct ClassFunction * func = def->__anon1.function;

if(func->isDestructor)
{
if(destructor)
{
yylloc = *loc;
Compiler_Error(__eCNameSpace__eC__i18n__GetTranslatedString("ec", "redefinition of destructor for class %s\n", (((void *)0))), symbol->string);
}
else
{
symbol->needDestructor = 1;
destructor = func;
if(!inCompiler && func->body)
{
struct Symbol * thisSymbol = (thisSymbol = __eCNameSpace__eC__types__eInstance_New(__eCClass_Symbol), thisSymbol->string = __eCNameSpace__eC__types__CopyString("this"), thisSymbol->type = MkClassType(regClass->fullName), thisSymbol);

__eCMethod___eCNameSpace__eC__containers__BinaryTree_Add(&func->body->__anon1.compound.context->symbols, (struct __eCNameSpace__eC__containers__BTNode *)thisSymbol);
}
}
}
if(func->isConstructor)
{
if(constructor)
{
yylloc = *loc;
Compiler_Error(__eCNameSpace__eC__i18n__GetTranslatedString("ec", "redefinition of constructor for class %s\n", (((void *)0))), symbol->string);
}
else
{
symbol->needConstructor = 1;
constructor = func;
if(!inCompiler && func->body)
{
struct Symbol * thisSymbol = (thisSymbol = __eCNameSpace__eC__types__eInstance_New(__eCClass_Symbol), thisSymbol->string = __eCNameSpace__eC__types__CopyString("this"), thisSymbol->type = MkClassType(regClass->fullName), thisSymbol);

__eCMethod___eCNameSpace__eC__containers__BinaryTree_Add(&func->body->__anon1.compound.context->symbols, (struct __eCNameSpace__eC__containers__BTNode *)thisSymbol);
}
}
}
}
}
}
if(inCompiler)
{
external->symbol = (((void *)0));
if((*list).count)
{
struct __eCNameSpace__eC__containers__OldList * specs = MkList(), * declarators = (initDeclarators != (((void *)0))) ? initDeclarators : MkList();

initDeclarators = (((void *)0));
strcpy(structName, symbol->string);
symbol->structName = __eCNameSpace__eC__types__CopyString(structName);
{
struct Specifier * spec = MkStructOrUnion(3, MkIdentifier(structName), isUnion ? MkListOne(MkClassDefDeclaration(MkStructDeclaration(MkListOne(MkStructOrUnion(4, (((void *)0)), list)), (((void *)0)), (((void *)0))))) : list);

spec->__anon1.__anon2.extDeclStruct = extDecl;
ListAdd(specs, spec);
}
external->symbol = symbol;
if(symbol->__anon2.__anon1.structExternal)
{
{
struct TopoEdge * e;
struct __eCNameSpace__eC__types__Instance * __internalLinkList = symbol->__anon2.__anon1.structExternal->incoming;

for(e = ((struct __eCNameSpace__eC__containers__LinkList *)(((char *)__internalLinkList + 0 + sizeof(struct __eCNameSpace__eC__types__Instance))))->first; e; e = (struct TopoEdge *)(__extension__ ({
struct __eCNameSpace__eC__containers__IteratorPointer * (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, struct __eCNameSpace__eC__containers__IteratorPointer * pointer);

__internal_VirtualMethod = ((struct __eCNameSpace__eC__containers__IteratorPointer * (*)(struct __eCNameSpace__eC__types__Instance *, struct __eCNameSpace__eC__containers__IteratorPointer * pointer))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = __internalLinkList;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__containers__LinkList->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__containers__Container_GetNext]);
__internal_VirtualMethod ? __internal_VirtualMethod(__internalLinkList, (struct __eCNameSpace__eC__containers__IteratorPointer *)e) : (struct __eCNameSpace__eC__containers__IteratorPointer *)1;
})))
__eCMethod_External_CreateUniqueEdge(external, e->from, e->breakable);
}
{
struct TopoEdge * e;
struct __eCNameSpace__eC__types__Instance * __internalLinkList = symbol->__anon2.__anon1.structExternal->outgoing;

for(e = ((struct __eCNameSpace__eC__containers__LinkList *)(((char *)__internalLinkList + 0 + sizeof(struct __eCNameSpace__eC__types__Instance))))->first; e; e = (struct TopoEdge *)(__extension__ ({
struct __eCNameSpace__eC__containers__IteratorPointer * (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, struct __eCNameSpace__eC__containers__IteratorPointer * pointer);

__internal_VirtualMethod = ((struct __eCNameSpace__eC__containers__IteratorPointer * (*)(struct __eCNameSpace__eC__types__Instance *, struct __eCNameSpace__eC__containers__IteratorPointer * pointer))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = __internalLinkList;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__containers__LinkList->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__containers__Container_GetNext]);
__internal_VirtualMethod ? __internal_VirtualMethod(__internalLinkList, (struct __eCNameSpace__eC__containers__IteratorPointer *)e) : (struct __eCNameSpace__eC__containers__IteratorPointer *)1;
})))
__eCMethod_External_CreateUniqueEdge(e->to, external, e->breakable);
}
__eCMethod___eCNameSpace__eC__containers__OldList_Remove((&*ast), symbol->__anon2.__anon1.structExternal);
FreeExternal(symbol->__anon2.__anon1.structExternal);
}
symbol->__anon2.__anon1.structExternal = external;
external->__anon1.declaration = MkDeclaration(specs, declarators);
after = external;
symbol->declaredStruct = 1;
}
else
{
curExternal = external->prev;
__eCMethod___eCNameSpace__eC__containers__OldList_Remove(defs, external);
FreeExternal(external);
(__eCNameSpace__eC__types__eSystem_Delete(list), list = 0);
}
if((*classDataList).count)
{
char classDataStructName[1024];
struct __eCNameSpace__eC__containers__OldList * specs = MkList();
struct External * external;

strcpy(classDataStructName, "__eCClassData_");
FullClassNameCat(classDataStructName, symbol->string, 0);
declMode = structDeclMode = 0;
ListAdd(specs, MkStructOrUnion(3, MkIdentifier(classDataStructName), classDataList));
external = MkExternalDeclaration(MkDeclaration(specs, (((void *)0))));
__eCMethod___eCNameSpace__eC__containers__OldList_Insert(defs, after, external);
after = external;
symbol->classData = 1;
}
else
(__eCNameSpace__eC__types__eSystem_Delete(classDataList), classDataList = 0);
}
if(inCompiler)
{
{
struct __eCNameSpace__eC__containers__OldList * specs = MkList(), * declarators = MkList();

strcpy(className, "__eCClass_");
FullClassNameCat(className, symbol->string, 1);
symbol->className = __eCNameSpace__eC__types__CopyString(className);
if(!strstr(sourceFile, ".main.ec"))
ListAdd(specs, MkSpecifier(STATIC));
ListAdd(specs, MkStructOrUnion(3, MkIdentifier("__eCNameSpace__eC__types__Class"), (((void *)0))));
ListAdd(declarators, MkInitDeclarator(MkDeclaratorPointer(MkPointer((((void *)0)), (((void *)0))), MkDeclaratorIdentifier(MkIdentifier(className))), (((void *)0))));
symbol->__anon2.__anon1.pointerExternal = MkExternalDeclaration(MkDeclaration(specs, declarators));
DeclareStruct(symbol->__anon2.__anon1.pointerExternal, "eC::types::Class", 0, 1);
__eCMethod___eCNameSpace__eC__containers__OldList_Insert(defs, after, symbol->__anon2.__anon1.pointerExternal);
after = symbol->__anon2.__anon3.methodExternal;
}
if(symbol->needDestructor)
{
struct ClassFunction * function;
struct __eCNameSpace__eC__containers__OldList * specs = MkList();
struct Declarator * decl;
struct Statement * body;
struct Context * context;
struct __eCNameSpace__eC__containers__OldList * declarations = (((void *)0)), * statements;

strcpy(destructorName, "__eCDestructor_");
FullClassNameCat(destructorName, symbol->string, 0);
symbol->destructorName = __eCNameSpace__eC__types__CopyString(destructorName);
ListAdd(specs, MkSpecifier(VOID));
context = PushContext();
statements = MkList();
if(definitions != (((void *)0)))
{
for(def = definitions->first; def; def = def->next)
{
if(def->type == 2 && def->__anon1.decl && def->__anon1.decl->type == 2)
{
struct Instantiation * inst = def->__anon1.decl->__anon1.inst;
struct Symbol * classSym = inst->_class->__anon1.__anon1.symbol;

if(inst->exp && (!classSym || !classSym->__anon1.registered || classSym->__anon1.registered->type == 0))
{
struct Expression * exp = MkExpOp((((void *)0)), DELETE, CopyExpression(inst->exp));

ListAdd(statements, MkExpressionStmt(MkListOne(exp)));
}
if(inst->exp && (!classSym || !classSym->__anon1.registered || classSym->__anon1.registered->type == 5))
{
struct Expression * exp = MkExpOp((((void *)0)), DELETE, CopyExpression(inst->exp));

ListAdd(statements, MkExpressionStmt(MkListOne(exp)));
}
}
}
}
if(destructor && destructor->body)
{
__eCMethod___eCNameSpace__eC__containers__OldList_Insert((&*statements), (((void *)0)), destructor->body);
destructor->body->__anon1.compound.context->parent = context;
destructor->body = (((void *)0));
}
body = MkCompoundStmt(declarations, statements);
PopContext(context);
body->__anon1.compound.context = context;
decl = MkDeclaratorFunction(MkDeclaratorIdentifier(MkIdentifier(destructorName)), (((void *)0)));
decl->symbol = __eCNameSpace__eC__types__eInstance_New(__eCClass_Symbol);
__eCMethod___eCNameSpace__eC__containers__OldList_Add((&*excludedSymbols), decl->symbol);
function = MkClassFunction(specs, (((void *)0)), decl, (((void *)0)));
ProcessClassFunctionBody(function, body);
function->dontMangle = 1;
__eCMethod___eCNameSpace__eC__containers__OldList_Insert(definitions, (((void *)0)), MkClassDefFunction(function));
}
if(symbol->needConstructor && inCompiler)
{
struct ClassFunction * function;
struct __eCNameSpace__eC__containers__OldList * specs = MkList();
struct Declarator * decl;
struct Statement * body;
struct Context * context;
struct __eCNameSpace__eC__containers__OldList * declarations = (((void *)0)), * statements;

strcpy(constructorName, "__eCConstructor_");
FullClassNameCat(constructorName, symbol->string, 0);
symbol->constructorName = __eCNameSpace__eC__types__CopyString(constructorName);
ListAdd(specs, MkSpecifierName("bool"));
context = PushContext();
statements = MkList();
if(definitions != (((void *)0)))
{
for(def = definitions->first; def; def = def->next)
{
if(def->type == 2 && def->__anon1.decl && def->__anon1.decl->type == 2)
{
struct Instantiation * inst = def->__anon1.decl->__anon1.inst;
struct Symbol * classSym = inst->_class->__anon1.__anon1.symbol;

if(inst->exp && (!classSym || !classSym->__anon1.registered || classSym->__anon1.registered->type == 0 || classSym->__anon1.registered->type == 5))
{
struct Instantiation * newInst = __eCNameSpace__eC__types__eInstance_New(__eCClass_Instantiation);

*newInst = *inst;
newInst->members = (((void *)0));
newInst->exp = CopyExpression(inst->exp);
newInst->_class = CopySpecifier(inst->_class);
ListAdd(statements, MkExpressionStmt(MkListOne(MkExpInstance(newInst))));
inst->built = 1;
}
if(inst->exp && (!classSym || !classSym->__anon1.registered || classSym->__anon1.registered->type == 0))
{
ListAdd(statements, MkExpressionStmt(MkListOne(MkExpCall(MkExpIdentifier(MkIdentifier("eC::types::eInstance_IncRef")), MkListOne(CopyExpression(inst->exp))))));
}
}
}
for(def = definitions->first; def; def = def->next)
{
if(def->type == 1 && def->__anon1.defProperties)
{
struct MemberInit * propertyDef;

for(propertyDef = (*def->__anon1.defProperties).first; propertyDef; propertyDef = propertyDef->next)
{
struct Expression * memberExp;
struct Identifier * id = (*propertyDef->identifiers).first;

if(id)
{
memberExp = MkExpMember(MkExpIdentifier(MkIdentifier("this")), id);
for(id = id->next; id; id = id->next)
memberExp = MkExpMember(memberExp, id);
ListAdd(statements, MkExpressionStmt(MkListOne(MkExpOp(memberExp, '=', (propertyDef->initializer && propertyDef->initializer->type == 0 ? propertyDef->initializer->__anon1.exp : (((void *)0)))))));
}
if(propertyDef->initializer)
{
if(propertyDef->initializer->type == 0)
propertyDef->initializer->__anon1.exp = (((void *)0));
FreeInitializer(propertyDef->initializer);
}
propertyDef->initializer = (((void *)0));
__eCMethod___eCNameSpace__eC__containers__OldList_Clear((&*propertyDef->identifiers));
}
}
}
for(def = definitions->first; def; def = def->next)
{
if(def->type == 2 && def->__anon1.decl && def->__anon1.decl->type == 2)
{
struct Instantiation * inst = def->__anon1.decl->__anon1.inst;
struct Symbol * classSym = inst->_class->__anon1.__anon1.symbol;

if(inst->exp || (!classSym || !classSym->__anon1.registered || classSym->__anon1.registered->type == 0 || classSym->__anon1.registered->type == 5))
{
if(!(inst->exp && (!classSym || !classSym->__anon1.registered || classSym->__anon1.registered->type == 0 || classSym->__anon1.registered->type == 5)) || (inst->members && (*inst->members).count))
{
def->__anon1.decl->__anon1.inst = (((void *)0));
ListAdd(statements, MkExpressionStmt(MkListOne(MkExpInstance(inst))));
}
}
}
}
}
if(constructor && constructor->body)
{
__eCMethod___eCNameSpace__eC__containers__OldList_Add((&*statements), constructor->body);
constructor->body->__anon1.compound.context->parent = context;
constructor->body = (((void *)0));
}
ListAdd(statements, MkReturnStmt(MkListOne(MkExpIdentifier(MkIdentifier("true")))));
body = MkCompoundStmt(declarations, statements);
PopContext(context);
body->__anon1.compound.context = context;
decl = MkDeclaratorFunction(MkDeclaratorIdentifier(MkIdentifier(constructorName)), (((void *)0)));
decl->symbol = __eCNameSpace__eC__types__eInstance_New(__eCClass_Symbol);
__eCMethod___eCNameSpace__eC__containers__OldList_Add((&*excludedSymbols), decl->symbol);
function = MkClassFunction(specs, (((void *)0)), decl, (((void *)0)));
ProcessClassFunctionBody(function, body);
function->dontMangle = 1;
if(definitions != (((void *)0)))
__eCMethod___eCNameSpace__eC__containers__OldList_Insert(definitions, (((void *)0)), MkClassDefFunction(function));
}
}
if(definitions != (((void *)0)))
{
for(def = definitions->first; def; def = def->next)
{
if(def->type == 3 && def->__anon1.propertyDef)
{
struct PropertyDef * propertyDef = def->__anon1.propertyDef;
struct ClassDef * after = def;
struct ClassDef * newDef;

if(inCompiler)
{
yylloc = propertyDef->loc;
if(!NameSpaceContained(regClass->nameSpace, &((struct __eCNameSpace__eC__types__Module *)(((char *)regClass->module + sizeof(struct __eCNameSpace__eC__types__Instance))))->privateNameSpace) && def->memberAccess == 1)
CheckPublicDataType(propertyDef->symbol->type, 1, "class property");
else if(!symbol->isStatic)
CheckPublicDataType(propertyDef->symbol->type, 2, "class property");
}
{
{
struct ClassFunction * func;
struct Declarator * decl;
char name[1024];
struct __eCNameSpace__eC__containers__OldList * params;

if(propertyDef->getStmt && propertyDef->id)
{
strcpy(name, "__eCProp_");
FullClassNameCat(name, symbol->string, 0);
strcat(name, "_Get_");
FullClassNameCat(name, propertyDef->id->string, 1);
params = MkList();
if(propertyDef->symbol->type && propertyDef->symbol->type->kind == 8 && propertyDef->symbol->type->__anon1._class && propertyDef->symbol->type->__anon1._class->__anon1.registered && propertyDef->symbol->type->__anon1._class->__anon1.registered->type == 1)
{
ListAdd(params, MkTypeName(CopyList(propertyDef->specifiers, (void *)(CopySpecifier)), MkDeclaratorIdentifier(MkIdentifier("value"))));
decl = PlugDeclarator(propertyDef->declarator, MkDeclaratorFunction(MkDeclaratorIdentifier(MkIdentifier(name)), params));
func = MkClassFunction(MkListOne(MkSpecifier(VOID)), (((void *)0)), decl, (((void *)0)));
}
else
{
decl = PlugDeclarator(propertyDef->declarator, MkDeclaratorFunction(MkDeclaratorIdentifier(MkIdentifier(name)), params));
func = MkClassFunction(CopyList(propertyDef->specifiers, (void *)(CopySpecifier)), (((void *)0)), decl, (((void *)0)));
}
ProcessClassFunctionBody(func, propertyDef->getStmt);
func->declarator->symbol = propertyDef->symbol;
propertyDef->symbol->__anon2.__anon2.externalGet = (struct External *)func;
func->dontMangle = 1;
newDef = MkClassDefFunction(func);
__eCMethod___eCNameSpace__eC__containers__OldList_Insert(definitions, after, newDef);
after = newDef;
if(inCompiler)
propertyDef->getStmt = (((void *)0));
else
func->body = (((void *)0));
}
if(propertyDef->setStmt && propertyDef->id)
{
struct __eCNameSpace__eC__containers__OldList * specifiers = MkList();

strcpy(name, "__eCProp_");
FullClassNameCat(name, symbol->string, 0);
strcat(name, "_Set_");
FullClassNameCat(name, propertyDef->id->string, 1);
params = MkList();
ListAdd(params, MkTypeName(CopyList(propertyDef->specifiers, (void *)(CopySpecifier)), PlugDeclarator(propertyDef->declarator, MkDeclaratorIdentifier(MkIdentifier("value")))));
if(propertyDef->__anon1.isDBProp)
{
struct Specifier * spec;
struct __eCNameSpace__eC__containers__OldList * specs = ((struct TypeName *)(*params).last)->qualifiers;

for(spec = (*specs).first; spec; spec = spec->next)
if(spec->type == 0 && spec->__anon1.specifier == CONST)
break;
if(!spec)
__eCMethod___eCNameSpace__eC__containers__OldList_Insert((&*specs), (((void *)0)), MkSpecifier(CONST));
}
decl = MkDeclaratorFunction(MkDeclaratorIdentifier(MkIdentifier(name)), params);
{
unsigned int isConversion = propertyDef->symbol->__anon1._property && propertyDef->symbol->__anon1._property->conversion;
unsigned int useVoid = 0;

switch(regClass->type)
{
case 1:
case 6:
useVoid = 1;
break;
case 5:
case 0:
useVoid = !isConversion;
break;
default:
useVoid = !isConversion;
if(useVoid && !propertyDef->__anon1.isDBProp)
Compiler_Warning(__eCNameSpace__eC__i18n__GetTranslatedString("ec", "set defined on type without storage for non-conversion property\n", (((void *)0))));
}
ListAdd(specifiers, useVoid ? MkSpecifier(VOID) : MkSpecifierName(regClass->fullName));
}
func = MkClassFunction(specifiers, (((void *)0)), decl, (((void *)0)));
ProcessClassFunctionBody(func, propertyDef->setStmt);
func->dontMangle = 1;
func->declarator->symbol = propertyDef->symbol;
propertyDef->symbol->__anon2.__anon2.externalSet = (struct External *)func;
if(!propertyDef->__anon1.conversion && regClass->type == 0)
func->propSet = propertyDef->symbol;
newDef = MkClassDefFunction(func);
__eCMethod___eCNameSpace__eC__containers__OldList_Insert(definitions, after, newDef);
after = newDef;
if(inCompiler)
propertyDef->setStmt = (((void *)0));
else
func->body = (((void *)0));
}
if(propertyDef->issetStmt && propertyDef->id)
{
struct __eCNameSpace__eC__containers__OldList * specifiers = MkList();

strcpy(name, "__eCProp_");
FullClassNameCat(name, symbol->string, 0);
strcat(name, "_IsSet_");
FullClassNameCat(name, propertyDef->id->string, 1);
params = MkList();
decl = MkDeclaratorFunction(MkDeclaratorIdentifier(MkIdentifier(name)), params);
ListAdd(specifiers, MkSpecifierName("bool"));
func = MkClassFunction(specifiers, (((void *)0)), decl, (((void *)0)));
ProcessClassFunctionBody(func, propertyDef->issetStmt);
func->dontMangle = 1;
func->declarator->symbol = propertyDef->symbol;
propertyDef->symbol->__anon2.__anon2.externalIsSet = (struct External *)func;
newDef = MkClassDefFunction(func);
__eCMethod___eCNameSpace__eC__containers__OldList_Insert(definitions, after, newDef);
after = newDef;
if(inCompiler)
propertyDef->issetStmt = (((void *)0));
else
func->body = (((void *)0));
}
if(propertyDef->id && inCompiler)
{
struct __eCNameSpace__eC__types__Property * prop = __eCNameSpace__eC__types__eClass_FindProperty(symbol->__anon1.registered, propertyDef->id->string, privateModule);
struct Declaration * decl;
struct External * external;
struct __eCNameSpace__eC__containers__OldList * specifiers = MkList();

__eCMethod___eCNameSpace__eC__containers__OldList_Insert((&*specifiers), (((void *)0)), MkSpecifier(STATIC));
__eCMethod___eCNameSpace__eC__containers__OldList_Add((&*specifiers), MkSpecifierExtended(MkExtDeclAttrib(MkAttrib(ATTRIB, MkListOne(MkAttribute(__eCNameSpace__eC__types__CopyString("unused"), (((void *)0))))))));
ListAdd(specifiers, MkSpecifierName("Property"));
strcpy(name, "__eCProp_");
FullClassNameCat(name, symbol->string, 0);
strcat(name, "_");
FullClassNameCat(name, propertyDef->id->string, 1);
{
struct __eCNameSpace__eC__containers__OldList * list = MkList();

ListAdd(list, MkInitDeclarator(MkDeclaratorIdentifier(MkIdentifier(name)), (((void *)0))));
strcpy(name, "__eCPropM_");
FullClassNameCat(name, symbol->string, 0);
strcat(name, "_");
FullClassNameCat(name, propertyDef->id->string, 1);
ListAdd(list, MkInitDeclarator(MkDeclaratorIdentifier(MkIdentifier(name)), (((void *)0))));
decl = MkDeclaration(specifiers, list);
}
external = MkExternalDeclaration(decl);
__eCMethod___eCNameSpace__eC__containers__OldList_Insert((&*ast), curExternal ? curExternal->prev : (((void *)0)), external);
external->symbol = propertyDef->symbol;
propertyDef->symbol->__anon2.__anon2.externalPtr = external;
if(inCompiler && prop && prop->symbol)
((struct Symbol *)prop->symbol)->__anon2.__anon2.externalPtr = external;
}
}
}
}
else if(def->type == 10 && def->__anon1.propertyDef)
{
struct PropertyDef * propertyDef = def->__anon1.propertyDef;
struct ClassDef * after = def;
struct ClassDef * newDef;

{
if(inCompiler)
{
yylloc = propertyDef->loc;
if(!NameSpaceContained(regClass->nameSpace, &((struct __eCNameSpace__eC__types__Module *)(((char *)regClass->module + sizeof(struct __eCNameSpace__eC__types__Instance))))->privateNameSpace))
CheckPublicDataType(propertyDef->symbol->type, 1, "classwide property");
else if(!symbol->isStatic)
CheckPublicDataType(propertyDef->symbol->type, 2, "classwide property");
}
{
struct ClassFunction * func;
struct Declarator * decl;
char name[1024];
struct __eCNameSpace__eC__containers__OldList * params;

if(propertyDef->getStmt && propertyDef->id)
{
struct Declarator * declId;

sprintf(name, "class::__eCClassProp_");
FullClassNameCat(name, symbol->string, 0);
strcat(name, "_Get_");
strcat(name, propertyDef->id->string);
params = MkList();
declId = MkDeclaratorIdentifier(MkIdentifier(name));
{
decl = MkDeclaratorFunction(declId, params);
func = MkClassFunction(MkListOne(MkSpecifierName("uint64")), (((void *)0)), decl, (((void *)0)));
}
ProcessClassFunctionBody(func, propertyDef->getStmt);
func->declarator->symbol = propertyDef->symbol;
propertyDef->symbol->__anon2.__anon2.externalGet = (struct External *)func;
func->dontMangle = 1;
newDef = MkClassDefFunction(func);
__eCMethod___eCNameSpace__eC__containers__OldList_Insert(definitions, after, newDef);
after = newDef;
decl = PlugDeclarator(propertyDef->declarator, MkDeclaratorFunction((((void *)0)), (((void *)0))));
func->type = ProcessType(propertyDef->specifiers, decl);
FreeDeclarator(decl);
if(func->type->__anon1.__anon2.returnType->kind == 8 && func->type->__anon1.__anon2.returnType->__anon1._class && func->type->__anon1.__anon2.returnType->__anon1._class->__anon1.registered && func->type->__anon1.__anon2.returnType->__anon1._class->__anon1.registered->type == 1)
func->type->__anon1.__anon2.returnType->byReference = 1;
func->type->__anon1.__anon2.returnType->passAsTemplate = 1;
if(inCompiler)
propertyDef->getStmt = (((void *)0));
else
func->body = (((void *)0));
}
if(propertyDef->setStmt && propertyDef->id)
{
struct Context * prevCurContext;
struct __eCNameSpace__eC__containers__OldList * specifiers = MkList();
struct Statement * body = propertyDef->setStmt;
struct Declarator * ptrDecl;
struct Expression * e;

strcpy(name, "class::__eCClassProp_");
FullClassNameCat(name, symbol->string, 0);
strcat(name, "_Set_");
strcat(name, propertyDef->id->string);
params = MkList();
prevCurContext = curContext;
curContext = body->__anon1.compound.context;
ListAdd(params, MkTypeName(MkListOne(MkSpecifierName("uint64")), MkDeclaratorIdentifier(MkIdentifier("_value"))));
decl = MkDeclaratorFunction(MkDeclaratorIdentifier(MkIdentifier(name)), params);
if(!body->__anon1.compound.declarations)
body->__anon1.compound.declarations = MkList();
if(propertyDef->symbol->type && propertyDef->symbol->type->kind == 8 && propertyDef->symbol->type->__anon1._class && propertyDef->symbol->type->__anon1._class->__anon1.registered && propertyDef->symbol->type->__anon1._class->__anon1.registered->type == 1)
ptrDecl = MkDeclaratorPointer(MkPointer((((void *)0)), (((void *)0))), PlugDeclarator(propertyDef->declarator, MkDeclaratorIdentifier(MkIdentifier("value"))));
else
ptrDecl = PlugDeclarator(propertyDef->declarator, MkDeclaratorIdentifier(MkIdentifier("value")));
e = MkExpIdentifier(MkIdentifier("_value"));
if(__eCProp_Type_Get_isPointerType(propertyDef->symbol->type))
e = MkExpCast(MkTypeName(MkListOne(MkSpecifierName("uintptr")), (((void *)0))), e);
ListAdd(body->__anon1.compound.declarations, MkDeclaration(CopyList(propertyDef->specifiers, (void *)(CopySpecifier)), MkListOne(MkInitDeclarator(ptrDecl, MkInitializerAssignment(MkExpCast(MkTypeName(CopyList(propertyDef->specifiers, (void *)(CopySpecifier)), CopyDeclarator(propertyDef->declarator)), e))))));
curContext = prevCurContext;
{
struct Symbol * sym = ptrDecl->symbol;

sym->isParam = 1;
FreeType(sym->type);
sym->type = ProcessType(propertyDef->specifiers, propertyDef->declarator);
}
ListAdd(specifiers, MkSpecifier(VOID));
func = MkClassFunction(specifiers, (((void *)0)), decl, (((void *)0)));
ProcessClassFunctionBody(func, propertyDef->setStmt);
func->dontMangle = 1;
func->declarator->symbol = propertyDef->symbol;
propertyDef->symbol->__anon2.__anon2.externalSet = (struct External *)func;
newDef = MkClassDefFunction(func);
__eCMethod___eCNameSpace__eC__containers__OldList_Insert(definitions, after, newDef);
after = newDef;
if(inCompiler)
propertyDef->setStmt = (((void *)0));
else
func->body = (((void *)0));
}
}
}
}
else if(def->type == 0 && def->__anon1.function->declarator)
{
struct ClassFunction * func = def->__anon1.function;

func->_class = regClass;
if(!func->dontMangle)
{
struct Declarator * funcDecl = GetFuncDecl(func->declarator);
struct Identifier * id = GetDeclId(funcDecl);
struct __eCNameSpace__eC__types__Method * method;

if(!funcDecl->__anon1.function.parameters || !(*funcDecl->__anon1.function.parameters).first)
{
if(!funcDecl->__anon1.function.parameters)
funcDecl->__anon1.function.parameters = MkList();
ListAdd(funcDecl->__anon1.function.parameters, MkTypeName(MkListOne(MkSpecifier(VOID)), (((void *)0))));
}
method = __eCNameSpace__eC__types__eClass_FindMethod(regClass, id->string, privateModule);
FreeSpecifier(id->_class);
id->_class = (((void *)0));
if(inCompiler && method)
{
char * newId = __eCNameSpace__eC__types__eSystem_New(sizeof(char) * (strlen(id->string) + strlen("__eCMethod___eCNameSpace__") + strlen(symbol->string) + 2));

newId[0] = '\0';
ProcessMethodType(method);
yylloc = def->loc;
if(!NameSpaceContained(regClass->nameSpace, &((struct __eCNameSpace__eC__types__Module *)(((char *)regClass->module + sizeof(struct __eCNameSpace__eC__types__Instance))))->privateNameSpace) && method->memberAccess == 1)
CheckPublicDataType(method->dataType, 1, "class method");
strcpy(newId, "__eCMethod_");
FullClassNameCat(newId, symbol->string, 0);
strcat(newId, "_");
strcat(newId, id->string);
(__eCNameSpace__eC__types__eSystem_Delete(id->string), id->string = 0);
id->string = newId;
if(method->type != 1)
{
if(method->symbol)
{
(__eCNameSpace__eC__types__eSystem_Delete(((struct Symbol *)method->symbol)->string), ((struct Symbol *)method->symbol)->string = 0);
((struct Symbol *)method->symbol)->string = __eCNameSpace__eC__types__CopyString(newId);
}
}
}
}
}
}
}
if(initDeclarators != (((void *)0)))
FreeList(initDeclarators, (void *)(FreeInitDeclarator));
}

void PreProcessClassDefinitions()
{
struct External * external, * next;

curExternal = (((void *)0));
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
ProcessClass(0, _class->definitions, _class->symbol, _class->baseSpecs, (((void *)0)), &_class->loc, ast, external->prev, (((void *)0)), (((void *)0)));
}
}
else if(external->type == 1)
{
struct Declaration * declaration = external->__anon1.declaration;

if(declaration && declaration->type == 1)
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
struct __eCNameSpace__eC__containers__OldList * initDeclarators = (((void *)0));
struct ExtDecl * extDecl = specifier->__anon1.__anon2.extDeclStruct;

specifier->__anon1.__anon2.extDeclStruct = (((void *)0));
if(inCompiler)
{
initDeclarators = declaration->__anon1.__anon1.declarators;
declaration->__anon1.__anon1.declarators = (((void *)0));
}
ProcessClass((specifier->type == 4) ? 6 : 0, specifier->__anon1.__anon2.definitions, symbol, specifier->__anon1.__anon2.baseSpecs, specifier->__anon1.__anon2.list, &specifier->loc, ast, external->prev, initDeclarators, extDecl);
}
}
}
}
}
else if(declaration && inCompiler && declaration->type == 3)
{
yylloc = declaration->loc;
if(declaration->declMode == 1)
CheckPublicExpression(declaration->__anon1.__anon2.exp, 1);
else if(declaration->declMode != 3)
CheckPublicExpression(declaration->__anon1.__anon2.exp, 2);
}
}
else if(external->type == 3)
{
}
else if(inCompiler && external->type == 0)
{
yylloc = external->__anon1.function->loc;
if(!external->__anon1.function->type)
external->__anon1.function->type = ProcessType(external->__anon1.function->specifiers, external->__anon1.function->declarator);
if(external->__anon1.function->declMode == 1)
CheckPublicDataType(external->__anon1.function->type, 1, "function");
else if(external->__anon1.function->declMode != 3)
CheckPublicDataType(external->__anon1.function->type, 2, "function");
}
}
}
}

void __eCRegisterModule_pass0(struct __eCNameSpace__eC__types__Instance * module)
{
struct __eCNameSpace__eC__types__Class __attribute__((unused)) * class;

__eCNameSpace__eC__types__eSystem_RegisterFunction("FullClassNameCat", "void FullClassNameCat(char * output, const char * className, bool includeTemplateParams)", FullClassNameCat, module, 1);
__eCNameSpace__eC__types__eSystem_RegisterFunction("PreProcessClassDefinitions", "void PreProcessClassDefinitions(void)", PreProcessClassDefinitions, module, 1);
}

