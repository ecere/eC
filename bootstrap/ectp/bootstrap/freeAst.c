/* Code generated from eC source file: freeAst.ec */
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
extern unsigned int inCompiler;

extern struct __eCNameSpace__eC__types__Property * __eCProp___eCNameSpace__eC__containers__BinaryTree_first;

extern struct __eCNameSpace__eC__types__Property * __eCProp___eCNameSpace__eC__containers__BTNode_next;

extern struct __eCNameSpace__eC__types__Property * __eCProp___eCNameSpace__eC__types__MapIterator_map;

extern struct __eCNameSpace__eC__types__Property * __eCProp___eCNameSpace__eC__types__Iterator_data;

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

struct __eCNameSpace__eC__sys__Item;

struct __eCNameSpace__eC__sys__OldLink;

struct CodePosition
{
int line;
int charPos;
int pos;
int included;
} eC_gcc_struct;

struct TemplatedType;

struct __eCNameSpace__eC__containers__LinkList
{
void * first;
void * last;
int count;
} eC_gcc_struct;

struct __eCNameSpace__eC__containers__LinkElement
{
void * prev;
void * next;
} eC_gcc_struct;

struct __eCNameSpace__eC__containers__IteratorPointer;

void __eCMethod___eCNameSpace__eC__containers__OldList_Remove(struct __eCNameSpace__eC__containers__OldList * this, void *  item);

void __eCMethod___eCNameSpace__eC__containers__OldList_Delete(struct __eCNameSpace__eC__containers__OldList * this, void *  item);

void __eCMethod___eCNameSpace__eC__containers__OldList_Free(struct __eCNameSpace__eC__containers__OldList * this, void (*  freeFn)(void * ));

struct Location
{
struct CodePosition start;
struct CodePosition end;
} eC_gcc_struct;

void FreeList(struct __eCNameSpace__eC__containers__OldList * list, void (* FreeFunction)(void *))
{
if(list != (((void *)0)))
{
struct __eCNameSpace__eC__sys__Item * item;

while((item = list->first))
{
__eCMethod___eCNameSpace__eC__containers__OldList_Remove(list, item);
FreeFunction(item);
}
(__eCNameSpace__eC__types__eSystem_Delete(list), list = 0);
}
}

struct Context;

extern struct Context * curContext;

extern struct Context * globalContext;

struct Expression;

static void _FreeExpression(struct Expression *  exp, unsigned int freePointer);

void FreeExpContents(struct Expression * exp)
{
_FreeExpression(exp, 0);
}

void FreeExpression(struct Expression * exp)
{
_FreeExpression(exp, 1);
}

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

struct __eCNameSpace__eC__types__MapIterator
{
struct __eCNameSpace__eC__types__Instance * container;
struct __eCNameSpace__eC__containers__IteratorPointer * pointer;
} eC_gcc_struct;

extern struct __eCNameSpace__eC__types__Instance * loadedModules;

struct __eCNameSpace__eC__types__Iterator
{
struct __eCNameSpace__eC__types__Instance * container;
struct __eCNameSpace__eC__containers__IteratorPointer * pointer;
} eC_gcc_struct;

extern void __eCNameSpace__eC__types__eInstance_DecRef(struct __eCNameSpace__eC__types__Instance * instance);

extern int __eCVMethodID___eCNameSpace__eC__containers__Container_Remove;

extern int __eCVMethodID___eCNameSpace__eC__containers__Container_GetFirst;

struct __eCNameSpace__eC__types__Instance * __eCProp___eCNameSpace__eC__types__MapIterator_Get_map(struct __eCNameSpace__eC__types__MapIterator * this);

void __eCProp___eCNameSpace__eC__types__MapIterator_Set_map(struct __eCNameSpace__eC__types__MapIterator * this, struct __eCNameSpace__eC__types__Instance * value);

unsigned int __eCMethod___eCNameSpace__eC__types__Iterator_Next(struct __eCNameSpace__eC__types__Iterator * this);

uint64 __eCProp___eCNameSpace__eC__types__Iterator_Get_data(struct __eCNameSpace__eC__types__Iterator * this);

void __eCProp___eCNameSpace__eC__types__Iterator_Set_data(struct __eCNameSpace__eC__types__Iterator * this, uint64 value);

unsigned int __eCMethod___eCNameSpace__eC__types__Iterator_Index(struct __eCNameSpace__eC__types__Iterator * this, const uint64 index, unsigned int create);

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

struct __eCNameSpace__eC__sys__NamedLink64;

struct __eCNameSpace__eC__sys__NamedLink64
{
struct __eCNameSpace__eC__sys__NamedLink64 * prev;
struct __eCNameSpace__eC__sys__NamedLink64 * next;
char *  name;
long long data;
} eC_gcc_struct;

struct MethodImport;

struct MethodImport
{
struct MethodImport * prev;
struct MethodImport * next;
char *  name;
unsigned int isVirtual;
} eC_gcc_struct;

void FreeMethodImport(struct MethodImport * imp)
{
(__eCNameSpace__eC__types__eSystem_Delete(imp->name), imp->name = 0);
}

void FreePropertyImport(struct MethodImport * imp)
{
(__eCNameSpace__eC__types__eSystem_Delete(imp->name), imp->name = 0);
}

struct Definition;

struct Definition
{
struct Definition * prev;
struct Definition * next;
char *  name;
int type;
} eC_gcc_struct;

void FreeModuleDefine(struct Definition * def)
{
(__eCNameSpace__eC__types__eSystem_Delete(def->name), def->name = 0);
}

struct Symbol;

extern struct Symbol * FindClass(const char *  name);

struct DBTableDef
{
char *  name;
struct Symbol * symbol;
struct __eCNameSpace__eC__containers__OldList *  definitions;
int declMode;
} eC_gcc_struct;

struct DBIndexItem;

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

void FreeClassImport(struct ClassImport * imp)
{
(__eCNameSpace__eC__types__eSystem_Delete(imp->name), imp->name = 0);
__eCMethod___eCNameSpace__eC__containers__OldList_Free(&imp->methods, (void *)(FreeMethodImport));
__eCMethod___eCNameSpace__eC__containers__OldList_Free(&imp->properties, (void *)(FreePropertyImport));
}

void FreeFunctionImport(struct ClassImport * imp)
{
(__eCNameSpace__eC__types__eSystem_Delete(imp->name), imp->name = 0);
}

struct ModuleImport;

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

void FreeModuleImport(struct ModuleImport * imp)
{
(__eCNameSpace__eC__types__eSystem_Delete(imp->name), imp->name = 0);
__eCMethod___eCNameSpace__eC__containers__OldList_Free(&imp->classes, (void *)(FreeClassImport));
__eCMethod___eCNameSpace__eC__containers__OldList_Free(&imp->functions, (void *)(FreeFunctionImport));
}

struct Declarator;

struct TemplateDatatype
{
struct __eCNameSpace__eC__containers__OldList *  specifiers;
struct Declarator * decl;
} eC_gcc_struct;

struct DBTableEntry;

struct External;

struct TopoEdge
{
struct __eCNameSpace__eC__containers__LinkElement in;
struct __eCNameSpace__eC__containers__LinkElement out;
struct External * from;
struct External * to;
unsigned int breakable;
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

struct PropertyWatch;

struct MemberInit;

struct MembersInit;

struct Enumerator;

struct Attribute;

struct Attribute
{
struct Attribute * prev;
struct Attribute * next;
struct Location loc;
char * attr;
struct Expression * exp;
} eC_gcc_struct;

struct AsmField;

struct Statement;

struct PropertyWatch
{
struct PropertyWatch * prev;
struct PropertyWatch * next;
struct Location loc;
struct Statement * compound;
struct __eCNameSpace__eC__containers__OldList *  properties;
unsigned int deleteWatch;
} eC_gcc_struct;

struct Initializer;

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

struct __eCNameSpace__eC__types__ClassProperty;

struct __eCNameSpace__eC__types__GlobalFunction;

struct __eCNameSpace__eC__types__Module;

extern void __eCNameSpace__eC__types__eModule_Unload(struct __eCNameSpace__eC__types__Instance * fromModule, struct __eCNameSpace__eC__types__Instance * module);

extern struct __eCNameSpace__eC__types__Instance * __thisModule;

extern struct __eCNameSpace__eC__types__GlobalFunction * __eCNameSpace__eC__types__eSystem_RegisterFunction(const char *  name, const char *  type, void *  func, struct __eCNameSpace__eC__types__Instance * module, int declMode);

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

void FreeSymbol(struct Symbol *  symbol);

void FreeExcludedSymbols(struct __eCNameSpace__eC__containers__OldList * excludedSymbols)
{
struct Symbol * symbol;

while((symbol = excludedSymbols->first))
{
__eCMethod___eCNameSpace__eC__containers__OldList_Remove(excludedSymbols, symbol);
FreeSymbol(symbol);
}
}

struct Identifier;

struct Enumerator
{
struct Enumerator * prev;
struct Enumerator * next;
struct Location loc;
struct Identifier * id;
struct Expression * exp;
struct __eCNameSpace__eC__containers__OldList *  attribs;
} eC_gcc_struct;

struct AsmField
{
struct AsmField * prev;
struct AsmField * next;
struct Location loc;
char *  command;
struct Expression * expression;
struct Identifier * symbolic;
} eC_gcc_struct;

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

struct DBIndexItem
{
struct DBIndexItem * prev;
struct DBIndexItem * next;
struct Identifier * id;
int order;
} eC_gcc_struct;

struct Instantiation;

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

void FreeExternal(struct External *  external);

void FreeASTTree(struct __eCNameSpace__eC__containers__OldList * ast)
{
if(ast != (((void *)0)))
{
struct External * external;

while((external = ast->first))
{
__eCMethod___eCNameSpace__eC__containers__OldList_Remove(ast, external);
FreeExternal(external);
}
(__eCNameSpace__eC__types__eSystem_Delete(ast), ast = 0);
}
}

struct ClassFunction;

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

struct FunctionDefinition;

struct InitDeclarator;

struct InitDeclarator
{
struct InitDeclarator * prev;
struct InitDeclarator * next;
struct Location loc;
struct Declarator * declarator;
struct Initializer * initializer;
} eC_gcc_struct;

struct Type;

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

struct __eCNameSpace__eC__types__ClassTemplateParameter;

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

struct __eCNameSpace__eC__types__GlobalFunction
{
struct __eCNameSpace__eC__types__GlobalFunction * prev;
struct __eCNameSpace__eC__types__GlobalFunction * next;
const char *  name;
int (*  function)();
struct __eCNameSpace__eC__types__Instance * module;
struct __eCNameSpace__eC__types__NameSpace *  nameSpace;
const char *  dataTypeString;
struct Type * dataType;
void *  symbol;
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

extern struct __eCNameSpace__eC__types__Class * __eCClass___eCNameSpace__eC__sys__NamedLink64;

extern struct __eCNameSpace__eC__types__Class * __eCClass_Type;

extern struct __eCNameSpace__eC__types__Class * __eCClass_Context;

extern struct __eCNameSpace__eC__types__Class * __eCClass_Symbol;

extern struct __eCNameSpace__eC__types__Class * __eCClass_TemplateArgument;

extern struct __eCNameSpace__eC__types__Class * __eCClass_TemplateDatatype;

extern struct __eCNameSpace__eC__types__Class * __eCClass_TemplateParameter;

extern struct __eCNameSpace__eC__types__Class * __eCClass_TemplatedType;

extern struct __eCNameSpace__eC__types__Class * __eCClass___eCNameSpace__eC__containers__BTNode;

extern struct __eCNameSpace__eC__types__Class * __eCClass_Enumerator;

extern struct __eCNameSpace__eC__types__Class * __eCClass_Specifier;

extern struct __eCNameSpace__eC__types__Class * __eCClass_Identifier;

extern struct __eCNameSpace__eC__types__Class * __eCClass_TypeName;

extern struct __eCNameSpace__eC__types__Class * __eCClass_Expression;

extern struct __eCNameSpace__eC__types__Class * __eCClass_Pointer;

extern struct __eCNameSpace__eC__types__Class * __eCClass_Attrib;

extern struct __eCNameSpace__eC__types__Class * __eCClass_Attribute;

extern struct __eCNameSpace__eC__types__Class * __eCClass_ExtDecl;

extern struct __eCNameSpace__eC__types__Class * __eCClass_Declarator;

extern struct __eCNameSpace__eC__types__Class * __eCClass_PropertyWatch;

extern struct __eCNameSpace__eC__types__Class * __eCClass_AsmField;

extern struct __eCNameSpace__eC__types__Class * __eCClass_Statement;

extern struct __eCNameSpace__eC__types__Class * __eCClass_Initializer;

extern struct __eCNameSpace__eC__types__Class * __eCClass_InitDeclarator;

extern struct __eCNameSpace__eC__types__Class * __eCClass_Declaration;

extern struct __eCNameSpace__eC__types__Class * __eCClass_FunctionDefinition;

extern struct __eCNameSpace__eC__types__Class * __eCClass_MemberInit;

extern struct __eCNameSpace__eC__types__Class * __eCClass_MembersInit;

extern struct __eCNameSpace__eC__types__Class * __eCClass_Instantiation;

extern struct __eCNameSpace__eC__types__Class * __eCClass_ClassFunction;

extern struct __eCNameSpace__eC__types__Class * __eCClass_PropertyDef;

extern struct __eCNameSpace__eC__types__Class * __eCClass_ClassDef;

extern struct __eCNameSpace__eC__types__Class * __eCClass_ClassDefinition;

extern struct __eCNameSpace__eC__types__Class * __eCClass_DBIndexItem;

extern struct __eCNameSpace__eC__types__Class * __eCClass_DBTableEntry;

extern struct __eCNameSpace__eC__types__Class * __eCClass_DBTableDef;

extern struct __eCNameSpace__eC__types__Class * __eCClass___eCNameSpace__eC__containers__LinkList;

extern struct __eCNameSpace__eC__types__Class * __eCClass_TopoEdge;

extern struct __eCNameSpace__eC__types__Class * __eCClass_External;

extern struct __eCNameSpace__eC__types__Class * __eCClass___eCNameSpace__eC__types__Module;

extern struct __eCNameSpace__eC__types__Class * __eCClass___eCNameSpace__eC__containers__List;

extern struct __eCNameSpace__eC__types__Class * __eCClass___eCNameSpace__eC__types__Map;

extern struct __eCNameSpace__eC__types__Class * __eCClass___eCNameSpace__eC__types__Application;

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

void FreeTemplateType(struct TemplatedType * type)
{
((type ? __extension__ ({
void * __eCPtrToDelete = (type);

__eCClass_TemplatedType->Destructor ? __eCClass_TemplatedType->Destructor((void *)__eCPtrToDelete) : 0, __eCClass___eCNameSpace__eC__containers__BTNode->Destructor ? __eCClass___eCNameSpace__eC__containers__BTNode->Destructor((void *)__eCPtrToDelete) : 0, __eCNameSpace__eC__types__eSystem_Delete(__eCPtrToDelete);
}) : 0), type = 0);
}

void FreeAttribute(struct Attribute * attr)
{
(__eCNameSpace__eC__types__eSystem_Delete(attr->attr), attr->attr = 0);
if(attr->exp)
FreeExpression(attr->exp);
((attr ? __extension__ ({
void * __eCPtrToDelete = (attr);

__eCClass_Attribute->Destructor ? __eCClass_Attribute->Destructor((void *)__eCPtrToDelete) : 0, __eCNameSpace__eC__types__eSystem_Delete(__eCPtrToDelete);
}) : 0), attr = 0);
}

void __eCUnregisterModule_freeAst(struct __eCNameSpace__eC__types__Instance * module)
{

}

void FreeContext(struct Context * context)
{
struct Symbol * symbol;

if(context == curContext)
curContext = globalContext;
while((symbol = (struct Symbol *)context->types.root))
{
__eCMethod___eCNameSpace__eC__containers__BinaryTree_Remove(&context->types, (struct __eCNameSpace__eC__containers__BTNode *)symbol);
FreeSymbol(symbol);
}
while((symbol = (struct Symbol *)context->classes.root))
{
__eCMethod___eCNameSpace__eC__containers__BinaryTree_Remove(&context->classes, (struct __eCNameSpace__eC__containers__BTNode *)symbol);
FreeSymbol(symbol);
}
while((symbol = (struct Symbol *)context->symbols.root))
{
__eCMethod___eCNameSpace__eC__containers__BinaryTree_Remove(&context->symbols, (struct __eCNameSpace__eC__containers__BTNode *)symbol);
FreeSymbol(symbol);
}
while((symbol = (struct Symbol *)context->structSymbols.root))
{
__eCMethod___eCNameSpace__eC__containers__BinaryTree_Remove(&context->structSymbols, (struct __eCNameSpace__eC__containers__BTNode *)symbol);
FreeSymbol(symbol);
}
while((symbol = (struct Symbol *)context->templateTypes.root))
{
__eCMethod___eCNameSpace__eC__containers__BinaryTree_Remove(&context->templateTypes, (struct __eCNameSpace__eC__containers__BTNode *)symbol);
FreeTemplateType((struct TemplatedType *)symbol);
}
context->nextID = 0;
context->simpleID = 0;
context->parent = (((void *)0));
}

void FreeAttrib(struct Attrib * attr)
{
if(attr->attribs)
FreeList(attr->attribs, (void *)(FreeAttribute));
((attr ? __extension__ ({
void * __eCPtrToDelete = (attr);

__eCClass_Attrib->Destructor ? __eCClass_Attrib->Destructor((void *)__eCPtrToDelete) : 0, __eCNameSpace__eC__types__eSystem_Delete(__eCPtrToDelete);
}) : 0), attr = 0);
}

void FreeExtDecl(struct ExtDecl * extDecl)
{
if(extDecl->type == 1 && extDecl->__anon1.attr)
FreeAttrib(extDecl->__anon1.attr);
else if(extDecl->type == 0)
(__eCNameSpace__eC__types__eSystem_Delete(extDecl->__anon1.s), extDecl->__anon1.s = 0);
else if(extDecl->type == 2 && extDecl->__anon1.multiAttr)
FreeList(extDecl->__anon1.multiAttr, (void *)(FreeAttrib));
((extDecl ? __extension__ ({
void * __eCPtrToDelete = (extDecl);

__eCClass_ExtDecl->Destructor ? __eCClass_ExtDecl->Destructor((void *)__eCPtrToDelete) : 0, __eCNameSpace__eC__types__eSystem_Delete(__eCPtrToDelete);
}) : 0), extDecl = 0);
}

struct TemplateArgument;

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

struct Specifier;

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

void FreeType(struct Type * type)
{
if(type)
{
type->refCount--;
if(type->refCount <= 0)
{
switch(type->kind)
{
case 15:
{
struct __eCNameSpace__eC__sys__NamedLink64 * member, * next;

(__eCNameSpace__eC__types__eSystem_Delete(type->__anon1.__anon1.enumName), type->__anon1.__anon1.enumName = 0);
for(member = type->__anon1.__anon1.members.first; member; member = next)
{
next = member->next;
__eCMethod___eCNameSpace__eC__containers__OldList_Remove(&type->__anon1.__anon1.members, member);
(__eCNameSpace__eC__types__eSystem_Delete(member->name), member->name = 0);
((member ? __extension__ ({
void * __eCPtrToDelete = (member);

__eCClass___eCNameSpace__eC__sys__NamedLink64->Destructor ? __eCClass___eCNameSpace__eC__sys__NamedLink64->Destructor((void *)__eCPtrToDelete) : 0, __eCNameSpace__eC__types__eSystem_Delete(__eCPtrToDelete);
}) : 0), member = 0);
}
break;
}
case 9:
case 10:
{
struct Type * member, * next;

(__eCNameSpace__eC__types__eSystem_Delete(type->__anon1.__anon1.enumName), type->__anon1.__anon1.enumName = 0);
for(member = type->__anon1.__anon1.members.first; member; member = next)
{
next = member->next;
if(member->refCount == 1)
__eCMethod___eCNameSpace__eC__containers__OldList_Remove(&type->__anon1.__anon1.members, member);
FreeType(member);
}
break;
}
case 11:
{
struct Type * param, * next;

if(type->__anon1.__anon2.returnType)
FreeType(type->__anon1.__anon2.returnType);
for(param = type->__anon1.__anon2.params.first; param; param = next)
{
next = param->next;
FreeType(param);
}
break;
}
case 12:
if(type->__anon1.__anon4.freeExp && type->__anon1.__anon4.arraySizeExp)
FreeExpression(type->__anon1.__anon4.arraySizeExp);
case 13:
if(type->__anon1.type)
FreeType(type->__anon1.type);
break;
}
(__eCNameSpace__eC__types__eSystem_Delete(type->name), type->name = 0);
(__eCNameSpace__eC__types__eSystem_Delete(type->typeName), type->typeName = 0);
((type ? __extension__ ({
void * __eCPtrToDelete = (type);

__eCClass_Type->Destructor ? __eCClass_Type->Destructor((void *)__eCPtrToDelete) : 0, __eCNameSpace__eC__types__eSystem_Delete(__eCPtrToDelete);
}) : 0), type = 0);
}
}
}

static void FreeDataMember(struct __eCNameSpace__eC__types__DataMember * parentMember)
{
struct __eCNameSpace__eC__types__DataMember * dataMember;

for(dataMember = parentMember->members.first; dataMember; dataMember = dataMember->next)
{
if(dataMember->type == 2 || dataMember->type == 1)
FreeDataMember(dataMember);
if(dataMember->dataType)
{
FreeType(dataMember->dataType);
dataMember->dataType = (((void *)0));
}
}
}

static void FreeClassProperties(struct __eCNameSpace__eC__types__ClassProperty * classProp)
{
if(classProp->left)
FreeClassProperties(classProp->left);
if(classProp->right)
FreeClassProperties(classProp->right);
if(classProp->dataType)
{
FreeType(classProp->dataType);
classProp->dataType = (((void *)0));
}
}

void FreeDeclarator(struct Declarator *  decl);

void FreeSpecifier(struct Specifier *  spec);

void FreeTemplateDataType(struct TemplateDatatype * type)
{
if(type->decl)
FreeDeclarator(type->decl);
if(type->specifiers)
FreeList(type->specifiers, (void *)(FreeSpecifier));
((type ? __extension__ ({
void * __eCPtrToDelete = (type);

__eCClass_TemplateDatatype->Destructor ? __eCClass_TemplateDatatype->Destructor((void *)__eCPtrToDelete) : 0, __eCNameSpace__eC__types__eSystem_Delete(__eCPtrToDelete);
}) : 0), type = 0);
}

void FreeIdentifier(struct Identifier * id)
{
if(id->badID)
FreeIdentifier(id->badID);
(__eCNameSpace__eC__types__eSystem_Delete(id->string), id->string = 0);
if(id->_class)
FreeSpecifier(id->_class);
((id ? __extension__ ({
void * __eCPtrToDelete = (id);

__eCClass_Identifier->Destructor ? __eCClass_Identifier->Destructor((void *)__eCPtrToDelete) : 0, __eCNameSpace__eC__types__eSystem_Delete(__eCPtrToDelete);
}) : 0), id = 0);
}

void FreeTypeName(struct TypeName * typeName)
{
if(typeName->qualifiers)
FreeList(typeName->qualifiers, (void *)(FreeSpecifier));
if(typeName->declarator)
FreeDeclarator(typeName->declarator);
if(typeName->bitCount)
FreeExpression(typeName->bitCount);
((typeName ? __extension__ ({
void * __eCPtrToDelete = (typeName);

__eCClass_TypeName->Destructor ? __eCClass_TypeName->Destructor((void *)__eCPtrToDelete) : 0, __eCNameSpace__eC__types__eSystem_Delete(__eCPtrToDelete);
}) : 0), typeName = 0);
}

void FreePointer(struct Pointer * pointer)
{
if(pointer->pointer)
FreePointer(pointer->pointer);
if(pointer->qualifiers)
FreeList(pointer->qualifiers, (void *)(FreeSpecifier));
((pointer ? __extension__ ({
void * __eCPtrToDelete = (pointer);

__eCClass_Pointer->Destructor ? __eCClass_Pointer->Destructor((void *)__eCPtrToDelete) : 0, __eCNameSpace__eC__types__eSystem_Delete(__eCPtrToDelete);
}) : 0), pointer = 0);
}

void FreeTemplateArgument(struct TemplateArgument * arg)
{
switch(arg->type)
{
case 2:
if(arg->__anon1.expression)
FreeExpression(arg->__anon1.expression);
break;
case 1:
if(arg->__anon1.identifier)
FreeIdentifier(arg->__anon1.identifier);
break;
case 0:
if(arg->__anon1.templateDatatype)
FreeTemplateDataType(arg->__anon1.templateDatatype);
break;
}
if(arg->name)
FreeIdentifier(arg->name);
((arg ? __extension__ ({
void * __eCPtrToDelete = (arg);

__eCClass_TemplateArgument->Destructor ? __eCClass_TemplateArgument->Destructor((void *)__eCPtrToDelete) : 0, __eCNameSpace__eC__types__eSystem_Delete(__eCPtrToDelete);
}) : 0), arg = 0);
}

void FreeEnumerator(struct Enumerator * enumerator)
{
if(enumerator->id)
FreeIdentifier(enumerator->id);
if(enumerator->attribs)
FreeList(enumerator->attribs, (void *)(FreeAttrib));
if(enumerator->exp)
FreeExpression(enumerator->exp);
((enumerator ? __extension__ ({
void * __eCPtrToDelete = (enumerator);

__eCClass_Enumerator->Destructor ? __eCClass_Enumerator->Destructor((void *)__eCPtrToDelete) : 0, __eCNameSpace__eC__types__eSystem_Delete(__eCPtrToDelete);
}) : 0), enumerator = 0);
}

void FreeAsmField(struct AsmField * field)
{
if(field->expression)
FreeExpression(field->expression);
if(field->symbolic)
FreeIdentifier(field->symbolic);
(__eCNameSpace__eC__types__eSystem_Delete(field->command), field->command = 0);
((field ? __extension__ ({
void * __eCPtrToDelete = (field);

__eCClass_AsmField->Destructor ? __eCClass_AsmField->Destructor((void *)__eCPtrToDelete) : 0, __eCNameSpace__eC__types__eSystem_Delete(__eCPtrToDelete);
}) : 0), field = 0);
}

void FreeInitializer(struct Initializer * initializer)
{
switch(initializer->type)
{
case 1:
FreeList(initializer->__anon1.list, (void *)(FreeInitializer));
break;
case 0:
if(initializer->__anon1.exp)
FreeExpression(initializer->__anon1.exp);
break;
}
if(initializer->id)
FreeIdentifier(initializer->id);
((initializer ? __extension__ ({
void * __eCPtrToDelete = (initializer);

__eCClass_Initializer->Destructor ? __eCClass_Initializer->Destructor((void *)__eCPtrToDelete) : 0, __eCNameSpace__eC__types__eSystem_Delete(__eCPtrToDelete);
}) : 0), initializer = 0);
}

void FreeDBIndexItem(struct DBIndexItem * item)
{
if(item->id)
FreeIdentifier(item->id);
((item ? __extension__ ({
void * __eCPtrToDelete = (item);

__eCClass_DBIndexItem->Destructor ? __eCClass_DBIndexItem->Destructor((void *)__eCPtrToDelete) : 0, __eCNameSpace__eC__types__eSystem_Delete(__eCPtrToDelete);
}) : 0), item = 0);
}

void FreeDeclarator(struct Declarator * decl)
{
if(decl->declarator)
FreeDeclarator(decl->declarator);
switch(decl->type)
{
case 0:
if(decl->__anon1.structDecl.exp)
FreeExpression(decl->__anon1.structDecl.exp);
if(decl->__anon1.structDecl.posExp)
FreeExpression(decl->__anon1.structDecl.posExp);
if(decl->__anon1.structDecl.attrib)
FreeAttrib(decl->__anon1.structDecl.attrib);
break;
case 1:
FreeIdentifier(decl->__anon1.identifier);
break;
case 2:
break;
case 3:
if(decl->__anon1.array.exp)
FreeExpression(decl->__anon1.array.exp);
if(decl->__anon1.array.enumClass)
FreeSpecifier(decl->__anon1.array.enumClass);
break;
case 4:
FreeList(decl->__anon1.function.parameters, (void *)(FreeTypeName));
break;
case 5:
if(decl->__anon1.pointer.pointer)
FreePointer(decl->__anon1.pointer.pointer);
break;
case 6:
case 7:
if(decl->__anon1.extended.extended)
FreeExtDecl(decl->__anon1.extended.extended);
break;
}
((decl ? __extension__ ({
void * __eCPtrToDelete = (decl);

__eCClass_Declarator->Destructor ? __eCClass_Declarator->Destructor((void *)__eCPtrToDelete) : 0, __eCNameSpace__eC__types__eSystem_Delete(__eCPtrToDelete);
}) : 0), decl = 0);
}

void FreeTemplateParameter(struct TemplateParameter * param)
{
if(param->identifier)
{
FreeIdentifier(param->identifier);
}
if(param->type == 0 || param->type == 2)
{
if(param->__anon1.dataType)
FreeTemplateDataType(param->__anon1.dataType);
}
if(param->defaultArgument)
FreeTemplateArgument(param->defaultArgument);
if(param->baseType)
FreeType(param->baseType);
((param ? __extension__ ({
void * __eCPtrToDelete = (param);

__eCClass_TemplateParameter->Destructor ? __eCClass_TemplateParameter->Destructor((void *)__eCPtrToDelete) : 0, __eCNameSpace__eC__types__eSystem_Delete(__eCPtrToDelete);
}) : 0), param = 0);
}

void FreeInitDeclarator(struct InitDeclarator * decl)
{
if(decl->declarator)
FreeDeclarator(decl->declarator);
if(decl->initializer)
FreeInitializer(decl->initializer);
((decl ? __extension__ ({
void * __eCPtrToDelete = (decl);

__eCClass_InitDeclarator->Destructor ? __eCClass_InitDeclarator->Destructor((void *)__eCPtrToDelete) : 0, __eCNameSpace__eC__types__eSystem_Delete(__eCPtrToDelete);
}) : 0), decl = 0);
}

void FreeMemberInit(struct MemberInit * init)
{
if(init->initializer)
FreeInitializer(init->initializer);
if(init->identifiers)
FreeList(init->identifiers, (void *)(FreeIdentifier));
((init ? __extension__ ({
void * __eCPtrToDelete = (init);

__eCClass_MemberInit->Destructor ? __eCClass_MemberInit->Destructor((void *)__eCPtrToDelete) : 0, __eCNameSpace__eC__types__eSystem_Delete(__eCPtrToDelete);
}) : 0), init = 0);
}

void FreeDBTableEntry(struct DBTableEntry * entry)
{
if(entry->id)
FreeIdentifier(entry->id);
switch(entry->type)
{
case 0:
if(entry->__anon1.__anon1.dataType)
FreeTypeName(entry->__anon1.__anon1.dataType);
if(entry->__anon1.__anon1.name)
(__eCNameSpace__eC__types__eSystem_Delete(entry->__anon1.__anon1.name), entry->__anon1.__anon1.name = 0);
break;
case 1:
if(entry->__anon1.items)
FreeList(entry->__anon1.items, (void *)(FreeDBIndexItem));
break;
}
((entry ? __extension__ ({
void * __eCPtrToDelete = (entry);

__eCClass_DBTableEntry->Destructor ? __eCClass_DBTableEntry->Destructor((void *)__eCPtrToDelete) : 0, __eCNameSpace__eC__types__eSystem_Delete(__eCPtrToDelete);
}) : 0), entry = 0);
}

void FreeSymbol(struct Symbol * symbol)
{
struct __eCNameSpace__eC__sys__OldLink * link;

if(symbol->propCategory)
FreeExpression(symbol->propCategory);
FreeType(symbol->type);
while((link = symbol->templatedClasses.first))
__eCMethod___eCNameSpace__eC__containers__OldList_Delete(&symbol->templatedClasses, link);
(__eCNameSpace__eC__types__eSystem_Delete(symbol->string), symbol->string = 0);
if(symbol->templateParams)
FreeList(symbol->templateParams, (void *)(FreeTemplateParameter));
(__eCNameSpace__eC__types__eSystem_Delete(symbol->constructorName), symbol->constructorName = 0);
(__eCNameSpace__eC__types__eSystem_Delete(symbol->structName), symbol->structName = 0);
(__eCNameSpace__eC__types__eSystem_Delete(symbol->className), symbol->className = 0);
(__eCNameSpace__eC__types__eSystem_Delete(symbol->destructorName), symbol->destructorName = 0);
(__eCNameSpace__eC__types__eSystem_Delete(symbol->shortName), symbol->shortName = 0);
if(symbol->ctx)
{
FreeContext(symbol->ctx);
((symbol->ctx ? __extension__ ({
void * __eCPtrToDelete = (symbol->ctx);

__eCClass_Context->Destructor ? __eCClass_Context->Destructor((void *)__eCPtrToDelete) : 0, __eCNameSpace__eC__types__eSystem_Delete(__eCPtrToDelete);
}) : 0), symbol->ctx = 0);
}
((symbol ? __extension__ ({
void * __eCPtrToDelete = (symbol);

__eCClass_Symbol->Destructor ? __eCClass_Symbol->Destructor((void *)__eCPtrToDelete) : 0, __eCNameSpace__eC__types__eSystem_Delete(__eCPtrToDelete);
}) : 0), symbol = 0);
}

void FreeModuleData(struct __eCNameSpace__eC__types__Instance * module)
{
struct __eCNameSpace__eC__types__Class * _class;
struct __eCNameSpace__eC__types__GlobalFunction * function;

for(_class = ((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->classes.first; _class; _class = _class->next)
{
struct __eCNameSpace__eC__types__DataMember * dataMember;
struct __eCNameSpace__eC__types__Method * method;
struct __eCNameSpace__eC__types__ClassTemplateParameter * param;

if(_class->templateClass)
continue;
if(_class->dataType)
{
FreeType(_class->dataType);
_class->dataType = (((void *)0));
}
for(dataMember = _class->membersAndProperties.first; dataMember; dataMember = dataMember->next)
{
if(dataMember->isProperty)
{
struct __eCNameSpace__eC__types__Property * prop = (struct __eCNameSpace__eC__types__Property *)dataMember;

if(prop->symbol)
{
FreeSymbol(prop->symbol);
}
}
else
{
if(dataMember->type == 2 || dataMember->type == 1)
FreeDataMember(dataMember);
}
if(dataMember->dataType)
{
FreeType(dataMember->dataType);
dataMember->dataType = (((void *)0));
}
}
for(dataMember = _class->conversions.first; dataMember; dataMember = dataMember->next)
{
struct __eCNameSpace__eC__types__Property * prop = (struct __eCNameSpace__eC__types__Property *)dataMember;

if(prop->symbol)
{
FreeSymbol(prop->symbol);
}
if(prop->dataType)
{
FreeType(prop->dataType);
prop->dataType = (((void *)0));
}
}
if(__eCProp___eCNameSpace__eC__containers__BinaryTree_Get_first(&_class->classProperties))
FreeClassProperties((struct __eCNameSpace__eC__types__ClassProperty *)__eCProp___eCNameSpace__eC__containers__BinaryTree_Get_first(&_class->classProperties));
for(method = (struct __eCNameSpace__eC__types__Method *)__eCProp___eCNameSpace__eC__containers__BinaryTree_Get_first(&_class->methods); method; method = (struct __eCNameSpace__eC__types__Method *)__eCProp___eCNameSpace__eC__containers__BTNode_Get_next(((struct __eCNameSpace__eC__containers__BTNode *)method)))
{
if(method->dataType)
{
FreeType(method->dataType);
method->dataType = (((void *)0));
}
if(method->symbol)
{
FreeSymbol(method->symbol);
}
}
for(param = _class->templateParams.first; param; param = param->next)
{
if(param->param)
{
FreeTemplateParameter(param->param);
param->param = (((void *)0));
}
}
}
for(function = ((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->functions.first; function; function = function->next)
{
if(function->dataType)
FreeType(function->dataType);
if(function->symbol)
FreeSymbol(function->symbol);
}
if(!inCompiler)
{
struct __eCNameSpace__eC__types__MapIterator mapIt = (mapIt.container = (void *)0, mapIt.pointer = (void *)0, __eCProp___eCNameSpace__eC__types__MapIterator_Set_map(&mapIt, loadedModules), mapIt);

while(__eCMethod___eCNameSpace__eC__types__Iterator_Next((void *)(&mapIt)))
{
struct __eCNameSpace__eC__types__Instance * list = ((struct __eCNameSpace__eC__types__Instance *)(uintptr_t)__eCProp___eCNameSpace__eC__types__Iterator_Get_data((void *)(&mapIt)));
struct __eCNameSpace__eC__types__Iterator it =
{
list, 0
};
unsigned int found = 0;

while(__eCMethod___eCNameSpace__eC__types__Iterator_Next(&it))
{
if(((struct __eCNameSpace__eC__types__Instance *)(uintptr_t)__eCProp___eCNameSpace__eC__types__Iterator_Get_data(&it)) == module)
{
(__extension__ ({
void (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, struct __eCNameSpace__eC__containers__IteratorPointer * it);

__internal_VirtualMethod = ((void (*)(struct __eCNameSpace__eC__types__Instance *, struct __eCNameSpace__eC__containers__IteratorPointer * it))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = list;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__containers__List->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__containers__Container_Remove]);
__internal_VirtualMethod ? __internal_VirtualMethod(list, it.pointer) : (void)1;
}));
found = 1;
break;
}
}
if(found)
{
if(((struct __eCNameSpace__eC__containers__LinkList *)(((char *)list + 0 + sizeof(struct __eCNameSpace__eC__types__Instance))))->count == 1)
{
struct __eCNameSpace__eC__types__Instance * mod = (((struct __eCNameSpace__eC__types__Instance *)((uintptr_t)(__extension__ ({
struct __eCNameSpace__eC__types__Iterator __internalIterator =
{
list, 0
};

__eCMethod___eCNameSpace__eC__types__Iterator_Index(&__internalIterator, ((uint64)(0)), 0);
((struct __eCNameSpace__eC__types__Instance *)(uintptr_t)__eCProp___eCNameSpace__eC__types__Iterator_Get_data(&__internalIterator));
})))));

(__extension__ ({
void (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, struct __eCNameSpace__eC__containers__IteratorPointer * it);

__internal_VirtualMethod = ((void (*)(struct __eCNameSpace__eC__types__Instance *, struct __eCNameSpace__eC__containers__IteratorPointer * it))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = list;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__containers__List->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__containers__Container_Remove]);
__internal_VirtualMethod ? __internal_VirtualMethod(list, (__extension__ ({
struct __eCNameSpace__eC__containers__IteratorPointer * (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *);

__internal_VirtualMethod = ((struct __eCNameSpace__eC__containers__IteratorPointer * (*)(struct __eCNameSpace__eC__types__Instance *))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = list;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__containers__List->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__containers__Container_GetFirst]);
__internal_VirtualMethod ? __internal_VirtualMethod(list) : (struct __eCNameSpace__eC__containers__IteratorPointer *)1;
}))) : (void)1;
}));
(__extension__ ({
void (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, struct __eCNameSpace__eC__containers__IteratorPointer * it);

__internal_VirtualMethod = ((void (*)(struct __eCNameSpace__eC__types__Instance *, struct __eCNameSpace__eC__containers__IteratorPointer * it))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = loadedModules;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__types__Map->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__containers__Container_Remove]);
__internal_VirtualMethod ? __internal_VirtualMethod(loadedModules, mapIt.pointer) : (void)1;
}));
(__eCNameSpace__eC__types__eInstance_DecRef(list), list = 0);
__eCNameSpace__eC__types__eModule_Unload(((struct __eCNameSpace__eC__types__Module *)(((char *)__thisModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->application, mod);
}
break;
}
}
}
}

void FreeDBTable(struct DBTableDef * table)
{
if(table->definitions)
FreeList(table->definitions, (void *)(FreeDBTableEntry));
if(table->name)
(__eCNameSpace__eC__types__eSystem_Delete(table->name), table->name = 0);
((table ? __extension__ ({
void * __eCPtrToDelete = (table);

__eCClass_DBTableDef->Destructor ? __eCClass_DBTableDef->Destructor((void *)__eCPtrToDelete) : 0, __eCNameSpace__eC__types__eSystem_Delete(__eCPtrToDelete);
}) : 0), table = 0);
}

void FreeTypeData(struct __eCNameSpace__eC__types__Instance * privateModule)
{
struct __eCNameSpace__eC__types__Instance * m;

for(m = ((struct __eCNameSpace__eC__types__Application *)(((char *)((struct __eCNameSpace__eC__types__Module *)(((char *)privateModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->application + sizeof(struct __eCNameSpace__eC__types__Module) + sizeof(struct __eCNameSpace__eC__types__Instance))))->allModules.last; m; m = ((struct __eCNameSpace__eC__types__Module *)(((char *)m + sizeof(struct __eCNameSpace__eC__types__Instance))))->prev)
{
FreeModuleData(m);
}
FreeModuleData(privateModule);
}

void FreeSpecifierContents(struct Specifier *  spec);

void FreeSpecifier(struct Specifier * spec)
{
if(spec)
{
FreeSpecifierContents(spec);
((spec ? __extension__ ({
void * __eCPtrToDelete = (spec);

__eCClass_Specifier->Destructor ? __eCClass_Specifier->Destructor((void *)__eCPtrToDelete) : 0, __eCNameSpace__eC__types__eSystem_Delete(__eCPtrToDelete);
}) : 0), spec = 0);
}
}

struct ClassDef;

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

void FreeStatement(struct Statement *  stmt);

void FreePropertyWatch(struct PropertyWatch * watcher)
{
if(watcher->properties)
FreeList(watcher->properties, (void *)(FreeIdentifier));
if(watcher->compound)
FreeStatement(watcher->compound);
((watcher ? __extension__ ({
void * __eCPtrToDelete = (watcher);

__eCClass_PropertyWatch->Destructor ? __eCClass_PropertyWatch->Destructor((void *)__eCPtrToDelete) : 0, __eCNameSpace__eC__types__eSystem_Delete(__eCPtrToDelete);
}) : 0), watcher = 0);
}

void FreeProperty(struct PropertyDef * def)
{
if(def->specifiers)
FreeList(def->specifiers, (void *)(FreeSpecifier));
if(def->declarator)
FreeDeclarator(def->declarator);
if(def->id)
FreeIdentifier(def->id);
if(def->getStmt)
FreeStatement(def->getStmt);
if(def->setStmt)
FreeStatement(def->setStmt);
if(def->issetStmt)
FreeStatement(def->issetStmt);
if(def->category)
FreeExpression(def->category);
if(def->symbol)
{
}
((def ? __extension__ ({
void * __eCPtrToDelete = (def);

__eCClass_PropertyDef->Destructor ? __eCClass_PropertyDef->Destructor((void *)__eCPtrToDelete) : 0, __eCNameSpace__eC__types__eSystem_Delete(__eCPtrToDelete);
}) : 0), def = 0);
}

void FreeMembersInit(struct MembersInit *  init);

void FreeInstance(struct Instantiation * inst)
{
if(inst->members)
{
FreeList(inst->members, (void *)(FreeMembersInit));
}
if(inst->exp)
FreeExpression(inst->exp);
if(inst->data)
{
struct Symbol * classSym = FindClass(inst->_class->__anon1.__anon1.name);
struct __eCNameSpace__eC__types__Class * _class = classSym ? classSym->__anon1.registered : (((void *)0));

if(_class)
{
if(_class->type == 0)
{
struct __eCNameSpace__eC__types__Instance * instance = (struct __eCNameSpace__eC__types__Instance *)inst->data;

(__eCNameSpace__eC__types__eInstance_DecRef(instance), instance = 0);
}
else if(_class->type == 5)
{
if(_class->Destructor)
_class->Destructor((struct __eCNameSpace__eC__types__Instance *)inst->data);
(__eCNameSpace__eC__types__eSystem_Delete(inst->data), inst->data = 0);
}
else if(_class->type == 1)
{
(__eCNameSpace__eC__types__eSystem_Delete(inst->data), inst->data = 0);
}
}
else
{
struct __eCNameSpace__eC__types__Instance * instance = (struct __eCNameSpace__eC__types__Instance *)inst->data;

(__eCNameSpace__eC__types__eInstance_DecRef(instance), instance = 0);
}
}
if(inst->_class)
FreeSpecifier(inst->_class);
((inst ? __extension__ ({
void * __eCPtrToDelete = (inst);

__eCClass_Instantiation->Destructor ? __eCClass_Instantiation->Destructor((void *)__eCPtrToDelete) : 0, __eCNameSpace__eC__types__eSystem_Delete(__eCPtrToDelete);
}) : 0), inst = 0);
}

static void _FreeExpression(struct Expression * exp, unsigned int freePointer)
{
switch(exp->type)
{
case 13:
case 26:
FreeExpression(exp->__anon1._new.size);
FreeTypeName(exp->__anon1._new.typeName);
break;
case 14:
case 27:
FreeExpression(exp->__anon1._renew.exp);
FreeExpression(exp->__anon1._renew.size);
FreeTypeName(exp->__anon1._renew.typeName);
break;
case 2:
(__eCNameSpace__eC__types__eSystem_Delete(exp->__anon1.__anon1.constant), exp->__anon1.__anon1.constant = 0);
break;
case 0:
if(exp->__anon1.__anon1.identifier)
FreeIdentifier(exp->__anon1.__anon1.identifier);
break;
case 1:
if(exp->__anon1.instance)
{
FreeInstance(exp->__anon1.instance);
exp->__anon1.instance = (((void *)0));
}
break;
case 3:
(__eCNameSpace__eC__types__eSystem_Delete(exp->__anon1.__anon2.string), exp->__anon1.__anon2.string = 0);
break;
case 4:
if(exp->__anon1.op.exp1)
FreeExpression(exp->__anon1.op.exp1);
if(exp->__anon1.op.exp2)
FreeExpression(exp->__anon1.op.exp2);
break;
case 5:
{
FreeList(exp->__anon1.list, (void *)(FreeExpression));
break;
}
case 6:
{
if(exp->__anon1.index.exp)
FreeExpression(exp->__anon1.index.exp);
if(exp->__anon1.index.index)
FreeList(exp->__anon1.index.index, (void *)(FreeExpression));
break;
}
case 7:
{
if(exp->__anon1.call.exp)
FreeExpression(exp->__anon1.call.exp);
if(exp->__anon1.call.arguments)
FreeList(exp->__anon1.call.arguments, (void *)(FreeExpression));
break;
}
case 8:
case 9:
if(exp->__anon1.member.exp)
FreeExpression(exp->__anon1.member.exp);
if(exp->__anon1.member.member)
FreeIdentifier(exp->__anon1.member.member);
break;
case 10:
FreeTypeName(exp->__anon1.typeName);
break;
case 36:
FreeTypeName(exp->__anon1.typeName);
break;
case 40:
if(exp->__anon1.offset.typeName)
FreeTypeName(exp->__anon1.offset.typeName);
if(exp->__anon1.offset.id)
FreeIdentifier(exp->__anon1.offset.id);
break;
case 11:
if(exp->__anon1.cast.exp)
FreeExpression(exp->__anon1.cast.exp);
FreeTypeName(exp->__anon1.cast.typeName);
break;
case 12:
{
if(exp->__anon1.cond.cond)
FreeExpression(exp->__anon1.cond.cond);
if(exp->__anon1.cond.exp)
FreeList(exp->__anon1.cond.exp, (void *)(FreeExpression));
if(exp->__anon1.cond.elseExp)
FreeExpression(exp->__anon1.cond.elseExp);
break;
}
case 23:
{
if(exp->__anon1.compound)
FreeStatement(exp->__anon1.compound);
break;
}
case 32:
{
if(exp->__anon1.list)
FreeList(exp->__anon1.list, (void *)(FreeExpression));
break;
}
case 33:
{
if(exp->__anon1.initializer.typeName)
FreeTypeName(exp->__anon1.initializer.typeName);
if(exp->__anon1.initializer.initializer)
FreeInitializer(exp->__anon1.initializer.initializer);
break;
}
case 16:
break;
case 24:
if(exp->__anon1._classExp.specifiers)
FreeList(exp->__anon1._classExp.specifiers, (void *)(FreeSpecifier));
if(exp->__anon1._classExp.decl)
FreeDeclarator(exp->__anon1._classExp.decl);
break;
case 29:
case 31:
case 30:
if(exp->__anon1.db.id)
FreeIdentifier(exp->__anon1.db.id);
(__eCNameSpace__eC__types__eSystem_Delete(exp->__anon1.db.table), exp->__anon1.db.table = 0);
break;
case 28:
if(exp->__anon1.dbopen.ds)
FreeExpression(exp->__anon1.dbopen.ds);
if(exp->__anon1.dbopen.name)
FreeExpression(exp->__anon1.dbopen.name);
break;
case 34:
if(exp->__anon1.vaArg.exp)
FreeExpression(exp->__anon1.vaArg.exp);
if(exp->__anon1.vaArg.typeName)
FreeTypeName(exp->__anon1.vaArg.typeName);
break;
case 35:
if(exp->__anon1.list)
FreeList(exp->__anon1.list, (void *)(FreeExpression));
break;
case 15:
if(exp->__anon1._class)
FreeSpecifier(exp->__anon1._class);
break;
case 25:
if(exp->__anon1.classData.id)
FreeIdentifier(exp->__anon1.classData.id);
break;
case 18:
if(exp->__anon1.__anon1.identifier)
FreeIdentifier(exp->__anon1.__anon1.identifier);
break;
case 20:
(__eCNameSpace__eC__types__eSystem_Delete(exp->__anon1.__anon1.constant), exp->__anon1.__anon1.constant = 0);
break;
case 37:
case 19:
if(exp->__anon1.member.exp)
FreeExpression(exp->__anon1.member.exp);
if(exp->__anon1.member.member)
FreeIdentifier(exp->__anon1.member.member);
break;
case 38:
if(exp->__anon1.call.exp)
FreeExpression(exp->__anon1.call.exp);
if(exp->__anon1.call.arguments)
FreeList(exp->__anon1.call.arguments, (void *)(FreeExpression));
break;
case 17:
case 21:
case 22:
break;
}
if(freePointer)
{
if(exp->expType)
FreeType(exp->expType);
if(exp->destType)
FreeType(exp->destType);
((exp ? __extension__ ({
void * __eCPtrToDelete = (exp);

__eCClass_Expression->Destructor ? __eCClass_Expression->Destructor((void *)__eCPtrToDelete) : 0, __eCNameSpace__eC__types__eSystem_Delete(__eCPtrToDelete);
}) : 0), exp = 0);
}
}

void FreeDeclaration(struct Declaration * decl)
{
if(decl->symbol && !decl->symbol->type)
{
}
switch(decl->type)
{
case 0:
{
if(decl->__anon1.__anon1.specifiers)
FreeList(decl->__anon1.__anon1.specifiers, (void *)(FreeSpecifier));
if(decl->__anon1.__anon1.declarators)
FreeList(decl->__anon1.__anon1.declarators, (void *)(FreeDeclarator));
if(decl->extStorage)
FreeSpecifier(decl->extStorage);
break;
}
case 1:
{
if(decl->__anon1.__anon1.specifiers)
FreeList(decl->__anon1.__anon1.specifiers, (void *)(FreeSpecifier));
if(decl->__anon1.__anon1.declarators)
FreeList(decl->__anon1.__anon1.declarators, (void *)(FreeInitDeclarator));
break;
}
case 2:
if(decl->__anon1.inst)
FreeInstance(decl->__anon1.inst);
break;
case 3:
{
if(decl->__anon1.__anon2.exp)
FreeExpression(decl->__anon1.__anon2.exp);
if(decl->__anon1.__anon2.id)
FreeIdentifier(decl->__anon1.__anon2.id);
break;
}
}
((decl ? __extension__ ({
void * __eCPtrToDelete = (decl);

__eCClass_Declaration->Destructor ? __eCClass_Declaration->Destructor((void *)__eCPtrToDelete) : 0, __eCNameSpace__eC__types__eSystem_Delete(__eCPtrToDelete);
}) : 0), decl = 0);
}

void FreeStatement(struct Statement * stmt)
{
switch(stmt->type)
{
case 13:
{
if(stmt->__anon1.asmStmt.spec)
FreeSpecifier(stmt->__anon1.asmStmt.spec);
if(stmt->__anon1.asmStmt.inputFields)
FreeList(stmt->__anon1.asmStmt.inputFields, (void *)(FreeAsmField));
if(stmt->__anon1.asmStmt.outputFields)
FreeList(stmt->__anon1.asmStmt.outputFields, (void *)(FreeAsmField));
if(stmt->__anon1.asmStmt.clobberedFields)
FreeList(stmt->__anon1.asmStmt.clobberedFields, (void *)(FreeAsmField));
(__eCNameSpace__eC__types__eSystem_Delete(stmt->__anon1.asmStmt.statements), stmt->__anon1.asmStmt.statements = 0);
break;
}
case 0:
if(stmt->__anon1.labeled.stmt)
FreeStatement(stmt->__anon1.labeled.stmt);
break;
case 1:
if(stmt->__anon1.caseStmt.exp)
FreeExpression(stmt->__anon1.caseStmt.exp);
if(stmt->__anon1.caseStmt.stmt)
FreeStatement(stmt->__anon1.caseStmt.stmt);
break;
case 14:
if(stmt->__anon1.decl)
FreeDeclaration(stmt->__anon1.decl);
break;
case 2:
{
if(stmt->__anon1.compound.declarations)
FreeList(stmt->__anon1.compound.declarations, (void *)(FreeDeclaration));
if(stmt->__anon1.compound.statements)
FreeList(stmt->__anon1.compound.statements, (void *)(FreeStatement));
if(stmt->__anon1.compound.context)
{
FreeContext(stmt->__anon1.compound.context);
((stmt->__anon1.compound.context ? __extension__ ({
void * __eCPtrToDelete = (stmt->__anon1.compound.context);

__eCClass_Context->Destructor ? __eCClass_Context->Destructor((void *)__eCPtrToDelete) : 0, __eCNameSpace__eC__types__eSystem_Delete(__eCPtrToDelete);
}) : 0), stmt->__anon1.compound.context = 0);
}
break;
}
case 3:
{
if(stmt->__anon1.expressions)
FreeList(stmt->__anon1.expressions, (void *)(FreeExpression));
break;
}
case 4:
{
if(stmt->__anon1.ifStmt.exp)
FreeList(stmt->__anon1.ifStmt.exp, (void *)(FreeExpression));
if(stmt->__anon1.ifStmt.stmt)
FreeStatement(stmt->__anon1.ifStmt.stmt);
if(stmt->__anon1.ifStmt.elseStmt)
FreeStatement(stmt->__anon1.ifStmt.elseStmt);
break;
}
case 5:
{
if(stmt->__anon1.switchStmt.exp)
FreeList(stmt->__anon1.switchStmt.exp, (void *)(FreeExpression));
if(stmt->__anon1.switchStmt.stmt)
FreeStatement(stmt->__anon1.switchStmt.stmt);
break;
}
case 6:
{
if(stmt->__anon1.whileStmt.exp)
FreeList(stmt->__anon1.whileStmt.exp, (void *)(FreeExpression));
if(stmt->__anon1.whileStmt.stmt)
FreeStatement(stmt->__anon1.whileStmt.stmt);
break;
}
case 7:
{
if(stmt->__anon1.doWhile.stmt)
FreeStatement(stmt->__anon1.doWhile.stmt);
if(stmt->__anon1.doWhile.exp)
FreeList(stmt->__anon1.doWhile.exp, (void *)(FreeExpression));
break;
}
case 8:
{
if(stmt->__anon1.forStmt.init)
FreeStatement(stmt->__anon1.forStmt.init);
if(stmt->__anon1.forStmt.check)
FreeStatement(stmt->__anon1.forStmt.check);
if(stmt->__anon1.forStmt.increment)
FreeList(stmt->__anon1.forStmt.increment, (void *)(FreeExpression));
if(stmt->__anon1.forStmt.stmt)
FreeStatement(stmt->__anon1.forStmt.stmt);
break;
}
case 18:
{
if(stmt->__anon1.forEachStmt.id)
FreeIdentifier(stmt->__anon1.forEachStmt.id);
if(stmt->__anon1.forEachStmt.exp)
FreeList(stmt->__anon1.forEachStmt.exp, (void *)(FreeExpression));
if(stmt->__anon1.forEachStmt.filter)
FreeList(stmt->__anon1.forEachStmt.filter, (void *)(FreeExpression));
if(stmt->__anon1.forEachStmt.stmt)
FreeStatement(stmt->__anon1.forEachStmt.stmt);
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
FreeList(stmt->__anon1.expressions, (void *)(FreeExpression));
break;
case 17:
case 15:
case 16:
{
if(stmt->__anon1._watch.watcher)
FreeExpression(stmt->__anon1._watch.watcher);
if(stmt->__anon1._watch.object)
FreeExpression(stmt->__anon1._watch.object);
if(stmt->__anon1._watch.watches)
FreeList(stmt->__anon1._watch.watches, (stmt->type == 17) ? (void *)FreePropertyWatch : (void *)FreeIdentifier);
break;
}
}
((stmt ? __extension__ ({
void * __eCPtrToDelete = (stmt);

__eCClass_Statement->Destructor ? __eCClass_Statement->Destructor((void *)__eCPtrToDelete) : 0, __eCNameSpace__eC__types__eSystem_Delete(__eCPtrToDelete);
}) : 0), stmt = 0);
}

void FreeFunction(struct FunctionDefinition * func)
{
if(func->body)
FreeStatement(func->body);
if(func->declarator)
FreeDeclarator(func->declarator);
if(func->specifiers)
FreeList(func->specifiers, (void *)(FreeSpecifier));
if(func->declarations)
FreeList(func->declarations, (void *)(FreeDeclaration));
if(func->type)
FreeType(func->type);
((func ? __extension__ ({
void * __eCPtrToDelete = (func);

__eCClass_FunctionDefinition->Destructor ? __eCClass_FunctionDefinition->Destructor((void *)__eCPtrToDelete) : 0, __eCNameSpace__eC__types__eSystem_Delete(__eCPtrToDelete);
}) : 0), func = 0);
}

void FreeClassFunction(struct ClassFunction * func)
{
if(func->declarator && func->declarator->symbol)
{
}
if(func->type)
FreeType(func->type);
if(func->body)
FreeStatement(func->body);
if(func->declarator)
FreeDeclarator(func->declarator);
if(func->specifiers)
FreeList(func->specifiers, (void *)(FreeSpecifier));
if(func->declarations)
FreeList(func->declarations, (void *)(FreeDeclaration));
__eCMethod___eCNameSpace__eC__containers__OldList_Free(&func->attached, (((void *)0)));
((func ? __extension__ ({
void * __eCPtrToDelete = (func);

__eCClass_ClassFunction->Destructor ? __eCClass_ClassFunction->Destructor((void *)__eCPtrToDelete) : 0, __eCNameSpace__eC__types__eSystem_Delete(__eCPtrToDelete);
}) : 0), func = 0);
}

void FreeMembersInit(struct MembersInit * init)
{
if(init->type == 0 && init->__anon1.dataMembers)
FreeList(init->__anon1.dataMembers, (void *)(FreeMemberInit));
if(init->type == 1 && init->__anon1.function)
{
FreeClassFunction(init->__anon1.function);
}
((init ? __extension__ ({
void * __eCPtrToDelete = (init);

__eCClass_MembersInit->Destructor ? __eCClass_MembersInit->Destructor((void *)__eCPtrToDelete) : 0, __eCNameSpace__eC__types__eSystem_Delete(__eCPtrToDelete);
}) : 0), init = 0);
}

void FreeClassDef(struct ClassDef * def)
{
switch(def->type)
{
case 2:
if(def->__anon1.decl)
FreeDeclaration(def->__anon1.decl);
break;
case 1:
{
FreeList(def->__anon1.defProperties, (void *)(FreeMemberInit));
break;
}
case 0:
if(def->__anon1.function)
FreeClassFunction(def->__anon1.function);
break;
case 3:
if(def->__anon1.propertyDef)
FreeProperty(def->__anon1.propertyDef);
break;
case 10:
if(def->__anon1.propertyDef)
FreeProperty(def->__anon1.propertyDef);
break;
case 13:
break;
case 9:
{
if(def->__anon1.decl)
FreeDeclaration(def->__anon1.decl);
break;
}
case 5:
{
(__eCNameSpace__eC__types__eSystem_Delete(def->__anon1.designer), def->__anon1.designer = 0);
break;
}
case 7:
break;
case 6:
break;
case 11:
if(def->__anon1.__anon1.id)
FreeIdentifier(def->__anon1.__anon1.id);
if(def->__anon1.__anon1.initializer)
FreeInitializer(def->__anon1.__anon1.initializer);
break;
case 8:
{
if(def->__anon1.defaultProperty)
FreeIdentifier(def->__anon1.defaultProperty);
break;
}
case 12:
break;
case 4:
{
if(def->__anon1.propertyWatch)
FreePropertyWatch(def->__anon1.propertyWatch);
break;
}
}
((def ? __extension__ ({
void * __eCPtrToDelete = (def);

__eCClass_ClassDef->Destructor ? __eCClass_ClassDef->Destructor((void *)__eCPtrToDelete) : 0, __eCNameSpace__eC__types__eSystem_Delete(__eCPtrToDelete);
}) : 0), def = 0);
}

void FreeSpecifierContents(struct Specifier * spec)
{
switch(spec->type)
{
case 1:
(__eCNameSpace__eC__types__eSystem_Delete(spec->__anon1.__anon1.name), spec->__anon1.__anon1.name = 0);
if(spec->__anon1.__anon1.templateArgs)
{
FreeList(spec->__anon1.__anon1.templateArgs, (void *)(FreeTemplateArgument));
spec->__anon1.__anon1.templateArgs = (((void *)0));
}
if(spec->__anon1.__anon1.nsSpec)
{
FreeSpecifier(spec->__anon1.__anon1.nsSpec);
spec->__anon1.__anon1.nsSpec = (((void *)0));
}
break;
case 5:
if(spec->__anon1.__anon1.extDecl)
{
FreeExtDecl(spec->__anon1.__anon1.extDecl);
spec->__anon1.__anon1.extDecl = (((void *)0));
}
break;
case 2:
if(spec->__anon1.__anon2.baseSpecs)
{
FreeList(spec->__anon1.__anon2.baseSpecs, (void *)(FreeSpecifier));
spec->__anon1.__anon2.baseSpecs = (((void *)0));
}
if(spec->__anon1.__anon2.id)
{
FreeIdentifier(spec->__anon1.__anon2.id);
spec->__anon1.__anon2.id = (((void *)0));
}
if(spec->__anon1.__anon2.list)
{
FreeList(spec->__anon1.__anon2.list, (void *)(FreeEnumerator));
spec->__anon1.__anon2.list = (((void *)0));
}
if(spec->__anon1.__anon2.definitions)
{
FreeList(spec->__anon1.__anon2.definitions, (void *)(FreeClassDef));
spec->__anon1.__anon2.definitions = (((void *)0));
}
break;
case 3:
case 4:
if(spec->__anon1.__anon2.id)
{
FreeIdentifier(spec->__anon1.__anon2.id);
spec->__anon1.__anon2.id = (((void *)0));
}
if(spec->__anon1.__anon2.definitions)
{
FreeList(spec->__anon1.__anon2.definitions, (void *)(FreeClassDef));
spec->__anon1.__anon2.definitions = (((void *)0));
}
if(spec->__anon1.__anon2.baseSpecs)
{
FreeList(spec->__anon1.__anon2.baseSpecs, (void *)(FreeSpecifier));
spec->__anon1.__anon2.baseSpecs = (((void *)0));
}
if(spec->__anon1.__anon2.extDeclStruct)
{
FreeExtDecl(spec->__anon1.__anon2.extDeclStruct);
spec->__anon1.__anon2.extDeclStruct = (((void *)0));
}
if(spec->__anon1.__anon2.ctx)
{
FreeContext(spec->__anon1.__anon2.ctx);
((spec->__anon1.__anon2.ctx ? __extension__ ({
void * __eCPtrToDelete = (spec->__anon1.__anon2.ctx);

__eCClass_Context->Destructor ? __eCClass_Context->Destructor((void *)__eCPtrToDelete) : 0, __eCNameSpace__eC__types__eSystem_Delete(__eCPtrToDelete);
}) : 0), spec->__anon1.__anon2.ctx = 0);
}
break;
case 7:
if(spec->__anon1._class)
{
FreeSpecifier(spec->__anon1._class);
spec->__anon1._class = (((void *)0));
}
break;
}
}

void FreeClass(struct ClassDefinition * _class)
{
if(_class->definitions)
FreeList(_class->definitions, (void *)(FreeClassDef));
if(_class->_class)
FreeSpecifier(_class->_class);
if(_class->baseSpecs)
FreeList(_class->baseSpecs, (void *)(FreeSpecifier));
((_class ? __extension__ ({
void * __eCPtrToDelete = (_class);

__eCClass_ClassDefinition->Destructor ? __eCClass_ClassDefinition->Destructor((void *)__eCPtrToDelete) : 0, __eCNameSpace__eC__types__eSystem_Delete(__eCPtrToDelete);
}) : 0), _class = 0);
}

void FreeExternal(struct External * external)
{
struct TopoEdge * e;

if(external->incoming)
{
while((e = ((struct __eCNameSpace__eC__containers__LinkList *)(((char *)external->incoming + 0 + sizeof(struct __eCNameSpace__eC__types__Instance))))->first))
{
(__extension__ ({
void (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, struct __eCNameSpace__eC__containers__IteratorPointer * it);

__internal_VirtualMethod = ((void (*)(struct __eCNameSpace__eC__types__Instance *, struct __eCNameSpace__eC__containers__IteratorPointer * it))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = e->from->outgoing;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__containers__LinkList->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__containers__Container_Remove]);
__internal_VirtualMethod ? __internal_VirtualMethod(e->from->outgoing, (struct __eCNameSpace__eC__containers__IteratorPointer *)e) : (void)1;
}));
(__extension__ ({
void (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, struct __eCNameSpace__eC__containers__IteratorPointer * it);

__internal_VirtualMethod = ((void (*)(struct __eCNameSpace__eC__types__Instance *, struct __eCNameSpace__eC__containers__IteratorPointer * it))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = external->incoming;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__containers__LinkList->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__containers__Container_Remove]);
__internal_VirtualMethod ? __internal_VirtualMethod(external->incoming, (struct __eCNameSpace__eC__containers__IteratorPointer *)e) : (void)1;
}));
((e ? __extension__ ({
void * __eCPtrToDelete = (e);

__eCClass_TopoEdge->Destructor ? __eCClass_TopoEdge->Destructor((void *)__eCPtrToDelete) : 0, __eCNameSpace__eC__types__eSystem_Delete(__eCPtrToDelete);
}) : 0), e = 0);
}
}
if(external->outgoing)
{
while((e = ((struct __eCNameSpace__eC__containers__LinkList *)(((char *)external->outgoing + 0 + sizeof(struct __eCNameSpace__eC__types__Instance))))->first))
{
(__extension__ ({
void (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, struct __eCNameSpace__eC__containers__IteratorPointer * it);

__internal_VirtualMethod = ((void (*)(struct __eCNameSpace__eC__types__Instance *, struct __eCNameSpace__eC__containers__IteratorPointer * it))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = e->to->incoming;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__containers__LinkList->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__containers__Container_Remove]);
__internal_VirtualMethod ? __internal_VirtualMethod(e->to->incoming, (struct __eCNameSpace__eC__containers__IteratorPointer *)e) : (void)1;
}));
(__extension__ ({
void (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, struct __eCNameSpace__eC__containers__IteratorPointer * it);

__internal_VirtualMethod = ((void (*)(struct __eCNameSpace__eC__types__Instance *, struct __eCNameSpace__eC__containers__IteratorPointer * it))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = external->outgoing;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__containers__LinkList->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__containers__Container_Remove]);
__internal_VirtualMethod ? __internal_VirtualMethod(external->outgoing, (struct __eCNameSpace__eC__containers__IteratorPointer *)e) : (void)1;
}));
if(!e->breakable)
e->to->nonBreakableIncoming--;
((e ? __extension__ ({
void * __eCPtrToDelete = (e);

__eCClass_TopoEdge->Destructor ? __eCClass_TopoEdge->Destructor((void *)__eCPtrToDelete) : 0, __eCNameSpace__eC__types__eSystem_Delete(__eCPtrToDelete);
}) : 0), e = 0);
}
}
switch(external->type)
{
case 0:
if(external->__anon1.function)
FreeFunction(external->__anon1.function);
break;
case 1:
if(external->__anon1.declaration)
FreeDeclaration(external->__anon1.declaration);
break;
case 2:
if(external->__anon1._class)
FreeClass(external->__anon1._class);
break;
case 3:
(__eCNameSpace__eC__types__eSystem_Delete(external->__anon1.importString), external->__anon1.importString = 0);
break;
case 4:
FreeIdentifier(external->__anon1.id);
break;
case 5:
if(external->__anon1.table)
FreeDBTable(external->__anon1.table);
break;
case 6:
(__eCNameSpace__eC__types__eSystem_Delete(external->__anon1.pragma), external->__anon1.pragma = 0);
break;
}
((external ? __extension__ ({
void * __eCPtrToDelete = (external);

__eCClass_External->Destructor ? __eCClass_External->Destructor((void *)__eCPtrToDelete) : 0, __eCNameSpace__eC__types__eSystem_Delete(__eCPtrToDelete);
}) : 0), external = 0);
}

void __eCRegisterModule_freeAst(struct __eCNameSpace__eC__types__Instance * module)
{
struct __eCNameSpace__eC__types__Class __attribute__((unused)) * class;

__eCNameSpace__eC__types__eSystem_RegisterFunction("FreeList", "void FreeList(eC::containers::OldList list, void (* FreeFunction)(void *))", FreeList, module, 2);
__eCNameSpace__eC__types__eSystem_RegisterFunction("FreeType", "void FreeType(Type type)", FreeType, module, 1);
__eCNameSpace__eC__types__eSystem_RegisterFunction("FreeSymbol", "void FreeSymbol(Symbol symbol)", FreeSymbol, module, 2);
__eCNameSpace__eC__types__eSystem_RegisterFunction("FreeMethodImport", "void FreeMethodImport(MethodImport imp)", FreeMethodImport, module, 2);
__eCNameSpace__eC__types__eSystem_RegisterFunction("FreePropertyImport", "void FreePropertyImport(MethodImport imp)", FreePropertyImport, module, 2);
__eCNameSpace__eC__types__eSystem_RegisterFunction("FreeClassImport", "void FreeClassImport(ClassImport imp)", FreeClassImport, module, 2);
__eCNameSpace__eC__types__eSystem_RegisterFunction("FreeFunctionImport", "void FreeFunctionImport(ClassImport imp)", FreeFunctionImport, module, 2);
__eCNameSpace__eC__types__eSystem_RegisterFunction("FreeModuleImport", "void FreeModuleImport(ModuleImport imp)", FreeModuleImport, module, 1);
__eCNameSpace__eC__types__eSystem_RegisterFunction("FreeModuleDefine", "void FreeModuleDefine(Definition def)", FreeModuleDefine, module, 1);
__eCNameSpace__eC__types__eSystem_RegisterFunction("FreeExcludedSymbols", "void FreeExcludedSymbols(eC::containers::OldList excludedSymbols)", FreeExcludedSymbols, module, 1);
__eCNameSpace__eC__types__eSystem_RegisterFunction("FreeTemplateArgument", "void FreeTemplateArgument(TemplateArgument arg)", FreeTemplateArgument, module, 1);
__eCNameSpace__eC__types__eSystem_RegisterFunction("FreeTemplateDataType", "void FreeTemplateDataType(TemplateDatatype type)", FreeTemplateDataType, module, 1);
__eCNameSpace__eC__types__eSystem_RegisterFunction("FreeTemplateParameter", "void FreeTemplateParameter(TemplateParameter param)", FreeTemplateParameter, module, 1);
__eCNameSpace__eC__types__eSystem_RegisterFunction("FreeTemplateType", "void FreeTemplateType(TemplatedType type)", FreeTemplateType, module, 1);
__eCNameSpace__eC__types__eSystem_RegisterFunction("FreeContext", "void FreeContext(Context context)", FreeContext, module, 1);
__eCNameSpace__eC__types__eSystem_RegisterFunction("FreeEnumerator", "void FreeEnumerator(Enumerator enumerator)", FreeEnumerator, module, 2);
__eCNameSpace__eC__types__eSystem_RegisterFunction("FreeSpecifier", "void FreeSpecifier(Specifier spec)", FreeSpecifier, module, 2);
__eCNameSpace__eC__types__eSystem_RegisterFunction("FreeSpecifierContents", "void FreeSpecifierContents(Specifier spec)", FreeSpecifierContents, module, 2);
__eCNameSpace__eC__types__eSystem_RegisterFunction("FreeIdentifier", "void FreeIdentifier(Identifier id)", FreeIdentifier, module, 1);
__eCNameSpace__eC__types__eSystem_RegisterFunction("FreeTypeName", "void FreeTypeName(TypeName typeName)", FreeTypeName, module, 2);
__eCNameSpace__eC__types__eSystem_RegisterFunction("FreeExpContents", "void FreeExpContents(Expression exp)", FreeExpContents, module, 1);
__eCNameSpace__eC__types__eSystem_RegisterFunction("FreeExpression", "void FreeExpression(Expression exp)", FreeExpression, module, 1);
__eCNameSpace__eC__types__eSystem_RegisterFunction("FreePointer", "void FreePointer(Pointer pointer)", FreePointer, module, 2);
__eCNameSpace__eC__types__eSystem_RegisterFunction("FreeAttrib", "void FreeAttrib(Attrib attr)", FreeAttrib, module, 2);
__eCNameSpace__eC__types__eSystem_RegisterFunction("FreeAttribute", "void FreeAttribute(Attribute attr)", FreeAttribute, module, 2);
__eCNameSpace__eC__types__eSystem_RegisterFunction("FreeExtDecl", "void FreeExtDecl(ExtDecl extDecl)", FreeExtDecl, module, 2);
__eCNameSpace__eC__types__eSystem_RegisterFunction("FreeDeclarator", "void FreeDeclarator(Declarator decl)", FreeDeclarator, module, 2);
__eCNameSpace__eC__types__eSystem_RegisterFunction("FreePropertyWatch", "void FreePropertyWatch(PropertyWatch watcher)", FreePropertyWatch, module, 2);
__eCNameSpace__eC__types__eSystem_RegisterFunction("FreeAsmField", "void FreeAsmField(AsmField field)", FreeAsmField, module, 2);
__eCNameSpace__eC__types__eSystem_RegisterFunction("FreeStatement", "void FreeStatement(Statement stmt)", FreeStatement, module, 2);
__eCNameSpace__eC__types__eSystem_RegisterFunction("FreeInitializer", "void FreeInitializer(Initializer initializer)", FreeInitializer, module, 2);
__eCNameSpace__eC__types__eSystem_RegisterFunction("FreeInitDeclarator", "void FreeInitDeclarator(InitDeclarator decl)", FreeInitDeclarator, module, 2);
__eCNameSpace__eC__types__eSystem_RegisterFunction("FreeDeclaration", "void FreeDeclaration(Declaration decl)", FreeDeclaration, module, 2);
__eCNameSpace__eC__types__eSystem_RegisterFunction("FreeFunction", "void FreeFunction(FunctionDefinition func)", FreeFunction, module, 2);
__eCNameSpace__eC__types__eSystem_RegisterFunction("FreeMemberInit", "void FreeMemberInit(MemberInit init)", FreeMemberInit, module, 2);
__eCNameSpace__eC__types__eSystem_RegisterFunction("FreeMembersInit", "void FreeMembersInit(MembersInit init)", FreeMembersInit, module, 2);
__eCNameSpace__eC__types__eSystem_RegisterFunction("FreeInstance", "void FreeInstance(Instantiation inst)", FreeInstance, module, 1);
__eCNameSpace__eC__types__eSystem_RegisterFunction("FreeClassFunction", "void FreeClassFunction(ClassFunction func)", FreeClassFunction, module, 1);
__eCNameSpace__eC__types__eSystem_RegisterFunction("FreeProperty", "void FreeProperty(PropertyDef def)", FreeProperty, module, 2);
__eCNameSpace__eC__types__eSystem_RegisterFunction("FreeClassDef", "void FreeClassDef(ClassDef def)", FreeClassDef, module, 2);
__eCNameSpace__eC__types__eSystem_RegisterFunction("FreeClass", "void FreeClass(ClassDefinition _class)", FreeClass, module, 2);
__eCNameSpace__eC__types__eSystem_RegisterFunction("FreeDBIndexItem", "void FreeDBIndexItem(DBIndexItem item)", FreeDBIndexItem, module, 2);
__eCNameSpace__eC__types__eSystem_RegisterFunction("FreeDBTableEntry", "void FreeDBTableEntry(DBTableEntry entry)", FreeDBTableEntry, module, 2);
__eCNameSpace__eC__types__eSystem_RegisterFunction("FreeDBTable", "void FreeDBTable(DBTableDef table)", FreeDBTable, module, 2);
__eCNameSpace__eC__types__eSystem_RegisterFunction("FreeExternal", "void FreeExternal(External external)", FreeExternal, module, 2);
__eCNameSpace__eC__types__eSystem_RegisterFunction("FreeASTTree", "void FreeASTTree(eC::containers::OldList ast)", FreeASTTree, module, 1);
__eCNameSpace__eC__types__eSystem_RegisterFunction("FreeModuleData", "void FreeModuleData(eC::types::Module module)", FreeModuleData, module, 2);
__eCNameSpace__eC__types__eSystem_RegisterFunction("FreeTypeData", "void FreeTypeData(eC::types::Module privateModule)", FreeTypeData, module, 1);
}

