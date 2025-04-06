/* Code generated from eC source file: i18n.ec */
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
static struct __eCNameSpace__eC__types__Instance * __eCNameSpace__eC__moduleMaps;

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

struct __eCNameSpace__eC__files__File
{
void *  input;
void *  output;
} eC_gcc_struct;

extern char *  __eCNameSpace__eC__files__GetEnvironment(const char *  envName, char *  envValue, int max);

extern char *  strcpy(char * , const char * );

extern char *  strstr(const char * , const char * );

extern int strcasecmp(const char * , const char * );

extern char *  strchr(const char * , int);

extern int sprintf(char * , const char * , ...);

struct __eCNameSpace__eC__containers__IteratorPointer;

extern int printf(const char * , ...);

struct __eCNameSpace__eC__types__GlobalFunction;

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

extern int __eCVMethodID___eCNameSpace__eC__files__File_Read;

extern void __eCNameSpace__eC__types__eInstance_DecRef(struct __eCNameSpace__eC__types__Instance * instance);

extern int __eCVMethodID___eCNameSpace__eC__files__File_Seek;

extern int __eCVMethodID___eCNameSpace__eC__containers__Container_Free;

extern int __eCVMethodID___eCNameSpace__eC__containers__Container_Delete;

struct __eCNameSpace__eC__types__Instance * __eCProp___eCNameSpace__eC__types__MapIterator_Get_map(struct __eCNameSpace__eC__types__MapIterator * this);

void __eCProp___eCNameSpace__eC__types__MapIterator_Set_map(struct __eCNameSpace__eC__types__MapIterator * this, struct __eCNameSpace__eC__types__Instance * value);

unsigned int __eCMethod___eCNameSpace__eC__types__Iterator_Index(struct __eCNameSpace__eC__types__Iterator * this, const uint64 index, unsigned int create);

uint64 __eCProp___eCNameSpace__eC__types__Iterator_Get_data(struct __eCNameSpace__eC__types__Iterator * this);

void __eCProp___eCNameSpace__eC__types__Iterator_Set_data(struct __eCNameSpace__eC__types__Iterator * this, uint64 value);

void __eCDestroyModuleInstances_i18n()
{
(__eCNameSpace__eC__types__eInstance_DecRef(__eCNameSpace__eC__moduleMaps), __eCNameSpace__eC__moduleMaps = 0);
}

const char * __eCNameSpace__eC__i18n__GetTranslatedString(const char * name, const char * string, const char * stringAndContext)
{
struct __eCNameSpace__eC__types__Instance * textMap = __eCNameSpace__eC__moduleMaps ? (((struct __eCNameSpace__eC__types__Instance *)((uintptr_t)(__extension__ ({
struct __eCNameSpace__eC__types__Iterator __internalIterator =
{
__eCNameSpace__eC__moduleMaps, 0
};

__eCMethod___eCNameSpace__eC__types__Iterator_Index(&__internalIterator, ((uint64)(uintptr_t)(name)), 0);
((struct __eCNameSpace__eC__types__Instance *)(uintptr_t)__eCProp___eCNameSpace__eC__types__Iterator_Get_data(&__internalIterator));
}))))) : (((void *)0));
const char * result = textMap ? (((const char *)((uintptr_t)(__extension__ ({
struct __eCNameSpace__eC__types__Iterator __internalIterator =
{
textMap, 0
};

__eCMethod___eCNameSpace__eC__types__Iterator_Index(&__internalIterator, ((uint64)(uintptr_t)(stringAndContext ? stringAndContext : string)), 0);
((char *)(uintptr_t)__eCProp___eCNameSpace__eC__types__Iterator_Get_data(&__internalIterator));
}))))) : string;

return (result && result[0]) ? result : string;
}

struct __eCNameSpace__eC__files__BinaryTree;

struct __eCNameSpace__eC__files__BinaryTree
{
struct __eCNameSpace__eC__containers__BTNode * root;
int count;
int (*  CompareKey)(struct __eCNameSpace__eC__files__BinaryTree * tree, uintptr_t a, uintptr_t b);
void (*  FreeKey)(void *  key);
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
struct __eCNameSpace__eC__types__Instance * dataType;
int type;
int offset;
int memberID;
struct __eCNameSpace__eC__containers__OldList members;
struct __eCNameSpace__eC__files__BinaryTree membersAlpha;
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
struct __eCNameSpace__eC__types__Instance * dataType;
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
struct __eCNameSpace__eC__types__Instance * dataType;
int memberAccess;
} eC_gcc_struct;

struct __eCNameSpace__eC__types__Module;

extern struct __eCNameSpace__eC__types__GlobalFunction * __eCNameSpace__eC__types__eSystem_RegisterFunction(const char *  name, const char *  type, void *  func, struct __eCNameSpace__eC__types__Instance * module, int declMode);

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
struct __eCNameSpace__eC__types__Instance * dataType;
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

extern struct __eCNameSpace__eC__types__Class * __eCClass___eCNameSpace__eC__types__Map_TPL_String__eC__types__Map_TPL_String__const_String___;

extern struct __eCNameSpace__eC__types__Class * __eCClass___eCNameSpace__eC__types__Map_TPL_String__const_String_;

extern struct __eCNameSpace__eC__types__Class * __eCClass___eCNameSpace__eC__files__File;

extern struct __eCNameSpace__eC__types__Class * __eCClass___eCNameSpace__eC__types__Map;

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

void __eCCreateModuleInstances_i18n()
{
__eCNameSpace__eC__moduleMaps = __eCNameSpace__eC__types__eInstance_New(__eCClass___eCNameSpace__eC__types__Map_TPL_String__eC__types__Map_TPL_String__const_String___);
__eCNameSpace__eC__types__eInstance_IncRef(__eCNameSpace__eC__moduleMaps);
}

void __eCNameSpace__eC__i18n__LoadTranslatedStrings(const char * moduleName, const char * name)
{
struct __eCNameSpace__eC__types__Instance * f;
char fileName[797];
char lcAll[256];
char language[256];
char lang[256];
char lcMessages[256];
char * locale = (((void *)0));
char genericLocale[256];

genericLocale[0] = 0;
if(__eCNameSpace__eC__files__GetEnvironment("EC_LANGUAGE", language, sizeof (language)))
locale = language;
else if(__eCNameSpace__eC__files__GetEnvironment("LANGUAGE", language, sizeof (language)))
locale = language;
else if(__eCNameSpace__eC__files__GetEnvironment("LC_ALL", lcAll, sizeof (lcAll)))
locale = lcAll;
else if(__eCNameSpace__eC__files__GetEnvironment("LC_MESSAGES", lcMessages, sizeof (lcMessages)))
locale = lcMessages;
else if(__eCNameSpace__eC__files__GetEnvironment("LANG", lang, sizeof (lang)))
locale = lang;
if(locale)
{
char * dot;
char * colon;

if(language != locale)
strcpy(language, locale);
dot = strstr(language, ".");
if(dot)
*dot = 0;
colon = strstr(language, ":");
if(colon)
*colon = 0;
locale = language;
if(!(strcasecmp)(locale, "zh"))
strcpy(locale, "zh_CN");
}
if(locale)
{
char * under;

strcpy(genericLocale, locale);
under = strchr(genericLocale, '_');
if(under)
*under = 0;
if(!(strcasecmp)(genericLocale, "zh"))
strcpy(genericLocale, "zh_CN");
}
if(moduleName)
sprintf(fileName, "<:%s>locale/%s.mo", moduleName, locale);
else
sprintf(fileName, ":locale/%s.mo", locale);
f = __eCNameSpace__eC__files__FileOpen(fileName, 1);
if(!f)
{
if(moduleName)
sprintf(fileName, "<:%s>locale/%s/LC_MESSAGES/%s.mo", moduleName, locale, name);
else
sprintf(fileName, ":locale/%s/LC_MESSAGES/%s.mo", locale, name);
f = __eCNameSpace__eC__files__FileOpen(fileName, 1);
}
if(!f)
{
sprintf(fileName, "locale/%s/LC_MESSAGES/%s.mo", locale, name);
f = __eCNameSpace__eC__files__FileOpen(fileName, 1);
}
if(!f)
{
sprintf(fileName, "/usr/share/locale/%s/LC_MESSAGES/%s.mo", locale, name);
f = __eCNameSpace__eC__files__FileOpen(fileName, 1);
}
if(!f && locale && (strcasecmp)(locale, genericLocale))
{
if(moduleName)
sprintf(fileName, "<:%s>locale/%s.mo", moduleName, genericLocale);
else
sprintf(fileName, ":locale/%s.mo", genericLocale);
f = __eCNameSpace__eC__files__FileOpen(fileName, 1);
if(!f)
{
if(moduleName)
sprintf(fileName, "<:%s>locale/%s/LC_MESSAGES/%s.mo", moduleName, genericLocale, name);
else
sprintf(fileName, ":locale/%s/LC_MESSAGES/%s.mo", genericLocale, name);
f = __eCNameSpace__eC__files__FileOpen(fileName, 1);
}
if(!f)
{
sprintf(fileName, "locale/%s/LC_MESSAGES/%s.mo", genericLocale, name);
f = __eCNameSpace__eC__files__FileOpen(fileName, 1);
}
if(!f)
{
sprintf(fileName, "/usr/share/locale/%s/LC_MESSAGES/%s.mo", genericLocale, name);
f = __eCNameSpace__eC__files__FileOpen(fileName, 1);
}
}
if(f)
{
unsigned int magic = 0;

(__extension__ ({
size_t (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, void *  buffer, size_t size, size_t count);

__internal_VirtualMethod = ((size_t (*)(struct __eCNameSpace__eC__types__Instance *, void *  buffer, size_t size, size_t count))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Read]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, &magic, sizeof(unsigned int), 1) : (size_t)1;
}));
if(magic == 0x950412de || magic == 0xde120495)
{
struct __eCNameSpace__eC__types__Instance * textMap;
unsigned int swap = magic != 0x950412de;
unsigned int revision = 0;
unsigned int numStrings = 0;
unsigned int origStrings = 0, transStrings = 0;
unsigned int hashingSize = 0, hashingOffset = 0;
int c;

(__extension__ ({
size_t (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, void *  buffer, size_t size, size_t count);

__internal_VirtualMethod = ((size_t (*)(struct __eCNameSpace__eC__types__Instance *, void *  buffer, size_t size, size_t count))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Read]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, &revision, sizeof(unsigned int), 1) : (size_t)1;
}));
if(swap)
revision = ((((revision) & 0x000000ff) << 24) | (((revision) & 0x0000ff00) << 8) | (((revision) & 0x00ff0000) >> 8) | (((revision) & 0xff000000) >> 24));
(__extension__ ({
size_t (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, void *  buffer, size_t size, size_t count);

__internal_VirtualMethod = ((size_t (*)(struct __eCNameSpace__eC__types__Instance *, void *  buffer, size_t size, size_t count))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Read]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, &numStrings, sizeof(unsigned int), 1) : (size_t)1;
}));
if(swap)
numStrings = ((((numStrings) & 0x000000ff) << 24) | (((numStrings) & 0x0000ff00) << 8) | (((numStrings) & 0x00ff0000) >> 8) | (((numStrings) & 0xff000000) >> 24));
(__extension__ ({
size_t (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, void *  buffer, size_t size, size_t count);

__internal_VirtualMethod = ((size_t (*)(struct __eCNameSpace__eC__types__Instance *, void *  buffer, size_t size, size_t count))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Read]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, &origStrings, sizeof(unsigned int), 1) : (size_t)1;
}));
if(swap)
origStrings = ((((origStrings) & 0x000000ff) << 24) | (((origStrings) & 0x0000ff00) << 8) | (((origStrings) & 0x00ff0000) >> 8) | (((origStrings) & 0xff000000) >> 24));
(__extension__ ({
size_t (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, void *  buffer, size_t size, size_t count);

__internal_VirtualMethod = ((size_t (*)(struct __eCNameSpace__eC__types__Instance *, void *  buffer, size_t size, size_t count))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Read]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, &transStrings, sizeof(unsigned int), 1) : (size_t)1;
}));
if(swap)
transStrings = ((((transStrings) & 0x000000ff) << 24) | (((transStrings) & 0x0000ff00) << 8) | (((transStrings) & 0x00ff0000) >> 8) | (((transStrings) & 0xff000000) >> 24));
(__extension__ ({
size_t (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, void *  buffer, size_t size, size_t count);

__internal_VirtualMethod = ((size_t (*)(struct __eCNameSpace__eC__types__Instance *, void *  buffer, size_t size, size_t count))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Read]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, &hashingSize, sizeof(unsigned int), 1) : (size_t)1;
}));
if(swap)
hashingSize = ((((hashingSize) & 0x000000ff) << 24) | (((hashingSize) & 0x0000ff00) << 8) | (((hashingSize) & 0x00ff0000) >> 8) | (((hashingSize) & 0xff000000) >> 24));
(__extension__ ({
size_t (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, void *  buffer, size_t size, size_t count);

__internal_VirtualMethod = ((size_t (*)(struct __eCNameSpace__eC__types__Instance *, void *  buffer, size_t size, size_t count))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Read]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, &hashingOffset, sizeof(unsigned int), 1) : (size_t)1;
}));
if(swap)
hashingOffset = ((((hashingOffset) & 0x000000ff) << 24) | (((hashingOffset) & 0x0000ff00) << 8) | (((hashingOffset) & 0x00ff0000) >> 8) | (((hashingOffset) & 0xff000000) >> 24));
if(!__eCNameSpace__eC__moduleMaps)
__eCNameSpace__eC__moduleMaps = __eCNameSpace__eC__types__eInstance_New(__eCClass___eCNameSpace__eC__types__Map_TPL_String__eC__types__Map_TPL_String__const_String___);
{
struct __eCNameSpace__eC__types__MapIterator it = (it.container = (void *)0, it.pointer = (void *)0, __eCProp___eCNameSpace__eC__types__MapIterator_Set_map(&it, __eCNameSpace__eC__moduleMaps), it);

if(__eCMethod___eCNameSpace__eC__types__Iterator_Index((void *)(&it), (uint64)(uintptr_t)(name), 0))
(__eCNameSpace__eC__types__eInstance_DecRef(((void * )((uintptr_t)(__eCProp___eCNameSpace__eC__types__Iterator_Get_data((void *)(&it)))))), __eCProp___eCNameSpace__eC__types__Iterator_Set_data((void *)(&it), 0));
}
__extension__ ({
struct __eCNameSpace__eC__types__Iterator __internalIterator =
{
__eCNameSpace__eC__moduleMaps, 0
};

__eCMethod___eCNameSpace__eC__types__Iterator_Index(&__internalIterator, ((uint64)(uintptr_t)(name)), 1);
__eCProp___eCNameSpace__eC__types__Iterator_Set_data(&__internalIterator, (uint64)(uintptr_t)(textMap = __eCNameSpace__eC__types__eInstance_New(__eCClass___eCNameSpace__eC__types__Map_TPL_String__const_String_)));
});
for(c = 0; c < numStrings; c++)
{
unsigned int len = 0, offset = 0;
char * original = (((void *)0)), * translated = (((void *)0));

(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, long long pos, int mode);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, long long pos, int mode))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Seek]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, origStrings + c * 2 * sizeof(unsigned int), 0) : (unsigned int)1;
}));
(__extension__ ({
size_t (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, void *  buffer, size_t size, size_t count);

__internal_VirtualMethod = ((size_t (*)(struct __eCNameSpace__eC__types__Instance *, void *  buffer, size_t size, size_t count))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Read]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, &len, sizeof(unsigned int), 1) : (size_t)1;
}));
if(swap)
len = ((((len) & 0x000000ff) << 24) | (((len) & 0x0000ff00) << 8) | (((len) & 0x00ff0000) >> 8) | (((len) & 0xff000000) >> 24));
(__extension__ ({
size_t (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, void *  buffer, size_t size, size_t count);

__internal_VirtualMethod = ((size_t (*)(struct __eCNameSpace__eC__types__Instance *, void *  buffer, size_t size, size_t count))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Read]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, &offset, sizeof(unsigned int), 1) : (size_t)1;
}));
if(swap)
offset = ((((offset) & 0x000000ff) << 24) | (((offset) & 0x0000ff00) << 8) | (((offset) & 0x00ff0000) >> 8) | (((offset) & 0xff000000) >> 24));
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, long long pos, int mode);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, long long pos, int mode))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Seek]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, offset, 0) : (unsigned int)1;
}));
original = __eCNameSpace__eC__types__eSystem_New(sizeof(unsigned char) * (len + 1));
(__extension__ ({
size_t (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, void *  buffer, size_t size, size_t count);

__internal_VirtualMethod = ((size_t (*)(struct __eCNameSpace__eC__types__Instance *, void *  buffer, size_t size, size_t count))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Read]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, original, 1, len + 1) : (size_t)1;
}));
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, long long pos, int mode);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, long long pos, int mode))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Seek]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, transStrings + c * 2 * sizeof(unsigned int), 0) : (unsigned int)1;
}));
(__extension__ ({
size_t (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, void *  buffer, size_t size, size_t count);

__internal_VirtualMethod = ((size_t (*)(struct __eCNameSpace__eC__types__Instance *, void *  buffer, size_t size, size_t count))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Read]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, &len, sizeof(unsigned int), 1) : (size_t)1;
}));
if(swap)
len = ((((len) & 0x000000ff) << 24) | (((len) & 0x0000ff00) << 8) | (((len) & 0x00ff0000) >> 8) | (((len) & 0xff000000) >> 24));
(__extension__ ({
size_t (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, void *  buffer, size_t size, size_t count);

__internal_VirtualMethod = ((size_t (*)(struct __eCNameSpace__eC__types__Instance *, void *  buffer, size_t size, size_t count))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Read]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, &offset, sizeof(unsigned int), 1) : (size_t)1;
}));
if(swap)
offset = ((((offset) & 0x000000ff) << 24) | (((offset) & 0x0000ff00) << 8) | (((offset) & 0x00ff0000) >> 8) | (((offset) & 0xff000000) >> 24));
(__extension__ ({
unsigned int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, long long pos, int mode);

__internal_VirtualMethod = ((unsigned int (*)(struct __eCNameSpace__eC__types__Instance *, long long pos, int mode))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Seek]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, offset, 0) : (unsigned int)1;
}));
translated = __eCNameSpace__eC__types__eSystem_New(sizeof(unsigned char) * (len + 1));
(__extension__ ({
size_t (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, void *  buffer, size_t size, size_t count);

__internal_VirtualMethod = ((size_t (*)(struct __eCNameSpace__eC__types__Instance *, void *  buffer, size_t size, size_t count))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = f;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__files__File->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__files__File_Read]);
__internal_VirtualMethod ? __internal_VirtualMethod(f, translated, 1, len + 1) : (size_t)1;
}));
if(len)
{
struct __eCNameSpace__eC__types__MapIterator it = (it.container = (void *)0, it.pointer = (void *)0, __eCProp___eCNameSpace__eC__types__MapIterator_Set_map(&it, textMap), it);

if(__eCMethod___eCNameSpace__eC__types__Iterator_Index((void *)(&it), (uint64)(uintptr_t)(original), 0))
(__eCNameSpace__eC__types__eSystem_Delete(translated), translated = 0);
else
__extension__ ({
struct __eCNameSpace__eC__types__Iterator __internalIterator =
{
textMap, 0
};

__eCMethod___eCNameSpace__eC__types__Iterator_Index(&__internalIterator, ((uint64)(uintptr_t)(original)), 1);
__eCProp___eCNameSpace__eC__types__Iterator_Set_data(&__internalIterator, (uint64)(uintptr_t)(translated));
});
}
else
(__eCNameSpace__eC__types__eSystem_Delete(translated), translated = 0);
(__eCNameSpace__eC__types__eSystem_Delete(original), original = 0);
}
}
else
{
printf("Invalid format while loading %s\n", fileName);
}
(__eCNameSpace__eC__types__eInstance_DecRef(f), f = 0);
}
}

void __eCNameSpace__eC__i18n__UnloadTranslatedStrings(const char * name)
{
struct __eCNameSpace__eC__types__MapIterator it = (it.container = (void *)0, it.pointer = (void *)0, __eCProp___eCNameSpace__eC__types__MapIterator_Set_map(&it, __eCNameSpace__eC__moduleMaps), it);

if(__eCMethod___eCNameSpace__eC__types__Iterator_Index((void *)(&it), (uint64)(uintptr_t)(name), 0))
{
(__extension__ ({
void (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *);

__internal_VirtualMethod = ((void (*)(struct __eCNameSpace__eC__types__Instance *))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = ((struct __eCNameSpace__eC__types__Instance *)(uintptr_t)__eCProp___eCNameSpace__eC__types__Iterator_Get_data((void *)(&it)));

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__types__Map->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__containers__Container_Free]);
__internal_VirtualMethod ? __internal_VirtualMethod(((struct __eCNameSpace__eC__types__Instance *)(uintptr_t)__eCProp___eCNameSpace__eC__types__Iterator_Get_data((void *)(&it)))) : (void)1;
}));
(__extension__ ({
void (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, struct __eCNameSpace__eC__containers__IteratorPointer * i);

__internal_VirtualMethod = ((void (*)(struct __eCNameSpace__eC__types__Instance *, struct __eCNameSpace__eC__containers__IteratorPointer * i))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = __eCNameSpace__eC__moduleMaps;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__types__Map->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__containers__Container_Delete]);
__internal_VirtualMethod ? __internal_VirtualMethod(__eCNameSpace__eC__moduleMaps, it.pointer) : (void)1;
}));
}
}

void __eCUnregisterModule_i18n(struct __eCNameSpace__eC__types__Instance * module)
{

}

void __eCRegisterModule_i18n(struct __eCNameSpace__eC__types__Instance * module)
{
struct __eCNameSpace__eC__types__Class __attribute__((unused)) * class;

__eCNameSpace__eC__types__eSystem_RegisterFunction("eC::i18n::LoadTranslatedStrings", "void eC::i18n::LoadTranslatedStrings(const String moduleName, const char * name)", __eCNameSpace__eC__i18n__LoadTranslatedStrings, module, 4);
__eCNameSpace__eC__types__eSystem_RegisterFunction("eC::i18n::UnloadTranslatedStrings", "void eC::i18n::UnloadTranslatedStrings(const String name)", __eCNameSpace__eC__i18n__UnloadTranslatedStrings, module, 4);
__eCNameSpace__eC__types__eSystem_RegisterFunction("eC::i18n::GetTranslatedString", "const char * eC::i18n::GetTranslatedString(const String name, const char * string, const char * stringAndContext)", __eCNameSpace__eC__i18n__GetTranslatedString, module, 4);
}
