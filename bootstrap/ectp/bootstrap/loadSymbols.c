/* Code generated from eC source file: loadSymbols.ec */
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
extern int yychar;

extern char sourceFileStack[30][797];

extern int include_stack_ptr;

static int numIncludes;

static char ** includes;

unsigned int inIDE = 0;

unsigned int ecrtImported;

unsigned int inPreCompiler = 0;

unsigned int inSymbolGen = 0;

unsigned int inDocumentor = 0;

unsigned int DummyMethod()
{
return 1;
}

extern const char *  sourceFile;

extern unsigned int skipErrors;

struct __eCNameSpace__eC__types__Instance * loadedModules;

extern char *  symbolsDir;

extern unsigned int inCompiler;

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

extern char *  __eCNameSpace__eC__types__TrimLSpaces(const char *  string, char *  output);

extern int strcmp(const char * , const char * );

extern int strtol(const char * , char * * , int base);

extern char *  strcpy(char * , const char * );

extern char *  __eCNameSpace__eC__types__GetLastDirectory(const char *  string, char *  output);

extern int strcasecmp(const char * , const char * );

struct Specifier;

extern char *  strstr(const char * , const char * );

extern char *  strcat(char * , const char * );

struct External;

struct ModuleImport;

struct ClassImport;

struct CodePosition
{
int line;
int charPos;
int pos;
int included;
} eC_gcc_struct;

struct Context;

extern char *  strchr(const char * , int);

extern void *  memcpy(void * , const void * , size_t size);

extern char *  __eCNameSpace__eC__types__TrimRSpaces(const char *  string, char *  output);

extern long long strtoll(const char *  nptr, char * *  endptr, int base);

struct __eCNameSpace__eC__types__ClassProperty;

extern char *  __eCNameSpace__eC__types__CopyString(const char *  string);

struct yy_buffer_state
{
void *  yy_input_file;
char *  yy_ch_buf;
char *  yy_buf_pos;
unsigned int yy_buf_size;
int yy_n_chars;
int yy_is_our_buffer;
int yy_is_interactive;
int yy_at_bol;
int yy_fill_buffer;
int yy_buffer_status;
} eC_gcc_struct;

struct Identifier;

struct Statement;

struct Instantiation;

struct Declarator;

struct TypeName;

struct Initializer;

struct __eCNameSpace__eC__types__ClassTemplateParameter;

struct __eCNameSpace__eC__types__DefinedExpression;

struct __eCNameSpace__eC__types__GlobalFunction;

extern char *  strncpy(char * , const char * , size_t n);

extern char *  __eCNameSpace__eC__files__GetSystemPathBuffer(char *  d, const char *  p);

extern void Compiler_Error(const char *  format, ...);

extern const char *  __eCNameSpace__eC__i18n__GetTranslatedString(const char * name, const char *  string, const char *  stringAndContext);

extern unsigned int __eCNameSpace__eC__types__StripExtension(char *  string);

extern size_t strlen(const char * );

extern char *  __eCNameSpace__eC__types__GetExtension(const char *  string, char *  output);

extern char *  __eCNameSpace__eC__types__PathCat(char *  string, const char *  addedPath);

extern char *  __eCNameSpace__eC__types__ChangeExtension(const char *  string, const char *  ext, char *  output);

extern unsigned int __eCNameSpace__eC__files__FileExists(const char *  fileName);

struct __eCNameSpace__eC__containers__IteratorPointer;

extern int sprintf(char * , const char * , ...);

extern char *  __eCNameSpace__eC__types__StripLastDirectory(const char *  string, char *  output);

extern void Compiler_Warning(const char *  format, ...);

char * GetIncludeFileFromID(int id)
{
return includes[id - 1];
}

void SetInIDE(unsigned int b)
{
inIDE = b;
}

void SetEcereImported(unsigned int b)
{
ecrtImported = b;
}

unsigned int GetEcereImported()
{
return ecrtImported;
}

void SetInPreCompiler(unsigned int b)
{
inPreCompiler = b;
}

void SetInSymbolGen(unsigned int b)
{
inSymbolGen = b;
}

void SetInDocumentor(unsigned int b)
{
inDocumentor = b;
}

struct __eCNameSpace__eC__containers__OldList dataRedefinitions;

struct __eCNameSpace__eC__containers__OldList * includeDirs, * sysIncludeDirs;

void SetIncludeDirs(struct __eCNameSpace__eC__containers__OldList * list)
{
includeDirs = list;
}

struct __eCNameSpace__eC__containers__OldList * precompDefines;

extern struct __eCNameSpace__eC__containers__OldList *  defines;

void __eCMethod___eCNameSpace__eC__containers__OldList_Add(struct __eCNameSpace__eC__containers__OldList * this, void *  item);

unsigned int __eCMethod___eCNameSpace__eC__containers__OldList_AddName(struct __eCNameSpace__eC__containers__OldList * this, void *  item);

void __eCMethod___eCNameSpace__eC__containers__OldList_Free(struct __eCNameSpace__eC__containers__OldList * this, void (*  freeFn)(void * ));

extern struct Type * ProcessTypeString(const char *  string, unsigned int staticMethod);

extern void FreeType(struct Type * type);

extern void PrintType(struct Type * type, char *  string, unsigned int printName, unsigned int fullName);

void FreeIncludeFiles()
{
int c;

for(c = 0; c < numIncludes; c++)
(__eCNameSpace__eC__types__eSystem_Delete(includes[c]), includes[c] = 0);
(__eCNameSpace__eC__types__eSystem_Delete(includes), includes = 0);
numIncludes = 0;
}

int FindIncludeFileID(char * includeFile)
{
int c;

for(c = 0; c < numIncludes; c++)
if(!((__runtimePlatform == 1) ? (strcasecmp) : strcmp)(includes[c], includeFile))
return c + 1;
return 0;
}

extern struct ModuleImport * mainModule;

struct Location
{
struct CodePosition start;
struct CodePosition end;
} eC_gcc_struct;

void SetSysIncludeDirs(struct __eCNameSpace__eC__containers__OldList * list)
{
sysIncludeDirs = list;
}

void SetPrecompDefines(struct __eCNameSpace__eC__containers__OldList * list)
{
precompDefines = list;
}

int GetIncludeFileID(char * includeFile)
{
int found = FindIncludeFileID(includeFile);

if(found)
return found;
includes = __eCNameSpace__eC__types__eSystem_Renew(includes, sizeof(char *) * (numIncludes + 1));
includes[numIncludes++] = __eCNameSpace__eC__types__CopyString(includeFile);
return numIncludes;
}

struct __eCNameSpace__eC__types__NameSpace;

struct __eCNameSpace__eC__types__NameSpace * globalData;

struct Expression;

extern struct Expression * ParseExpressionString(char *  expression);

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

extern void ProcessExpressionType(struct Expression * exp);

extern void ComputeExpression(struct Expression * exp);

extern void FreeExpression(struct Expression * exp);

struct __eCNameSpace__eC__types__Class;

struct __eCNameSpace__eC__types__Instance
{
void * *  _vTbl;
struct __eCNameSpace__eC__types__Class * _class;
int _refCount;
} eC_gcc_struct;

extern long long __eCNameSpace__eC__types__eClass_GetProperty(struct __eCNameSpace__eC__types__Class * _class, const char *  name);

extern void __eCNameSpace__eC__types__eClass_SetProperty(struct __eCNameSpace__eC__types__Class * _class, const char *  name, long long value);

extern void __eCNameSpace__eC__types__eClass_DestructionWatchable(struct __eCNameSpace__eC__types__Class * _class);

extern void __eCNameSpace__eC__types__eEnum_AddFixedValue(struct __eCNameSpace__eC__types__Class * _class, const char *  string, long long value);

extern long long __eCNameSpace__eC__types__eEnum_AddValue(struct __eCNameSpace__eC__types__Class * _class, const char *  string);

extern struct __eCNameSpace__eC__types__ClassProperty * __eCNameSpace__eC__types__eClass_AddClassProperty(struct __eCNameSpace__eC__types__Class * _class, const char *  name, const char *  dataType, void *  setStmt, void *  getStmt);

extern void __eCNameSpace__eC__types__eClass_DoneAddingTemplateParameters(struct __eCNameSpace__eC__types__Class * base);

extern void *  __eCNameSpace__eC__types__eInstance_New(struct __eCNameSpace__eC__types__Class * _class);

extern void __eCNameSpace__eC__types__eInstance_SetMethod(struct __eCNameSpace__eC__types__Instance * instance, const char *  name, void *  function);

extern void __eCNameSpace__eC__types__eInstance_IncRef(struct __eCNameSpace__eC__types__Instance * instance);

struct __eCNameSpace__eC__types__Instance * sourceDirs;

extern struct __eCNameSpace__eC__types__Instance * __eCNameSpace__eC__files__FileOpenBuffered(const char *  fileName, int mode);

struct LexerBackup
{
struct Location yylloc;
struct Location type_yylloc;
struct Location expression_yylloc;
int declMode;
int defaultDeclMode;
struct __eCNameSpace__eC__types__Instance * fileInput;
struct yy_buffer_state *  include_stack[30];
struct __eCNameSpace__eC__types__Instance * fileStack[30];
char sourceFileStack[30][797];
struct Location locStack[30];
int declModeStack[30];
int include_stack_ptr;
struct yy_buffer_state *  buffer;
int yy_n_chars;
char *  yytext;
char *  yy_c_buf_p;
void *  yyin;
char yy_hold_char;
int yychar;
int yy_init;
int yy_start;
} eC_gcc_struct;

struct __eCNameSpace__eC__types__MapIterator
{
struct __eCNameSpace__eC__types__Instance * container;
struct __eCNameSpace__eC__containers__IteratorPointer * pointer;
} eC_gcc_struct;

struct __eCNameSpace__eC__types__Iterator
{
struct __eCNameSpace__eC__types__Instance * container;
struct __eCNameSpace__eC__containers__IteratorPointer * pointer;
} eC_gcc_struct;

extern struct __eCNameSpace__eC__types__Instance * __eCNameSpace__eC__files__FileOpen(const char *  fileName, int mode);

unsigned int __eCMethod___eCNameSpace__eC__files__File_GetLine(struct __eCNameSpace__eC__types__Instance * this, char *  s, int max);

extern int __eCVMethodID___eCNameSpace__eC__files__File_Eof;

extern void __eCNameSpace__eC__types__eInstance_DecRef(struct __eCNameSpace__eC__types__Instance * instance);

extern int __eCVMethodID___eCNameSpace__eC__containers__Container_Add;

void SetSourceDirs(struct __eCNameSpace__eC__types__Instance * list)
{
sourceDirs = list;
}

extern struct __eCNameSpace__eC__types__Instance * pushLexer(void);

extern void popLexer(struct __eCNameSpace__eC__types__Instance * backup);

struct __eCNameSpace__eC__types__Instance * __eCProp___eCNameSpace__eC__types__MapIterator_Get_map(struct __eCNameSpace__eC__types__MapIterator * this);

void __eCProp___eCNameSpace__eC__types__MapIterator_Set_map(struct __eCNameSpace__eC__types__MapIterator * this, struct __eCNameSpace__eC__types__Instance * value);

unsigned int __eCMethod___eCNameSpace__eC__types__Iterator_Index(struct __eCNameSpace__eC__types__Iterator * this, const uint64 index, unsigned int create);

uint64 __eCProp___eCNameSpace__eC__types__Iterator_Get_data(struct __eCNameSpace__eC__types__Iterator * this);

void __eCProp___eCNameSpace__eC__types__Iterator_Set_data(struct __eCNameSpace__eC__types__Iterator * this, uint64 value);

unsigned int __eCMethod___eCNameSpace__eC__types__Iterator_Next(struct __eCNameSpace__eC__types__Iterator * this);

void __eCDestroyModuleInstances_loadSymbols()
{
(__eCNameSpace__eC__types__eInstance_DecRef(loadedModules), loadedModules = 0);
}

struct __eCNameSpace__eC__containers__BTNode;

struct __eCNameSpace__eC__containers__BTNode
{
uintptr_t key;
struct __eCNameSpace__eC__containers__BTNode * parent;
struct __eCNameSpace__eC__containers__BTNode * left;
struct __eCNameSpace__eC__containers__BTNode * right;
int depth;
} eC_gcc_struct;

struct __eCNameSpace__eC__types__DataMember;

extern struct __eCNameSpace__eC__types__DataMember * __eCNameSpace__eC__types__eMember_AddDataMember(struct __eCNameSpace__eC__types__DataMember * member, const char *  name, const char *  type, unsigned int size, unsigned int alignment, int declMode);

extern struct __eCNameSpace__eC__types__DataMember * __eCNameSpace__eC__types__eClass_AddDataMember(struct __eCNameSpace__eC__types__Class * _class, const char *  name, const char *  type, unsigned int size, unsigned int alignment, int declMode);

extern struct __eCNameSpace__eC__types__DataMember * __eCNameSpace__eC__types__eMember_New(int type, int declMode);

extern unsigned int __eCNameSpace__eC__types__eMember_AddMember(struct __eCNameSpace__eC__types__DataMember * addTo, struct __eCNameSpace__eC__types__DataMember * dataMember);

extern unsigned int __eCNameSpace__eC__types__eClass_AddMember(struct __eCNameSpace__eC__types__Class * _class, struct __eCNameSpace__eC__types__DataMember * dataMember);

struct Symbol;

extern struct Symbol * DeclClass(struct Specifier * _class, const char *  name);

extern struct Symbol * FindClass(const char *  name);

extern void FreeSymbol(struct Symbol * symbol);

struct __eCNameSpace__eC__sys__OldLink;

struct __eCNameSpace__eC__sys__OldLink
{
struct __eCNameSpace__eC__sys__OldLink * prev;
struct __eCNameSpace__eC__sys__OldLink * next;
void *  data;
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

extern void __eCNameSpace__eC__types__eProperty_Watchable(struct __eCNameSpace__eC__types__Property * _property);

struct DataRedefinition;

struct DataRedefinition
{
struct DataRedefinition * prev;
struct DataRedefinition * next;
char name[1024];
char type1[1024];
char type2[1024];
} eC_gcc_struct;

void CheckDataRedefinitions()
{
struct DataRedefinition * redefinition;

for(redefinition = dataRedefinitions.first; redefinition; redefinition = redefinition->next)
{
struct Type * type1 = ProcessTypeString(redefinition->type1, 0);
struct Type * type2 = ProcessTypeString(redefinition->type2, 0);
char type1String[1024] = "";
char type2String[1024] = "";

PrintType(type1, type1String, 0, 1);
PrintType(type2, type2String, 0, 1);
if(strcmp(type1String, type2String))
Compiler_Warning(__eCNameSpace__eC__i18n__GetTranslatedString("ec", "Redefinition of %s (defining as %s, already defined as %s)\n", (((void *)0))), redefinition->name, type1String, type2String);
FreeType(type1);
FreeType(type2);
}
__eCMethod___eCNameSpace__eC__containers__OldList_Free(&dataRedefinitions, (((void *)0)));
}

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

struct __eCNameSpace__eC__sys__NamedItem;

struct __eCNameSpace__eC__sys__NamedItem
{
struct __eCNameSpace__eC__sys__NamedItem * prev;
struct __eCNameSpace__eC__sys__NamedItem * next;
char *  name;
} eC_gcc_struct;

struct __eCNameSpace__eC__types__Instance * OpenIncludeFile(char * includeFile)
{
struct __eCNameSpace__eC__types__Instance * file;
char location[274];

__eCNameSpace__eC__types__StripLastDirectory(sourceFileStack[(include_stack_ptr >= 0) ? include_stack_ptr : 0], location);
__eCNameSpace__eC__types__PathCat(location, includeFile);
file = __eCNameSpace__eC__files__FileOpen(location, 1);
if(file)
{
strcpy(sourceFileStack[include_stack_ptr + 1], location);
}
else if(inIDE)
{
struct __eCNameSpace__eC__sys__NamedItem * includeDir;

if(includeDirs)
{
for(includeDir = (*includeDirs).first; includeDir; includeDir = includeDir->next)
{
strcpy(location, includeDir->name);
__eCNameSpace__eC__types__PathCat(location, includeFile);
file = __eCNameSpace__eC__files__FileOpen(location, 1);
if(file)
break;
}
}
if(!file && sysIncludeDirs)
{
for(includeDir = (*sysIncludeDirs).first; includeDir; includeDir = includeDir->next)
{
strcpy(location, includeDir->name);
__eCNameSpace__eC__types__PathCat(location, includeFile);
file = __eCNameSpace__eC__files__FileOpen(location, 1);
if(file)
break;
}
}
}
return file;
}

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

extern struct __eCNameSpace__eC__types__Method * __eCNameSpace__eC__types__eClass_AddVirtualMethod(struct __eCNameSpace__eC__types__Class * _class, const char *  name, const char *  type, void *  function, int declMode);

extern struct __eCNameSpace__eC__types__Method * __eCNameSpace__eC__types__eClass_AddMethod(struct __eCNameSpace__eC__types__Class * _class, const char *  name, const char *  type, void *  function, int declMode);

extern struct __eCNameSpace__eC__types__ClassTemplateParameter * __eCNameSpace__eC__types__eClass_AddTemplateParameter(struct __eCNameSpace__eC__types__Class * _class, const char *  name, int type, const void *  info, struct __eCNameSpace__eC__types__ClassTemplateArgument * defaultArg);

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

struct __eCNameSpace__eC__types__Module;

extern struct __eCNameSpace__eC__types__Class * __eCNameSpace__eC__types__eSystem_FindClass(struct __eCNameSpace__eC__types__Instance * module, const char *  name);

extern struct __eCNameSpace__eC__types__Instance * privateModule;

extern struct __eCNameSpace__eC__types__Class * __eCNameSpace__eC__types__eSystem_RegisterClass(int type, const char *  name, const char *  baseName, int size, int sizeClass, unsigned int (*  Constructor)(void * ), void (*  Destructor)(void * ), struct __eCNameSpace__eC__types__Instance * module, int declMode, int inheritanceAccess);

extern struct ModuleImport * FindModule(struct __eCNameSpace__eC__types__Instance * moduleToFind);

extern struct __eCNameSpace__eC__types__DefinedExpression * __eCNameSpace__eC__types__eSystem_RegisterDefine(const char *  name, const char *  value, struct __eCNameSpace__eC__types__Instance * module, int declMode);

extern struct __eCNameSpace__eC__types__GlobalFunction * __eCNameSpace__eC__types__eSystem_RegisterFunction(const char *  name, const char *  type, void *  func, struct __eCNameSpace__eC__types__Instance * module, int declMode);

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
} eC_gcc_struct;

extern struct __eCNameSpace__eC__types__Instance * __eCNameSpace__eC__types__eModule_LoadStrict(struct __eCNameSpace__eC__types__Instance * fromModule, const char *  name, int importAccess);

extern struct __eCNameSpace__eC__types__Instance * __thisModule;

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

struct __eCNameSpace__eC__containers__BTNode * __eCMethod___eCNameSpace__eC__containers__BinaryTree_FindString(struct __eCNameSpace__eC__containers__BinaryTree * this, const char *  key);

int __eCMethod___eCNameSpace__eC__containers__BinaryTree_CompareString(struct __eCNameSpace__eC__containers__BinaryTree * this, const char *  a, const char *  b);

unsigned int __eCMethod___eCNameSpace__eC__containers__BinaryTree_Add(struct __eCNameSpace__eC__containers__BinaryTree * this, struct __eCNameSpace__eC__containers__BTNode * node);

void __eCMethod___eCNameSpace__eC__containers__BinaryTree_Remove(struct __eCNameSpace__eC__containers__BinaryTree * this, struct __eCNameSpace__eC__containers__BTNode * node);

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

void SetGlobalData(struct __eCNameSpace__eC__types__NameSpace * nameSpace)
{
globalData = nameSpace;
}

static void ReadDataMembers(struct __eCNameSpace__eC__types__Class * regClass, struct __eCNameSpace__eC__types__DataMember * member, struct __eCNameSpace__eC__types__Instance * f)
{
char line[1024];
char name[1024];
int size = 0, bitPos = -1;
int memberAccess = 1;

for(; ; )
{
if(!__eCMethod___eCNameSpace__eC__files__File_GetLine(f, line, sizeof (line)))
break;
__eCNameSpace__eC__types__TrimLSpaces(line, line);
if(!strcmp(line, "."))
break;
if(line[0] == '[')
{
if(!strcmp(line, "[Size]"))
{
__eCMethod___eCNameSpace__eC__files__File_GetLine(f, line, sizeof (line));
__eCNameSpace__eC__types__TrimLSpaces(line, line);
size = strtol(line, (((void *)0)), 0);
}
else if(!strcmp(line, "[Pos]"))
{
__eCMethod___eCNameSpace__eC__files__File_GetLine(f, line, sizeof (line));
__eCNameSpace__eC__types__TrimLSpaces(line, line);
bitPos = strtol(line, (((void *)0)), 0);
}
else if(!strcmp(line, "[Public]"))
memberAccess = 1;
else if(!strcmp(line, "[Private]"))
memberAccess = 2;
else if(!strcmp(line, "[Type]"))
{
__eCMethod___eCNameSpace__eC__files__File_GetLine(f, line, sizeof (line));
__eCNameSpace__eC__types__TrimLSpaces(line, line);
if(member)
{
if(!__eCNameSpace__eC__types__eMember_AddDataMember(member, name, line[0] ? line : 0, 0, 0, memberAccess))
;
}
else if(regClass && regClass->type == 2)
{
struct __eCNameSpace__eC__types__BitMember * member = __eCNameSpace__eC__types__eClass_AddBitMember(regClass, name, line[0] ? line : 0, 0, 0, memberAccess);

if(member)
{
member->size = size;
member->pos = bitPos;
}
}
else if(regClass)
{
if(!__eCNameSpace__eC__types__eClass_AddDataMember(regClass, name, line[0] ? line : 0, 0, 0, memberAccess))
;
}
}
else if(!strcmp(line, "[Struct]") || !strcmp(line, "[Union]"))
{
struct __eCNameSpace__eC__types__DataMember * dataMember = (regClass || member) ? __eCNameSpace__eC__types__eMember_New((!strcmp(line, "[Union]")) ? 1 : 2, memberAccess) : (((void *)0));

ReadDataMembers((((void *)0)), dataMember, f);
if(member)
{
if(!__eCNameSpace__eC__types__eMember_AddMember(member, dataMember))
;
}
else if(regClass)
{
if(!__eCNameSpace__eC__types__eClass_AddMember(regClass, dataMember))
;
}
}
}
else
{
size = 0;
bitPos = -1;
strcpy(name, line);
memberAccess = 1;
}
}
}

extern struct __eCNameSpace__eC__types__Class * __eCClass_GlobalData;

extern struct __eCNameSpace__eC__types__Class * __eCClass_DataRedefinition;

extern struct __eCNameSpace__eC__types__Class * __eCClass_ImportedModule;

extern struct __eCNameSpace__eC__types__Class * __eCClass___eCNameSpace__eC__containers__List_TPL_eC__types__Module_;

extern struct __eCNameSpace__eC__types__Class * __eCClass___eCNameSpace__eC__types__Map_TPL_String__eC__containers__List_TPL_eC__types__Module___;

extern struct __eCNameSpace__eC__types__Class * __eCClass___eCNameSpace__eC__sys__File;

extern struct __eCNameSpace__eC__types__Class * __eCClass___eCNameSpace__eC__types__Module;

extern struct __eCNameSpace__eC__types__Class * __eCClass___eCNameSpace__eC__containers__List;

extern struct __eCNameSpace__eC__types__Class * __eCClass___eCNameSpace__eC__containers__BTNode;

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

void __eCCreateModuleInstances_loadSymbols()
{
loadedModules = __eCNameSpace__eC__types__eInstance_New(__eCClass___eCNameSpace__eC__types__Map_TPL_String__eC__containers__List_TPL_eC__types__Module___);
__eCNameSpace__eC__types__eInstance_IncRef(loadedModules);
}

void FreeGlobalData(struct __eCNameSpace__eC__types__NameSpace * globalDataList)
{
struct __eCNameSpace__eC__types__NameSpace * ns;
struct GlobalData * data;

for(; (ns = (struct __eCNameSpace__eC__types__NameSpace *)globalDataList->nameSpaces.root); )
{
FreeGlobalData(ns);
__eCMethod___eCNameSpace__eC__containers__BinaryTree_Remove(&globalDataList->nameSpaces, (struct __eCNameSpace__eC__containers__BTNode *)ns);
(__eCNameSpace__eC__types__eSystem_Delete((void *)(*ns).name), (*ns).name = 0);
(__eCNameSpace__eC__types__eSystem_Delete(ns), ns = 0);
}
for(; (data = (struct GlobalData *)globalDataList->functions.root); )
{
__eCMethod___eCNameSpace__eC__containers__BinaryTree_Remove(&globalDataList->functions, (void *)(data));
if(data->symbol)
FreeSymbol(data->symbol);
FreeType(data->dataType);
(__eCNameSpace__eC__types__eSystem_Delete(data->fullName), data->fullName = 0);
(__eCNameSpace__eC__types__eSystem_Delete(data->dataTypeString), data->dataTypeString = 0);
((data ? __extension__ ({
void * __eCPtrToDelete = (data);

__eCClass_GlobalData->Destructor ? __eCClass_GlobalData->Destructor((void *)__eCPtrToDelete) : 0, __eCClass___eCNameSpace__eC__containers__BTNode->Destructor ? __eCClass___eCNameSpace__eC__containers__BTNode->Destructor((void *)__eCPtrToDelete) : 0, __eCNameSpace__eC__types__eSystem_Delete(__eCPtrToDelete);
}) : 0), data = 0);
}
}

void __eCUnregisterModule_loadSymbols(struct __eCNameSpace__eC__types__Instance * module)
{

}

void ImportModule(const char *  name, int importType, int importAccess, unsigned int loadDllOnly);

unsigned int LoadSymbols(const char * fileName, int importType, unsigned int loadDllOnly)
{
struct __eCNameSpace__eC__types__Instance * f = __eCNameSpace__eC__files__FileOpenBuffered(fileName, 1);
unsigned int globalInstance = 0;

if(f)
{
unsigned int ecrtModule = 0;
char moduleName[797];

__eCNameSpace__eC__types__GetLastDirectory(fileName, moduleName);
if(!((strcasecmp)(moduleName, "instance.sym") && (strcasecmp)(moduleName, "BinaryTree.sym") && (strcasecmp)(moduleName, "dataTypes.sym") && (strcasecmp)(moduleName, "OldList.sym") && (strcasecmp)(moduleName, "String.sym") && (strcasecmp)(moduleName, "BTNode.sym") && (strcasecmp)(moduleName, "Array.sym") && (strcasecmp)(moduleName, "AVLTree.sym") && (strcasecmp)(moduleName, "BuiltInContainer.sym") && (strcasecmp)(moduleName, "Container.sym") && (strcasecmp)(moduleName, "CustomAVLTree.sym") && (strcasecmp)(moduleName, "LinkList.sym") && (strcasecmp)(moduleName, "List.sym") && (strcasecmp)(moduleName, "Map.sym") && (strcasecmp)(moduleName, "Mutex.sym")))
ecrtModule = 1;
for(; ; )
{
char line[1024];

if(!__eCMethod___eCNameSpace__eC__files__File_GetLine(f, line, sizeof (line)))
break;
__eCNameSpace__eC__types__TrimLSpaces(line, line);
if(line[0] == '[')
{
if(!strcmp(line, "[Global Instance]"))
globalInstance = 1;
else if(!strcmp(line, "[Defined Classes]"))
{
struct __eCNameSpace__eC__types__Class * regClass = (((void *)0));
char name[1024];
unsigned int isRemote = 0;
unsigned int isStatic = 0;
unsigned int isWatchable = 0;
int classType = 0;
unsigned int fixed = 0;
unsigned int noExpansion = 0;
int accessMode = 1;
int inheritanceAccess = 1;

for(; ; )
{
if(!__eCMethod___eCNameSpace__eC__files__File_GetLine(f, line, sizeof (line)))
break;
__eCNameSpace__eC__types__TrimLSpaces(line, line);
if(!strcmp(line, "."))
break;
if(line[0] == '[')
{
if(!strcmp(line, "[Remote]"))
isRemote = 1;
else if(!strcmp(line, "[Static]"))
isStatic = 1, accessMode = 3;
else if(!strcmp(line, "[Private]"))
accessMode = 2;
else if(!strcmp(line, "[Fixed]"))
fixed = 1;
else if(!strcmp(line, "[No Expansion]"))
noExpansion = 1;
else if(!strcmp(line, "[Watchable]"))
isWatchable = 1;
else if(!strcmp(line, "[Enum]"))
classType = 4;
else if(!strcmp(line, "[Bit]"))
classType = 2;
else if(!strcmp(line, "[Struct]"))
classType = 1;
else if(!strcmp(line, "[Unit]"))
classType = 3;
else if(!strcmp(line, "[NoHead]"))
classType = 5;
else if(!strcmp(line, "[Base]") || !strcmp(line, "[Private Base]"))
{
if(!strcmp(line, "[Private Base]"))
inheritanceAccess = 2;
__eCMethod___eCNameSpace__eC__files__File_GetLine(f, line, sizeof (line));
__eCNameSpace__eC__types__TrimLSpaces(line, line);
if(importType == 3)
DeclClass((((void *)0)), name);
if(isStatic || loadDllOnly || importType == 3 || importType == 4)
regClass = (((void *)0));
else if(regClass = __eCNameSpace__eC__types__eSystem_FindClass(privateModule, name), !regClass || regClass->internalDecl || regClass->isRemote)
{
struct Symbol * existingClass = FindClass(name);
const char * baseName = (classType == 0 && importType == 2 && isRemote) ? "DCOMClientObject" : (!strcmp(line, "[None]") ? (((void *)0)) : line);

if(!isRemote || (importType != 2) || (!sourceFile || !strstr(sourceFile, ".main.ec")))
{
if(!regClass || regClass->internalDecl)
regClass = __eCNameSpace__eC__types__eSystem_RegisterClass(classType, name, isRemote ? (((void *)0)) : baseName, 0, 0, (((void *)0)), (((void *)0)), privateModule, ecrtModule ? 4 : accessMode, inheritanceAccess);
if(regClass && isRemote)
regClass->isRemote = (importType == 2) ? 1 : 2;
if(isRemote)
{
if(importType == 2)
{
char className[1024] = "DCOMClient_";

strcat(className, name);
if(!existingClass)
existingClass = DeclClass((((void *)0)), name);
regClass = __eCNameSpace__eC__types__eSystem_RegisterClass(classType, className, baseName, 0, 0, (((void *)0)), (((void *)0)), privateModule, ecrtModule ? 4 : accessMode, inheritanceAccess);
}
if(regClass)
regClass->isRemote = (importType == 2) ? 1 : 3;
}
if(existingClass)
{
struct __eCNameSpace__eC__sys__OldLink * link;

for(link = existingClass->templatedClasses.first; link; link = link->next)
{
struct Symbol * symbol = link->data;

symbol->__anon1.registered = __eCNameSpace__eC__types__eSystem_FindClass(privateModule, symbol->string);
}
}
if(fixed)
regClass->fixed = 1;
if(noExpansion)
regClass->noExpansion = 1;
if(isWatchable)
{
__eCNameSpace__eC__types__eClass_DestructionWatchable(regClass);
regClass->structSize = regClass->offset;
}
if(regClass && existingClass)
{
existingClass->__anon1.registered = regClass;
regClass->symbol = existingClass;
existingClass->notYetDeclared = 1;
existingClass->imported = 1;
if(regClass->module)
existingClass->module = FindModule(regClass->module);
else
existingClass->module = mainModule;
}
}
else
regClass = (((void *)0));
}
else
regClass = (((void *)0));
isRemote = 0;
isWatchable = 0;
fixed = 0;
isStatic = 0;
accessMode = 1;
}
else if(!strcmp(line, "[Enum Values]"))
{
long long lastValue = -1;
unsigned int lastValueSet = 0;

for(; ; )
{
char * equal;

if(!__eCMethod___eCNameSpace__eC__files__File_GetLine(f, line, sizeof (line)))
break;
__eCNameSpace__eC__types__TrimLSpaces(line, line);
if(!strcmp(line, "."))
break;
if(regClass)
{
equal = strchr(line, '=');
if(equal)
{
char name[1024];

memcpy(name, line, (int)(equal - line));
name[equal - line] = '\0';
__eCNameSpace__eC__types__TrimLSpaces(name, name);
__eCNameSpace__eC__types__TrimRSpaces(name, name);
lastValue = strtoll(equal + 1, (((void *)0)), 0);
__eCNameSpace__eC__types__eEnum_AddFixedValue(regClass, name, lastValue);
lastValueSet = 1;
}
else
{
if(lastValueSet)
__eCNameSpace__eC__types__eEnum_AddFixedValue(regClass, line, ++lastValue);
else
__eCNameSpace__eC__types__eEnum_AddValue(regClass, line);
}
}
}
}
else if(!strcmp(line, "[Defined Methods]"))
{
char name[1024];
unsigned int isVirtual = 0;
int memberAccess = 1;

for(; ; )
{
if(!__eCMethod___eCNameSpace__eC__files__File_GetLine(f, line, sizeof (line)))
break;
__eCNameSpace__eC__types__TrimLSpaces(line, line);
if(!strcmp(line, "."))
break;
if(line[0] == '[')
{
if(!strcmp(line, "[Type]"))
{
__eCMethod___eCNameSpace__eC__files__File_GetLine(f, line, sizeof (line));
if(regClass)
{
__eCNameSpace__eC__types__TrimLSpaces(line, line);
if(isVirtual)
__eCNameSpace__eC__types__eClass_AddVirtualMethod(regClass, name, line[0] ? line : 0, DummyMethod, memberAccess);
else
__eCNameSpace__eC__types__eClass_AddMethod(regClass, name, line[0] ? line : 0, DummyMethod, memberAccess);
}
}
else if(!strcmp(line, "[Virtual]"))
isVirtual = 1;
else if(!strcmp(line, "[Public]"))
memberAccess = 1;
else if(!strcmp(line, "[Private]"))
memberAccess = 2;
}
else
{
strcpy(name, line);
isVirtual = 0;
memberAccess = 1;
}
}
}
else if(!strcmp(line, "[Defined Properties]"))
{
char name[1024];
unsigned int setStmt = 0, getStmt = 0, isVirtual = 0, conversion = 0;
unsigned int isWatchable = 0;
int memberAccess = 1;

for(; ; )
{
if(!__eCMethod___eCNameSpace__eC__files__File_GetLine(f, line, sizeof (line)))
break;
__eCNameSpace__eC__types__TrimLSpaces(line, line);
if(!strcmp(line, "."))
break;
if(line[0] == '[')
{
if(!strcmp(line, "[Type]"))
{
__eCMethod___eCNameSpace__eC__files__File_GetLine(f, line, sizeof (line));
__eCNameSpace__eC__types__TrimLSpaces(line, line);
if(regClass)
{
struct __eCNameSpace__eC__types__Property * prop = __eCNameSpace__eC__types__eClass_AddProperty(regClass, conversion ? (((void *)0)) : name, line[0] ? line : 0, (void *)(uintptr_t)setStmt, (void *)(uintptr_t)getStmt, memberAccess);

if(prop)
{
prop->compiled = 0;
if(isWatchable)
{
__eCNameSpace__eC__types__eProperty_Watchable(prop);
regClass->structSize = regClass->offset;
}
}
}
}
else if(!strcmp(line, "[Set]"))
setStmt = 1;
else if(!strcmp(line, "[Get]"))
getStmt = 1;
else if(!strcmp(line, "[Watchable]"))
isWatchable = 1;
else if(!strcmp(line, "[Public]"))
memberAccess = 1;
else if(!strcmp(line, "[Private]"))
memberAccess = 2;
else if(!strcmp(line, "[Conversion]"))
{
conversion = 1;
setStmt = getStmt = isVirtual = isWatchable = 0;
}
}
else
{
strcpy(name, line);
setStmt = getStmt = isVirtual = conversion = isWatchable = 0;
memberAccess = 1;
}
}
}
else if(!strcmp(line, "[Defined Class Properties]"))
{
char name[1024];
unsigned int setStmt = 0, getStmt = 0;

for(; ; )
{
if(!__eCMethod___eCNameSpace__eC__files__File_GetLine(f, line, sizeof (line)))
break;
__eCNameSpace__eC__types__TrimLSpaces(line, line);
if(!strcmp(line, "."))
break;
if(line[0] == '[')
{
if(!strcmp(line, "[Type]"))
{
__eCMethod___eCNameSpace__eC__files__File_GetLine(f, line, sizeof (line));
__eCNameSpace__eC__types__TrimLSpaces(line, line);
if(regClass)
{
__eCNameSpace__eC__types__eClass_AddClassProperty(regClass, name, line, (void *)(uintptr_t)setStmt, (void *)(uintptr_t)getStmt);
}
}
else if(!strcmp(line, "[Set]"))
setStmt = 1;
else if(!strcmp(line, "[Get]"))
getStmt = 1;
}
else
{
strcpy(name, line);
setStmt = getStmt = 0;
}
}
}
else if(!strcmp(line, "[Defined Data Members]"))
{
ReadDataMembers(regClass, (((void *)0)), f);
}
else if(!strcmp(line, "[Template Parameters]"))
{
while(!(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__sys__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Eof]);
__internal_VirtualMethod ? __internal_VirtualMethod(f) : (unsigned int)1;
})))
{
char name[1024];
int type = 0;
struct __eCNameSpace__eC__types__ClassTemplateArgument defaultArg =
{

.__anon1 = {

.__anon1 = {
.dataTypeString = 0
}
}
};
void * info = (((void *)0));

__eCMethod___eCNameSpace__eC__files__File_GetLine(f, line, sizeof (line));
__eCNameSpace__eC__types__TrimLSpaces(line, line);
if(line[0] == '.')
break;
strcpy(name, line);
__eCMethod___eCNameSpace__eC__files__File_GetLine(f, line, sizeof (line));
__eCNameSpace__eC__types__TrimLSpaces(line, line);
if(!strcmp(line, "[Expression]"))
type = 2;
else if(!strcmp(line, "[Identifier]"))
type = 1;
switch(type)
{
case 0:
__eCMethod___eCNameSpace__eC__files__File_GetLine(f, line, sizeof (line));
__eCNameSpace__eC__types__TrimLSpaces(line, line);
if(regClass && strcmp(line, "[None]"))
{
info = __eCNameSpace__eC__types__CopyString(line);
}
__eCMethod___eCNameSpace__eC__files__File_GetLine(f, line, sizeof (line));
__eCNameSpace__eC__types__TrimLSpaces(line, line);
if(regClass && strcmp(line, "[None]"))
{
defaultArg.__anon1.__anon1.dataTypeString = __eCNameSpace__eC__types__CopyString(line);
}
break;
case 2:
__eCMethod___eCNameSpace__eC__files__File_GetLine(f, line, sizeof (line));
__eCNameSpace__eC__types__TrimLSpaces(line, line);
if(regClass && strcmp(line, "[None]"))
{
info = __eCNameSpace__eC__types__CopyString(line);
}
__eCMethod___eCNameSpace__eC__files__File_GetLine(f, line, sizeof (line));
__eCNameSpace__eC__types__TrimLSpaces(line, line);
if(regClass && strcmp(line, "[None]"))
{
struct __eCNameSpace__eC__types__Instance * backup = pushLexer();
struct Operand op;
struct Expression * exp;

skipErrors = 1;
exp = ParseExpressionString(line);
if(exp)
{
if(info)
exp->destType = ProcessTypeString(info, 0);
ProcessExpressionType(exp);
ComputeExpression(exp);
op = GetOperand(exp);
defaultArg.__anon1.expression.__anon1.ui64 = op.__anon1.ui64;
FreeExpression(exp);
}
skipErrors = 0;
popLexer(backup);
}
break;
case 1:
__eCMethod___eCNameSpace__eC__files__File_GetLine(f, line, sizeof (line));
__eCNameSpace__eC__types__TrimLSpaces(line, line);
if(!strcmp(line, "[Data member]"))
info = (void *)0;
else if(!strcmp(line, "[Method]"))
info = (void *)1;
else if(!strcmp(line, "[Property]"))
info = (void *)2;
__eCMethod___eCNameSpace__eC__files__File_GetLine(f, line, sizeof (line));
__eCNameSpace__eC__types__TrimLSpaces(line, line);
if(regClass && strcmp(line, "[None]"))
{
defaultArg.__anon1.__anon2.memberString = __eCNameSpace__eC__types__CopyString(line);
}
break;
}
if(regClass)
__eCNameSpace__eC__types__eClass_AddTemplateParameter(regClass, name, type, info, &defaultArg);
if(type == 0 || type == 2)
(__eCNameSpace__eC__types__eSystem_Delete(info), info = 0);
if(type == 0 || type == 1)
(__eCNameSpace__eC__types__eSystem_Delete((void *)defaultArg.__anon1.__anon1.dataTypeString), defaultArg.__anon1.__anon1.dataTypeString = 0);
}
if(regClass)
__eCNameSpace__eC__types__eClass_DoneAddingTemplateParameters(regClass);
}
}
else
{
inheritanceAccess = 1;
classType = 0;
isRemote = 0;
strcpy(name, line);
regClass = (((void *)0));
}
}
}
else if(!strcmp(line, "[Defined Expressions]"))
{
char name[1024];

for(; ; )
{
if(!__eCMethod___eCNameSpace__eC__files__File_GetLine(f, line, sizeof (line)))
break;
__eCNameSpace__eC__types__TrimLSpaces(line, line);
if(!strcmp(line, "."))
break;
if(!strcmp(line, "[Value]"))
{
__eCMethod___eCNameSpace__eC__files__File_GetLine(f, line, sizeof (line));
__eCNameSpace__eC__types__TrimLSpaces(line, line);
if(!loadDllOnly && importType != 3 && importType != 4)
__eCNameSpace__eC__types__eSystem_RegisterDefine(name, line, privateModule, ecrtModule ? 4 : 1);
}
else if(line[0] != '[')
{
strcpy(name, line);
}
}
}
else if(!strcmp(line, "[Defined Functions]"))
{
char name[1024];

for(; ; )
{
if(!__eCMethod___eCNameSpace__eC__files__File_GetLine(f, line, sizeof (line)))
break;
__eCNameSpace__eC__types__TrimLSpaces(line, line);
if(!strcmp(line, "."))
break;
if(!strcmp(line, "[Type]"))
{
__eCMethod___eCNameSpace__eC__files__File_GetLine(f, line, sizeof (line));
__eCNameSpace__eC__types__TrimLSpaces(line, line);
if(!loadDllOnly && importType != 3 && importType != 4)
__eCNameSpace__eC__types__eSystem_RegisterFunction(name, line, (((void *)0)), privateModule, ecrtModule ? 4 : 1);
}
else if(line[0] != '[')
{
strcpy(name, line);
}
}
}
else if(!strcmp(line, "[Defined Data]"))
{
char name[1024];

for(; ; )
{
if(!__eCMethod___eCNameSpace__eC__files__File_GetLine(f, line, sizeof (line)))
break;
__eCNameSpace__eC__types__TrimLSpaces(line, line);
if(!strcmp(line, "."))
break;
if(!strcmp(line, "[Type]"))
{
__eCMethod___eCNameSpace__eC__files__File_GetLine(f, line, sizeof (line));
__eCNameSpace__eC__types__TrimLSpaces(line, line);
if(!loadDllOnly && importType != 3 && importType != 4)
{
int start = 0, c;
struct __eCNameSpace__eC__types__NameSpace * nameSpace = globalData;
struct GlobalData * data;

for(c = 0; name[c]; c++)
{
if(name[c] == '.' || (name[c] == ':' && name[c + 1] == ':'))
{
struct __eCNameSpace__eC__types__NameSpace * newSpace;
char * spaceName = __eCNameSpace__eC__types__eSystem_New(sizeof(char) * (c - start + 1));

strncpy(spaceName, name + start, c - start);
spaceName[c - start] = '\0';
newSpace = (struct __eCNameSpace__eC__types__NameSpace *)__eCMethod___eCNameSpace__eC__containers__BinaryTree_FindString(&(*nameSpace).nameSpaces, spaceName);
if(!newSpace)
{
newSpace = __eCNameSpace__eC__types__eSystem_New0(sizeof(struct __eCNameSpace__eC__types__NameSpace) * (1));
(*newSpace).classes.CompareKey = (void *)__eCMethod___eCNameSpace__eC__containers__BinaryTree_CompareString;
(*newSpace).defines.CompareKey = (void *)__eCMethod___eCNameSpace__eC__containers__BinaryTree_CompareString;
(*newSpace).functions.CompareKey = (void *)__eCMethod___eCNameSpace__eC__containers__BinaryTree_CompareString;
(*newSpace).nameSpaces.CompareKey = (void *)__eCMethod___eCNameSpace__eC__containers__BinaryTree_CompareString;
(*newSpace).name = spaceName;
(*newSpace).parent = nameSpace;
__eCMethod___eCNameSpace__eC__containers__BinaryTree_Add(&(*nameSpace).nameSpaces, (struct __eCNameSpace__eC__containers__BTNode *)newSpace);
}
else
(__eCNameSpace__eC__types__eSystem_Delete(spaceName), spaceName = 0);
nameSpace = newSpace;
if(name[c] == ':')
c++;
start = c + 1;
}
}
if(c - start)
{
data = (struct GlobalData *)__eCMethod___eCNameSpace__eC__containers__BinaryTree_FindString(&(*nameSpace).functions, name + start);
if(!data)
{
data = __extension__ ({
struct GlobalData * __eCInstance1 = __eCNameSpace__eC__types__eInstance_New(__eCClass_GlobalData);

__eCInstance1->fullName = __eCNameSpace__eC__types__CopyString(name), __eCInstance1->dataTypeString = __eCNameSpace__eC__types__CopyString(line), __eCInstance1->module = privateModule, __eCInstance1;
});
data->key = (uintptr_t)(data->fullName + start);
__eCMethod___eCNameSpace__eC__containers__BinaryTree_Add(&(*nameSpace).functions, (struct __eCNameSpace__eC__containers__BTNode *)data);
}
else if(strcmp(data->dataTypeString, line))
{
struct DataRedefinition * redefinition = __eCNameSpace__eC__types__eInstance_New(__eCClass_DataRedefinition);

strcpy(redefinition->name, name);
strcpy(redefinition->type1, data->dataTypeString);
strcpy(redefinition->type2, line);
__eCMethod___eCNameSpace__eC__containers__OldList_Add(&dataRedefinitions, redefinition);
}
}
}
}
else if(line[0] != '[')
{
strcpy(name, line);
}
}
}
else if(!strcmp(line, "[Imported Modules]"))
{
int moduleImportType = 0;
int importAccess = 1;

for(; ; )
{
if(!__eCMethod___eCNameSpace__eC__files__File_GetLine(f, line, sizeof (line)))
break;
__eCNameSpace__eC__types__TrimLSpaces(line, line);
if(!strcmp(line, "."))
break;
if(!strcmp(line, "[Static]"))
moduleImportType = 1;
else if(!strcmp(line, "[Remote]"))
moduleImportType = 2;
else if(!strcmp(line, "[Private]"))
importAccess = 2;
else if(line[0] != '[')
{
if(importType != 3 && importType != 4)
ImportModule(line, moduleImportType, importAccess, loadDllOnly);
else
ImportModule(line, 4, importAccess, loadDllOnly);
if(!strcmp(line, "ecrt"))
ecrtImported = 1;
moduleImportType = 0;
importAccess = 1;
}
}
}
}
}
(__eCNameSpace__eC__types__eInstance_DecRef(f), f = 0);
}
else if(importType != 4)
{
char sysFileName[797];

__eCNameSpace__eC__files__GetSystemPathBuffer(sysFileName, fileName);
Compiler_Error(__eCNameSpace__eC__i18n__GetTranslatedString("ec", "Couldn't open %s\n", (((void *)0))), sysFileName);
}
return globalInstance;
}

void ImportModule(const char * name, int importType, int importAccess, unsigned int loadDllOnly)
{
struct ImportedModule * module = (((void *)0));
char moduleName[797];
unsigned int isSourceModule = 0;

if(sourceFile)
{
char sourceFileModule[274];

__eCNameSpace__eC__types__GetLastDirectory(sourceFile, sourceFileModule);
__eCNameSpace__eC__types__StripExtension(sourceFileModule);
if(!(strcasecmp)(sourceFileModule, name))
isSourceModule = 1;
}
strncpy(moduleName, name, (797) - 1);
moduleName[(797) - 1] = 0;
__eCNameSpace__eC__types__StripExtension(moduleName);
for(module = (*defines).first; module; module = module->next)
{
if(module->type == 0 && !(strcasecmp)(module->name, moduleName) && ((importType == 2) == (module->importType == 2) || isSourceModule))
break;
}
if((!module || (module->dllOnly && !loadDllOnly)) && strlen(name) < (274))
{
char ext[17];
struct __eCNameSpace__eC__types__Instance * loadedModule = (((void *)0));
char symFile[797];

symFile[0] = '\0';
__eCNameSpace__eC__types__GetExtension(name, ext);
strcpy(symFile, symbolsDir ? symbolsDir : "");
__eCNameSpace__eC__types__PathCat(symFile, name);
__eCNameSpace__eC__types__ChangeExtension(symFile, "sym", symFile);
if(!strcmp(ext, "dll") || !strcmp(ext, "so") || !strcmp(ext, "dylib") || !ext[0])
{
if(importType != 4)
{
if(!module)
{
if(precompDefines)
{
module = __extension__ ({
struct ImportedModule * __eCInstance1 = __eCNameSpace__eC__types__eInstance_New(__eCClass_ImportedModule);

__eCInstance1->name = __eCNameSpace__eC__types__CopyString(moduleName), __eCInstance1->type = 0, __eCInstance1->importType = importType, __eCInstance1->importAccess = importAccess, __eCInstance1;
});
__eCMethod___eCNameSpace__eC__containers__OldList_Add((&*precompDefines), module);
}
module = __extension__ ({
struct ImportedModule * __eCInstance1 = __eCNameSpace__eC__types__eInstance_New(__eCClass_ImportedModule);

__eCInstance1->name = __eCNameSpace__eC__types__CopyString(moduleName), __eCInstance1->type = 0, __eCInstance1->importType = importType, __eCInstance1->importAccess = importAccess, __eCInstance1;
});
__eCMethod___eCNameSpace__eC__containers__OldList_AddName((&*defines), module);
}
module->dllOnly = loadDllOnly;
if(ext[0] || !__eCNameSpace__eC__files__FileExists(symFile))
{
unsigned int skipLoad = 0;
struct __eCNameSpace__eC__types__Instance * list = (((void *)0));

if(!inCompiler && !inPreCompiler && !inSymbolGen && !inDocumentor)
{
struct __eCNameSpace__eC__types__MapIterator it = (it.container = (void *)0, it.pointer = (void *)0, __eCProp___eCNameSpace__eC__types__MapIterator_Set_map(&it, loadedModules), it);

if(!__eCMethod___eCNameSpace__eC__types__Iterator_Index((void *)(&it), (uint64)(uintptr_t)(name), 0))
{
struct __eCNameSpace__eC__types__Instance * firstModule = __eCNameSpace__eC__types__eModule_LoadStrict(((struct __eCNameSpace__eC__types__Module *)(((char *)__thisModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->application, name, importAccess);

if(firstModule)
{
list = __eCNameSpace__eC__types__eInstance_New(__eCClass___eCNameSpace__eC__containers__List_TPL_eC__types__Module_);
(__extension__ ({
struct __eCNameSpace__eC__containers__IteratorPointer * (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, uint64 value);

__internal_VirtualMethod = ((struct __eCNameSpace__eC__containers__IteratorPointer * (*)(struct __eCNameSpace__eC__types__Instance *, uint64 value))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = list;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__containers__List->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__containers__Container_Add]);
__internal_VirtualMethod ? __internal_VirtualMethod(list, (uint64)(uintptr_t)(firstModule)) : (struct __eCNameSpace__eC__containers__IteratorPointer *)1;
}));
__extension__ ({
struct __eCNameSpace__eC__types__Iterator __internalIterator =
{
loadedModules, 0
};

__eCMethod___eCNameSpace__eC__types__Iterator_Index(&__internalIterator, ((uint64)(uintptr_t)(name)), 1);
__eCProp___eCNameSpace__eC__types__Iterator_Set_data(&__internalIterator, (uint64)(uintptr_t)(list));
});
}
else
skipLoad = 1;
}
else
list = ((struct __eCNameSpace__eC__types__Instance *)(uintptr_t)__eCProp___eCNameSpace__eC__types__Iterator_Get_data((void *)(&it)));
}
if(!skipLoad)
{
loadedModule = __eCNameSpace__eC__types__eModule_LoadStrict(privateModule, name, importAccess);
if(loadedModule)
{
((struct __eCNameSpace__eC__types__Module *)(((char *)loadedModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->importType = importType;
module->dllOnly = 0;
if(list)
(__extension__ ({
struct __eCNameSpace__eC__containers__IteratorPointer * (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, uint64 value);

__internal_VirtualMethod = ((struct __eCNameSpace__eC__containers__IteratorPointer * (*)(struct __eCNameSpace__eC__types__Instance *, uint64 value))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = list;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__containers__List->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__containers__Container_Add]);
__internal_VirtualMethod ? __internal_VirtualMethod(list, (uint64)(uintptr_t)(loadedModule)) : (struct __eCNameSpace__eC__containers__IteratorPointer *)1;
}));
}
}
}
}
}
if(!loadedModule && (!strcmp(ext, "ec") || !strcmp(ext, "sym") || !ext[0]))
{
{
if(!module)
{
if(precompDefines)
{
module = __extension__ ({
struct ImportedModule * __eCInstance1 = __eCNameSpace__eC__types__eInstance_New(__eCClass_ImportedModule);

__eCInstance1->name = __eCNameSpace__eC__types__CopyString(moduleName), __eCInstance1->type = 0, __eCInstance1->importType = importType, __eCInstance1->importAccess = importAccess, __eCInstance1;
});
__eCMethod___eCNameSpace__eC__containers__OldList_Add((&*precompDefines), module);
}
module = __extension__ ({
struct ImportedModule * __eCInstance1 = __eCNameSpace__eC__types__eInstance_New(__eCClass_ImportedModule);

__eCInstance1->name = __eCNameSpace__eC__types__CopyString(moduleName), __eCInstance1->type = 0, __eCInstance1->importType = importType, __eCInstance1->importAccess = importAccess, __eCInstance1;
});
__eCMethod___eCNameSpace__eC__containers__OldList_AddName((&*defines), module);
}
module->dllOnly = loadDllOnly;
if(inPreCompiler)
return ;
if(inIDE && !__eCNameSpace__eC__files__FileExists(symFile) && sourceDirs)
{
{
struct __eCNameSpace__eC__types__Iterator dir =
{
(sourceDirs), 0
};

while(__eCMethod___eCNameSpace__eC__types__Iterator_Next(&dir))
{
char configDir[274];

strcpy(symFile, ((char * )((uintptr_t)(__eCProp___eCNameSpace__eC__types__Iterator_Get_data(&dir)))));
__eCNameSpace__eC__types__PathCat(symFile, "obj");
sprintf(configDir, "debug.%s", (__runtimePlatform == 1) ? "win32" : (__runtimePlatform == 3) ? "apple" : "linux");
__eCNameSpace__eC__types__PathCat(symFile, configDir);
__eCNameSpace__eC__types__PathCat(symFile, name);
__eCNameSpace__eC__types__ChangeExtension(symFile, "sym", symFile);
if(__eCNameSpace__eC__files__FileExists(symFile))
break;
}
}
}
if(!__eCNameSpace__eC__files__FileExists(symFile))
{
char fileName[274];

__eCNameSpace__eC__types__GetLastDirectory(symFile, fileName);
strcpy(symFile, symbolsDir ? symbolsDir : "");
__eCNameSpace__eC__types__PathCat(symFile, fileName);
}
module->globalInstance = LoadSymbols(symFile, importType, loadDllOnly);
}
}
}
}

void __eCRegisterModule_loadSymbols(struct __eCNameSpace__eC__types__Instance * module)
{
struct __eCNameSpace__eC__types__Class __attribute__((unused)) * class;

__eCNameSpace__eC__types__eSystem_RegisterFunction("SetGlobalData", "void SetGlobalData(eC::types::NameSpace * nameSpace)", SetGlobalData, module, 1);
__eCNameSpace__eC__types__eSystem_RegisterFunction("SetInIDE", "void SetInIDE(bool b)", SetInIDE, module, 1);
__eCNameSpace__eC__types__eSystem_RegisterFunction("SetSourceDirs", "void SetSourceDirs(eC::containers::List<String> list)", SetSourceDirs, module, 1);
__eCNameSpace__eC__types__eSystem_RegisterFunction("SetIncludeDirs", "void SetIncludeDirs(eC::containers::OldList * list)", SetIncludeDirs, module, 1);
__eCNameSpace__eC__types__eSystem_RegisterFunction("SetSysIncludeDirs", "void SetSysIncludeDirs(eC::containers::OldList * list)", SetSysIncludeDirs, module, 1);
__eCNameSpace__eC__types__eSystem_RegisterFunction("SetEcereImported", "void SetEcereImported(bool b)", SetEcereImported, module, 1);
__eCNameSpace__eC__types__eSystem_RegisterFunction("GetEcereImported", "bool GetEcereImported(void)", GetEcereImported, module, 1);
__eCNameSpace__eC__types__eSystem_RegisterFunction("SetInPreCompiler", "void SetInPreCompiler(bool b)", SetInPreCompiler, module, 1);
__eCNameSpace__eC__types__eSystem_RegisterFunction("SetInSymbolGen", "void SetInSymbolGen(bool b)", SetInSymbolGen, module, 1);
__eCNameSpace__eC__types__eSystem_RegisterFunction("SetInDocumentor", "void SetInDocumentor(bool b)", SetInDocumentor, module, 1);
__eCNameSpace__eC__types__eSystem_RegisterFunction("SetPrecompDefines", "void SetPrecompDefines(eC::containers::OldList * list)", SetPrecompDefines, module, 1);
__eCNameSpace__eC__types__eSystem_RegisterFunction("DummyMethod", "bool DummyMethod(void)", DummyMethod, module, 1);
__eCNameSpace__eC__types__eSystem_RegisterFunction("LoadSymbols", "bool LoadSymbols(const char * fileName, eC::types::ImportType importType, bool loadDllOnly)", LoadSymbols, module, 1);
__eCNameSpace__eC__types__eSystem_RegisterFunction("ImportModule", "void ImportModule(const char * name, eC::types::ImportType importType, eC::types::AccessMode importAccess, bool loadDllOnly)", ImportModule, module, 1);
__eCNameSpace__eC__types__eSystem_RegisterFunction("FindIncludeFileID", "int FindIncludeFileID(char * includeFile)", FindIncludeFileID, module, 2);
__eCNameSpace__eC__types__eSystem_RegisterFunction("GetIncludeFileID", "int GetIncludeFileID(char * includeFile)", GetIncludeFileID, module, 2);
__eCNameSpace__eC__types__eSystem_RegisterFunction("GetIncludeFileFromID", "char * GetIncludeFileFromID(int id)", GetIncludeFileFromID, module, 2);
__eCNameSpace__eC__types__eSystem_RegisterFunction("OpenIncludeFile", "eC::files::File OpenIncludeFile(char * includeFile)", OpenIncludeFile, module, 2);
__eCNameSpace__eC__types__eSystem_RegisterFunction("FreeIncludeFiles", "void FreeIncludeFiles(void)", FreeIncludeFiles, module, 1);
__eCNameSpace__eC__types__eSystem_RegisterFunction("FreeGlobalData", "void FreeGlobalData(eC::types::NameSpace globalDataList)", FreeGlobalData, module, 1);
__eCNameSpace__eC__types__eSystem_RegisterFunction("CheckDataRedefinitions", "void CheckDataRedefinitions(void)", CheckDataRedefinitions, module, 1);
}

