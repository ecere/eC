/* Code generated from eC source file: instance.ec */
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


void * __eCNameSpace__eC__types__eSystem_Renew(void * memory, size_t size);

void * __eCNameSpace__eC__types__eSystem_Renew0(void * memory, size_t size);

void * __eCNameSpace__eC__types__eSystem_New(size_t size);

void * __eCNameSpace__eC__types__eSystem_New0(size_t size);

void __eCNameSpace__eC__types__eSystem_Delete(void * memory);

extern int __eCVMethodID_class_OnGetDataFromString;

unsigned int Instance_LocateModule(const char * name, const char * fileName);

void Instance_COM_Initialize(int argc, char ** argv, char ** parsedCommand, int * argcPtr, const char *** argvPtr);

void System_SetArgs(int argc, char ** argv, int * argcPtr, const char *** argvPtr);

void * Instance_Module_Load(const char * libLocation, const char * name, void ** Load, void ** Unload);

void Instance_Module_Free(void * library);

void __eCNameSpace__eC__types__MemoryGuard_PushLoc(const char * loc)
{
}

void __eCNameSpace__eC__types__MemoryGuard_PopLoc()
{
}

struct __eCNameSpace__eC__types__DataValue
{
union
{
double d;
long long i64;
uint64 ui64;
char c;
unsigned char uc;
short s;
unsigned short us;
int i;
unsigned int ui;
void * p;
float f;
} eC_gcc_struct __anon1;
} eC_gcc_struct;

static uint64 __eCNameSpace__eC__types__TOTAL_MEM = 0;

static uint64 __eCNameSpace__eC__types__OUTSIDE_MEM = 0;

static size_t __eCNameSpace__eC__types__log1_5i(size_t number)
{
unsigned int pos;
uint64 current = sizeof(void *);

for(pos = 0; pos < 31; pos++)
{
if(current >= number)
break;
current = current * 3 / 2;
if(current == 1)
current = 2;
if(current & 7)
current += 8 - (current & 7);
}
return pos;
}

static size_t __eCNameSpace__eC__types__pow1_5(unsigned int number)
{
unsigned int pos;
uint64 current = sizeof(void *);

for(pos = 0; pos < number; pos++)
{
current = current * 3 / 2;
if(current == 1)
current = 2;
if(current & 7)
current += 8 - (current & 7);
}
return (size_t)current;
}

static size_t __eCNameSpace__eC__types__pow1_5i(unsigned int number)
{
unsigned int pos;
uint64 current = sizeof(void *);

for(pos = 0; pos < 31; pos++)
{
if(current >= number)
return (size_t)current;
current = current * 3 / 2;
if(current == 1)
current = 2;
if(current & 7)
current += 8 - (current & 7);
}
return (size_t)current;
}

unsigned int __eCNameSpace__eC__types__log2i(unsigned int number)
{
unsigned int power;

for(power = 0; power < 32; power++)
if((1L << power) >= number)
break;
return power;
}

static unsigned int __eCNameSpace__eC__types__memoryInitialized = 0;

const size_t __eCNameSpace__eC__types__allocSizePrefixLen = sizeof(size_t);

void __eCNameSpace__eC__types__CheckConsistency()
{
}

void __eCNameSpace__eC__types__CheckMemory()
{
}

extern struct __eCNameSpace__eC__types__Property * __eCProp___eCNameSpace__eC__containers__BinaryTree_first;

extern struct __eCNameSpace__eC__types__Property * __eCProp___eCNameSpace__eC__containers__BTNode_next;

unsigned int __eCNameSpace__eC__types__DefaultFunction()
{
return 1;
}

char * strlwr(char * string)
{
int c;

for(c = 0; string[c]; c++)
if(string[c] >= 'A' && string[c] <= 'Z')
string[c] += 'a' - 'A';
return string;
}

char * strupr(char * string)
{
int c;

for(c = 0; string[c]; c++)
if(string[c] >= 'a' && string[c] <= 'z')
string[c] -= 'a' - 'A';
return string;
}

static const char * __eCNameSpace__eC__types__platformNames[4] =
{
"", "win32", "linux", "apple"
};

static const int __eCNameSpace__eC__types__firstPlatform = 1;

static const int __eCNameSpace__eC__types__lastPlatform = 3;

extern int runtimePlatform;

unsigned int __eCNameSpace__eC__types__poolingDisabled;



unsigned int ccUtf8ToUnicode(unsigned int byte, unsigned int * state, unsigned int * retunicode);

int __eCNameSpace__eC__i18n__ISO8859_1toUTF8(const char * source, char * dest, int max)
{
int c;
int d = 0;
unsigned char * byteDest = (unsigned char *)dest;

for(c = 0; source[c]; c++)
{
unsigned int ch = ((unsigned char *)source)[c];

switch(ch)
{
case 128:
ch = 0x20AC;
break;
case 130:
ch = 0x201A;
break;
case 131:
ch = 0x0192;
break;
case 132:
ch = 0x201E;
break;
case 133:
ch = 0x2026;
break;
case 134:
ch = 0x2020;
break;
case 135:
ch = 0x2021;
break;
case 136:
ch = 0x02C6;
break;
case 137:
ch = 0x2030;
break;
case 138:
ch = 0x0160;
break;
case 139:
ch = 0x2039;
break;
case 140:
ch = 0x0152;
break;
case 142:
ch = 0x017D;
break;
case 145:
ch = 0x2018;
break;
case 146:
ch = 0x2019;
break;
case 147:
ch = 0x201C;
break;
case 148:
ch = 0x201D;
break;
case 149:
ch = 0x2022;
break;
case 150:
ch = 0x2013;
break;
case 151:
ch = 0x2014;
break;
case 152:
ch = 0x02DC;
break;
case 153:
ch = 0x2122;
break;
case 154:
ch = 0x0161;
break;
case 155:
ch = 0x203A;
break;
case 156:
ch = 0x0153;
break;
case 158:
ch = 0x017E;
break;
case 159:
ch = 0x0178;
break;
}
if(ch < 0x80)
{
if(d + 1 >= max)
break;
byteDest[d++] = (char)ch;
}
else if(ch < 0x800)
{
if(d + 2 >= max)
break;
byteDest[d++] = 0xC0 | (unsigned char)((ch & 0x7C0) >> 6);
byteDest[d++] = 0x80 | (unsigned char)(ch & 0x03F);
}
else if(ch < 0x10000)
{
if(d + 3 >= max)
break;
byteDest[d++] = 0xE0 | (unsigned char)((ch & 0xF000) >> 12);
byteDest[d++] = 0x80 | (unsigned char)((ch & 0xFC0) >> 6);
byteDest[d++] = 0x80 | (unsigned char)(ch & 0x03F);
}
else
{
if(d + 4 >= max)
break;
byteDest[d++] = 0xF0 | (unsigned char)((ch & 0x1C0000) >> 18);
byteDest[d++] = 0x80 | (unsigned char)((ch & 0x3F000) >> 12);
byteDest[d++] = 0x80 | (unsigned char)((ch & 0xFC0) >> 6);
byteDest[d++] = 0x80 | (unsigned char)(ch & 0x03F);
}
}
dest[d] = 0;
return d;
}

int __eCNameSpace__eC__i18n__UTF16toUTF8Buffer(const unsigned short * source, char * dest, int max)
{
int c;
int d = 0;
unsigned short u16;
unsigned char * byteDest = (unsigned char *)dest;

for(c = 0; (u16 = source[c]); c++)
{
unsigned int ch;

if(u16 < 0xD800 || u16 > 0xDBFF)
ch = u16;
else
ch = (u16 << 10) + source[c++] + (0x10000 - (0xD800 << 10) - 0xDC00);
if(ch < 0x80)
{
if(d + 1 >= max)
break;
byteDest[d++] = (char)ch;
}
else if(ch < 0x800)
{
if(d + 2 >= max)
break;
byteDest[d++] = 0xC0 | (unsigned char)((ch & 0x7C0) >> 6);
byteDest[d++] = 0x80 | (unsigned char)(ch & 0x03F);
}
else if(ch < 0x10000)
{
if(d + 3 >= max)
break;
byteDest[d++] = 0xE0 | (unsigned char)((ch & 0xF000) >> 12);
byteDest[d++] = 0x80 | (unsigned char)((ch & 0xFC0) >> 6);
byteDest[d++] = 0x80 | (unsigned char)(ch & 0x03F);
}
else
{
if(d + 4 >= max)
break;
byteDest[d++] = 0xF0 | (unsigned char)((ch & 0x1C0000) >> 18);
byteDest[d++] = 0x80 | (unsigned char)((ch & 0x3F000) >> 12);
byteDest[d++] = 0x80 | (unsigned char)((ch & 0xFC0) >> 6);
byteDest[d++] = 0x80 | (unsigned char)(ch & 0x03F);
}
}
byteDest[d] = 0;
return d;
}

unsigned int __eCNameSpace__eC__i18n__UTF8GetChar(const char * string, int * numBytes)
{
unsigned int ch;
unsigned char b = ((unsigned char *)string)[0];
int i;
unsigned char mask = 0x7F;
int nb = b ? 1 : 0;

ch = 0;
if(b & 0x80)
{
if(b & 0x40)
{
mask >>= 2;
nb++;
if(b & 0x20)
{
nb++;
mask >>= 1;
if(b & 0x10)
{
if(b & 0x08)
{
nb = 0;
}
nb++;
mask >>= 1;
}
}
}
else
nb = 0;
}
for(i = 0; i < nb; i++)
{
ch <<= 6;
ch |= (b = ((unsigned char *)string)[i]) & mask;
mask = 0x3F;
if(i > 1 && (!(b & 0x80) || (b & 0x40)))
{
nb = 0;
ch = 0;
}
}
if(i < nb || ch > 0x10FFFF || (ch >= 0xD800 && ch <= 0xDFFF) || (ch < 0x80 && nb > 1) || (ch < 0x800 && nb > 2) || (ch < 0x10000 && nb > 3))
{
ch = 0;
nb = 0;
}
if(numBytes)
*numBytes = nb;
return ch;
}

int __eCNameSpace__eC__i18n__UTF8toUTF16Buffer(const char * source, unsigned short * dest, int max)
{
if(source)
{
int c;
int d = 0;

for(c = 0; source[c]; )
{
unsigned char ch = source[c];
unsigned int codePoint = 0;
int numBytes = 1;
int i;
unsigned char mask = 0x7F;

if(ch & 0x80 && ch & 0x40)
{
mask >>= 2;
numBytes++;
if(ch & 0x20)
{
numBytes++;
mask >>= 1;
if(ch & 0x10)
{
numBytes++;
mask >>= 1;
}
}
}
for(i = 0; i < numBytes; i++)
{
codePoint <<= 6;
codePoint |= source[c++] & mask;
mask = 0x3F;
}
if(codePoint > 0xFFFF)
{
unsigned short lead = (unsigned short)((0xD800 - (0x10000 >> 10)) + (codePoint >> 10));
unsigned short trail = (unsigned short)(0xDC00 | (codePoint & 0x3FF));

if(d >= max - 1)
break;
dest[d++] = lead;
dest[d++] = trail;
}
else
{
if(d >= max)
break;
dest[d++] = (unsigned short)codePoint;
}
}
dest[d] = 0;
return d;
}
return 0;
}

int __eCNameSpace__eC__i18n__UTF32toUTF8Len(const unsigned int * source, int count, char * dest, int max)
{
int c;
int d = 0;
unsigned int ch;
unsigned char * byteDest = (unsigned char *)dest;

for(c = 0; c < count && (ch = source[c]); c++)
{
if(ch < 0x80)
{
if(d + 1 >= max)
break;
byteDest[d++] = (char)ch;
}
else if(ch < 0x800)
{
if(d + 2 >= max)
break;
byteDest[d++] = 0xC0 | (unsigned char)((ch & 0x7C0) >> 6);
byteDest[d++] = 0x80 | (unsigned char)(ch & 0x03F);
}
else if(ch < 0x10000)
{
if(d + 3 >= max)
break;
byteDest[d++] = 0xE0 | (unsigned char)((ch & 0xF000) >> 12);
byteDest[d++] = 0x80 | (unsigned char)((ch & 0xFC0) >> 6);
byteDest[d++] = 0x80 | (unsigned char)(ch & 0x03F);
}
else
{
if(d + 4 >= max)
break;
byteDest[d++] = 0xF0 | (unsigned char)((ch & 0x1C0000) >> 18);
byteDest[d++] = 0x80 | (unsigned char)((ch & 0x3F000) >> 12);
byteDest[d++] = 0x80 | (unsigned char)((ch & 0xFC0) >> 6);
byteDest[d++] = 0x80 | (unsigned char)(ch & 0x03F);
}
}
byteDest[d] = 0;
return d;
}

void __eCNameSpace__eC__types__queryMemInfo(char * string)
{
}

void __eCNameSpace__eC__types__eSystem_LockMem()
{
}

void __eCNameSpace__eC__types__eSystem_UnlockMem()
{
}

struct __eCNameSpace__eC__containers__OldList
{
void *  first;
void *  last;
int count;
unsigned int offset;
unsigned int circ;
} eC_gcc_struct;

struct __eCNameSpace__eC__types__SerialBuffer
{
unsigned char *  _buffer;
size_t count;
size_t _size;
size_t pos;
} eC_gcc_struct;

extern void *  memset(void *  area, int value, size_t count);

extern void *  memcpy(void * , const void * , size_t size);

extern char *  strchr(const char * , int);

extern int printf(const char * , ...);

extern char *  __eCNameSpace__eC__types__CopyString(const char *  string);

extern void *  memmove(void * , const void * , size_t size);

extern int strcmp(const char * , const char * );

extern char *  strncpy(char * , const char * , size_t n);

extern char *  __eCNameSpace__eC__types__RSearchString(const char *  buffer, const char *  subStr, int maxLen, unsigned int matchCase, unsigned int matchWord);

extern size_t strlen(const char * );

extern char *  strcpy(char * , const char * );

extern char *  strstr(const char * , const char * );

extern int isspace(int c);

extern int strncmp(const char * , const char * , size_t n);

extern char *  strcat(char * , const char * );

extern char *  __eCNameSpace__eC__types__TrimRSpaces(const char *  string, char *  output);

extern unsigned long strtoul(const char *  nptr, char * *  endptr, int base);

extern double strtod(const char * , char * * );

extern int sprintf(char * , const char * , ...);

extern char *  __eCNameSpace__eC__types__GetLastDirectory(const char *  string, char *  output);

extern char *  __eCNameSpace__eC__types__GetExtension(const char *  string, char *  output);

extern unsigned int __eCNameSpace__eC__types__StripExtension(char *  string);

extern int strcasecmp(const char * , const char * );

extern double sin(double number);

extern double sinh(double number);

extern double cosh(double number);

extern double tanh(double number);

extern double sqrt(double number);

extern double cos(double number);

extern double tan(double number);

extern double atan2(double y, double x);

extern double asin(double number);

extern double acos(double number);

extern double atan(double number);

extern double asinh(double number);

extern double acosh(double number);

extern double atanh(double number);

extern double pow(double number, double number2);

extern double fmod(double x, double y);

extern double fabs(double number);

extern double log(double number);

extern double log10(double number);

extern double ceil(double number);

extern double floor(double number);

extern double exp(double number);

extern void qsort(void * , size_t, size_t, int (* )(void * , void * ));

extern int system(const char * );

extern int atoi(const char * );

extern double atof(const char * );

extern char *  getenv(const char *  name);

extern int rename(const char *  oldpath, const char *  newpath);

extern char *  strncat(char * , const char * , size_t n);

extern size_t strspn(const char * , const char * );

extern size_t strcspn(const char * , const char * );

extern char *  strpbrk(const char * , const char * );

extern int strncasecmp(const char * , const char * , size_t n);

extern int memcmp(const void * , const void * , size_t size);

extern int vsprintf(char * , const char * , __builtin_va_list);

extern int puts(const char * );

extern int fputs(const char * , void *  stream);

extern int tolower(int);

extern int toupper(int);

extern unsigned int isdigit(int);

extern unsigned int isxdigit(int);

extern int isalnum(int c);

extern int isalpha(int c);

extern int islower(int c);

extern int isupper(int c);

extern int isprint(int c);

extern int isblank(int c);

extern int __eCVMethodID_class_OnGetString;

const char *  __eCProp___eCNameSpace__eC__types__Platform_Get_char__PTR_(int this);

int __eCProp___eCNameSpace__eC__types__Platform_Set_char__PTR_(const char *  value);

char * __eCNameSpace__eC__i18n__UTF16toUTF8(const unsigned short * source)
{
int c;
int d = 0;
int len;
unsigned char * dest;
unsigned short u16;
unsigned int invert = 0;

for(len = 0; source[len]; len++)
;
dest = __eCNameSpace__eC__types__eSystem_New(sizeof(unsigned char) * (len * 3 + 1));
for(c = 0; (u16 = source[c]); c++)
{
unsigned int ch;

if(!c && (u16 == 0xFFFE || u16 == 0xFEFF))
{
if(u16 == 0xFFFE)
invert = 1;
continue;
}
if(invert)
{
u16 = ((u16 & 0xFF00) >> 8) | ((u16 & 0x00FF) << 8);
}
if(u16 < 0xD800 || u16 > 0xDBFF)
ch = u16;
else
ch = (u16 << 10) + source[c++] + (0x10000 - (0xD800 << 10) - 0xDC00);
if(ch < 0x80)
{
dest[d++] = (char)ch;
}
else if(ch < 0x800)
{
dest[d++] = 0xC0 | (unsigned char)((ch & 0x7C0) >> 6);
dest[d++] = 0x80 | (unsigned char)(ch & 0x03F);
}
else if(ch < 0x10000)
{
dest[d++] = 0xE0 | (unsigned char)((ch & 0xF000) >> 12);
dest[d++] = 0x80 | (unsigned char)((ch & 0xFC0) >> 6);
dest[d++] = 0x80 | (unsigned char)(ch & 0x03F);
}
else
{
dest[d++] = 0xF0 | (unsigned char)((ch & 0x1C0000) >> 18);
dest[d++] = 0x80 | (unsigned char)((ch & 0x3F000) >> 12);
dest[d++] = 0x80 | (unsigned char)((ch & 0xFC0) >> 6);
dest[d++] = 0x80 | (unsigned char)(ch & 0x03F);
}
}
dest[d] = 0;
dest = __eCNameSpace__eC__types__eSystem_Renew(dest, sizeof(unsigned char) * (d + 1));
return (char *)dest;
}

unsigned int __eCNameSpace__eC__types__LocateModule(const char * name, const char * fileName)
{
return Instance_LocateModule(name, fileName);
}

unsigned int __eCNameSpace__eC__types__pow2i(unsigned int number)
{
return 1 << __eCNameSpace__eC__types__log2i(number);
}

int __eCNameSpace__eC__types__GetRuntimePlatform()
{
return runtimePlatform;
}

void __eCNameSpace__eC__types__eSystem_SetPoolingDisabled(unsigned int disabled)
{
__eCNameSpace__eC__types__poolingDisabled = disabled;
}

static inline unsigned int __eCNameSpace__eC__i18n__decodeUTF8(unsigned int b, unsigned int * state, unsigned int * retCodePoint)
{
return ccUtf8ToUnicode(b, state, retCodePoint);
}

struct __eCNameSpace__eC__types__EnumClassData
{
struct __eCNameSpace__eC__containers__OldList values;
long long largest;
} eC_gcc_struct;

void __eCMethod___eCNameSpace__eC__containers__OldList_Delete(struct __eCNameSpace__eC__containers__OldList * this, void *  item);

void __eCMethod___eCNameSpace__eC__containers__OldList_Remove(struct __eCNameSpace__eC__containers__OldList * this, void *  item);

unsigned int __eCMethod___eCNameSpace__eC__containers__OldList_Insert(struct __eCNameSpace__eC__containers__OldList * this, void *  prevItem, void *  item);

void __eCMethod___eCNameSpace__eC__containers__OldList_Add(struct __eCNameSpace__eC__containers__OldList * this, void *  item);

void __eCMethod___eCNameSpace__eC__containers__OldList_Free(struct __eCNameSpace__eC__containers__OldList * this, void (*  freeFn)(void * ));

void __eCNameSpace__eC__types__memswap(unsigned char * a, unsigned char * b, size_t size)
{
unsigned int c;
unsigned char buffer[1024];

for(c = 0; c < size; )
{
int s = sizeof (buffer);

if(c + s > size)
s = size - c;
memcpy(buffer, a + c, s);
memcpy(a + c, b + c, s);
memcpy(b + c, buffer, s);
c += s;
}
}

unsigned short * __eCNameSpace__eC__i18n__UTF8toUTF16(const char * source, int * wordCount)
{
if(source)
{
int len = (int)strlen(source);
unsigned short * dest = __eCNameSpace__eC__types__eSystem_New(sizeof(unsigned short) * (len + 1));
int c;
int d = 0;

for(c = 0; source[c]; )
{
unsigned char ch = source[c];
unsigned int codePoint = 0;
int numBytes = 1;
int i;
unsigned char mask = 0x7F;

if(ch & 0x80 && ch & 0x40)
{
mask >>= 2;
numBytes++;
if(ch & 0x20)
{
numBytes++;
mask >>= 1;
if(ch & 0x10)
{
numBytes++;
mask >>= 1;
}
}
}
for(i = 0; i < numBytes; i++)
{
codePoint <<= 6;
codePoint |= source[c++] & mask;
mask = 0x3F;
}
if(codePoint > 0xFFFF)
{
unsigned short lead = (unsigned short)((0xD800 - (0x10000 >> 10)) + (codePoint >> 10));
unsigned short trail = (unsigned short)(0xDC00 | (codePoint & 0x3FF));

dest[d++] = lead;
dest[d++] = trail;
}
else
{
dest[d++] = (unsigned short)codePoint;
}
}
dest[d] = 0;
if(wordCount)
*wordCount = d;
return dest;
}
return (((void *)0));
}

long long __eCNameSpace__eC__types___strtoi64(const char * string, const char ** endString, int base)
{
long long value = 0;
int sign = 1;
int c;
char ch;

for(c = 0; (ch = string[c]) && isspace(ch); c++)
;
if(ch == '+')
c++;
else if(ch == '-')
{
sign = -1;
c++;
}
;
if(!base)
{
if(ch == '0' && string[c + 1] == 'x')
{
base = 16;
c += 2;
}
else if(ch == '0')
{
base = 8;
c++;
}
else
base = 10;
}
for(; (ch = string[c]); c++)
{
if(ch >= '0' && ch <= '9')
ch -= '0';
else if(ch >= 'a' && ch <= 'z')
ch -= ('a' - 10);
else if(ch >= 'A' && ch <= 'Z')
ch -= ('A' - 10);
else
break;
if(ch < base)
{
value *= base;
value += ch;
}
else
break;
}
if(endString)
*endString = string + c;
return sign * value;
}

uint64 __eCNameSpace__eC__types___strtoui64(const char * string, const char ** endString, int base)
{
uint64 value = 0;
int sign = 1;
int c;
char ch;

for(c = 0; (ch = string[c]) && isspace(ch); c++)
;
if(ch == '+')
c++;
else if(ch == '-')
{
sign = -1;
c++;
}
;
if(!base)
{
if(ch == '0' && string[c + 1] == 'x')
{
base = 16;
c += 2;
}
else if(ch == '0')
{
base = 8;
c++;
}
else
base = 10;
}
for(; (ch = string[c]); c++)
{
if(ch >= '0' && ch <= '9')
ch -= '0';
else if(ch >= 'a' && ch <= 'z')
ch -= ('a' - 10);
else if(ch >= 'A' && ch <= 'Z')
ch -= ('A' - 10);
else
break;
if(ch < base)
{
value *= base;
value += ch;
}
else
break;
}
if(endString)
*endString = string + c;
return sign * value;
}

int __eCProp___eCNameSpace__eC__types__Platform_Set_char__PTR_(const char *  value)
{
if(value)
{
int c;

for(c = __eCNameSpace__eC__types__firstPlatform; c <= __eCNameSpace__eC__types__lastPlatform; c++)
if(!strcasecmp(value, __eCNameSpace__eC__types__platformNames[c]))
return c;
}
return 0;
}

unsigned int __eCNameSpace__eC__i18n__UTF8Validate(const char * source)
{
if(source)
{
const unsigned char * s = (const unsigned char *)source;
unsigned int codepoint;
unsigned int state = 0;

while(*s)
__eCNameSpace__eC__i18n__decodeUTF8(*s++, &state, &codepoint);
return state == 0;
}
return 1;
}

struct __eCNameSpace__eC__types__Class;

struct __eCNameSpace__eC__types__Instance
{
void * *  _vTbl;
struct __eCNameSpace__eC__types__Class * _class;
int _refCount;
} eC_gcc_struct;

void * __eCNameSpace__eC__types__eInstance_New(struct __eCNameSpace__eC__types__Class * _class);

struct __eCNameSpace__eC__types__DesignerBase
{
struct __eCNameSpace__eC__types__Instance * classDesigner;
const char * objectClass;
unsigned int isDragging;
} eC_gcc_struct;

extern int __eCVMethodID___eCNameSpace__eC__types__ClassDesignerBase_Reset;

extern int __eCVMethodID___eCNameSpace__eC__types__ClassDesignerBase_AddObject;

extern int __eCVMethodID___eCNameSpace__eC__types__ClassDesignerBase_DestroyObject;

extern int __eCVMethodID___eCNameSpace__eC__types__ClassDesignerBase_CreateNew;

void __eCMethod___eCNameSpace__eC__types__IOChannel_Serialize(struct __eCNameSpace__eC__types__Instance * this, struct __eCNameSpace__eC__types__Class * class, const void * data);

void __eCMethod___eCNameSpace__eC__types__IOChannel_Unserialize(struct __eCNameSpace__eC__types__Instance * this, struct __eCNameSpace__eC__types__Class * class, void * *  data);

extern int __eCVMethodID___eCNameSpace__eC__types__DesignerBase_FindObject;

extern int __eCVMethodID___eCNameSpace__eC__types__DesignerBase_AddToolBoxClass;

extern int __eCVMethodID___eCNameSpace__eC__types__DesignerBase_AddDefaultMethod;

extern int __eCVMethodID___eCNameSpace__eC__types__DesignerBase_ModifyCode;

extern int __eCVMethodID___eCNameSpace__eC__types__DesignerBase_UpdateProperties;

extern int __eCVMethodID___eCNameSpace__eC__types__ClassDesignerBase_ListToolBoxClasses;

extern int __eCVMethodID___eCNameSpace__eC__types__ClassDesignerBase_PrepareTestObject;

struct __eCNameSpace__eC__types__Instance * __eCProp___eCNameSpace__eC__types__DesignerBase_Get_classDesigner(struct __eCNameSpace__eC__types__Instance * this);

void __eCProp___eCNameSpace__eC__types__DesignerBase_Set_classDesigner(struct __eCNameSpace__eC__types__Instance * this, struct __eCNameSpace__eC__types__Instance * value);

const char *  __eCProp___eCNameSpace__eC__types__DesignerBase_Get_objectClass(struct __eCNameSpace__eC__types__Instance * this);

void __eCProp___eCNameSpace__eC__types__DesignerBase_Set_objectClass(struct __eCNameSpace__eC__types__Instance * this, const char *  value);

unsigned int __eCProp___eCNameSpace__eC__types__DesignerBase_Get_isDragging(struct __eCNameSpace__eC__types__Instance * this);

void __eCProp___eCNameSpace__eC__types__DesignerBase_Set_isDragging(struct __eCNameSpace__eC__types__Instance * this, unsigned int value);

struct __eCNameSpace__eC__types__Instance * __eCNameSpace__eC__types__activeDesigner;

void __eCNameSpace__eC__types__SetActiveDesigner(struct __eCNameSpace__eC__types__Instance * designer)
{
__eCNameSpace__eC__types__activeDesigner = designer;
}

struct __eCNameSpace__eC__types__Instance * __eCNameSpace__eC__types__GetActiveDesigner()
{
return __eCNameSpace__eC__types__activeDesigner;
}

struct __eCNameSpace__eC__types__BTNamedLink;

struct __eCNameSpace__eC__types__BTNamedLink
{
const char * name;
struct __eCNameSpace__eC__types__BTNamedLink * parent, * left, * right;
int depth;
void * data;
} eC_gcc_struct;

struct __eCNameSpace__eC__types__SelfWatcher;

struct __eCNameSpace__eC__types__Property;

struct __eCNameSpace__eC__types__Property
{
struct __eCNameSpace__eC__types__Property * prev, * next;
const char * name;
unsigned int isProperty;
int memberAccess;
int id;
struct __eCNameSpace__eC__types__Class * _class;
const char * dataTypeString;
struct __eCNameSpace__eC__types__Class * dataTypeClass;
struct __eCNameSpace__eC__types__Instance * dataType;
void (* Set)(void *, int);
int (* Get)(void *);
unsigned int (* IsSet)(void *);
void * data;
void * symbol;
int vid;
unsigned int conversion;
unsigned int watcherOffset;
const char * category;
unsigned int compiled;
unsigned int selfWatchable, isWatchable;
} eC_gcc_struct;

extern int __eCVMethodID___eCNameSpace__eC__types__ClassDesignerBase_FixProperty;

void __eCNameSpace__eC__types__eInstance_FireWatchers(struct __eCNameSpace__eC__types__Instance * instance, struct __eCNameSpace__eC__types__Property * _property);

struct __eCNameSpace__eC__types__SelfWatcher
{
struct __eCNameSpace__eC__types__SelfWatcher * prev, * next;
void (* callback)(void *);
struct __eCNameSpace__eC__types__Property * _property;
} eC_gcc_struct;

static __attribute__((unused)) struct __eCNameSpace__eC__types__Property * __eCProp___eCNameSpace__eC__types__Class_char__PTR_, * __eCPropM___eCNameSpace__eC__types__Class_char__PTR_;

static __attribute__((unused)) struct __eCNameSpace__eC__types__Property * __eCProp___eCNameSpace__eC__types__Platform_char__PTR_, * __eCPropM___eCNameSpace__eC__types__Platform_char__PTR_;

static __attribute__((unused)) struct __eCNameSpace__eC__types__Property * __eCProp___eCNameSpace__eC__types__DesignerBase_classDesigner, * __eCPropM___eCNameSpace__eC__types__DesignerBase_classDesigner;

static __attribute__((unused)) struct __eCNameSpace__eC__types__Property * __eCProp___eCNameSpace__eC__types__DesignerBase_objectClass, * __eCPropM___eCNameSpace__eC__types__DesignerBase_objectClass;

static __attribute__((unused)) struct __eCNameSpace__eC__types__Property * __eCProp___eCNameSpace__eC__types__DesignerBase_isDragging, * __eCPropM___eCNameSpace__eC__types__DesignerBase_isDragging;

struct __eCNameSpace__eC__types__DefinedExpression;

struct __eCNameSpace__eC__types__MemBlock;

struct __eCNameSpace__eC__types__BlockPool
{
struct __eCNameSpace__eC__types__MemBlock * first, * last;
struct __eCNameSpace__eC__types__MemBlock * free;
size_t blockSize;
size_t blockSpace;
int numParts;
int numBlocks;
size_t totalSize;
size_t usedSpace;
} eC_gcc_struct;

struct __eCNameSpace__eC__types__MemPart
{
void * memory;
int blocksUsed;
ssize_t size;
struct __eCNameSpace__eC__types__BlockPool * pool;
} eC_gcc_struct;

static struct __eCNameSpace__eC__types__BlockPool * __eCNameSpace__eC__types__pools;

struct __eCNameSpace__eC__types__MemBlock
{
struct __eCNameSpace__eC__types__MemBlock * prev, * next;
struct __eCNameSpace__eC__types__MemPart * part;
size_t size;
} eC_gcc_struct;

unsigned int __eCMethod___eCNameSpace__eC__types__BlockPool_Expand(struct __eCNameSpace__eC__types__BlockPool * this, unsigned int numBlocks)
{
unsigned char * memory = malloc((size_t)numBlocks * this->blockSpace);

__eCNameSpace__eC__types__TOTAL_MEM += (uint64)numBlocks * this->blockSpace;
if(memory)
{
int c;
struct __eCNameSpace__eC__types__MemBlock * block = (struct __eCNameSpace__eC__types__MemBlock *)memory;
struct __eCNameSpace__eC__types__MemPart * part = calloc(1, sizeof(struct __eCNameSpace__eC__types__MemPart));

__eCNameSpace__eC__types__TOTAL_MEM += sizeof(struct __eCNameSpace__eC__types__MemPart);
this->free = block;
for(c = 0; c < numBlocks - 1; c++)
{
block->part = part;
block->prev = (((void *)0));
block->next = (struct __eCNameSpace__eC__types__MemBlock *)((unsigned char *)block + this->blockSpace);
block = block->next;
}
part->blocksUsed = 0;
part->pool = this;
part->memory = memory;
part->size = numBlocks;
block->part = part;
block->prev = (((void *)0));
block->next = (((void *)0));
this->totalSize += numBlocks;
this->numParts++;
return 1;
}
return 0;
}

void __eCMethod___eCNameSpace__eC__types__BlockPool_Remove(struct __eCNameSpace__eC__types__BlockPool * this, struct __eCNameSpace__eC__types__MemBlock * block)
{
struct __eCNameSpace__eC__types__MemPart * part = block->part;

if(block->prev)
block->prev->next = block->next;
if(block->next)
block->next->prev = block->prev;
if(this->first == block)
this->first = block->next;
if(this->last == block)
this->last = block->prev;
block->next = this->free;
this->free = block;
part->blocksUsed--;
this->numBlocks--;
(*part->pool).usedSpace -= block->size;
if(!part->blocksUsed && this->numBlocks && this->totalSize > this->numBlocks + this->numBlocks / 2)
{
struct __eCNameSpace__eC__types__MemBlock * next = this->free, * prev = (((void *)0));

this->free = (((void *)0));
this->totalSize -= part->size;
while(next)
{
if(next->part != part)
{
if(prev)
prev->next = next;
else
this->free = next;
prev = next;
}
next = next->next;
}
;
if(prev)
prev->next = (((void *)0));
__eCNameSpace__eC__types__TOTAL_MEM -= (uint64)part->size * this->blockSpace;
__eCNameSpace__eC__types__TOTAL_MEM -= sizeof(struct __eCNameSpace__eC__types__MemPart);
this->numParts--;
free(part->memory);
free(part);
}
}

struct __eCNameSpace__eC__types__MemBlock * __eCMethod___eCNameSpace__eC__types__BlockPool_Add(struct __eCNameSpace__eC__types__BlockPool * this)
{
int __simpleStruct0;
struct __eCNameSpace__eC__types__MemBlock * block = (((void *)0));

if(!this->free)
__eCMethod___eCNameSpace__eC__types__BlockPool_Expand(this, (__simpleStruct0 = this->numBlocks / 2, (1 > __simpleStruct0) ? 1 : __simpleStruct0));
if(this->free)
{
block = this->free;
block->prev = this->last;
if(block->prev)
block->prev->next = block;
if(!this->first)
this->first = block;
this->last = block;
this->free = block->next;
block->next = (((void *)0));
block->part->blocksUsed++;
this->numBlocks++;
}
return block;
}

static void __eCNameSpace__eC__types__InitMemory()
{
int c;

__eCNameSpace__eC__types__memoryInitialized = 1;
__eCNameSpace__eC__types__pools = calloc(1, sizeof(struct __eCNameSpace__eC__types__BlockPool) * 31);
for(c = 0; c < 31; c++)
{
int expansion;

__eCNameSpace__eC__types__pools[c].blockSize = __eCNameSpace__eC__types__pow1_5(c);
if(__eCNameSpace__eC__types__pools[c].blockSize % sizeof(void *))
__eCNameSpace__eC__types__pools[c].blockSize += sizeof(void *) - (__eCNameSpace__eC__types__pools[c].blockSize % sizeof(void *));
__eCNameSpace__eC__types__pools[c].blockSpace = __eCNameSpace__eC__types__pools[c].blockSize;
__eCNameSpace__eC__types__pools[c].blockSpace += sizeof(struct __eCNameSpace__eC__types__MemBlock);
expansion = (__eCNameSpace__eC__types__pools[c].blockSize < 128) ? 1024 : (131072 / __eCNameSpace__eC__types__pools[c].blockSize);
if(c < 12)
__eCMethod___eCNameSpace__eC__types__BlockPool_Expand(&__eCNameSpace__eC__types__pools[c], ((1 > expansion) ? 1 : expansion));
}
}

static void __eCNameSpace__eC__types___myfree(void * pointer)
{
if(pointer)
{
struct __eCNameSpace__eC__types__MemBlock * block = (struct __eCNameSpace__eC__types__MemBlock *)((unsigned char *)pointer - sizeof(struct __eCNameSpace__eC__types__MemBlock));
struct __eCNameSpace__eC__types__MemPart * part = block->part;
struct __eCNameSpace__eC__types__BlockPool * pool = part ? part->pool : (((void *)0));

if(pool)
{
__eCMethod___eCNameSpace__eC__types__BlockPool_Remove((&*pool), block);
}
else
{
__eCNameSpace__eC__types__TOTAL_MEM -= sizeof(struct __eCNameSpace__eC__types__MemBlock) + block->size;
__eCNameSpace__eC__types__OUTSIDE_MEM -= sizeof(struct __eCNameSpace__eC__types__MemBlock) + block->size;
free(block);
}
}
}

static void * __eCNameSpace__eC__types___mymalloc(size_t size)
{
struct __eCNameSpace__eC__types__MemBlock * block = (((void *)0));

if(size)
{
unsigned int p = __eCNameSpace__eC__types__log1_5i(size);

if(!__eCNameSpace__eC__types__memoryInitialized)
__eCNameSpace__eC__types__InitMemory();
if(!__eCNameSpace__eC__types__poolingDisabled && p < 31)
{
block = __eCMethod___eCNameSpace__eC__types__BlockPool_Add(&__eCNameSpace__eC__types__pools[p]);
if(block)
{
block->size = size;
__eCNameSpace__eC__types__pools[p].usedSpace += size;
}
}
else
{
block = malloc(sizeof(struct __eCNameSpace__eC__types__MemBlock) + size);
if(block)
{
__eCNameSpace__eC__types__TOTAL_MEM += sizeof(struct __eCNameSpace__eC__types__MemBlock) + size;
__eCNameSpace__eC__types__OUTSIDE_MEM += sizeof(struct __eCNameSpace__eC__types__MemBlock) + size;
block->part = (((void *)0));
block->size = size;
}
}
}
return block ? ((struct __eCNameSpace__eC__types__MemBlock *)block + 1) : (((void *)0));
}

static void __eCNameSpace__eC__types___free(void * pointer)
{
if(pointer)
{
__eCNameSpace__eC__types___myfree(pointer);
}
}

static void * __eCNameSpace__eC__types___mycalloc(int n, size_t size)
{
void * pointer = __eCNameSpace__eC__types___mymalloc(n * size);

if(pointer)
memset(pointer, 0, n * size);
return pointer;
}

static void * __eCNameSpace__eC__types___myrealloc(void * pointer, size_t size)
{
struct __eCNameSpace__eC__types__MemBlock * block = pointer ? ((struct __eCNameSpace__eC__types__MemBlock *)((unsigned char *)pointer - sizeof(struct __eCNameSpace__eC__types__MemBlock))) : (((void *)0));
void * newPointer = (((void *)0));
struct __eCNameSpace__eC__types__MemPart * part = block ? block->part : (((void *)0));
struct __eCNameSpace__eC__types__BlockPool * pool = part ? part->pool : (((void *)0));

if(block)
{
if(pool)
{
size_t ns = __eCNameSpace__eC__types__pow1_5i(size);
size_t mod = ns % sizeof(void *);

if(mod)
ns += sizeof(void *) - mod;
if(ns == (*pool).blockSize)
{
newPointer = pointer;
(*pool).usedSpace += size - block->size;
block->size = size;
}
}
else if(size)
{
struct __eCNameSpace__eC__types__MemBlock * newBlock = realloc(block, sizeof(struct __eCNameSpace__eC__types__MemBlock) + size);

if(newBlock)
{
__eCNameSpace__eC__types__TOTAL_MEM += size - newBlock->size;
__eCNameSpace__eC__types__OUTSIDE_MEM += size - newBlock->size;
newPointer = ((struct __eCNameSpace__eC__types__MemBlock *)newBlock + 1);
newBlock->size = size;
}
}
}
if(!newPointer)
{
newPointer = __eCNameSpace__eC__types___mymalloc(size);
if(pointer && newPointer)
{
size_t __simpleStruct0;

memcpy(newPointer, pointer, (__simpleStruct0 = block->size, (size < __simpleStruct0) ? size : __simpleStruct0));
__eCNameSpace__eC__types___myfree(pointer);
}
}
return newPointer;
}

static void * __eCNameSpace__eC__types___mycrealloc(void * pointer, size_t size)
{
struct __eCNameSpace__eC__types__MemBlock * block = pointer ? ((struct __eCNameSpace__eC__types__MemBlock *)((unsigned char *)pointer - sizeof(struct __eCNameSpace__eC__types__MemBlock))) : (((void *)0));
void * newPointer = (((void *)0));
struct __eCNameSpace__eC__types__MemPart * part = block ? block->part : (((void *)0));
struct __eCNameSpace__eC__types__BlockPool * pool = part ? part->pool : (((void *)0));

if(block)
{
if(pool)
{
size_t ns = __eCNameSpace__eC__types__pow1_5i(size);
size_t mod = ns % sizeof(void *);

if(mod)
ns += sizeof(void *) - mod;
if(ns == (*pool).blockSize)
{
ssize_t extra = size - block->size;

newPointer = pointer;
(*pool).usedSpace += extra;
if(extra > 0)
memset((unsigned char *)pointer + block->size, 0, extra);
block->size = size;
}
}
else if(size)
{
struct __eCNameSpace__eC__types__MemBlock * newBlock = realloc(block, sizeof(struct __eCNameSpace__eC__types__MemBlock) + size);

if(newBlock)
{
ssize_t extra = size - newBlock->size;

__eCNameSpace__eC__types__TOTAL_MEM += extra;
__eCNameSpace__eC__types__OUTSIDE_MEM += extra;
newPointer = ((struct __eCNameSpace__eC__types__MemBlock *)newBlock + 1);
if(extra > 0)
memset((unsigned char *)newPointer + newBlock->size, 0, extra);
newBlock->size = size;
}
}
}
if(!newPointer)
{
newPointer = __eCNameSpace__eC__types___mymalloc(size);
if(newPointer)
{
if(pointer)
{
size_t __simpleStruct0;

memcpy(newPointer, pointer, (__simpleStruct0 = block->size, (size < __simpleStruct0) ? size : __simpleStruct0));
if(size > block->size)
memset((unsigned char *)newPointer + block->size, 0, size - block->size);
__eCNameSpace__eC__types___myfree(pointer);
}
else
memset((unsigned char *)newPointer, 0, size);
}
}
return newPointer;
}

static void * __eCNameSpace__eC__types___malloc(size_t size)
{
void * pointer;

pointer = size ? __eCNameSpace__eC__types___mymalloc(size + 2 * 0) : (((void *)0));
return pointer ? ((unsigned char *)pointer + 0) : (((void *)0));
}

void __eCNameSpace__eC__types__eSystem_Delete(void * memory)
{
if(memory)
__eCNameSpace__eC__types___free(memory);
}

static void * __eCNameSpace__eC__types___calloc(int n, size_t size)
{
void * pointer;

pointer = n && size ? __eCNameSpace__eC__types___mycalloc(1, n * size + 2 * 0) : (((void *)0));
return pointer ? ((unsigned char *)pointer + 0) : (((void *)0));
}

static void * __eCNameSpace__eC__types___realloc(void * pointer, size_t size)
{
if(!size)
{
__eCNameSpace__eC__types___free(pointer);
return (((void *)0));
}
pointer = __eCNameSpace__eC__types___myrealloc(pointer, size);
return pointer ? ((unsigned char *)pointer + 0) : (((void *)0));
}

static void * __eCNameSpace__eC__types___crealloc(void * pointer, size_t size)
{
if(!size)
{
if(pointer)
__eCNameSpace__eC__types___free(pointer);
return (((void *)0));
}
pointer = __eCNameSpace__eC__types___mycrealloc(pointer, size);
return pointer ? ((unsigned char *)pointer + 0) : (((void *)0));
}

void * __eCNameSpace__eC__types__eSystem_New(size_t size)
{
return __eCNameSpace__eC__types___malloc(size);
}

void * __eCNameSpace__eC__types__eSystem_New0(size_t size)
{
return __eCNameSpace__eC__types___calloc(1, size);
}

void * __eCNameSpace__eC__types__eSystem_Renew(void * memory, size_t size)
{
return __eCNameSpace__eC__types___realloc(memory, size);
}

void * __eCNameSpace__eC__types__eSystem_Renew0(void * memory, size_t size)
{
return __eCNameSpace__eC__types___crealloc(memory, size);
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

struct __eCNameSpace__eC__containers__BTNode * __eCProp___eCNameSpace__eC__containers__BTNode_Get_next(struct __eCNameSpace__eC__containers__BTNode * this);

struct __eCNameSpace__eC__containers__OldLink;

struct __eCNameSpace__eC__containers__OldLink
{
struct __eCNameSpace__eC__containers__OldLink * prev;
struct __eCNameSpace__eC__containers__OldLink * next;
void *  data;
} eC_gcc_struct;

struct __eCNameSpace__eC__containers__OldLink * __eCMethod___eCNameSpace__eC__containers__OldList_FindLink(struct __eCNameSpace__eC__containers__OldList * this, void *  data);

struct __eCNameSpace__eC__containers__NamedLink64;

struct __eCNameSpace__eC__containers__NamedLink64
{
struct __eCNameSpace__eC__containers__NamedLink64 * prev;
struct __eCNameSpace__eC__containers__NamedLink64 * next;
char *  name;
long long data;
} eC_gcc_struct;

static void __eCNameSpace__eC__types__FreeEnumValue(struct __eCNameSpace__eC__containers__NamedLink64 * value)
{
(__eCNameSpace__eC__types__eSystem_Delete(value->name), value->name = 0);
}

static void *  __eCNameSpace__eC__types__Instance_New(struct __eCNameSpace__eC__types__Class *  _class, unsigned int bindingsAlloc);

void * __eCNameSpace__eC__types__eInstance_New(struct __eCNameSpace__eC__types__Class * _class)
{
return __eCNameSpace__eC__types__Instance_New(_class, 1);
}

void * __eCNameSpace__eC__types__eInstance_NewEx(struct __eCNameSpace__eC__types__Class * _class, unsigned int bindingsAlloc)
{
return __eCNameSpace__eC__types__Instance_New(_class, bindingsAlloc);
}

struct __eCNameSpace__eC__types__Method;

struct __eCNameSpace__eC__types__Method
{
const char * name;
struct __eCNameSpace__eC__types__Method * parent, * left, * right;
int depth;
int (* function)();
int vid;
int type;
struct __eCNameSpace__eC__types__Class * _class;
void * symbol;
const char * dataTypeString;
struct __eCNameSpace__eC__types__Instance * dataType;
int memberAccess;
} eC_gcc_struct;

struct __eCNameSpace__eC__types__ObjectInfo;

struct __eCNameSpace__eC__types__ObjectInfo
{
struct __eCNameSpace__eC__types__ObjectInfo * prev, * next;
struct __eCNameSpace__eC__types__Instance * instance;
char * name;
struct __eCNameSpace__eC__types__Instance * instCode;
unsigned int deleted;
struct __eCNameSpace__eC__types__ObjectInfo * oClass;
struct __eCNameSpace__eC__containers__OldList instances;
struct __eCNameSpace__eC__types__Instance * classDefinition;
unsigned int modified;
void * i18nStrings;
} eC_gcc_struct;

extern int __eCVMethodID___eCNameSpace__eC__types__DesignerBase_RenameObject;

extern int __eCVMethodID___eCNameSpace__eC__types__DesignerBase_SelectObjectFromDesigner;

extern int __eCVMethodID___eCNameSpace__eC__types__DesignerBase_CodeAddObject;

extern int __eCVMethodID___eCNameSpace__eC__types__DesignerBase_SheetAddObject;

extern int __eCVMethodID___eCNameSpace__eC__types__DesignerBase_DeleteObject;

extern int __eCVMethodID___eCNameSpace__eC__types__DesignerBase_ObjectContainsCode;

extern int __eCVMethodID___eCNameSpace__eC__types__ClassDesignerBase_SelectObject;

extern int __eCVMethodID___eCNameSpace__eC__types__ClassDesignerBase_CreateObject;

extern int __eCVMethodID___eCNameSpace__eC__types__ClassDesignerBase_PostCreateObject;

extern int __eCVMethodID___eCNameSpace__eC__types__ClassDesignerBase_DroppedObject;

struct __eCNameSpace__eC__types__Module;

struct __eCNameSpace__eC__types__Class * __eCNameSpace__eC__types__eSystem_FindClass(struct __eCNameSpace__eC__types__Instance * module, const char * name);

extern unsigned int __eCDll_Load_ecrt(struct __eCNameSpace__eC__types__Instance * module);

extern unsigned int __eCDll_Unload_ecrt(struct __eCNameSpace__eC__types__Instance * module);

extern struct __eCNameSpace__eC__types__Instance * __thisModule;

extern void __eCNameSpace__eC__types__InitializeDataTypes1(struct __eCNameSpace__eC__types__Instance * module);

extern void __eCNameSpace__eC__types__InitializeDataTypes(struct __eCNameSpace__eC__types__Instance * module);

struct __eCNameSpace__eC__types__Class * __eCProp___eCNameSpace__eC__types__Class_Set_char__PTR_(const char *  value)
{
struct __eCNameSpace__eC__types__Class * theClass = __eCNameSpace__eC__types__eSystem_FindClass(__thisModule, value);

return theClass;
}

struct __eCNameSpace__eC__types__BitMember;

struct __eCNameSpace__eC__types__BitMember
{
struct __eCNameSpace__eC__types__BitMember * prev, * next;
const char * name;
unsigned int isProperty;
int memberAccess;
int id;
struct __eCNameSpace__eC__types__Class * _class;
const char * dataTypeString;
struct __eCNameSpace__eC__types__Class * dataTypeClass;
struct __eCNameSpace__eC__types__Instance * dataType;
int type;
int size;
int pos;
uint64 mask;
} eC_gcc_struct;

struct __eCNameSpace__eC__types__ClassProperty;

struct __eCNameSpace__eC__types__ClassProperty
{
const char * name;
struct __eCNameSpace__eC__types__ClassProperty * parent, * left, * right;
int depth;
void (* Set)(struct __eCNameSpace__eC__types__Class *, long long);
long long (* Get)(struct __eCNameSpace__eC__types__Class *);
const char * dataTypeString;
struct __eCNameSpace__eC__types__Instance * dataType;
unsigned int constant;
} eC_gcc_struct;

struct __eCNameSpace__eC__types__Watcher;

struct __eCNameSpace__eC__types__Watcher
{
struct __eCNameSpace__eC__types__Watcher * prev, * next;
void (* callback)(void *, void *);
struct __eCNameSpace__eC__types__Instance * object;
} eC_gcc_struct;

void __eCNameSpace__eC__types__eInstance_Watch(struct __eCNameSpace__eC__types__Instance * instance, struct __eCNameSpace__eC__types__Property * _property, void * object, void (* callback)(void *, void *))
{
if(_property->isWatchable)
{
struct __eCNameSpace__eC__containers__OldList * watchers = (struct __eCNameSpace__eC__containers__OldList *)((unsigned char *)instance + _property->watcherOffset);

__eCMethod___eCNameSpace__eC__containers__OldList_Add((&*watchers), __extension__ ({
struct __eCNameSpace__eC__types__Watcher * __eCInstance1 = __eCNameSpace__eC__types__eSystem_New0(sizeof(struct __eCNameSpace__eC__types__Watcher));

__eCInstance1->callback = callback, __eCInstance1->object = object, __eCInstance1;
}));
}
}

struct __eCNameSpace__eC__types__NameSpace;

struct __eCNameSpace__eC__types__DefinedExpression
{
struct __eCNameSpace__eC__types__DefinedExpression * prev, * next;
const char * name;
const char * value;
struct __eCNameSpace__eC__types__NameSpace * nameSpace;
} eC_gcc_struct;

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
const char * name;
struct __eCNameSpace__eC__types__NameSpace * btParent, * left, * right;
int depth;
struct __eCNameSpace__eC__types__NameSpace * parent;
struct __eCNameSpace__eC__containers__BinaryTree nameSpaces;
struct __eCNameSpace__eC__containers__BinaryTree classes;
struct __eCNameSpace__eC__containers__BinaryTree defines;
struct __eCNameSpace__eC__containers__BinaryTree functions;
} eC_gcc_struct;

struct __eCNameSpace__eC__containers__BTNode * __eCProp___eCNameSpace__eC__containers__BinaryTree_Get_first(struct __eCNameSpace__eC__containers__BinaryTree * this);

struct __eCNameSpace__eC__containers__BTNode * __eCMethod___eCNameSpace__eC__containers__BinaryTree_FindString(struct __eCNameSpace__eC__containers__BinaryTree * this, const char *  key);

void __eCMethod___eCNameSpace__eC__containers__BinaryTree_Delete(struct __eCNameSpace__eC__containers__BinaryTree * this, struct __eCNameSpace__eC__containers__BTNode * node);

int __eCMethod___eCNameSpace__eC__containers__BinaryTree_CompareString(struct __eCNameSpace__eC__containers__BinaryTree * this, const char *  a, const char *  b);

unsigned int __eCMethod___eCNameSpace__eC__containers__BinaryTree_Add(struct __eCNameSpace__eC__containers__BinaryTree * this, struct __eCNameSpace__eC__containers__BTNode * node);

struct __eCNameSpace__eC__containers__BTNode * __eCMethod___eCNameSpace__eC__containers__BinaryTree_Find(struct __eCNameSpace__eC__containers__BinaryTree * this, uintptr_t key);

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

static void __eCNameSpace__eC__types__NameSpace_Free(struct __eCNameSpace__eC__types__NameSpace * parentNameSpace)
{
struct __eCNameSpace__eC__types__NameSpace * nameSpace;

(__eCNameSpace__eC__types__eSystem_Delete((void *)parentNameSpace->name), parentNameSpace->name = 0);
while((nameSpace = (struct __eCNameSpace__eC__types__NameSpace *)__eCProp___eCNameSpace__eC__containers__BinaryTree_Get_first(&parentNameSpace->nameSpaces)))
{
__eCNameSpace__eC__types__NameSpace_Free(nameSpace);
__eCMethod___eCNameSpace__eC__containers__BinaryTree_Delete(&parentNameSpace->nameSpaces, (struct __eCNameSpace__eC__containers__BTNode *)nameSpace);
}
}

static struct __eCNameSpace__eC__types__BTNamedLink * __eCNameSpace__eC__types__ScanNameSpace(struct __eCNameSpace__eC__types__NameSpace * nameSpace, const char * name, void * listOffset)
{
struct __eCNameSpace__eC__containers__BinaryTree * tree = (struct __eCNameSpace__eC__containers__BinaryTree *)((unsigned char *)nameSpace + (uintptr_t)listOffset);
struct __eCNameSpace__eC__types__BTNamedLink * link = (struct __eCNameSpace__eC__types__BTNamedLink *)__eCMethod___eCNameSpace__eC__containers__BinaryTree_Find((&*tree), (uintptr_t)name);
struct __eCNameSpace__eC__types__NameSpace * child;

if(!link)
{
for(child = (struct __eCNameSpace__eC__types__NameSpace *)__eCProp___eCNameSpace__eC__containers__BinaryTree_Get_first(&nameSpace->nameSpaces); child; child = (struct __eCNameSpace__eC__types__NameSpace *)__eCProp___eCNameSpace__eC__containers__BTNode_Get_next(((struct __eCNameSpace__eC__containers__BTNode *)child)))
{
link = __eCNameSpace__eC__types__ScanNameSpace(child, name, listOffset);
if(link)
break;
}
}
return link;
}

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

static struct __eCNameSpace__eC__types__BTNamedLink * __eCNameSpace__eC__types__SearchNameSpace(struct __eCNameSpace__eC__types__NameSpace * nameSpace, const char * name, void * listOffset)
{
int start = 0, c;
char ch;
int level = 0;

for(c = 0; (ch = name[c]); c++)
{
if(ch == '<')
level++;
if(ch == '>')
level--;
if(level == 0 && (ch == '.' || (ch == ':' && name[c + 1] == ':')))
{
struct __eCNameSpace__eC__types__NameSpace * newSpace;
int len = c - start;
char * spaceName = __eCNameSpace__eC__types___malloc(len + 1);

if(len)
memcpy(spaceName, name + start, len);
spaceName[len] = '\0';
newSpace = (struct __eCNameSpace__eC__types__NameSpace *)__eCMethod___eCNameSpace__eC__containers__BinaryTree_FindString(&nameSpace->nameSpaces, spaceName);
__eCNameSpace__eC__types___free(spaceName);
if(!newSpace)
return (((void *)0));
nameSpace = newSpace;
if(level == 0 && ch == ':')
c++;
start = c + 1;
}
}
if(c - start)
{
return __eCNameSpace__eC__types__ScanNameSpace(nameSpace, name + start, listOffset);
}
return (((void *)0));
}

void __eCUnregisterModule_instance(struct __eCNameSpace__eC__types__Instance * module)
{

__eCPropM___eCNameSpace__eC__types__DesignerBase_classDesigner = (void *)0;
__eCPropM___eCNameSpace__eC__types__DesignerBase_objectClass = (void *)0;
__eCPropM___eCNameSpace__eC__types__DesignerBase_isDragging = (void *)0;
}

struct __eCNameSpace__eC__types__DataMember;

struct __eCNameSpace__eC__types__DataMember
{
struct __eCNameSpace__eC__types__DataMember * prev, * next;
const char * name;
unsigned int isProperty;
int memberAccess;
int id;
struct __eCNameSpace__eC__types__Class * _class;
const char * dataTypeString;
struct __eCNameSpace__eC__types__Class * dataTypeClass;
struct __eCNameSpace__eC__types__Instance * dataType;
int type;
int offset;
int memberID;
struct __eCNameSpace__eC__containers__OldList members;
struct __eCNameSpace__eC__containers__BinaryTree membersAlpha;
int memberOffset;
short structAlignment;
short pointerAlignment;
} eC_gcc_struct;

struct __eCNameSpace__eC__types__ClassTemplateArgument
{
union
{
struct
{
const char * dataTypeString;
struct __eCNameSpace__eC__types__Class * dataTypeClass;
} eC_gcc_struct __anon1;
struct __eCNameSpace__eC__types__DataValue expression;
struct
{
const char * memberString;
union
{
struct __eCNameSpace__eC__types__DataMember * member;
struct __eCNameSpace__eC__types__Property * prop;
struct __eCNameSpace__eC__types__Method * method;
} eC_gcc_struct __anon1;
} eC_gcc_struct __anon2;
} eC_gcc_struct __anon1;
} eC_gcc_struct;

static void __eCNameSpace__eC__types__DataMember_Free(struct __eCNameSpace__eC__types__DataMember * parentMember)
{
struct __eCNameSpace__eC__types__DataMember * member;
struct __eCNameSpace__eC__types__BTNamedLink * namedLink;

(__eCNameSpace__eC__types__eSystem_Delete((void *)parentMember->name), parentMember->name = 0);
(__eCNameSpace__eC__types__eSystem_Delete((void *)parentMember->dataTypeString), parentMember->dataTypeString = 0);
while((member = parentMember->members.first))
{
__eCNameSpace__eC__types__DataMember_Free(member);
__eCMethod___eCNameSpace__eC__containers__OldList_Delete(&parentMember->members, member);
}
while((namedLink = (struct __eCNameSpace__eC__types__BTNamedLink *)__eCProp___eCNameSpace__eC__containers__BinaryTree_Get_first(&parentMember->membersAlpha)))
{
__eCMethod___eCNameSpace__eC__containers__BinaryTree_Delete(&parentMember->membersAlpha, (struct __eCNameSpace__eC__containers__BTNode *)namedLink);
}
}

static struct __eCNameSpace__eC__types__DataMember * __eCNameSpace__eC__types__FindDataMember(struct __eCNameSpace__eC__containers__OldList * list, struct __eCNameSpace__eC__containers__BinaryTree * alist, const char * name, unsigned int * offset, int * id, unsigned int searchPrivate, struct __eCNameSpace__eC__types__DataMember ** subMemberStack, int * subMemberStackPos)
{
struct __eCNameSpace__eC__types__BTNamedLink * link;
struct __eCNameSpace__eC__types__DataMember * dataMember;

link = (struct __eCNameSpace__eC__types__BTNamedLink *)__eCMethod___eCNameSpace__eC__containers__BinaryTree_FindString(alist, name);
if(link)
{
dataMember = link->data;
if(dataMember->type == 0 && (dataMember->memberAccess == 1 || searchPrivate || !dataMember->dataTypeString))
{
if(offset)
*offset += dataMember->offset;
if(id)
*id = dataMember->id;
return dataMember;
}
return (((void *)0));
}
for(dataMember = list->first; dataMember; dataMember = dataMember->next)
{
if(!dataMember->isProperty && (dataMember->memberAccess == 1 || searchPrivate) && !dataMember->name && (dataMember->type == 1 || dataMember->type == 2))
{
struct __eCNameSpace__eC__types__DataMember * childMember;

if(subMemberStackPos)
subMemberStack[(*subMemberStackPos)++] = dataMember;
childMember = __eCNameSpace__eC__types__FindDataMember(&dataMember->members, &dataMember->membersAlpha, name, offset, id, searchPrivate, subMemberStack, subMemberStackPos);
if(childMember)
{
if(offset)
*offset += dataMember->offset;
if(id)
*id += dataMember->id;
return childMember;
}
if(subMemberStackPos)
(*subMemberStackPos)--;
}
}
return (((void *)0));
}

static void __eCNameSpace__eC__types__SetMemberClass(struct __eCNameSpace__eC__types__DataMember * member, struct __eCNameSpace__eC__types__Class * _class)
{
struct __eCNameSpace__eC__types__DataMember * dataMember;

member->_class = _class;
for(dataMember = member->members.first; dataMember; dataMember = dataMember->next)
__eCNameSpace__eC__types__SetMemberClass(dataMember, _class);
}

struct __eCNameSpace__eC__types__DataMember * __eCNameSpace__eC__types__eMember_New(int type, int declMode)
{
return __extension__ ({
struct __eCNameSpace__eC__types__DataMember * __eCInstance1 = __eCNameSpace__eC__types__eSystem_New0(sizeof(struct __eCNameSpace__eC__types__DataMember));

__eCInstance1->type = type, __eCInstance1->memberAccess = declMode, __eCInstance1->membersAlpha.CompareKey = (void *)__eCMethod___eCNameSpace__eC__containers__BinaryTree_CompareString, __eCInstance1;
});
}

struct __eCNameSpace__eC__types__Class
{
struct __eCNameSpace__eC__types__Class * prev, * next;
const char * name;
int offset, structSize;
void ** _vTbl;
int vTblSize;
unsigned int (* Constructor)(void *);
void (* Destructor)(void *);
int offsetClass, sizeClass;
struct __eCNameSpace__eC__types__Class * base;
struct __eCNameSpace__eC__containers__BinaryTree methods;
struct __eCNameSpace__eC__containers__BinaryTree members;
struct __eCNameSpace__eC__containers__BinaryTree prop;
struct __eCNameSpace__eC__containers__OldList membersAndProperties;
struct __eCNameSpace__eC__containers__BinaryTree classProperties;
struct __eCNameSpace__eC__containers__OldList derivatives;
int memberID, startMemberID;
int type;
struct __eCNameSpace__eC__types__Instance * module;
struct __eCNameSpace__eC__types__NameSpace * nameSpace;
const char * dataTypeString;
struct __eCNameSpace__eC__types__Instance * dataType;
int typeSize;
int defaultAlignment;
void (* Initialize)();
int memberOffset;
struct __eCNameSpace__eC__containers__OldList selfWatchers;
const char * designerClass;
unsigned int noExpansion;
const char * defaultProperty;
unsigned int comRedefinition;
int count;
int isRemote;
unsigned int internalDecl;
void * data;
unsigned int computeSize;
short structAlignment;
short pointerAlignment;
int destructionWatchOffset;
unsigned int fixed;
struct __eCNameSpace__eC__containers__OldList delayedCPValues;
int inheritanceAccess;
const char * fullName;
void * symbol;
struct __eCNameSpace__eC__containers__OldList conversions;
struct __eCNameSpace__eC__containers__OldList templateParams;
struct __eCNameSpace__eC__types__ClassTemplateArgument * templateArgs;
struct __eCNameSpace__eC__types__Class * templateClass;
struct __eCNameSpace__eC__containers__OldList templatized;
int numParams;
unsigned int isInstanceClass;
unsigned int byValueSystemClass;
void * bindingsClass;
} eC_gcc_struct;

static struct __eCNameSpace__eC__types__Class * __eCClass___eCNameSpace__eC__types__Angle;

static struct __eCNameSpace__eC__types__Class * __eCClass_unichar;

static struct __eCNameSpace__eC__types__Class * __eCClass___eCNameSpace__eC__types__Property;

static struct __eCNameSpace__eC__types__Class * __eCClass___eCNameSpace__eC__types__BTNamedLink;

static struct __eCNameSpace__eC__types__Class * __eCClass___eCNameSpace__eC__types__SelfWatcher;

static struct __eCNameSpace__eC__types__Class * __eCClass___eCNameSpace__eC__types__AccessMode;

static struct __eCNameSpace__eC__types__Class * __eCClass___eCNameSpace__eC__types__SubModule;

static struct __eCNameSpace__eC__types__Class * __eCClass___eCNameSpace__eC__types__DataMemberType;

static struct __eCNameSpace__eC__types__Class * __eCClass___eCNameSpace__eC__types__ClassType;

static struct __eCNameSpace__eC__types__Class * __eCClass___eCNameSpace__eC__types__Class;

static struct __eCNameSpace__eC__types__Class * __eCClass___eCNameSpace__eC__types__TemplateParameterType;

static struct __eCNameSpace__eC__types__Class * __eCClass___eCNameSpace__eC__types__TemplateMemberType;

static struct __eCNameSpace__eC__types__Class * __eCClass___eCNameSpace__eC__types__ClassTemplateArgument;

static struct __eCNameSpace__eC__types__Class * __eCClass___eCNameSpace__eC__types__ClassTemplateParameter;

static struct __eCNameSpace__eC__types__Class * __eCClass___eCNameSpace__eC__types__MethodType;

static struct __eCNameSpace__eC__types__Class * __eCClass___eCNameSpace__eC__types__Method;

static struct __eCNameSpace__eC__types__Class * __eCClass___eCNameSpace__eC__types__ImportType;

static struct __eCNameSpace__eC__types__Class * __eCClass___eCNameSpace__eC__types__NameSpace;

static struct __eCNameSpace__eC__types__Class * __eCClass___eCNameSpace__eC__types__DataValue;

static struct __eCNameSpace__eC__types__Class * __eCClass___eCNameSpace__eC__types__DataMember;

static struct __eCNameSpace__eC__types__Class * __eCClass___eCNameSpace__eC__types__BitMember;

static struct __eCNameSpace__eC__types__Class * __eCClass___eCNameSpace__eC__types__ClassProperty;

static struct __eCNameSpace__eC__types__Class * __eCClass___eCNameSpace__eC__types__DefinedExpression;

static struct __eCNameSpace__eC__types__Class * __eCClass___eCNameSpace__eC__types__GlobalFunction;

static struct __eCNameSpace__eC__types__Class * __eCClass___eCNameSpace__eC__types__EnumClassData;

static struct __eCNameSpace__eC__types__Class * __eCClass___eCNameSpace__eC__types__Watcher;

static struct __eCNameSpace__eC__types__Class * __eCClass___eCNameSpace__eC__types__MemBlock;

static struct __eCNameSpace__eC__types__Class * __eCClass___eCNameSpace__eC__types__MemPart;

static struct __eCNameSpace__eC__types__Class * __eCClass___eCNameSpace__eC__types__BlockPool;

static struct __eCNameSpace__eC__types__Class * __eCClass___eCNameSpace__eC__types__Platform;

static struct __eCNameSpace__eC__types__Class * __eCClass___eCNameSpace__eC__types__ObjectInfo;

static struct __eCNameSpace__eC__types__Class * __eCClass___eCNameSpace__eC__types__DesignerBase;

static struct __eCNameSpace__eC__types__Class * __eCClass___eCNameSpace__eC__types__ClassDesignerBase;

const char * __eCMethod_unichar_OnGetString(struct __eCNameSpace__eC__types__Class * class, unsigned int * this, char * tempString, void * fieldData, unsigned int * onType)
{
__eCNameSpace__eC__i18n__UTF32toUTF8Len(&(*this), 1, tempString, 5);
return tempString;
}

unsigned int __eCMethod_unichar_OnGetDataFromString(struct __eCNameSpace__eC__types__Class * class, unsigned int * this, const char * string)
{
int nb;

(*this) = __eCNameSpace__eC__i18n__UTF8GetChar(string, &nb);
return 1;
}

const char *  __eCProp___eCNameSpace__eC__types__Class_Get_char__PTR_(struct __eCNameSpace__eC__types__Class * this)
{
return this->name;
}

const char * __eCMethod___eCNameSpace__eC__types__Class_OnGetString(struct __eCNameSpace__eC__types__Class * class, struct __eCNameSpace__eC__types__Class * this, char * tempString, void * fieldData, unsigned int * onType)
{
return this->name;
}

void __eCMethod___eCNameSpace__eC__types__Class_OnFree(struct __eCNameSpace__eC__types__Class * class, struct __eCNameSpace__eC__types__Class * this)
{
}

static void __eCNameSpace__eC__types__FixDerivativeVirtualMethod(struct __eCNameSpace__eC__types__Class * base, const char * name, int vid, void * origFunction, const char * type)
{
struct __eCNameSpace__eC__containers__OldLink * derivative;

for(derivative = base->derivatives.first; derivative; derivative = derivative->next)
{
struct __eCNameSpace__eC__types__Class * _class = derivative->data;
struct __eCNameSpace__eC__types__Method * method, * next;
void * function = origFunction;

_class->vTblSize++;
_class->_vTbl = __eCNameSpace__eC__types__eSystem_Renew(_class->_vTbl, sizeof(void *) * (_class->vTblSize));
memmove(_class->_vTbl + vid + 1, _class->_vTbl + vid, (_class->vTblSize - vid - 1) * sizeof(void *));
method = (struct __eCNameSpace__eC__types__Method *)__eCMethod___eCNameSpace__eC__containers__BinaryTree_FindString(&_class->methods, name);
if(method)
{
if(method->function)
function = method->function;
if(!method->symbol)
{
(__eCNameSpace__eC__types__eSystem_Delete((void *)method->name), method->name = 0);
(__eCNameSpace__eC__types__eSystem_Delete((void *)method->dataTypeString), method->dataTypeString = 0);
__eCMethod___eCNameSpace__eC__containers__BinaryTree_Delete(&_class->methods, (struct __eCNameSpace__eC__containers__BTNode *)method);
}
else
{
(__eCNameSpace__eC__types__eSystem_Delete((void *)method->dataTypeString), method->dataTypeString = 0);
method->type = 1;
method->dataTypeString = __eCNameSpace__eC__types__CopyString(type);
method->_class = base;
}
}
for(method = (struct __eCNameSpace__eC__types__Method *)__eCProp___eCNameSpace__eC__containers__BinaryTree_Get_first(&_class->methods); method; method = next)
{
next = (struct __eCNameSpace__eC__types__Method *)__eCProp___eCNameSpace__eC__containers__BTNode_Get_next(((struct __eCNameSpace__eC__containers__BTNode *)method));
if(method->type == 1)
method->vid++;
}
_class->_vTbl[vid] = function;
{
struct __eCNameSpace__eC__containers__OldLink * templateLink;

for(templateLink = _class->templatized.first; templateLink; templateLink = templateLink->next)
{
struct __eCNameSpace__eC__types__Class * template = templateLink->data;

template->_vTbl = _class->_vTbl;
}
}
if(_class->derivatives.first || _class->templatized.first)
__eCNameSpace__eC__types__FixDerivativeVirtualMethod(_class, name, vid, function, type);
}
{
struct __eCNameSpace__eC__containers__OldLink * templateLink;

for(templateLink = base->templatized.first; templateLink; templateLink = templateLink->next)
{
struct __eCNameSpace__eC__types__Class * template = templateLink->data;

template->_vTbl = base->_vTbl;
__eCNameSpace__eC__types__FixDerivativeVirtualMethod(template, name, vid, origFunction, type);
}
}
}

static void __eCNameSpace__eC__types__FixDerivativeProperty(struct __eCNameSpace__eC__types__Class * base, struct __eCNameSpace__eC__types__Property * _property)
{
struct __eCNameSpace__eC__containers__OldLink * derivative;

for(derivative = base->derivatives.first; derivative; derivative = derivative->next)
{
struct __eCNameSpace__eC__types__Class * _class = derivative->data;
struct __eCNameSpace__eC__types__Property * prop;
struct __eCNameSpace__eC__types__BTNamedLink * link = (struct __eCNameSpace__eC__types__BTNamedLink *)__eCMethod___eCNameSpace__eC__containers__BinaryTree_FindString(&_class->prop, _property->name);

if(link)
{
prop = link->data;
if(!prop->Set && !prop->Get && prop->memberAccess == 4)
{
struct __eCNameSpace__eC__types__SelfWatcher * watcher;

for(watcher = _class->selfWatchers.first; watcher; watcher = watcher->next)
{
if(watcher->_property == prop)
watcher->_property = _property;
}
_property->selfWatchable = 1;
(__eCNameSpace__eC__types__eSystem_Delete((void *)prop->name), prop->name = 0);
(__eCNameSpace__eC__types__eSystem_Delete((void *)prop->dataTypeString), prop->dataTypeString = 0);
__eCMethod___eCNameSpace__eC__containers__OldList_Delete(&_class->membersAndProperties, prop);
__eCMethod___eCNameSpace__eC__containers__BinaryTree_Delete(&_class->prop, (struct __eCNameSpace__eC__containers__BTNode *)link);
}
}
for(prop = _class->membersAndProperties.first; prop; prop = prop->next)
prop->id++;
_class->memberID++;
_class->startMemberID++;
__eCNameSpace__eC__types__FixDerivativeProperty(_class, _property);
}
}

static void __eCNameSpace__eC__types__SetDelayedCPValues(struct __eCNameSpace__eC__types__Class * _class, struct __eCNameSpace__eC__types__ClassProperty * _property)
{
struct __eCNameSpace__eC__containers__OldLink * deriv;
struct __eCNameSpace__eC__containers__NamedLink64 * value, * next;

for(value = _class->delayedCPValues.first; value; value = next)
{
next = value->next;
if(!strcmp(value->name, _property->name))
{
_property->Set(_class, value->data);
__eCMethod___eCNameSpace__eC__containers__OldList_Delete(&_class->delayedCPValues, value);
}
}
for(deriv = _class->derivatives.first; deriv; deriv = deriv->next)
{
__eCNameSpace__eC__types__SetDelayedCPValues(deriv->data, _property);
}
}

struct __eCNameSpace__eC__types__ClassProperty * __eCNameSpace__eC__types__eClass_FindClassProperty(struct __eCNameSpace__eC__types__Class * _class, const char * name)
{
struct __eCNameSpace__eC__types__ClassProperty * _property = (((void *)0));

if(name && _class)
{
struct __eCNameSpace__eC__types__Class * origClass = _class;

for(; _class; _class = _class->base)
{
_property = (struct __eCNameSpace__eC__types__ClassProperty *)__eCMethod___eCNameSpace__eC__containers__BinaryTree_FindString(&_class->classProperties, name);
if(_property)
break;
}
if(!_property && origClass->type == 4)
{
struct __eCNameSpace__eC__types__Class * enumClass = __eCNameSpace__eC__types__eSystem_FindClass(origClass->module, "enum");

_property = __eCNameSpace__eC__types__eClass_FindClassProperty(enumClass, name);
}
}
return _property;
}

struct __eCNameSpace__eC__types__Method * __eCNameSpace__eC__types__eClass_FindMethod(struct __eCNameSpace__eC__types__Class * _class, const char * name, struct __eCNameSpace__eC__types__Instance * module)
{
if(_class && name)
{
for(; _class; _class = _class->base)
{
struct __eCNameSpace__eC__types__Method * method;

if(_class->templateClass)
_class = _class->templateClass;
method = (struct __eCNameSpace__eC__types__Method *)__eCMethod___eCNameSpace__eC__containers__BinaryTree_FindString(&_class->methods, name);
if(method && (method->memberAccess == 1 || _class->module == module || !method->dataTypeString))
{
if(!method->dataTypeString)
{
if(_class->module != module)
{
if(method->memberAccess == 1)
module = _class->module;
else
{
return (((void *)0));
}
}
}
else
{
return method;
}
}
if(_class->inheritanceAccess == 2 && _class->module != module)
break;
}
}
return (((void *)0));
}

static unsigned int __eCNameSpace__eC__types__ConstructInstance(void * instance, struct __eCNameSpace__eC__types__Class * _class, struct __eCNameSpace__eC__types__Class * from, unsigned int bindingsAlloc)
{
if(_class->templateClass)
_class = _class->templateClass;
if(_class->base && from != _class->base)
{
if(!__eCNameSpace__eC__types__ConstructInstance(instance, _class->base, from, 0))
return 0;
}
if(_class->Initialize)
{
void (* Initialize)(struct __eCNameSpace__eC__types__Instance * module) = (void *)_class->Initialize;

_class->Initialize = (((void *)0));
Initialize(_class->module);
}
if(_class->Constructor)
{
unsigned int result;

if(_class->bindingsClass)
result = ((unsigned int (*)(void *, unsigned int))(void *)_class->Constructor)(instance, bindingsAlloc);
else
result = _class->Constructor(instance);
if(!result)
{
for(; _class; _class = _class->base)
{
if(_class->templateClass)
_class = _class->templateClass;
if(_class->Destructor)
_class->Destructor(instance);
}
return 0;
}
}
(_class->templateClass ? _class->templateClass : _class)->count++;
return 1;
}

struct __eCNameSpace__eC__types__Property * __eCNameSpace__eC__types__eClass_FindProperty(struct __eCNameSpace__eC__types__Class * _class, const char * name, struct __eCNameSpace__eC__types__Instance * module)
{
if(_class && name)
{
if(!strncmp(name, "const ", 6))
name += 6;
for(; _class; _class = _class->base)
{
struct __eCNameSpace__eC__types__BTNamedLink * link;

if(_class->templateClass)
_class = _class->templateClass;
link = (struct __eCNameSpace__eC__types__BTNamedLink *)__eCMethod___eCNameSpace__eC__containers__BinaryTree_FindString(&_class->prop, name);
if(link)
{
struct __eCNameSpace__eC__types__Property * _property = (struct __eCNameSpace__eC__types__Property *)link->data;

if(_property->memberAccess == 1 || _class->module == module || !_property->dataTypeString)
{
if(!_property->dataTypeString)
{
if(_class->module != module)
{
if(_property->memberAccess == 1)
module = _class->module;
else
{
return (((void *)0));
}
}
}
else
{
return _property;
}
}
}
if(_class->inheritanceAccess == 2 && _class->module != module)
break;
}
}
return (((void *)0));
}

struct __eCNameSpace__eC__types__DataMember * __eCNameSpace__eC__types__eClass_FindDataMember(struct __eCNameSpace__eC__types__Class * _class, const char * name, struct __eCNameSpace__eC__types__Instance * module, struct __eCNameSpace__eC__types__DataMember ** subMemberStack, int * subMemberStackPos)
{
struct __eCNameSpace__eC__types__DataMember * dataMember = (((void *)0));

if(subMemberStackPos)
*subMemberStackPos = 0;
if(_class && name)
{
for(; _class; _class = _class->base)
{
if(_class->templateClass)
_class = _class->templateClass;
dataMember = __eCNameSpace__eC__types__FindDataMember(&_class->membersAndProperties, &_class->members, name, (((void *)0)), (((void *)0)), _class->module == module, subMemberStack, subMemberStackPos);
if(dataMember)
{
if(!dataMember->dataTypeString)
{
if(_class->module != module)
{
if(dataMember->memberAccess == 1)
module = _class->module;
else
{
return (((void *)0));
}
}
dataMember = (((void *)0));
}
else
{
dataMember->_class = _class->templateClass ? _class->templateClass : _class;
return dataMember;
}
}
if(_class->inheritanceAccess == 2 && _class->module != module)
break;
}
}
return dataMember;
}

struct __eCNameSpace__eC__types__DataMember * __eCNameSpace__eC__types__eClass_FindDataMemberAndOffset(struct __eCNameSpace__eC__types__Class * _class, const char * name, unsigned int * offset, struct __eCNameSpace__eC__types__Instance * module, struct __eCNameSpace__eC__types__DataMember ** subMemberStack, int * subMemberStackPos)
{
struct __eCNameSpace__eC__types__DataMember * dataMember = (((void *)0));

if(subMemberStackPos)
*subMemberStackPos = 0;
if(offset)
*offset = 0;
if(_class)
{
for(; _class; _class = _class->base)
{
if(_class->templateClass)
_class = _class->templateClass;
dataMember = __eCNameSpace__eC__types__FindDataMember(&_class->membersAndProperties, &_class->members, name, offset, (((void *)0)), _class->module == module, subMemberStack, subMemberStackPos);
if(dataMember)
{
if(!dataMember->dataTypeString)
{
if(_class->module != module)
{
if(dataMember->memberAccess == 1)
module = _class->module;
else
{
return (((void *)0));
}
}
dataMember = (((void *)0));
}
else
{
dataMember->_class = _class;
return dataMember;
}
}
if(_class->inheritanceAccess == 2 && _class->module != module)
break;
}
}
return dataMember;
}

struct __eCNameSpace__eC__types__DataMember * __eCNameSpace__eC__types__eClass_FindDataMemberAndId(struct __eCNameSpace__eC__types__Class * _class, const char * name, int * id, struct __eCNameSpace__eC__types__Instance * module, struct __eCNameSpace__eC__types__DataMember ** subMemberStack, int * subMemberStackPos)
{
struct __eCNameSpace__eC__types__DataMember * dataMember = (((void *)0));

if(subMemberStackPos)
*subMemberStackPos = 0;
if(_class)
{
for(; _class; _class = _class->base)
{
if(_class->templateClass)
_class = _class->templateClass;
dataMember = __eCNameSpace__eC__types__FindDataMember(&_class->membersAndProperties, &_class->members, name, (((void *)0)), id, _class->module == module, subMemberStack, subMemberStackPos);
if(dataMember)
{
if(!dataMember->dataTypeString)
{
if(_class->module != module)
{
if(dataMember->memberAccess == 1)
module = _class->module;
else
{
return (((void *)0));
}
}
dataMember = (((void *)0));
}
else
{
dataMember->_class = _class;
return dataMember;
}
}
if(_class->inheritanceAccess == 2 && _class->module != module)
break;
}
}
return dataMember;
}

static void __eCNameSpace__eC__types__FixOffsets(struct __eCNameSpace__eC__types__Class * _class)
{
struct __eCNameSpace__eC__containers__OldLink * deriv;

_class->structSize += _class->base->structSize - _class->offset;
_class->offset = _class->base->structSize;
for(deriv = _class->derivatives.first; deriv; deriv = deriv->next)
__eCNameSpace__eC__types__FixOffsets(deriv->data);
}

void __eCNameSpace__eC__types__eEnum_AddFixedValue(struct __eCNameSpace__eC__types__Class * _class, const char * string, long long value)
{
if(_class && _class->type == 4)
{
struct __eCNameSpace__eC__types__EnumClassData * data = (struct __eCNameSpace__eC__types__EnumClassData *)_class->data;
struct __eCNameSpace__eC__containers__NamedLink64 * item;

for(item = data->values.first; item; item = item->next)
if(!strcmp(item->name, string))
break;
if(!item)
{
__eCMethod___eCNameSpace__eC__containers__OldList_Add(&data->values, __extension__ ({
struct __eCNameSpace__eC__containers__NamedLink64 * __eCInstance1 = __eCNameSpace__eC__types__eSystem_New0(sizeof(struct __eCNameSpace__eC__containers__NamedLink64));

__eCInstance1->data = value, __eCInstance1->name = __eCNameSpace__eC__types__CopyString(string), __eCInstance1;
}));
if(value > data->largest)
data->largest = value;
}
}
}

long long __eCNameSpace__eC__types__eEnum_AddValue(struct __eCNameSpace__eC__types__Class * _class, const char * string)
{
if(_class && _class->type == 4)
{
struct __eCNameSpace__eC__types__EnumClassData * data = (struct __eCNameSpace__eC__types__EnumClassData *)_class->data;
long long value = data->largest + 1;
struct __eCNameSpace__eC__containers__NamedLink64 * item;

for(item = data->values.first; item; item = item->next)
if(!strcmp(item->name, string))
break;
if(!item)
{
__eCMethod___eCNameSpace__eC__containers__OldList_Add(&data->values, __extension__ ({
struct __eCNameSpace__eC__containers__NamedLink64 * __eCInstance1 = __eCNameSpace__eC__types__eSystem_New0(sizeof(struct __eCNameSpace__eC__containers__NamedLink64));

__eCInstance1->data = value, __eCInstance1->name = __eCNameSpace__eC__types__CopyString(string), __eCInstance1;
}));
if(value > data->largest)
data->largest = value;
return value;
}
}
return -1;
}

static long long __eCNameSpace__eC__types__GetEnumSize(struct __eCNameSpace__eC__types__Class * _class)
{
struct __eCNameSpace__eC__types__EnumClassData * data = (struct __eCNameSpace__eC__types__EnumClassData *)_class->data;

return data->largest + 1;
}

struct __eCNameSpace__eC__types__Class * __eCNameSpace__eC__types__eClass_GetDesigner(struct __eCNameSpace__eC__types__Class * _class)
{
for(; _class; _class = _class->base)
{
if(_class->designerClass)
return (struct __eCNameSpace__eC__types__Class *)__eCNameSpace__eC__types__eSystem_FindClass(_class->module, _class->designerClass);
}
return (((void *)0));
}

const char * __eCMethod___eCNameSpace__eC__types__Platform_OnGetString(struct __eCNameSpace__eC__types__Class * class, int * this, char * tempString, void * fieldData, unsigned int * onType)
{
if((*this) >= __eCNameSpace__eC__types__firstPlatform && (*this) <= __eCNameSpace__eC__types__lastPlatform)
{
if(tempString)
strcpy(tempString, __eCNameSpace__eC__types__platformNames[*(int *)this]);
return __eCNameSpace__eC__types__platformNames[*(int *)this];
}
if(tempString && tempString[0])
tempString[0] = '\0';
return (((void *)0));
}

unsigned int __eCMethod___eCNameSpace__eC__types__Platform_OnGetDataFromString(struct __eCNameSpace__eC__types__Class * class, int * this, const char * string)
{
(*this) = __eCProp___eCNameSpace__eC__types__Platform_Set_char__PTR_(string);
return (*this) != 0;
}

extern struct __eCNameSpace__eC__types__Class * __eCClass___eCNameSpace__eC__containers__OldLink;

extern struct __eCNameSpace__eC__types__Class * __eCClass___eCNameSpace__eC__types__Module;

extern struct __eCNameSpace__eC__types__Class * __eCClass_char__PTR_;

extern struct __eCNameSpace__eC__types__Class * __eCClass_String;

extern struct __eCNameSpace__eC__types__Class * __eCClass___eCNameSpace__eC__types__Application;

extern struct __eCNameSpace__eC__types__Class * __eCClass___eCNameSpace__eC__types__Instance;

struct __eCNameSpace__eC__types__Method * __eCNameSpace__eC__types__eClass_AddMethod(struct __eCNameSpace__eC__types__Class * _class, const char * name, const char * type, void * function, int declMode)
{
if(_class && !_class->comRedefinition && name)
{
struct __eCNameSpace__eC__types__Class * base;

for(base = _class; base; base = base->base)
{
struct __eCNameSpace__eC__types__Method * method;

if(base->templateClass)
base = base->templateClass;
method = (struct __eCNameSpace__eC__types__Method *)__eCMethod___eCNameSpace__eC__containers__BinaryTree_FindString(&base->methods, name);
if(method)
{
if(method->type == 1)
{
struct __eCNameSpace__eC__containers__OldLink * deriv;
void * oldFunction = _class->_vTbl[method->vid];

if(method->vid >= _class->vTblSize)
printf("error: virtual methods overriding failure\n");
else
_class->_vTbl[method->vid] = function ? function : (((void *)0));
for(deriv = _class->derivatives.first; deriv; deriv = deriv->next)
{
struct __eCNameSpace__eC__types__Class * derivClass = deriv->data;

if(derivClass->_vTbl[method->vid] == oldFunction)
__eCNameSpace__eC__types__eClass_AddMethod(derivClass, name, type, function, declMode);
}
{
struct __eCNameSpace__eC__containers__OldLink * templateLink;

for(templateLink = _class->templatized.first; templateLink; templateLink = templateLink->next)
{
struct __eCNameSpace__eC__types__Class * template = templateLink->data;

for(deriv = template->derivatives.first; deriv; deriv = deriv->next)
{
struct __eCNameSpace__eC__types__Class * derivClass = deriv->data;

if(derivClass->_vTbl[method->vid] == oldFunction)
__eCNameSpace__eC__types__eClass_AddMethod(derivClass, name, type, function, declMode);
}
}
}
}
else
{
if(base == _class)
{
break;
}
base = (((void *)0));
break;
}
return method;
}
}
if(!base)
{
struct __eCNameSpace__eC__types__Method * method = (method = __eCNameSpace__eC__types__eSystem_New0(sizeof(struct __eCNameSpace__eC__types__Method)), method->name = __eCNameSpace__eC__types__CopyString(name), method->function = function ? function : (((void *)0)), method->_class = _class, method->dataTypeString = __eCNameSpace__eC__types__CopyString(type), method->memberAccess = declMode, method);

__eCMethod___eCNameSpace__eC__containers__BinaryTree_Add(&_class->methods, (struct __eCNameSpace__eC__containers__BTNode *)method);
return method;
}
}
return (((void *)0));
}

struct __eCNameSpace__eC__types__DataMember * __eCNameSpace__eC__types__eMember_AddDataMember(struct __eCNameSpace__eC__types__DataMember * member, const char * name, const char * type, unsigned int size, unsigned int alignment, int declMode)
{
if((name && !__eCMethod___eCNameSpace__eC__containers__BinaryTree_FindString(&member->membersAlpha, name)) || (!name && !type && !size && alignment))
{
if(alignment)
{
short __simpleStruct0;
unsigned int pointerAlignment = alignment == 0xF000F000;
unsigned int force64Bits = 0;
unsigned int force32Bits = 0;

if(pointerAlignment)
alignment = force64Bits ? 8 : force32Bits ? 4 : sizeof(void *);
if(pointerAlignment && member->structAlignment <= 4)
member->pointerAlignment = 1;
else if(!pointerAlignment && alignment >= 8)
member->pointerAlignment = 0;
member->structAlignment = (__simpleStruct0 = member->structAlignment, (__simpleStruct0 > alignment) ? __simpleStruct0 : alignment);
if(member->memberOffset % alignment)
member->memberOffset += alignment - (member->memberOffset % alignment);
}
if(name)
{
struct __eCNameSpace__eC__types__DataMember * dataMember = (dataMember = __eCNameSpace__eC__types__eSystem_New0(sizeof(struct __eCNameSpace__eC__types__DataMember)), dataMember->name = __eCNameSpace__eC__types__CopyString(name), dataMember->_class = member->_class, dataMember->dataTypeString = __eCNameSpace__eC__types__CopyString(type), dataMember->id = member->memberID++, dataMember->offset = (member->type == 1) ? 0 : member->memberOffset, dataMember->memberAccess = declMode, dataMember->membersAlpha.CompareKey = (void *)__eCMethod___eCNameSpace__eC__containers__BinaryTree_CompareString, dataMember);

__eCMethod___eCNameSpace__eC__containers__OldList_Add(&member->members, dataMember);
if(member->type == 1)
{
if(size > member->memberOffset)
member->memberOffset = size;
}
else
member->memberOffset += size;
__eCMethod___eCNameSpace__eC__containers__BinaryTree_Add(&member->membersAlpha, (struct __eCNameSpace__eC__containers__BTNode *)__extension__ ({
struct __eCNameSpace__eC__types__BTNamedLink * __eCInstance1 = __eCNameSpace__eC__types__eSystem_New0(sizeof(struct __eCNameSpace__eC__types__BTNamedLink));

__eCInstance1->name = dataMember->name, __eCInstance1->data = dataMember, __eCInstance1;
}));
return dataMember;
}
}
return (((void *)0));
}

unsigned int __eCNameSpace__eC__types__eMember_AddMember(struct __eCNameSpace__eC__types__DataMember * addTo, struct __eCNameSpace__eC__types__DataMember * dataMember)
{
short __simpleStruct0, __simpleStruct1;

if(dataMember->name && __eCMethod___eCNameSpace__eC__containers__BinaryTree_FindString(&addTo->membersAlpha, dataMember->name))
{
__eCNameSpace__eC__types__DataMember_Free(dataMember);
((dataMember ? __extension__ ({
void * __eCPtrToDelete = (dataMember);

__eCClass___eCNameSpace__eC__types__DataMember->Destructor ? __eCClass___eCNameSpace__eC__types__DataMember->Destructor((void *)__eCPtrToDelete) : 0, __eCNameSpace__eC__types__eSystem_Delete(__eCPtrToDelete);
}) : 0), dataMember = 0);
return 0;
}
__eCMethod___eCNameSpace__eC__containers__OldList_Add(&addTo->members, dataMember);
if(dataMember->name)
__eCMethod___eCNameSpace__eC__containers__BinaryTree_Add(&addTo->membersAlpha, (struct __eCNameSpace__eC__containers__BTNode *)__extension__ ({
struct __eCNameSpace__eC__types__BTNamedLink * __eCInstance1 = __eCNameSpace__eC__types__eSystem_New0(sizeof(struct __eCNameSpace__eC__types__BTNamedLink));

__eCInstance1->name = dataMember->name, __eCInstance1->data = dataMember, __eCInstance1;
}));
dataMember->_class = addTo->_class;
dataMember->id = addTo->memberID;
if(dataMember->type == 1)
addTo->memberID += 1;
else
addTo->memberID += dataMember->memberID;
if(dataMember->pointerAlignment && dataMember->structAlignment <= 4)
addTo->pointerAlignment = 1;
else if(!dataMember->pointerAlignment && dataMember->structAlignment >= 8)
addTo->pointerAlignment = 0;
addTo->structAlignment = (__simpleStruct0 = addTo->structAlignment, __simpleStruct1 = dataMember->structAlignment, (__simpleStruct0 > __simpleStruct1) ? __simpleStruct0 : __simpleStruct1);
dataMember->offset = (addTo->type == 1) ? 0 : addTo->memberOffset;
if(dataMember->structAlignment)
{
if(addTo->memberOffset % dataMember->structAlignment)
addTo->memberOffset += dataMember->structAlignment - (addTo->memberOffset % dataMember->structAlignment);
}
if(addTo->type == 1)
{
if(dataMember->memberOffset > addTo->memberOffset)
addTo->memberOffset = dataMember->memberOffset;
}
else
addTo->memberOffset += dataMember->memberOffset;
return 1;
}

unsigned int __eCNameSpace__eC__types__eClass_AddMember(struct __eCNameSpace__eC__types__Class * _class, struct __eCNameSpace__eC__types__DataMember * dataMember)
{
short __simpleStruct0, __simpleStruct1;

if(!_class || _class->comRedefinition || (dataMember->name && __eCMethod___eCNameSpace__eC__containers__BinaryTree_FindString(&_class->members, dataMember->name)))
{
__eCNameSpace__eC__types__DataMember_Free(dataMember);
((dataMember ? __extension__ ({
void * __eCPtrToDelete = (dataMember);

__eCClass___eCNameSpace__eC__types__DataMember->Destructor ? __eCClass___eCNameSpace__eC__types__DataMember->Destructor((void *)__eCPtrToDelete) : 0, __eCNameSpace__eC__types__eSystem_Delete(__eCPtrToDelete);
}) : 0), dataMember = 0);
return 0;
}
__eCMethod___eCNameSpace__eC__containers__OldList_Add(&_class->membersAndProperties, dataMember);
if(dataMember->name)
__eCMethod___eCNameSpace__eC__containers__BinaryTree_Add(&_class->members, (struct __eCNameSpace__eC__containers__BTNode *)__extension__ ({
struct __eCNameSpace__eC__types__BTNamedLink * __eCInstance1 = __eCNameSpace__eC__types__eSystem_New0(sizeof(struct __eCNameSpace__eC__types__BTNamedLink));

__eCInstance1->name = dataMember->name, __eCInstance1->data = dataMember, __eCInstance1;
}));
__eCNameSpace__eC__types__SetMemberClass(dataMember, _class);
dataMember->id = _class->memberID;
if(dataMember->pointerAlignment && dataMember->structAlignment <= 4)
_class->pointerAlignment = 1;
else if(!dataMember->pointerAlignment && dataMember->structAlignment >= 8)
_class->pointerAlignment = 0;
_class->structAlignment = (__simpleStruct0 = _class->structAlignment, __simpleStruct1 = dataMember->structAlignment, (__simpleStruct0 > __simpleStruct1) ? __simpleStruct0 : __simpleStruct1);
if(dataMember->type == 1)
_class->memberID += 1;
else
_class->memberID += dataMember->memberID;
if(dataMember->structAlignment)
{
if(_class->memberOffset % dataMember->structAlignment)
_class->memberOffset += dataMember->structAlignment - (_class->memberOffset % dataMember->structAlignment);
}
dataMember->offset = _class->memberOffset;
_class->memberOffset += dataMember->memberOffset;
return 1;
}

struct __eCNameSpace__eC__types__BitMember * __eCNameSpace__eC__types__eClass_AddBitMember(struct __eCNameSpace__eC__types__Class * _class, const char * name, const char * type, int bitSize, int bitPos, int declMode)
{
if(_class && name && !__eCMethod___eCNameSpace__eC__containers__BinaryTree_FindString(&_class->members, name))
{
uint64 mask = 0;
int c;
struct __eCNameSpace__eC__types__BitMember * bitMember = (bitMember = __eCNameSpace__eC__types__eSystem_New0(sizeof(struct __eCNameSpace__eC__types__BitMember)), bitMember->name = __eCNameSpace__eC__types__CopyString(name), bitMember->_class = _class, bitMember->dataTypeString = __eCNameSpace__eC__types__CopyString(type), bitMember->id = _class->memberID++, bitMember->memberAccess = declMode, bitMember);

__eCMethod___eCNameSpace__eC__containers__OldList_Add(&_class->membersAndProperties, bitMember);
if(bitSize)
{
bitMember->pos = (bitPos == -1) ? _class->memberOffset : bitPos;
bitMember->size = bitSize;
_class->memberOffset = bitMember->pos + bitMember->size;
for(c = 0; c < bitSize; c++)
{
if(c)
mask <<= 1;
mask |= 1;
}
bitMember->mask = mask << bitMember->pos;
}
__eCMethod___eCNameSpace__eC__containers__BinaryTree_Add(&_class->members, (struct __eCNameSpace__eC__containers__BTNode *)__extension__ ({
struct __eCNameSpace__eC__types__BTNamedLink * __eCInstance1 = __eCNameSpace__eC__types__eSystem_New0(sizeof(struct __eCNameSpace__eC__types__BTNamedLink));

__eCInstance1->name = bitMember->name, __eCInstance1->data = bitMember, __eCInstance1;
}));
return bitMember;
}
return (((void *)0));
}

const char *  __eCProp___eCNameSpace__eC__types__Platform_Get_char__PTR_(int this)
{
return (__extension__ ({
const char *  (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Class * , const void * , char *  tempString, void *  reserved, unsigned int *  onType);

__internal_VirtualMethod = ((const char *  (*)(struct __eCNameSpace__eC__types__Class *, const void *, char *  tempString, void *  reserved, unsigned int *  onType))__eCClass___eCNameSpace__eC__types__Platform->_vTbl[__eCVMethodID_class_OnGetString]);
__internal_VirtualMethod ? __internal_VirtualMethod(__eCClass___eCNameSpace__eC__types__Platform, (void *)&this, (((void *)0)), (((void *)0)), (((void *)0))) : (const char * )1;
}));
}

struct __eCNameSpace__eC__types__Instance * __eCProp___eCNameSpace__eC__types__DesignerBase_Get_classDesigner(struct __eCNameSpace__eC__types__Instance * this)
{
__attribute__((unused)) struct __eCNameSpace__eC__types__DesignerBase * __eCPointer___eCNameSpace__eC__types__DesignerBase = (struct __eCNameSpace__eC__types__DesignerBase *)(this ? (((char *)this) + __eCClass___eCNameSpace__eC__types__DesignerBase->offset) : 0);

return __eCPointer___eCNameSpace__eC__types__DesignerBase->classDesigner;
}

const char *  __eCProp___eCNameSpace__eC__types__DesignerBase_Get_objectClass(struct __eCNameSpace__eC__types__Instance * this)
{
__attribute__((unused)) struct __eCNameSpace__eC__types__DesignerBase * __eCPointer___eCNameSpace__eC__types__DesignerBase = (struct __eCNameSpace__eC__types__DesignerBase *)(this ? (((char *)this) + __eCClass___eCNameSpace__eC__types__DesignerBase->offset) : 0);

return __eCPointer___eCNameSpace__eC__types__DesignerBase->objectClass;
}

unsigned int __eCProp___eCNameSpace__eC__types__DesignerBase_Get_isDragging(struct __eCNameSpace__eC__types__Instance * this)
{
__attribute__((unused)) struct __eCNameSpace__eC__types__DesignerBase * __eCPointer___eCNameSpace__eC__types__DesignerBase = (struct __eCNameSpace__eC__types__DesignerBase *)(this ? (((char *)this) + __eCClass___eCNameSpace__eC__types__DesignerBase->offset) : 0);

return __eCPointer___eCNameSpace__eC__types__DesignerBase->isDragging;
}

struct __eCNameSpace__eC__types__Method * __eCNameSpace__eC__types__eClass_AddVirtualMethod(struct __eCNameSpace__eC__types__Class * _class, const char * name, const char * type, void * function, int declMode)
{
if(_class && !_class->comRedefinition && name)
{
struct __eCNameSpace__eC__types__Class * base;

for(base = _class; base; base = base->base)
{
struct __eCNameSpace__eC__types__Method * method = (struct __eCNameSpace__eC__types__Method *)__eCMethod___eCNameSpace__eC__containers__BinaryTree_FindString(&base->methods, name);

if(method)
{
if(method->type == 1)
{
if(method->vid >= _class->vTblSize)
printf("error: virtual methods overriding failure\n");
else
_class->_vTbl[method->vid] = function ? function : (((void *)0));
}
else
base = (((void *)0));
return method;
}
}
if(!base)
{
struct __eCNameSpace__eC__types__Method * method = (method = __eCNameSpace__eC__types__eSystem_New0(sizeof(struct __eCNameSpace__eC__types__Method)), method->name = __eCNameSpace__eC__types__CopyString(name), method->function = function ? function : (((void *)0)), method->type = 1, method->_class = _class, method->vid = _class->vTblSize++, method->dataTypeString = __eCNameSpace__eC__types__CopyString(type), method->memberAccess = declMode, method);

__eCMethod___eCNameSpace__eC__containers__BinaryTree_Add(&_class->methods, (struct __eCNameSpace__eC__containers__BTNode *)method);
_class->_vTbl = __eCNameSpace__eC__types__eSystem_Renew(_class->_vTbl, sizeof(void *) * (_class->vTblSize));
_class->_vTbl[method->vid] = function ? function : (((void *)0));
if(_class->derivatives.first || _class->templatized.first)
__eCNameSpace__eC__types__FixDerivativeVirtualMethod(_class, name, method->vid, function ? function : (((void *)0)), type);
return method;
}
}
return (((void *)0));
}

struct __eCNameSpace__eC__types__Property * __eCNameSpace__eC__types__eClass_AddProperty(struct __eCNameSpace__eC__types__Class * _class, const char * name, const char * dataType, void * setStmt, void * getStmt, int declMode)
{
struct __eCNameSpace__eC__types__Property * _property = (((void *)0));

if(_class)
{
struct __eCNameSpace__eC__types__BTNamedLink * link = (struct __eCNameSpace__eC__types__BTNamedLink *)__eCMethod___eCNameSpace__eC__containers__BinaryTree_FindString(&_class->prop, name ? name : dataType);
unsigned int isConversion = name ? 0 : 1;

if(!name && dataType && !strncmp(dataType, "const ", 6))
{
name = dataType + 6;
isConversion = 1;
}
if(link)
_property = link->data;
if(!_property)
{
_property = __extension__ ({
struct __eCNameSpace__eC__types__Property * __eCInstance1 = __eCNameSpace__eC__types__eSystem_New0(sizeof(struct __eCNameSpace__eC__types__Property));

__eCInstance1->isProperty = 1, __eCInstance1->name = __eCNameSpace__eC__types__CopyString(name ? name : dataType), __eCInstance1->id = (name && (setStmt || getStmt || dataType)) ? _class->memberID++ : 0, __eCInstance1->Set = setStmt, __eCInstance1->Get = getStmt, __eCInstance1->dataTypeString = __eCNameSpace__eC__types__CopyString(dataType), __eCInstance1->_class = _class, __eCInstance1->compiled = 1, __eCInstance1->conversion = isConversion, __eCInstance1->memberAccess = declMode, __eCInstance1;
});
if(!isConversion)
__eCMethod___eCNameSpace__eC__containers__OldList_Add(&_class->membersAndProperties, _property);
else
__eCMethod___eCNameSpace__eC__containers__OldList_Add(&_class->conversions, _property);
__eCMethod___eCNameSpace__eC__containers__BinaryTree_Add(&_class->prop, (struct __eCNameSpace__eC__containers__BTNode *)__extension__ ({
struct __eCNameSpace__eC__types__BTNamedLink * __eCInstance1 = __eCNameSpace__eC__types__eSystem_New0(sizeof(struct __eCNameSpace__eC__types__BTNamedLink));

__eCInstance1->name = _property->name, __eCInstance1->data = _property, __eCInstance1;
}));
if(!_property->conversion)
{
__eCNameSpace__eC__types__FixDerivativeProperty(_class, _property);
}
}
}
return _property;
}

struct __eCNameSpace__eC__types__ClassProperty * __eCNameSpace__eC__types__eClass_AddClassProperty(struct __eCNameSpace__eC__types__Class * _class, const char * name, const char * dataType, void * setStmt, void * getStmt)
{
if(name && !__eCMethod___eCNameSpace__eC__containers__BinaryTree_FindString(&_class->classProperties, name))
{
struct __eCNameSpace__eC__types__ClassProperty * _property = (_property = __eCNameSpace__eC__types__eSystem_New0(sizeof(struct __eCNameSpace__eC__types__ClassProperty)), _property->name = __eCNameSpace__eC__types__CopyString(name), _property->Set = setStmt, _property->Get = getStmt, _property->dataTypeString = __eCNameSpace__eC__types__CopyString(dataType), _property);

__eCMethod___eCNameSpace__eC__containers__BinaryTree_Add(&_class->classProperties, (struct __eCNameSpace__eC__containers__BTNode *)_property);
__eCNameSpace__eC__types__SetDelayedCPValues(_class, _property);
return _property;
}
return (((void *)0));
}

long long __eCNameSpace__eC__types__eClass_GetProperty(struct __eCNameSpace__eC__types__Class * _class, const char * name)
{
struct __eCNameSpace__eC__types__ClassProperty * _property = __eCNameSpace__eC__types__eClass_FindClassProperty(_class, name);

if(_property && _property->Get && _property->Get != (void *)1)
{
long long result = _property->Get(_class);

return result;
}
return 0;
}

void __eCNameSpace__eC__types__eClass_SetProperty(struct __eCNameSpace__eC__types__Class * _class, const char * name, long long value)
{
struct __eCNameSpace__eC__types__ClassProperty * _property = __eCNameSpace__eC__types__eClass_FindClassProperty(_class, name);

if(_property)
{
if(_property->Set)
((void (*)(void *, long long))_property->Set)(_class, value);
}
else
{
__eCMethod___eCNameSpace__eC__containers__OldList_Add(&_class->delayedCPValues, __extension__ ({
struct __eCNameSpace__eC__containers__NamedLink64 * __eCInstance1 = __eCNameSpace__eC__types__eSystem_New0(sizeof(struct __eCNameSpace__eC__containers__NamedLink64));

__eCInstance1->name = (char *)name, __eCInstance1->data = value, __eCInstance1;
}));
}
}

void __eCNameSpace__eC__types__eClass_FindNextMember(struct __eCNameSpace__eC__types__Class * _class, struct __eCNameSpace__eC__types__Class ** curClass, struct __eCNameSpace__eC__types__DataMember ** curMember, struct __eCNameSpace__eC__types__DataMember ** subMemberStack, int * subMemberStackPos)
{
if(*curMember)
{
*curMember = (*curMember)->next;
if(subMemberStackPos && *subMemberStackPos > 0 && subMemberStack[*subMemberStackPos - 1]->type == 1)
{
*curMember = subMemberStack[--(*subMemberStackPos)];
*curMember = (*curMember)->next;
}
if(subMemberStackPos && *subMemberStackPos > 0)
{
while(*curMember && ((*curMember)->memberAccess == 2))
*curMember = (*curMember)->next;
}
else
while(*curMember && (*curMember)->name)
{
struct __eCNameSpace__eC__types__DataMember * dataMember = __eCNameSpace__eC__types__eClass_FindDataMember(_class, (*curMember)->name, (((void *)0)), (((void *)0)), (((void *)0)));

if(!dataMember)
dataMember = (struct __eCNameSpace__eC__types__DataMember *)__eCNameSpace__eC__types__eClass_FindProperty(_class, (*curMember)->name, (((void *)0)));
if(dataMember && dataMember->memberAccess != 2)
{
*curMember = dataMember;
break;
}
else
*curMember = (*curMember)->next;
}
if(subMemberStackPos)
{
while((*curMember) && !(*curMember)->isProperty && !(*curMember)->name && ((*curMember)->type == 2 || (*curMember)->type == 1))
{
subMemberStack[(*subMemberStackPos)++] = *curMember;
*curMember = (*curMember)->members.first;
while(*curMember && ((*curMember)->memberAccess == 2))
*curMember = (*curMember)->next;
}
}
}
while(!*curMember)
{
if(!*curMember)
{
if(subMemberStackPos && *subMemberStackPos)
{
*curMember = subMemberStack[--(*subMemberStackPos)];
*curMember = (*curMember)->next;
}
else
{
struct __eCNameSpace__eC__types__Class * lastCurClass = *curClass;

if(*curClass == _class)
break;
for(*curClass = _class; (*curClass)->base != lastCurClass && (*curClass)->base->type != 1000 && (*curClass)->inheritanceAccess != 2; *curClass = (*curClass)->base)
;
*curMember = (*curClass)->membersAndProperties.first;
}
if(subMemberStackPos && *subMemberStackPos > 0)
{
while(*curMember && ((*curMember)->memberAccess == 2))
*curMember = (*curMember)->next;
}
else
while(*curMember && (*curMember)->name)
{
struct __eCNameSpace__eC__types__DataMember * dataMember = (((void *)0));

if(((*curMember)->memberAccess != 2))
{
dataMember = __eCNameSpace__eC__types__eClass_FindDataMember(_class, (*curMember)->name, (((void *)0)), (((void *)0)), (((void *)0)));
if(!dataMember)
dataMember = (struct __eCNameSpace__eC__types__DataMember *)__eCNameSpace__eC__types__eClass_FindProperty(_class, (*curMember)->name, (((void *)0)));
}
if(dataMember && dataMember->memberAccess != 2 && dataMember->id >= 0)
{
*curMember = dataMember;
break;
}
else
*curMember = (*curMember)->next;
}
if(subMemberStackPos)
{
while((*curMember) && !(*curMember)->isProperty && !(*curMember)->name && ((*curMember)->type == 2 || (*curMember)->type == 1))
{
subMemberStack[(*subMemberStackPos)++] = *curMember;
*curMember = (*curMember)->members.first;
while(*curMember && (*curMember)->memberAccess == 2)
*curMember = (*curMember)->next;
}
}
}
}
}

void __eCNameSpace__eC__types__eClass_Resize(struct __eCNameSpace__eC__types__Class * _class, int newSize)
{
struct __eCNameSpace__eC__containers__OldLink * deriv;

_class->structSize = newSize;
for(deriv = _class->derivatives.first; deriv; deriv = deriv->next)
__eCNameSpace__eC__types__FixOffsets(deriv->data);
}

unsigned int __eCMethod___eCNameSpace__eC__types__Class_OnGetDataFromString(struct __eCNameSpace__eC__types__Class * class, struct __eCNameSpace__eC__types__Class ** this, const char * string)
{
struct __eCNameSpace__eC__types__Class * theClass;

theClass = __eCNameSpace__eC__types__eSystem_FindClass(__thisModule, string);
if(!theClass)
theClass = __eCNameSpace__eC__types__eSystem_FindClass(((struct __eCNameSpace__eC__types__Module *)(((char *)__thisModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->application, string);
(*this) = (void *)theClass;
return theClass != (((void *)0));
}

static unsigned int __eCNameSpace__eC__types__Module_Constructor(struct __eCNameSpace__eC__types__Instance * module)
{
((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->privateNameSpace.classes.CompareKey = (void *)__eCMethod___eCNameSpace__eC__containers__BinaryTree_CompareString;
((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->privateNameSpace.defines.CompareKey = (void *)__eCMethod___eCNameSpace__eC__containers__BinaryTree_CompareString;
((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->privateNameSpace.functions.CompareKey = (void *)__eCMethod___eCNameSpace__eC__containers__BinaryTree_CompareString;
((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->privateNameSpace.nameSpaces.CompareKey = (void *)__eCMethod___eCNameSpace__eC__containers__BinaryTree_CompareString;
((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->publicNameSpace.classes.CompareKey = (void *)__eCMethod___eCNameSpace__eC__containers__BinaryTree_CompareString;
((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->publicNameSpace.defines.CompareKey = (void *)__eCMethod___eCNameSpace__eC__containers__BinaryTree_CompareString;
((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->publicNameSpace.functions.CompareKey = (void *)__eCMethod___eCNameSpace__eC__containers__BinaryTree_CompareString;
((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->publicNameSpace.nameSpaces.CompareKey = (void *)__eCMethod___eCNameSpace__eC__containers__BinaryTree_CompareString;
return 1;
}

void __eCMethod___eCNameSpace__eC__types__Class_OnSerialize(struct __eCNameSpace__eC__types__Class * class, struct __eCNameSpace__eC__types__Class * this, struct __eCNameSpace__eC__types__Instance * channel)
{
__eCMethod___eCNameSpace__eC__types__IOChannel_Serialize(channel, __eCClass_char__PTR_, this->fullName);
}

void __eCMethod___eCNameSpace__eC__types__Class_OnUnserialize(struct __eCNameSpace__eC__types__Class * class, struct __eCNameSpace__eC__types__Class ** this, struct __eCNameSpace__eC__types__Instance * channel)
{
struct __eCNameSpace__eC__types__Class * theClass;
char * string;

__eCMethod___eCNameSpace__eC__types__IOChannel_Unserialize(channel, __eCClass_String, (void *)&string);
theClass = __eCNameSpace__eC__types__eSystem_FindClass(__thisModule, string);
if(!theClass)
theClass = __eCNameSpace__eC__types__eSystem_FindClass(((struct __eCNameSpace__eC__types__Module *)(((char *)__thisModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->application, string);
(__eCNameSpace__eC__types__eSystem_Delete(string), string = 0);
(*this) = (void *)theClass;
}

struct __eCNameSpace__eC__types__DataMember * __eCNameSpace__eC__types__eClass_AddDataMember(struct __eCNameSpace__eC__types__Class * _class, const char * name, const char * type, unsigned int size, unsigned int alignment, int declMode)
{
if(_class && (name || (!name && !size && !type && alignment)))
{
if(!name || !__eCMethod___eCNameSpace__eC__containers__BinaryTree_FindString(&_class->members, name))
{
if(alignment)
{
short __simpleStruct0;
unsigned int pointerAlignment = alignment == 0xF000F000;
unsigned int force64Bits = (((struct __eCNameSpace__eC__types__Application *)(((char *)((struct __eCNameSpace__eC__types__Module *)(((char *)_class->module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application + sizeof(struct __eCNameSpace__eC__types__Module) + sizeof(struct __eCNameSpace__eC__types__Instance))))->isGUIApp & 2) ? 1 : 0;
unsigned int force32Bits = (((struct __eCNameSpace__eC__types__Application *)(((char *)((struct __eCNameSpace__eC__types__Module *)(((char *)_class->module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application + sizeof(struct __eCNameSpace__eC__types__Module) + sizeof(struct __eCNameSpace__eC__types__Instance))))->isGUIApp & 4) ? 1 : 0;

if((force32Bits || force64Bits) && name && !strcmp(_class->name, "AVLNode") && !strcmp(name, "__eCPrivateData0"))
{
if(force64Bits)
{
type = "byte[32]";
size = 32;
}
if(force32Bits)
{
type = "byte[16]";
size = 16;
}
}
if(pointerAlignment)
alignment = force64Bits ? 8 : force32Bits ? 4 : sizeof(void *);
if(pointerAlignment && _class->structAlignment <= 4)
_class->pointerAlignment = 1;
else if(!pointerAlignment && alignment >= 8)
_class->pointerAlignment = 0;
_class->structAlignment = (__simpleStruct0 = _class->structAlignment, (__simpleStruct0 > alignment) ? __simpleStruct0 : alignment);
if(_class->offset % alignment)
{
_class->structSize += alignment - (_class->offset % alignment);
_class->offset += alignment - (_class->offset % alignment);
}
if(_class->memberOffset % alignment)
_class->memberOffset += alignment - (_class->memberOffset % alignment);
}
if(name)
{
struct __eCNameSpace__eC__types__DataMember * dataMember = (dataMember = __eCNameSpace__eC__types__eSystem_New0(sizeof(struct __eCNameSpace__eC__types__DataMember)), dataMember->name = __eCNameSpace__eC__types__CopyString(name), dataMember->dataTypeString = __eCNameSpace__eC__types__CopyString(type), dataMember->id = _class->memberID++, dataMember->_class = _class, dataMember->offset = _class->memberOffset, dataMember->memberOffset = size, dataMember->memberAccess = declMode, dataMember->membersAlpha.CompareKey = (void *)__eCMethod___eCNameSpace__eC__containers__BinaryTree_CompareString, dataMember);

__eCMethod___eCNameSpace__eC__containers__OldList_Add(&_class->membersAndProperties, dataMember);
_class->memberOffset += size;
__eCMethod___eCNameSpace__eC__containers__BinaryTree_Add(&_class->members, (struct __eCNameSpace__eC__containers__BTNode *)__extension__ ({
struct __eCNameSpace__eC__types__BTNamedLink * __eCInstance1 = __eCNameSpace__eC__types__eSystem_New0(sizeof(struct __eCNameSpace__eC__types__BTNamedLink));

__eCInstance1->name = dataMember->name, __eCInstance1->data = dataMember, __eCInstance1;
}));
return dataMember;
}
}
}
return (((void *)0));
}

static void __eCNameSpace__eC__types__Application_Destructor(struct __eCNameSpace__eC__types__Instance * app)
{
if(((struct __eCNameSpace__eC__types__Application *)(((char *)app + sizeof(struct __eCNameSpace__eC__types__Module) + sizeof(struct __eCNameSpace__eC__types__Instance))))->parsedCommand)
{
(__eCNameSpace__eC__types__eSystem_Delete((void *)((struct __eCNameSpace__eC__types__Application *)(((char *)app + sizeof(struct __eCNameSpace__eC__types__Module) + sizeof(struct __eCNameSpace__eC__types__Instance))))->argv), ((struct __eCNameSpace__eC__types__Application * )(((char * )app + sizeof(struct __eCNameSpace__eC__types__Module) + sizeof(struct __eCNameSpace__eC__types__Instance))))->argv = 0);
(__eCNameSpace__eC__types__eSystem_Delete(((struct __eCNameSpace__eC__types__Application *)(((char *)app + sizeof(struct __eCNameSpace__eC__types__Module) + sizeof(struct __eCNameSpace__eC__types__Instance))))->parsedCommand), ((struct __eCNameSpace__eC__types__Application * )(((char * )app + sizeof(struct __eCNameSpace__eC__types__Module) + sizeof(struct __eCNameSpace__eC__types__Instance))))->parsedCommand = 0);
}
}

struct __eCNameSpace__eC__types__DefinedExpression * __eCNameSpace__eC__types__eSystem_RegisterDefine(const char * name, const char * value, struct __eCNameSpace__eC__types__Instance * module, int declMode)
{
struct __eCNameSpace__eC__types__NameSpace * nameSpace = (((void *)0));
int start = 0, c;

nameSpace = (declMode == 1) ? &((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->publicNameSpace : &((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->privateNameSpace;
if(declMode == 4)
nameSpace = &((struct __eCNameSpace__eC__types__Application *)(((char *)((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application + sizeof(struct __eCNameSpace__eC__types__Module) + sizeof(struct __eCNameSpace__eC__types__Instance))))->systemNameSpace;
if(declMode != 3)
{
for(c = 0; name[c]; c++)
{
if(name[c] == '.' || (name[c] == ':' && name[c + 1] == ':'))
{
struct __eCNameSpace__eC__types__NameSpace * newSpace;
int len = c - start;
char * spaceName = __eCNameSpace__eC__types___malloc(len + 1);

if(len)
strncpy(spaceName, name + start, len);
spaceName[len] = '\0';
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
}
else
c = (int)strlen(name);
if(c - start && !__eCMethod___eCNameSpace__eC__containers__BinaryTree_FindString(&(*nameSpace).defines, name + start))
{
struct __eCNameSpace__eC__types__DefinedExpression * def = (def = __eCNameSpace__eC__types__eSystem_New0(sizeof(struct __eCNameSpace__eC__types__DefinedExpression)), def->name = __eCNameSpace__eC__types__CopyString(name), def->nameSpace = nameSpace, def->value = __eCNameSpace__eC__types__CopyString(value), def);

__eCMethod___eCNameSpace__eC__containers__BinaryTree_Add(&(*nameSpace).defines, (struct __eCNameSpace__eC__containers__BTNode *)__extension__ ({
struct __eCNameSpace__eC__types__BTNamedLink * __eCInstance1 = __eCNameSpace__eC__types__eSystem_New0(sizeof(struct __eCNameSpace__eC__types__BTNamedLink));

__eCInstance1->name = def->name + start, __eCInstance1->data = def, __eCInstance1;
}));
__eCMethod___eCNameSpace__eC__containers__OldList_Add(&((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->defines, def);
return def;
}
return (((void *)0));
}

void __eCNameSpace__eC__types__eSystem_SetArgs(struct __eCNameSpace__eC__types__Instance * app, int argc, char * argv[])
{
System_SetArgs(argc, argv, &((struct __eCNameSpace__eC__types__Application *)(((char *)app + sizeof(struct __eCNameSpace__eC__types__Module) + sizeof(struct __eCNameSpace__eC__types__Instance))))->argc, &((struct __eCNameSpace__eC__types__Application *)(((char *)app + sizeof(struct __eCNameSpace__eC__types__Module) + sizeof(struct __eCNameSpace__eC__types__Instance))))->argv);
}

static void * __eCNameSpace__eC__types__Instance_New(struct __eCNameSpace__eC__types__Class * _class, unsigned int bindingsAlloc)
{
struct __eCNameSpace__eC__types__Instance * instance = (((void *)0));

if(_class)
{
{
int size = _class->structSize;
int flags = ((struct __eCNameSpace__eC__types__Application *)(((char *)((struct __eCNameSpace__eC__types__Module *)(((char *)_class->module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application + sizeof(struct __eCNameSpace__eC__types__Module) + sizeof(struct __eCNameSpace__eC__types__Instance))))->isGUIApp;
unsigned int inCompiler = (flags & 8) ? 1 : 0;
unsigned int force32Bits = (flags & 4) ? 1 : 0;

if(force32Bits && inCompiler)
{
if(!strcmp(_class->name, "Module"))
size = 560;
else if(_class->templateClass && !strcmp(_class->templateClass->name, "Map"))
size = 40;
else
size *= 3;
}
instance = __eCNameSpace__eC__types___calloc(1, size);
if(!instance && size)
printf("Failed to allocate memory instantiating %s object!\n", _class->name);
else if(!size)
printf("Warning: 0 size instantiating %s object!\n", _class->name);
}
if(instance && _class->type == 0)
{
((struct __eCNameSpace__eC__types__Instance *)(char *)instance)->_class = _class;
((struct __eCNameSpace__eC__types__Instance *)(char *)instance)->_vTbl = _class->_vTbl;
}
if(instance && !__eCNameSpace__eC__types__ConstructInstance(instance, _class, (((void *)0)), bindingsAlloc))
{
__eCNameSpace__eC__types___free(instance);
instance = (((void *)0));
}
}
return instance;
}

void __eCNameSpace__eC__types__eInstance_SetMethod(struct __eCNameSpace__eC__types__Instance * instance, const char * name, void * function)
{
if(instance && name)
{
struct __eCNameSpace__eC__types__Class * _class;

for(_class = ((struct __eCNameSpace__eC__types__Instance *)(char *)instance)->_class; _class; _class = _class->base)
{
struct __eCNameSpace__eC__types__Method * method = (struct __eCNameSpace__eC__types__Method *)__eCMethod___eCNameSpace__eC__containers__BinaryTree_FindString(&_class->methods, name);

if(method && method->type == 1)
{
if(((struct __eCNameSpace__eC__types__Instance *)(char *)instance)->_vTbl == ((struct __eCNameSpace__eC__types__Instance *)(char *)instance)->_class->_vTbl)
{
((struct __eCNameSpace__eC__types__Instance *)(char *)instance)->_vTbl = __eCNameSpace__eC__types___malloc(sizeof(void *) * ((struct __eCNameSpace__eC__types__Instance *)(char *)instance)->_class->vTblSize);
memcpy(((struct __eCNameSpace__eC__types__Instance *)(char *)instance)->_vTbl, ((struct __eCNameSpace__eC__types__Instance *)(char *)instance)->_class->_vTbl, sizeof(int (*)()) * ((struct __eCNameSpace__eC__types__Instance *)(char *)instance)->_class->vTblSize);
}
((struct __eCNameSpace__eC__types__Instance *)(char *)instance)->_vTbl[method->vid] = function ? function : (((void *)0));
}
}
}
}

unsigned int __eCNameSpace__eC__types__eInstance_IsDerived(struct __eCNameSpace__eC__types__Instance * instance, struct __eCNameSpace__eC__types__Class * from)
{
if(instance)
{
struct __eCNameSpace__eC__types__Class * _class = ((struct __eCNameSpace__eC__types__Instance *)(char *)instance)->_class;

for(; _class; _class = _class->base)
{
if(_class == from)
return 1;
}
}
return 0;
}

void __eCNameSpace__eC__types__eInstance_IncRef(struct __eCNameSpace__eC__types__Instance * instance)
{
if(instance)
((struct __eCNameSpace__eC__types__Instance *)(char *)instance)->_refCount++;
}

void __eCNameSpace__eC__types__eInstance_FireSelfWatchers(struct __eCNameSpace__eC__types__Instance * instance, struct __eCNameSpace__eC__types__Property * _property)
{
if(instance && _property && _property->selfWatchable)
{
struct __eCNameSpace__eC__types__Class * _class;

for(_class = ((struct __eCNameSpace__eC__types__Instance *)(char *)instance)->_class; _class; _class = _class->base)
{
struct __eCNameSpace__eC__types__SelfWatcher * selfWatcher, * next;

for(selfWatcher = _class->selfWatchers.first; selfWatcher; selfWatcher = next)
{
next = selfWatcher->next;
if(selfWatcher->_property == _property)
selfWatcher->callback(instance);
}
}
}
}

void __eCNameSpace__eC__types__eInstance_FireWatchers(struct __eCNameSpace__eC__types__Instance * instance, struct __eCNameSpace__eC__types__Property * _property)
{
if(instance && _property && _property->isWatchable)
{
struct __eCNameSpace__eC__types__Instance * module = ((struct __eCNameSpace__eC__types__Instance *)(char *)instance)->_class ? ((struct __eCNameSpace__eC__types__Instance *)(char *)instance)->_class->module : (((void *)0));
struct __eCNameSpace__eC__types__Instance * application = module ? ((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application : (((void *)0));
int flags = application ? ((struct __eCNameSpace__eC__types__Application *)(((char *)application + sizeof(struct __eCNameSpace__eC__types__Module) + sizeof(struct __eCNameSpace__eC__types__Instance))))->isGUIApp : 0;
unsigned int inCompiler = (flags & 8) ? 1 : 0;
unsigned int force32Bits = (flags & 4) ? 1 : 0;

if(!force32Bits || !inCompiler)
{
struct __eCNameSpace__eC__containers__OldList * watchers = (struct __eCNameSpace__eC__containers__OldList *)((unsigned char *)instance + _property->watcherOffset);
struct __eCNameSpace__eC__types__Watcher * watcher, * next;

for(watcher = (*watchers).first; watcher; watcher = next)
{
next = watcher->next;
watcher->callback(watcher->object, instance);
}
}
}
}

void __eCNameSpace__eC__types__eInstance_WatchDestruction(struct __eCNameSpace__eC__types__Instance * instance, struct __eCNameSpace__eC__types__Instance * object, void (* callback)(void *, void *))
{
struct __eCNameSpace__eC__containers__OldList * watchers = (struct __eCNameSpace__eC__containers__OldList *)((unsigned char *)instance + ((struct __eCNameSpace__eC__types__Instance *)(char *)instance)->_class->destructionWatchOffset);

__eCMethod___eCNameSpace__eC__containers__OldList_Add((&*watchers), __extension__ ({
struct __eCNameSpace__eC__types__Watcher * __eCInstance1 = __eCNameSpace__eC__types__eSystem_New0(sizeof(struct __eCNameSpace__eC__types__Watcher));

__eCInstance1->callback = callback, __eCInstance1->object = object, __eCInstance1;
}));
}

void __eCNameSpace__eC__types__eInstance_StopWatching(struct __eCNameSpace__eC__types__Instance * instance, struct __eCNameSpace__eC__types__Property * _property, struct __eCNameSpace__eC__types__Instance * object)
{
if(instance && (!_property || _property->isWatchable))
{
if(_property)
{
struct __eCNameSpace__eC__containers__OldList * watchers = (struct __eCNameSpace__eC__containers__OldList *)((unsigned char *)instance + _property->watcherOffset);
struct __eCNameSpace__eC__types__Watcher * watcher;

for(watcher = (*watchers).first; watcher; watcher = watcher->next)
if(watcher->object == object)
{
__eCMethod___eCNameSpace__eC__containers__OldList_Delete((&*watchers), watcher);
break;
}
}
else
{
struct __eCNameSpace__eC__types__Class * _class, * base;

for(_class = ((struct __eCNameSpace__eC__types__Instance *)(char *)instance)->_class; _class; _class = base)
{
if(_class->destructionWatchOffset)
{
struct __eCNameSpace__eC__containers__OldList * watchers = (struct __eCNameSpace__eC__containers__OldList *)((unsigned char *)instance + _class->destructionWatchOffset);
struct __eCNameSpace__eC__types__Watcher * watcher;

for(watcher = (*watchers).first; watcher; watcher = watcher->next)
{
__eCMethod___eCNameSpace__eC__containers__OldList_Delete((&*watchers), watcher);
break;
}
}
for(_property = (struct __eCNameSpace__eC__types__Property *)_class->membersAndProperties.first; _property; _property = _property->next)
{
if(_property->isProperty && _property->isWatchable)
{
struct __eCNameSpace__eC__containers__OldList * watchers = (struct __eCNameSpace__eC__containers__OldList *)((unsigned char *)instance + _property->watcherOffset);
struct __eCNameSpace__eC__types__Watcher * watcher;

for(watcher = (*watchers).first; watcher; watcher = watcher->next)
if(watcher->object == object)
{
__eCMethod___eCNameSpace__eC__containers__OldList_Delete((&*watchers), watcher);
break;
}
}
}
base = _class->base;
if(base && (base->type == 1000 || base->isInstanceClass))
base = (((void *)0));
}
}
}
}

struct __eCNameSpace__eC__types__Class * __eCNameSpace__eC__types__eInstance_GetDesigner(struct __eCNameSpace__eC__types__Instance * instance)
{
if(instance)
return __eCNameSpace__eC__types__eClass_GetDesigner(((struct __eCNameSpace__eC__types__Instance *)(char *)instance)->_class);
return (((void *)0));
}

void __eCNameSpace__eC__types__eProperty_SelfWatch(struct __eCNameSpace__eC__types__Class * _class, const char * name, void (* callback)(void *))
{
if(_class)
{
struct __eCNameSpace__eC__types__Property * _property = __eCNameSpace__eC__types__eClass_FindProperty(_class, name, _class->module);

if(!_property)
_property = __eCNameSpace__eC__types__eClass_AddProperty(_class, name, (((void *)0)), (((void *)0)), (((void *)0)), 4);
__eCMethod___eCNameSpace__eC__containers__OldList_Add(&_class->selfWatchers, __extension__ ({
struct __eCNameSpace__eC__types__SelfWatcher * __eCInstance1 = __eCNameSpace__eC__types__eSystem_New0(sizeof(struct __eCNameSpace__eC__types__SelfWatcher));

__eCInstance1->_property = _property, __eCInstance1->callback = callback, __eCInstance1;
}));
_property->selfWatchable = 1;
}
}

void __eCProp___eCNameSpace__eC__types__DesignerBase_Set_classDesigner(struct __eCNameSpace__eC__types__Instance * this, struct __eCNameSpace__eC__types__Instance * value)
{
__attribute__((unused)) struct __eCNameSpace__eC__types__DesignerBase * __eCPointer___eCNameSpace__eC__types__DesignerBase = (struct __eCNameSpace__eC__types__DesignerBase *)(this ? (((char *)this) + __eCClass___eCNameSpace__eC__types__DesignerBase->offset) : 0);

__eCPointer___eCNameSpace__eC__types__DesignerBase->classDesigner = value;
__eCProp___eCNameSpace__eC__types__DesignerBase_classDesigner && __eCProp___eCNameSpace__eC__types__DesignerBase_classDesigner->selfWatchable ? __eCNameSpace__eC__types__eInstance_FireSelfWatchers(this, __eCProp___eCNameSpace__eC__types__DesignerBase_classDesigner) : (void)0, __eCPropM___eCNameSpace__eC__types__DesignerBase_classDesigner && __eCPropM___eCNameSpace__eC__types__DesignerBase_classDesigner->selfWatchable ? __eCNameSpace__eC__types__eInstance_FireSelfWatchers(this, __eCPropM___eCNameSpace__eC__types__DesignerBase_classDesigner) : (void)0;
}

void __eCProp___eCNameSpace__eC__types__DesignerBase_Set_objectClass(struct __eCNameSpace__eC__types__Instance * this, const char *  value)
{
__attribute__((unused)) struct __eCNameSpace__eC__types__DesignerBase * __eCPointer___eCNameSpace__eC__types__DesignerBase = (struct __eCNameSpace__eC__types__DesignerBase *)(this ? (((char *)this) + __eCClass___eCNameSpace__eC__types__DesignerBase->offset) : 0);

__eCPointer___eCNameSpace__eC__types__DesignerBase->objectClass = value;
__eCProp___eCNameSpace__eC__types__DesignerBase_objectClass && __eCProp___eCNameSpace__eC__types__DesignerBase_objectClass->selfWatchable ? __eCNameSpace__eC__types__eInstance_FireSelfWatchers(this, __eCProp___eCNameSpace__eC__types__DesignerBase_objectClass) : (void)0, __eCPropM___eCNameSpace__eC__types__DesignerBase_objectClass && __eCPropM___eCNameSpace__eC__types__DesignerBase_objectClass->selfWatchable ? __eCNameSpace__eC__types__eInstance_FireSelfWatchers(this, __eCPropM___eCNameSpace__eC__types__DesignerBase_objectClass) : (void)0;
}

void __eCProp___eCNameSpace__eC__types__DesignerBase_Set_isDragging(struct __eCNameSpace__eC__types__Instance * this, unsigned int value)
{
__attribute__((unused)) struct __eCNameSpace__eC__types__DesignerBase * __eCPointer___eCNameSpace__eC__types__DesignerBase = (struct __eCNameSpace__eC__types__DesignerBase *)(this ? (((char *)this) + __eCClass___eCNameSpace__eC__types__DesignerBase->offset) : 0);

__eCPointer___eCNameSpace__eC__types__DesignerBase->isDragging = value;
__eCProp___eCNameSpace__eC__types__DesignerBase_isDragging && __eCProp___eCNameSpace__eC__types__DesignerBase_isDragging->selfWatchable ? __eCNameSpace__eC__types__eInstance_FireSelfWatchers(this, __eCProp___eCNameSpace__eC__types__DesignerBase_isDragging) : (void)0, __eCPropM___eCNameSpace__eC__types__DesignerBase_isDragging && __eCPropM___eCNameSpace__eC__types__DesignerBase_isDragging->selfWatchable ? __eCNameSpace__eC__types__eInstance_FireSelfWatchers(this, __eCPropM___eCNameSpace__eC__types__DesignerBase_isDragging) : (void)0;
}

struct __eCNameSpace__eC__types__SubModule;

struct __eCNameSpace__eC__types__SubModule
{
struct __eCNameSpace__eC__types__SubModule * prev, * next;
struct __eCNameSpace__eC__types__Instance * module;
int importMode;
} eC_gcc_struct;

static struct __eCNameSpace__eC__types__BTNamedLink * __eCNameSpace__eC__types__SearchModule(struct __eCNameSpace__eC__types__Instance * module, const char * name, void * listOffset, unsigned int searchPrivate)
{
struct __eCNameSpace__eC__types__SubModule * subModule;
struct __eCNameSpace__eC__types__BTNamedLink * link;

if(searchPrivate)
{
link = __eCNameSpace__eC__types__SearchNameSpace(&((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->privateNameSpace, name, listOffset);
if(link)
return link;
}
link = __eCNameSpace__eC__types__SearchNameSpace(&((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->publicNameSpace, name, listOffset);
if(link)
return link;
for(subModule = ((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->modules.first; subModule; subModule = subModule->next)
{
if(searchPrivate || subModule->importMode == 1)
{
link = __eCNameSpace__eC__types__SearchModule(subModule->module, name, listOffset, 0);
if(link)
return link;
}
}
return (((void *)0));
}

struct __eCNameSpace__eC__types__DefinedExpression * __eCNameSpace__eC__types__eSystem_FindDefine(struct __eCNameSpace__eC__types__Instance * module, const char * name)
{
if(name && module)
{
struct __eCNameSpace__eC__types__BTNamedLink * link;

link = __eCNameSpace__eC__types__SearchNameSpace(&((struct __eCNameSpace__eC__types__Application *)(((char *)((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application + sizeof(struct __eCNameSpace__eC__types__Module) + sizeof(struct __eCNameSpace__eC__types__Instance))))->systemNameSpace, name, &(*((struct __eCNameSpace__eC__types__NameSpace *)0)).defines);
if(link)
return link->data;
link = __eCNameSpace__eC__types__SearchModule(module, name, &(*((struct __eCNameSpace__eC__types__NameSpace *)0)).defines, 1);
if(link)
return link->data;
}
return (((void *)0));
}

struct __eCNameSpace__eC__types__GlobalFunction * __eCNameSpace__eC__types__eSystem_FindFunction(struct __eCNameSpace__eC__types__Instance * module, const char * name)
{
if(name && module)
{
struct __eCNameSpace__eC__types__BTNamedLink * link;

link = __eCNameSpace__eC__types__SearchNameSpace(&((struct __eCNameSpace__eC__types__Application *)(((char *)((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application + sizeof(struct __eCNameSpace__eC__types__Module) + sizeof(struct __eCNameSpace__eC__types__Instance))))->systemNameSpace, name, &(*((struct __eCNameSpace__eC__types__NameSpace *)0)).functions);
if(link)
return link->data;
link = __eCNameSpace__eC__types__SearchModule(module, name, &(*((struct __eCNameSpace__eC__types__NameSpace *)0)).functions, 1);
if(link)
return link->data;
}
return (((void *)0));
}

struct __eCNameSpace__eC__types__Class *  __eCNameSpace__eC__types__System_FindClass(struct __eCNameSpace__eC__types__Instance *  module, const char *  name, unsigned int registerTemplatesInternalDecl);

struct __eCNameSpace__eC__types__Class * __eCNameSpace__eC__types__eSystem_FindClass(struct __eCNameSpace__eC__types__Instance * module, const char * name)
{
return __eCNameSpace__eC__types__System_FindClass(module, name, 0);
}

static struct __eCNameSpace__eC__types__Instance *  __eCNameSpace__eC__types__Module_Load(struct __eCNameSpace__eC__types__Instance *  fromModule, const char *  name, int importAccess, unsigned int ensureCOM);

struct __eCNameSpace__eC__types__Instance * __eCNameSpace__eC__types__eModule_Load(struct __eCNameSpace__eC__types__Instance * fromModule, const char * name, int importAccess)
{
return __eCNameSpace__eC__types__Module_Load(fromModule, name, importAccess, 1);
}

struct __eCNameSpace__eC__types__Instance * __eCNameSpace__eC__types__eModule_LoadStrict(struct __eCNameSpace__eC__types__Instance * fromModule, const char * name, int importAccess)
{
return __eCNameSpace__eC__types__Module_Load(fromModule, name, importAccess, 0);
}

struct __eCNameSpace__eC__types__GlobalFunction;

struct __eCNameSpace__eC__types__GlobalFunction
{
struct __eCNameSpace__eC__types__GlobalFunction * prev, * next;
const char * name;
int (* function)();
struct __eCNameSpace__eC__types__Instance * module;
struct __eCNameSpace__eC__types__NameSpace * nameSpace;
const char * dataTypeString;
struct __eCNameSpace__eC__types__Instance * dataType;
void * symbol;
} eC_gcc_struct;

void __eCNameSpace__eC__types__eInstance_Evolve(struct __eCNameSpace__eC__types__Instance ** instancePtr, struct __eCNameSpace__eC__types__Class * _class)
{
if(_class && instancePtr && *instancePtr)
{
unsigned int wasApp = 0, wasGuiApp = 0;
struct __eCNameSpace__eC__types__Instance * oldInstance = *instancePtr;
struct __eCNameSpace__eC__types__Instance * instance = (struct __eCNameSpace__eC__types__Instance *)__eCNameSpace__eC__types__eSystem_Renew(*instancePtr, sizeof(unsigned char) * (_class->structSize));
struct __eCNameSpace__eC__types__Class * fromClass = ((struct __eCNameSpace__eC__types__Instance *)(char *)instance)->_class;

*instancePtr = instance;
memset(((unsigned char *)instance) + ((struct __eCNameSpace__eC__types__Instance *)(char *)instance)->_class->structSize, 0, _class->structSize - ((struct __eCNameSpace__eC__types__Instance *)(char *)instance)->_class->structSize);
if((wasApp = !strcmp(((struct __eCNameSpace__eC__types__Instance *)(char *)instance)->_class->name, "Application")) || (wasGuiApp = !strcmp(((struct __eCNameSpace__eC__types__Instance *)(char *)instance)->_class->name, "GuiApplication")))
{
struct __eCNameSpace__eC__types__Instance * module;
struct __eCNameSpace__eC__types__Instance * app = (struct __eCNameSpace__eC__types__Instance *)instance;
struct __eCNameSpace__eC__types__BTNamedLink * link;
struct __eCNameSpace__eC__types__Class * _class;
struct __eCNameSpace__eC__types__NameSpace * nameSpace;

for(module = ((struct __eCNameSpace__eC__types__Application *)(((char *)app + sizeof(struct __eCNameSpace__eC__types__Module) + sizeof(struct __eCNameSpace__eC__types__Instance))))->allModules.first; module; module = ((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->next)
((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application = app;
for(link = (struct __eCNameSpace__eC__types__BTNamedLink *)__eCProp___eCNameSpace__eC__containers__BinaryTree_Get_first(&((struct __eCNameSpace__eC__types__Module *)(((char *)app + sizeof(struct __eCNameSpace__eC__types__Instance))))->privateNameSpace.classes); link; link = (struct __eCNameSpace__eC__types__BTNamedLink *)__eCProp___eCNameSpace__eC__containers__BTNode_Get_next(((struct __eCNameSpace__eC__containers__BTNode *)link)))
{
struct __eCNameSpace__eC__containers__OldLink * t;

((struct __eCNameSpace__eC__types__Class *)link->data)->nameSpace = &((struct __eCNameSpace__eC__types__Module *)(((char *)app + sizeof(struct __eCNameSpace__eC__types__Instance))))->privateNameSpace;
for(t = ((struct __eCNameSpace__eC__types__Class *)link->data)->templatized.first; t; t = t->next)
{
struct __eCNameSpace__eC__types__Class * template = t->data;

template->nameSpace = ((struct __eCNameSpace__eC__types__Class *)link->data)->nameSpace;
}
}
for(link = (struct __eCNameSpace__eC__types__BTNamedLink *)__eCProp___eCNameSpace__eC__containers__BinaryTree_Get_first(&((struct __eCNameSpace__eC__types__Module *)(((char *)app + sizeof(struct __eCNameSpace__eC__types__Instance))))->publicNameSpace.classes); link; link = (struct __eCNameSpace__eC__types__BTNamedLink *)__eCProp___eCNameSpace__eC__containers__BTNode_Get_next(((struct __eCNameSpace__eC__containers__BTNode *)link)))
{
struct __eCNameSpace__eC__containers__OldLink * t;

((struct __eCNameSpace__eC__types__Class *)link->data)->nameSpace = &((struct __eCNameSpace__eC__types__Module *)(((char *)app + sizeof(struct __eCNameSpace__eC__types__Instance))))->publicNameSpace;
for(t = ((struct __eCNameSpace__eC__types__Class *)link->data)->templatized.first; t; t = t->next)
{
struct __eCNameSpace__eC__types__Class * template = t->data;

template->nameSpace = ((struct __eCNameSpace__eC__types__Class *)link->data)->nameSpace;
}
}
for(link = (struct __eCNameSpace__eC__types__BTNamedLink *)__eCProp___eCNameSpace__eC__containers__BinaryTree_Get_first(&((struct __eCNameSpace__eC__types__Module *)(((char *)app + sizeof(struct __eCNameSpace__eC__types__Instance))))->privateNameSpace.defines); link; link = (struct __eCNameSpace__eC__types__BTNamedLink *)__eCProp___eCNameSpace__eC__containers__BTNode_Get_next(((struct __eCNameSpace__eC__containers__BTNode *)link)))
((struct __eCNameSpace__eC__types__DefinedExpression *)link->data)->nameSpace = &((struct __eCNameSpace__eC__types__Module *)(((char *)app + sizeof(struct __eCNameSpace__eC__types__Instance))))->privateNameSpace;
for(link = (struct __eCNameSpace__eC__types__BTNamedLink *)__eCProp___eCNameSpace__eC__containers__BinaryTree_Get_first(&((struct __eCNameSpace__eC__types__Module *)(((char *)app + sizeof(struct __eCNameSpace__eC__types__Instance))))->publicNameSpace.defines); link; link = (struct __eCNameSpace__eC__types__BTNamedLink *)__eCProp___eCNameSpace__eC__containers__BTNode_Get_next(((struct __eCNameSpace__eC__containers__BTNode *)link)))
((struct __eCNameSpace__eC__types__DefinedExpression *)link->data)->nameSpace = &((struct __eCNameSpace__eC__types__Module *)(((char *)app + sizeof(struct __eCNameSpace__eC__types__Instance))))->publicNameSpace;
for(link = (struct __eCNameSpace__eC__types__BTNamedLink *)__eCProp___eCNameSpace__eC__containers__BinaryTree_Get_first(&((struct __eCNameSpace__eC__types__Module *)(((char *)app + sizeof(struct __eCNameSpace__eC__types__Instance))))->privateNameSpace.functions); link; link = (struct __eCNameSpace__eC__types__BTNamedLink *)__eCProp___eCNameSpace__eC__containers__BTNode_Get_next(((struct __eCNameSpace__eC__containers__BTNode *)link)))
((struct __eCNameSpace__eC__types__GlobalFunction *)link->data)->nameSpace = &((struct __eCNameSpace__eC__types__Module *)(((char *)app + sizeof(struct __eCNameSpace__eC__types__Instance))))->privateNameSpace;
for(link = (struct __eCNameSpace__eC__types__BTNamedLink *)__eCProp___eCNameSpace__eC__containers__BinaryTree_Get_first(&((struct __eCNameSpace__eC__types__Module *)(((char *)app + sizeof(struct __eCNameSpace__eC__types__Instance))))->publicNameSpace.functions); link; link = (struct __eCNameSpace__eC__types__BTNamedLink *)__eCProp___eCNameSpace__eC__containers__BTNode_Get_next(((struct __eCNameSpace__eC__containers__BTNode *)link)))
((struct __eCNameSpace__eC__types__GlobalFunction *)link->data)->nameSpace = &((struct __eCNameSpace__eC__types__Module *)(((char *)app + sizeof(struct __eCNameSpace__eC__types__Instance))))->publicNameSpace;
for(nameSpace = (struct __eCNameSpace__eC__types__NameSpace *)__eCProp___eCNameSpace__eC__containers__BinaryTree_Get_first(&((struct __eCNameSpace__eC__types__Module *)(((char *)app + sizeof(struct __eCNameSpace__eC__types__Instance))))->privateNameSpace.nameSpaces); nameSpace; nameSpace = (struct __eCNameSpace__eC__types__NameSpace *)__eCProp___eCNameSpace__eC__containers__BTNode_Get_next(((struct __eCNameSpace__eC__containers__BTNode *)nameSpace)))
(*nameSpace).parent = &((struct __eCNameSpace__eC__types__Module *)(((char *)app + sizeof(struct __eCNameSpace__eC__types__Instance))))->privateNameSpace;
for(nameSpace = (struct __eCNameSpace__eC__types__NameSpace *)__eCProp___eCNameSpace__eC__containers__BinaryTree_Get_first(&((struct __eCNameSpace__eC__types__Module *)(((char *)app + sizeof(struct __eCNameSpace__eC__types__Instance))))->publicNameSpace.nameSpaces); nameSpace; nameSpace = (struct __eCNameSpace__eC__types__NameSpace *)__eCProp___eCNameSpace__eC__containers__BTNode_Get_next(((struct __eCNameSpace__eC__containers__BTNode *)nameSpace)))
(*nameSpace).parent = &((struct __eCNameSpace__eC__types__Module *)(((char *)app + sizeof(struct __eCNameSpace__eC__types__Instance))))->publicNameSpace;
for(link = (struct __eCNameSpace__eC__types__BTNamedLink *)__eCProp___eCNameSpace__eC__containers__BinaryTree_Get_first(&((struct __eCNameSpace__eC__types__Application *)(((char *)app + sizeof(struct __eCNameSpace__eC__types__Module) + sizeof(struct __eCNameSpace__eC__types__Instance))))->systemNameSpace.classes); link; link = (struct __eCNameSpace__eC__types__BTNamedLink *)__eCProp___eCNameSpace__eC__containers__BTNode_Get_next(((struct __eCNameSpace__eC__containers__BTNode *)link)))
{
struct __eCNameSpace__eC__containers__OldLink * t;

((struct __eCNameSpace__eC__types__Class *)link->data)->nameSpace = &((struct __eCNameSpace__eC__types__Application *)(((char *)app + sizeof(struct __eCNameSpace__eC__types__Module) + sizeof(struct __eCNameSpace__eC__types__Instance))))->systemNameSpace;
for(t = ((struct __eCNameSpace__eC__types__Class *)link->data)->templatized.first; t; t = t->next)
{
struct __eCNameSpace__eC__types__Class * template = t->data;

template->nameSpace = ((struct __eCNameSpace__eC__types__Class *)link->data)->nameSpace;
}
}
for(link = (struct __eCNameSpace__eC__types__BTNamedLink *)__eCProp___eCNameSpace__eC__containers__BinaryTree_Get_first(&((struct __eCNameSpace__eC__types__Application *)(((char *)app + sizeof(struct __eCNameSpace__eC__types__Module) + sizeof(struct __eCNameSpace__eC__types__Instance))))->systemNameSpace.defines); link; link = (struct __eCNameSpace__eC__types__BTNamedLink *)__eCProp___eCNameSpace__eC__containers__BTNode_Get_next(((struct __eCNameSpace__eC__containers__BTNode *)link)))
((struct __eCNameSpace__eC__types__DefinedExpression *)link->data)->nameSpace = &((struct __eCNameSpace__eC__types__Application *)(((char *)app + sizeof(struct __eCNameSpace__eC__types__Module) + sizeof(struct __eCNameSpace__eC__types__Instance))))->systemNameSpace;
for(link = (struct __eCNameSpace__eC__types__BTNamedLink *)__eCProp___eCNameSpace__eC__containers__BinaryTree_Get_first(&((struct __eCNameSpace__eC__types__Application *)(((char *)app + sizeof(struct __eCNameSpace__eC__types__Module) + sizeof(struct __eCNameSpace__eC__types__Instance))))->systemNameSpace.functions); link; link = (struct __eCNameSpace__eC__types__BTNamedLink *)__eCProp___eCNameSpace__eC__containers__BTNode_Get_next(((struct __eCNameSpace__eC__containers__BTNode *)link)))
((struct __eCNameSpace__eC__types__GlobalFunction *)link->data)->nameSpace = &((struct __eCNameSpace__eC__types__Application *)(((char *)app + sizeof(struct __eCNameSpace__eC__types__Module) + sizeof(struct __eCNameSpace__eC__types__Instance))))->systemNameSpace;
for(link = (struct __eCNameSpace__eC__types__BTNamedLink *)__eCProp___eCNameSpace__eC__containers__BinaryTree_Get_first(&((struct __eCNameSpace__eC__types__Application *)(((char *)app + sizeof(struct __eCNameSpace__eC__types__Module) + sizeof(struct __eCNameSpace__eC__types__Instance))))->systemNameSpace.functions); link; link = (struct __eCNameSpace__eC__types__BTNamedLink *)__eCProp___eCNameSpace__eC__containers__BTNode_Get_next(((struct __eCNameSpace__eC__containers__BTNode *)link)))
((struct __eCNameSpace__eC__types__GlobalFunction *)link->data)->nameSpace = &((struct __eCNameSpace__eC__types__Application *)(((char *)app + sizeof(struct __eCNameSpace__eC__types__Module) + sizeof(struct __eCNameSpace__eC__types__Instance))))->systemNameSpace;
for(nameSpace = (struct __eCNameSpace__eC__types__NameSpace *)__eCProp___eCNameSpace__eC__containers__BinaryTree_Get_first(&((struct __eCNameSpace__eC__types__Application *)(((char *)app + sizeof(struct __eCNameSpace__eC__types__Module) + sizeof(struct __eCNameSpace__eC__types__Instance))))->systemNameSpace.nameSpaces); nameSpace; nameSpace = (struct __eCNameSpace__eC__types__NameSpace *)__eCProp___eCNameSpace__eC__containers__BTNode_Get_next(((struct __eCNameSpace__eC__containers__BTNode *)nameSpace)))
(*nameSpace).parent = &((struct __eCNameSpace__eC__types__Application *)(((char *)app + sizeof(struct __eCNameSpace__eC__types__Module) + sizeof(struct __eCNameSpace__eC__types__Instance))))->systemNameSpace;
for(_class = ((struct __eCNameSpace__eC__types__Module *)(((char *)app + sizeof(struct __eCNameSpace__eC__types__Instance))))->classes.first; _class; _class = _class->next)
{
struct __eCNameSpace__eC__containers__OldLink * templateLink;

_class->module = (struct __eCNameSpace__eC__types__Instance *)app;
for(templateLink = _class->templatized.first; templateLink; templateLink = templateLink->next)
{
struct __eCNameSpace__eC__types__Class * template = templateLink->data;

if(template->module == oldInstance)
template->module = _class->module;
}
}
for(module = ((struct __eCNameSpace__eC__types__Application *)(((char *)app + sizeof(struct __eCNameSpace__eC__types__Module) + sizeof(struct __eCNameSpace__eC__types__Instance))))->allModules.first; module; module = ((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->next)
{
for(_class = ((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->classes.first; _class; _class = _class->next)
{
struct __eCNameSpace__eC__containers__OldLink * templateLink;
struct __eCNameSpace__eC__types__Instance * oldModule = _class->module;

_class->module = module;
for(templateLink = _class->templatized.first; templateLink; templateLink = templateLink->next)
{
struct __eCNameSpace__eC__types__Class * template = templateLink->data;

if(template->module == oldModule)
template->module = _class->module;
}
}
}
((struct __eCNameSpace__eC__types__Module *)(((char *)app + sizeof(struct __eCNameSpace__eC__types__Instance))))->application = app;
}
{
struct __eCNameSpace__eC__types__Class * base;

for(base = ((struct __eCNameSpace__eC__types__Instance *)(char *)instance)->_class; base && base->type == 0 && base->count; base = base->base)
(base->templateClass ? base->templateClass : base)->count--;
}
((struct __eCNameSpace__eC__types__Instance *)(char *)instance)->_class = _class;
((struct __eCNameSpace__eC__types__Instance *)(char *)instance)->_vTbl = _class->_vTbl;
if(!__eCNameSpace__eC__types__ConstructInstance(instance, _class, fromClass, 0))
{
__eCNameSpace__eC__types___free(instance);
*instancePtr = (((void *)0));
}
}
}

struct __eCNameSpace__eC__types__GlobalFunction * __eCNameSpace__eC__types__eSystem_RegisterFunction(const char * name, const char * type, void * func, struct __eCNameSpace__eC__types__Instance * module, int declMode)
{
struct __eCNameSpace__eC__types__NameSpace * nameSpace = (((void *)0));
int start = 0, c;

nameSpace = (declMode == 1) ? &((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->publicNameSpace : &((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->privateNameSpace;
if(declMode == 4)
nameSpace = &((struct __eCNameSpace__eC__types__Application *)(((char *)((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application + sizeof(struct __eCNameSpace__eC__types__Module) + sizeof(struct __eCNameSpace__eC__types__Instance))))->systemNameSpace;
if(declMode != 3)
{
for(c = 0; name[c]; c++)
{
if(name[c] == '.' || (name[c] == ':' && name[c + 1] == ':'))
{
struct __eCNameSpace__eC__types__NameSpace * newSpace;
int len = c - start;
char * spaceName = __eCNameSpace__eC__types___malloc(len + 1);

if(len)
strncpy(spaceName, name + start, len);
spaceName[len] = '\0';
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
}
else
c = (int)strlen(name);
if(c - start && !__eCMethod___eCNameSpace__eC__containers__BinaryTree_FindString(&(*nameSpace).functions, name + start))
{
struct __eCNameSpace__eC__types__GlobalFunction * function = (function = __eCNameSpace__eC__types__eSystem_New0(sizeof(struct __eCNameSpace__eC__types__GlobalFunction)), function->name = __eCNameSpace__eC__types__CopyString(name), function->nameSpace = nameSpace, function->dataTypeString = __eCNameSpace__eC__types__CopyString(type), function->function = func, function->module = module, function);

__eCMethod___eCNameSpace__eC__containers__BinaryTree_Add(&(*nameSpace).functions, (struct __eCNameSpace__eC__containers__BTNode *)__extension__ ({
struct __eCNameSpace__eC__types__BTNamedLink * __eCInstance1 = __eCNameSpace__eC__types__eSystem_New0(sizeof(struct __eCNameSpace__eC__types__BTNamedLink));

__eCInstance1->name = function->name + start, __eCInstance1->data = function, __eCInstance1;
}));
__eCMethod___eCNameSpace__eC__containers__OldList_Add(&((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->functions, function);
return function;
}
return (((void *)0));
}

struct __eCNameSpace__eC__types__ClassTemplateParameter;

struct __eCNameSpace__eC__types__ClassTemplateParameter
{
struct __eCNameSpace__eC__types__ClassTemplateParameter * prev, * next;
const char * name;
int type;
union
{
const char * dataTypeString;
int memberType;
} eC_gcc_struct __anon1;
struct __eCNameSpace__eC__types__ClassTemplateArgument defaultArg;
void * param;
} eC_gcc_struct;

static void __eCNameSpace__eC__types__FreeTemplateArg(struct __eCNameSpace__eC__types__Class * template, struct __eCNameSpace__eC__types__ClassTemplateParameter * param, int id)
{
switch(param->type)
{
case 0:
(__eCNameSpace__eC__types__eSystem_Delete((void *)template->templateArgs[id].__anon1.__anon1.dataTypeString), template->templateArgs[id].__anon1.__anon1.dataTypeString = 0);
template->templateArgs[id].__anon1.__anon1.dataTypeClass = (((void *)0));
break;
case 1:
(__eCNameSpace__eC__types__eSystem_Delete((void *)template->templateArgs[id].__anon1.__anon2.memberString), template->templateArgs[id].__anon1.__anon2.memberString = 0);
break;
case 2:
break;
}
}

static void __eCNameSpace__eC__types__FreeTemplateArgs(struct __eCNameSpace__eC__types__Class * template)
{
if(template->templateArgs)
{
struct __eCNameSpace__eC__types__Class * _class;

for(_class = template; _class; _class = _class->base)
{
struct __eCNameSpace__eC__types__Class * prevClass;
struct __eCNameSpace__eC__types__ClassTemplateParameter * param;
int id = 0;

if(_class->templateClass)
_class = _class->templateClass;
for(prevClass = _class->base; prevClass; prevClass = prevClass->base)
{
if(prevClass->templateClass)
prevClass = prevClass->templateClass;
id += prevClass->templateParams.count;
}
if(id < template->numParams)
{
for(param = _class->templateParams.first; param; param = param->next)
{
switch(param->type)
{
case 0:
(__eCNameSpace__eC__types__eSystem_Delete((void *)template->templateArgs[id].__anon1.__anon1.dataTypeString), template->templateArgs[id].__anon1.__anon1.dataTypeString = 0);
template->templateArgs[id].__anon1.__anon1.dataTypeClass = (((void *)0));
break;
case 1:
(__eCNameSpace__eC__types__eSystem_Delete((void *)template->templateArgs[id].__anon1.__anon2.memberString), template->templateArgs[id].__anon1.__anon2.memberString = 0);
break;
case 2:
break;
}
id++;
}
}
}
}
}

static void __eCNameSpace__eC__types__CopyTemplateArg(struct __eCNameSpace__eC__types__ClassTemplateParameter * param, struct __eCNameSpace__eC__types__ClassTemplateArgument * arg)
{
switch(param->type)
{
case 0:
arg->__anon1.__anon1.dataTypeString = __eCNameSpace__eC__types__CopyString(arg->__anon1.__anon1.dataTypeString);
break;
case 2:
break;
case 1:
arg->__anon1.__anon2.memberString = __eCNameSpace__eC__types__CopyString(arg->__anon1.__anon2.memberString);
break;
}
}

unsigned int __eCNameSpace__eC__types__eClass_IsDerived(struct __eCNameSpace__eC__types__Class * _class, struct __eCNameSpace__eC__types__Class * from)
{
if(!_class && !from)
return 1;
if(_class && from && (_class->templateClass || from->templateClass))
{
if(__eCNameSpace__eC__types__eClass_IsDerived(_class->templateClass ? _class->templateClass : _class, from->templateClass ? from->templateClass : from))
{
if(!from->templateClass)
return 1;
else if(!_class->templateClass && _class == from->templateClass)
return 0;
else
{
struct __eCNameSpace__eC__types__Class * sClass;

for(sClass = from; sClass; sClass = sClass->base)
{
if(sClass->templateParams.first)
{
struct __eCNameSpace__eC__types__ClassTemplateParameter * param;
struct __eCNameSpace__eC__types__Class * nextClass;
int p = 0;

for(nextClass = sClass->base; nextClass; nextClass = nextClass->base)
p += nextClass->templateParams.count;
for(param = sClass->templateParams.first; param; param = param->next, p++)
{
struct __eCNameSpace__eC__types__ClassTemplateArgument * arg = &_class->templateArgs[p];
struct __eCNameSpace__eC__types__ClassTemplateArgument * fArg = &from->templateArgs[p];

if(param->type == 0)
{
if((*arg).__anon1.__anon1.dataTypeString != (*fArg).__anon1.__anon1.dataTypeString && (*arg).__anon1.__anon1.dataTypeString && (*fArg).__anon1.__anon1.dataTypeString && strcmp((*arg).__anon1.__anon1.dataTypeString, (*fArg).__anon1.__anon1.dataTypeString))
break;
}
else if(param->type == 1)
{
if((*arg).__anon1.__anon2.__anon1.member != (*fArg).__anon1.__anon2.__anon1.member)
break;
}
else if(param->type == 2)
{
if((*arg).__anon1.expression.__anon1.ui64 != (*fArg).__anon1.expression.__anon1.ui64)
break;
}
}
if(param)
return 0;
}
}
return 1;
}
}
}
else
{
for(; _class && from; _class = _class->base)
{
if(_class == from || _class->templateClass == from || ((_class->type == 1000 || (_class->type == 0 && _class->isInstanceClass)) && from->name && !strcmp(_class->name, from->name)))
return 1;
}
}
return 0;
}

static void __eCNameSpace__eC__types__FreeTemplatesDerivatives(struct __eCNameSpace__eC__types__Class * base)
{
struct __eCNameSpace__eC__containers__OldLink * derivative, * templateLink;

for(derivative = base->derivatives.first; derivative; derivative = derivative->next)
{
struct __eCNameSpace__eC__types__Class * _class = derivative->data;

if(_class->templateArgs)
{
__eCNameSpace__eC__types__FreeTemplateArgs(_class);
(__eCNameSpace__eC__types__eSystem_Delete(_class->templateArgs), _class->templateArgs = 0);
}
__eCNameSpace__eC__types__FreeTemplatesDerivatives(_class);
}
for(templateLink = base->templatized.first; templateLink; templateLink = templateLink->next)
{
struct __eCNameSpace__eC__types__Class * _class = templateLink->data;

if(_class->templateArgs)
{
__eCNameSpace__eC__types__FreeTemplateArgs(_class);
(__eCNameSpace__eC__types__eSystem_Delete(_class->templateArgs), _class->templateArgs = 0);
}
__eCNameSpace__eC__types__FreeTemplatesDerivatives(_class);
}
}

static void __eCNameSpace__eC__types__FreeTemplate(struct __eCNameSpace__eC__types__Class * template)
{
struct __eCNameSpace__eC__containers__OldLink * deriv;

if(template->nameSpace)
{
struct __eCNameSpace__eC__types__BTNamedLink * link = (struct __eCNameSpace__eC__types__BTNamedLink *)__eCMethod___eCNameSpace__eC__containers__BinaryTree_FindString(&(*template->nameSpace).classes, template->name);

if(link)
__eCMethod___eCNameSpace__eC__containers__BinaryTree_Delete(&(*template->nameSpace).classes, (struct __eCNameSpace__eC__containers__BTNode *)link);
}
__eCNameSpace__eC__types__FreeTemplatesDerivatives(template);
__eCNameSpace__eC__types__FreeTemplateArgs(template);
while((deriv = template->derivatives.first))
{
((struct __eCNameSpace__eC__types__Class *)deriv->data)->base = (((void *)0));
__eCMethod___eCNameSpace__eC__containers__OldList_Delete(&template->derivatives, deriv);
}
(__eCNameSpace__eC__types__eSystem_Delete((void *)template->fullName), template->fullName = 0);
(__eCNameSpace__eC__types__eSystem_Delete((void *)template->name), template->name = 0);
(__eCNameSpace__eC__types__eSystem_Delete(template->templateArgs), template->templateArgs = 0);
(__eCNameSpace__eC__types__eSystem_Delete((void *)template->dataTypeString), template->dataTypeString = 0);
if(template->module)
__eCMethod___eCNameSpace__eC__containers__OldList_Delete(&((struct __eCNameSpace__eC__types__Module *)(((char *)template->module + sizeof(struct __eCNameSpace__eC__types__Instance))))->classes, template);
else
__eCNameSpace__eC__types___free(template);
}

static void __eCNameSpace__eC__types__FreeTemplates(struct __eCNameSpace__eC__types__Class * _class)
{
struct __eCNameSpace__eC__containers__OldLink * deriv, * template;

for(deriv = _class->derivatives.first; deriv; deriv = deriv->next)
{
__eCNameSpace__eC__types__FreeTemplates(deriv->data);
}
__eCNameSpace__eC__types__FreeTemplateArgs(_class);
(__eCNameSpace__eC__types__eSystem_Delete(_class->templateArgs), _class->templateArgs = 0);
(__eCNameSpace__eC__types__eSystem_Delete((void *)_class->dataTypeString), _class->dataTypeString = 0);
while((template = _class->templatized.first))
{
__eCNameSpace__eC__types__FreeTemplates(template->data);
__eCNameSpace__eC__types__FreeTemplate(template->data);
__eCMethod___eCNameSpace__eC__containers__OldList_Delete(&_class->templatized, template);
}
}

void __eCNameSpace__eC__types__eClass_Unregister(struct __eCNameSpace__eC__types__Class * _class)
{
struct __eCNameSpace__eC__types__BTNamedLink * namedLink;
struct __eCNameSpace__eC__types__DataMember * member;
struct __eCNameSpace__eC__types__Method * method;
struct __eCNameSpace__eC__containers__OldLink * deriv, * template;
struct __eCNameSpace__eC__types__ClassProperty * classProp;
struct __eCNameSpace__eC__types__ClassTemplateParameter * param;

if(_class->templateClass)
{
struct __eCNameSpace__eC__containers__OldLink * templateLink;

for(templateLink = _class->templateClass->templatized.first; templateLink; templateLink = templateLink->next)
{
if(templateLink->data == _class)
{
__eCMethod___eCNameSpace__eC__containers__OldList_Delete(&_class->templateClass->templatized, templateLink);
break;
}
}
__eCNameSpace__eC__types__FreeTemplate(_class);
return ;
}
(__eCNameSpace__eC__types__eSystem_Delete(_class->_vTbl), _class->_vTbl = 0);
__eCNameSpace__eC__types__FreeTemplates(_class);
while((template = _class->templatized.first))
{
__eCNameSpace__eC__types__FreeTemplate(template->data);
__eCMethod___eCNameSpace__eC__containers__OldList_Delete(&_class->templatized, template);
}
while((member = _class->membersAndProperties.first))
{
if(!member->isProperty && (member->type == 1 || member->type == 2))
__eCNameSpace__eC__types__DataMember_Free(member);
(__eCNameSpace__eC__types__eSystem_Delete((void *)member->name), member->name = 0);
(__eCNameSpace__eC__types__eSystem_Delete((void *)member->dataTypeString), member->dataTypeString = 0);
__eCMethod___eCNameSpace__eC__containers__OldList_Delete(&_class->membersAndProperties, member);
}
while((member = _class->conversions.first))
{
(__eCNameSpace__eC__types__eSystem_Delete((void *)member->name), member->name = 0);
(__eCNameSpace__eC__types__eSystem_Delete((void *)member->dataTypeString), member->dataTypeString = 0);
__eCMethod___eCNameSpace__eC__containers__OldList_Delete(&_class->conversions, member);
}
while((namedLink = (struct __eCNameSpace__eC__types__BTNamedLink *)__eCProp___eCNameSpace__eC__containers__BinaryTree_Get_first(&_class->prop)))
{
__eCMethod___eCNameSpace__eC__containers__BinaryTree_Delete(&_class->prop, (struct __eCNameSpace__eC__containers__BTNode *)namedLink);
}
while((namedLink = (struct __eCNameSpace__eC__types__BTNamedLink *)__eCProp___eCNameSpace__eC__containers__BinaryTree_Get_first(&_class->members)))
{
__eCMethod___eCNameSpace__eC__containers__BinaryTree_Delete(&_class->members, (struct __eCNameSpace__eC__containers__BTNode *)namedLink);
}
while((classProp = (struct __eCNameSpace__eC__types__ClassProperty *)__eCProp___eCNameSpace__eC__containers__BinaryTree_Get_first(&_class->classProperties)))
{
(__eCNameSpace__eC__types__eSystem_Delete((void *)classProp->name), classProp->name = 0);
(__eCNameSpace__eC__types__eSystem_Delete((void *)classProp->dataTypeString), classProp->dataTypeString = 0);
__eCMethod___eCNameSpace__eC__containers__BinaryTree_Delete(&_class->classProperties, (struct __eCNameSpace__eC__containers__BTNode *)classProp);
}
while((method = (struct __eCNameSpace__eC__types__Method *)__eCProp___eCNameSpace__eC__containers__BinaryTree_Get_first(&_class->methods)))
{
(__eCNameSpace__eC__types__eSystem_Delete((void *)method->name), method->name = 0);
(__eCNameSpace__eC__types__eSystem_Delete((void *)method->dataTypeString), method->dataTypeString = 0);
__eCMethod___eCNameSpace__eC__containers__BinaryTree_Delete(&_class->methods, (struct __eCNameSpace__eC__containers__BTNode *)method);
}
if(_class->type == 4)
{
struct __eCNameSpace__eC__types__EnumClassData * data = (struct __eCNameSpace__eC__types__EnumClassData *)_class->data;

__eCMethod___eCNameSpace__eC__containers__OldList_Free(&data->values, (void *)__eCNameSpace__eC__types__FreeEnumValue);
}
__eCMethod___eCNameSpace__eC__containers__OldList_Free(&_class->delayedCPValues, (((void *)0)));
__eCMethod___eCNameSpace__eC__containers__OldList_Free(&_class->selfWatchers, (((void *)0)));
if(_class->base)
{
struct __eCNameSpace__eC__types__Class * base = _class->base;

for(deriv = base->derivatives.first; deriv; deriv = deriv->next)
{
if(deriv->data == _class)
break;
}
if(deriv)
__eCMethod___eCNameSpace__eC__containers__OldList_Delete(&base->derivatives, deriv);
}
while((deriv = _class->derivatives.first))
{
((struct __eCNameSpace__eC__types__Class *)deriv->data)->base = (((void *)0));
__eCMethod___eCNameSpace__eC__containers__OldList_Delete(&_class->derivatives, deriv);
}
if(_class->nameSpace)
{
struct __eCNameSpace__eC__types__BTNamedLink * link = (struct __eCNameSpace__eC__types__BTNamedLink *)__eCMethod___eCNameSpace__eC__containers__BinaryTree_FindString(&(*_class->nameSpace).classes, _class->name);

__eCMethod___eCNameSpace__eC__containers__BinaryTree_Delete(&(*_class->nameSpace).classes, (struct __eCNameSpace__eC__containers__BTNode *)link);
}
(__eCNameSpace__eC__types__eSystem_Delete((void *)_class->name), _class->name = 0);
(__eCNameSpace__eC__types__eSystem_Delete((void *)_class->fullName), _class->fullName = 0);
(__eCNameSpace__eC__types__eSystem_Delete((void *)_class->dataTypeString), _class->dataTypeString = 0);
(__eCNameSpace__eC__types__eSystem_Delete(_class->data), _class->data = 0);
while((param = _class->templateParams.first))
{
switch(param->type)
{
case 0:
(__eCNameSpace__eC__types__eSystem_Delete((void *)param->defaultArg.__anon1.__anon1.dataTypeString), param->defaultArg.__anon1.__anon1.dataTypeString = 0);
break;
case 1:
(__eCNameSpace__eC__types__eSystem_Delete((void *)param->defaultArg.__anon1.__anon2.memberString), param->defaultArg.__anon1.__anon2.memberString = 0);
break;
case 2:
break;
}
if(param->type != 1)
(__eCNameSpace__eC__types__eSystem_Delete((void *)param->__anon1.dataTypeString), param->__anon1.dataTypeString = 0);
(__eCNameSpace__eC__types__eSystem_Delete((void *)param->name), param->name = 0);
__eCMethod___eCNameSpace__eC__containers__OldList_Delete(&_class->templateParams, param);
}
__eCNameSpace__eC__types___free(_class);
}

void __eCNameSpace__eC__types__eInstance_Delete(struct __eCNameSpace__eC__types__Instance * instance)
{
if(instance)
{
struct __eCNameSpace__eC__types__Class * _class, * base;
unsigned int ownVtbl;

ownVtbl = ((struct __eCNameSpace__eC__types__Instance *)(char *)instance)->_vTbl != ((struct __eCNameSpace__eC__types__Instance *)(char *)instance)->_class->_vTbl;
for(_class = ((struct __eCNameSpace__eC__types__Instance *)(char *)instance)->_class; _class; _class = base)
{
if(_class->templateClass)
_class = _class->templateClass;
if(_class->destructionWatchOffset)
{
struct __eCNameSpace__eC__containers__OldList * watchers = (struct __eCNameSpace__eC__containers__OldList *)((unsigned char *)instance + _class->destructionWatchOffset);
struct __eCNameSpace__eC__types__Watcher * watcher, * next;

for(watcher = (*watchers).first; watcher; watcher = next)
{
next = watcher->next;
__eCMethod___eCNameSpace__eC__containers__OldList_Remove((&*watchers), watcher);
watcher->callback(watcher->object, instance);
__eCMethod___eCNameSpace__eC__containers__OldList_Delete((&*watchers), watcher);
}
}
base = _class->base;
if(base && (base->type == 1000 || base->isInstanceClass))
base = (((void *)0));
if(_class->Destructor)
_class->Destructor(instance);
}
for(_class = ((struct __eCNameSpace__eC__types__Instance *)(char *)instance)->_class; _class; _class = base)
{
int cCount;

if(_class->templateClass)
_class = _class->templateClass;
base = _class->base;
cCount = --(_class->templateClass ? _class->templateClass : _class)->count;
if(!cCount && _class->type == 0 && !_class->module)
{
__eCNameSpace__eC__types__eClass_Unregister(_class);
}
}
if(ownVtbl)
{
(__eCNameSpace__eC__types__eSystem_Delete(((struct __eCNameSpace__eC__types__Instance *)(char *)instance)->_vTbl), ((struct __eCNameSpace__eC__types__Instance * )(char * )instance)->_vTbl = 0);
}
__eCNameSpace__eC__types___free(instance);
}
}

struct __eCNameSpace__eC__types__ClassTemplateParameter * __eCNameSpace__eC__types__eClass_AddTemplateParameter(struct __eCNameSpace__eC__types__Class * _class, const char * name, int type, const void * info, struct __eCNameSpace__eC__types__ClassTemplateArgument * defaultArg)
{
if(_class && name)
{
struct __eCNameSpace__eC__types__ClassTemplateParameter * param;

for(param = _class->templateParams.first; param; param = param->next)
{
if(!strcmp(param->name, name))
return param;
}
param = __extension__ ({
struct __eCNameSpace__eC__types__ClassTemplateParameter * __eCInstance1 = __eCNameSpace__eC__types__eSystem_New0(sizeof(struct __eCNameSpace__eC__types__ClassTemplateParameter));

__eCInstance1->name = __eCNameSpace__eC__types__CopyString(name), __eCInstance1->type = type, __eCInstance1->__anon1.dataTypeString = (type == 1) ? info : __eCNameSpace__eC__types__CopyString(info), __eCInstance1;
});
{
struct __eCNameSpace__eC__types__Class * c = __eCNameSpace__eC__types__eSystem_FindClass(_class->module, name);

if(c && c->internalDecl)
{
__eCMethod___eCNameSpace__eC__containers__OldList_Remove(&((struct __eCNameSpace__eC__types__Module *)(((char *)c->module + sizeof(struct __eCNameSpace__eC__types__Instance))))->classes, c);
__eCNameSpace__eC__types__eClass_Unregister(c);
}
}
if(defaultArg != (((void *)0)))
{
param->defaultArg = *defaultArg;
__eCNameSpace__eC__types__CopyTemplateArg(param, &param->defaultArg);
}
__eCMethod___eCNameSpace__eC__containers__OldList_Add(&_class->templateParams, param);
return param;
}
return (((void *)0));
}

void __eCNameSpace__eC__types__eInstance_DecRef(struct __eCNameSpace__eC__types__Instance * instance)
{
if(instance)
{
((struct __eCNameSpace__eC__types__Instance *)(char *)instance)->_refCount--;
if(((struct __eCNameSpace__eC__types__Instance *)(char *)instance)->_refCount <= 0)
{
__eCNameSpace__eC__types__eInstance_Delete(instance);
}
}
}

static struct __eCNameSpace__eC__types__Instance * __eCNameSpace__eC__types__Module_Load(struct __eCNameSpace__eC__types__Instance * fromModule, const char * name, int importAccess, unsigned int ensureCOM)
{
unsigned int (eC_stdcall * Load)(struct __eCNameSpace__eC__types__Instance * module) = (((void *)0));
unsigned int (eC_stdcall * Unload)(struct __eCNameSpace__eC__types__Instance * module) = (((void *)0));
struct __eCNameSpace__eC__types__Instance * module;

for(module = ((struct __eCNameSpace__eC__types__Application *)(((char *)((struct __eCNameSpace__eC__types__Module *)(((char *)fromModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->application + sizeof(struct __eCNameSpace__eC__types__Module) + sizeof(struct __eCNameSpace__eC__types__Instance))))->allModules.first; module; module = ((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->next)
{
if(!strcmp(((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->name, name))
break;
}
if(ensureCOM && (!strcmp(name, "ecrt")))
{
for(module = ((struct __eCNameSpace__eC__types__Application *)(((char *)((struct __eCNameSpace__eC__types__Module *)(((char *)fromModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->application + sizeof(struct __eCNameSpace__eC__types__Module) + sizeof(struct __eCNameSpace__eC__types__Instance))))->allModules.first; module; module = ((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->next)
{
if(!strcmp(((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->name, "ecrt"))
break;
}
}
if(!module)
{
void * library = (((void *)0));

if(ensureCOM && !strcmp(name, "ecrt"))
{
Load = (void *)(__eCDll_Load_ecrt);
Unload = (void *)(__eCDll_Unload_ecrt);
}
else
{
const char * libLocation = (((void *)0));

library = Instance_Module_Load(libLocation, name, (void *)(&Load), (void *)(&Unload));
}
if(Load)
{
module = (struct __eCNameSpace__eC__types__Instance *)__eCNameSpace__eC__types__eInstance_New(__eCNameSpace__eC__types__eSystem_FindClass(fromModule, "Module"));
((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application = ((struct __eCNameSpace__eC__types__Module *)(((char *)fromModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->application;
((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->library = library;
{
char moduleName[274];
char ext[17];

__eCNameSpace__eC__types__GetLastDirectory(name, moduleName);
__eCNameSpace__eC__types__GetExtension(moduleName, ext);
__eCNameSpace__eC__types__StripExtension(moduleName);
if((!(strcasecmp)(ext, "dylib") || !(strcasecmp)(ext, "so")) && strstr(moduleName, "lib") == moduleName)
{
int len = (int)strlen(moduleName) - 3;

memmove(moduleName, moduleName + 3, len);
moduleName[len] = 0;
}
((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->name = __eCNameSpace__eC__types__CopyString(moduleName);
}
((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->Unload = Unload;
((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->origImportType = 0;
if(!Load(module))
{
__eCNameSpace__eC__types__eInstance_Delete((struct __eCNameSpace__eC__types__Instance *)module);
module = (((void *)0));
}
}
__eCMethod___eCNameSpace__eC__containers__OldList_Add(&((struct __eCNameSpace__eC__types__Application *)(((char *)((struct __eCNameSpace__eC__types__Module *)(((char *)fromModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->application + sizeof(struct __eCNameSpace__eC__types__Module) + sizeof(struct __eCNameSpace__eC__types__Instance))))->allModules, module);
}
if(ensureCOM && !strcmp(name, "ecrt") && module)
{
name = "ecrt";
if((!Load && !strcmp(((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->name, "ecrt")) || (Load && (!__thisModule || !((struct __eCNameSpace__eC__types__Module *)(((char *)__thisModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->name || !strcmp(((struct __eCNameSpace__eC__types__Module *)(((char *)__thisModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->name, "ecrt")) && Load != (void *)__eCDll_Load_ecrt))
{
struct __eCNameSpace__eC__types__Instance * module;

for(module = ((struct __eCNameSpace__eC__types__Application *)(((char *)((struct __eCNameSpace__eC__types__Module *)(((char *)fromModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->application + sizeof(struct __eCNameSpace__eC__types__Module) + sizeof(struct __eCNameSpace__eC__types__Instance))))->allModules.first; module; module = ((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->next)
{
if(!strcmp(((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->name, name))
break;
}
if(!module)
{
Load = (void *)(__eCDll_Load_ecrt);
Unload = (void *)(__eCDll_Unload_ecrt);
module = (struct __eCNameSpace__eC__types__Instance *)__eCNameSpace__eC__types__eInstance_New(__eCNameSpace__eC__types__eSystem_FindClass(fromModule, "Module"));
((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application = ((struct __eCNameSpace__eC__types__Module *)(((char *)fromModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->application;
((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->library = (((void *)0));
((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->name = __eCNameSpace__eC__types__CopyString(name);
((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->Unload = Unload;
if(!Load(module))
{
__eCNameSpace__eC__types__eInstance_Delete((struct __eCNameSpace__eC__types__Instance *)module);
module = (((void *)0));
}
__eCMethod___eCNameSpace__eC__containers__OldList_Add(&((struct __eCNameSpace__eC__types__Application *)(((char *)((struct __eCNameSpace__eC__types__Module *)(((char *)fromModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->application + sizeof(struct __eCNameSpace__eC__types__Module) + sizeof(struct __eCNameSpace__eC__types__Instance))))->allModules, module);
}
if(module)
{
if(fromModule)
{
__eCMethod___eCNameSpace__eC__containers__OldList_Add(&((struct __eCNameSpace__eC__types__Module *)(((char *)fromModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->modules, __extension__ ({
struct __eCNameSpace__eC__types__SubModule * __eCInstance1 = __eCNameSpace__eC__types__eInstance_New(__eCClass___eCNameSpace__eC__types__SubModule);

__eCInstance1->module = module, __eCInstance1->importMode = importAccess, __eCInstance1;
}));
}
module->_refCount++;
}
}
}
if(module)
{
if(fromModule)
{
__eCMethod___eCNameSpace__eC__containers__OldList_Add(&((struct __eCNameSpace__eC__types__Module *)(((char *)fromModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->modules, __extension__ ({
struct __eCNameSpace__eC__types__SubModule * __eCInstance1 = __eCNameSpace__eC__types__eInstance_New(__eCClass___eCNameSpace__eC__types__SubModule);

__eCInstance1->module = module, __eCInstance1->importMode = importAccess, __eCInstance1;
}));
}
module->_refCount++;
}
return module;
}

struct __eCNameSpace__eC__types__Instance * __eCNameSpace__eC__types__eModule_LoadStatic(struct __eCNameSpace__eC__types__Instance * fromModule, const char * name, int importAccess, unsigned int (* Load)(struct __eCNameSpace__eC__types__Instance * module), unsigned int (* Unload)(struct __eCNameSpace__eC__types__Instance * module))
{
struct __eCNameSpace__eC__types__Instance * module;

for(module = ((struct __eCNameSpace__eC__types__Application *)(((char *)((struct __eCNameSpace__eC__types__Module *)(((char *)fromModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->application + sizeof(struct __eCNameSpace__eC__types__Module) + sizeof(struct __eCNameSpace__eC__types__Instance))))->allModules.first; module; module = ((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->next)
{
if(!strcmp(((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->name, name))
break;
}
if(!module)
{
if(Load)
{
module = (struct __eCNameSpace__eC__types__Instance *)__eCNameSpace__eC__types__eInstance_New(__eCNameSpace__eC__types__eSystem_FindClass(fromModule, "Module"));
((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application = ((struct __eCNameSpace__eC__types__Module *)(((char *)fromModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->application;
((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->name = __eCNameSpace__eC__types__CopyString(name);
((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->origImportType = 1;
((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->Unload = (void *)Unload;
if(!Load(module))
{
__eCNameSpace__eC__types__eInstance_Delete((struct __eCNameSpace__eC__types__Instance *)module);
module = (((void *)0));
}
}
__eCMethod___eCNameSpace__eC__containers__OldList_Add(&((struct __eCNameSpace__eC__types__Application *)(((char *)((struct __eCNameSpace__eC__types__Module *)(((char *)fromModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->application + sizeof(struct __eCNameSpace__eC__types__Module) + sizeof(struct __eCNameSpace__eC__types__Instance))))->allModules, module);
}
if(module)
{
if(fromModule)
{
__eCMethod___eCNameSpace__eC__containers__OldList_Add(&((struct __eCNameSpace__eC__types__Module *)(((char *)fromModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->modules, __extension__ ({
struct __eCNameSpace__eC__types__SubModule * __eCInstance1 = __eCNameSpace__eC__types__eInstance_New(__eCClass___eCNameSpace__eC__types__SubModule);

__eCInstance1->module = module, __eCInstance1->importMode = importAccess, __eCInstance1;
}));
}
module->_refCount++;
}
return module;
}

void __eCNameSpace__eC__types__eModule_Unload(struct __eCNameSpace__eC__types__Instance * fromModule, struct __eCNameSpace__eC__types__Instance * module)
{
struct __eCNameSpace__eC__containers__OldLink * m;

for(m = ((struct __eCNameSpace__eC__types__Module *)(((char *)fromModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->modules.first; m; m = m->next)
{
if(m->data == module)
break;
}
if(m)
{
__eCMethod___eCNameSpace__eC__containers__OldList_Delete(&((struct __eCNameSpace__eC__types__Module *)(((char *)fromModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->modules, m);
(__eCNameSpace__eC__types__eInstance_DecRef(module), module = 0);
}
}

static void __eCNameSpace__eC__types__Module_Destructor(struct __eCNameSpace__eC__types__Instance * module)
{
struct __eCNameSpace__eC__types__Class * _class;
struct __eCNameSpace__eC__types__DefinedExpression * def;
struct __eCNameSpace__eC__types__GlobalFunction * function;
struct __eCNameSpace__eC__types__Instance * m;
struct __eCNameSpace__eC__types__SubModule * handle;

for(m = ((struct __eCNameSpace__eC__types__Application *)(((char *)((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application + sizeof(struct __eCNameSpace__eC__types__Module) + sizeof(struct __eCNameSpace__eC__types__Instance))))->allModules.first; m; m = ((struct __eCNameSpace__eC__types__Module *)(((char *)m + sizeof(struct __eCNameSpace__eC__types__Instance))))->next)
{
struct __eCNameSpace__eC__types__SubModule * next;

for(handle = ((struct __eCNameSpace__eC__types__Module *)(((char *)m + sizeof(struct __eCNameSpace__eC__types__Instance))))->modules.first; handle; handle = next)
{
next = handle->next;
if(handle->module == module)
__eCMethod___eCNameSpace__eC__containers__OldList_Delete(&((struct __eCNameSpace__eC__types__Module *)(((char *)m + sizeof(struct __eCNameSpace__eC__types__Instance))))->modules, handle);
}
}
if(((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->Unload)
{
if(((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->origImportType == 1)
{
unsigned int (* Unload)(struct __eCNameSpace__eC__types__Instance * module) = (void *)((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->Unload;

Unload(module);
}
else
{
unsigned int (eC_stdcall * Unload)(struct __eCNameSpace__eC__types__Instance * module) = (void *)((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->Unload;

Unload(module);
}
}
{
struct __eCNameSpace__eC__types__Instance * ourWorld = __eCClass___eCNameSpace__eC__types__Class->module;
void * ourHandle = (((void *)0));

while((handle = ((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->modules.last))
{
struct __eCNameSpace__eC__types__Instance * depModule = handle->module;

if(depModule == ourWorld)
{
__eCMethod___eCNameSpace__eC__containers__OldList_Remove(&((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->modules, handle);
ourHandle = handle;
}
else
{
__eCMethod___eCNameSpace__eC__containers__OldList_Delete(&((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->modules, handle);
(__eCNameSpace__eC__types__eInstance_DecRef(depModule), depModule = 0);
}
}
if(ourHandle)
{
(__eCNameSpace__eC__types__eSystem_Delete(ourHandle), ourHandle = 0);
(__eCNameSpace__eC__types__eInstance_DecRef(ourWorld), ourWorld = 0);
}
}
for(; (_class = ((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->classes.first); )
{
if(_class->nameSpace)
{
struct __eCNameSpace__eC__types__BTNamedLink * classLink = (struct __eCNameSpace__eC__types__BTNamedLink *)__eCMethod___eCNameSpace__eC__containers__BinaryTree_FindString(&(*_class->nameSpace).classes, _class->name);

if(classLink)
{
struct __eCNameSpace__eC__containers__OldLink * t;

for(t = _class->templatized.first; t; t = t->next)
{
struct __eCNameSpace__eC__types__Class * template = t->data;
struct __eCNameSpace__eC__types__BTNamedLink * link;

link = (struct __eCNameSpace__eC__types__BTNamedLink *)__eCMethod___eCNameSpace__eC__containers__BinaryTree_FindString(&(*template->nameSpace).classes, template->name);
__eCMethod___eCNameSpace__eC__containers__BinaryTree_Delete(&(*template->nameSpace).classes, (struct __eCNameSpace__eC__containers__BTNode *)link);
template->nameSpace = (((void *)0));
}
__eCMethod___eCNameSpace__eC__containers__BinaryTree_Delete(&(*_class->nameSpace).classes, (struct __eCNameSpace__eC__containers__BTNode *)classLink);
}
_class->nameSpace = (((void *)0));
}
_class->module = (((void *)0));
__eCMethod___eCNameSpace__eC__containers__OldList_Remove(&((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->classes, _class);
if(_class->count <= 0 || _class->type != 0 || _class->isInstanceClass)
__eCNameSpace__eC__types__eClass_Unregister(_class);
else
{
}
}
for(; (def = ((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->defines.first); )
{
if(def->nameSpace)
{
struct __eCNameSpace__eC__types__BTNamedLink * defLink;

for(defLink = (struct __eCNameSpace__eC__types__BTNamedLink *)__eCProp___eCNameSpace__eC__containers__BinaryTree_Get_first(&(*def->nameSpace).defines); defLink; defLink = (struct __eCNameSpace__eC__types__BTNamedLink *)__eCProp___eCNameSpace__eC__containers__BTNode_Get_next(((struct __eCNameSpace__eC__containers__BTNode *)defLink)))
if(defLink->data == def)
{
__eCMethod___eCNameSpace__eC__containers__BinaryTree_Delete(&(*def->nameSpace).defines, (struct __eCNameSpace__eC__containers__BTNode *)defLink);
break;
}
}
(__eCNameSpace__eC__types__eSystem_Delete((void *)def->name), def->name = 0);
(__eCNameSpace__eC__types__eSystem_Delete((void *)def->value), def->value = 0);
__eCMethod___eCNameSpace__eC__containers__OldList_Delete(&((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->defines, def);
}
for(; (function = ((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->functions.first); )
{
if(function->nameSpace)
{
struct __eCNameSpace__eC__types__BTNamedLink * functionLink;

for(functionLink = (struct __eCNameSpace__eC__types__BTNamedLink *)__eCProp___eCNameSpace__eC__containers__BinaryTree_Get_first(&(*function->nameSpace).functions); functionLink; functionLink = (struct __eCNameSpace__eC__types__BTNamedLink *)__eCProp___eCNameSpace__eC__containers__BTNode_Get_next(((struct __eCNameSpace__eC__containers__BTNode *)functionLink)))
if(functionLink->data == function)
{
__eCMethod___eCNameSpace__eC__containers__BinaryTree_Delete(&(*function->nameSpace).functions, (struct __eCNameSpace__eC__containers__BTNode *)functionLink);
break;
}
}
(__eCNameSpace__eC__types__eSystem_Delete((void *)function->name), function->name = 0);
(__eCNameSpace__eC__types__eSystem_Delete((void *)function->dataTypeString), function->dataTypeString = 0);
__eCMethod___eCNameSpace__eC__containers__OldList_Delete(&((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->functions, function);
}
(__eCNameSpace__eC__types__eSystem_Delete((void *)((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->name), ((struct __eCNameSpace__eC__types__Module * )(((char * )module + sizeof(struct __eCNameSpace__eC__types__Instance))))->name = 0);
__eCNameSpace__eC__types__NameSpace_Free(&((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->privateNameSpace);
__eCNameSpace__eC__types__NameSpace_Free(&((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->publicNameSpace);
if(module != ((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application)
__eCMethod___eCNameSpace__eC__containers__OldList_Remove(&((struct __eCNameSpace__eC__types__Application *)(((char *)((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application + sizeof(struct __eCNameSpace__eC__types__Module) + sizeof(struct __eCNameSpace__eC__types__Instance))))->allModules, module);
else
__eCNameSpace__eC__types__NameSpace_Free(&((struct __eCNameSpace__eC__types__Application *)(((char *)((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application + sizeof(struct __eCNameSpace__eC__types__Module) + sizeof(struct __eCNameSpace__eC__types__Instance))))->systemNameSpace);
Instance_Module_Free(((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->library);
}

static void __eCNameSpace__eC__types__FixDerivativesBase(struct __eCNameSpace__eC__types__Class *  base, struct __eCNameSpace__eC__types__Class *  mod);

struct __eCNameSpace__eC__types__Class * __eCNameSpace__eC__types__eSystem_RegisterClass(int type, const char * name, const char * baseName, int size, int sizeClass, unsigned int (* Constructor)(void *), void (* Destructor)(void *), struct __eCNameSpace__eC__types__Instance * module, int declMode, int inheritanceAccess)
{
int start = 0, c;
struct __eCNameSpace__eC__types__NameSpace * nameSpace = (((void *)0));
unsigned int force64Bits = (((struct __eCNameSpace__eC__types__Application *)(((char *)((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application + sizeof(struct __eCNameSpace__eC__types__Module) + sizeof(struct __eCNameSpace__eC__types__Instance))))->isGUIApp & 2) ? 1 : 0;
unsigned int force32Bits = (((struct __eCNameSpace__eC__types__Application *)(((char *)((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application + sizeof(struct __eCNameSpace__eC__types__Module) + sizeof(struct __eCNameSpace__eC__types__Instance))))->isGUIApp & 4) ? 1 : 0;
unsigned int inCompiler = (((struct __eCNameSpace__eC__types__Application *)(((char *)((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application + sizeof(struct __eCNameSpace__eC__types__Module) + sizeof(struct __eCNameSpace__eC__types__Instance))))->isGUIApp & 8) ? 1 : 0;
unsigned int crossBits = force32Bits || force64Bits;
unsigned int fixed = 0;

if(inCompiler && crossBits)
{
struct __eCNameSpace__eC__types__Class * c = __eCNameSpace__eC__types__eSystem_FindClass(((struct __eCNameSpace__eC__types__Module *)(((char *)__thisModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->application, name);

if(c && c->fixed)
fixed = 1;
else if(((struct __eCNameSpace__eC__types__Module *)(((char *)__thisModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->name && !strcmp(((struct __eCNameSpace__eC__types__Module *)(((char *)__thisModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->name, "ecrt"))
fixed = 1;
}
{
nameSpace = (declMode == 1) ? &((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->publicNameSpace : &((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->privateNameSpace;
if(declMode == 4)
nameSpace = &((struct __eCNameSpace__eC__types__Application *)(((char *)((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application + sizeof(struct __eCNameSpace__eC__types__Module) + sizeof(struct __eCNameSpace__eC__types__Instance))))->systemNameSpace;
{
for(c = 0; name[c]; c++)
{
if(name[c] == '.' || (name[c] == ':' && name[c + 1] == ':'))
{
struct __eCNameSpace__eC__types__NameSpace * newSpace;
int len = c - start;
char * spaceName = __eCNameSpace__eC__types___malloc(len + 1);

if(len)
strncpy(spaceName, name + start, len);
spaceName[len] = '\0';
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
}
}
if(c - start)
{
int offsetClass;
int totalSizeClass;
struct __eCNameSpace__eC__types__BTNamedLink * classLink = (((void *)0));
struct __eCNameSpace__eC__types__Class * _class = (((void *)0));
const char * dataTypeString = (((void *)0));
struct __eCNameSpace__eC__types__Class * enumBase = (((void *)0));
struct __eCNameSpace__eC__types__Class * base = (baseName && baseName[0]) ? __eCNameSpace__eC__types__System_FindClass(module, baseName, 1) : (((void *)0));
struct __eCNameSpace__eC__types__Class * prevBase = (((void *)0));

if(base && !base->internalDecl && (base->type == 5 || base->type == 1 || base->type == 0))
{
if(base->type == 1 && (type == 0 || type == 5))
type = 5;
else
type = base->type;
}
if(base && (type == 0 || type == 5 || type == 1) && (base->type == 3 || base->type == 2 || base->type == 4))
{
type = base->type;
}
if(!base || base->type == 1000 || base->isInstanceClass)
{
if(type == 4)
{
if(base || !baseName || !baseName[0] || !strcmp(baseName, "unsigned int") || !strcmp(baseName, "uint") || !strcmp(baseName, "unsigned int64") || !strcmp(baseName, "uint64") || !strcmp(baseName, "int64") || !strcmp(baseName, "unsigned short") || !strcmp(baseName, "short") || !strcmp(baseName, "unsigned char") || !strcmp(baseName, "byte") || !strcmp(baseName, "char") || !strcmp(baseName, "uint32") || !strcmp(baseName, "uint16"))
{
base = __eCNameSpace__eC__types__eSystem_FindClass(module, "enum");
dataTypeString = (baseName && baseName[0]) ? baseName : "int";
}
else
{
base = __eCNameSpace__eC__types__eSystem_RegisterClass((int)0, baseName, (((void *)0)), 0, 0, (((void *)0)), (((void *)0)), module, declMode, 1);
base->internalDecl = 1;
enumBase = base;
base = __eCNameSpace__eC__types__eSystem_FindClass(module, "enum");
}
}
else if(type == 1 && (!baseName || !baseName[0]))
{
base = __eCNameSpace__eC__types__eSystem_FindClass(module, "struct");
dataTypeString = name + start;
}
else
{
if(type == 0)
dataTypeString = "struct __eCNameSpace__eC__types__Instance";
else if(type == 5)
dataTypeString = "void *";
else if(type == 2)
dataTypeString = (baseName && baseName[0]) ? baseName : "unsigned int";
else if(type == 3)
dataTypeString = (baseName && baseName[0]) ? baseName : "int";
else if(type == 1)
dataTypeString = name + start;
if(base || (!baseName || !baseName[0]) || type == 2 || type == 3)
{
if(base || !baseName || !baseName[0] || !strcmp(baseName, "unsigned int") || !strcmp(baseName, "uint") || !strcmp(baseName, "unsigned int64") || !strcmp(baseName, "uint64") || !strcmp(baseName, "int64") || !strcmp(baseName, "unsigned short") || !strcmp(baseName, "short") || !strcmp(baseName, "unsigned char") || !strcmp(baseName, "byte") || !strcmp(baseName, "char") || !strcmp(baseName, "uint32") || !strcmp(baseName, "uint16"))
{
if(type == 0 && strcmp(name, "eC::types::Instance") && strcmp(name, "enum") && strcmp(name, "struct"))
base = __eCNameSpace__eC__types__eSystem_FindClass(module, "eC::types::Instance");
else
base = __eCNameSpace__eC__types__eSystem_FindClass(module, "class");
}
}
else
{
}
}
}
else
{
if(type == 4)
{
if(base->type != 4)
{
enumBase = base;
base = __eCNameSpace__eC__types__eSystem_FindClass(module, "enum");
}
}
dataTypeString = enumBase ? enumBase->dataTypeString : base->dataTypeString;
}
offsetClass = base ? base->sizeClass : (type == 5 ? 0 : 0);
totalSizeClass = offsetClass + sizeClass;
_class = __eCNameSpace__eC__types__System_FindClass(module, name, 1);
if(!_class)
{
const char * colons = __eCNameSpace__eC__types__RSearchString(name, "::", strlen(name), 1, 0);

if(colons && colons)
{
_class = __eCNameSpace__eC__types__System_FindClass(module, colons + 2, 1);
if(_class)
{
if(_class->internalDecl)
{
(__eCNameSpace__eC__types__eSystem_Delete((void *)_class->fullName), _class->fullName = 0);
_class->fullName = __eCNameSpace__eC__types__CopyString(name);
}
else
_class = (((void *)0));
}
}
}
if(_class)
{
if(!_class->internalDecl)
{
if(declMode != 4)
printf("error: Redefinition of class %s\n", name);
else
{
_class->comRedefinition = 1;
return _class;
}
return (((void *)0));
}
__eCNameSpace__eC__types__FreeTemplatesDerivatives(_class);
classLink = (struct __eCNameSpace__eC__types__BTNamedLink *)__eCMethod___eCNameSpace__eC__containers__BinaryTree_FindString(&(*_class->nameSpace).classes, name + start);
__eCMethod___eCNameSpace__eC__containers__BinaryTree_Delete(&(*_class->nameSpace).classes, (struct __eCNameSpace__eC__containers__BTNode *)classLink);
{
struct __eCNameSpace__eC__containers__OldLink * t;

for(t = _class->templatized.first; t; t = t->next)
{
struct __eCNameSpace__eC__types__Class * template = t->data;

classLink = (struct __eCNameSpace__eC__types__BTNamedLink *)__eCMethod___eCNameSpace__eC__containers__BinaryTree_FindString(&(*_class->nameSpace).classes, template->name);
__eCMethod___eCNameSpace__eC__containers__BinaryTree_Delete(&(*_class->nameSpace).classes, (struct __eCNameSpace__eC__containers__BTNode *)classLink);
}
}
{
struct __eCNameSpace__eC__types__NameSpace * ns = _class->nameSpace;

while(ns != nameSpace && (*ns).parent && !__eCProp___eCNameSpace__eC__containers__BinaryTree_Get_first(&(*ns).classes) && !__eCProp___eCNameSpace__eC__containers__BinaryTree_Get_first(&(*ns).functions) && !__eCProp___eCNameSpace__eC__containers__BinaryTree_Get_first(&(*ns).defines) && !__eCProp___eCNameSpace__eC__containers__BinaryTree_Get_first(&(*ns).nameSpaces))
{
struct __eCNameSpace__eC__types__NameSpace * parent = (*ns).parent;

__eCNameSpace__eC__types__NameSpace_Free(ns);
__eCMethod___eCNameSpace__eC__containers__BinaryTree_Delete(&(*parent).nameSpaces, (struct __eCNameSpace__eC__containers__BTNode *)ns);
ns = parent;
}
}
}
else
{
classLink = __eCNameSpace__eC__types__SearchNameSpace(&((struct __eCNameSpace__eC__types__Module *)(((char *)((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application + sizeof(struct __eCNameSpace__eC__types__Instance))))->privateNameSpace, name, &(*((struct __eCNameSpace__eC__types__NameSpace *)0)).classes);
if(!classLink)
classLink = __eCNameSpace__eC__types__SearchNameSpace(&((struct __eCNameSpace__eC__types__Module *)(((char *)((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application + sizeof(struct __eCNameSpace__eC__types__Instance))))->publicNameSpace, name, &(*((struct __eCNameSpace__eC__types__NameSpace *)0)).classes);
if(!classLink)
classLink = __eCNameSpace__eC__types__SearchNameSpace(&((struct __eCNameSpace__eC__types__Module *)(((char *)((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application + sizeof(struct __eCNameSpace__eC__types__Instance))))->privateNameSpace, name + start, &(*((struct __eCNameSpace__eC__types__NameSpace *)0)).classes);
if(!classLink)
classLink = __eCNameSpace__eC__types__SearchNameSpace(&((struct __eCNameSpace__eC__types__Module *)(((char *)((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application + sizeof(struct __eCNameSpace__eC__types__Instance))))->publicNameSpace, name + start, &(*((struct __eCNameSpace__eC__types__NameSpace *)0)).classes);
if(classLink)
_class = classLink->data;
if(_class && _class->internalDecl)
{
__eCNameSpace__eC__types__FreeTemplatesDerivatives(_class);
__eCMethod___eCNameSpace__eC__containers__BinaryTree_Delete(&(*_class->nameSpace).classes, (struct __eCNameSpace__eC__containers__BTNode *)classLink);
{
struct __eCNameSpace__eC__containers__OldLink * t;

for(t = _class->templatized.first; t; t = t->next)
{
struct __eCNameSpace__eC__types__Class * template = t->data;

classLink = (struct __eCNameSpace__eC__types__BTNamedLink *)__eCMethod___eCNameSpace__eC__containers__BinaryTree_FindString(&(*_class->nameSpace).classes, template->name);
__eCMethod___eCNameSpace__eC__containers__BinaryTree_Delete(&(*_class->nameSpace).classes, (struct __eCNameSpace__eC__containers__BTNode *)classLink);
}
}
(__eCNameSpace__eC__types__eSystem_Delete((void *)_class->fullName), _class->fullName = 0);
_class->fullName = __eCNameSpace__eC__types__CopyString(name);
}
else
{
_class = __eCNameSpace__eC__types___calloc(1, sizeof(struct __eCNameSpace__eC__types__Class));
_class->methods.CompareKey = (void *)__eCMethod___eCNameSpace__eC__containers__BinaryTree_CompareString;
_class->members.CompareKey = (void *)__eCMethod___eCNameSpace__eC__containers__BinaryTree_CompareString;
_class->prop.CompareKey = (void *)__eCMethod___eCNameSpace__eC__containers__BinaryTree_CompareString;
_class->classProperties.CompareKey = (void *)__eCMethod___eCNameSpace__eC__containers__BinaryTree_CompareString;
_class->name = __eCNameSpace__eC__types__CopyString(name + start);
_class->fullName = __eCNameSpace__eC__types__CopyString(name);
}
}
if(nameSpace)
{
__eCMethod___eCNameSpace__eC__containers__BinaryTree_Add(&(*nameSpace).classes, (struct __eCNameSpace__eC__containers__BTNode *)__extension__ ({
struct __eCNameSpace__eC__types__BTNamedLink * __eCInstance1 = __eCNameSpace__eC__types__eSystem_New0(sizeof(struct __eCNameSpace__eC__types__BTNamedLink));

__eCInstance1->name = (char *)_class->name, __eCInstance1->data = _class, __eCInstance1;
}));
{
struct __eCNameSpace__eC__containers__OldLink * t;

for(t = _class->templatized.first; t; t = t->next)
{
struct __eCNameSpace__eC__types__Class * template = t->data;

__eCMethod___eCNameSpace__eC__containers__BinaryTree_Add(&(*nameSpace).classes, (struct __eCNameSpace__eC__containers__BTNode *)__extension__ ({
struct __eCNameSpace__eC__types__BTNamedLink * __eCInstance1 = __eCNameSpace__eC__types__eSystem_New0(sizeof(struct __eCNameSpace__eC__types__BTNamedLink));

__eCInstance1->name = (char *)template->name, __eCInstance1->data = template, __eCInstance1;
}));
}
}
}
if(_class)
{
if(!base && baseName && strcmp(baseName, name))
{
if(strchr(baseName, '<'))
{
char templateClassName[1024];
struct __eCNameSpace__eC__types__Class * templateBase;

strcpy(templateClassName, baseName);
*strchr(templateClassName, '<') = '\0';
templateBase = __eCNameSpace__eC__types__System_FindClass(module, templateClassName, 1);
if(!templateBase)
{
templateBase = __eCNameSpace__eC__types__eSystem_RegisterClass((int)0, templateClassName, (((void *)0)), 0, 0, (((void *)0)), (((void *)0)), module, declMode, 1);
templateBase->internalDecl = 1;
}
base = __eCNameSpace__eC__types__System_FindClass(module, baseName, 1);
}
else
{
base = __eCNameSpace__eC__types__eSystem_RegisterClass((int)0, baseName, (((void *)0)), 0, 0, (((void *)0)), (((void *)0)), module, declMode, 1);
base->internalDecl = 1;
}
}
else
_class->internalDecl = 0;
if(totalSizeClass)
{
_class->data = __eCNameSpace__eC__types__eSystem_Renew(_class->data, sizeof(unsigned char) * (totalSizeClass));
if(offsetClass)
{
if(base && base->type != 1000 && base->type != 4)
memcpy(_class->data, base->data, offsetClass);
else
memset(_class->data, 0, offsetClass);
}
memset((unsigned char *)_class->data + offsetClass, 0, sizeClass);
}
if(type == 4)
{
struct __eCNameSpace__eC__types__EnumClassData * data = (struct __eCNameSpace__eC__types__EnumClassData *)_class->data;

if(base && base->type != 4)
{
data->values.count = 0;
data->largest = 0;
}
}
(__eCNameSpace__eC__types__eSystem_Delete((void *)_class->dataTypeString), _class->dataTypeString = 0);
_class->dataTypeString = __eCNameSpace__eC__types__CopyString(dataTypeString);
_class->defaultAlignment = base ? base->defaultAlignment : 0;
if(_class->module)
{
__eCMethod___eCNameSpace__eC__containers__OldList_Remove(&((struct __eCNameSpace__eC__types__Module *)(((char *)_class->module + sizeof(struct __eCNameSpace__eC__types__Instance))))->classes, _class);
}
if(_class->base)
{
struct __eCNameSpace__eC__types__Class * base = _class->base;
struct __eCNameSpace__eC__containers__OldLink * deriv = __eCMethod___eCNameSpace__eC__containers__OldList_FindLink(&base->derivatives, _class);

__eCMethod___eCNameSpace__eC__containers__OldList_Delete(&base->derivatives, deriv);
}
if(module)
{
__eCMethod___eCNameSpace__eC__containers__OldList_Add(&((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->classes, _class);
}
_class->nameSpace = nameSpace;
{
struct __eCNameSpace__eC__containers__OldLink * t;

for(t = _class->templatized.first; t; t = t->next)
{
struct __eCNameSpace__eC__types__Class * template = t->data;

template->nameSpace = nameSpace;
}
}
_class->module = module;
prevBase = _class->base;
_class->base = base;
if(base)
{
int numParams = 0;
struct __eCNameSpace__eC__types__Class * sClass;

for(sClass = base; sClass; sClass = sClass->base)
{
if(sClass->templateClass)
sClass = sClass->templateClass;
numParams += sClass->templateParams.count;
}
if(numParams)
{
if(_class->templateArgs)
{
__eCNameSpace__eC__types__FreeTemplateArgs(_class);
}
(__eCNameSpace__eC__types__eSystem_Delete(_class->templateArgs), _class->templateArgs = 0);
_class->templateArgs = __eCNameSpace__eC__types__eSystem_New0(sizeof(struct __eCNameSpace__eC__types__ClassTemplateArgument) * (numParams));
_class->numParams = numParams;
for(sClass = _class; sClass; sClass = sClass->base)
{
struct __eCNameSpace__eC__types__Class * prevClass;
struct __eCNameSpace__eC__types__ClassTemplateParameter * param;
int id = 0;

if(sClass->templateClass)
sClass = sClass->templateClass;
for(prevClass = sClass->base; prevClass; prevClass = prevClass->base)
{
if(prevClass->templateClass)
prevClass = prevClass->templateClass;
id += prevClass->templateParams.count;
}
if(base->templateArgs)
{
for(param = sClass->templateParams.first; param; param = param->next)
{
_class->templateArgs[id] = base->templateArgs[id];
__eCNameSpace__eC__types__CopyTemplateArg(param, &_class->templateArgs[id]);
id++;
}
}
}
}
}
_class->memberID = _class->startMemberID = (base && (type == 0 || type == 5 || type == 1)) ? base->memberID : 0;
if(type == 0 || type == 5)
_class->offset = (base && base->structSize && base->type != 1000) ? (base->type == 0 ? base->structSize : base->memberOffset) : ((type == 5) ? 0 : ((force64Bits && inCompiler && fixed) ? 24 : (force32Bits && inCompiler && fixed) ? 12 : sizeof(struct __eCNameSpace__eC__types__Instance)));
else
_class->offset = 0;
if(crossBits)
{
if(!strcmp(name, "GNOSISSystem") || !strcmp(name, "LineStyle") || !strcmp(name, "FillStyle") || !strcmp(name, "FontObject") || !strcmp(name, "FontObject") || !strcmp(name, "eC::mt::Thread"))
{
_class->offset = force32Bits ? 24 : 12;
}
else if(strstr(name, "eC::files::EARHeader") || strstr(name, "AnchorValue") || !strcmp(name, "eC::containers::CustomAVLTree") || !strcmp(name, "eC::containers::Array") || !strcmp(name, "ecereGUI::Window") || !strcmp(name, "eC::mt::Mutex"))
;
else
{
if(!strcmp(name, "eC::files::FileListing"))
{
size = 3 * (force32Bits ? 4 : 8);
_class->structAlignment = force32Bits ? 4 : 8;
_class->pointerAlignment = 1;
}
else if(!strcmp(name, "eC::types::Class"))
size = 0;
else if(!strcmp(name, "eC::types::ClassProperty"))
size = 0;
else if(!strcmp(name, "eC::types::NameSpace"))
size = 0;
else if(!strcmp(name, "eC::files::BufferedFile"))
size = 0;
else if(!strcmp(name, "eC::containers::BTNode"))
size = 0;
else if(!strcmp(name, "eC::containers::StringBTNode"))
size = 0;
else if(!strcmp(name, "eC::containers::OldList"))
size = 0;
else if(!strcmp(name, "eC::containers::Item"))
size = 0;
else if(!strcmp(name, "eC::containers::NamedLink"))
size = 0;
else if(!strcmp(name, "eC::containers::NamedLink64"))
size = 0;
else if(!strcmp(name, "eC::containers::OldLink"))
size = 0;
else if(!strcmp(name, "eC::containers::NamedItem"))
size = 0;
else if(!strcmp(name, "eC::containers::NamedItem64"))
size = 0;
else if(!strcmp(name, "eC::containers::BinaryTree"))
size = 0;
else if(module != ((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application && inCompiler)
{
if(fixed || type == 1)
size = 0;
}
}
}
if(type == 1)
{
_class->memberOffset = (base && base->structSize && base->type != 1000) ? base->structSize : 0;
_class->typeSize = _class->structSize = _class->memberOffset + size;
}
else if(type == 2 || type == 4 || type == 3)
{
struct __eCNameSpace__eC__types__Class * dataTypeClass = dataTypeString ? __eCNameSpace__eC__types__System_FindClass(_class->module, dataTypeString, 1) : (((void *)0));

if(dataTypeClass)
_class->typeSize = dataTypeClass->typeSize;
_class->structSize = 0;
}
else if(type == 0 || type == 5)
{
_class->structSize = type == 0 ? _class->offset + size : size;
_class->typeSize = sizeof(void *);
}
_class->offsetClass = offsetClass;
_class->sizeClass = totalSizeClass;
_class->Constructor = Constructor;
_class->Destructor = Destructor;
if(_class->type != 1000)
_class->type = type;
if(!size)
_class->computeSize = 1;
else
_class->computeSize = 0;
_class->inheritanceAccess = inheritanceAccess;
if(type == 4)
{
if(enumBase)
_class->base = base = enumBase;
{
struct __eCNameSpace__eC__types__EnumClassData * data = (struct __eCNameSpace__eC__types__EnumClassData *)_class->data;

if(base && base->type != 4)
data->largest = -1;
else
data->largest = ((struct __eCNameSpace__eC__types__EnumClassData *)base->data)->largest;
}
}
if(base)
{
int i;
unsigned int oldSize = _class->vTblSize;

if(base->vTblSize && _class->vTblSize < base->vTblSize)
{
_class->vTblSize = base->vTblSize;
_class->_vTbl = __eCNameSpace__eC__types___realloc(_class->_vTbl, sizeof(int (*)()) * _class->vTblSize);
}
if(!prevBase)
{
if(_class->type == 0 && strcmp(_class->name, "eC::types::Instance") && strcmp(_class->name, "enum") && strcmp(_class->name, "struct"))
prevBase = __eCNameSpace__eC__types__eSystem_FindClass(module, "eC::types::Instance");
else
prevBase = __eCNameSpace__eC__types__eSystem_FindClass(module, "class");
}
for(i = 0; i < base->vTblSize; i++)
{
if(i >= oldSize || _class->_vTbl[i] == prevBase->_vTbl[i])
_class->_vTbl[i] = base->_vTbl[i];
}
}
if(_class->base)
{
struct __eCNameSpace__eC__containers__OldLink * link = (link = __eCNameSpace__eC__types__eSystem_New0(sizeof(struct __eCNameSpace__eC__containers__OldLink)), link->data = _class, link);

__eCMethod___eCNameSpace__eC__containers__OldList_Add(&_class->base->derivatives, link);
}
__eCNameSpace__eC__types__FixDerivativesBase(_class, _class);
return _class;
}
}
return (((void *)0));
}

void __eCNameSpace__eC__types__eProperty_Watchable(struct __eCNameSpace__eC__types__Property * _property)
{
if(!_property->isWatchable)
{
struct __eCNameSpace__eC__types__Class * _class = _property->_class;

if(!_class->computeSize)
{
_property->watcherOffset = _class->structSize;
_class->structSize += sizeof(struct __eCNameSpace__eC__containers__OldList);
__eCNameSpace__eC__types__FixDerivativesBase(_class, _class);
}
_property->isWatchable = 1;
}
}

void __eCNameSpace__eC__types__eClass_DestructionWatchable(struct __eCNameSpace__eC__types__Class * _class)
{
if(!_class->destructionWatchOffset)
{
_class->destructionWatchOffset = _class->structSize;
_class->structSize += sizeof(struct __eCNameSpace__eC__containers__OldList);
__eCNameSpace__eC__types__FixDerivativesBase(_class, _class);
}
}

void __eCNameSpace__eC__types__eClass_DoneAddingTemplateParameters(struct __eCNameSpace__eC__types__Class * base)
{
if(base)
{
struct __eCNameSpace__eC__types__ClassTemplateParameter * param;

{
void * first = base->templateParams.first;
int count = base->templateParams.count;

__eCNameSpace__eC__types__FreeTemplateArgs(base);
(__eCNameSpace__eC__types__eSystem_Delete(base->templateArgs), base->templateArgs = 0);
base->templateParams.first = (((void *)0));
base->templateParams.count = 0;
__eCNameSpace__eC__types__FreeTemplatesDerivatives(base);
base->templateParams.first = first;
base->templateParams.count = count;
}
for(param = base->templateParams.first; param; param = param->next)
{
if(param->type == 1 && param->defaultArg.__anon1.__anon2.memberString)
{
struct __eCNameSpace__eC__types__Class * memberClass = base;
const char * colon = strstr(param->defaultArg.__anon1.__anon2.memberString, "::");
const char * memberName;

if(colon)
{
char className[1024];
struct __eCNameSpace__eC__types__Class * sClass;

memcpy(className, param->defaultArg.__anon1.__anon2.memberString, colon - param->defaultArg.__anon1.__anon2.memberString);
className[colon - param->defaultArg.__anon1.__anon2.memberString] = '\0';
memberName = colon + 2;
for(sClass = base; sClass; sClass = sClass->base)
{
struct __eCNameSpace__eC__types__ClassTemplateParameter * cParam;
struct __eCNameSpace__eC__types__Class * nextClass;
int id = 0;

for(nextClass = sClass->base; nextClass; nextClass = nextClass->base)
id += nextClass->templateParams.count;
if(sClass == base || base->templateArgs)
{
for(cParam = sClass->templateParams.first; cParam; cParam = cParam->next)
{
if(cParam->type == 0 && !strcmp(cParam->name, className))
strcpy(className, (sClass == base) ? cParam->defaultArg.__anon1.__anon1.dataTypeString : base->templateArgs[id].__anon1.__anon1.dataTypeString);
id++;
}
}
}
memberClass = __eCNameSpace__eC__types__eSystem_FindClass(base->module, className);
if(!memberClass)
memberClass = __eCNameSpace__eC__types__eSystem_FindClass(((struct __eCNameSpace__eC__types__Module *)(((char *)base->module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application, className);
}
else
memberName = param->defaultArg.__anon1.__anon2.memberString;
if(memberClass)
{
switch(param->__anon1.memberType)
{
case 0:
param->defaultArg.__anon1.__anon2.__anon1.member = __eCNameSpace__eC__types__eClass_FindDataMember(memberClass, memberName, memberClass->module, (((void *)0)), (((void *)0)));
break;
case 1:
param->defaultArg.__anon1.__anon2.__anon1.method = __eCNameSpace__eC__types__eClass_FindMethod(memberClass, memberName, memberClass->module);
break;
case 2:
param->defaultArg.__anon1.__anon2.__anon1.prop = __eCNameSpace__eC__types__eClass_FindProperty(memberClass, memberName, memberClass->module);
break;
}
}
}
}
__eCNameSpace__eC__types__FixDerivativesBase(base, base);
}
}

static void __eCNameSpace__eC__types__ComputeClassParameters(struct __eCNameSpace__eC__types__Class * templatedClass, const char * templateParams, struct __eCNameSpace__eC__types__Instance * findModule, unsigned int registerInternalDecl)
{
char ch;
const char * nextParamStart = templateParams ? (templateParams + 1) : (((void *)0));
struct __eCNameSpace__eC__types__ClassTemplateParameter * curParam = (((void *)0));
struct __eCNameSpace__eC__types__Class * lastClass = (((void *)0)), * sClass;
int curParamID = 0;
int numParams = 0;
struct __eCNameSpace__eC__types__Class * _class = templatedClass->templateClass ? templatedClass->templateClass : templatedClass;

for(sClass = _class; sClass; sClass = sClass->base)
{
if(sClass->templateClass)
sClass = sClass->templateClass;
numParams += sClass->templateParams.count;
}
if(templatedClass->templateArgs)
__eCNameSpace__eC__types__FreeTemplateArgs(templatedClass);
(__eCNameSpace__eC__types__eSystem_Delete(templatedClass->templateArgs), templatedClass->templateArgs = 0);
templatedClass->templateArgs = __eCNameSpace__eC__types__eSystem_New0(sizeof(struct __eCNameSpace__eC__types__ClassTemplateArgument) * (numParams));
templatedClass->numParams = numParams;
if(_class != templatedClass)
{
}
if(templatedClass->base && templatedClass->base->templateArgs && _class == templatedClass)
{
struct __eCNameSpace__eC__types__Class * sClass;

memcpy(templatedClass->templateArgs, templatedClass->base->templateArgs, sizeof(struct __eCNameSpace__eC__types__ClassTemplateArgument) * (numParams - templatedClass->templateParams.count));
for(sClass = templatedClass->base; sClass; sClass = sClass->base)
{
struct __eCNameSpace__eC__types__ClassTemplateParameter * param;
struct __eCNameSpace__eC__types__Class * prevClass;
int id = 0;

for(prevClass = sClass->base; prevClass; prevClass = prevClass->base)
{
if(prevClass->templateClass)
prevClass = prevClass->templateClass;
id += prevClass->templateParams.count;
}
if(sClass->templateClass)
sClass = sClass->templateClass;
for(param = sClass->templateParams.first; param; param = param->next)
__eCNameSpace__eC__types__CopyTemplateArg(param, &templatedClass->templateArgs[id++]);
}
}
while(nextParamStart)
{
const char * paramStart = nextParamStart;
const char * paramEnd;
int level = 0;

while(*paramStart == ' ')
paramStart++;
paramEnd = paramStart;
while((ch = *paramEnd, ch && (level > 0 || (ch != '>' && ch != ','))))
{
if(ch == '<')
level++;
if(ch == '>')
level--;
paramEnd++;
}
nextParamStart = (ch == ',') ? (paramEnd + 1) : (((void *)0));
while(*paramEnd == ' ')
paramEnd--;
if(paramEnd > paramStart)
{
const char * ptr, * equal = (((void *)0));
int subParamLevel = 0;

for(ptr = paramStart; ptr <= paramEnd; ptr++)
{
char ch = *ptr;

if(ch == '<')
subParamLevel++;
else if(ch == '>')
subParamLevel--;
if(subParamLevel == 0 && ch == '=')
{
equal = ptr;
break;
}
}
if(equal)
{
const char * end = equal - 1;
char ident[1024];

while(*end == ' ')
end--;
strncpy(ident, paramStart, end + 1 - paramStart);
ident[end + 1 - paramStart] = 0;
for(sClass = _class; sClass; sClass = sClass->base)
{
if(sClass->templateClass)
sClass = sClass->templateClass;
for(curParam = sClass->templateParams.first; curParam; curParam = curParam->next)
{
if(!strcmp(curParam->name, ident))
break;
}
if(curParam)
{
struct __eCNameSpace__eC__types__Class * nextClass;
struct __eCNameSpace__eC__types__ClassTemplateParameter * prevParam;

curParamID = 0;
for(prevParam = curParam->prev; prevParam; prevParam = prevParam->prev)
curParamID++;
for(nextClass = sClass->base; nextClass; nextClass = nextClass->base)
{
if(nextClass->templateClass)
nextClass = nextClass->templateClass;
curParamID += nextClass->templateParams.count;
}
break;
}
}
lastClass = sClass;
}
else
{
if(curParam)
{
curParam = curParam->next;
curParamID++;
}
if(!curParam)
{
for(sClass = lastClass ? lastClass->base : _class; sClass; sClass = sClass->base)
{
struct __eCNameSpace__eC__types__ClassTemplateParameter * param;

curParamID = 0;
if(sClass->templateClass)
sClass = sClass->templateClass;
for(param = sClass->templateParams.first; param; param = param->next, curParamID++)
{
curParam = param;
break;
}
if(curParam)
{
struct __eCNameSpace__eC__types__Class * nextClass;

for(nextClass = sClass->base; nextClass; nextClass = nextClass->base)
{
if(nextClass->templateClass)
nextClass = nextClass->templateClass;
curParamID += nextClass->templateParams.count;
}
lastClass = sClass;
break;
}
}
}
}
if(curParam)
{
struct __eCNameSpace__eC__types__ClassTemplateArgument argument =
{

.__anon1 = {

.__anon1 = {
.dataTypeString = 0
}
}
};
char value[1024];

if(equal)
{
equal++;
while(*equal == ' ')
equal++;
memcpy(value, equal, paramEnd - equal);
value[paramEnd - equal] = 0;
}
else
{
memcpy(value, paramStart, paramEnd - paramStart);
value[paramEnd - paramStart] = 0;
}
__eCNameSpace__eC__types__TrimRSpaces(value, value);
switch(curParam->type)
{
case 0:
argument.__anon1.__anon1.dataTypeString = __eCNameSpace__eC__types__CopyString(value);
argument.__anon1.__anon1.dataTypeClass = __eCNameSpace__eC__types__System_FindClass(findModule, value, registerInternalDecl);
if(!argument.__anon1.__anon1.dataTypeClass)
argument.__anon1.__anon1.dataTypeClass = __eCNameSpace__eC__types__System_FindClass(_class->module, value, registerInternalDecl);
if(!argument.__anon1.__anon1.dataTypeClass)
argument.__anon1.__anon1.dataTypeClass = __eCNameSpace__eC__types__System_FindClass(((struct __eCNameSpace__eC__types__Module *)(((char *)_class->module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application, value, registerInternalDecl);
if(registerInternalDecl && !argument.__anon1.__anon1.dataTypeClass)
{
struct __eCNameSpace__eC__types__ClassTemplateParameter * param;

for(param = templatedClass->templateParams.first; param; param = param->next)
if(!strcmp(param->name, value))
break;
if(!param)
{
argument.__anon1.__anon1.dataTypeClass = __eCNameSpace__eC__types__eSystem_RegisterClass((int)0, value, (((void *)0)), 0, 0, (((void *)0)), (((void *)0)), _class->module, 1, 1);
argument.__anon1.__anon1.dataTypeClass->internalDecl = 1;
}
}
break;
case 2:
{
struct __eCNameSpace__eC__types__Class * expClass = __eCNameSpace__eC__types__System_FindClass(_class->module, curParam->__anon1.dataTypeString, 1);

if(!expClass)
expClass = __eCNameSpace__eC__types__System_FindClass(((struct __eCNameSpace__eC__types__Module *)(((char *)_class->module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application, curParam->__anon1.dataTypeString, 1);
if(expClass)
{
((unsigned int (*)(void *, void *, const char *))(void *)expClass->_vTbl[__eCVMethodID_class_OnGetDataFromString])(expClass, &argument.__anon1.expression, value);
}
else if(value[0] == '\"')
{
char * endQuote = value + strlen(value) - 1;

if(*endQuote != '\"')
endQuote++;
*endQuote = '\0';
argument.__anon1.expression.__anon1.p = __eCNameSpace__eC__types__CopyString(value + 1);
}
else if(value[0] == '\'')
{
int nb;
unsigned int ch = __eCNameSpace__eC__i18n__UTF8GetChar(value + 1, &nb);

argument.__anon1.expression.__anon1.ui = ch;
}
else if(!strcmp(curParam->__anon1.dataTypeString, "uint"))
{
argument.__anon1.expression.__anon1.ui = (unsigned int)strtoul(value, (((void *)0)), 0);
}
else if(!strcmp(curParam->__anon1.dataTypeString, "char"))
{
argument.__anon1.expression.__anon1.c = (char)strtol(value, (((void *)0)), 0);
}
else if(!strcmp(curParam->__anon1.dataTypeString, "byte"))
{
argument.__anon1.expression.__anon1.uc = (unsigned char)strtoul(value, (((void *)0)), 0);
}
else if(!strcmp(curParam->__anon1.dataTypeString, "short"))
{
argument.__anon1.expression.__anon1.s = (short)strtol(value, (((void *)0)), 0);
}
else if(!strcmp(curParam->__anon1.dataTypeString, "uint16"))
{
argument.__anon1.expression.__anon1.us = (unsigned short)strtoul(value, (((void *)0)), 0);
}
else if(!strcmp(curParam->__anon1.dataTypeString, "int64"))
{
argument.__anon1.expression.__anon1.i64 = __eCNameSpace__eC__types___strtoi64(value, (((void *)0)), 0);
}
else if(!strcmp(curParam->__anon1.dataTypeString, "uint64"))
{
argument.__anon1.expression.__anon1.ui64 = __eCNameSpace__eC__types___strtoui64(value, (((void *)0)), 0);
}
else if(!strcmp(curParam->__anon1.dataTypeString, "float"))
{
argument.__anon1.expression.__anon1.f = (float)strtod(value, (((void *)0)));
}
else if(!strcmp(curParam->__anon1.dataTypeString, "double"))
{
argument.__anon1.expression.__anon1.d = strtod(value, (((void *)0)));
}
else
{
argument.__anon1.expression.__anon1.i = (int)strtol(value, (((void *)0)), 0);
}
break;
}
case 1:
argument.__anon1.__anon2.memberString = __eCNameSpace__eC__types__CopyString(value);
break;
}
__eCNameSpace__eC__types__FreeTemplateArg(templatedClass, curParam, curParamID);
templatedClass->templateArgs[curParamID] = argument;
}
}
}
if(templatedClass == _class)
{
struct __eCNameSpace__eC__types__Class * sClass = _class;
int curParamID = 0;
struct __eCNameSpace__eC__types__Class * nextClass;
struct __eCNameSpace__eC__types__ClassTemplateParameter * param;

for(nextClass = sClass->base; nextClass; nextClass = nextClass->base)
{
if(nextClass->templateClass)
nextClass = nextClass->templateClass;
curParamID += nextClass->templateParams.count;
}
for(param = sClass->templateParams.first; param; param = param->next)
{
if(!templatedClass->templateArgs[curParamID].__anon1.__anon1.dataTypeString)
{
templatedClass->templateArgs[curParamID] = param->defaultArg;
__eCNameSpace__eC__types__CopyTemplateArg(param, &templatedClass->templateArgs[curParamID]);
if(param->type == 0 && param->defaultArg.__anon1.__anon1.dataTypeString)
{
templatedClass->templateArgs[curParamID].__anon1.__anon1.dataTypeClass = __eCNameSpace__eC__types__System_FindClass(findModule, param->defaultArg.__anon1.__anon1.dataTypeString, 1);
if(!templatedClass->templateArgs[curParamID].__anon1.__anon1.dataTypeClass)
templatedClass->templateArgs[curParamID].__anon1.__anon1.dataTypeClass = __eCNameSpace__eC__types__System_FindClass(templatedClass->module, param->defaultArg.__anon1.__anon1.dataTypeString, 1);
if(!templatedClass->templateArgs[curParamID].__anon1.__anon1.dataTypeClass)
templatedClass->templateArgs[curParamID].__anon1.__anon1.dataTypeClass = __eCNameSpace__eC__types__System_FindClass(((struct __eCNameSpace__eC__types__Module *)(((char *)templatedClass->module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application, param->defaultArg.__anon1.__anon1.dataTypeString, 1);
}
}
curParamID++;
}
}
if(templatedClass->base && templatedClass->base->templateArgs && numParams - _class->templateParams.count)
{
int c = numParams - _class->templateParams.count - 1;

for(sClass = _class->base; sClass; sClass = sClass->base)
{
struct __eCNameSpace__eC__types__ClassTemplateParameter * param;

if(sClass->templateClass)
sClass = sClass->templateClass;
for(param = sClass->templateParams.last; param; param = param->prev)
{
struct __eCNameSpace__eC__types__ClassTemplateArgument * arg = &templatedClass->templateArgs[c];
struct __eCNameSpace__eC__types__ClassTemplateArgument * baseArg = &templatedClass->base->templateArgs[c];

if(!(*arg).__anon1.__anon1.dataTypeString)
{
*arg = templatedClass->base->templateArgs[c];
__eCNameSpace__eC__types__CopyTemplateArg(param, arg);
if(param->type == 0)
{
if((*arg).__anon1.__anon1.dataTypeClass && strchr((*arg).__anon1.__anon1.dataTypeString, '<') && (*arg).__anon1.__anon1.dataTypeClass->templateArgs)
{
struct __eCNameSpace__eC__types__Class * expClass = (*arg).__anon1.__anon1.dataTypeClass;
struct __eCNameSpace__eC__types__Class * cClass = (((void *)0));
int paramCount = 0;
int lastParam = -1;
char templateString[1024];

sprintf(templateString, "%s<", expClass->templateClass->fullName);
for(cClass = expClass; cClass; cClass = cClass->base)
{
int p = 0;
struct __eCNameSpace__eC__types__ClassTemplateParameter * param;

for(param = cClass->templateParams.first; param; param = param->next)
{
int id = p;
struct __eCNameSpace__eC__types__Class * sClass;
struct __eCNameSpace__eC__types__ClassTemplateArgument arg;

for(sClass = expClass->base; sClass; sClass = sClass->base)
id += sClass->templateParams.count;
arg = expClass->templateArgs[id];
{
struct __eCNameSpace__eC__types__ClassTemplateParameter * cParam;
int p = numParams - _class->templateParams.count;

for(cParam = _class->templateParams.first; cParam; cParam = cParam->next, p++)
{
if(cParam->type == 0 && arg.__anon1.__anon1.dataTypeString && !strcmp(cParam->name, arg.__anon1.__anon1.dataTypeString))
{
arg = templatedClass->templateArgs[p];
break;
}
}
}
{
char argument[256];

argument[0] = '\0';
switch(param->type)
{
case 2:
{
break;
}
case 1:
{
strcat(argument, arg.__anon1.__anon2.__anon1.member->name);
break;
}
case 0:
{
if(arg.__anon1.__anon1.dataTypeString)
strcat(argument, arg.__anon1.__anon1.dataTypeString);
break;
}
}
if(argument[0])
{
if(paramCount)
strcat(templateString, ", ");
if(lastParam != p - 1)
{
strcat(templateString, param->name);
strcat(templateString, " = ");
}
strcat(templateString, argument);
paramCount++;
lastParam = p;
}
}
p++;
}
}
{
int len = (int)strlen(templateString);

if(templateString[len - 1] == '>')
templateString[len++] = ' ';
templateString[len++] = '>';
templateString[len++] = '\0';
}
__eCNameSpace__eC__types__FreeTemplateArg(templatedClass, param, c);
(*arg).__anon1.__anon1.dataTypeString = __eCNameSpace__eC__types__CopyString(templateString);
(*arg).__anon1.__anon1.dataTypeClass = __eCNameSpace__eC__types__System_FindClass(findModule, templateString, 1);
if(!(*arg).__anon1.__anon1.dataTypeClass)
(*arg).__anon1.__anon1.dataTypeClass = __eCNameSpace__eC__types__System_FindClass(templatedClass->module, templateString, 1);
if(!(*arg).__anon1.__anon1.dataTypeClass)
(*arg).__anon1.__anon1.dataTypeClass = __eCNameSpace__eC__types__System_FindClass(((struct __eCNameSpace__eC__types__Module *)(((char *)templatedClass->module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application, templateString, 1);
}
else
{
struct __eCNameSpace__eC__types__ClassTemplateParameter * cParam;
int p = numParams - _class->templateParams.count;

for(cParam = _class->templateParams.first; cParam; cParam = cParam->next, p++)
{
if(cParam->type == 0 && (*baseArg).__anon1.__anon1.dataTypeString && !strcmp(cParam->name, (*baseArg).__anon1.__anon1.dataTypeString))
{
__eCNameSpace__eC__types__FreeTemplateArg(templatedClass, param, c);
(*arg).__anon1.__anon1.dataTypeString = templatedClass->templateArgs[p].__anon1.__anon1.dataTypeString;
(*arg).__anon1.__anon1.dataTypeClass = templatedClass->templateArgs[p].__anon1.__anon1.dataTypeClass;
__eCNameSpace__eC__types__CopyTemplateArg(cParam, arg);
break;
}
}
}
}
}
c--;
}
}
}
{
struct __eCNameSpace__eC__types__Class * sClass;

for(sClass = _class; sClass; sClass = sClass->base)
{
int curParamID = 0;
struct __eCNameSpace__eC__types__Class * nextClass;
struct __eCNameSpace__eC__types__ClassTemplateParameter * param;

if(sClass->templateClass)
sClass = sClass->templateClass;
for(nextClass = sClass->base; nextClass; nextClass = nextClass->base)
{
if(nextClass->templateClass)
nextClass = nextClass->templateClass;
curParamID += nextClass->templateParams.count;
}
for(param = sClass->templateParams.first; param; param = param->next)
{
if(!templatedClass->templateArgs[curParamID].__anon1.__anon1.dataTypeString)
{
templatedClass->templateArgs[curParamID] = param->defaultArg;
__eCNameSpace__eC__types__CopyTemplateArg(param, &templatedClass->templateArgs[curParamID]);
if(param->type == 0 && param->defaultArg.__anon1.__anon1.dataTypeString)
{
templatedClass->templateArgs[curParamID].__anon1.__anon1.dataTypeClass = __eCNameSpace__eC__types__System_FindClass(findModule, param->defaultArg.__anon1.__anon1.dataTypeString, 1);
if(!templatedClass->templateArgs[curParamID].__anon1.__anon1.dataTypeClass)
templatedClass->templateArgs[curParamID].__anon1.__anon1.dataTypeClass = __eCNameSpace__eC__types__System_FindClass(templatedClass->module, param->defaultArg.__anon1.__anon1.dataTypeString, 1);
if(!templatedClass->templateArgs[curParamID].__anon1.__anon1.dataTypeClass)
templatedClass->templateArgs[curParamID].__anon1.__anon1.dataTypeClass = __eCNameSpace__eC__types__System_FindClass(((struct __eCNameSpace__eC__types__Module *)(((char *)templatedClass->module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application, param->defaultArg.__anon1.__anon1.dataTypeString, 1);
}
}
curParamID++;
}
}
}
{
int c = numParams - 1;

for(sClass = _class; sClass; sClass = sClass->base)
{
struct __eCNameSpace__eC__types__ClassTemplateParameter * param;

if(sClass->templateClass)
sClass = sClass->templateClass;
for(param = sClass->templateParams.last; param; param = param->prev)
{
if(param->type == 0)
{
struct __eCNameSpace__eC__types__ClassTemplateArgument * arg = &templatedClass->templateArgs[c];
struct __eCNameSpace__eC__types__ClassTemplateParameter * cParam;
struct __eCNameSpace__eC__types__Class * dClass;
int p = numParams - 1;

for(dClass = _class; dClass; dClass = dClass->base)
{
if(dClass->templateClass)
dClass = dClass->templateClass;
for(cParam = dClass->templateParams.last; cParam; cParam = cParam->prev, p--)
{
if(cParam->type == 0 && (*arg).__anon1.__anon1.dataTypeString && !strcmp(cParam->name, (*arg).__anon1.__anon1.dataTypeString))
{
if(templatedClass->templateArgs[p].__anon1.__anon1.dataTypeString && c != p)
{
__eCNameSpace__eC__types__FreeTemplateArg(templatedClass, param, c);
(*arg).__anon1.__anon1.dataTypeString = templatedClass->templateArgs[p].__anon1.__anon1.dataTypeString;
(*arg).__anon1.__anon1.dataTypeClass = templatedClass->templateArgs[p].__anon1.__anon1.dataTypeClass;
__eCNameSpace__eC__types__CopyTemplateArg(cParam, arg);
}
}
}
}
}
c--;
}
}
}
{
struct __eCNameSpace__eC__types__Class * tClass;
int c = numParams - 1;

for(tClass = _class; tClass; tClass = tClass->base)
{
struct __eCNameSpace__eC__types__ClassTemplateParameter * param;

if(tClass->templateClass)
tClass = tClass->templateClass;
for(param = tClass->templateParams.last; param; param = param->prev)
{
struct __eCNameSpace__eC__types__ClassTemplateArgument * arg = &templatedClass->templateArgs[c];

if(param->type == 1 && (*arg).__anon1.__anon2.memberString)
{
struct __eCNameSpace__eC__types__Class * memberClass = templatedClass;
const char * memberString = (*arg).__anon1.__anon2.memberString;
const char * colon = strstr(memberString, "::");
const char * memberName = memberString;

if(colon)
memberName = colon + 2;
if(!colon)
{
memberString = param->defaultArg.__anon1.__anon2.memberString;
colon = memberString ? strstr(memberString, "::") : (((void *)0));
}
if(colon)
{
char className[1024];
struct __eCNameSpace__eC__types__Class * sClass;

memcpy(className, memberString, colon - memberString);
className[colon - memberString] = '\0';
for(sClass = _class; sClass; sClass = sClass->base)
{
struct __eCNameSpace__eC__types__ClassTemplateParameter * cParam;
struct __eCNameSpace__eC__types__Class * nextClass;
int id = 0;

if(sClass->templateClass)
sClass = sClass->templateClass;
for(nextClass = sClass->base; nextClass; nextClass = nextClass->base)
{
if(nextClass->templateClass)
nextClass = nextClass->templateClass;
id += nextClass->templateParams.count;
}
for(cParam = sClass->templateParams.first; cParam; cParam = cParam->next)
{
if(cParam->type == 0 && !strcmp(cParam->name, className) && templatedClass->templateArgs[id].__anon1.__anon1.dataTypeString)
{
strcpy(className, templatedClass->templateArgs[id].__anon1.__anon1.dataTypeString);
}
id++;
}
}
memberClass = __eCNameSpace__eC__types__System_FindClass(findModule, className, 1);
if(!memberClass)
memberClass = __eCNameSpace__eC__types__System_FindClass(templatedClass->module, className, 1);
if(!memberClass)
memberClass = __eCNameSpace__eC__types__System_FindClass(((struct __eCNameSpace__eC__types__Module *)(((char *)templatedClass->module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application, className, 1);
}
if(memberClass)
{
switch(param->__anon1.memberType)
{
case 0:
(*arg).__anon1.__anon2.__anon1.member = __eCNameSpace__eC__types__eClass_FindDataMember(memberClass, memberName, memberClass->module, (((void *)0)), (((void *)0)));
break;
case 1:
(*arg).__anon1.__anon2.__anon1.method = __eCNameSpace__eC__types__eClass_FindMethod(memberClass, memberName, memberClass->module);
break;
case 2:
(*arg).__anon1.__anon2.__anon1.prop = __eCNameSpace__eC__types__eClass_FindProperty(memberClass, memberName, memberClass->module);
break;
}
}
}
c--;
}
}
}
}

static void __eCNameSpace__eC__types__LoadCOM(struct __eCNameSpace__eC__types__Instance * module)
{
unsigned int force64Bits = (((struct __eCNameSpace__eC__types__Application *)(((char *)((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application + sizeof(struct __eCNameSpace__eC__types__Module) + sizeof(struct __eCNameSpace__eC__types__Instance))))->isGUIApp & 2) ? 1 : 0;
unsigned int force32Bits = (((struct __eCNameSpace__eC__types__Application *)(((char *)((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application + sizeof(struct __eCNameSpace__eC__types__Module) + sizeof(struct __eCNameSpace__eC__types__Instance))))->isGUIApp & 4) ? 1 : 0;
unsigned int inCompiler = (((struct __eCNameSpace__eC__types__Application *)(((char *)((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application + sizeof(struct __eCNameSpace__eC__types__Module) + sizeof(struct __eCNameSpace__eC__types__Instance))))->isGUIApp & 8) ? 1 : 0;
int pointerSize = force64Bits ? 8 : force32Bits ? 4 : sizeof(void *);
struct __eCNameSpace__eC__types__Class * applicationClass;
struct __eCNameSpace__eC__types__Class * enumClass, * structClass, * boolClass;
struct __eCNameSpace__eC__types__Class * moduleClass;
struct __eCNameSpace__eC__types__Class * baseClass = __eCNameSpace__eC__types__eSystem_RegisterClass(0, "class", (((void *)0)), 0, 0, (((void *)0)), (((void *)0)), module, 4, 1);

baseClass->type = 1000;
baseClass->memberOffset = 0;
baseClass->offset = 0;
baseClass->structSize = 0;
baseClass->typeSize = 0;
{
struct __eCNameSpace__eC__types__Class * instanceClass = __eCNameSpace__eC__types__eSystem_RegisterClass(0, "eC::types::Instance", (((void *)0)), 0, 0, (((void *)0)), (((void *)0)), module, 4, 1);

instanceClass->type = 0;
instanceClass->isInstanceClass = 1;
instanceClass->fixed = 1;
instanceClass->memberOffset = 0;
instanceClass->offset = 0;
instanceClass->memberID = -3;
instanceClass->startMemberID = -3;
__eCNameSpace__eC__types__eClass_AddDataMember(instanceClass, "_vTbl", "void **", pointerSize, pointerSize, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(instanceClass, "_class", "eC::types::Class", pointerSize, pointerSize, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(instanceClass, "_refCount", "int", sizeof(int), sizeof(int), 1);
}
__eCNameSpace__eC__types__InitializeDataTypes1(module);
enumClass = __eCNameSpace__eC__types__eSystem_RegisterClass(0, "enum", (((void *)0)), 0, force64Bits ? 40 : sizeof(struct __eCNameSpace__eC__types__EnumClassData), (((void *)0)), (((void *)0)), module, 4, 1);
__eCNameSpace__eC__types__eClass_AddClassProperty(enumClass, "enumSize", "int", (((void *)0)), __eCNameSpace__eC__types__GetEnumSize)->constant = 1;
enumClass->type = 1000;
(__eCNameSpace__eC__types__eSystem_Delete((void *)enumClass->dataTypeString), enumClass->dataTypeString = 0);
enumClass->dataTypeString = __eCNameSpace__eC__types__CopyString("int");
structClass = __eCNameSpace__eC__types__eSystem_RegisterClass(0, "struct", (((void *)0)), 0, 0, (((void *)0)), (((void *)0)), module, 4, 1);
structClass->type = 1000;
structClass->memberOffset = 0;
structClass->offset = 0;
structClass->structSize = 0;
structClass->typeSize = 0;
__eCNameSpace__eC__types__InitializeDataTypes(module);
boolClass = __eCNameSpace__eC__types__eSystem_RegisterClass(4, "bool", "uint", 0, 0, (((void *)0)), (((void *)0)), module, 4, 1);
__eCNameSpace__eC__types__eEnum_AddFixedValue(boolClass, "true", 0x1);
__eCNameSpace__eC__types__eEnum_AddFixedValue(boolClass, "false", 0x0);
moduleClass = __eCNameSpace__eC__types__eSystem_RegisterClass(0, "eC::types::Module", (((void *)0)), force64Bits ? 8 + 32 + 32 + 32 + 32 + 8 + 8 + 8 + 8 + 8 + 4 + 4 + (32 + 8 + 8 + 4 * 32) + (32 + 8 + 8 + 4 * 32) : sizeof(struct __eCNameSpace__eC__types__Module), 0, (void *)__eCNameSpace__eC__types__Module_Constructor, (void *)__eCNameSpace__eC__types__Module_Destructor, module, 4, 1);
__eCNameSpace__eC__types__eClass_AddVirtualMethod(moduleClass, "OnLoad", "bool()", (((void *)0)), 1);
__eCNameSpace__eC__types__eClass_AddVirtualMethod(moduleClass, "OnUnload", "void()", (((void *)0)), 1);
__eCNameSpace__eC__types__eClass_AddMethod(moduleClass, "Load", "Module(const char * name, AccessMode importAccess)", __eCNameSpace__eC__types__eModule_Load, 1);
__eCNameSpace__eC__types__eClass_AddMethod(moduleClass, "Unload", "void(Module module)", __eCNameSpace__eC__types__eModule_Unload, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(moduleClass, "application", "Application", pointerSize, pointerSize, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(moduleClass, "classes", "OldList", force64Bits ? 32 : force32Bits ? 20 : sizeof(struct __eCNameSpace__eC__containers__OldList), pointerSize, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(moduleClass, "defines", "OldList", force64Bits ? 32 : force32Bits ? 20 : sizeof(struct __eCNameSpace__eC__containers__OldList), pointerSize, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(moduleClass, "functions", "OldList", force64Bits ? 32 : force32Bits ? 20 : sizeof(struct __eCNameSpace__eC__containers__OldList), pointerSize, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(moduleClass, "modules", "OldList", force64Bits ? 32 : force32Bits ? 20 : sizeof(struct __eCNameSpace__eC__containers__OldList), pointerSize, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(moduleClass, "prev", "Module", pointerSize, pointerSize, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(moduleClass, "next", "Module", pointerSize, pointerSize, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(moduleClass, "name", "const char *", pointerSize, pointerSize, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(moduleClass, "library", "void *", pointerSize, pointerSize, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(moduleClass, "Unload", "void *", pointerSize, pointerSize, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(moduleClass, "importType", "ImportType", sizeof(int), 4, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(moduleClass, "origImportType", "ImportType", sizeof(int), 4, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(moduleClass, "privateNameSpace", "NameSpace", force64Bits ? (32 + 8 + 8 + 4 * 32) : force32Bits ? (16 + 4 + 4 + 4 * 16) : sizeof(struct __eCNameSpace__eC__types__NameSpace), pointerSize, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(moduleClass, "publicNameSpace", "NameSpace", force64Bits ? (32 + 8 + 8 + 4 * 32) : force32Bits ? (16 + 4 + 4 + 4 * 16) : sizeof(struct __eCNameSpace__eC__types__NameSpace), pointerSize, 1);
moduleClass->fixed = 1;
moduleClass->count++;
if(inCompiler && force32Bits)
moduleClass->structSize = 12 + 4 + 20 + 20 + 20 + 20 + 4 + 4 + 4 + 4 + 4 + 4 + 4 + (16 + 4 + 4 + 4 * 16) + (16 + 4 + 4 + 4 * 16);
applicationClass = __eCNameSpace__eC__types__eSystem_RegisterClass(0, "eC::types::Application", "Module", force64Bits ? (8 + 8 + 4 + 4 + 32 + 8 + 176) : sizeof(struct __eCNameSpace__eC__types__Application), 0, (((void *)0)), (void *)__eCNameSpace__eC__types__Application_Destructor, module, 4, 1);
if(inCompiler && force32Bits)
{
applicationClass->offset = 12 + 4 + 20 + 20 + 20 + 20 + 4 + 4 + 4 + 4 + 4 + 4 + 4 + (16 + 4 + 4 + 4 * 16) + (16 + 4 + 4 + 4 * 16);
applicationClass->structSize = applicationClass->offset + (4 + 4 + 4 + 4 + 20 + 4 + 88);
}
__eCNameSpace__eC__types__eClass_AddVirtualMethod(applicationClass, "Main", "void()", __eCNameSpace__eC__types__DefaultFunction, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(applicationClass, "argc", "int", sizeof(int), 4, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(applicationClass, "argv", "const char **", pointerSize, pointerSize, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(applicationClass, "exitCode", "int", sizeof(int), 4, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(applicationClass, "isGUIApp", "bool", sizeof(unsigned int), 4, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(applicationClass, "allModules", "OldList", force64Bits ? 32 : force32Bits ? 20 : sizeof(struct __eCNameSpace__eC__containers__OldList), pointerSize, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(applicationClass, "parsedCommand", "char *", pointerSize, pointerSize, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(applicationClass, "systemNameSpace", "NameSpace", force64Bits ? (32 + 8 + 8 + 4 * 32) : force32Bits ? (16 + 4 + 4 + 4 * 16) : sizeof(struct __eCNameSpace__eC__types__NameSpace), pointerSize, 1);
applicationClass->fixed = 1;
applicationClass->count++;
__eCNameSpace__eC__types__eSystem_RegisterFunction("sin", "double sin(Angle number)", sin, module, 4);
__eCNameSpace__eC__types__eSystem_RegisterFunction("sinh", "double sinh(Angle number)", sinh, module, 4);
__eCNameSpace__eC__types__eSystem_RegisterFunction("cosh", "double cosh(Angle number)", cosh, module, 4);
__eCNameSpace__eC__types__eSystem_RegisterFunction("tanh", "double tanh(Angle number)", tanh, module, 4);
__eCNameSpace__eC__types__eSystem_RegisterFunction("sqrt", "double sqrt(double number)", sqrt, module, 4);
__eCNameSpace__eC__types__eSystem_RegisterFunction("cos", "double cos(Angle number)", cos, module, 4);
__eCNameSpace__eC__types__eSystem_RegisterFunction("tan", "double tan(Angle number)", tan, module, 4);
__eCNameSpace__eC__types__eSystem_RegisterFunction("atan2", "Angle atan2(double y, double x)", atan2, module, 4);
__eCNameSpace__eC__types__eSystem_RegisterFunction("asin", "Angle asin(double number)", asin, module, 4);
__eCNameSpace__eC__types__eSystem_RegisterFunction("acos", "Angle acos(double number)", acos, module, 4);
__eCNameSpace__eC__types__eSystem_RegisterFunction("atan", "Angle atan(double number)", atan, module, 4);
__eCNameSpace__eC__types__eSystem_RegisterFunction("asinh", "Angle asinh(double number)", asinh, module, 4);
__eCNameSpace__eC__types__eSystem_RegisterFunction("acosh", "Angle acosh(double number)", acosh, module, 4);
__eCNameSpace__eC__types__eSystem_RegisterFunction("atanh", "Angle atanh(double number)", atanh, module, 4);
__eCNameSpace__eC__types__eSystem_RegisterFunction("pow", "double pow(double number, double number2)", pow, module, 4);
__eCNameSpace__eC__types__eSystem_RegisterFunction("fmod", "double fmod(double x, double y)", fmod, module, 4);
__eCNameSpace__eC__types__eSystem_RegisterFunction("fabs", "double fabs(double number)", fabs, module, 4);
__eCNameSpace__eC__types__eSystem_RegisterFunction("log", "double log(double number)", log, module, 4);
__eCNameSpace__eC__types__eSystem_RegisterFunction("log10", "double log10(double number)", log10, module, 4);
__eCNameSpace__eC__types__eSystem_RegisterFunction("ceil", "double ceil(double number)", ceil, module, 4);
__eCNameSpace__eC__types__eSystem_RegisterFunction("floor", "double floor(double number)", floor, module, 4);
__eCNameSpace__eC__types__eSystem_RegisterFunction("exp", "double exp(double number)", exp, module, 4);
__eCNameSpace__eC__types__eSystem_RegisterFunction("qsort", "void qsort(void *, uintsize, uintsize, int (*)(void *, void *))", qsort, module, 4);
__eCNameSpace__eC__types__eSystem_RegisterFunction("strtod", "double strtod(const char*, char**)", strtod, module, 4);
__eCNameSpace__eC__types__eSystem_RegisterFunction("strtol", "int strtol(const char*, char**, int base)", strtol, module, 4);
__eCNameSpace__eC__types__eSystem_RegisterFunction("strtoul", "unsigned long strtoul(const char * nptr, char ** endptr, int base)", strtoul, module, 4);
__eCNameSpace__eC__types__eSystem_RegisterFunction("strtoll", "int64 strtoll(const char * nptr, char ** endptr, int base)", strtoll, module, 4);
__eCNameSpace__eC__types__eSystem_RegisterFunction("strtoull", "uint64 strtoull(const char * nptr, char ** endptr, int base)", strtoull, module, 4);
__eCNameSpace__eC__types__eSystem_RegisterFunction("system", "int system(const char*)", system, module, 4);
__eCNameSpace__eC__types__eSystem_RegisterFunction("atoi", "int atoi(const char*)", atoi, module, 4);
__eCNameSpace__eC__types__eSystem_RegisterFunction("atof", "double atof(const char*)", atof, module, 4);
__eCNameSpace__eC__types__eSystem_RegisterFunction("memset", "void * memset(void * area, int value, uintsize count)", memset, module, 4);
__eCNameSpace__eC__types__eSystem_RegisterFunction("getenv", "char * getenv(const char * name)", getenv, module, 4);
__eCNameSpace__eC__types__eSystem_RegisterFunction("rename", "int rename(const char *oldpath, const char *newpath)", rename, module, 4);
__eCNameSpace__eC__types__eSystem_RegisterFunction("strlen", "uintsize strlen(const char *)", strlen, module, 4);
__eCNameSpace__eC__types__eSystem_RegisterFunction("strcat", "char * strcat(char *, const char *)", strcat, module, 4);
__eCNameSpace__eC__types__eSystem_RegisterFunction("strncat", "char * strncat(char *, const char *, uintsize n)", strncat, module, 4);
__eCNameSpace__eC__types__eSystem_RegisterFunction("strchr", "char * strchr(const char *, int)", strchr, module, 4);
__eCNameSpace__eC__types__eSystem_RegisterFunction("strstr", "char * strstr(const char *, const char *)", strstr, module, 4);
__eCNameSpace__eC__types__eSystem_RegisterFunction("strspn", "uintsize strspn(const char *, const char *)", strspn, module, 4);
__eCNameSpace__eC__types__eSystem_RegisterFunction("strcspn", "uintsize strcspn(const char *, const char *)", strcspn, module, 4);
__eCNameSpace__eC__types__eSystem_RegisterFunction("strpbrk", "char * strpbrk(const char *, const char *)", strpbrk, module, 4);
__eCNameSpace__eC__types__eSystem_RegisterDefine("fstrcmp", "(__runtimePlatform == win32) ? strcmpi : strcmp", module, 4);
__eCNameSpace__eC__types__eSystem_RegisterDefine("strcmpi", "strcasecmp", module, 4);
__eCNameSpace__eC__types__eSystem_RegisterDefine("strnicmp", "strncasecmp", module, 4);
__eCNameSpace__eC__types__eSystem_RegisterFunction("strcasecmp", "int strcasecmp(const char *, const char *)", strcasecmp, module, 4);
__eCNameSpace__eC__types__eSystem_RegisterFunction("strncasecmp", "int strncasecmp(const char *, const char *, uintsize n)", strncasecmp, module, 4);
__eCNameSpace__eC__types__eSystem_RegisterFunction("strcmp", "int strcmp(const char *, const char *)", strcmp, module, 4);
__eCNameSpace__eC__types__eSystem_RegisterFunction("strncmp", "int strncmp(const char *, const char *, uintsize n)", strncmp, module, 4);
__eCNameSpace__eC__types__eSystem_RegisterFunction("strlwr", "char * strlwr(char *)", strlwr, module, 4);
__eCNameSpace__eC__types__eSystem_RegisterFunction("strupr", "char * strupr(char *)", strupr, module, 4);
__eCNameSpace__eC__types__eSystem_RegisterFunction("strcpy", "char * strcpy(char *, const char *)", strcpy, module, 4);
__eCNameSpace__eC__types__eSystem_RegisterFunction("strncpy", "char * strncpy(char *, const char *, uintsize n)", strncpy, module, 4);
__eCNameSpace__eC__types__eSystem_RegisterFunction("memcpy", "void * memcpy(void *, const void *, uintsize size)", memcpy, module, 4);
__eCNameSpace__eC__types__eSystem_RegisterFunction("memmove", "void * memmove(void *, const void *, uintsize size)", memmove, module, 4);
__eCNameSpace__eC__types__eSystem_RegisterFunction("memcmp", "int memcmp(const void *, const void *, uintsize size)", memcmp, module, 4);
__eCNameSpace__eC__types__eSystem_RegisterFunction("sprintf", "int sprintf(char *, const char *, ...)", sprintf, module, 4);
__eCNameSpace__eC__types__eSystem_RegisterFunction("snprintf", "int snprintf(char *, uintsize, const char *, ...)", snprintf, module, 4);
__eCNameSpace__eC__types__eSystem_RegisterFunction("printf", "int printf(const char *, ...)", printf, module, 4);
__eCNameSpace__eC__types__eSystem_RegisterFunction("vsprintf", "int vsprintf(char*, const char*, __builtin_va_list)", vsprintf, module, 4);
__eCNameSpace__eC__types__eSystem_RegisterFunction("vsnprintf", "int vsnprintf(char*, uintsize, const char*, __builtin_va_list)", vsnprintf, module, 4);
__eCNameSpace__eC__types__eSystem_RegisterFunction("puts", "int puts(const char *)", puts, module, 4);
__eCNameSpace__eC__types__eSystem_RegisterFunction("fputs", "int fputs(const char *, void * stream)", fputs, module, 4);
__eCNameSpace__eC__types__eSystem_RegisterFunction("tolower", "int tolower(int)", tolower, module, 4);
__eCNameSpace__eC__types__eSystem_RegisterFunction("toupper", "int toupper(int)", toupper, module, 4);
__eCNameSpace__eC__types__eSystem_RegisterFunction("isdigit", "bool isdigit(int)", isdigit, module, 4);
__eCNameSpace__eC__types__eSystem_RegisterFunction("isxdigit", "bool isxdigit(int)", isxdigit, module, 4);
__eCNameSpace__eC__types__eSystem_RegisterFunction("isalnum", "int isalnum(int c)", isalnum, module, 4);
__eCNameSpace__eC__types__eSystem_RegisterFunction("isspace", "int isspace(int c)", isspace, module, 4);
__eCNameSpace__eC__types__eSystem_RegisterFunction("isalpha", "int isalpha(int c)", isalpha, module, 4);
__eCNameSpace__eC__types__eSystem_RegisterFunction("islower", "int islower(int c)", islower, module, 4);
__eCNameSpace__eC__types__eSystem_RegisterFunction("isupper", "int isupper(int c)", isupper, module, 4);
__eCNameSpace__eC__types__eSystem_RegisterFunction("isprint", "int isprint(int c)", isprint, module, 4);
__eCNameSpace__eC__types__eSystem_RegisterFunction("isblank", "int isblank(int c)", isblank, module, 4);
}

static void __eCNameSpace__eC__types__FixDerivativesBase(struct __eCNameSpace__eC__types__Class * base, struct __eCNameSpace__eC__types__Class * mod)
{
struct __eCNameSpace__eC__containers__OldLink * derivative;

__eCNameSpace__eC__types__ComputeClassParameters(base, strchr(base->name, '<'), (((void *)0)), base->templateClass != mod);
for(derivative = base->derivatives.first; derivative; derivative = derivative->next)
{
struct __eCNameSpace__eC__types__Class * _class = derivative->data;
int type = _class->type;
int oldType = type;
int size = _class->structSize - _class->offset;
int oldSizeClass = _class->sizeClass;
int sizeClass = _class->sizeClass - _class->offsetClass;
struct __eCNameSpace__eC__types__Class * enumBase = (((void *)0));
const char * dataTypeString = (((void *)0));
struct __eCNameSpace__eC__types__Class * baseClass;
unsigned int offsetBefore = _class->offset;
int offsetClass, totalSizeClass;

for(baseClass = base; baseClass->base; baseClass = baseClass->base)
;
if(base && !base->internalDecl && (base->type == 5 || base->type == 1 || base->type == 0))
{
if(base->type == 1 && (type == 0 || type == 5))
type = 5;
else
type = base->type;
}
if(base && (_class->type == 0 || _class->type == 5 || _class->type == 1) && (base->type == 3 || base->type == 2 || base->type == 4))
{
type = base->type;
}
if(type == 4)
{
if(base->type != 4)
{
enumBase = base;
base = __eCNameSpace__eC__types__eSystem_FindClass(_class->module, "enum");
}
}
dataTypeString = enumBase ? enumBase->dataTypeString : base->dataTypeString;
offsetClass = base ? (base->templateClass ? base->templateClass->sizeClass : base->sizeClass) : (type == 5 ? 0 : 0);
totalSizeClass = offsetClass + sizeClass;
if(type == 0 || type == 5)
{
if(type != 5 || base->memberOffset)
{
_class->offset = (base && (base->templateClass ? (type == 0 ? base->templateClass->structSize : base->templateClass->memberOffset) : (type == 0 ? base->structSize : base->memberOffset)) && base->type != 1000) ? (base->templateClass ? base->templateClass->structSize : base->structSize) : ((type == 5) ? 0 : sizeof(struct __eCNameSpace__eC__types__Instance));
if(_class->structAlignment && (_class->offset % _class->structAlignment))
_class->offset += _class->structAlignment - _class->offset % _class->structAlignment;
}
}
else
_class->offset = 0;
if(type == 1)
{
_class->memberOffset = (base && (base->templateClass ? base->templateClass->structSize : base->structSize) && base->type != 1000) ? (base->templateClass ? base->templateClass->structSize : base->structSize) : 0;
_class->typeSize = _class->structSize = _class->memberOffset + size;
}
else if(type == 2 || type == 4 || type == 3)
{
struct __eCNameSpace__eC__types__Class * dataTypeClass = __eCNameSpace__eC__types__eSystem_FindClass(_class->module, dataTypeString);

if(dataTypeClass)
_class->typeSize = dataTypeClass->typeSize;
_class->structSize = 0;
}
else if(type == 0 || type == 5)
{
if(type == 5 && _class->structSize != _class->offset + size)
printf("ERROR: inconsistent nohead class struct size for %s\n", _class->name);
_class->structSize = _class->offset + size;
_class->typeSize = sizeof(void *);
}
if(_class->type != 1000)
_class->type = type;
(__eCNameSpace__eC__types__eSystem_Delete((void *)_class->dataTypeString), _class->dataTypeString = 0);
_class->dataTypeString = __eCNameSpace__eC__types__CopyString(dataTypeString);
if(totalSizeClass != oldSizeClass)
{
_class->data = __eCNameSpace__eC__types__eSystem_Renew(_class->data, sizeof(unsigned char) * (totalSizeClass));
memmove((unsigned char *)_class->data + mod->offsetClass, (unsigned char *)_class->data, totalSizeClass - mod->sizeClass);
if(base->type != 1000 && base->type != 4)
memcpy((unsigned char *)_class->data, (unsigned char *)base->data, totalSizeClass - _class->sizeClass);
else
memset((unsigned char *)_class->data, 0, totalSizeClass - _class->sizeClass);
}
_class->offsetClass = offsetClass;
_class->sizeClass = totalSizeClass;
{
struct __eCNameSpace__eC__types__Method * method, * next;
struct __eCNameSpace__eC__types__Class * b;
unsigned int needUpdate = (mod != (base->templateClass ? base->templateClass : base) || _class->vTblSize != mod->vTblSize);
int updateStart = -1, updateEnd = -1;

if(mod->base && mod->base->base && mod->base->vTblSize > baseClass->vTblSize && needUpdate)
{
_class->vTblSize += mod->base->vTblSize - baseClass->vTblSize;
_class->_vTbl = __eCNameSpace__eC__types__eSystem_Renew(_class->_vTbl, sizeof(void *) * (_class->vTblSize));
memmove(_class->_vTbl + mod->base->vTblSize, _class->_vTbl + baseClass->vTblSize, (_class->vTblSize - mod->vTblSize) * sizeof(void *));
memcpy(_class->_vTbl + baseClass->vTblSize, mod->_vTbl + baseClass->vTblSize, (mod->base->vTblSize - baseClass->vTblSize) * sizeof(void *));
updateStart = baseClass->vTblSize;
updateEnd = updateStart + mod->base->vTblSize - baseClass->vTblSize;
for(method = (struct __eCNameSpace__eC__types__Method *)__eCProp___eCNameSpace__eC__containers__BinaryTree_Get_first(&_class->methods); method; method = next)
{
next = (struct __eCNameSpace__eC__types__Method *)__eCProp___eCNameSpace__eC__containers__BTNode_Get_next(((struct __eCNameSpace__eC__containers__BTNode *)method));
if(method->type == 1)
method->vid += mod->base->vTblSize - baseClass->vTblSize;
}
}
for(b = mod->base; b && b != (((void *)0)); b = b->base)
{
struct __eCNameSpace__eC__types__Method * vMethod;

for(vMethod = (struct __eCNameSpace__eC__types__Method *)__eCProp___eCNameSpace__eC__containers__BinaryTree_Get_first(&b->methods); vMethod; vMethod = (struct __eCNameSpace__eC__types__Method *)__eCProp___eCNameSpace__eC__containers__BTNode_Get_next(((struct __eCNameSpace__eC__containers__BTNode *)vMethod)))
{
if(vMethod->type == 1)
{
method = (struct __eCNameSpace__eC__types__Method *)__eCMethod___eCNameSpace__eC__containers__BinaryTree_FindString(&_class->methods, vMethod->name);
if(method)
{
if(method->function)
_class->_vTbl[vMethod->vid] = method->function;
if(!method->symbol)
{
(__eCNameSpace__eC__types__eSystem_Delete((void *)method->name), method->name = 0);
(__eCNameSpace__eC__types__eSystem_Delete((void *)method->dataTypeString), method->dataTypeString = 0);
__eCMethod___eCNameSpace__eC__containers__BinaryTree_Delete(&_class->methods, (struct __eCNameSpace__eC__containers__BTNode *)method);
}
else
{
(__eCNameSpace__eC__types__eSystem_Delete((void *)method->dataTypeString), method->dataTypeString = 0);
method->type = vMethod->type;
method->dataTypeString = __eCNameSpace__eC__types__CopyString(vMethod->dataTypeString);
method->_class = vMethod->_class;
}
}
else if((vMethod->vid >= updateStart && vMethod->vid < updateEnd) || _class->_vTbl[vMethod->vid] == b->_vTbl[vMethod->vid])
_class->_vTbl[vMethod->vid] = _class->base->_vTbl[vMethod->vid];
}
}
}
}
if(type == 0 || type == 5 || type == 1)
{
struct __eCNameSpace__eC__types__Property * prop;
struct __eCNameSpace__eC__types__DataMember * member;
struct __eCNameSpace__eC__types__Class * c;

for(c = mod->base; c; c = c->base)
{
struct __eCNameSpace__eC__types__Property * _property;

for(_property = c->membersAndProperties.first; _property; _property = _property->next)
{
if(_property->isProperty)
{
struct __eCNameSpace__eC__types__BTNamedLink * link = (struct __eCNameSpace__eC__types__BTNamedLink *)__eCMethod___eCNameSpace__eC__containers__BinaryTree_FindString(&_class->prop, _property->name);

if(link)
{
prop = link->data;
if(!prop->Set && !prop->Get && prop->memberAccess == 4)
{
struct __eCNameSpace__eC__types__SelfWatcher * watcher;

for(watcher = _class->selfWatchers.first; watcher; watcher = watcher->next)
{
if(watcher->_property == prop)
watcher->_property = _property;
}
_property->selfWatchable = 1;
__eCMethod___eCNameSpace__eC__containers__BinaryTree_Delete(&_class->prop, (struct __eCNameSpace__eC__containers__BTNode *)link);
(__eCNameSpace__eC__types__eSystem_Delete((void *)prop->name), prop->name = 0);
(__eCNameSpace__eC__types__eSystem_Delete((void *)prop->dataTypeString), prop->dataTypeString = 0);
__eCMethod___eCNameSpace__eC__containers__OldList_Delete(&_class->membersAndProperties, prop);
}
}
}
}
}
{
struct __eCNameSpace__eC__types__DataMember * next;

for(member = _class->membersAndProperties.first; member; member = next)
{
int offsetDiff = _class->offset - offsetBefore;

next = member->next;
if(!member->isProperty)
{
if(oldType == 2 && type != 2)
{
struct __eCNameSpace__eC__types__DataMember * prev = member->prev;

__eCMethod___eCNameSpace__eC__containers__OldList_Remove(&_class->membersAndProperties, member);
member = (struct __eCNameSpace__eC__types__DataMember *)__eCNameSpace__eC__types__eSystem_Renew0(member, sizeof(unsigned char) * (sizeof(struct __eCNameSpace__eC__types__DataMember)));
__eCMethod___eCNameSpace__eC__containers__OldList_Insert(&_class->membersAndProperties, prev, member);
}
if(offsetDiff > 0)
{
member->offset += offsetDiff;
member->memberOffset += offsetDiff;
}
}
member->id += mod->base->memberID;
}
_class->memberID += mod->base->memberID;
_class->startMemberID += mod->base->memberID;
}
}
__eCNameSpace__eC__types__FixDerivativesBase(_class, mod);
{
struct __eCNameSpace__eC__types__Class * c;

for(c = mod->base; c; c = c->base)
{
struct __eCNameSpace__eC__types__ClassProperty * _property;

for(_property = (struct __eCNameSpace__eC__types__ClassProperty *)__eCProp___eCNameSpace__eC__containers__BinaryTree_Get_first(&c->classProperties); _property; _property = (struct __eCNameSpace__eC__types__ClassProperty *)__eCProp___eCNameSpace__eC__containers__BTNode_Get_next(((struct __eCNameSpace__eC__containers__BTNode *)_property)))
{
__eCNameSpace__eC__types__SetDelayedCPValues(_class, _property);
}
}
}
}
{
struct __eCNameSpace__eC__containers__OldLink * templateLink;

for(templateLink = base->templatized.first; templateLink; templateLink = templateLink->next)
{
struct __eCNameSpace__eC__types__Class * template = templateLink->data;

template->base = base->base;
template->_vTbl = base->_vTbl;
template->data = base->data;
template->offset = base->offset;
template->offsetClass = base->offsetClass;
template->sizeClass = base->sizeClass;
template->structSize = base->structSize;
template->vTblSize = base->vTblSize;
__eCNameSpace__eC__types__FixDerivativesBase(template, mod);
}
}
}

struct __eCNameSpace__eC__types__Class * __eCNameSpace__eC__types__System_FindClass(struct __eCNameSpace__eC__types__Instance * module, const char * name, unsigned int registerTemplatesInternalDecl)
{
if(name && module)
{
struct __eCNameSpace__eC__types__BTNamedLink * link;

if(!strncmp(name, "const ", 6))
name += 6;
link = __eCNameSpace__eC__types__SearchNameSpace(&((struct __eCNameSpace__eC__types__Application *)(((char *)((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application + sizeof(struct __eCNameSpace__eC__types__Module) + sizeof(struct __eCNameSpace__eC__types__Instance))))->systemNameSpace, name, &(*((struct __eCNameSpace__eC__types__NameSpace *)0)).classes);
if(link)
return link->data;
link = __eCNameSpace__eC__types__SearchModule(module, name, &(*((struct __eCNameSpace__eC__types__NameSpace *)0)).classes, 1);
if(link)
return link->data;
{
char noTemplateName[1024];
char * templateParams = strchr(name, '<');

if(templateParams)
{
strncpy(noTemplateName, name, templateParams - name);
noTemplateName[templateParams - name] = '\0';
}
else
strcpy(noTemplateName, name);
link = __eCNameSpace__eC__types__SearchNameSpace(&((struct __eCNameSpace__eC__types__Application *)(((char *)((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application + sizeof(struct __eCNameSpace__eC__types__Module) + sizeof(struct __eCNameSpace__eC__types__Instance))))->systemNameSpace, noTemplateName, &(*((struct __eCNameSpace__eC__types__NameSpace *)0)).classes);
if(!link)
link = __eCNameSpace__eC__types__SearchModule(module, noTemplateName, &(*((struct __eCNameSpace__eC__types__NameSpace *)0)).classes, 1);
if(link)
{
struct __eCNameSpace__eC__types__Class * _class = link->data;
struct __eCNameSpace__eC__types__Class * templatedClass = (((void *)0));
char className[1024];

strcpy(className, _class->fullName);
strcat(className, templateParams);
link = __eCNameSpace__eC__types__SearchNameSpace(&((struct __eCNameSpace__eC__types__Application *)(((char *)((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application + sizeof(struct __eCNameSpace__eC__types__Module) + sizeof(struct __eCNameSpace__eC__types__Instance))))->systemNameSpace, className, &(*((struct __eCNameSpace__eC__types__NameSpace *)0)).classes);
if(link)
return link->data;
link = __eCNameSpace__eC__types__SearchModule(module, className, &(*((struct __eCNameSpace__eC__types__NameSpace *)0)).classes, 1);
if(link)
return link->data;
if(_class && templateParams)
{
struct __eCNameSpace__eC__containers__OldList __simpleStruct1 =
{
0, 0, 0, 0, 0
};
struct __eCNameSpace__eC__containers__OldList __simpleStruct0 =
{
0, 0, 0, 0, 0
};
struct __eCNameSpace__eC__types__Class * b;
unsigned int isAVLNode = 0, isMapNode = 0;

for(b = _class; b; b = b->base)
{
while(b->templateClass)
b = b->templateClass;
if(!strcmp(b->fullName, "eC::containers::MapNode"))
isMapNode = 1;
else if(!strcmp(b->fullName, "eC::containers::AVLNode"))
isAVLNode = 1;
}
templatedClass = __eCNameSpace__eC__types__eSystem_New0(sizeof(struct __eCNameSpace__eC__types__Class));
*templatedClass = *_class;
templatedClass->templateClass = _class;
templatedClass->fullName = __eCNameSpace__eC__types__CopyString(className);
templatedClass->dataTypeString = __eCNameSpace__eC__types__CopyString(_class->dataTypeString);
templatedClass->name = __eCNameSpace__eC__types__CopyString(templatedClass->fullName + strlen(_class->fullName) - strlen(_class->name));
__eCMethod___eCNameSpace__eC__containers__BinaryTree_Add(&(*templatedClass->nameSpace).classes, (struct __eCNameSpace__eC__containers__BTNode *)__extension__ ({
struct __eCNameSpace__eC__types__BTNamedLink * __eCInstance1 = __eCNameSpace__eC__types__eSystem_New0(sizeof(struct __eCNameSpace__eC__types__BTNamedLink));

__eCInstance1->name = (char *)templatedClass->name, __eCInstance1->data = templatedClass, __eCInstance1;
}));
templatedClass->templateArgs = (((void *)0));
templatedClass->numParams = 0;
templatedClass->derivatives = __simpleStruct0;
templatedClass->templatized = __simpleStruct1;
templatedClass->module = module;
templatedClass->count = 0;
templatedClass->prev = (((void *)0));
templatedClass->next = (((void *)0));
__eCMethod___eCNameSpace__eC__containers__OldList_Add(&((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->classes, templatedClass);
__eCNameSpace__eC__types__ComputeClassParameters(templatedClass, templateParams, module, registerTemplatesInternalDecl);
if(isAVLNode && templatedClass->templateArgs)
{
struct __eCNameSpace__eC__types__Class * keyClass = templatedClass->templateArgs[0].__anon1.__anon1.dataTypeClass;
int keySize = (keyClass && keyClass->type == 1) ? keyClass->typeSize : sizeof(uint64);

if(keySize != sizeof(uint64))
templatedClass->structSize += keySize - sizeof(uint64);
if(isMapNode)
{
struct __eCNameSpace__eC__types__Class * valClass = templatedClass->templateArgs[2].__anon1.__anon1.dataTypeClass;
int valSize = (valClass && valClass->type == 1) ? valClass->typeSize : sizeof(uint64);

if(valSize != sizeof(uint64))
templatedClass->structSize += valSize - sizeof(uint64);
}
}
__eCMethod___eCNameSpace__eC__containers__OldList_Add(&_class->templatized, __extension__ ({
struct __eCNameSpace__eC__containers__OldLink * __eCInstance1 = __eCNameSpace__eC__types__eSystem_New0(sizeof(struct __eCNameSpace__eC__containers__OldLink));

__eCInstance1->data = templatedClass, __eCInstance1;
}));
}
return templatedClass;
}
}
}
return (((void *)0));
}

struct __eCNameSpace__eC__types__Instance * __eCNameSpace__eC__types__eCrt_Initialize(unsigned int guiApp, int argc, char * argv[])
{
struct __eCNameSpace__eC__types__Instance * app;

app = __eCNameSpace__eC__types___calloc(1, sizeof(struct __eCNameSpace__eC__types__Application) + sizeof(struct __eCNameSpace__eC__types__Module) + sizeof(struct __eCNameSpace__eC__types__Instance));
__eCNameSpace__eC__types__Module_Constructor(app);
((struct __eCNameSpace__eC__types__Application *)(((char *)app + sizeof(struct __eCNameSpace__eC__types__Module) + sizeof(struct __eCNameSpace__eC__types__Instance))))->systemNameSpace.classes.CompareKey = (void *)__eCMethod___eCNameSpace__eC__containers__BinaryTree_CompareString;
((struct __eCNameSpace__eC__types__Application *)(((char *)app + sizeof(struct __eCNameSpace__eC__types__Module) + sizeof(struct __eCNameSpace__eC__types__Instance))))->systemNameSpace.defines.CompareKey = (void *)__eCMethod___eCNameSpace__eC__containers__BinaryTree_CompareString;
((struct __eCNameSpace__eC__types__Application *)(((char *)app + sizeof(struct __eCNameSpace__eC__types__Module) + sizeof(struct __eCNameSpace__eC__types__Instance))))->systemNameSpace.functions.CompareKey = (void *)__eCMethod___eCNameSpace__eC__containers__BinaryTree_CompareString;
((struct __eCNameSpace__eC__types__Application *)(((char *)app + sizeof(struct __eCNameSpace__eC__types__Module) + sizeof(struct __eCNameSpace__eC__types__Instance))))->systemNameSpace.nameSpaces.CompareKey = (void *)__eCMethod___eCNameSpace__eC__containers__BinaryTree_CompareString;
Instance_COM_Initialize(argc, argv, &((struct __eCNameSpace__eC__types__Application *)(((char *)app + sizeof(struct __eCNameSpace__eC__types__Module) + sizeof(struct __eCNameSpace__eC__types__Instance))))->parsedCommand, &((struct __eCNameSpace__eC__types__Application *)(((char *)app + sizeof(struct __eCNameSpace__eC__types__Module) + sizeof(struct __eCNameSpace__eC__types__Instance))))->argc, &((struct __eCNameSpace__eC__types__Application *)(((char *)app + sizeof(struct __eCNameSpace__eC__types__Module) + sizeof(struct __eCNameSpace__eC__types__Instance))))->argv);
((struct __eCNameSpace__eC__types__Module *)(((char *)app + sizeof(struct __eCNameSpace__eC__types__Instance))))->application = app;
((struct __eCNameSpace__eC__types__Application *)(((char *)app + sizeof(struct __eCNameSpace__eC__types__Module) + sizeof(struct __eCNameSpace__eC__types__Instance))))->allModules.offset = sizeof(struct __eCNameSpace__eC__types__Instance) + (unsigned int)(uintptr_t)&(*((struct __eCNameSpace__eC__types__Module *)0)).prev;
((struct __eCNameSpace__eC__types__Application *)(((char *)app + sizeof(struct __eCNameSpace__eC__types__Module) + sizeof(struct __eCNameSpace__eC__types__Instance))))->isGUIApp = guiApp;
__eCNameSpace__eC__types__LoadCOM(app);
((struct __eCNameSpace__eC__types__Instance *)(char *)app)->_class = __eCNameSpace__eC__types__eSystem_FindClass(app, "Application");
return app;
}

void __eCRegisterModule_instance(struct __eCNameSpace__eC__types__Instance * module)
{
struct __eCNameSpace__eC__types__Class __attribute__((unused)) * class;

__eCNameSpace__eC__types__eSystem_RegisterDefine("eC::types::null", "((void *)0)", module, 1);
class = __eCNameSpace__eC__types__eSystem_RegisterClass(3, "eC::types::Angle", "double", 0, 0, (void *)0, (void *)0, module, 1, 1);
if(((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application == ((struct __eCNameSpace__eC__types__Module *)(((char *)__thisModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->application && class)
__eCClass___eCNameSpace__eC__types__Angle = class;
class = __eCNameSpace__eC__types__eSystem_RegisterClass(3, "unichar", "uint", 0, 0, (void *)0, (void *)0, module, 1, 1);
if(((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application == ((struct __eCNameSpace__eC__types__Module *)(((char *)__thisModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->application && class)
__eCClass_unichar = class;
__eCNameSpace__eC__types__eClass_AddMethod(class, "OnGetString", 0, __eCMethod_unichar_OnGetString, 1);
__eCNameSpace__eC__types__eClass_AddMethod(class, "OnGetDataFromString", 0, __eCMethod_unichar_OnGetDataFromString, 1);
class = __eCNameSpace__eC__types__eSystem_RegisterClass(5, "eC::types::Property", 0, sizeof(struct __eCNameSpace__eC__types__Property), 0, (void *)0, (void *)0, module, 1, 1);
if(((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application == ((struct __eCNameSpace__eC__types__Module *)(((char *)__thisModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->application && class)
__eCClass___eCNameSpace__eC__types__Property = class;
__eCNameSpace__eC__types__eClass_AddDataMember(class, "prev", "eC::types::Property", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "next", "eC::types::Property", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "name", "const char *", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "isProperty", "bool", 4, 4, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "memberAccess", "eC::types::AccessMode", 4, 4, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "id", "int", 4, 4, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "_class", "eC::types::Class", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "dataTypeString", "const char *", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "dataTypeClass", "eC::types::Class", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "dataType", "Type", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "Set", "void (*)(void *, int)", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "Get", "int (*)(void *)", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "IsSet", "bool (*)(void *)", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "data", "void *", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "symbol", "void *", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "vid", "int", 4, 4, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "conversion", "bool", 4, 4, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "watcherOffset", "uint", 4, 4, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "category", "const char *", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "compiled", "bool", 4, 4, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "selfWatchable", "bool", 4, 4, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "isWatchable", "bool", 4, 4, 1);
if(class)
class->fixed = (unsigned int)1;
if(class)
class->noExpansion = (unsigned int)1;
__eCNameSpace__eC__types__eSystem_RegisterFunction("eC::types::MemoryGuard_PushLoc", "void eC::types::MemoryGuard_PushLoc(const char * loc)", __eCNameSpace__eC__types__MemoryGuard_PushLoc, module, 1);
__eCNameSpace__eC__types__eSystem_RegisterFunction("eC::types::MemoryGuard_PopLoc", "void eC::types::MemoryGuard_PopLoc(void)", __eCNameSpace__eC__types__MemoryGuard_PopLoc, module, 1);
class = __eCNameSpace__eC__types__eSystem_RegisterClass(5, "eC::types::BTNamedLink", 0, sizeof(struct __eCNameSpace__eC__types__BTNamedLink), 0, (void *)0, (void *)0, module, 1, 1);
if(((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application == ((struct __eCNameSpace__eC__types__Module *)(((char *)__thisModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->application && class)
__eCClass___eCNameSpace__eC__types__BTNamedLink = class;
__eCNameSpace__eC__types__eClass_AddDataMember(class, "name", "const char *", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "parent", "eC::types::BTNamedLink", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "left", "eC::types::BTNamedLink", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "right", "eC::types::BTNamedLink", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "depth", "int", 4, 4, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "data", "void *", sizeof(void *), 0xF000F000, 1);
if(class)
class->fixed = (unsigned int)1;
class = __eCNameSpace__eC__types__eSystem_RegisterClass(5, "eC::types::SelfWatcher", 0, sizeof(struct __eCNameSpace__eC__types__SelfWatcher), 0, (void *)0, (void *)0, module, 2, 1);
if(((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application == ((struct __eCNameSpace__eC__types__Module *)(((char *)__thisModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->application && class)
__eCClass___eCNameSpace__eC__types__SelfWatcher = class;
if(class)
class->fixed = (unsigned int)1;
class = __eCNameSpace__eC__types__eSystem_RegisterClass(4, "eC::types::AccessMode", 0, 0, 0, (void *)0, (void *)0, module, 1, 1);
if(((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application == ((struct __eCNameSpace__eC__types__Module *)(((char *)__thisModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->application && class)
__eCClass___eCNameSpace__eC__types__AccessMode = class;
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "defaultAccess", 0);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "publicAccess", 1);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "privateAccess", 2);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "staticAccess", 3);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "baseSystemAccess", 4);
class = __eCNameSpace__eC__types__eSystem_RegisterClass(5, "eC::types::SubModule", 0, sizeof(struct __eCNameSpace__eC__types__SubModule), 0, (void *)0, (void *)0, module, 1, 1);
if(((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application == ((struct __eCNameSpace__eC__types__Module *)(((char *)__thisModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->application && class)
__eCClass___eCNameSpace__eC__types__SubModule = class;
__eCNameSpace__eC__types__eClass_AddDataMember(class, "prev", "eC::types::SubModule", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "next", "eC::types::SubModule", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "module", "eC::types::Module", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "importMode", "eC::types::AccessMode", 4, 4, 1);
class = __eCNameSpace__eC__types__eSystem_RegisterClass(4, "eC::types::DataMemberType", 0, 0, 0, (void *)0, (void *)0, module, 1, 1);
if(((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application == ((struct __eCNameSpace__eC__types__Module *)(((char *)__thisModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->application && class)
__eCClass___eCNameSpace__eC__types__DataMemberType = class;
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "normalMember", 0);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "unionMember", 1);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "structMember", 2);
class = __eCNameSpace__eC__types__eSystem_RegisterClass(4, "eC::types::ClassType", 0, 0, 0, (void *)0, (void *)0, module, 1, 1);
if(((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application == ((struct __eCNameSpace__eC__types__Module *)(((char *)__thisModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->application && class)
__eCClass___eCNameSpace__eC__types__ClassType = class;
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "normalClass", 0);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "structClass", 1);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "bitClass", 2);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "unitClass", 3);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "enumClass", 4);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "noHeadClass", 5);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "unionClass", 6);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "systemClass", 1000);
class = __eCNameSpace__eC__types__eSystem_RegisterClass(5, "eC::types::Class", 0, sizeof(struct __eCNameSpace__eC__types__Class), 0, (void *)0, (void *)0, module, 1, 1);
if(((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application == ((struct __eCNameSpace__eC__types__Module *)(((char *)__thisModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->application && class)
__eCClass___eCNameSpace__eC__types__Class = class;
__eCNameSpace__eC__types__eClass_AddMethod(class, "OnFree", 0, __eCMethod___eCNameSpace__eC__types__Class_OnFree, 1);
__eCNameSpace__eC__types__eClass_AddMethod(class, "OnGetString", 0, __eCMethod___eCNameSpace__eC__types__Class_OnGetString, 1);
__eCNameSpace__eC__types__eClass_AddMethod(class, "OnGetDataFromString", 0, __eCMethod___eCNameSpace__eC__types__Class_OnGetDataFromString, 1);
__eCNameSpace__eC__types__eClass_AddMethod(class, "OnSerialize", 0, __eCMethod___eCNameSpace__eC__types__Class_OnSerialize, 1);
__eCNameSpace__eC__types__eClass_AddMethod(class, "OnUnserialize", 0, __eCMethod___eCNameSpace__eC__types__Class_OnUnserialize, 1);
__eCProp___eCNameSpace__eC__types__Class_char__PTR_ = __eCNameSpace__eC__types__eClass_AddProperty(class, 0, "const char *", __eCProp___eCNameSpace__eC__types__Class_Set_char__PTR_, __eCProp___eCNameSpace__eC__types__Class_Get_char__PTR_, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "prev", "eC::types::Class", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "next", "eC::types::Class", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "name", "const char *", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "offset", "int", 4, 4, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "structSize", "int", 4, 4, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "_vTbl", "void * *", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "vTblSize", "int", 4, 4, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "Constructor", "bool (*)(void *)", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "Destructor", "void (*)(void *)", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "offsetClass", "int", 4, 4, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "sizeClass", "int", 4, 4, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "base", "eC::types::Class", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "methods", "eC::containers::BinaryTree", sizeof(struct __eCNameSpace__eC__containers__BinaryTree), 8, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "members", "eC::containers::BinaryTree", sizeof(struct __eCNameSpace__eC__containers__BinaryTree), 8, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "prop", "eC::containers::BinaryTree", sizeof(struct __eCNameSpace__eC__containers__BinaryTree), 8, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "membersAndProperties", "eC::containers::OldList", sizeof(struct __eCNameSpace__eC__containers__OldList), 8, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "classProperties", "eC::containers::BinaryTree", sizeof(struct __eCNameSpace__eC__containers__BinaryTree), 8, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "derivatives", "eC::containers::OldList", sizeof(struct __eCNameSpace__eC__containers__OldList), 8, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "memberID", "int", 4, 4, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "startMemberID", "int", 4, 4, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "type", "eC::types::ClassType", 4, 4, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "module", "eC::types::Module", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "nameSpace", "eC::types::NameSpace *", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "dataTypeString", "const char *", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "dataType", "Type", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "typeSize", "int", 4, 4, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "defaultAlignment", "int", 4, 4, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "Initialize", "void (*)()", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "memberOffset", "int", 4, 4, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "selfWatchers", "eC::containers::OldList", sizeof(struct __eCNameSpace__eC__containers__OldList), 8, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "designerClass", "const char *", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "noExpansion", "bool", 4, 4, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "defaultProperty", "const char *", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "comRedefinition", "bool", 4, 4, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "count", "int", 4, 4, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "isRemote", "int", 4, 4, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "internalDecl", "bool", 4, 4, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "data", "void *", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "computeSize", "bool", 4, 4, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "structAlignment", "short", 2, 2, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "pointerAlignment", "short", 2, 2, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "destructionWatchOffset", "int", 4, 4, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "fixed", "bool", 4, 4, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "delayedCPValues", "eC::containers::OldList", sizeof(struct __eCNameSpace__eC__containers__OldList), 8, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "inheritanceAccess", "eC::types::AccessMode", 4, 4, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "fullName", "const char *", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "symbol", "void *", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "conversions", "eC::containers::OldList", sizeof(struct __eCNameSpace__eC__containers__OldList), 8, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "templateParams", "eC::containers::OldList", sizeof(struct __eCNameSpace__eC__containers__OldList), 8, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "templateArgs", "eC::types::ClassTemplateArgument *", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "templateClass", "eC::types::Class", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "templatized", "eC::containers::OldList", sizeof(struct __eCNameSpace__eC__containers__OldList), 8, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "numParams", "int", 4, 4, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "isInstanceClass", "bool", 4, 4, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "byValueSystemClass", "bool", 4, 4, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "bindingsClass", "void *", sizeof(void *), 0xF000F000, 1);
if(class)
class->fixed = (unsigned int)1;
if(class)
class->noExpansion = (unsigned int)1;
class = __eCNameSpace__eC__types__eSystem_RegisterClass(4, "eC::types::TemplateParameterType", 0, 0, 0, (void *)0, (void *)0, module, 1, 1);
if(((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application == ((struct __eCNameSpace__eC__types__Module *)(((char *)__thisModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->application && class)
__eCClass___eCNameSpace__eC__types__TemplateParameterType = class;
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "type", 0);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "identifier", 1);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "expression", 2);
class = __eCNameSpace__eC__types__eSystem_RegisterClass(4, "eC::types::TemplateMemberType", 0, 0, 0, (void *)0, (void *)0, module, 1, 1);
if(((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application == ((struct __eCNameSpace__eC__types__Module *)(((char *)__thisModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->application && class)
__eCClass___eCNameSpace__eC__types__TemplateMemberType = class;
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "dataMember", 0);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "method", 1);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "prop", 2);
class = __eCNameSpace__eC__types__eSystem_RegisterClass(1, "eC::types::ClassTemplateArgument", 0, sizeof(struct __eCNameSpace__eC__types__ClassTemplateArgument), 0, (void *)0, (void *)0, module, 1, 1);
if(((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application == ((struct __eCNameSpace__eC__types__Module *)(((char *)__thisModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->application && class)
__eCClass___eCNameSpace__eC__types__ClassTemplateArgument = class;
{
struct __eCNameSpace__eC__types__DataMember * dataMember0 = __eCNameSpace__eC__types__eMember_New(1, 1);

{
struct __eCNameSpace__eC__types__DataMember * dataMember1 = __eCNameSpace__eC__types__eMember_New(2, 1);

__eCNameSpace__eC__types__eMember_AddDataMember(dataMember1, "dataTypeString", "const char *", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eMember_AddDataMember(dataMember1, "dataTypeClass", "eC::types::Class", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eMember_AddMember(dataMember0, dataMember1);
}
__eCNameSpace__eC__types__eMember_AddDataMember(dataMember0, "expression", "eC::types::DataValue", sizeof(struct __eCNameSpace__eC__types__DataValue), 8, 1);
{
struct __eCNameSpace__eC__types__DataMember * dataMember1 = __eCNameSpace__eC__types__eMember_New(2, 1);

__eCNameSpace__eC__types__eMember_AddDataMember(dataMember1, "memberString", "const char *", sizeof(void *), 0xF000F000, 1);
{
struct __eCNameSpace__eC__types__DataMember * dataMember2 = __eCNameSpace__eC__types__eMember_New(1, 1);

__eCNameSpace__eC__types__eMember_AddDataMember(dataMember2, "member", "eC::types::DataMember", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eMember_AddDataMember(dataMember2, "prop", "eC::types::Property", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eMember_AddDataMember(dataMember2, "method", "eC::types::Method", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eMember_AddMember(dataMember1, dataMember2);
}
__eCNameSpace__eC__types__eMember_AddMember(dataMember0, dataMember1);
}
__eCNameSpace__eC__types__eClass_AddMember(class, dataMember0);
}
class = __eCNameSpace__eC__types__eSystem_RegisterClass(5, "eC::types::ClassTemplateParameter", 0, sizeof(struct __eCNameSpace__eC__types__ClassTemplateParameter), 0, (void *)0, (void *)0, module, 1, 1);
if(((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application == ((struct __eCNameSpace__eC__types__Module *)(((char *)__thisModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->application && class)
__eCClass___eCNameSpace__eC__types__ClassTemplateParameter = class;
__eCNameSpace__eC__types__eClass_AddDataMember(class, "prev", "eC::types::ClassTemplateParameter", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "next", "eC::types::ClassTemplateParameter", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "name", "const char *", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "type", "eC::types::TemplateParameterType", 4, 4, 1);
{
struct __eCNameSpace__eC__types__DataMember * dataMember0 = __eCNameSpace__eC__types__eMember_New(1, 1);

__eCNameSpace__eC__types__eMember_AddDataMember(dataMember0, "dataTypeString", "const char *", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eMember_AddDataMember(dataMember0, "memberType", "eC::types::TemplateMemberType", 4, 4, 1);
__eCNameSpace__eC__types__eClass_AddMember(class, dataMember0);
}
__eCNameSpace__eC__types__eClass_AddDataMember(class, "defaultArg", "eC::types::ClassTemplateArgument", sizeof(struct __eCNameSpace__eC__types__ClassTemplateArgument), 8, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "param", "void *", sizeof(void *), 0xF000F000, 1);
if(class)
class->fixed = (unsigned int)1;
class = __eCNameSpace__eC__types__eSystem_RegisterClass(4, "eC::types::MethodType", 0, 0, 0, (void *)0, (void *)0, module, 1, 1);
if(((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application == ((struct __eCNameSpace__eC__types__Module *)(((char *)__thisModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->application && class)
__eCClass___eCNameSpace__eC__types__MethodType = class;
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "normalMethod", 0);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "virtualMethod", 1);
class = __eCNameSpace__eC__types__eSystem_RegisterClass(5, "eC::types::Method", 0, sizeof(struct __eCNameSpace__eC__types__Method), 0, (void *)0, (void *)0, module, 1, 1);
if(((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application == ((struct __eCNameSpace__eC__types__Module *)(((char *)__thisModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->application && class)
__eCClass___eCNameSpace__eC__types__Method = class;
__eCNameSpace__eC__types__eClass_AddDataMember(class, "name", "const char *", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "parent", "eC::types::Method", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "left", "eC::types::Method", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "right", "eC::types::Method", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "depth", "int", 4, 4, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "function", "int (*)()", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "vid", "int", 4, 4, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "type", "eC::types::MethodType", 4, 4, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "_class", "eC::types::Class", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "symbol", "void *", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "dataTypeString", "const char *", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "dataType", "Type", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "memberAccess", "eC::types::AccessMode", 4, 4, 1);
if(class)
class->fixed = (unsigned int)1;
class = __eCNameSpace__eC__types__eSystem_RegisterClass(4, "eC::types::ImportType", 0, 0, 0, (void *)0, (void *)0, module, 1, 1);
if(((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application == ((struct __eCNameSpace__eC__types__Module *)(((char *)__thisModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->application && class)
__eCClass___eCNameSpace__eC__types__ImportType = class;
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "normalImport", 0);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "staticImport", 1);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "remoteImport", 2);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "preDeclImport", 3);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "comCheckImport", 4);
class = __eCNameSpace__eC__types__eSystem_RegisterClass(1, "eC::types::NameSpace", 0, sizeof(struct __eCNameSpace__eC__types__NameSpace), 0, (void *)0, (void *)0, module, 1, 1);
if(((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application == ((struct __eCNameSpace__eC__types__Module *)(((char *)__thisModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->application && class)
__eCClass___eCNameSpace__eC__types__NameSpace = class;
__eCNameSpace__eC__types__eClass_AddDataMember(class, "name", "const char *", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "btParent", "eC::types::NameSpace *", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "left", "eC::types::NameSpace *", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "right", "eC::types::NameSpace *", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "depth", "int", 4, 4, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "parent", "eC::types::NameSpace *", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "nameSpaces", "eC::containers::BinaryTree", sizeof(struct __eCNameSpace__eC__containers__BinaryTree), 8, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "classes", "eC::containers::BinaryTree", sizeof(struct __eCNameSpace__eC__containers__BinaryTree), 8, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "defines", "eC::containers::BinaryTree", sizeof(struct __eCNameSpace__eC__containers__BinaryTree), 8, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "functions", "eC::containers::BinaryTree", sizeof(struct __eCNameSpace__eC__containers__BinaryTree), 8, 1);
class = __eCNameSpace__eC__types__eSystem_RegisterClass(1, "eC::types::DataValue", 0, sizeof(struct __eCNameSpace__eC__types__DataValue), 0, (void *)0, (void *)0, module, 1, 1);
if(((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application == ((struct __eCNameSpace__eC__types__Module *)(((char *)__thisModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->application && class)
__eCClass___eCNameSpace__eC__types__DataValue = class;
{
struct __eCNameSpace__eC__types__DataMember * dataMember0 = __eCNameSpace__eC__types__eMember_New(1, 1);

__eCNameSpace__eC__types__eMember_AddDataMember(dataMember0, "d", "double", 8, 8, 1);
__eCNameSpace__eC__types__eMember_AddDataMember(dataMember0, "i64", "int64", 8, 8, 1);
__eCNameSpace__eC__types__eMember_AddDataMember(dataMember0, "ui64", "uint64", 8, 8, 1);
__eCNameSpace__eC__types__eMember_AddDataMember(dataMember0, "c", "char", 1, 1, 1);
__eCNameSpace__eC__types__eMember_AddDataMember(dataMember0, "uc", "byte", 1, 1, 1);
__eCNameSpace__eC__types__eMember_AddDataMember(dataMember0, "s", "short", 2, 2, 1);
__eCNameSpace__eC__types__eMember_AddDataMember(dataMember0, "us", "uint16", 2, 2, 1);
__eCNameSpace__eC__types__eMember_AddDataMember(dataMember0, "i", "int", 4, 4, 1);
__eCNameSpace__eC__types__eMember_AddDataMember(dataMember0, "ui", "uint", 4, 4, 1);
__eCNameSpace__eC__types__eMember_AddDataMember(dataMember0, "p", "void *", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eMember_AddDataMember(dataMember0, "f", "float", 4, 4, 1);
__eCNameSpace__eC__types__eClass_AddMember(class, dataMember0);
}
class = __eCNameSpace__eC__types__eSystem_RegisterClass(5, "eC::types::DataMember", 0, sizeof(struct __eCNameSpace__eC__types__DataMember), 0, (void *)0, (void *)0, module, 1, 1);
if(((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application == ((struct __eCNameSpace__eC__types__Module *)(((char *)__thisModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->application && class)
__eCClass___eCNameSpace__eC__types__DataMember = class;
__eCNameSpace__eC__types__eClass_AddDataMember(class, "prev", "eC::types::DataMember", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "next", "eC::types::DataMember", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "name", "const char *", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "isProperty", "bool", 4, 4, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "memberAccess", "eC::types::AccessMode", 4, 4, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "id", "int", 4, 4, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "_class", "eC::types::Class", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "dataTypeString", "const char *", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "dataTypeClass", "eC::types::Class", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "dataType", "Type", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "type", "eC::types::DataMemberType", 4, 4, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "offset", "int", 4, 4, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "memberID", "int", 4, 4, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "members", "eC::containers::OldList", sizeof(struct __eCNameSpace__eC__containers__OldList), 8, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "membersAlpha", "eC::containers::BinaryTree", sizeof(struct __eCNameSpace__eC__containers__BinaryTree), 8, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "memberOffset", "int", 4, 4, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "structAlignment", "short", 2, 2, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "pointerAlignment", "short", 2, 2, 1);
if(class)
class->fixed = (unsigned int)1;
class = __eCNameSpace__eC__types__eSystem_RegisterClass(5, "eC::types::BitMember", 0, sizeof(struct __eCNameSpace__eC__types__BitMember), 0, (void *)0, (void *)0, module, 1, 1);
if(((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application == ((struct __eCNameSpace__eC__types__Module *)(((char *)__thisModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->application && class)
__eCClass___eCNameSpace__eC__types__BitMember = class;
__eCNameSpace__eC__types__eClass_AddDataMember(class, "prev", "eC::types::BitMember", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "next", "eC::types::BitMember", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "name", "const char *", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "isProperty", "bool", 4, 4, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "memberAccess", "eC::types::AccessMode", 4, 4, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "id", "int", 4, 4, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "_class", "eC::types::Class", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "dataTypeString", "const char *", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "dataTypeClass", "eC::types::Class", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "dataType", "Type", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "type", "eC::types::DataMemberType", 4, 4, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "size", "int", 4, 4, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "pos", "int", 4, 4, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "mask", "uint64", 8, 8, 1);
if(class)
class->fixed = (unsigned int)1;
class = __eCNameSpace__eC__types__eSystem_RegisterClass(5, "eC::types::ClassProperty", 0, sizeof(struct __eCNameSpace__eC__types__ClassProperty), 0, (void *)0, (void *)0, module, 1, 1);
if(((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application == ((struct __eCNameSpace__eC__types__Module *)(((char *)__thisModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->application && class)
__eCClass___eCNameSpace__eC__types__ClassProperty = class;
__eCNameSpace__eC__types__eClass_AddDataMember(class, "name", "const char *", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "parent", "eC::types::ClassProperty", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "left", "eC::types::ClassProperty", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "right", "eC::types::ClassProperty", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "depth", "int", 4, 4, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "Set", "void (*)(eC::types::Class, int64)", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "Get", "int64 (*)(eC::types::Class)", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "dataTypeString", "const char *", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "dataType", "Type", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "constant", "bool", 4, 4, 1);
if(class)
class->fixed = (unsigned int)1;
class = __eCNameSpace__eC__types__eSystem_RegisterClass(5, "eC::types::DefinedExpression", 0, sizeof(struct __eCNameSpace__eC__types__DefinedExpression), 0, (void *)0, (void *)0, module, 1, 1);
if(((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application == ((struct __eCNameSpace__eC__types__Module *)(((char *)__thisModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->application && class)
__eCClass___eCNameSpace__eC__types__DefinedExpression = class;
__eCNameSpace__eC__types__eClass_AddDataMember(class, "prev", "eC::types::DefinedExpression", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "next", "eC::types::DefinedExpression", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "name", "const char *", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "value", "const char *", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "nameSpace", "eC::types::NameSpace *", sizeof(void *), 0xF000F000, 1);
if(class)
class->fixed = (unsigned int)1;
class = __eCNameSpace__eC__types__eSystem_RegisterClass(5, "eC::types::GlobalFunction", 0, sizeof(struct __eCNameSpace__eC__types__GlobalFunction), 0, (void *)0, (void *)0, module, 1, 1);
if(((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application == ((struct __eCNameSpace__eC__types__Module *)(((char *)__thisModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->application && class)
__eCClass___eCNameSpace__eC__types__GlobalFunction = class;
__eCNameSpace__eC__types__eClass_AddDataMember(class, "prev", "eC::types::GlobalFunction", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "next", "eC::types::GlobalFunction", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "name", "const char *", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "function", "int (*)()", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "module", "eC::types::Module", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "nameSpace", "eC::types::NameSpace *", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "dataTypeString", "const char *", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "dataType", "Type", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "symbol", "void *", sizeof(void *), 0xF000F000, 1);
if(class)
class->fixed = (unsigned int)1;
class = __eCNameSpace__eC__types__eSystem_RegisterClass(5, "eC::types::EnumClassData", 0, sizeof(struct __eCNameSpace__eC__types__EnumClassData), 0, (void *)0, (void *)0, module, 1, 1);
if(((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application == ((struct __eCNameSpace__eC__types__Module *)(((char *)__thisModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->application && class)
__eCClass___eCNameSpace__eC__types__EnumClassData = class;
__eCNameSpace__eC__types__eClass_AddDataMember(class, "values", "eC::containers::OldList", sizeof(struct __eCNameSpace__eC__containers__OldList), 8, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "largest", "int64", 8, 8, 1);
if(class)
class->fixed = (unsigned int)1;
class = __eCNameSpace__eC__types__eSystem_RegisterClass(5, "eC::types::Watcher", 0, sizeof(struct __eCNameSpace__eC__types__Watcher), 0, (void *)0, (void *)0, module, 2, 1);
if(((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application == ((struct __eCNameSpace__eC__types__Module *)(((char *)__thisModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->application && class)
__eCClass___eCNameSpace__eC__types__Watcher = class;
if(class)
class->fixed = (unsigned int)1;
class = __eCNameSpace__eC__types__eSystem_RegisterClass(5, "eC::types::MemBlock", 0, sizeof(struct __eCNameSpace__eC__types__MemBlock), 0, (void *)0, (void *)0, module, 2, 1);
if(((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application == ((struct __eCNameSpace__eC__types__Module *)(((char *)__thisModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->application && class)
__eCClass___eCNameSpace__eC__types__MemBlock = class;
class = __eCNameSpace__eC__types__eSystem_RegisterClass(5, "eC::types::MemPart", 0, sizeof(struct __eCNameSpace__eC__types__MemPart), 0, (void *)0, (void *)0, module, 2, 1);
if(((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application == ((struct __eCNameSpace__eC__types__Module *)(((char *)__thisModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->application && class)
__eCClass___eCNameSpace__eC__types__MemPart = class;
__eCNameSpace__eC__types__eClass_AddDataMember(class, (((void *)0)), (((void *)0)), 0, sizeof(void *) > 4 ? sizeof(void *) : 4, 2);
class = __eCNameSpace__eC__types__eSystem_RegisterClass(1, "eC::types::BlockPool", 0, sizeof(struct __eCNameSpace__eC__types__BlockPool), 0, (void *)0, (void *)0, module, 2, 1);
if(((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application == ((struct __eCNameSpace__eC__types__Module *)(((char *)__thisModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->application && class)
__eCClass___eCNameSpace__eC__types__BlockPool = class;
__eCNameSpace__eC__types__eClass_AddMethod(class, "Add", "eC::types::MemBlock Add()", __eCMethod___eCNameSpace__eC__types__BlockPool_Add, 1);
__eCNameSpace__eC__types__eClass_AddMethod(class, "Expand", "bool Expand(unsigned int numBlocks)", __eCMethod___eCNameSpace__eC__types__BlockPool_Expand, 1);
__eCNameSpace__eC__types__eClass_AddMethod(class, "Remove", "void Remove(eC::types::MemBlock block)", __eCMethod___eCNameSpace__eC__types__BlockPool_Remove, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "first", "eC::types::MemBlock", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "last", "eC::types::MemBlock", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "free", "eC::types::MemBlock", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "blockSize", "uintsize", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "blockSpace", "uintsize", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "numParts", "int", 4, 4, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "numBlocks", "int", 4, 4, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "totalSize", "uintsize", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "usedSpace", "uintsize", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eSystem_RegisterFunction("eC::types::log2i", "uint eC::types::log2i(uint number)", __eCNameSpace__eC__types__log2i, module, 1);
__eCNameSpace__eC__types__eSystem_RegisterFunction("eC::types::pow2i", "uint eC::types::pow2i(uint number)", __eCNameSpace__eC__types__pow2i, module, 1);
__eCNameSpace__eC__types__eSystem_RegisterFunction("eC::types::memswap", "void eC::types::memswap(byte * a, byte * b, uintsize size)", __eCNameSpace__eC__types__memswap, module, 1);
__eCNameSpace__eC__types__eSystem_RegisterFunction("eC::types::CheckConsistency", "void eC::types::CheckConsistency(void)", __eCNameSpace__eC__types__CheckConsistency, module, 1);
__eCNameSpace__eC__types__eSystem_RegisterFunction("eC::types::CheckMemory", "void eC::types::CheckMemory(void)", __eCNameSpace__eC__types__CheckMemory, module, 1);
__eCNameSpace__eC__types__eSystem_RegisterFunction("eC::types::eSystem_RegisterClass", "eC::types::Class eC::types::eSystem_RegisterClass(eC::types::ClassType type, const char * name, const char * baseName, int size, int sizeClass, bool (* Constructor)(void *), void (* Destructor)(void *), eC::types::Module module, eC::types::AccessMode declMode, eC::types::AccessMode inheritanceAccess)", __eCNameSpace__eC__types__eSystem_RegisterClass, module, 1);
__eCNameSpace__eC__types__eSystem_RegisterFunction("eC::types::eClass_Unregister", "void eC::types::eClass_Unregister(eC::types::Class _class)", __eCNameSpace__eC__types__eClass_Unregister, module, 1);
__eCNameSpace__eC__types__eSystem_RegisterFunction("eC::types::_strtoi64", "int64 eC::types::_strtoi64(const char * string, const char * * endString, int base)", __eCNameSpace__eC__types___strtoi64, module, 1);
__eCNameSpace__eC__types__eSystem_RegisterFunction("eC::types::_strtoui64", "uint64 eC::types::_strtoui64(const char * string, const char * * endString, int base)", __eCNameSpace__eC__types___strtoui64, module, 1);
__eCNameSpace__eC__types__eSystem_RegisterFunction("eC::types::eSystem_FindClass", "eC::types::Class eC::types::eSystem_FindClass(eC::types::Module module, const char * name)", __eCNameSpace__eC__types__eSystem_FindClass, module, 1);
__eCNameSpace__eC__types__eSystem_RegisterFunction("eC::types::System_FindClass", "eC::types::Class eC::types::System_FindClass(eC::types::Module module, const char * name, bool registerTemplatesInternalDecl)", __eCNameSpace__eC__types__System_FindClass, module, 2);
__eCNameSpace__eC__types__eSystem_RegisterFunction("eC::types::DefaultFunction", "bool eC::types::DefaultFunction(void)", __eCNameSpace__eC__types__DefaultFunction, module, 2);
__eCNameSpace__eC__types__eSystem_RegisterFunction("eC::types::eClass_IsDerived", "bool eC::types::eClass_IsDerived(eC::types::Class _class, eC::types::Class from)", __eCNameSpace__eC__types__eClass_IsDerived, module, 1);
__eCNameSpace__eC__types__eSystem_RegisterFunction("eC::types::eClass_AddMethod", "eC::types::Method eC::types::eClass_AddMethod(eC::types::Class _class, const char * name, const char * type, void * function, eC::types::AccessMode declMode)", __eCNameSpace__eC__types__eClass_AddMethod, module, 1);
__eCNameSpace__eC__types__eSystem_RegisterFunction("eC::types::eClass_AddVirtualMethod", "eC::types::Method eC::types::eClass_AddVirtualMethod(eC::types::Class _class, const char * name, const char * type, void * function, eC::types::AccessMode declMode)", __eCNameSpace__eC__types__eClass_AddVirtualMethod, module, 1);
__eCNameSpace__eC__types__eSystem_RegisterFunction("eC::types::eClass_AddProperty", "eC::types::Property eC::types::eClass_AddProperty(eC::types::Class _class, const char * name, const char * dataType, void * setStmt, void * getStmt, eC::types::AccessMode declMode)", __eCNameSpace__eC__types__eClass_AddProperty, module, 1);
__eCNameSpace__eC__types__eSystem_RegisterFunction("eC::types::eClass_AddClassProperty", "eC::types::ClassProperty eC::types::eClass_AddClassProperty(eC::types::Class _class, const char * name, const char * dataType, void * setStmt, void * getStmt)", __eCNameSpace__eC__types__eClass_AddClassProperty, module, 1);
__eCNameSpace__eC__types__eSystem_RegisterFunction("eC::types::eClass_FindClassProperty", "eC::types::ClassProperty eC::types::eClass_FindClassProperty(eC::types::Class _class, const char * name)", __eCNameSpace__eC__types__eClass_FindClassProperty, module, 1);
__eCNameSpace__eC__types__eSystem_RegisterFunction("eC::types::eClass_GetProperty", "int64 eC::types::eClass_GetProperty(eC::types::Class _class, const char * name)", __eCNameSpace__eC__types__eClass_GetProperty, module, 1);
__eCNameSpace__eC__types__eSystem_RegisterFunction("eC::types::eClass_SetProperty", "void eC::types::eClass_SetProperty(eC::types::Class _class, const char * name, int64 value)", __eCNameSpace__eC__types__eClass_SetProperty, module, 1);
__eCNameSpace__eC__types__eSystem_RegisterFunction("eC::types::eClass_FindMethod", "eC::types::Method eC::types::eClass_FindMethod(eC::types::Class _class, const char * name, eC::types::Module module)", __eCNameSpace__eC__types__eClass_FindMethod, module, 1);
__eCNameSpace__eC__types__eSystem_RegisterFunction("eC::types::eInstance_New", "void * eC::types::eInstance_New(eC::types::Class _class)", __eCNameSpace__eC__types__eInstance_New, module, 1);
__eCNameSpace__eC__types__eSystem_RegisterFunction("eC::types::eInstance_NewEx", "void * eC::types::eInstance_NewEx(eC::types::Class _class, bool bindingsAlloc)", __eCNameSpace__eC__types__eInstance_NewEx, module, 1);
__eCNameSpace__eC__types__eSystem_RegisterFunction("eC::types::eInstance_Evolve", "void eC::types::eInstance_Evolve(eC::types::Instance * instancePtr, eC::types::Class _class)", __eCNameSpace__eC__types__eInstance_Evolve, module, 1);
__eCNameSpace__eC__types__eSystem_RegisterFunction("eC::types::eInstance_Delete", "void eC::types::eInstance_Delete(eC::types::Instance instance)", __eCNameSpace__eC__types__eInstance_Delete, module, 1);
__eCNameSpace__eC__types__eSystem_RegisterFunction("eC::types::eClass_FindProperty", "eC::types::Property eC::types::eClass_FindProperty(eC::types::Class _class, const char * name, eC::types::Module module)", __eCNameSpace__eC__types__eClass_FindProperty, module, 1);
__eCNameSpace__eC__types__eSystem_RegisterFunction("eC::types::eClass_FindDataMember", "eC::types::DataMember eC::types::eClass_FindDataMember(eC::types::Class _class, const char * name, eC::types::Module module, eC::types::DataMember * subMemberStack, int * subMemberStackPos)", __eCNameSpace__eC__types__eClass_FindDataMember, module, 1);
__eCNameSpace__eC__types__eSystem_RegisterFunction("eC::types::eClass_FindDataMemberAndOffset", "eC::types::DataMember eC::types::eClass_FindDataMemberAndOffset(eC::types::Class _class, const char * name, uint * offset, eC::types::Module module, eC::types::DataMember * subMemberStack, int * subMemberStackPos)", __eCNameSpace__eC__types__eClass_FindDataMemberAndOffset, module, 1);
__eCNameSpace__eC__types__eSystem_RegisterFunction("eC::types::eClass_FindDataMemberAndId", "eC::types::DataMember eC::types::eClass_FindDataMemberAndId(eC::types::Class _class, const char * name, int * id, eC::types::Module module, eC::types::DataMember * subMemberStack, int * subMemberStackPos)", __eCNameSpace__eC__types__eClass_FindDataMemberAndId, module, 1);
__eCNameSpace__eC__types__eSystem_RegisterFunction("eC::types::eClass_FindNextMember", "void eC::types::eClass_FindNextMember(eC::types::Class _class, eC::types::Class * curClass, eC::types::DataMember * curMember, eC::types::DataMember * subMemberStack, int * subMemberStackPos)", __eCNameSpace__eC__types__eClass_FindNextMember, module, 1);
__eCNameSpace__eC__types__eSystem_RegisterFunction("eC::types::eInstance_SetMethod", "void eC::types::eInstance_SetMethod(eC::types::Instance instance, const char * name, void * function)", __eCNameSpace__eC__types__eInstance_SetMethod, module, 1);
__eCNameSpace__eC__types__eSystem_RegisterFunction("eC::types::eInstance_IsDerived", "bool eC::types::eInstance_IsDerived(eC::types::Instance instance, eC::types::Class from)", __eCNameSpace__eC__types__eInstance_IsDerived, module, 1);
__eCNameSpace__eC__types__eSystem_RegisterFunction("eC::types::eInstance_IncRef", "void eC::types::eInstance_IncRef(eC::types::Instance instance)", __eCNameSpace__eC__types__eInstance_IncRef, module, 1);
__eCNameSpace__eC__types__eSystem_RegisterFunction("eC::types::eInstance_DecRef", "void eC::types::eInstance_DecRef(eC::types::Instance instance)", __eCNameSpace__eC__types__eInstance_DecRef, module, 1);
__eCNameSpace__eC__types__eSystem_RegisterFunction("eC::types::eClass_Resize", "void eC::types::eClass_Resize(eC::types::Class _class, int newSize)", __eCNameSpace__eC__types__eClass_Resize, module, 1);
__eCNameSpace__eC__types__eSystem_RegisterFunction("eC::types::eClass_AddDataMember", "eC::types::DataMember eC::types::eClass_AddDataMember(eC::types::Class _class, const char * name, const char * type, uint size, uint alignment, eC::types::AccessMode declMode)", __eCNameSpace__eC__types__eClass_AddDataMember, module, 1);
__eCNameSpace__eC__types__eSystem_RegisterFunction("eC::types::eMember_AddDataMember", "eC::types::DataMember eC::types::eMember_AddDataMember(eC::types::DataMember member, const char * name, const char * type, uint size, uint alignment, eC::types::AccessMode declMode)", __eCNameSpace__eC__types__eMember_AddDataMember, module, 1);
__eCNameSpace__eC__types__eSystem_RegisterFunction("eC::types::eMember_New", "eC::types::DataMember eC::types::eMember_New(eC::types::DataMemberType type, eC::types::AccessMode declMode)", __eCNameSpace__eC__types__eMember_New, module, 1);
__eCNameSpace__eC__types__eSystem_RegisterFunction("eC::types::eMember_AddMember", "bool eC::types::eMember_AddMember(eC::types::DataMember addTo, eC::types::DataMember dataMember)", __eCNameSpace__eC__types__eMember_AddMember, module, 1);
__eCNameSpace__eC__types__eSystem_RegisterFunction("eC::types::eClass_AddMember", "bool eC::types::eClass_AddMember(eC::types::Class _class, eC::types::DataMember dataMember)", __eCNameSpace__eC__types__eClass_AddMember, module, 1);
__eCNameSpace__eC__types__eSystem_RegisterFunction("eC::types::eClass_AddBitMember", "eC::types::BitMember eC::types::eClass_AddBitMember(eC::types::Class _class, const char * name, const char * type, int bitSize, int bitPos, eC::types::AccessMode declMode)", __eCNameSpace__eC__types__eClass_AddBitMember, module, 1);
__eCNameSpace__eC__types__eSystem_RegisterFunction("eC::types::eModule_Load", "eC::types::Module eC::types::eModule_Load(eC::types::Module fromModule, const char * name, eC::types::AccessMode importAccess)", __eCNameSpace__eC__types__eModule_Load, module, 1);
__eCNameSpace__eC__types__eSystem_RegisterFunction("eC::types::eModule_LoadStrict", "eC::types::Module eC::types::eModule_LoadStrict(eC::types::Module fromModule, const char * name, eC::types::AccessMode importAccess)", __eCNameSpace__eC__types__eModule_LoadStrict, module, 1);
__eCNameSpace__eC__types__eSystem_RegisterFunction("eC::types::eModule_LoadStatic", "eC::types::Module eC::types::eModule_LoadStatic(eC::types::Module fromModule, const char * name, eC::types::AccessMode importAccess, bool (* Load)(eC::types::Module module), bool (* Unload)(eC::types::Module module))", __eCNameSpace__eC__types__eModule_LoadStatic, module, 1);
__eCNameSpace__eC__types__eSystem_RegisterFunction("eC::types::eModule_Unload", "void eC::types::eModule_Unload(eC::types::Module fromModule, eC::types::Module module)", __eCNameSpace__eC__types__eModule_Unload, module, 1);
__eCNameSpace__eC__types__eSystem_RegisterFunction("eC::types::eEnum_AddFixedValue", "void eC::types::eEnum_AddFixedValue(eC::types::Class _class, const char * string, int64 value)", __eCNameSpace__eC__types__eEnum_AddFixedValue, module, 1);
__eCNameSpace__eC__types__eSystem_RegisterFunction("eC::types::eEnum_AddValue", "int64 eC::types::eEnum_AddValue(eC::types::Class _class, const char * string)", __eCNameSpace__eC__types__eEnum_AddValue, module, 1);
__eCNameSpace__eC__types__eSystem_RegisterFunction("eC::types::eSystem_RegisterDefine", "eC::types::DefinedExpression eC::types::eSystem_RegisterDefine(const char * name, const char * value, eC::types::Module module, eC::types::AccessMode declMode)", __eCNameSpace__eC__types__eSystem_RegisterDefine, module, 1);
__eCNameSpace__eC__types__eSystem_RegisterFunction("eC::types::eSystem_RegisterFunction", "eC::types::GlobalFunction eC::types::eSystem_RegisterFunction(const char * name, const char * type, void * func, eC::types::Module module, eC::types::AccessMode declMode)", __eCNameSpace__eC__types__eSystem_RegisterFunction, module, 1);
__eCNameSpace__eC__types__eSystem_RegisterFunction("eC::types::eSystem_FindDefine", "eC::types::DefinedExpression eC::types::eSystem_FindDefine(eC::types::Module module, const char * name)", __eCNameSpace__eC__types__eSystem_FindDefine, module, 1);
__eCNameSpace__eC__types__eSystem_RegisterFunction("eC::types::eSystem_FindFunction", "eC::types::GlobalFunction eC::types::eSystem_FindFunction(eC::types::Module module, const char * name)", __eCNameSpace__eC__types__eSystem_FindFunction, module, 1);
__eCNameSpace__eC__types__eSystem_RegisterFunction("eC::types::eSystem_Renew", "void * eC::types::eSystem_Renew(void * memory, uintsize size)", __eCNameSpace__eC__types__eSystem_Renew, module, 1);
__eCNameSpace__eC__types__eSystem_RegisterFunction("eC::types::eSystem_Renew0", "void * eC::types::eSystem_Renew0(void * memory, uintsize size)", __eCNameSpace__eC__types__eSystem_Renew0, module, 1);
__eCNameSpace__eC__types__eSystem_RegisterFunction("eC::types::eSystem_New", "void * eC::types::eSystem_New(uintsize size)", __eCNameSpace__eC__types__eSystem_New, module, 1);
__eCNameSpace__eC__types__eSystem_RegisterFunction("eC::types::eSystem_New0", "void * eC::types::eSystem_New0(uintsize size)", __eCNameSpace__eC__types__eSystem_New0, module, 1);
__eCNameSpace__eC__types__eSystem_RegisterFunction("eC::types::eSystem_Delete", "void eC::types::eSystem_Delete(void * memory)", __eCNameSpace__eC__types__eSystem_Delete, module, 1);
__eCNameSpace__eC__types__eSystem_RegisterFunction("eC::types::eInstance_FireSelfWatchers", "void eC::types::eInstance_FireSelfWatchers(eC::types::Instance instance, eC::types::Property _property)", __eCNameSpace__eC__types__eInstance_FireSelfWatchers, module, 1);
__eCNameSpace__eC__types__eSystem_RegisterFunction("eC::types::eInstance_FireWatchers", "void eC::types::eInstance_FireWatchers(eC::types::Instance instance, eC::types::Property _property)", __eCNameSpace__eC__types__eInstance_FireWatchers, module, 1);
__eCNameSpace__eC__types__eSystem_RegisterFunction("eC::types::eProperty_Watchable", "void eC::types::eProperty_Watchable(eC::types::Property _property)", __eCNameSpace__eC__types__eProperty_Watchable, module, 1);
__eCNameSpace__eC__types__eSystem_RegisterFunction("eC::types::eClass_DestructionWatchable", "void eC::types::eClass_DestructionWatchable(eC::types::Class _class)", __eCNameSpace__eC__types__eClass_DestructionWatchable, module, 1);
__eCNameSpace__eC__types__eSystem_RegisterFunction("eC::types::eProperty_SelfWatch", "void eC::types::eProperty_SelfWatch(eC::types::Class _class, const char * name, void (* callback)(void *))", __eCNameSpace__eC__types__eProperty_SelfWatch, module, 1);
__eCNameSpace__eC__types__eSystem_RegisterFunction("eC::types::eInstance_Watch", "void eC::types::eInstance_Watch(eC::types::Instance instance, eC::types::Property _property, void * object, void (* callback)(void *, void *))", __eCNameSpace__eC__types__eInstance_Watch, module, 1);
__eCNameSpace__eC__types__eSystem_RegisterFunction("eC::types::eInstance_WatchDestruction", "void eC::types::eInstance_WatchDestruction(eC::types::Instance instance, eC::types::Instance object, void (* callback)(void *, void *))", __eCNameSpace__eC__types__eInstance_WatchDestruction, module, 1);
__eCNameSpace__eC__types__eSystem_RegisterFunction("eC::types::eInstance_StopWatching", "void eC::types::eInstance_StopWatching(eC::types::Instance instance, eC::types::Property _property, eC::types::Instance object)", __eCNameSpace__eC__types__eInstance_StopWatching, module, 1);
__eCNameSpace__eC__types__eSystem_RegisterFunction("eC::types::eClass_GetDesigner", "subclass(eC::types::ClassDesignerBase) eC::types::eClass_GetDesigner(eC::types::Class _class)", __eCNameSpace__eC__types__eClass_GetDesigner, module, 1);
__eCNameSpace__eC__types__eSystem_RegisterFunction("eC::types::eInstance_GetDesigner", "subclass(eC::types::ClassDesignerBase) eC::types::eInstance_GetDesigner(eC::types::Instance instance)", __eCNameSpace__eC__types__eInstance_GetDesigner, module, 1);
__eCNameSpace__eC__types__eSystem_RegisterFunction("eC::types::LocateModule", "bool eC::types::LocateModule(const char * name, const char * fileName)", __eCNameSpace__eC__types__LocateModule, module, 1);
__eCNameSpace__eC__types__eSystem_RegisterFunction("eC::types::eCrt_Initialize", "eC::types::Application eC::types::eCrt_Initialize(bool guiApp, int argc, char * argv[])", __eCNameSpace__eC__types__eCrt_Initialize, module, 1);
__eCNameSpace__eC__types__eSystem_RegisterFunction("eC::types::eSystem_SetArgs", "void eC::types::eSystem_SetArgs(eC::types::Application app, int argc, char * argv[])", __eCNameSpace__eC__types__eSystem_SetArgs, module, 1);
__eCNameSpace__eC__types__eSystem_RegisterFunction("eC::types::eClass_AddTemplateParameter", "eC::types::ClassTemplateParameter eC::types::eClass_AddTemplateParameter(eC::types::Class _class, const char * name, eC::types::TemplateParameterType type, const void * info, eC::types::ClassTemplateArgument defaultArg)", __eCNameSpace__eC__types__eClass_AddTemplateParameter, module, 1);
__eCNameSpace__eC__types__eSystem_RegisterFunction("eC::types::eClass_DoneAddingTemplateParameters", "void eC::types::eClass_DoneAddingTemplateParameters(eC::types::Class base)", __eCNameSpace__eC__types__eClass_DoneAddingTemplateParameters, module, 1);
class = __eCNameSpace__eC__types__eSystem_RegisterClass(4, "eC::types::Platform", 0, 0, 0, (void *)0, (void *)0, module, 1, 1);
if(((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application == ((struct __eCNameSpace__eC__types__Module *)(((char *)__thisModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->application && class)
__eCClass___eCNameSpace__eC__types__Platform = class;
__eCNameSpace__eC__types__eClass_AddMethod(class, "OnGetString", 0, __eCMethod___eCNameSpace__eC__types__Platform_OnGetString, 1);
__eCNameSpace__eC__types__eClass_AddMethod(class, "OnGetDataFromString", 0, __eCMethod___eCNameSpace__eC__types__Platform_OnGetDataFromString, 1);
__eCProp___eCNameSpace__eC__types__Platform_char__PTR_ = __eCNameSpace__eC__types__eClass_AddProperty(class, 0, "const char *", __eCProp___eCNameSpace__eC__types__Platform_Set_char__PTR_, __eCProp___eCNameSpace__eC__types__Platform_Get_char__PTR_, 1);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "unknown", 0);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "win32", 1);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "tux", 2);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "apple", 3);
__eCNameSpace__eC__types__eSystem_RegisterFunction("eC::types::GetRuntimePlatform", "eC::types::Platform eC::types::GetRuntimePlatform(void)", __eCNameSpace__eC__types__GetRuntimePlatform, module, 1);
class = __eCNameSpace__eC__types__eSystem_RegisterClass(5, "eC::types::ObjectInfo", 0, sizeof(struct __eCNameSpace__eC__types__ObjectInfo), 0, (void *)0, (void *)0, module, 1, 1);
if(((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application == ((struct __eCNameSpace__eC__types__Module *)(((char *)__thisModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->application && class)
__eCClass___eCNameSpace__eC__types__ObjectInfo = class;
__eCNameSpace__eC__types__eClass_AddDataMember(class, "prev", "eC::types::ObjectInfo", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "next", "eC::types::ObjectInfo", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "instance", "eC::types::Instance", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "name", "char *", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "instCode", "Instantiation", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "deleted", "bool", 4, 4, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "oClass", "eC::types::ObjectInfo", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "instances", "eC::containers::OldList", sizeof(struct __eCNameSpace__eC__containers__OldList), 8, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "classDefinition", "ClassDefinition", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "modified", "bool", 4, 4, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "i18nStrings", "void *", sizeof(void *), 0xF000F000, 1);
class = __eCNameSpace__eC__types__eSystem_RegisterClass(0, "eC::types::DesignerBase", 0, sizeof(struct __eCNameSpace__eC__types__DesignerBase), 0, (void *)0, (void *)0, module, 1, 1);
if(((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application == ((struct __eCNameSpace__eC__types__Module *)(((char *)__thisModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->application && class)
__eCClass___eCNameSpace__eC__types__DesignerBase = class;
__eCNameSpace__eC__types__eClass_AddVirtualMethod(class, "FindObject", "bool FindObject(eC::types::Instance * instance, const char * string)", 0, 1);
__eCNameSpace__eC__types__eClass_AddVirtualMethod(class, "RenameObject", "void RenameObject(eC::types::ObjectInfo object, const char * name)", 0, 1);
__eCNameSpace__eC__types__eClass_AddVirtualMethod(class, "SelectObjectFromDesigner", "void SelectObjectFromDesigner(eC::types::ObjectInfo object)", 0, 1);
__eCNameSpace__eC__types__eClass_AddVirtualMethod(class, "CodeAddObject", "void CodeAddObject(eC::types::Instance instance, eC::types::ObjectInfo * object)", 0, 1);
__eCNameSpace__eC__types__eClass_AddVirtualMethod(class, "SheetAddObject", "void SheetAddObject(eC::types::ObjectInfo object)", 0, 1);
__eCNameSpace__eC__types__eClass_AddVirtualMethod(class, "AddToolBoxClass", "void AddToolBoxClass(eC::types::Class _class)", 0, 1);
__eCNameSpace__eC__types__eClass_AddVirtualMethod(class, "AddDefaultMethod", "void AddDefaultMethod(eC::types::Instance instance, eC::types::Instance classInstance)", 0, 1);
__eCNameSpace__eC__types__eClass_AddVirtualMethod(class, "DeleteObject", "void DeleteObject(eC::types::ObjectInfo object)", 0, 1);
__eCNameSpace__eC__types__eClass_AddVirtualMethod(class, "ObjectContainsCode", "bool ObjectContainsCode(eC::types::ObjectInfo object)", 0, 1);
__eCNameSpace__eC__types__eClass_AddVirtualMethod(class, "ModifyCode", "void ModifyCode(void)", 0, 1);
__eCNameSpace__eC__types__eClass_AddVirtualMethod(class, "UpdateProperties", "void UpdateProperties(void)", 0, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "classDesigner", "eC::types::ClassDesignerBase", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "objectClass", "const char *", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "isDragging", "bool", 4, 4, 1);
__eCPropM___eCNameSpace__eC__types__DesignerBase_classDesigner = __eCNameSpace__eC__types__eClass_AddProperty(class, "classDesigner", "eC::types::ClassDesignerBase", __eCProp___eCNameSpace__eC__types__DesignerBase_Set_classDesigner, __eCProp___eCNameSpace__eC__types__DesignerBase_Get_classDesigner, 1);
if(((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application == ((struct __eCNameSpace__eC__types__Module *)(((char *)__thisModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->application)
__eCProp___eCNameSpace__eC__types__DesignerBase_classDesigner = __eCPropM___eCNameSpace__eC__types__DesignerBase_classDesigner, __eCPropM___eCNameSpace__eC__types__DesignerBase_classDesigner = (void *)0;
__eCPropM___eCNameSpace__eC__types__DesignerBase_objectClass = __eCNameSpace__eC__types__eClass_AddProperty(class, "objectClass", "const char *", __eCProp___eCNameSpace__eC__types__DesignerBase_Set_objectClass, __eCProp___eCNameSpace__eC__types__DesignerBase_Get_objectClass, 1);
if(((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application == ((struct __eCNameSpace__eC__types__Module *)(((char *)__thisModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->application)
__eCProp___eCNameSpace__eC__types__DesignerBase_objectClass = __eCPropM___eCNameSpace__eC__types__DesignerBase_objectClass, __eCPropM___eCNameSpace__eC__types__DesignerBase_objectClass = (void *)0;
__eCPropM___eCNameSpace__eC__types__DesignerBase_isDragging = __eCNameSpace__eC__types__eClass_AddProperty(class, "isDragging", "bool", __eCProp___eCNameSpace__eC__types__DesignerBase_Set_isDragging, __eCProp___eCNameSpace__eC__types__DesignerBase_Get_isDragging, 1);
if(((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application == ((struct __eCNameSpace__eC__types__Module *)(((char *)__thisModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->application)
__eCProp___eCNameSpace__eC__types__DesignerBase_isDragging = __eCPropM___eCNameSpace__eC__types__DesignerBase_isDragging, __eCPropM___eCNameSpace__eC__types__DesignerBase_isDragging = (void *)0;
class = __eCNameSpace__eC__types__eSystem_RegisterClass(0, "eC::types::ClassDesignerBase", 0, 0, 0, (void *)0, (void *)0, module, 1, 1);
if(((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application == ((struct __eCNameSpace__eC__types__Module *)(((char *)__thisModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->application && class)
__eCClass___eCNameSpace__eC__types__ClassDesignerBase = class;
__eCNameSpace__eC__types__eClass_AddVirtualMethod(class, "Reset", "void Reset(void)", 0, 1);
__eCNameSpace__eC__types__eClass_AddVirtualMethod(class, "AddObject", "void AddObject(void)", 0, 1);
__eCNameSpace__eC__types__eClass_AddVirtualMethod(class, "SelectObject", "void SelectObject(eC::types::ObjectInfo object, eC::types::Instance control)", 0, 1);
__eCNameSpace__eC__types__eClass_AddVirtualMethod(class, "ListToolBoxClasses", "void ListToolBoxClasses(eC::types::DesignerBase designer)", 0, 1);
__eCNameSpace__eC__types__eClass_AddVirtualMethod(class, "PrepareTestObject", "void ::PrepareTestObject(eC::types::DesignerBase designer, eC::types::Instance test)", 0, 1);
__eCNameSpace__eC__types__eClass_AddVirtualMethod(class, "CreateObject", "void ::CreateObject(eC::types::DesignerBase designer, eC::types::Instance instance, eC::types::ObjectInfo object, bool isClass, eC::types::Instance _class)", 0, 1);
__eCNameSpace__eC__types__eClass_AddVirtualMethod(class, "PostCreateObject", "void ::PostCreateObject(eC::types::Instance instance, eC::types::ObjectInfo object, bool isClass, eC::types::Instance _class)", 0, 1);
__eCNameSpace__eC__types__eClass_AddVirtualMethod(class, "DroppedObject", "void ::DroppedObject(eC::types::Instance instance, eC::types::ObjectInfo object, bool isClass, eC::types::Instance _class)", 0, 1);
__eCNameSpace__eC__types__eClass_AddVirtualMethod(class, "DestroyObject", "void ::DestroyObject(eC::types::Instance object)", 0, 1);
__eCNameSpace__eC__types__eClass_AddVirtualMethod(class, "FixProperty", "void ::FixProperty(eC::types::Property prop, eC::types::Instance object)", 0, 1);
__eCNameSpace__eC__types__eClass_AddVirtualMethod(class, "CreateNew", "void ::CreateNew(eC::types::Instance editBox, Size clientSize, const char * name, const char * inherit)", 0, 1);
__eCNameSpace__eC__types__eSystem_RegisterFunction("eC::types::SetActiveDesigner", "void eC::types::SetActiveDesigner(eC::types::DesignerBase designer)", __eCNameSpace__eC__types__SetActiveDesigner, module, 1);
__eCNameSpace__eC__types__eSystem_RegisterFunction("eC::types::GetActiveDesigner", "eC::types::DesignerBase eC::types::GetActiveDesigner(void)", __eCNameSpace__eC__types__GetActiveDesigner, module, 1);
__eCNameSpace__eC__types__eSystem_RegisterFunction("eC::types::eSystem_SetPoolingDisabled", "void eC::types::eSystem_SetPoolingDisabled(bool disabled)", __eCNameSpace__eC__types__eSystem_SetPoolingDisabled, module, 1);
__eCNameSpace__eC__types__eSystem_RegisterDefine("eC::i18n::LEAD_OFFSET", "0xD800 - (0x10000 >> 10)", module, 2);
__eCNameSpace__eC__types__eSystem_RegisterDefine("eC::i18n::SURROGATE_OFFSET", "0x10000 - (0xD800 << 10) - 0xDC00", module, 2);
__eCNameSpace__eC__types__eSystem_RegisterFunction("eC::i18n::UTF8Validate", "bool eC::i18n::UTF8Validate(const char * source)", __eCNameSpace__eC__i18n__UTF8Validate, module, 1);
__eCNameSpace__eC__types__eSystem_RegisterFunction("eC::i18n::ISO8859_1toUTF8", "int eC::i18n::ISO8859_1toUTF8(const char * source, char * dest, int max)", __eCNameSpace__eC__i18n__ISO8859_1toUTF8, module, 1);
__eCNameSpace__eC__types__eSystem_RegisterFunction("eC::i18n::UTF16toUTF8", "char * eC::i18n::UTF16toUTF8(const uint16 * source)", __eCNameSpace__eC__i18n__UTF16toUTF8, module, 1);
__eCNameSpace__eC__types__eSystem_RegisterFunction("eC::i18n::UTF16toUTF8Buffer", "int eC::i18n::UTF16toUTF8Buffer(const uint16 * source, char * dest, int max)", __eCNameSpace__eC__i18n__UTF16toUTF8Buffer, module, 1);
__eCNameSpace__eC__types__eSystem_RegisterFunction("eC::i18n::UTF8GetChar", "unichar eC::i18n::UTF8GetChar(const char * string, int * numBytes)", __eCNameSpace__eC__i18n__UTF8GetChar, module, 1);
__eCNameSpace__eC__types__eSystem_RegisterFunction("eC::i18n::UTF8toUTF16Buffer", "int eC::i18n::UTF8toUTF16Buffer(const char * source, uint16 * dest, int max)", __eCNameSpace__eC__i18n__UTF8toUTF16Buffer, module, 1);
__eCNameSpace__eC__types__eSystem_RegisterFunction("eC::i18n::UTF32toUTF8Len", "int eC::i18n::UTF32toUTF8Len(const unichar * source, int count, char * dest, int max)", __eCNameSpace__eC__i18n__UTF32toUTF8Len, module, 1);
__eCNameSpace__eC__types__eSystem_RegisterFunction("eC::i18n::UTF8toUTF16", "uint16 * eC::i18n::UTF8toUTF16(const char * source, int * wordCount)", __eCNameSpace__eC__i18n__UTF8toUTF16, module, 1);
__eCNameSpace__eC__types__eSystem_RegisterFunction("eC::types::queryMemInfo", "void eC::types::queryMemInfo(char * string)", __eCNameSpace__eC__types__queryMemInfo, module, 1);
__eCNameSpace__eC__types__eSystem_RegisterFunction("eC::types::eSystem_LockMem", "void eC::types::eSystem_LockMem(void)", __eCNameSpace__eC__types__eSystem_LockMem, module, 1);
__eCNameSpace__eC__types__eSystem_RegisterFunction("eC::types::eSystem_UnlockMem", "void eC::types::eSystem_UnlockMem(void)", __eCNameSpace__eC__types__eSystem_UnlockMem, module, 1);
}

