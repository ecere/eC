/* Code generated from eC source file: ecdefs.ec */
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
void exit(int status);

void * calloc(size_t nmemb, size_t size);

void free(void * ptr);

void * malloc(size_t size);

void * realloc(void * ptr, size_t size);

long int strtol(const char * nptr, char ** endptr, int base);

long long int strtoll(const char * nptr, char ** endptr, int base);

unsigned long long int strtoull(const char * nptr, char ** endptr, int base);

typedef __builtin_va_list va_list;

typedef void FILE;

FILE * bsl_stdin(void);

FILE * bsl_stdout(void);

FILE * bsl_stderr(void);

char * fgets(char * s, int size, FILE * stream);

FILE * fopen(const char * path, const char * mode);

int fclose(FILE * fp);

int fflush(FILE * stream);

int fgetc(FILE * stream);

int fprintf(FILE * stream, const char * format, ...);

int fputc(int c, FILE * stream);

size_t fread(void * ptr, size_t size, size_t nmemb, FILE * stream);

size_t fwrite(const void * ptr, size_t size, size_t nmemb, FILE * stream);

int vsnprintf(char *, size_t, const char *, va_list args);

int snprintf(char * str, size_t, const char * format, ...);

int fseek(FILE * stream, long offset, int whence);

long ftell(FILE * stream);

int feof(FILE * stream);

int ferror(FILE * stream);

int fileno(FILE * stream);

extern int yydebug;

enum yytokentype
{
IDENTIFIER = 258, CONSTANT = 259, STRING_LITERAL = 260, SIZEOF = 261, PTR_OP = 262, INC_OP = 263, DEC_OP = 264, LEFT_OP = 265, RIGHT_OP = 266, LE_OP = 267, GE_OP = 268, EQ_OP = 269, NE_OP = 270, AND_OP = 271, OR_OP = 272, MUL_ASSIGN = 273, DIV_ASSIGN = 274, MOD_ASSIGN = 275, ADD_ASSIGN = 276, SUB_ASSIGN = 277, LEFT_ASSIGN = 278, RIGHT_ASSIGN = 279, AND_ASSIGN = 280, XOR_ASSIGN = 281, OR_ASSIGN = 282, TYPE_NAME = 283, TYPEDEF = 284, EXTERN = 285, STATIC = 286, AUTO = 287, REGISTER = 288, CHAR = 289, SHORT = 290, INT = 291, UINT = 292, INT64 = 293, INT128 = 294, FLOAT128 = 295, FLOAT16 = 296, LONG = 297, SIGNED = 298, UNSIGNED = 299, FLOAT = 300, DOUBLE = 301, CONST = 302, VOLATILE = 303, VOID = 304, VALIST = 305, STRUCT = 306, UNION = 307, ENUM = 308, ELLIPSIS = 309, CASE = 310, DEFAULT = 311, IF = 312, SWITCH = 313, WHILE = 314, DO = 315, FOR = 316, GOTO = 317, CONTINUE = 318, BREAK = 319, RETURN = 320, IFX = 321, ELSE = 322, CLASS = 323, THISCLASS = 324, PROPERTY = 325, SETPROP = 326, GETPROP = 327, NEWOP = 328, RENEW = 329, DELETE = 330, EXT_DECL = 331, EXT_STORAGE = 332, IMPORT = 333, DEFINE = 334, VIRTUAL = 335, ATTRIB = 336, PUBLIC = 337, PRIVATE = 338, TYPED_OBJECT = 339, ANY_OBJECT = 340, _INCREF = 341, EXTENSION = 342, ASM = 343, TYPEOF = 344, WATCH = 345, STOPWATCHING = 346, FIREWATCHERS = 347, WATCHABLE = 348, CLASS_DESIGNER = 349, CLASS_NO_EXPANSION = 350, CLASS_FIXED = 351, ISPROPSET = 352, CLASS_DEFAULT_PROPERTY = 353, PROPERTY_CATEGORY = 354, CLASS_DATA = 355, CLASS_PROPERTY = 356, SUBCLASS = 357, NAMESPACE = 358, NEW0OP = 359, RENEW0 = 360, VAARG = 361, DBTABLE = 362, DBFIELD = 363, DBINDEX = 364, DATABASE_OPEN = 365, ALIGNOF = 366, ATTRIB_DEP = 367, __ATTRIB = 368, BOOL = 369, _BOOL = 370, _COMPLEX = 371, _IMAGINARY = 372, RESTRICT = 373, THREAD = 374, WIDE_STRING_LITERAL = 375, BUILTIN_OFFSETOF = 376, PRAGMA = 377, STATIC_ASSERT = 378
};

typedef struct YYLTYPE
{
int first_line;
int first_column;
int last_line;
int last_column;
} eC_gcc_struct YYLTYPE;

extern YYLTYPE _yylloc;

int yyparse(void);

unsigned int inCompiler = 0;

unsigned int inDebugger = 0;

unsigned int inBGen = 0;

const char * (* bgenSymbolSwap)(const char * symbol, unsigned int reduce, unsigned int macro);

char * symbolsDir = (((void *)0));

const char * outputFile;

const char * sourceFile;

const char * i18nModuleName;

unsigned int outputLineNumbers = 1;

struct CodePosition
{
int line, charPos, pos;
int included;
} eC_gcc_struct;


extern unsigned int parsingType;

extern unsigned int parseTypeError;

int numWarnings;

unsigned int parseError;

unsigned int skipErrors;

int targetPlatform;

int GetRuntimeBits()
{
return (sizeof(uintptr_t) == 8) ? 64 : 32;
}

int targetBits;

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

struct __eCNameSpace__eC__containers__LinkElement
{
void * prev;
void * next;
} eC_gcc_struct;

struct __eCNameSpace__eC__containers__LinkList
{
void * first;
void * last;
int count;
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

extern char *  __eCNameSpace__eC__types__CopyString(const char *  string);

extern void __eCNameSpace__eC__types__ChangeCh(char *  string, char ch1, char ch2);

extern char *  strchr(const char * , int);

struct __eCNameSpace__eC__gui__controls__EditLine;

extern int strcmp(const char * , const char * );

extern char *  __eCNameSpace__eC__files__GetWorkingDir(char *  buf, int size);

extern char *  __eCNameSpace__eC__types__PathCat(char *  string, const char *  addedPath);

extern char *  GetIncludeFileFromID(int id);

extern int printf(const char * , ...);

extern const char *  __eCNameSpace__eC__i18n__GetTranslatedString(const char * name, const char *  string, const char *  stringAndContext);

extern int fputs(const char * , void *  stream);

extern char *  __eCNameSpace__eC__types__GetLastDirectory(const char *  string, char *  output);

extern char *  getenv(const char *  name);

struct __eCNameSpace__eC__types__GlobalFunction;

struct __eCNameSpace__eC__types__BitMember;

struct __eCNameSpace__eC__types__DefinedExpression;

struct __eCNameSpace__eC__containers__IteratorPointer;

void SetInCompiler(unsigned int b)
{
inCompiler = b;
}

void SetInDebugger(unsigned int b)
{
inDebugger = b;
}

void SetInBGen(unsigned int b)
{
inBGen = b;
}

void SetBGenSymbolSwapCallback(const char * (* cb)(const char * spec, unsigned int reduce, unsigned int macro))
{
bgenSymbolSwap = cb;
}

const char * GetSymbolsDir()
{
return symbolsDir ? symbolsDir : "";
}

void SetOutputFile(const char * s)
{
outputFile = s;
}

const char * GetOutputFile()
{
return outputFile;
}

void SetSourceFile(const char * s)
{
sourceFile = s;
}

const char * GetSourceFile()
{
return sourceFile;
}

void SetI18nModuleName(const char * s)
{
i18nModuleName = s;
}

const char * GetI18nModuleName()
{
return i18nModuleName;
}

void SetOutputLineNumbers(unsigned int value)
{
outputLineNumbers = value;
}

struct Location
{
struct CodePosition start, end;
} eC_gcc_struct;

int GetNumWarnings()
{
return numWarnings;
}

void SetTargetPlatform(int platform)
{
targetPlatform = platform;
}

void SetTargetBits(int bits)
{
targetBits = bits;
}

int GetTargetBits()
{
return targetBits;
}

struct __eCNameSpace__eC__containers__OldList * excludedSymbols;

struct __eCNameSpace__eC__containers__OldList * imports;

struct __eCNameSpace__eC__containers__OldList * defines;

extern struct __eCNameSpace__eC__containers__OldList *  MkListOne(void *  item);

extern struct __eCNameSpace__eC__containers__OldList *  CopyList(struct __eCNameSpace__eC__containers__OldList *  source, void *  (*  CopyFunction)(void * ));

void SetSymbolsDir(const char * s)
{
(__eCNameSpace__eC__types__eSystem_Delete(symbolsDir), symbolsDir = 0);
symbolsDir = __eCNameSpace__eC__types__CopyString(s);
}

void FixModuleName(char * moduleName)
{
__eCNameSpace__eC__types__ChangeCh(moduleName, '.', '_');
__eCNameSpace__eC__types__ChangeCh(moduleName, ' ', '_');
__eCNameSpace__eC__types__ChangeCh(moduleName, '-', '_');
__eCNameSpace__eC__types__ChangeCh(moduleName, '&', '_');
}

char * PassArg(char * output, const char * input)
{
const char * escChars, * escCharsQuoted;
unsigned int quoting = 0;
char * o = output;
const char * i = input, * l = input;

if(__runtimePlatform == 1)
{
escChars = " !\"%&'()+,;=[]^`{}~";
escCharsQuoted = "\"";
while(*l && !strchr(escChars, *l))
l++;
if(*l)
quoting = 1;
}
else
{
escChars = " !\"$&'()*:;<=>?[\\`{|";
escCharsQuoted = "\"()$";
if(*i == '-')
{
l++;
while(*l && !strchr(escChars, *l))
l++;
if(*l)
quoting = 1;
*o++ = *i++;
}
}
if(quoting)
*o++ = '\"';
while(*i)
{
if(strchr(quoting ? escCharsQuoted : escChars, *i))
*o++ = '\\';
*o++ = *i++;
}
if(quoting)
*o++ = '\"';
*o = '\0';
return o;
}

struct __eCNameSpace__eC__gui__controls__BufferLocation
{
struct __eCNameSpace__eC__gui__controls__EditLine * line;
int y;
int x;
} eC_gcc_struct;

unsigned int __eCMethod_Location_Inside(struct Location * this, int line, int charPos)
{
return (this->start.line < line || (this->start.line == line && this->start.charPos <= charPos)) && (this->end.line > line || (this->end.line == line && this->end.charPos >= charPos));
}

extern struct Location yylloc;

void SetExcludedSymbols(struct __eCNameSpace__eC__containers__OldList * list)
{
excludedSymbols = list;
}

void SetImports(struct __eCNameSpace__eC__containers__OldList * list)
{
imports = list;
}

void SetDefines(struct __eCNameSpace__eC__containers__OldList * list)
{
defines = list;
}

void __eCMethod_CodePosition_AdjustDelete(struct CodePosition * this, struct __eCNameSpace__eC__gui__controls__BufferLocation * start, struct __eCNameSpace__eC__gui__controls__BufferLocation * end)
{
if(this->line - 1 < start->y || (this->line - 1 == start->y && this->charPos - 1 < start->x))
return ;
if((this->line - 1 >= start->y && (this->line - 1 > start->y || this->charPos - 1 >= start->x)) && (this->line - 1 >= end->y && (this->line - 1 > end->y || this->charPos - 1 >= end->x)))
{
if(this->line - 1 >= end->y)
{
if(this->line - 1 > end->y)
this->line -= end->y - start->y;
else
{
if(this->charPos - 1 >= end->x)
{
this->line = start->y + 1;
this->charPos -= end->x - start->x;
}
}
}
}
else
{
this->line = start->y + 1;
this->charPos = start->x + 1;
}
}

void __eCMethod_CodePosition_AdjustAdd(struct CodePosition * this, struct __eCNameSpace__eC__gui__controls__BufferLocation * start, struct __eCNameSpace__eC__gui__controls__BufferLocation * end)
{
int numLines = end->y - start->y;

if(this->line - 1 >= start->y)
{
if(this->line - 1 > start->y)
this->line += numLines;
else
{
if(this->charPos - 1 > start->x || (this->charPos - 1 == start->x))
{
this->line += numLines;
this->charPos += end->x - start->x;
}
}
}
}

void Compiler_Warning(const char * format, ...)
{
if(inCompiler)
{
va_list args;
char string[10000];
char fileName[274];

if(yylloc.start.included)
{
char * include = GetIncludeFileFromID(yylloc.start.included);

__eCNameSpace__eC__files__GetWorkingDir(string, sizeof (string));
__eCNameSpace__eC__types__PathCat(string, include);
}
else
{
__eCNameSpace__eC__files__GetWorkingDir(string, sizeof (string));
__eCNameSpace__eC__types__PathCat(string, sourceFile);
}
__eCNameSpace__eC__types__GetLastDirectory(string, fileName);
if(!strcmp(fileName, "intrin-impl.h"))
return ;
printf("%s", string);
printf(__eCNameSpace__eC__i18n__GetTranslatedString("ec", ":%d:%d: warning: ", (((void *)0))), yylloc.start.line, yylloc.start.charPos);
__builtin_va_start(args, format);
vsnprintf(string, sizeof (string), format, args);
string[sizeof (string) - 1] = 0;
__builtin_va_end(args);
fputs(string, (bsl_stdout()));
fflush((bsl_stdout()));
numWarnings++;
}
}

struct DBIndexItem;

struct Context;

struct Context * curContext;

struct Context * globalContext;

struct Context * topContext;

void SetCurrentContext(struct Context * context)
{
curContext = context;
}

struct Context * GetCurrentContext()
{
return curContext;
}

void SetGlobalContext(struct Context * context)
{
globalContext = context;
}

struct Context * GetGlobalContext()
{
return globalContext;
}

void SetTopContext(struct Context * context)
{
topContext = context;
}

struct Context * GetTopContext()
{
return topContext;
}

struct ModuleImport;

struct ModuleImport
{
struct ModuleImport * prev, * next;
char * name;
struct __eCNameSpace__eC__containers__OldList classes;
struct __eCNameSpace__eC__containers__OldList functions;
int importType;
int importAccess;
} eC_gcc_struct;

struct ModuleImport * mainModule;

void SetMainModule(struct ModuleImport * moduleImport)
{
mainModule = moduleImport;
}

struct ModuleImport * GetMainModule()
{
return mainModule;
}

struct DataRedefinition;

struct DataRedefinition
{
struct DataRedefinition * prev, * next;
char name[1024];
char type1[1024], type2[1024];
} eC_gcc_struct;

struct Definition;

struct Definition
{
struct Definition * prev, * next;
char * name;
int type;
} eC_gcc_struct;

struct ImportedModule;

struct ImportedModule
{
struct ImportedModule * prev, * next;
char * name;
int type;
int importType;
unsigned int globalInstance;
unsigned int dllOnly;
int importAccess;
} eC_gcc_struct;

struct FunctionImport;

struct FunctionImport
{
struct FunctionImport * prev, * next;
char * name;
} eC_gcc_struct;

struct PropertyImport;

struct PropertyImport
{
struct PropertyImport * prev, * next;
char * name;
unsigned int isVirtual;
unsigned int hasSet, hasGet;
} eC_gcc_struct;

struct MethodImport;

struct MethodImport
{
struct MethodImport * prev, * next;
char * name;
unsigned int isVirtual;
} eC_gcc_struct;

struct __eCNameSpace__eC__types__Property;

static __attribute__((unused)) struct __eCNameSpace__eC__types__Property * __eCProp_Type_specConst, * __eCPropM_Type_specConst;

static __attribute__((unused)) struct __eCNameSpace__eC__types__Property * __eCProp_Type_isPointerTypeSize, * __eCPropM_Type_isPointerTypeSize;

static __attribute__((unused)) struct __eCNameSpace__eC__types__Property * __eCProp_Type_isPointerType, * __eCPropM_Type_isPointerType;

struct Expression;

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

extern struct __eCNameSpace__eC__types__BitMember * __eCNameSpace__eC__types__eClass_AddBitMember(struct __eCNameSpace__eC__types__Class * _class, const char *  name, const char *  type, int bitSize, int bitPos, int declMode);

extern struct __eCNameSpace__eC__types__Property * __eCNameSpace__eC__types__eClass_AddProperty(struct __eCNameSpace__eC__types__Class * _class, const char *  name, const char *  dataType, void *  setStmt, void *  getStmt, int declMode);

extern void *  __eCNameSpace__eC__types__eInstance_New(struct __eCNameSpace__eC__types__Class * _class);

extern void __eCNameSpace__eC__types__eInstance_FireSelfWatchers(struct __eCNameSpace__eC__types__Instance * instance, struct __eCNameSpace__eC__types__Property * _property);

extern void __eCNameSpace__eC__types__eInstance_SetMethod(struct __eCNameSpace__eC__types__Instance * instance, const char *  name, void *  function);

extern void __eCNameSpace__eC__types__eInstance_IncRef(struct __eCNameSpace__eC__types__Instance * instance);

extern void __eCNameSpace__eC__types__eInstance_StopWatching(struct __eCNameSpace__eC__types__Instance * instance, struct __eCNameSpace__eC__types__Property * _property, struct __eCNameSpace__eC__types__Instance * object);

extern void __eCNameSpace__eC__types__eInstance_Watch(struct __eCNameSpace__eC__types__Instance * instance, struct __eCNameSpace__eC__types__Property * _property, void *  object, void (*  callback)(void * , void * ));

extern void __eCNameSpace__eC__types__eInstance_FireWatchers(struct __eCNameSpace__eC__types__Instance * instance, struct __eCNameSpace__eC__types__Property * _property);

struct __eCNameSpace__eC__types__Instance * fileInput;

extern struct __eCNameSpace__eC__types__Instance * __eCNameSpace__eC__files__DualPipeOpen(unsigned int mode, const char *  commandLine);

extern void __eCNameSpace__eC__types__eInstance_DecRef(struct __eCNameSpace__eC__types__Instance * instance);

extern int __eCVMethodID___eCNameSpace__eC__containers__Container_GetNext;

extern int __eCVMethodID___eCNameSpace__eC__containers__Container_Add;

unsigned int __eCMethod___eCNameSpace__eC__files__File_GetLine(struct __eCNameSpace__eC__types__Instance * this, char *  s, int max);

void __eCMethod___eCNameSpace__eC__files__DualPipe_Wait(struct __eCNameSpace__eC__types__Instance * this);

void SetFileInput(struct __eCNameSpace__eC__types__Instance * file)
{
fileInput = file;
}

int GetHostBits()
{
int hostBits = GetRuntimeBits();
char * hostType = getenv("HOSTTYPE");
char host[256];

if(!hostType)
{
struct __eCNameSpace__eC__types__Instance * f = __eCNameSpace__eC__files__DualPipeOpen((((unsigned int)(1))), "uname -m");

if(f)
{
if(__eCMethod___eCNameSpace__eC__files__File_GetLine(f, host, sizeof (host)))
hostType = host;
__eCMethod___eCNameSpace__eC__files__DualPipe_Wait(f);
(__eCNameSpace__eC__types__eInstance_DecRef(f), f = 0);
}
}
if(hostType)
{
if(!strcmp(hostType, "x86_64"))
hostBits = 64;
else if(!strcmp(hostType, "i386") || !strcmp(hostType, "i686"))
hostBits = 32;
}
return hostBits;
}

struct Declaration;

extern struct Declaration * MkDeclaration(struct __eCNameSpace__eC__containers__OldList * specifiers, struct __eCNameSpace__eC__containers__OldList * initDeclarators);

struct Identifier;

struct DBIndexItem
{
struct DBIndexItem * prev, * next;
struct Identifier * id;
int order;
} eC_gcc_struct;

extern struct Identifier * CopyIdentifier(struct Identifier * id);

struct Specifier;

extern struct Specifier * MkStructOrUnion(int type, struct Identifier * id, struct __eCNameSpace__eC__containers__OldList * definitions);

extern struct Specifier * CopySpecifier(struct Specifier * spec);

struct Declarator;

struct TemplateDatatype
{
struct __eCNameSpace__eC__containers__OldList * specifiers;
struct Declarator * decl;
} eC_gcc_struct;

extern struct Declarator * CopyDeclarator(struct Declarator * declarator);

struct External;

struct TopoEdge
{
struct __eCNameSpace__eC__containers__LinkElement in, out;
struct External * from, * to;
unsigned int breakable;
} eC_gcc_struct;

extern struct External * MkExternalDeclaration(struct Declaration * declaration);

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

extern void DeclareTypeForwardDeclare(struct External * neededFor, struct Type * type, unsigned int needDereference, unsigned int forFunctionDef);

extern void PrintType(struct Type * type, char *  string, unsigned int printName, unsigned int fullName);

struct __eCNameSpace__eC__types__DataMember;

extern struct __eCNameSpace__eC__types__DataMember * __eCNameSpace__eC__types__eClass_AddDataMember(struct __eCNameSpace__eC__types__Class * _class, const char *  name, const char *  type, unsigned int size, unsigned int alignment, int declMode);

extern struct __eCNameSpace__eC__types__DataMember * __eCNameSpace__eC__types__eMember_New(int type, int declMode);

extern struct __eCNameSpace__eC__types__DataMember * __eCNameSpace__eC__types__eMember_AddDataMember(struct __eCNameSpace__eC__types__DataMember * member, const char *  name, const char *  type, unsigned int size, unsigned int alignment, int declMode);

extern unsigned int __eCNameSpace__eC__types__eClass_AddMember(struct __eCNameSpace__eC__types__Class * _class, struct __eCNameSpace__eC__types__DataMember * dataMember);

extern unsigned int __eCNameSpace__eC__types__eMember_AddMember(struct __eCNameSpace__eC__types__DataMember * addTo, struct __eCNameSpace__eC__types__DataMember * dataMember);

struct __eCNameSpace__eC__containers__BinaryTree;

struct __eCNameSpace__eC__containers__BinaryTree
{
struct __eCNameSpace__eC__containers__BTNode * root;
int count;
int (*  CompareKey)(struct __eCNameSpace__eC__containers__BinaryTree * tree, uintptr_t a, uintptr_t b);
void (*  FreeKey)(void *  key);
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

int __eCMethod___eCNameSpace__eC__containers__BinaryTree_CompareString(struct __eCNameSpace__eC__containers__BinaryTree * this, const char *  a, const char *  b);

struct TemplateParameter;

struct TemplatedType
{
uintptr_t key;
struct __eCNameSpace__eC__containers__BTNode * parent;
struct __eCNameSpace__eC__containers__BTNode * left;
struct __eCNameSpace__eC__containers__BTNode * right;
int depth;
struct TemplateParameter * param;
} eC_gcc_struct;

extern struct Type * ProcessTemplateParameterType(struct TemplateParameter * param);

struct Symbol;

struct DBTableDef
{
char * name;
struct Symbol * symbol;
struct __eCNameSpace__eC__containers__OldList * definitions;
int declMode;
} eC_gcc_struct;

struct Identifier
{
struct Identifier * prev, * next;
struct Location loc;
struct Symbol * classSym;
struct Specifier * _class;
char * string;
struct Identifier * badID;
} eC_gcc_struct;

struct ClassImport;

struct ClassImport
{
struct ClassImport * prev, * next;
char * name;
struct __eCNameSpace__eC__containers__OldList methods;
struct __eCNameSpace__eC__containers__OldList properties;
unsigned int itself;
int isRemote;
} eC_gcc_struct;

void Compiler_Error(const char *  format, ...);

int yyerror()
{
if(!skipErrors)
{
parseError = 1;
Compiler_Error(__eCNameSpace__eC__i18n__GetTranslatedString("ec", "syntax error\n", (((void *)0))));
}
return 0;
}

struct Attrib;

struct Attrib
{
struct Attrib * prev, * next;
struct Location loc;
int type;
struct __eCNameSpace__eC__containers__OldList * attribs;
} eC_gcc_struct;

struct ExtDecl
{
struct Location loc;
int type;
union
{
char * s;
struct Attrib * attr;
struct __eCNameSpace__eC__containers__OldList * multiAttr;
} eC_gcc_struct __anon1;
} eC_gcc_struct;

struct Specifier
{
struct Specifier * prev, * next;
struct Location loc;
int type;
union
{
int specifier;
struct
{
struct ExtDecl * extDecl;
char * name;
struct Symbol * symbol;
struct __eCNameSpace__eC__containers__OldList * templateArgs;
struct Specifier * nsSpec;
} eC_gcc_struct __anon1;
struct
{
struct Identifier * id;
struct __eCNameSpace__eC__containers__OldList * list;
struct __eCNameSpace__eC__containers__OldList * baseSpecs;
struct __eCNameSpace__eC__containers__OldList * definitions;
unsigned int addNameSpace;
struct Context * ctx;
struct ExtDecl * extDeclStruct;
} eC_gcc_struct __anon2;
struct Expression * expression;
struct Specifier * _class;
struct TemplateParameter * templateParameter;
} eC_gcc_struct __anon1;
} eC_gcc_struct;

struct Pointer;

struct Pointer
{
struct Pointer * prev, * next;
struct Location loc;
struct __eCNameSpace__eC__containers__OldList * qualifiers;
struct Pointer * pointer;
} eC_gcc_struct;

struct Declarator
{
struct Declarator * prev, * next;
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

struct MembersInit;

struct MemberInit;

struct PropertyWatch;

struct Operand;

struct OpTable
{
unsigned int (* Add)(struct Expression *, struct Operand *, struct Operand *);
unsigned int (* Sub)(struct Expression *, struct Operand *, struct Operand *);
unsigned int (* Mul)(struct Expression *, struct Operand *, struct Operand *);
unsigned int (* Div)(struct Expression *, struct Operand *, struct Operand *);
unsigned int (* Mod)(struct Expression *, struct Operand *, struct Operand *);
unsigned int (* Neg)(struct Expression *, struct Operand *);
unsigned int (* Inc)(struct Expression *, struct Operand *);
unsigned int (* Dec)(struct Expression *, struct Operand *);
unsigned int (* Asign)(struct Expression *, struct Operand *, struct Operand *);
unsigned int (* AddAsign)(struct Expression *, struct Operand *, struct Operand *);
unsigned int (* SubAsign)(struct Expression *, struct Operand *, struct Operand *);
unsigned int (* MulAsign)(struct Expression *, struct Operand *, struct Operand *);
unsigned int (* DivAsign)(struct Expression *, struct Operand *, struct Operand *);
unsigned int (* ModAsign)(struct Expression *, struct Operand *, struct Operand *);
unsigned int (* BitAnd)(struct Expression *, struct Operand *, struct Operand *);
unsigned int (* BitOr)(struct Expression *, struct Operand *, struct Operand *);
unsigned int (* BitXor)(struct Expression *, struct Operand *, struct Operand *);
unsigned int (* LShift)(struct Expression *, struct Operand *, struct Operand *);
unsigned int (* RShift)(struct Expression *, struct Operand *, struct Operand *);
unsigned int (* BitNot)(struct Expression *, struct Operand *);
unsigned int (* AndAsign)(struct Expression *, struct Operand *, struct Operand *);
unsigned int (* OrAsign)(struct Expression *, struct Operand *, struct Operand *);
unsigned int (* XorAsign)(struct Expression *, struct Operand *, struct Operand *);
unsigned int (* LShiftAsign)(struct Expression *, struct Operand *, struct Operand *);
unsigned int (* RShiftAsign)(struct Expression *, struct Operand *, struct Operand *);
unsigned int (* Not)(struct Expression *, struct Operand *);
unsigned int (* Equ)(struct Expression *, struct Operand *, struct Operand *);
unsigned int (* Nqu)(struct Expression *, struct Operand *, struct Operand *);
unsigned int (* And)(struct Expression *, struct Operand *, struct Operand *);
unsigned int (* Or)(struct Expression *, struct Operand *, struct Operand *);
unsigned int (* Grt)(struct Expression *, struct Operand *, struct Operand *);
unsigned int (* Sma)(struct Expression *, struct Operand *, struct Operand *);
unsigned int (* GrtEqu)(struct Expression *, struct Operand *, struct Operand *);
unsigned int (* SmaEqu)(struct Expression *, struct Operand *, struct Operand *);
unsigned int (* Cond)(struct Expression *, struct Operand *, struct Operand *, struct Operand *);
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

struct Attribute;

struct Attribute
{
struct Attribute * prev, * next;
struct Location loc;
char * attr;
struct Expression * exp;
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

struct Type
{
struct Type * prev, * next;
int refCount;
union
{
struct Symbol * _class;
struct
{
struct __eCNameSpace__eC__containers__OldList members;
char * enumName;
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
char * name;
char * typeName;
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

struct Symbol
{
char * string;
struct Symbol * parent, * left, * right;
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
unsigned int imported, declaredStructSym;
struct __eCNameSpace__eC__types__Class * _class;
unsigned int declaredStruct;
unsigned int needConstructor, needDestructor;
char * constructorName, * structName, * className, * destructorName;
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
char * shortName;
struct __eCNameSpace__eC__containers__OldList * templateParams;
struct __eCNameSpace__eC__containers__OldList templatedClasses;
struct Context * ctx;
int isIterator;
struct Expression * propCategory;
unsigned int mustRegister;
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

unsigned int __eCProp_Type_Get_specConst(struct Type * this)
{
struct Type * t = this;

while((t->kind == 13 || t->kind == 12) && t->__anon1.type)
t = t->__anon1.type;
return t->constant;
}

unsigned int __eCProp_Type_Get_isPointerTypeSize(struct Type * this);

struct __eCNameSpace__eC__types__Module;

struct __eCNameSpace__eC__types__Instance * privateModule;

struct GlobalData
{
uintptr_t key;
struct __eCNameSpace__eC__containers__BTNode * parent;
struct __eCNameSpace__eC__containers__BTNode * left;
struct __eCNameSpace__eC__containers__BTNode * right;
int depth;
struct __eCNameSpace__eC__types__Instance * module;
char * dataTypeString;
struct Type * dataType;
void * symbol;
char * fullName;
} eC_gcc_struct;

extern struct __eCNameSpace__eC__types__Instance * __thisModule;

extern struct __eCNameSpace__eC__types__Class * __eCNameSpace__eC__types__eSystem_RegisterClass(int type, const char *  name, const char *  baseName, int size, int sizeClass, unsigned int (*  Constructor)(void * ), void (*  Destructor)(void * ), struct __eCNameSpace__eC__types__Instance * module, int declMode, int inheritanceAccess);

extern struct __eCNameSpace__eC__types__GlobalFunction * __eCNameSpace__eC__types__eSystem_RegisterFunction(const char *  name, const char *  type, void *  func, struct __eCNameSpace__eC__types__Instance * module, int declMode);

extern struct __eCNameSpace__eC__types__DefinedExpression * __eCNameSpace__eC__types__eSystem_RegisterDefine(const char *  name, const char *  value, struct __eCNameSpace__eC__types__Instance * module, int declMode);

void SetPrivateModule(struct __eCNameSpace__eC__types__Instance * module)
{
privateModule = module;
}

struct __eCNameSpace__eC__types__Instance * GetPrivateModule()
{
return privateModule;
}

struct Initializer;

struct Initializer
{
struct Initializer * prev, * next;
struct Location loc;
int type;
union
{
struct Expression * exp;
struct __eCNameSpace__eC__containers__OldList * list;
} eC_gcc_struct __anon1;
unsigned int isConstant;
struct Identifier * id;
} eC_gcc_struct;

struct MemberInit
{
struct MemberInit * prev, * next;
struct Location loc;
struct Location realLoc;
struct __eCNameSpace__eC__containers__OldList * identifiers;
struct Initializer * initializer;
unsigned int used;
unsigned int variable;
unsigned int takeOutExp;
} eC_gcc_struct;

struct Enumerator;

struct Enumerator
{
struct Enumerator * prev, * next;
struct Location loc;
struct Identifier * id;
struct Expression * exp;
struct __eCNameSpace__eC__containers__OldList * attribs;
} eC_gcc_struct;

struct AsmField;

struct AsmField
{
struct AsmField * prev, * next;
struct Location loc;
char * command;
struct Expression * expression;
struct Identifier * symbolic;
} eC_gcc_struct;

struct DBTableEntry;

struct Statement;

struct Statement
{
struct Statement * prev, * next;
struct Location loc;
int type;
union
{
struct __eCNameSpace__eC__containers__OldList * expressions;
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
struct Expression * watcher, * object;
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

struct PropertyWatch
{
struct PropertyWatch * prev, * next;
struct Location loc;
struct Statement * compound;
struct __eCNameSpace__eC__containers__OldList * properties;
unsigned int deleteWatch;
} eC_gcc_struct;

struct TypeName;

struct TypeName
{
struct TypeName * prev, * next;
struct Location loc;
struct __eCNameSpace__eC__containers__OldList * qualifiers;
struct Declarator * declarator;
int classObjectType;
struct Expression * bitCount;
} eC_gcc_struct;

struct DBTableEntry
{
struct DBTableEntry * prev, * next;
int type;
struct Identifier * id;
union
{
struct
{
struct TypeName * dataType;
char * name;
} eC_gcc_struct __anon1;
struct __eCNameSpace__eC__containers__OldList * items;
} eC_gcc_struct __anon1;
} eC_gcc_struct;

struct TemplateArgument;

struct TemplateArgument
{
struct TemplateArgument * prev, * next;
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

struct TemplateParameter
{
struct TemplateParameter * prev, * next;
struct Location loc;
int type;
struct Identifier * identifier;
union
{
struct TemplateDatatype * dataType;
int memberType;
} eC_gcc_struct __anon1;
struct TemplateArgument * defaultArgument;
const char * dataTypeString;
struct Type * baseType;
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

static struct __eCNameSpace__eC__types__Class * __eCClass_TokenType;

static struct __eCNameSpace__eC__types__Class * __eCClass_Order;

static struct __eCNameSpace__eC__types__Class * __eCClass_DBTableDef;

static struct __eCNameSpace__eC__types__Class * __eCClass_DBTableEntryType;

static struct __eCNameSpace__eC__types__Class * __eCClass_DBTableEntry;

static struct __eCNameSpace__eC__types__Class * __eCClass_DBIndexItem;

static struct __eCNameSpace__eC__types__Class * __eCClass_GlobalData;

static struct __eCNameSpace__eC__types__Class * __eCClass_TemplatedType;

static struct __eCNameSpace__eC__types__Class * __eCClass_DataRedefinition;

static struct __eCNameSpace__eC__types__Class * __eCClass_CodePosition;

static struct __eCNameSpace__eC__types__Class * __eCClass_Location;

static struct __eCNameSpace__eC__types__Class * __eCClass_DefinitionType;

static struct __eCNameSpace__eC__types__Class * __eCClass_Definition;

static struct __eCNameSpace__eC__types__Class * __eCClass_ImportedModule;

static struct __eCNameSpace__eC__types__Class * __eCClass_Identifier;

static struct __eCNameSpace__eC__types__Class * __eCClass_ExpressionType;

static struct __eCNameSpace__eC__types__Class * __eCClass_MemberType;

static struct __eCNameSpace__eC__types__Class * __eCClass_ExpUsage;

static struct __eCNameSpace__eC__types__Class * __eCClass_TemplateParameter;

static struct __eCNameSpace__eC__types__Class * __eCClass_TemplateDatatype;

static struct __eCNameSpace__eC__types__Class * __eCClass_TemplateArgument;

static struct __eCNameSpace__eC__types__Class * __eCClass_SpecifierType;

static struct __eCNameSpace__eC__types__Class * __eCClass_Specifier;

static struct __eCNameSpace__eC__types__Class * __eCClass_Attribute;

static struct __eCNameSpace__eC__types__Class * __eCClass_Attrib;

static struct __eCNameSpace__eC__types__Class * __eCClass_ExtDecl;

static struct __eCNameSpace__eC__types__Class * __eCClass_ExtDeclType;

static struct __eCNameSpace__eC__types__Class * __eCClass_Expression;

static struct __eCNameSpace__eC__types__Class * __eCClass_Enumerator;

static struct __eCNameSpace__eC__types__Class * __eCClass_Pointer;

static struct __eCNameSpace__eC__types__Class * __eCClass_DeclaratorType;

static struct __eCNameSpace__eC__types__Class * __eCClass_Declarator;

static struct __eCNameSpace__eC__types__Class * __eCClass_InitializerType;

static struct __eCNameSpace__eC__types__Class * __eCClass_Initializer;

static struct __eCNameSpace__eC__types__Class * __eCClass_InitDeclarator;

static struct __eCNameSpace__eC__types__Class * __eCClass_ClassObjectType;

static struct __eCNameSpace__eC__types__Class * __eCClass_TypeName;

static struct __eCNameSpace__eC__types__Class * __eCClass_AsmField;

static struct __eCNameSpace__eC__types__Class * __eCClass_StmtType;

static struct __eCNameSpace__eC__types__Class * __eCClass_Statement;

static struct __eCNameSpace__eC__types__Class * __eCClass_DeclarationType;

static struct __eCNameSpace__eC__types__Class * __eCClass_Declaration;

static struct __eCNameSpace__eC__types__Class * __eCClass_Instantiation;

static struct __eCNameSpace__eC__types__Class * __eCClass_MembersInitType;

static struct __eCNameSpace__eC__types__Class * __eCClass_FunctionDefinition;

static struct __eCNameSpace__eC__types__Class * __eCClass_ClassFunction;

static struct __eCNameSpace__eC__types__Class * __eCClass_MembersInit;

static struct __eCNameSpace__eC__types__Class * __eCClass_MemberInit;

static struct __eCNameSpace__eC__types__Class * __eCClass_ClassDefinition;

static struct __eCNameSpace__eC__types__Class * __eCClass_PropertyWatch;

static struct __eCNameSpace__eC__types__Class * __eCClass_ClassDefType;

static struct __eCNameSpace__eC__types__Class * __eCClass_PropertyDef;

static struct __eCNameSpace__eC__types__Class * __eCClass_ClassDef;

static struct __eCNameSpace__eC__types__Class * __eCClass_TopoEdge;

static struct __eCNameSpace__eC__types__Class * __eCClass_ExternalType;

static struct __eCNameSpace__eC__types__Class * __eCClass_External;

static struct __eCNameSpace__eC__types__Class * __eCClass_Context;

static struct __eCNameSpace__eC__types__Class * __eCClass_Symbol;

static struct __eCNameSpace__eC__types__Class * __eCClass_ClassImport;

static struct __eCNameSpace__eC__types__Class * __eCClass_FunctionImport;

static struct __eCNameSpace__eC__types__Class * __eCClass_ModuleImport;

static struct __eCNameSpace__eC__types__Class * __eCClass_PropertyImport;

static struct __eCNameSpace__eC__types__Class * __eCClass_MethodImport;

static struct __eCNameSpace__eC__types__Class * __eCClass_TypeKind;

static struct __eCNameSpace__eC__types__Class * __eCClass_Type;

static struct __eCNameSpace__eC__types__Class * __eCClass_Operand;

static struct __eCNameSpace__eC__types__Class * __eCClass_OpTable;

const char * __eCMethod_Type_OnGetString(struct __eCNameSpace__eC__types__Class * class, struct Type * this, char * tempString, void * fieldData, unsigned int * onType)
{
struct Type * type = (struct Type *)this;

tempString[0] = '\0';
if(type)
PrintType(type, tempString, 0, 1);
return tempString;
}

void __eCMethod_Type_OnFree(struct __eCNameSpace__eC__types__Class * class, struct Type * this)
{
}

unsigned int __eCProp_Type_Get_isPointerTypeSize(struct Type * this)
{
unsigned int result = 0;

if(this)
{
switch(this->kind)
{
case 8:
{
struct __eCNameSpace__eC__types__Class * _class = this->__anon1._class ? this->__anon1._class->__anon1.registered : (((void *)0));

if(!_class || (_class->type != 1 && _class->type != 3 && _class->type != 4 && _class->type != 2))
result = 1;
break;
}
case 13:
case 19:
case 21:
case 22:
case 23:
result = 1;
break;
case 20:
{
struct TemplateParameter * param = this->__anon1.templateParameter;
struct Type * baseType = ProcessTemplateParameterType(param);

if(baseType)
result = __eCProp_Type_Get_isPointerTypeSize(baseType);
break;
}
}
}
return result;
}

unsigned int __eCProp_Type_Get_isPointerType(struct Type * this)
{
if(this)
{
if(this->kind == 13 || this->kind == 16 || this->kind == 11 || this->kind == 12 || this->kind == 19)
return 1;
else if(this->kind == 8)
{
if(this->__anon1._class && this->__anon1._class->__anon1.registered)
{
struct __eCNameSpace__eC__types__Class * c = this->__anon1._class->__anon1.registered;

if(c->type == 2 || c->type == 3 || c->type == 4 || c->type == 1000)
return 0;
else if(c->type == 1 && !this->byReference)
return 0;
}
return 1;
}
else if(this->kind == 20)
{
if(this->passAsTemplate)
return 0;
if(this->__anon1.templateParameter)
{
if(this->__anon1.templateParameter->__anon1.dataType)
{
struct Specifier * spec = this->__anon1.templateParameter->__anon1.dataType->specifiers ? (*this->__anon1.templateParameter->__anon1.dataType->specifiers).first : (((void *)0));

if(this->__anon1.templateParameter->__anon1.dataType->decl && this->__anon1.templateParameter->__anon1.dataType->decl->type == 5)
return 1;
if(spec && spec->type == 1 && strcmp(spec->__anon1.__anon1.name, "uint64"))
return 1;
}
if(this->__anon1.templateParameter->dataTypeString)
return 1;
}
}
else
return 0;
}
return 0;
}

extern void __eCNameSpace__eC__types__PrintLn(struct __eCNameSpace__eC__types__Class * class, const void * object, ...);

extern struct __eCNameSpace__eC__types__Class * __eCClass___eCNameSpace__eC__containers__LinkList_TPL_TopoEdge__link__EQU__out_;

extern struct __eCNameSpace__eC__types__Class * __eCClass___eCNameSpace__eC__containers__LinkList_TPL_TopoEdge__link__EQU__in_;

extern struct __eCNameSpace__eC__types__Class * __eCClass___eCNameSpace__eC__containers__LinkList;

extern struct __eCNameSpace__eC__types__Class * __eCClass_char__PTR_;

extern struct __eCNameSpace__eC__types__Class * __eCClass___eCNameSpace__eC__types__Module;

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

void __eCUnregisterModule_ecdefs(struct __eCNameSpace__eC__types__Instance * module)
{

__eCPropM_Type_specConst = (void *)0;
__eCPropM_Type_isPointerTypeSize = (void *)0;
__eCPropM_Type_isPointerType = (void *)0;
}

void Compiler_Error(const char * format, ...)
{
if(inCompiler)
{
   //printf("Coming in here!\n");
if(!parsingType)// || 1)
{
va_list args;
char string[10000];

if(yylloc.start.included)
{
__eCNameSpace__eC__files__GetWorkingDir(string, sizeof (string));
__eCNameSpace__eC__types__PathCat(string, GetIncludeFileFromID(yylloc.start.included));
}
else
{
__eCNameSpace__eC__files__GetWorkingDir(string, sizeof (string));
__eCNameSpace__eC__types__PathCat(string, sourceFile);
}
printf("%s", string);
printf(__eCNameSpace__eC__i18n__GetTranslatedString("ec", ":%d:%d: error: ", (((void *)0))), yylloc.start.line, yylloc.start.charPos);
__builtin_va_start(args, format);
vsnprintf(string, sizeof (string), format, args);
string[sizeof (string) - 1] = 0;
__builtin_va_end(args);
fputs(string, (bsl_stdout()));
fflush((bsl_stdout()));
((struct __eCNameSpace__eC__types__Application *)(((char *)((struct __eCNameSpace__eC__types__Module *)(((char *)__thisModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->application + sizeof(struct __eCNameSpace__eC__types__Module) + sizeof(struct __eCNameSpace__eC__types__Instance))))->exitCode = 1;
}
else
{
parseTypeError = 1;
}
}
}

struct ClassDefinition;

struct ClassDefinition
{
struct ClassDefinition * prev, * next;
struct Location loc;
struct Specifier * _class;
struct __eCNameSpace__eC__containers__OldList * baseSpecs;
struct __eCNameSpace__eC__containers__OldList * definitions;
struct Symbol * symbol;
struct Location blockStart;
struct Location nameLoc;
int declMode;
unsigned int deleteWatchable;
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

unsigned int __eCConstructor_Context(struct Context * this)
{
(this->types.CompareKey = (void *)__eCMethod___eCNameSpace__eC__containers__BinaryTree_CompareString);
(this->classes.CompareKey = (void *)__eCMethod___eCNameSpace__eC__containers__BinaryTree_CompareString);
(this->symbols.CompareKey = (void *)__eCMethod___eCNameSpace__eC__containers__BinaryTree_CompareString);
(this->structSymbols.CompareKey = (void *)__eCMethod___eCNameSpace__eC__containers__BinaryTree_CompareString);
(this->templateTypes.CompareKey = (void *)__eCMethod___eCNameSpace__eC__containers__BinaryTree_CompareString);
return 1;
}

struct Instantiation;

struct Instantiation
{
struct Instantiation * prev, * next;
struct Location loc;
struct Specifier * _class;
struct Expression * exp;
struct __eCNameSpace__eC__containers__OldList * members;
struct Symbol * symbol;
unsigned int fullSet;
unsigned int isConstant;
unsigned char * data;
struct Location nameLoc, insideLoc;
unsigned int built;
} eC_gcc_struct;

struct Declaration
{
struct Declaration * prev, * next;
struct Location loc;
int type;
union
{
struct
{
struct __eCNameSpace__eC__containers__OldList * specifiers;
struct __eCNameSpace__eC__containers__OldList * declarators;
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

struct Expression
{
struct Expression * prev, * next;
struct Location loc;
int type;
union
{
struct
{
char * constant;
struct Identifier * identifier;
} eC_gcc_struct __anon1;
struct Statement * compound;
struct Instantiation * instance;
struct
{
char * string;
unsigned int intlString;
unsigned int wideString;
} eC_gcc_struct __anon2;
struct __eCNameSpace__eC__containers__OldList * list;
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
struct Expression * exp1, * exp2;
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

void __eCMethod_Expression_Clear(struct Expression * this)
{
struct __eCNameSpace__eC__types__DataValue __simpleStruct0 =
{

.__anon1 = {
.c = 0
}
};

this->debugValue = 0;
this->val = __simpleStruct0;
this->address = 0;
this->hasAddress = 0;
this->expType = (((void *)0));
this->destType = (((void *)0));
this->usage = 0;
this->tempCount = 0;
this->byReference = 0;
this->isConstant = 0;
this->addedThis = 0;
this->needCast = 0;
this->thisPtr = 0;
this->opDestType = 0;
this->parentOpDestType = 0;
this->usedInComparison = 0;
this->needTemplateCast = 0;
}

struct ClassFunction;

struct ClassFunction
{
struct ClassFunction * prev, * next;
struct Location loc;
struct __eCNameSpace__eC__containers__OldList * specifiers;
struct Declarator * declarator;
struct __eCNameSpace__eC__containers__OldList * declarations;
struct Statement * body;
struct __eCNameSpace__eC__types__Class * _class;
struct __eCNameSpace__eC__containers__OldList attached;
int declMode;
struct Type * type;
struct Symbol * propSet;
unsigned int isVirtual;
unsigned int isConstructor, isDestructor;
unsigned int dontMangle;
int id, idCode;
} eC_gcc_struct;

struct MembersInit
{
struct MembersInit * prev, * next;
struct Location loc;
int type;
union
{
struct __eCNameSpace__eC__containers__OldList * dataMembers;
struct ClassFunction * function;
} eC_gcc_struct __anon1;
} eC_gcc_struct;

struct InitDeclarator;

struct InitDeclarator
{
struct InitDeclarator * prev, * next;
struct Location loc;
struct Declarator * declarator;
struct Initializer * initializer;
} eC_gcc_struct;

extern struct InitDeclarator * MkInitDeclarator(struct Declarator * declarator, struct Initializer * initializer);

struct FunctionDefinition;

struct FunctionDefinition
{
struct FunctionDefinition * prev, * next;
struct Location loc;
struct __eCNameSpace__eC__containers__OldList * specifiers;
struct Declarator * declarator;
struct __eCNameSpace__eC__containers__OldList * declarations;
struct Statement * body;
struct __eCNameSpace__eC__types__Class * _class;
struct __eCNameSpace__eC__containers__OldList attached;
int declMode;
struct Type * type;
struct Symbol * propSet;
int tempCount;
unsigned int propertyNoThis;
} eC_gcc_struct;

struct External
{
struct External * prev, * next;
struct Location loc;
int type;
struct Symbol * symbol;
union
{
struct FunctionDefinition * function;
struct ClassDefinition * _class;
struct Declaration * declaration;
char * importString;
struct Identifier * id;
struct DBTableDef * table;
char * pragma;
} eC_gcc_struct __anon1;
int importType;
struct External * fwdDecl;
struct __eCNameSpace__eC__types__Instance * outgoing;
struct __eCNameSpace__eC__types__Instance * incoming;
int nonBreakableIncoming;
} eC_gcc_struct;

unsigned int __eCConstructor_External(struct External * this)
{
this->outgoing = __eCNameSpace__eC__types__eInstance_New(__eCClass___eCNameSpace__eC__containers__LinkList_TPL_TopoEdge__link__EQU__out_);
__eCNameSpace__eC__types__eInstance_IncRef(this->outgoing);
this->incoming = __eCNameSpace__eC__types__eInstance_New(__eCClass___eCNameSpace__eC__containers__LinkList_TPL_TopoEdge__link__EQU__in_);
__eCNameSpace__eC__types__eInstance_IncRef(this->incoming);
return 1;
}

void __eCDestructor_External(struct External * this)
{
(__eCNameSpace__eC__types__eInstance_DecRef(this->outgoing), this->outgoing = 0);
(__eCNameSpace__eC__types__eInstance_DecRef(this->incoming), this->incoming = 0);
}

void __eCMethod_External_CreateEdge(struct External * this, struct External * from, unsigned int soft)
{
struct TopoEdge * e = (e = __eCNameSpace__eC__types__eInstance_New(__eCClass_TopoEdge), e->from = from, e->to = this, e->breakable = soft, e);

(__extension__ ({
struct __eCNameSpace__eC__containers__IteratorPointer * (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, uint64 value);

__internal_VirtualMethod = ((struct __eCNameSpace__eC__containers__IteratorPointer * (*)(struct __eCNameSpace__eC__types__Instance *, uint64 value))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = from->outgoing;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__containers__LinkList->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__containers__Container_Add]);
__internal_VirtualMethod ? __internal_VirtualMethod(from->outgoing, (uint64)(uintptr_t)(e)) : (struct __eCNameSpace__eC__containers__IteratorPointer *)1;
}));
(__extension__ ({
struct __eCNameSpace__eC__containers__IteratorPointer * (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, uint64 value);

__internal_VirtualMethod = ((struct __eCNameSpace__eC__containers__IteratorPointer * (*)(struct __eCNameSpace__eC__types__Instance *, uint64 value))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = this->incoming;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__containers__LinkList->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__containers__Container_Add]);
__internal_VirtualMethod ? __internal_VirtualMethod(this->incoming, (uint64)(uintptr_t)(e)) : (struct __eCNameSpace__eC__containers__IteratorPointer *)1;
}));
if(!soft)
this->nonBreakableIncoming++;
}

struct External * __eCMethod_External_ForwardDeclare(struct External * this)
{
struct External * f = (((void *)0));
struct Context * tmpContext = curContext;

switch(this->type)
{
case 1:
{
if(this->__anon1.declaration->type == 1)
{
struct __eCNameSpace__eC__containers__OldList * specs = this->__anon1.declaration->__anon1.__anon1.specifiers;

if(specs)
{
struct Specifier * s;

for(s = (*specs).first; s; s = s->next)
{
if(s->type == 3 || s->type == 4)
break;
}
if(s)
{
curContext = (((void *)0));
f = MkExternalDeclaration(MkDeclaration(MkListOne(MkStructOrUnion(s->type, CopyIdentifier(s->__anon1.__anon2.id), (((void *)0)))), (((void *)0))));
curContext = tmpContext;
}
}
}
break;
}
case 0:
{
curContext = (((void *)0));
f = MkExternalDeclaration(MkDeclaration(CopyList(this->__anon1.function->specifiers, (void *)(CopySpecifier)), MkListOne(MkInitDeclarator(CopyDeclarator(this->__anon1.function->declarator), (((void *)0))))));
curContext = tmpContext;
f->symbol = this->symbol;
DeclareTypeForwardDeclare(f, this->symbol->type, 0, 0);
break;
}
}
this->fwdDecl = f;
if(!f)
__eCNameSpace__eC__types__PrintLn(__eCClass_char__PTR_, "warning: unhandled forward declaration requested", (void *)0);
return f;
}

void __eCMethod_External_CreateUniqueEdge(struct External * this, struct External * from, unsigned int soft)
{
{
struct TopoEdge * i;
struct __eCNameSpace__eC__types__Instance * __internalLinkList = from->outgoing;

for(i = ((struct __eCNameSpace__eC__containers__LinkList *)(((char *)__internalLinkList + 0 + sizeof(struct __eCNameSpace__eC__types__Instance))))->first; i; i = (struct TopoEdge *)(__extension__ ({
struct __eCNameSpace__eC__containers__IteratorPointer * (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, struct __eCNameSpace__eC__containers__IteratorPointer * pointer);

__internal_VirtualMethod = ((struct __eCNameSpace__eC__containers__IteratorPointer * (*)(struct __eCNameSpace__eC__types__Instance *, struct __eCNameSpace__eC__containers__IteratorPointer * pointer))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = __internalLinkList;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__containers__LinkList->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__containers__Container_GetNext]);
__internal_VirtualMethod ? __internal_VirtualMethod(__internalLinkList, (struct __eCNameSpace__eC__containers__IteratorPointer *)i) : (struct __eCNameSpace__eC__containers__IteratorPointer *)1;
})))
if(i->to == this)
{
if(i->breakable && !soft)
{
i->breakable = 0;
this->nonBreakableIncoming++;
}
return ;
}
}
__eCMethod_External_CreateEdge(this, from, soft);
}

struct PropertyDef;

struct PropertyDef
{
struct PropertyDef * prev, * next;
struct Location loc;
struct __eCNameSpace__eC__containers__OldList * specifiers;
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

struct ClassDef;

struct ClassDef
{
struct ClassDef * prev, * next;
struct Location loc;
int type;
union
{
struct Declaration * decl;
struct ClassFunction * function;
struct __eCNameSpace__eC__containers__OldList * defProperties;
struct PropertyDef * propertyDef;
struct PropertyWatch * propertyWatch;
char * designer;
struct Identifier * defaultProperty;
struct
{
struct Identifier * id;
struct Initializer * initializer;
} eC_gcc_struct __anon1;
} eC_gcc_struct __anon1;
int memberAccess;
void * object;
} eC_gcc_struct;

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

void __eCRegisterModule_ecdefs(struct __eCNameSpace__eC__types__Instance * module)
{
struct __eCNameSpace__eC__types__Class __attribute__((unused)) * class;

class = __eCNameSpace__eC__types__eSystem_RegisterClass(4, "TokenType", 0, 0, 0, (void *)0, (void *)0, module, 1, 1);
if(((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application == ((struct __eCNameSpace__eC__types__Module *)(((char *)__thisModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->application && class)
__eCClass_TokenType = class;
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "identifier", 258);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "constant", 259);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "stringLiteral", 260);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "sizeOf", 261);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "ptrOp", 262);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "incOp", 263);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "decOp", 264);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "leftOp", 265);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "rightOp", 266);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "leOp", 267);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "geOp", 268);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "eqOp", 269);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "neOp", 270);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "andOp", 271);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "orOp", 272);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "mulAssign", 273);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "divAssign", 274);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "modAssign", 275);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "addAssign", 276);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "subAssign", 277);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "leftAssign", 278);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "rightAssign", 279);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "andAssign", 280);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "xorAssign", 281);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "orAssign", 282);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "typeName", 283);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "_typedef", 284);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "_extern", 285);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "_static", 286);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "_auto", 287);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "_register", 288);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "_char", 289);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "_short", 290);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "_int", 291);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "_uint", 292);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "_int64", 293);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "_int128", 294);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "_float128", 295);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "_float16", 296);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "_long", 297);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "_signed", 298);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "_unsigned", 299);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "_float", 300);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "_double", 301);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "_const", 302);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "_volatile", 303);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "_void", 304);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "_valist", 305);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "_struct", 306);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "_union", 307);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "_enum", 308);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "ellipsis", 309);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "_case", 310);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "_default", 311);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "_if", 312);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "_switch", 313);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "_while", 314);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "_do", 315);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "_for", 316);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "_goto", 317);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "_continue", 318);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "_break", 319);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "_return", 320);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "ifx", 321);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "_else", 322);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "_class", 323);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "thisClass", 324);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "_property", 325);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "setProp", 326);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "getProp", 327);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "newOp", 328);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "_renew", 329);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "_delete", 330);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "_extDecl", 331);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "_extStorage", 332);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "_import", 333);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "_define", 334);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "_virtual", 335);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "attrib", 336);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "_public", 337);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "_priate", 338);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "typedObject", 339);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "anyObject", 340);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "_incref", 341);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "extension", 342);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "___asm", 343);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "_typeof", 344);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "_watch", 345);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "stopWatching", 346);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "fireWatchers", 347);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "_watchable", 348);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "classDesigner", 349);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "classNoExpansion", 350);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "classFixed", 351);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "isPropSet", 352);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "classDefaultProperty", 353);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "propertyCategory", 354);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "classData", 355);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "classProperty", 356);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "subClass", 357);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "nameSpace", 358);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "new0Op", 359);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "renew0Op", 360);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "vaArg", 361);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "dbTable", 362);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "dbField", 363);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "dbIndex", 364);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "databaseOpen", 365);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "alignOf", 366);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "attribDep", 367);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "_attrib", 368);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "BOOL", 369);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "_BOOL", 370);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "complex", 371);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "imaginary", 372);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "_restrict", 373);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "_thread", 374);
class = __eCNameSpace__eC__types__eSystem_RegisterClass(4, "Order", 0, 0, 0, (void *)0, (void *)0, module, 2, 1);
if(((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application == ((struct __eCNameSpace__eC__types__Module *)(((char *)__thisModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->application && class)
__eCClass_Order = class;
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "ascending", 0);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "descending", 1);
class = __eCNameSpace__eC__types__eSystem_RegisterClass(5, "DBTableDef", 0, sizeof(struct DBTableDef), 0, (void *)0, (void *)0, module, 1, 1);
if(((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application == ((struct __eCNameSpace__eC__types__Module *)(((char *)__thisModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->application && class)
__eCClass_DBTableDef = class;
__eCNameSpace__eC__types__eClass_AddDataMember(class, "name", "char *", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "symbol", "Symbol", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "definitions", "eC::containers::OldList *", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "declMode", "eC::types::AccessMode", 4, 4, 1);
class = __eCNameSpace__eC__types__eSystem_RegisterClass(4, "DBTableEntryType", 0, 0, 0, (void *)0, (void *)0, module, 2, 1);
if(((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application == ((struct __eCNameSpace__eC__types__Module *)(((char *)__thisModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->application && class)
__eCClass_DBTableEntryType = class;
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "fieldEntry", 0);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "indexEntry", 1);
class = __eCNameSpace__eC__types__eSystem_RegisterClass(5, "DBTableEntry", 0, sizeof(struct DBTableEntry), 0, (void *)0, (void *)0, module, 2, 1);
if(((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application == ((struct __eCNameSpace__eC__types__Module *)(((char *)__thisModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->application && class)
__eCClass_DBTableEntry = class;
__eCNameSpace__eC__types__eClass_AddDataMember(class, (((void *)0)), (((void *)0)), 0, sizeof(void *) > 8 ? sizeof(void *) : 8, 2);
class = __eCNameSpace__eC__types__eSystem_RegisterClass(5, "DBIndexItem", 0, sizeof(struct DBIndexItem), 0, (void *)0, (void *)0, module, 2, 1);
if(((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application == ((struct __eCNameSpace__eC__types__Module *)(((char *)__thisModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->application && class)
__eCClass_DBIndexItem = class;
__eCNameSpace__eC__types__eClass_AddDataMember(class, (((void *)0)), (((void *)0)), 0, sizeof(void *) > 4 ? sizeof(void *) : 4, 2);
__eCNameSpace__eC__types__eSystem_RegisterFunction("SetInCompiler", "void SetInCompiler(bool b)", SetInCompiler, module, 1);
__eCNameSpace__eC__types__eSystem_RegisterFunction("SetInDebugger", "void SetInDebugger(bool b)", SetInDebugger, module, 1);
__eCNameSpace__eC__types__eSystem_RegisterFunction("SetInBGen", "void SetInBGen(bool b)", SetInBGen, module, 1);
__eCNameSpace__eC__types__eSystem_RegisterFunction("SetBGenSymbolSwapCallback", "void SetBGenSymbolSwapCallback(const char * (* cb)(const char * spec, bool reduce, bool macro))", SetBGenSymbolSwapCallback, module, 1);
__eCNameSpace__eC__types__eSystem_RegisterFunction("SetPrivateModule", "void SetPrivateModule(eC::types::Module module)", SetPrivateModule, module, 1);
__eCNameSpace__eC__types__eSystem_RegisterFunction("GetPrivateModule", "eC::types::Module GetPrivateModule(void)", GetPrivateModule, module, 1);
__eCNameSpace__eC__types__eSystem_RegisterFunction("SetMainModule", "void SetMainModule(ModuleImport moduleImport)", SetMainModule, module, 1);
__eCNameSpace__eC__types__eSystem_RegisterFunction("GetMainModule", "ModuleImport GetMainModule(void)", GetMainModule, module, 1);
__eCNameSpace__eC__types__eSystem_RegisterFunction("SetFileInput", "void SetFileInput(eC::files::File file)", SetFileInput, module, 1);
__eCNameSpace__eC__types__eSystem_RegisterFunction("SetSymbolsDir", "void SetSymbolsDir(const char * s)", SetSymbolsDir, module, 1);
__eCNameSpace__eC__types__eSystem_RegisterFunction("GetSymbolsDir", "const char * GetSymbolsDir(void)", GetSymbolsDir, module, 1);
__eCNameSpace__eC__types__eSystem_RegisterFunction("SetOutputFile", "void SetOutputFile(const char * s)", SetOutputFile, module, 1);
__eCNameSpace__eC__types__eSystem_RegisterFunction("GetOutputFile", "const char * GetOutputFile(void)", GetOutputFile, module, 1);
__eCNameSpace__eC__types__eSystem_RegisterFunction("SetSourceFile", "void SetSourceFile(const char * s)", SetSourceFile, module, 1);
__eCNameSpace__eC__types__eSystem_RegisterFunction("GetSourceFile", "const char * GetSourceFile(void)", GetSourceFile, module, 1);
__eCNameSpace__eC__types__eSystem_RegisterFunction("SetI18nModuleName", "void SetI18nModuleName(const char * s)", SetI18nModuleName, module, 1);
__eCNameSpace__eC__types__eSystem_RegisterFunction("GetI18nModuleName", "const char * GetI18nModuleName(void)", GetI18nModuleName, module, 1);
__eCNameSpace__eC__types__eSystem_RegisterFunction("SetGlobalContext", "void SetGlobalContext(Context context)", SetGlobalContext, module, 1);
__eCNameSpace__eC__types__eSystem_RegisterFunction("GetGlobalContext", "Context GetGlobalContext(void)", GetGlobalContext, module, 1);
__eCNameSpace__eC__types__eSystem_RegisterFunction("SetTopContext", "void SetTopContext(Context context)", SetTopContext, module, 1);
__eCNameSpace__eC__types__eSystem_RegisterFunction("GetTopContext", "Context GetTopContext(void)", GetTopContext, module, 1);
__eCNameSpace__eC__types__eSystem_RegisterFunction("SetCurrentContext", "void SetCurrentContext(Context context)", SetCurrentContext, module, 1);
__eCNameSpace__eC__types__eSystem_RegisterFunction("GetCurrentContext", "Context GetCurrentContext(void)", GetCurrentContext, module, 1);
__eCNameSpace__eC__types__eSystem_RegisterFunction("SetExcludedSymbols", "void SetExcludedSymbols(eC::containers::OldList * list)", SetExcludedSymbols, module, 1);
__eCNameSpace__eC__types__eSystem_RegisterFunction("SetImports", "void SetImports(eC::containers::OldList * list)", SetImports, module, 1);
__eCNameSpace__eC__types__eSystem_RegisterFunction("SetDefines", "void SetDefines(eC::containers::OldList * list)", SetDefines, module, 1);
__eCNameSpace__eC__types__eSystem_RegisterFunction("SetOutputLineNumbers", "void SetOutputLineNumbers(bool value)", SetOutputLineNumbers, module, 1);
__eCNameSpace__eC__types__eSystem_RegisterFunction("FixModuleName", "void FixModuleName(char * moduleName)", FixModuleName, module, 1);
__eCNameSpace__eC__types__eSystem_RegisterFunction("PassArg", "char * PassArg(char * output, const char * input)", PassArg, module, 1);
class = __eCNameSpace__eC__types__eSystem_RegisterClass(5, "GlobalData", "eC::containers::BTNode", sizeof(struct GlobalData), 0, (void *)0, (void *)0, module, 1, 1);
if(((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application == ((struct __eCNameSpace__eC__types__Module *)(((char *)__thisModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->application && class)
__eCClass_GlobalData = class;
__eCNameSpace__eC__types__eClass_AddDataMember(class, "module", "eC::types::Module", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "dataTypeString", "char *", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "dataType", "Type", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "symbol", "void *", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "fullName", "char *", sizeof(void *), 0xF000F000, 1);
class = __eCNameSpace__eC__types__eSystem_RegisterClass(5, "TemplatedType", "eC::containers::BTNode", sizeof(struct TemplatedType), 0, (void *)0, (void *)0, module, 1, 1);
if(((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application == ((struct __eCNameSpace__eC__types__Module *)(((char *)__thisModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->application && class)
__eCClass_TemplatedType = class;
__eCNameSpace__eC__types__eClass_AddDataMember(class, "param", "TemplateParameter", sizeof(void *), 0xF000F000, 1);
class = __eCNameSpace__eC__types__eSystem_RegisterClass(5, "DataRedefinition", 0, sizeof(struct DataRedefinition), 0, (void *)0, (void *)0, module, 2, 1);
if(((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application == ((struct __eCNameSpace__eC__types__Module *)(((char *)__thisModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->application && class)
__eCClass_DataRedefinition = class;
__eCNameSpace__eC__types__eClass_AddDataMember(class, (((void *)0)), (((void *)0)), 0, sizeof(void *) > 1 ? sizeof(void *) : 1, 2);
class = __eCNameSpace__eC__types__eSystem_RegisterClass(1, "CodePosition", 0, sizeof(struct CodePosition), 0, (void *)0, (void *)0, module, 1, 1);
if(((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application == ((struct __eCNameSpace__eC__types__Module *)(((char *)__thisModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->application && class)
__eCClass_CodePosition = class;
__eCNameSpace__eC__types__eClass_AddMethod(class, "AdjustAdd", "void AdjustAdd(ecereGUI::controls::BufferLocation start, ecereGUI::controls::BufferLocation end)", __eCMethod_CodePosition_AdjustAdd, 1);
__eCNameSpace__eC__types__eClass_AddMethod(class, "AdjustDelete", "void AdjustDelete(ecereGUI::controls::BufferLocation start, ecereGUI::controls::BufferLocation end)", __eCMethod_CodePosition_AdjustDelete, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "line", "int", 4, 4, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "charPos", "int", 4, 4, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "pos", "int", 4, 4, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "included", "int", 4, 4, 1);
class = __eCNameSpace__eC__types__eSystem_RegisterClass(1, "Location", 0, sizeof(struct Location), 0, (void *)0, (void *)0, module, 1, 1);
if(((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application == ((struct __eCNameSpace__eC__types__Module *)(((char *)__thisModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->application && class)
__eCClass_Location = class;
__eCNameSpace__eC__types__eClass_AddMethod(class, "Inside", "bool Inside(int line, int charPos)", __eCMethod_Location_Inside, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "start", "CodePosition", sizeof(struct CodePosition), 4, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "end", "CodePosition", sizeof(struct CodePosition), 4, 1);
class = __eCNameSpace__eC__types__eSystem_RegisterClass(4, "DefinitionType", 0, 0, 0, (void *)0, (void *)0, module, 1, 1);
if(((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application == ((struct __eCNameSpace__eC__types__Module *)(((char *)__thisModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->application && class)
__eCClass_DefinitionType = class;
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "moduleDefinition", 0);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "classDefinition", 1);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "defineDefinition", 2);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "functionDefinition", 3);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "dataDefinition", 4);
class = __eCNameSpace__eC__types__eSystem_RegisterClass(5, "Definition", 0, sizeof(struct Definition), 0, (void *)0, (void *)0, module, 1, 1);
if(((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application == ((struct __eCNameSpace__eC__types__Module *)(((char *)__thisModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->application && class)
__eCClass_Definition = class;
__eCNameSpace__eC__types__eClass_AddDataMember(class, "prev", "Definition", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "next", "Definition", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "name", "char *", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "type", "DefinitionType", 4, 4, 1);
class = __eCNameSpace__eC__types__eSystem_RegisterClass(5, "ImportedModule", 0, sizeof(struct ImportedModule), 0, (void *)0, (void *)0, module, 1, 1);
if(((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application == ((struct __eCNameSpace__eC__types__Module *)(((char *)__thisModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->application && class)
__eCClass_ImportedModule = class;
__eCNameSpace__eC__types__eClass_AddDataMember(class, "prev", "ImportedModule", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "next", "ImportedModule", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "name", "char *", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "type", "DefinitionType", 4, 4, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "importType", "eC::types::ImportType", 4, 4, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "globalInstance", "bool", 4, 4, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "dllOnly", "bool", 4, 4, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "importAccess", "eC::types::AccessMode", 4, 4, 1);
class = __eCNameSpace__eC__types__eSystem_RegisterClass(5, "Identifier", 0, sizeof(struct Identifier), 0, (void *)0, (void *)0, module, 1, 1);
if(((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application == ((struct __eCNameSpace__eC__types__Module *)(((char *)__thisModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->application && class)
__eCClass_Identifier = class;
__eCNameSpace__eC__types__eClass_AddDataMember(class, "prev", "Identifier", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "next", "Identifier", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "loc", "Location", sizeof(struct Location), 4, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "classSym", "Symbol", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "_class", "Specifier", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "string", "char *", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "badID", "Identifier", sizeof(void *), 0xF000F000, 1);
class = __eCNameSpace__eC__types__eSystem_RegisterClass(4, "ExpressionType", 0, 0, 0, (void *)0, (void *)0, module, 1, 1);
if(((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application == ((struct __eCNameSpace__eC__types__Module *)(((char *)__thisModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->application && class)
__eCClass_ExpressionType = class;
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "identifierExp", 0);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "instanceExp", 1);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "constantExp", 2);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "stringExp", 3);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "opExp", 4);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "bracketsExp", 5);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "indexExp", 6);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "callExp", 7);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "memberExp", 8);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "pointerExp", 9);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "typeSizeExp", 10);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "castExp", 11);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "conditionExp", 12);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "newExp", 13);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "renewExp", 14);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "classSizeExp", 15);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "dummyExp", 16);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "dereferenceErrorExp", 17);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "symbolErrorExp", 18);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "memberSymbolErrorExp", 19);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "memoryErrorExp", 20);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "unknownErrorExp", 21);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "noDebuggerErrorExp", 22);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "extensionCompoundExp", 23);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "classExp", 24);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "classDataExp", 25);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "new0Exp", 26);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "renew0Exp", 27);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "dbopenExp", 28);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "dbfieldExp", 29);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "dbtableExp", 30);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "dbindexExp", 31);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "extensionExpressionExp", 32);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "extensionInitializerExp", 33);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "vaArgExp", 34);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "arrayExp", 35);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "typeAlignExp", 36);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "memberPropertyErrorExp", 37);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "functionCallErrorExp", 38);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "divideBy0ErrorExp", 39);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "offsetOfExp", 40);
class = __eCNameSpace__eC__types__eSystem_RegisterClass(4, "MemberType", 0, 0, 0, (void *)0, (void *)0, module, 1, 1);
if(((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application == ((struct __eCNameSpace__eC__types__Module *)(((char *)__thisModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->application && class)
__eCClass_MemberType = class;
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "unresolvedMember", 0);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "propertyMember", 1);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "methodMember", 2);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "dataMember", 3);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "reverseConversionMember", 4);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "classPropertyMember", 5);
class = __eCNameSpace__eC__types__eSystem_RegisterClass(2, "ExpUsage", 0, 0, 0, (void *)0, (void *)0, module, 1, 1);
if(((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application == ((struct __eCNameSpace__eC__types__Module *)(((char *)__thisModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->application && class)
__eCClass_ExpUsage = class;
__eCNameSpace__eC__types__eClass_AddBitMember(class, "usageGet", "bool", 1, 0, 1);
__eCNameSpace__eC__types__eClass_AddBitMember(class, "usageSet", "bool", 1, 1, 1);
__eCNameSpace__eC__types__eClass_AddBitMember(class, "usageArg", "bool", 1, 2, 1);
__eCNameSpace__eC__types__eClass_AddBitMember(class, "usageCall", "bool", 1, 3, 1);
__eCNameSpace__eC__types__eClass_AddBitMember(class, "usageMember", "bool", 1, 4, 1);
__eCNameSpace__eC__types__eClass_AddBitMember(class, "usageDeepGet", "bool", 1, 5, 1);
__eCNameSpace__eC__types__eClass_AddBitMember(class, "usageRef", "bool", 1, 6, 1);
__eCNameSpace__eC__types__eClass_AddBitMember(class, "usageDelete", "bool", 1, 7, 1);
class = __eCNameSpace__eC__types__eSystem_RegisterClass(5, "TemplateParameter", 0, sizeof(struct TemplateParameter), 0, (void *)0, (void *)0, module, 1, 1);
if(((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application == ((struct __eCNameSpace__eC__types__Module *)(((char *)__thisModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->application && class)
__eCClass_TemplateParameter = class;
__eCNameSpace__eC__types__eClass_AddDataMember(class, "prev", "TemplateParameter", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "next", "TemplateParameter", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "loc", "Location", sizeof(struct Location), 4, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "type", "eC::types::TemplateParameterType", 4, 4, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "identifier", "Identifier", sizeof(void *), 0xF000F000, 1);
{
struct __eCNameSpace__eC__types__DataMember * dataMember0 = __eCNameSpace__eC__types__eMember_New(1, 1);

__eCNameSpace__eC__types__eMember_AddDataMember(dataMember0, "dataType", "TemplateDatatype", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eMember_AddDataMember(dataMember0, "memberType", "eC::types::TemplateMemberType", 4, 4, 1);
__eCNameSpace__eC__types__eClass_AddMember(class, dataMember0);
}
__eCNameSpace__eC__types__eClass_AddDataMember(class, "defaultArgument", "TemplateArgument", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "dataTypeString", "const char *", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "baseType", "Type", sizeof(void *), 0xF000F000, 1);
class = __eCNameSpace__eC__types__eSystem_RegisterClass(5, "TemplateDatatype", 0, sizeof(struct TemplateDatatype), 0, (void *)0, (void *)0, module, 1, 1);
if(((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application == ((struct __eCNameSpace__eC__types__Module *)(((char *)__thisModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->application && class)
__eCClass_TemplateDatatype = class;
__eCNameSpace__eC__types__eClass_AddDataMember(class, "specifiers", "eC::containers::OldList *", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "decl", "Declarator", sizeof(void *), 0xF000F000, 1);
class = __eCNameSpace__eC__types__eSystem_RegisterClass(5, "TemplateArgument", 0, sizeof(struct TemplateArgument), 0, (void *)0, (void *)0, module, 1, 1);
if(((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application == ((struct __eCNameSpace__eC__types__Module *)(((char *)__thisModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->application && class)
__eCClass_TemplateArgument = class;
__eCNameSpace__eC__types__eClass_AddDataMember(class, "prev", "TemplateArgument", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "next", "TemplateArgument", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "loc", "Location", sizeof(struct Location), 4, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "name", "Identifier", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "type", "eC::types::TemplateParameterType", 4, 4, 1);
{
struct __eCNameSpace__eC__types__DataMember * dataMember0 = __eCNameSpace__eC__types__eMember_New(1, 1);

__eCNameSpace__eC__types__eMember_AddDataMember(dataMember0, "expression", "Expression", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eMember_AddDataMember(dataMember0, "identifier", "Identifier", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eMember_AddDataMember(dataMember0, "templateDatatype", "TemplateDatatype", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddMember(class, dataMember0);
}
class = __eCNameSpace__eC__types__eSystem_RegisterClass(4, "SpecifierType", 0, 0, 0, (void *)0, (void *)0, module, 1, 1);
if(((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application == ((struct __eCNameSpace__eC__types__Module *)(((char *)__thisModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->application && class)
__eCClass_SpecifierType = class;
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "baseSpecifier", 0);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "nameSpecifier", 1);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "enumSpecifier", 2);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "structSpecifier", 3);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "unionSpecifier", 4);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "extendedSpecifier", 5);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "typeOfSpecifier", 6);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "subClassSpecifier", 7);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "templateTypeSpecifier", 8);
class = __eCNameSpace__eC__types__eSystem_RegisterClass(5, "Specifier", 0, sizeof(struct Specifier), 0, (void *)0, (void *)0, module, 1, 1);
if(((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application == ((struct __eCNameSpace__eC__types__Module *)(((char *)__thisModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->application && class)
__eCClass_Specifier = class;
__eCNameSpace__eC__types__eClass_AddDataMember(class, "prev", "Specifier", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "next", "Specifier", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "loc", "Location", sizeof(struct Location), 4, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "type", "SpecifierType", 4, 4, 1);
{
struct __eCNameSpace__eC__types__DataMember * dataMember0 = __eCNameSpace__eC__types__eMember_New(1, 1);

__eCNameSpace__eC__types__eMember_AddDataMember(dataMember0, "specifier", "int", 4, 4, 1);
{
struct __eCNameSpace__eC__types__DataMember * dataMember1 = __eCNameSpace__eC__types__eMember_New(2, 1);

__eCNameSpace__eC__types__eMember_AddDataMember(dataMember1, "extDecl", "ExtDecl", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eMember_AddDataMember(dataMember1, "name", "char *", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eMember_AddDataMember(dataMember1, "symbol", "Symbol", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eMember_AddDataMember(dataMember1, "templateArgs", "eC::containers::OldList *", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eMember_AddDataMember(dataMember1, "nsSpec", "Specifier", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eMember_AddMember(dataMember0, dataMember1);
}
{
struct __eCNameSpace__eC__types__DataMember * dataMember1 = __eCNameSpace__eC__types__eMember_New(2, 1);

__eCNameSpace__eC__types__eMember_AddDataMember(dataMember1, "id", "Identifier", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eMember_AddDataMember(dataMember1, "list", "eC::containers::OldList *", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eMember_AddDataMember(dataMember1, "baseSpecs", "eC::containers::OldList *", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eMember_AddDataMember(dataMember1, "definitions", "eC::containers::OldList *", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eMember_AddDataMember(dataMember1, "addNameSpace", "bool", 4, 4, 1);
__eCNameSpace__eC__types__eMember_AddDataMember(dataMember1, "ctx", "Context", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eMember_AddDataMember(dataMember1, "extDeclStruct", "ExtDecl", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eMember_AddMember(dataMember0, dataMember1);
}
__eCNameSpace__eC__types__eMember_AddDataMember(dataMember0, "expression", "Expression", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eMember_AddDataMember(dataMember0, "_class", "Specifier", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eMember_AddDataMember(dataMember0, "templateParameter", "TemplateParameter", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddMember(class, dataMember0);
}
class = __eCNameSpace__eC__types__eSystem_RegisterClass(5, "Attribute", 0, sizeof(struct Attribute), 0, (void *)0, (void *)0, module, 1, 1);
if(((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application == ((struct __eCNameSpace__eC__types__Module *)(((char *)__thisModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->application && class)
__eCClass_Attribute = class;
__eCNameSpace__eC__types__eClass_AddDataMember(class, "prev", "Attribute", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "next", "Attribute", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "loc", "Location", sizeof(struct Location), 4, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "attr", "String", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "exp", "Expression", sizeof(void *), 0xF000F000, 1);
class = __eCNameSpace__eC__types__eSystem_RegisterClass(5, "Attrib", 0, sizeof(struct Attrib), 0, (void *)0, (void *)0, module, 1, 1);
if(((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application == ((struct __eCNameSpace__eC__types__Module *)(((char *)__thisModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->application && class)
__eCClass_Attrib = class;
__eCNameSpace__eC__types__eClass_AddDataMember(class, "prev", "Attrib", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "next", "Attrib", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "loc", "Location", sizeof(struct Location), 4, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "type", "int", 4, 4, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "attribs", "eC::containers::OldList *", sizeof(void *), 0xF000F000, 1);
class = __eCNameSpace__eC__types__eSystem_RegisterClass(5, "ExtDecl", 0, sizeof(struct ExtDecl), 0, (void *)0, (void *)0, module, 1, 1);
if(((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application == ((struct __eCNameSpace__eC__types__Module *)(((char *)__thisModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->application && class)
__eCClass_ExtDecl = class;
__eCNameSpace__eC__types__eClass_AddDataMember(class, "loc", "Location", sizeof(struct Location), 4, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "type", "ExtDeclType", 4, 4, 1);
{
struct __eCNameSpace__eC__types__DataMember * dataMember0 = __eCNameSpace__eC__types__eMember_New(1, 1);

__eCNameSpace__eC__types__eMember_AddDataMember(dataMember0, "s", "String", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eMember_AddDataMember(dataMember0, "attr", "Attrib", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eMember_AddDataMember(dataMember0, "multiAttr", "eC::containers::OldList *", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddMember(class, dataMember0);
}
class = __eCNameSpace__eC__types__eSystem_RegisterClass(4, "ExtDeclType", 0, 0, 0, (void *)0, (void *)0, module, 1, 1);
if(((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application == ((struct __eCNameSpace__eC__types__Module *)(((char *)__thisModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->application && class)
__eCClass_ExtDeclType = class;
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "extDeclString", 0);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "extDeclAttrib", 1);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "extDeclMultiAttrib", 2);
class = __eCNameSpace__eC__types__eSystem_RegisterClass(5, "Expression", 0, sizeof(struct Expression), 0, (void *)0, (void *)0, module, 1, 1);
if(((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application == ((struct __eCNameSpace__eC__types__Module *)(((char *)__thisModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->application && class)
__eCClass_Expression = class;
__eCNameSpace__eC__types__eClass_AddMethod(class, "Clear", "void Clear()", __eCMethod_Expression_Clear, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "prev", "Expression", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "next", "Expression", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "loc", "Location", sizeof(struct Location), 4, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "type", "ExpressionType", 4, 4, 1);
{
struct __eCNameSpace__eC__types__DataMember * dataMember0 = __eCNameSpace__eC__types__eMember_New(1, 1);

{
struct __eCNameSpace__eC__types__DataMember * dataMember1 = __eCNameSpace__eC__types__eMember_New(2, 1);

__eCNameSpace__eC__types__eMember_AddDataMember(dataMember1, "constant", "char *", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eMember_AddDataMember(dataMember1, "identifier", "Identifier", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eMember_AddMember(dataMember0, dataMember1);
}
__eCNameSpace__eC__types__eMember_AddDataMember(dataMember0, "compound", "Statement", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eMember_AddDataMember(dataMember0, "instance", "Instantiation", sizeof(void *), 0xF000F000, 1);
{
struct __eCNameSpace__eC__types__DataMember * dataMember1 = __eCNameSpace__eC__types__eMember_New(2, 1);

__eCNameSpace__eC__types__eMember_AddDataMember(dataMember1, "string", "char *", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eMember_AddDataMember(dataMember1, "intlString", "bool", 4, 4, 1);
__eCNameSpace__eC__types__eMember_AddDataMember(dataMember1, "wideString", "bool", 4, 4, 1);
__eCNameSpace__eC__types__eMember_AddMember(dataMember0, dataMember1);
}
__eCNameSpace__eC__types__eMember_AddDataMember(dataMember0, "list", "eC::containers::OldList *", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eMember_AddDataMember(dataMember0, "_classExp", "struct { eC::containers::OldList * specifiers; Declarator decl; }", 16, 0xF000F000, 1);
__eCNameSpace__eC__types__eMember_AddDataMember(dataMember0, "classData", "struct { Identifier id; }", 8, 0xF000F000, 1);
__eCNameSpace__eC__types__eMember_AddDataMember(dataMember0, "call", "struct { Expression exp; eC::containers::OldList * arguments; Location argLoc; }", 48, 0xF000F000, 1);
__eCNameSpace__eC__types__eMember_AddDataMember(dataMember0, "index", "struct { Expression exp; eC::containers::OldList * index; }", 16, 0xF000F000, 1);
__eCNameSpace__eC__types__eMember_AddDataMember(dataMember0, "member", "struct { Expression exp; Identifier member; MemberType memberType; bool thisPtr; }", 24, 0xF000F000, 1);
__eCNameSpace__eC__types__eMember_AddDataMember(dataMember0, "op", "struct { int op; Expression exp1; Expression exp2; }", 24, 0xF000F000, 1);
__eCNameSpace__eC__types__eMember_AddDataMember(dataMember0, "typeName", "TypeName", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eMember_AddDataMember(dataMember0, "_class", "Specifier", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eMember_AddDataMember(dataMember0, "cast", "struct { TypeName typeName; Expression exp; }", 16, 0xF000F000, 1);
__eCNameSpace__eC__types__eMember_AddDataMember(dataMember0, "cond", "struct { Expression cond; eC::containers::OldList * exp; Expression elseExp; }", 24, 0xF000F000, 1);
__eCNameSpace__eC__types__eMember_AddDataMember(dataMember0, "_new", "struct { TypeName typeName; Expression size; }", 16, 0xF000F000, 1);
__eCNameSpace__eC__types__eMember_AddDataMember(dataMember0, "_renew", "struct { TypeName typeName; Expression size; Expression exp; }", 24, 0xF000F000, 1);
__eCNameSpace__eC__types__eMember_AddDataMember(dataMember0, "db", "struct { char * table; Identifier id; }", 16, 0xF000F000, 1);
__eCNameSpace__eC__types__eMember_AddDataMember(dataMember0, "dbopen", "struct { Expression ds; Expression name; }", 16, 0xF000F000, 1);
__eCNameSpace__eC__types__eMember_AddDataMember(dataMember0, "initializer", "struct { TypeName typeName; Initializer initializer; }", 16, 0xF000F000, 1);
__eCNameSpace__eC__types__eMember_AddDataMember(dataMember0, "vaArg", "struct { Expression exp; TypeName typeName; }", 16, 0xF000F000, 1);
__eCNameSpace__eC__types__eMember_AddDataMember(dataMember0, "offset", "struct { TypeName typeName; Identifier id; }", 16, 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddMember(class, dataMember0);
}
__eCNameSpace__eC__types__eClass_AddDataMember(class, "debugValue", "bool", 4, 4, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "val", "eC::types::DataValue", sizeof(struct __eCNameSpace__eC__types__DataValue), 8, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "address", "uint64", 8, 8, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "hasAddress", "bool", 4, 4, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "expType", "Type", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "destType", "Type", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "usage", "ExpUsage", 4, 4, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "tempCount", "int", 4, 4, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "byReference", "bool", 4, 4, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "isConstant", "bool", 4, 4, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "addedThis", "bool", 4, 4, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "needCast", "bool", 4, 4, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "thisPtr", "bool", 4, 4, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "opDestType", "bool", 4, 4, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "usedInComparison", "bool", 4, 4, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "ambiguousUnits", "bool", 4, 4, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "parentOpDestType", "bool", 4, 4, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "needTemplateCast", "uint", 4, 4, 1);
class = __eCNameSpace__eC__types__eSystem_RegisterClass(5, "Enumerator", 0, sizeof(struct Enumerator), 0, (void *)0, (void *)0, module, 1, 1);
if(((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application == ((struct __eCNameSpace__eC__types__Module *)(((char *)__thisModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->application && class)
__eCClass_Enumerator = class;
__eCNameSpace__eC__types__eClass_AddDataMember(class, "prev", "Enumerator", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "next", "Enumerator", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "loc", "Location", sizeof(struct Location), 4, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "id", "Identifier", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "exp", "Expression", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "attribs", "eC::containers::OldList *", sizeof(void *), 0xF000F000, 1);
class = __eCNameSpace__eC__types__eSystem_RegisterClass(5, "Pointer", 0, sizeof(struct Pointer), 0, (void *)0, (void *)0, module, 2, 1);
if(((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application == ((struct __eCNameSpace__eC__types__Module *)(((char *)__thisModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->application && class)
__eCClass_Pointer = class;
__eCNameSpace__eC__types__eClass_AddDataMember(class, (((void *)0)), (((void *)0)), 0, sizeof(void *) > 4 ? sizeof(void *) : 4, 2);
class = __eCNameSpace__eC__types__eSystem_RegisterClass(4, "DeclaratorType", 0, 0, 0, (void *)0, (void *)0, module, 1, 1);
if(((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application == ((struct __eCNameSpace__eC__types__Module *)(((char *)__thisModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->application && class)
__eCClass_DeclaratorType = class;
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "structDeclarator", 0);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "identifierDeclarator", 1);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "bracketsDeclarator", 2);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "arrayDeclarator", 3);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "functionDeclarator", 4);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "pointerDeclarator", 5);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "extendedDeclarator", 6);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "extendedDeclaratorEnd", 7);
class = __eCNameSpace__eC__types__eSystem_RegisterClass(5, "Declarator", 0, sizeof(struct Declarator), 0, (void *)0, (void *)0, module, 1, 1);
if(((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application == ((struct __eCNameSpace__eC__types__Module *)(((char *)__thisModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->application && class)
__eCClass_Declarator = class;
__eCNameSpace__eC__types__eClass_AddDataMember(class, "prev", "Declarator", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "next", "Declarator", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "loc", "Location", sizeof(struct Location), 4, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "type", "DeclaratorType", 4, 4, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "symbol", "Symbol", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "declarator", "Declarator", sizeof(void *), 0xF000F000, 1);
{
struct __eCNameSpace__eC__types__DataMember * dataMember0 = __eCNameSpace__eC__types__eMember_New(1, 1);

__eCNameSpace__eC__types__eMember_AddDataMember(dataMember0, "identifier", "Identifier", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eMember_AddDataMember(dataMember0, "structDecl", "struct { Expression exp; Expression posExp; Attrib attrib; }", 24, 0xF000F000, 1);
__eCNameSpace__eC__types__eMember_AddDataMember(dataMember0, "array", "struct { Expression exp; Specifier enumClass; }", 16, 0xF000F000, 1);
__eCNameSpace__eC__types__eMember_AddDataMember(dataMember0, "function", "struct { eC::containers::OldList * parameters; }", 8, 0xF000F000, 1);
__eCNameSpace__eC__types__eMember_AddDataMember(dataMember0, "pointer", "struct { Pointer pointer; }", 8, 0xF000F000, 1);
__eCNameSpace__eC__types__eMember_AddDataMember(dataMember0, "extended", "struct { ExtDecl extended; }", 8, 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddMember(class, dataMember0);
}
class = __eCNameSpace__eC__types__eSystem_RegisterClass(4, "InitializerType", 0, 0, 0, (void *)0, (void *)0, module, 1, 1);
if(((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application == ((struct __eCNameSpace__eC__types__Module *)(((char *)__thisModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->application && class)
__eCClass_InitializerType = class;
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "expInitializer", 0);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "listInitializer", 1);
class = __eCNameSpace__eC__types__eSystem_RegisterClass(5, "Initializer", 0, sizeof(struct Initializer), 0, (void *)0, (void *)0, module, 1, 1);
if(((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application == ((struct __eCNameSpace__eC__types__Module *)(((char *)__thisModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->application && class)
__eCClass_Initializer = class;
__eCNameSpace__eC__types__eClass_AddDataMember(class, "prev", "Initializer", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "next", "Initializer", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "loc", "Location", sizeof(struct Location), 4, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "type", "InitializerType", 4, 4, 1);
{
struct __eCNameSpace__eC__types__DataMember * dataMember0 = __eCNameSpace__eC__types__eMember_New(1, 1);

__eCNameSpace__eC__types__eMember_AddDataMember(dataMember0, "exp", "Expression", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eMember_AddDataMember(dataMember0, "list", "eC::containers::OldList *", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddMember(class, dataMember0);
}
__eCNameSpace__eC__types__eClass_AddDataMember(class, "isConstant", "bool", 4, 4, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "id", "Identifier", sizeof(void *), 0xF000F000, 1);
class = __eCNameSpace__eC__types__eSystem_RegisterClass(5, "InitDeclarator", 0, sizeof(struct InitDeclarator), 0, (void *)0, (void *)0, module, 1, 1);
if(((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application == ((struct __eCNameSpace__eC__types__Module *)(((char *)__thisModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->application && class)
__eCClass_InitDeclarator = class;
__eCNameSpace__eC__types__eClass_AddDataMember(class, "prev", "InitDeclarator", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "next", "InitDeclarator", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "loc", "Location", sizeof(struct Location), 4, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "declarator", "Declarator", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "initializer", "Initializer", sizeof(void *), 0xF000F000, 1);
class = __eCNameSpace__eC__types__eSystem_RegisterClass(4, "ClassObjectType", 0, 0, 0, (void *)0, (void *)0, module, 1, 1);
if(((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application == ((struct __eCNameSpace__eC__types__Module *)(((char *)__thisModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->application && class)
__eCClass_ClassObjectType = class;
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "none", 0);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "classPointer", 1);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "typedObject", 2);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "anyObject", 3);
class = __eCNameSpace__eC__types__eSystem_RegisterClass(5, "TypeName", 0, sizeof(struct TypeName), 0, (void *)0, (void *)0, module, 1, 1);
if(((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application == ((struct __eCNameSpace__eC__types__Module *)(((char *)__thisModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->application && class)
__eCClass_TypeName = class;
__eCNameSpace__eC__types__eClass_AddDataMember(class, "prev", "TypeName", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "next", "TypeName", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "loc", "Location", sizeof(struct Location), 4, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "qualifiers", "eC::containers::OldList *", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "declarator", "Declarator", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "classObjectType", "ClassObjectType", 4, 4, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "bitCount", "Expression", sizeof(void *), 0xF000F000, 1);
class = __eCNameSpace__eC__types__eSystem_RegisterClass(5, "AsmField", 0, sizeof(struct AsmField), 0, (void *)0, (void *)0, module, 2, 1);
if(((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application == ((struct __eCNameSpace__eC__types__Module *)(((char *)__thisModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->application && class)
__eCClass_AsmField = class;
__eCNameSpace__eC__types__eClass_AddDataMember(class, (((void *)0)), (((void *)0)), 0, sizeof(void *) > 4 ? sizeof(void *) : 4, 2);
class = __eCNameSpace__eC__types__eSystem_RegisterClass(4, "StmtType", 0, 0, 0, (void *)0, (void *)0, module, 1, 1);
if(((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application == ((struct __eCNameSpace__eC__types__Module *)(((char *)__thisModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->application && class)
__eCClass_StmtType = class;
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "labeledStmt", 0);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "caseStmt", 1);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "compoundStmt", 2);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "expressionStmt", 3);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "ifStmt", 4);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "switchStmt", 5);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "whileStmt", 6);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "doWhileStmt", 7);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "forStmt", 8);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "gotoStmt", 9);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "continueStmt", 10);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "breakStmt", 11);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "returnStmt", 12);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "asmStmt", 13);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "badDeclarationStmt", 14);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "fireWatchersStmt", 15);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "stopWatchingStmt", 16);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "watchStmt", 17);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "forEachStmt", 18);
class = __eCNameSpace__eC__types__eSystem_RegisterClass(5, "Statement", 0, sizeof(struct Statement), 0, (void *)0, (void *)0, module, 1, 1);
if(((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application == ((struct __eCNameSpace__eC__types__Module *)(((char *)__thisModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->application && class)
__eCClass_Statement = class;
__eCNameSpace__eC__types__eClass_AddDataMember(class, "prev", "Statement", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "next", "Statement", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "loc", "Location", sizeof(struct Location), 4, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "type", "StmtType", 4, 4, 1);
{
struct __eCNameSpace__eC__types__DataMember * dataMember0 = __eCNameSpace__eC__types__eMember_New(1, 1);

__eCNameSpace__eC__types__eMember_AddDataMember(dataMember0, "expressions", "eC::containers::OldList *", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eMember_AddDataMember(dataMember0, "labeled", "struct { Identifier id; Statement stmt; }", 16, 0xF000F000, 1);
__eCNameSpace__eC__types__eMember_AddDataMember(dataMember0, "caseStmt", "struct { Expression exp; Statement stmt; }", 16, 0xF000F000, 1);
__eCNameSpace__eC__types__eMember_AddDataMember(dataMember0, "compound", "struct { eC::containers::OldList * declarations; eC::containers::OldList * statements; Context context; bool isSwitch; }", 32, 0xF000F000, 1);
__eCNameSpace__eC__types__eMember_AddDataMember(dataMember0, "ifStmt", "struct { eC::containers::OldList * exp; Statement stmt; Statement elseStmt; }", 24, 0xF000F000, 1);
__eCNameSpace__eC__types__eMember_AddDataMember(dataMember0, "switchStmt", "struct { eC::containers::OldList * exp; Statement stmt; }", 16, 0xF000F000, 1);
__eCNameSpace__eC__types__eMember_AddDataMember(dataMember0, "whileStmt", "struct { eC::containers::OldList * exp; Statement stmt; }", 16, 0xF000F000, 1);
__eCNameSpace__eC__types__eMember_AddDataMember(dataMember0, "doWhile", "struct { eC::containers::OldList * exp; Statement stmt; }", 16, 0xF000F000, 1);
__eCNameSpace__eC__types__eMember_AddDataMember(dataMember0, "forStmt", "struct { Statement init; Statement check; eC::containers::OldList * increment; Statement stmt; }", 32, 0xF000F000, 1);
__eCNameSpace__eC__types__eMember_AddDataMember(dataMember0, "gotoStmt", "struct { Identifier id; }", 8, 0xF000F000, 1);
__eCNameSpace__eC__types__eMember_AddDataMember(dataMember0, "asmStmt", "struct { Specifier spec; char * statements; eC::containers::OldList * inputFields; eC::containers::OldList * outputFields; eC::containers::OldList * clobberedFields; }", 40, 0xF000F000, 1);
__eCNameSpace__eC__types__eMember_AddDataMember(dataMember0, "_watch", "struct { Expression watcher; Expression object; eC::containers::OldList * watches; }", 24, 0xF000F000, 1);
__eCNameSpace__eC__types__eMember_AddDataMember(dataMember0, "forEachStmt", "struct { Identifier id; eC::containers::OldList * exp; eC::containers::OldList * filter; Statement stmt; }", 32, 0xF000F000, 1);
__eCNameSpace__eC__types__eMember_AddDataMember(dataMember0, "decl", "Declaration", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddMember(class, dataMember0);
}
class = __eCNameSpace__eC__types__eSystem_RegisterClass(4, "DeclarationType", 0, 0, 0, (void *)0, (void *)0, module, 1, 1);
if(((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application == ((struct __eCNameSpace__eC__types__Module *)(((char *)__thisModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->application && class)
__eCClass_DeclarationType = class;
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "structDeclaration", 0);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "initDeclaration", 1);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "instDeclaration", 2);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "defineDeclaration", 3);
class = __eCNameSpace__eC__types__eSystem_RegisterClass(5, "Declaration", 0, sizeof(struct Declaration), 0, (void *)0, (void *)0, module, 1, 1);
if(((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application == ((struct __eCNameSpace__eC__types__Module *)(((char *)__thisModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->application && class)
__eCClass_Declaration = class;
__eCNameSpace__eC__types__eClass_AddDataMember(class, "prev", "Declaration", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "next", "Declaration", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "loc", "Location", sizeof(struct Location), 4, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "type", "DeclarationType", 4, 4, 1);
{
struct __eCNameSpace__eC__types__DataMember * dataMember0 = __eCNameSpace__eC__types__eMember_New(1, 1);

{
struct __eCNameSpace__eC__types__DataMember * dataMember1 = __eCNameSpace__eC__types__eMember_New(2, 1);

__eCNameSpace__eC__types__eMember_AddDataMember(dataMember1, "specifiers", "eC::containers::OldList *", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eMember_AddDataMember(dataMember1, "declarators", "eC::containers::OldList *", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eMember_AddMember(dataMember0, dataMember1);
}
__eCNameSpace__eC__types__eMember_AddDataMember(dataMember0, "inst", "Instantiation", sizeof(void *), 0xF000F000, 1);
{
struct __eCNameSpace__eC__types__DataMember * dataMember1 = __eCNameSpace__eC__types__eMember_New(2, 1);

__eCNameSpace__eC__types__eMember_AddDataMember(dataMember1, "id", "Identifier", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eMember_AddDataMember(dataMember1, "exp", "Expression", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eMember_AddMember(dataMember0, dataMember1);
}
__eCNameSpace__eC__types__eClass_AddMember(class, dataMember0);
}
__eCNameSpace__eC__types__eClass_AddDataMember(class, "extStorage", "Specifier", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "symbol", "Symbol", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "declMode", "eC::types::AccessMode", 4, 4, 1);
class = __eCNameSpace__eC__types__eSystem_RegisterClass(5, "Instantiation", 0, sizeof(struct Instantiation), 0, (void *)0, (void *)0, module, 1, 1);
if(((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application == ((struct __eCNameSpace__eC__types__Module *)(((char *)__thisModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->application && class)
__eCClass_Instantiation = class;
__eCNameSpace__eC__types__eClass_AddDataMember(class, "prev", "Instantiation", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "next", "Instantiation", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "loc", "Location", sizeof(struct Location), 4, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "_class", "Specifier", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "exp", "Expression", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "members", "eC::containers::OldList *", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "symbol", "Symbol", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "fullSet", "bool", 4, 4, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "isConstant", "bool", 4, 4, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "data", "byte *", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "nameLoc", "Location", sizeof(struct Location), 4, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "insideLoc", "Location", sizeof(struct Location), 4, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "built", "bool", 4, 4, 1);
class = __eCNameSpace__eC__types__eSystem_RegisterClass(4, "MembersInitType", 0, 0, 0, (void *)0, (void *)0, module, 1, 1);
if(((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application == ((struct __eCNameSpace__eC__types__Module *)(((char *)__thisModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->application && class)
__eCClass_MembersInitType = class;
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "dataMembersInit", 0);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "methodMembersInit", 1);
class = __eCNameSpace__eC__types__eSystem_RegisterClass(5, "FunctionDefinition", 0, sizeof(struct FunctionDefinition), 0, (void *)0, (void *)0, module, 1, 1);
if(((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application == ((struct __eCNameSpace__eC__types__Module *)(((char *)__thisModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->application && class)
__eCClass_FunctionDefinition = class;
__eCNameSpace__eC__types__eClass_AddDataMember(class, "prev", "FunctionDefinition", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "next", "FunctionDefinition", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "loc", "Location", sizeof(struct Location), 4, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "specifiers", "eC::containers::OldList *", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "declarator", "Declarator", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "declarations", "eC::containers::OldList *", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "body", "Statement", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "_class", "eC::types::Class", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "attached", "eC::containers::OldList", sizeof(struct __eCNameSpace__eC__containers__OldList), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "declMode", "eC::types::AccessMode", 4, 4, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "type", "Type", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "propSet", "Symbol", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "tempCount", "int", 4, 4, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "propertyNoThis", "bool", 4, 4, 1);
class = __eCNameSpace__eC__types__eSystem_RegisterClass(5, "ClassFunction", 0, sizeof(struct ClassFunction), 0, (void *)0, (void *)0, module, 1, 1);
if(((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application == ((struct __eCNameSpace__eC__types__Module *)(((char *)__thisModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->application && class)
__eCClass_ClassFunction = class;
__eCNameSpace__eC__types__eClass_AddDataMember(class, "prev", "ClassFunction", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "next", "ClassFunction", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "loc", "Location", sizeof(struct Location), 4, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "specifiers", "eC::containers::OldList *", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "declarator", "Declarator", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "declarations", "eC::containers::OldList *", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "body", "Statement", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "_class", "eC::types::Class", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "attached", "eC::containers::OldList", sizeof(struct __eCNameSpace__eC__containers__OldList), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "declMode", "eC::types::AccessMode", 4, 4, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "type", "Type", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "propSet", "Symbol", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "isVirtual", "bool", 4, 4, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "isConstructor", "bool", 4, 4, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "isDestructor", "bool", 4, 4, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "dontMangle", "bool", 4, 4, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "id", "int", 4, 4, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "idCode", "int", 4, 4, 1);
class = __eCNameSpace__eC__types__eSystem_RegisterClass(5, "MembersInit", 0, sizeof(struct MembersInit), 0, (void *)0, (void *)0, module, 1, 1);
if(((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application == ((struct __eCNameSpace__eC__types__Module *)(((char *)__thisModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->application && class)
__eCClass_MembersInit = class;
__eCNameSpace__eC__types__eClass_AddDataMember(class, "prev", "MembersInit", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "next", "MembersInit", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "loc", "Location", sizeof(struct Location), 4, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "type", "MembersInitType", 4, 4, 1);
{
struct __eCNameSpace__eC__types__DataMember * dataMember0 = __eCNameSpace__eC__types__eMember_New(1, 1);

__eCNameSpace__eC__types__eMember_AddDataMember(dataMember0, "dataMembers", "eC::containers::OldList *", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eMember_AddDataMember(dataMember0, "function", "ClassFunction", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddMember(class, dataMember0);
}
class = __eCNameSpace__eC__types__eSystem_RegisterClass(5, "MemberInit", 0, sizeof(struct MemberInit), 0, (void *)0, (void *)0, module, 1, 1);
if(((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application == ((struct __eCNameSpace__eC__types__Module *)(((char *)__thisModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->application && class)
__eCClass_MemberInit = class;
__eCNameSpace__eC__types__eClass_AddDataMember(class, "prev", "MemberInit", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "next", "MemberInit", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "loc", "Location", sizeof(struct Location), 4, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "realLoc", "Location", sizeof(struct Location), 4, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "identifiers", "eC::containers::OldList *", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "initializer", "Initializer", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "used", "bool", 4, 4, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "variable", "bool", 4, 4, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "takeOutExp", "bool", 4, 4, 1);
class = __eCNameSpace__eC__types__eSystem_RegisterClass(5, "ClassDefinition", 0, sizeof(struct ClassDefinition), 0, (void *)0, (void *)0, module, 1, 1);
if(((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application == ((struct __eCNameSpace__eC__types__Module *)(((char *)__thisModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->application && class)
__eCClass_ClassDefinition = class;
__eCNameSpace__eC__types__eClass_AddDataMember(class, "prev", "ClassDefinition", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "next", "ClassDefinition", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "loc", "Location", sizeof(struct Location), 4, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "_class", "Specifier", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "baseSpecs", "eC::containers::OldList *", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "definitions", "eC::containers::OldList *", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "symbol", "Symbol", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "blockStart", "Location", sizeof(struct Location), 4, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "nameLoc", "Location", sizeof(struct Location), 4, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "declMode", "eC::types::AccessMode", 4, 4, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "deleteWatchable", "bool", 4, 4, 1);
class = __eCNameSpace__eC__types__eSystem_RegisterClass(5, "PropertyWatch", 0, sizeof(struct PropertyWatch), 0, (void *)0, (void *)0, module, 1, 1);
if(((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application == ((struct __eCNameSpace__eC__types__Module *)(((char *)__thisModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->application && class)
__eCClass_PropertyWatch = class;
__eCNameSpace__eC__types__eClass_AddDataMember(class, "prev", "PropertyWatch", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "next", "PropertyWatch", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "loc", "Location", sizeof(struct Location), 4, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "compound", "Statement", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "properties", "eC::containers::OldList *", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "deleteWatch", "bool", 4, 4, 1);
class = __eCNameSpace__eC__types__eSystem_RegisterClass(4, "ClassDefType", 0, 0, 0, (void *)0, (void *)0, module, 1, 1);
if(((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application == ((struct __eCNameSpace__eC__types__Module *)(((char *)__thisModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->application && class)
__eCClass_ClassDefType = class;
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "functionClassDef", 0);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "defaultPropertiesClassDef", 1);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "declarationClassDef", 2);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "propertyClassDef", 3);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "propertyWatchClassDef", 4);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "classDesignerClassDef", 5);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "classNoExpansionClassDef", 6);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "classFixedClassDef", 7);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "designerDefaultPropertyClassDef", 8);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "classDataClassDef", 9);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "classPropertyClassDef", 10);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "classPropertyValueClassDef", 11);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "memberAccessClassDef", 12);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "accessOverrideClassDef", 13);
class = __eCNameSpace__eC__types__eSystem_RegisterClass(5, "PropertyDef", 0, sizeof(struct PropertyDef), 0, (void *)0, (void *)0, module, 1, 1);
if(((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application == ((struct __eCNameSpace__eC__types__Module *)(((char *)__thisModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->application && class)
__eCClass_PropertyDef = class;
__eCNameSpace__eC__types__eClass_AddDataMember(class, "prev", "PropertyDef", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "next", "PropertyDef", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "loc", "Location", sizeof(struct Location), 4, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "specifiers", "eC::containers::OldList *", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "declarator", "Declarator", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "id", "Identifier", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "getStmt", "Statement", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "setStmt", "Statement", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "issetStmt", "Statement", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "symbol", "Symbol", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "category", "Expression", sizeof(void *), 0xF000F000, 1);
{
struct __eCNameSpace__eC__types__DataMember * dataMember0 = __eCNameSpace__eC__types__eMember_New(2, 1);

__eCNameSpace__eC__types__eMember_AddDataMember(dataMember0, "conversion", "bool:1", 4, 4, 1);
__eCNameSpace__eC__types__eMember_AddDataMember(dataMember0, "isWatchable", "bool:1", 4, 4, 1);
__eCNameSpace__eC__types__eMember_AddDataMember(dataMember0, "isDBProp", "bool:1", 4, 4, 1);
__eCNameSpace__eC__types__eClass_AddMember(class, dataMember0);
}
class = __eCNameSpace__eC__types__eSystem_RegisterClass(5, "ClassDef", 0, sizeof(struct ClassDef), 0, (void *)0, (void *)0, module, 1, 1);
if(((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application == ((struct __eCNameSpace__eC__types__Module *)(((char *)__thisModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->application && class)
__eCClass_ClassDef = class;
__eCNameSpace__eC__types__eClass_AddDataMember(class, "prev", "ClassDef", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "next", "ClassDef", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "loc", "Location", sizeof(struct Location), 4, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "type", "ClassDefType", 4, 4, 1);
{
struct __eCNameSpace__eC__types__DataMember * dataMember0 = __eCNameSpace__eC__types__eMember_New(1, 1);

__eCNameSpace__eC__types__eMember_AddDataMember(dataMember0, "decl", "Declaration", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eMember_AddDataMember(dataMember0, "function", "ClassFunction", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eMember_AddDataMember(dataMember0, "defProperties", "eC::containers::OldList *", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eMember_AddDataMember(dataMember0, "propertyDef", "PropertyDef", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eMember_AddDataMember(dataMember0, "propertyWatch", "PropertyWatch", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eMember_AddDataMember(dataMember0, "designer", "char *", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eMember_AddDataMember(dataMember0, "defaultProperty", "Identifier", sizeof(void *), 0xF000F000, 1);
{
struct __eCNameSpace__eC__types__DataMember * dataMember1 = __eCNameSpace__eC__types__eMember_New(2, 1);

__eCNameSpace__eC__types__eMember_AddDataMember(dataMember1, "id", "Identifier", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eMember_AddDataMember(dataMember1, "initializer", "Initializer", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eMember_AddMember(dataMember0, dataMember1);
}
__eCNameSpace__eC__types__eClass_AddMember(class, dataMember0);
}
__eCNameSpace__eC__types__eClass_AddDataMember(class, "memberAccess", "eC::types::AccessMode", 4, 4, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "object", "void *", sizeof(void *), 0xF000F000, 1);
class = __eCNameSpace__eC__types__eSystem_RegisterClass(5, "TopoEdge", 0, sizeof(struct TopoEdge), 0, (void *)0, (void *)0, module, 2, 1);
if(((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application == ((struct __eCNameSpace__eC__types__Module *)(((char *)__thisModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->application && class)
__eCClass_TopoEdge = class;
__eCNameSpace__eC__types__eClass_AddDataMember(class, "in", "eC::containers::LinkElement<TopoEdge>", sizeof(struct __eCNameSpace__eC__containers__LinkElement), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "out", "eC::containers::LinkElement<TopoEdge>", sizeof(struct __eCNameSpace__eC__containers__LinkElement), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, (((void *)0)), (((void *)0)), 0, sizeof(void *) > 4 ? sizeof(void *) : 4, 2);
class = __eCNameSpace__eC__types__eSystem_RegisterClass(4, "ExternalType", 0, 0, 0, (void *)0, (void *)0, module, 1, 1);
if(((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application == ((struct __eCNameSpace__eC__types__Module *)(((char *)__thisModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->application && class)
__eCClass_ExternalType = class;
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "functionExternal", 0);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "declarationExternal", 1);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "classExternal", 2);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "importExternal", 3);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "nameSpaceExternal", 4);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "dbtableExternal", 5);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "pragmaExternal", 6);
class = __eCNameSpace__eC__types__eSystem_RegisterClass(5, "External", 0, sizeof(struct External), 0, (void *)__eCConstructor_External, (void *)__eCDestructor_External, module, 1, 1);
if(((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application == ((struct __eCNameSpace__eC__types__Module *)(((char *)__thisModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->application && class)
__eCClass_External = class;
__eCNameSpace__eC__types__eClass_AddMethod(class, "CreateEdge", "void CreateEdge(External from, bool soft)", __eCMethod_External_CreateEdge, 1);
__eCNameSpace__eC__types__eClass_AddMethod(class, "CreateUniqueEdge", "void CreateUniqueEdge(External from, bool soft)", __eCMethod_External_CreateUniqueEdge, 1);
__eCNameSpace__eC__types__eClass_AddMethod(class, "ForwardDeclare", "External ForwardDeclare()", __eCMethod_External_ForwardDeclare, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "prev", "External", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "next", "External", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "loc", "Location", sizeof(struct Location), 4, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "type", "ExternalType", 4, 4, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "symbol", "Symbol", sizeof(void *), 0xF000F000, 1);
{
struct __eCNameSpace__eC__types__DataMember * dataMember0 = __eCNameSpace__eC__types__eMember_New(1, 1);

__eCNameSpace__eC__types__eMember_AddDataMember(dataMember0, "function", "FunctionDefinition", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eMember_AddDataMember(dataMember0, "_class", "ClassDefinition", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eMember_AddDataMember(dataMember0, "declaration", "Declaration", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eMember_AddDataMember(dataMember0, "importString", "char *", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eMember_AddDataMember(dataMember0, "id", "Identifier", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eMember_AddDataMember(dataMember0, "table", "DBTableDef", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eMember_AddDataMember(dataMember0, "pragma", "char *", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddMember(class, dataMember0);
}
__eCNameSpace__eC__types__eClass_AddDataMember(class, "importType", "eC::types::ImportType", 4, 4, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "fwdDecl", "External", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "outgoing", "eC::containers::LinkList<TopoEdge, link = out>", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "incoming", "eC::containers::LinkList<TopoEdge, link = in>", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "nonBreakableIncoming", "int", 4, 4, 1);
class = __eCNameSpace__eC__types__eSystem_RegisterClass(5, "Context", 0, sizeof(struct Context), 0, (void *)__eCConstructor_Context, (void *)0, module, 1, 1);
if(((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application == ((struct __eCNameSpace__eC__types__Module *)(((char *)__thisModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->application && class)
__eCClass_Context = class;
__eCNameSpace__eC__types__eClass_AddDataMember(class, "parent", "Context", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "types", "eC::containers::BinaryTree", sizeof(struct __eCNameSpace__eC__containers__BinaryTree), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "classes", "eC::containers::BinaryTree", sizeof(struct __eCNameSpace__eC__containers__BinaryTree), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "symbols", "eC::containers::BinaryTree", sizeof(struct __eCNameSpace__eC__containers__BinaryTree), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "structSymbols", "eC::containers::BinaryTree", sizeof(struct __eCNameSpace__eC__containers__BinaryTree), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "nextID", "int", 4, 4, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "simpleID", "int", 4, 4, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "templateTypes", "eC::containers::BinaryTree", sizeof(struct __eCNameSpace__eC__containers__BinaryTree), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "classDef", "ClassDefinition", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "templateTypesOnly", "bool", 4, 4, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "hasNameSpace", "bool", 4, 4, 1);
class = __eCNameSpace__eC__types__eSystem_RegisterClass(5, "Symbol", 0, sizeof(struct Symbol), 0, (void *)0, (void *)0, module, 1, 1);
if(((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application == ((struct __eCNameSpace__eC__types__Module *)(((char *)__thisModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->application && class)
__eCClass_Symbol = class;
__eCNameSpace__eC__types__eClass_AddDataMember(class, "string", "char *", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "parent", "Symbol", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "left", "Symbol", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "right", "Symbol", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "depth", "int", 4, 4, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "type", "Type", sizeof(void *), 0xF000F000, 1);
{
struct __eCNameSpace__eC__types__DataMember * dataMember0 = __eCNameSpace__eC__types__eMember_New(1, 1);

__eCNameSpace__eC__types__eMember_AddDataMember(dataMember0, "method", "eC::types::Method", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eMember_AddDataMember(dataMember0, "_property", "eC::types::Property", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eMember_AddDataMember(dataMember0, "registered", "eC::types::Class", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddMember(class, dataMember0);
}
__eCNameSpace__eC__types__eClass_AddDataMember(class, "notYetDeclared", "bool", 4, 4, 1);
{
struct __eCNameSpace__eC__types__DataMember * dataMember0 = __eCNameSpace__eC__types__eMember_New(1, 1);

{
struct __eCNameSpace__eC__types__DataMember * dataMember1 = __eCNameSpace__eC__types__eMember_New(2, 1);

__eCNameSpace__eC__types__eMember_AddDataMember(dataMember1, "pointerExternal", "External", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eMember_AddDataMember(dataMember1, "structExternal", "External", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eMember_AddMember(dataMember0, dataMember1);
}
{
struct __eCNameSpace__eC__types__DataMember * dataMember1 = __eCNameSpace__eC__types__eMember_New(2, 1);

__eCNameSpace__eC__types__eMember_AddDataMember(dataMember1, "externalGet", "External", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eMember_AddDataMember(dataMember1, "externalSet", "External", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eMember_AddDataMember(dataMember1, "externalPtr", "External", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eMember_AddDataMember(dataMember1, "externalIsSet", "External", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eMember_AddMember(dataMember0, dataMember1);
}
{
struct __eCNameSpace__eC__types__DataMember * dataMember1 = __eCNameSpace__eC__types__eMember_New(2, 1);

__eCNameSpace__eC__types__eMember_AddDataMember(dataMember1, "methodExternal", "External", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eMember_AddDataMember(dataMember1, "methodCodeExternal", "External", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eMember_AddMember(dataMember0, dataMember1);
}
__eCNameSpace__eC__types__eClass_AddMember(class, dataMember0);
}
__eCNameSpace__eC__types__eClass_AddDataMember(class, "imported", "bool", 4, 4, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "declaredStructSym", "bool", 4, 4, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "_class", "eC::types::Class", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "declaredStruct", "bool", 4, 4, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "needConstructor", "bool", 4, 4, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "needDestructor", "bool", 4, 4, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "constructorName", "char *", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "structName", "char *", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "className", "char *", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "destructorName", "char *", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "module", "ModuleImport", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "_import", "ClassImport", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "nameLoc", "Location", sizeof(struct Location), 4, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "isParam", "bool", 4, 4, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "isRemote", "bool", 4, 4, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "isStruct", "bool", 4, 4, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "fireWatchersDone", "bool", 4, 4, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "declaring", "int", 4, 4, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "classData", "bool", 4, 4, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "isStatic", "bool", 4, 4, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "shortName", "char *", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "templateParams", "eC::containers::OldList *", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "templatedClasses", "eC::containers::OldList", sizeof(struct __eCNameSpace__eC__containers__OldList), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "ctx", "Context", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "isIterator", "int", 4, 4, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "propCategory", "Expression", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "mustRegister", "bool", 4, 4, 1);
class = __eCNameSpace__eC__types__eSystem_RegisterClass(5, "ClassImport", 0, sizeof(struct ClassImport), 0, (void *)0, (void *)0, module, 1, 1);
if(((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application == ((struct __eCNameSpace__eC__types__Module *)(((char *)__thisModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->application && class)
__eCClass_ClassImport = class;
__eCNameSpace__eC__types__eClass_AddDataMember(class, "prev", "ClassImport", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "next", "ClassImport", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "name", "char *", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "methods", "eC::containers::OldList", sizeof(struct __eCNameSpace__eC__containers__OldList), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "properties", "eC::containers::OldList", sizeof(struct __eCNameSpace__eC__containers__OldList), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "itself", "bool", 4, 4, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "isRemote", "int", 4, 4, 1);
class = __eCNameSpace__eC__types__eSystem_RegisterClass(5, "FunctionImport", 0, sizeof(struct FunctionImport), 0, (void *)0, (void *)0, module, 1, 1);
if(((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application == ((struct __eCNameSpace__eC__types__Module *)(((char *)__thisModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->application && class)
__eCClass_FunctionImport = class;
__eCNameSpace__eC__types__eClass_AddDataMember(class, "prev", "FunctionImport", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "next", "FunctionImport", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "name", "char *", sizeof(void *), 0xF000F000, 1);
class = __eCNameSpace__eC__types__eSystem_RegisterClass(5, "ModuleImport", 0, sizeof(struct ModuleImport), 0, (void *)0, (void *)0, module, 1, 1);
if(((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application == ((struct __eCNameSpace__eC__types__Module *)(((char *)__thisModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->application && class)
__eCClass_ModuleImport = class;
__eCNameSpace__eC__types__eClass_AddDataMember(class, "prev", "ModuleImport", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "next", "ModuleImport", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "name", "char *", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "classes", "eC::containers::OldList", sizeof(struct __eCNameSpace__eC__containers__OldList), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "functions", "eC::containers::OldList", sizeof(struct __eCNameSpace__eC__containers__OldList), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "importType", "eC::types::ImportType", 4, 4, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "importAccess", "eC::types::AccessMode", 4, 4, 1);
class = __eCNameSpace__eC__types__eSystem_RegisterClass(5, "PropertyImport", 0, sizeof(struct PropertyImport), 0, (void *)0, (void *)0, module, 1, 1);
if(((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application == ((struct __eCNameSpace__eC__types__Module *)(((char *)__thisModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->application && class)
__eCClass_PropertyImport = class;
__eCNameSpace__eC__types__eClass_AddDataMember(class, "prev", "PropertyImport", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "next", "PropertyImport", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "name", "char *", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "isVirtual", "bool", 4, 4, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "hasSet", "bool", 4, 4, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "hasGet", "bool", 4, 4, 1);
class = __eCNameSpace__eC__types__eSystem_RegisterClass(5, "MethodImport", 0, sizeof(struct MethodImport), 0, (void *)0, (void *)0, module, 1, 1);
if(((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application == ((struct __eCNameSpace__eC__types__Module *)(((char *)__thisModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->application && class)
__eCClass_MethodImport = class;
__eCNameSpace__eC__types__eClass_AddDataMember(class, "prev", "MethodImport", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "next", "MethodImport", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "name", "char *", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "isVirtual", "bool", 4, 4, 1);
class = __eCNameSpace__eC__types__eSystem_RegisterClass(4, "TypeKind", 0, 0, 0, (void *)0, (void *)0, module, 1, 1);
if(((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application == ((struct __eCNameSpace__eC__types__Module *)(((char *)__thisModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->application && class)
__eCClass_TypeKind = class;
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "voidType", 0);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "charType", 1);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "shortType", 2);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "intType", 3);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "int64Type", 4);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "longType", 5);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "floatType", 6);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "doubleType", 7);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "classType", 8);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "structType", 9);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "unionType", 10);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "functionType", 11);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "arrayType", 12);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "pointerType", 13);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "ellipsisType", 14);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "enumType", 15);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "methodType", 16);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "vaListType", 17);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "dummyType", 18);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "subClassType", 19);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "templateType", 20);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "thisClassType", 21);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "intPtrType", 22);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "intSizeType", 23);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "_BoolType", 24);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "int128Type", 25);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "float128Type", 26);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "float16Type", 27);
class = __eCNameSpace__eC__types__eSystem_RegisterClass(5, "Type", 0, sizeof(struct Type), 0, (void *)0, (void *)0, module, 1, 1);
if(((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application == ((struct __eCNameSpace__eC__types__Module *)(((char *)__thisModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->application && class)
__eCClass_Type = class;
__eCNameSpace__eC__types__eClass_AddMethod(class, "OnFree", 0, __eCMethod_Type_OnFree, 1);
__eCNameSpace__eC__types__eClass_AddMethod(class, "OnGetString", 0, __eCMethod_Type_OnGetString, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "prev", "Type", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "next", "Type", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "refCount", "int", 4, 4, 1);
{
struct __eCNameSpace__eC__types__DataMember * dataMember0 = __eCNameSpace__eC__types__eMember_New(1, 1);

__eCNameSpace__eC__types__eMember_AddDataMember(dataMember0, "_class", "Symbol", sizeof(void *), 0xF000F000, 1);
{
struct __eCNameSpace__eC__types__DataMember * dataMember1 = __eCNameSpace__eC__types__eMember_New(2, 1);

__eCNameSpace__eC__types__eMember_AddDataMember(dataMember1, "members", "eC::containers::OldList", sizeof(struct __eCNameSpace__eC__containers__OldList), 0xF000F000, 1);
__eCNameSpace__eC__types__eMember_AddDataMember(dataMember1, "enumName", "char *", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eMember_AddMember(dataMember0, dataMember1);
}
{
struct __eCNameSpace__eC__types__DataMember * dataMember1 = __eCNameSpace__eC__types__eMember_New(2, 1);

__eCNameSpace__eC__types__eMember_AddDataMember(dataMember1, "returnType", "Type", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eMember_AddDataMember(dataMember1, "params", "eC::containers::OldList", sizeof(struct __eCNameSpace__eC__containers__OldList), 0xF000F000, 1);
__eCNameSpace__eC__types__eMember_AddDataMember(dataMember1, "thisClass", "Symbol", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eMember_AddDataMember(dataMember1, "staticMethod", "bool", 4, 4, 1);
__eCNameSpace__eC__types__eMember_AddDataMember(dataMember1, "thisClassTemplate", "TemplateParameter", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eMember_AddMember(dataMember0, dataMember1);
}
{
struct __eCNameSpace__eC__types__DataMember * dataMember1 = __eCNameSpace__eC__types__eMember_New(2, 1);

__eCNameSpace__eC__types__eMember_AddDataMember(dataMember1, "method", "eC::types::Method", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eMember_AddDataMember(dataMember1, "methodClass", "eC::types::Class", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eMember_AddDataMember(dataMember1, "usedClass", "eC::types::Class", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eMember_AddMember(dataMember0, dataMember1);
}
{
struct __eCNameSpace__eC__types__DataMember * dataMember1 = __eCNameSpace__eC__types__eMember_New(2, 1);

__eCNameSpace__eC__types__eMember_AddDataMember(dataMember1, "arrayType", "Type", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eMember_AddDataMember(dataMember1, "arraySize", "int", 4, 4, 1);
__eCNameSpace__eC__types__eMember_AddDataMember(dataMember1, "arraySizeExp", "Expression", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eMember_AddDataMember(dataMember1, "freeExp", "bool", 4, 4, 1);
__eCNameSpace__eC__types__eMember_AddDataMember(dataMember1, "enumClass", "Symbol", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eMember_AddMember(dataMember0, dataMember1);
}
__eCNameSpace__eC__types__eMember_AddDataMember(dataMember0, "type", "Type", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eMember_AddDataMember(dataMember0, "templateParameter", "TemplateParameter", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddMember(class, dataMember0);
}
__eCNameSpace__eC__types__eClass_AddDataMember(class, "kind", "TypeKind", 4, 4, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "size", "uint", 4, 4, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "name", "char *", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "typeName", "char *", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "thisClassFrom", "eC::types::Class", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "promotedFrom", "TypeKind", 4, 4, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "classObjectType", "ClassObjectType", 4, 4, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "alignment", "int", 4, 4, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "offset", "uint", 4, 4, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "bitFieldCount", "int", 4, 4, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "count", "int", 4, 4, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "bitMemberSize", "int", 4, 4, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "isSigned", "bool:1", 4, 4, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "constant", "bool:1", 4, 4, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "truth", "bool:1", 4, 4, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "byReference", "bool:1", 4, 4, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "extraParam", "bool:1", 4, 4, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "directClassAccess", "bool:1", 4, 4, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "computing", "bool:1", 4, 4, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "keepCast", "bool:1", 4, 4, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "passAsTemplate", "bool:1", 4, 4, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "dllExport", "bool:1", 4, 4, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "attrStdcall", "bool:1", 4, 4, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "declaredWithStruct", "bool:1", 4, 4, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "typedByReference", "bool:1", 4, 4, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "casted", "bool:1", 4, 4, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "pointerAlignment", "bool:1", 4, 4, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "isLong", "bool:1", 4, 4, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "signedBeforePromotion", "bool:1", 4, 4, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "isVector", "bool:1", 4, 4, 1);
__eCPropM_Type_specConst = __eCNameSpace__eC__types__eClass_AddProperty(class, "specConst", "bool", 0, __eCProp_Type_Get_specConst, 1);
if(((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application == ((struct __eCNameSpace__eC__types__Module *)(((char *)__thisModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->application)
__eCProp_Type_specConst = __eCPropM_Type_specConst, __eCPropM_Type_specConst = (void *)0;
__eCPropM_Type_isPointerTypeSize = __eCNameSpace__eC__types__eClass_AddProperty(class, "isPointerTypeSize", "bool", 0, __eCProp_Type_Get_isPointerTypeSize, 1);
if(((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application == ((struct __eCNameSpace__eC__types__Module *)(((char *)__thisModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->application)
__eCProp_Type_isPointerTypeSize = __eCPropM_Type_isPointerTypeSize, __eCPropM_Type_isPointerTypeSize = (void *)0;
__eCPropM_Type_isPointerType = __eCNameSpace__eC__types__eClass_AddProperty(class, "isPointerType", "bool", 0, __eCProp_Type_Get_isPointerType, 1);
if(((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application == ((struct __eCNameSpace__eC__types__Module *)(((char *)__thisModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->application)
__eCProp_Type_isPointerType = __eCPropM_Type_isPointerType, __eCPropM_Type_isPointerType = (void *)0;
class = __eCNameSpace__eC__types__eSystem_RegisterClass(1, "Operand", 0, sizeof(struct Operand), 0, (void *)0, (void *)0, module, 1, 1);
if(((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application == ((struct __eCNameSpace__eC__types__Module *)(((char *)__thisModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->application && class)
__eCClass_Operand = class;
__eCNameSpace__eC__types__eClass_AddDataMember(class, "kind", "TypeKind", 4, 4, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "type", "Type", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "ptrSize", "uint", 4, 4, 1);
{
struct __eCNameSpace__eC__types__DataMember * dataMember0 = __eCNameSpace__eC__types__eMember_New(1, 1);

__eCNameSpace__eC__types__eMember_AddDataMember(dataMember0, "c", "char", 1, 1, 1);
__eCNameSpace__eC__types__eMember_AddDataMember(dataMember0, "uc", "byte", 1, 1, 1);
__eCNameSpace__eC__types__eMember_AddDataMember(dataMember0, "s", "short", 2, 2, 1);
__eCNameSpace__eC__types__eMember_AddDataMember(dataMember0, "us", "uint16", 2, 2, 1);
__eCNameSpace__eC__types__eMember_AddDataMember(dataMember0, "i", "int", 4, 4, 1);
__eCNameSpace__eC__types__eMember_AddDataMember(dataMember0, "ui", "uint", 4, 4, 1);
__eCNameSpace__eC__types__eMember_AddDataMember(dataMember0, "f", "float", 4, 4, 1);
__eCNameSpace__eC__types__eMember_AddDataMember(dataMember0, "d", "double", 8, 8, 1);
__eCNameSpace__eC__types__eMember_AddDataMember(dataMember0, "i64", "int64", 8, 8, 1);
__eCNameSpace__eC__types__eMember_AddDataMember(dataMember0, "ui64", "uint64", 8, 8, 1);
__eCNameSpace__eC__types__eClass_AddMember(class, dataMember0);
}
__eCNameSpace__eC__types__eClass_AddDataMember(class, "ops", "OpTable", sizeof(struct OpTable), 8, 1);
class = __eCNameSpace__eC__types__eSystem_RegisterClass(1, "OpTable", 0, sizeof(struct OpTable), 0, (void *)0, (void *)0, module, 1, 1);
if(((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application == ((struct __eCNameSpace__eC__types__Module *)(((char *)__thisModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->application && class)
__eCClass_OpTable = class;
__eCNameSpace__eC__types__eClass_AddDataMember(class, "Add", "bool (*)(Expression, Operand, Operand)", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "Sub", "bool (*)(Expression, Operand, Operand)", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "Mul", "bool (*)(Expression, Operand, Operand)", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "Div", "bool (*)(Expression, Operand, Operand)", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "Mod", "bool (*)(Expression, Operand, Operand)", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "Neg", "bool (*)(Expression, Operand)", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "Inc", "bool (*)(Expression, Operand)", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "Dec", "bool (*)(Expression, Operand)", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "Asign", "bool (*)(Expression, Operand, Operand)", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "AddAsign", "bool (*)(Expression, Operand, Operand)", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "SubAsign", "bool (*)(Expression, Operand, Operand)", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "MulAsign", "bool (*)(Expression, Operand, Operand)", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "DivAsign", "bool (*)(Expression, Operand, Operand)", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "ModAsign", "bool (*)(Expression, Operand, Operand)", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "BitAnd", "bool (*)(Expression, Operand, Operand)", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "BitOr", "bool (*)(Expression, Operand, Operand)", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "BitXor", "bool (*)(Expression, Operand, Operand)", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "LShift", "bool (*)(Expression, Operand, Operand)", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "RShift", "bool (*)(Expression, Operand, Operand)", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "BitNot", "bool (*)(Expression, Operand)", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "AndAsign", "bool (*)(Expression, Operand, Operand)", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "OrAsign", "bool (*)(Expression, Operand, Operand)", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "XorAsign", "bool (*)(Expression, Operand, Operand)", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "LShiftAsign", "bool (*)(Expression, Operand, Operand)", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "RShiftAsign", "bool (*)(Expression, Operand, Operand)", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "Not", "bool (*)(Expression, Operand)", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "Equ", "bool (*)(Expression, Operand, Operand)", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "Nqu", "bool (*)(Expression, Operand, Operand)", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "And", "bool (*)(Expression, Operand, Operand)", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "Or", "bool (*)(Expression, Operand, Operand)", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "Grt", "bool (*)(Expression, Operand, Operand)", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "Sma", "bool (*)(Expression, Operand, Operand)", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "GrtEqu", "bool (*)(Expression, Operand, Operand)", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "SmaEqu", "bool (*)(Expression, Operand, Operand)", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "Cond", "bool (*)(Expression, Operand, Operand, Operand)", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eSystem_RegisterDefine("MAX_INCLUDE_DEPTH", "30", module, 2);
__eCNameSpace__eC__types__eSystem_RegisterFunction("Compiler_Error", "void Compiler_Error(const char * format, ...)", Compiler_Error, module, 2);
__eCNameSpace__eC__types__eSystem_RegisterFunction("GetNumWarnings", "int GetNumWarnings(void)", GetNumWarnings, module, 1);
__eCNameSpace__eC__types__eSystem_RegisterFunction("Compiler_Warning", "void Compiler_Warning(const char * format, ...)", Compiler_Warning, module, 2);
__eCNameSpace__eC__types__eSystem_RegisterFunction("yyerror", "int yyerror(void)", yyerror, module, 2);
__eCNameSpace__eC__types__eSystem_RegisterFunction("GetHostBits", "int GetHostBits(void)", GetHostBits, module, 1);
__eCNameSpace__eC__types__eSystem_RegisterFunction("GetRuntimeBits", "int GetRuntimeBits(void)", GetRuntimeBits, module, 1);
__eCNameSpace__eC__types__eSystem_RegisterFunction("SetTargetPlatform", "void SetTargetPlatform(eC::types::Platform platform)", SetTargetPlatform, module, 1);
__eCNameSpace__eC__types__eSystem_RegisterFunction("SetTargetBits", "void SetTargetBits(int bits)", SetTargetBits, module, 1);
__eCNameSpace__eC__types__eSystem_RegisterFunction("GetTargetBits", "int GetTargetBits(void)", GetTargetBits, module, 1);
}

