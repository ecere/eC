/* Code generated from eC source file: Array.ec */
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
extern int __eCVMethodID_class_OnUnserialize;

extern int __eCVMethodID_class_OnCompare;

struct __eCNameSpace__eC__containers__SortRData
{
void * arg;
int (* compare)(void *, const void *, const void *);
} eC_gcc_struct;

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

extern void __assert_fail(const char * __assertion, const char * __file, unsigned int __line, const char * __function) __attribute__((__nothrow__, __leaf__)) __attribute__((__noreturn__)) __attribute__((__cold__));

extern void __assert_perror_fail(int __errnum, const char * __file, unsigned int __line, const char * __function) __attribute__((__nothrow__, __leaf__)) __attribute__((__noreturn__)) __attribute__((__cold__));

extern void __assert(const char * __assertion, const char * __file, int __line) __attribute__((__nothrow__, __leaf__)) __attribute__((__noreturn__)) __attribute__((__cold__));

extern int * __errno_location(void) __attribute__((__nothrow__, __leaf__)) __attribute__((__const__));

extern void * memcpy(void * __restrict __dest, const void * __restrict __src, size_t __n) __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__ (1, 2)));

extern void * memmove(void * __dest, const void * __src, size_t __n) __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__ (1, 2)));

extern void * memccpy(void * __restrict __dest, const void * __restrict __src, int __c, size_t __n) __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__ (1, 2))) __attribute__((__access__ (__write_only__, 1, 4)));

extern void * memset(void * __s, int __c, size_t __n) __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__ (1)));

extern int memcmp(const void * __s1, const void * __s2, size_t __n) __attribute__((__nothrow__, __leaf__)) __attribute__((__pure__)) __attribute__((__nonnull__ (1, 2)));

extern int __memcmpeq(const void * __s1, const void * __s2, size_t __n) __attribute__((__nothrow__, __leaf__)) __attribute__((__pure__)) __attribute__((__nonnull__ (1, 2)));

extern void * memchr(const void * __s, int __c, size_t __n) __attribute__((__nothrow__, __leaf__)) __attribute__((__pure__)) __attribute__((__nonnull__ (1)));

extern char * strcpy(char * __restrict __dest, const char * __restrict __src) __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__ (1, 2)));

extern char * strncpy(char * __restrict __dest, const char * __restrict __src, size_t __n) __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__ (1, 2)));

extern char * strcat(char * __restrict __dest, const char * __restrict __src) __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__ (1, 2)));

extern char * strncat(char * __restrict __dest, const char * __restrict __src, size_t __n) __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__ (1, 2)));

extern int strcmp(const char * __s1, const char * __s2) __attribute__((__nothrow__, __leaf__)) __attribute__((__pure__)) __attribute__((__nonnull__ (1, 2)));

extern int strncmp(const char * __s1, const char * __s2, size_t __n) __attribute__((__nothrow__, __leaf__)) __attribute__((__pure__)) __attribute__((__nonnull__ (1, 2)));

extern int strcoll(const char * __s1, const char * __s2) __attribute__((__nothrow__, __leaf__)) __attribute__((__pure__)) __attribute__((__nonnull__ (1, 2)));

extern size_t strxfrm(char * __restrict __dest, const char * __restrict __src, size_t __n) __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__ (2))) __attribute__((__access__ (__write_only__, 1, 3)));

struct __locale_struct
{
struct __locale_data * __locales[13];
const unsigned short int * __ctype_b;
const int * __ctype_tolower;
const int * __ctype_toupper;
const char * __names[13];
} eC_gcc_struct;

typedef struct __locale_struct * __locale_t;

typedef __locale_t locale_t;

extern int strcoll_l(const char * __s1, const char * __s2, locale_t __l) __attribute__((__nothrow__, __leaf__)) __attribute__((__pure__)) __attribute__((__nonnull__ (1, 2, 3)));

extern size_t strxfrm_l(char * __dest, const char * __src, size_t __n, locale_t __l) __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__ (2, 4))) __attribute__((__access__ (__write_only__, 1, 3)));

extern char * strdup(const char * __s) __attribute__((__nothrow__, __leaf__)) __attribute__((__malloc__)) __attribute__((__nonnull__ (1)));

extern char * strndup(const char * __string, size_t __n) __attribute__((__nothrow__, __leaf__)) __attribute__((__malloc__)) __attribute__((__nonnull__ (1)));

extern char * strchr(const char * __s, int __c) __attribute__((__nothrow__, __leaf__)) __attribute__((__pure__)) __attribute__((__nonnull__ (1)));

extern char * strrchr(const char * __s, int __c) __attribute__((__nothrow__, __leaf__)) __attribute__((__pure__)) __attribute__((__nonnull__ (1)));

extern char * strchrnul(const char * __s, int __c) __attribute__((__nothrow__, __leaf__)) __attribute__((__pure__)) __attribute__((__nonnull__ (1)));

extern size_t strcspn(const char * __s, const char * __reject) __attribute__((__nothrow__, __leaf__)) __attribute__((__pure__)) __attribute__((__nonnull__ (1, 2)));

extern size_t strspn(const char * __s, const char * __accept) __attribute__((__nothrow__, __leaf__)) __attribute__((__pure__)) __attribute__((__nonnull__ (1, 2)));

extern char * strpbrk(const char * __s, const char * __accept) __attribute__((__nothrow__, __leaf__)) __attribute__((__pure__)) __attribute__((__nonnull__ (1, 2)));

extern char * strstr(const char * __haystack, const char * __needle) __attribute__((__nothrow__, __leaf__)) __attribute__((__pure__)) __attribute__((__nonnull__ (1, 2)));

extern char * strtok(char * __restrict __s, const char * __restrict __delim) __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__ (2)));

extern char * __strtok_r(char * __restrict __s, const char * __restrict __delim, char ** __restrict __save_ptr) __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__ (2, 3)));

extern char * strtok_r(char * __restrict __s, const char * __restrict __delim, char ** __restrict __save_ptr) __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__ (2, 3)));

extern char * strcasestr(const char * __haystack, const char * __needle) __attribute__((__nothrow__, __leaf__)) __attribute__((__pure__)) __attribute__((__nonnull__ (1, 2)));

extern void * memmem(const void * __haystack, size_t __haystacklen, const void * __needle, size_t __needlelen) __attribute__((__nothrow__, __leaf__)) __attribute__((__pure__)) __attribute__((__nonnull__ (1, 3))) __attribute__((__access__ (__read_only__, 1, 2))) __attribute__((__access__ (__read_only__, 3, 4)));

extern void * __mempcpy(void * __restrict __dest, const void * __restrict __src, size_t __n) __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__ (1, 2)));

extern void * mempcpy(void * __restrict __dest, const void * __restrict __src, size_t __n) __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__ (1, 2)));

extern size_t strlen(const char * __s) __attribute__((__nothrow__, __leaf__)) __attribute__((__pure__)) __attribute__((__nonnull__ (1)));

extern size_t strnlen(const char * __string, size_t __maxlen) __attribute__((__nothrow__, __leaf__)) __attribute__((__pure__)) __attribute__((__nonnull__ (1)));

extern char * strerror(int __errnum) __attribute__((__nothrow__, __leaf__));

extern int strerror_r(int __errnum, char * __buf, size_t __buflen) __asm__("__xpg_strerror_r") __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__ (2))) __attribute__((__access__ (__write_only__, 2, 3)));

extern char * strerror_l(int __errnum, locale_t __l) __attribute__((__nothrow__, __leaf__));

extern int bcmp(const void * __s1, const void * __s2, size_t __n) __attribute__((__nothrow__, __leaf__)) __attribute__((__pure__)) __attribute__((__nonnull__ (1, 2)));

extern void bcopy(const void * __src, void * __dest, size_t __n) __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__ (1, 2)));

extern void bzero(void * __s, size_t __n) __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__ (1)));

extern char * index(const char * __s, int __c) __attribute__((__nothrow__, __leaf__)) __attribute__((__pure__)) __attribute__((__nonnull__ (1)));

extern char * rindex(const char * __s, int __c) __attribute__((__nothrow__, __leaf__)) __attribute__((__pure__)) __attribute__((__nonnull__ (1)));

extern int ffs(int __i) __attribute__((__nothrow__, __leaf__)) __attribute__((__const__));

extern int ffsl(long int __l) __attribute__((__nothrow__, __leaf__)) __attribute__((__const__));

 extern int ffsll(long long int __ll) __attribute__((__nothrow__, __leaf__)) __attribute__((__const__));

extern int strcasecmp(const char * __s1, const char * __s2) __attribute__((__nothrow__, __leaf__)) __attribute__((__pure__)) __attribute__((__nonnull__ (1, 2)));

extern int strncasecmp(const char * __s1, const char * __s2, size_t __n) __attribute__((__nothrow__, __leaf__)) __attribute__((__pure__)) __attribute__((__nonnull__ (1, 2)));

extern int strcasecmp_l(const char * __s1, const char * __s2, locale_t __loc) __attribute__((__nothrow__, __leaf__)) __attribute__((__pure__)) __attribute__((__nonnull__ (1, 2, 3)));

extern int strncasecmp_l(const char * __s1, const char * __s2, size_t __n, locale_t __loc) __attribute__((__nothrow__, __leaf__)) __attribute__((__pure__)) __attribute__((__nonnull__ (1, 2, 4)));

extern void explicit_bzero(void * __s, size_t __n) __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__ (1))) __attribute__((__access__ (__write_only__, 1, 2)));

extern char * strsep(char ** __restrict __stringp, const char * __restrict __delim) __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__ (1, 2)));

extern char * strsignal(int __sig) __attribute__((__nothrow__, __leaf__));

extern char * __stpcpy(char * __restrict __dest, const char * __restrict __src) __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__ (1, 2)));

extern char * stpcpy(char * __restrict __dest, const char * __restrict __src) __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__ (1, 2)));

extern char * __stpncpy(char * __restrict __dest, const char * __restrict __src, size_t __n) __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__ (1, 2)));

extern char * stpncpy(char * __restrict __dest, const char * __restrict __src, size_t __n) __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__ (1, 2)));

extern size_t strlcpy(char * __restrict __dest, const char * __restrict __src, size_t __n) __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__ (1, 2))) __attribute__((__access__ (__write_only__, 1, 3)));

extern size_t strlcat(char * __restrict __dest, const char * __restrict __src, size_t __n) __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__ (1, 2))) __attribute__((__access__ (__read_write__, 1, 3)));

typedef int (* CMPFUNCPTR)(void * arg, const void * a, const void * b);

extern void __assert_fail(const char * __assertion, const char * __file, unsigned int __line, const char * __function) __attribute__((__nothrow__, __leaf__)) __attribute__((__noreturn__)) __attribute__((__cold__));

extern void __assert_perror_fail(int __errnum, const char * __file, unsigned int __line, const char * __function) __attribute__((__nothrow__, __leaf__)) __attribute__((__noreturn__)) __attribute__((__cold__));

extern void __assert(const char * __assertion, const char * __file, int __line) __attribute__((__nothrow__, __leaf__)) __attribute__((__noreturn__)) __attribute__((__cold__));

typedef int (* CMPFUNCPTR)(void * arg, const void * a, const void * b);

void parity_swap_four32(int * array, CMPFUNCPTR cmp, void * arg)
{
int tmp, * pta = array;
size_t x;

x = cmp(arg, pta, pta + 1) > 0;
tmp = pta[(int)!x];
pta[0] = pta[x];
pta[1] = tmp;
;
pta += 2;
x = cmp(arg, pta, pta + 1) > 0;
tmp = pta[(int)!x];
pta[0] = pta[x];
pta[1] = tmp;
;
pta--;
if(cmp(arg, pta, pta + 1) > 0)
{
tmp = pta[0];
pta[0] = pta[1];
pta[1] = tmp;
pta--;
x = cmp(arg, pta, pta + 1) > 0;
tmp = pta[(int)!x];
pta[0] = pta[x];
pta[1] = tmp;
;
pta += 2;
x = cmp(arg, pta, pta + 1) > 0;
tmp = pta[(int)!x];
pta[0] = pta[x];
pta[1] = tmp;
;
pta--;
x = cmp(arg, pta, pta + 1) > 0;
tmp = pta[(int)!x];
pta[0] = pta[x];
pta[1] = tmp;
;
}
}

void parity_swap_five32(int * array, CMPFUNCPTR cmp, void * arg)
{
int tmp, * pta = array;
size_t x, y;

x = cmp(arg, pta, pta + 1) > 0;
tmp = pta[(int)!x];
pta[0] = pta[x];
pta[1] = tmp;
;
pta += 2;
x = cmp(arg, pta, pta + 1) > 0;
tmp = pta[(int)!x];
pta[0] = pta[x];
pta[1] = tmp;
;
pta -= 1;
x = cmp(arg, pta, pta + 1) > 0;
tmp = pta[(int)!x];
pta[0] = pta[x];
pta[1] = tmp;
;
pta += 2;
y = cmp(arg, pta, pta + 1) > 0;
tmp = pta[(int)!y];
pta[0] = pta[y];
pta[1] = tmp;
;
pta = array;
if(x + y)
{
x = cmp(arg, pta, pta + 1) > 0;
tmp = pta[(int)!x];
pta[0] = pta[x];
pta[1] = tmp;
;
pta += 2;
x = cmp(arg, pta, pta + 1) > 0;
tmp = pta[(int)!x];
pta[0] = pta[x];
pta[1] = tmp;
;
pta -= 1;
x = cmp(arg, pta, pta + 1) > 0;
tmp = pta[(int)!x];
pta[0] = pta[x];
pta[1] = tmp;
;
pta += 2;
x = cmp(arg, pta, pta + 1) > 0;
tmp = pta[(int)!x];
pta[0] = pta[x];
pta[1] = tmp;
;
pta = array;
x = cmp(arg, pta, pta + 1) > 0;
tmp = pta[(int)!x];
pta[0] = pta[x];
pta[1] = tmp;
;
pta += 2;
x = cmp(arg, pta, pta + 1) > 0;
tmp = pta[(int)!x];
pta[0] = pta[x];
pta[1] = tmp;
;
pta -= 1;
}
}

void parity_swap_six32(int * array, int * swap, CMPFUNCPTR cmp, void * arg)
{
int tmp, * pta = array, * ptl, * ptr;
size_t x, y;

x = cmp(arg, pta, pta + 1) > 0;
tmp = pta[(int)!x];
pta[0] = pta[x];
pta[1] = tmp;
;
pta++;
x = cmp(arg, pta, pta + 1) > 0;
tmp = pta[(int)!x];
pta[0] = pta[x];
pta[1] = tmp;
;
pta += 3;
x = cmp(arg, pta, pta + 1) > 0;
tmp = pta[(int)!x];
pta[0] = pta[x];
pta[1] = tmp;
;
pta--;
x = cmp(arg, pta, pta + 1) > 0;
tmp = pta[(int)!x];
pta[0] = pta[x];
pta[1] = tmp;
;
pta = array;
if(cmp(arg, pta + 2, pta + 3) <= 0)
{
x = cmp(arg, pta, pta + 1) > 0;
tmp = pta[(int)!x];
pta[0] = pta[x];
pta[1] = tmp;
;
pta += 4;
x = cmp(arg, pta, pta + 1) > 0;
tmp = pta[(int)!x];
pta[0] = pta[x];
pta[1] = tmp;
;
return ;
}
x = cmp(arg, pta, pta + 1) > 0;
y = !x;
swap[0] = pta[x];
swap[1] = pta[y];
swap[2] = pta[2];
pta += 4;
x = cmp(arg, pta, pta + 1) > 0;
y = !x;
swap[4] = pta[x];
swap[5] = pta[y];
swap[3] = pta[-1];
pta = array;
ptl = swap;
ptr = swap + 3;
x = cmp(arg, ptl, ptr) <= 0;
*pta = *ptl;
ptl += x;
pta[x] = *ptr;
ptr += (int)!x;
pta++;
;
x = cmp(arg, ptl, ptr) <= 0;
*pta = *ptl;
ptl += x;
pta[x] = *ptr;
ptr += (int)!x;
pta++;
;
x = cmp(arg, ptl, ptr) <= 0;
*pta = *ptl;
ptl += x;
pta[x] = *ptr;
ptr += (int)!x;
pta++;
;
pta = array + 5;
ptl = swap + 2;
ptr = swap + 5;
y = cmp(arg, ptl, ptr) <= 0;
*pta = *ptl;
ptl -= (int)!y;
pta--;
pta[y] = *ptr;
ptr -= y;
;
y = cmp(arg, ptl, ptr) <= 0;
*pta = *ptl;
ptl -= (int)!y;
pta--;
pta[y] = *ptr;
ptr -= y;
;
*pta = cmp(arg, ptl, ptr) > 0 ? *ptl : *ptr;
}

void parity_swap_seven32(int * array, int * swap, CMPFUNCPTR cmp, void * arg)
{
int tmp, * pta = array, * ptl, * ptr;
size_t x, y;

x = cmp(arg, pta, pta + 1) > 0;
tmp = pta[(int)!x];
pta[0] = pta[x];
pta[1] = tmp;
;
pta += 2;
x = cmp(arg, pta, pta + 1) > 0;
tmp = pta[(int)!x];
pta[0] = pta[x];
pta[1] = tmp;
;
pta += 2;
x = cmp(arg, pta, pta + 1) > 0;
tmp = pta[(int)!x];
pta[0] = pta[x];
pta[1] = tmp;
;
pta -= 3;
y = cmp(arg, pta, pta + 1) > 0;
tmp = pta[(int)!y];
pta[0] = pta[y];
pta[1] = tmp;
;
pta += 2;
x = cmp(arg, pta, pta + 1) > 0;
tmp = pta[(int)!x];
pta[0] = pta[x];
pta[1] = tmp;
;
pta += 2;
y += x;
x = cmp(arg, pta, pta + 1) > 0;
tmp = pta[(int)!x];
pta[0] = pta[x];
pta[1] = tmp;
;
pta -= 1;
y += x;
if(y == 0)
return ;
x = cmp(arg, pta, pta + 1) > 0;
tmp = pta[(int)!x];
pta[0] = pta[x];
pta[1] = tmp;
;
pta = array;
x = cmp(arg, pta, pta + 1) > 0;
swap[0] = pta[x];
swap[1] = pta[!x];
swap[2] = pta[2];
pta += 3;
x = cmp(arg, pta, pta + 1) > 0;
swap[3] = pta[x];
swap[4] = pta[!x];
pta += 2;
x = cmp(arg, pta, pta + 1) > 0;
swap[5] = pta[x];
swap[6] = pta[!x];
pta = array;
ptl = swap;
ptr = swap + 3;
x = cmp(arg, ptl, ptr) <= 0;
*pta = *ptl;
ptl += x;
pta[x] = *ptr;
ptr += (int)!x;
pta++;
;
x = cmp(arg, ptl, ptr) <= 0;
*pta = *ptl;
ptl += x;
pta[x] = *ptr;
ptr += (int)!x;
pta++;
;
x = cmp(arg, ptl, ptr) <= 0;
*pta = *ptl;
ptl += x;
pta[x] = *ptr;
ptr += (int)!x;
pta++;
;
pta = array + 6;
ptl = swap + 2;
ptr = swap + 6;
y = cmp(arg, ptl, ptr) <= 0;
*pta = *ptl;
ptl -= (int)!y;
pta--;
pta[y] = *ptr;
ptr -= y;
;
y = cmp(arg, ptl, ptr) <= 0;
*pta = *ptl;
ptl -= (int)!y;
pta--;
pta[y] = *ptr;
ptr -= y;
;
y = cmp(arg, ptl, ptr) <= 0;
*pta = *ptl;
ptl -= (int)!y;
pta--;
pta[y] = *ptr;
ptr -= y;
;
*pta = cmp(arg, ptl, ptr) > 0 ? *ptl : *ptr;
}

void parity_merge32(int * dest, int * from, size_t left, size_t right, CMPFUNCPTR cmp, void * arg)
{
int * ptl, * ptr, * tpl, * tpr, * tpd, * ptd;
size_t x, y;

ptl = from;
ptr = from + left;
ptd = dest;
tpl = ptr - 1;
tpr = tpl + right;
tpd = dest + left + right - 1;
if(left < right)
{
*ptd++ = cmp(arg, ptl, ptr) <= 0 ? *ptl++ : *ptr++;
}
*ptd++ = cmp(arg, ptl, ptr) <= 0 ? *ptl++ : *ptr++;
if(left > 262144)
{
while(--left)
{
*ptd++ = cmp(arg, ptl, ptr) <= 0 ? *ptl++ : *ptr++;
*tpd-- = cmp(arg, tpl, tpr) > 0 ? *tpl-- : *tpr--;
}
}
else
{
while(--left)
{
x = cmp(arg, ptl, ptr) <= 0;
*ptd = *ptl;
ptl += x;
ptd[x] = *ptr;
ptr += (int)!x;
ptd++;
;
y = cmp(arg, tpl, tpr) <= 0;
*tpd = *tpl;
tpl -= (int)!y;
tpd--;
tpd[y] = *tpr;
tpr -= y;
;
}
}
*tpd = cmp(arg, tpl, tpr) > 0 ? *tpl : *tpr;
}

void quad_reversal32(int * pta, int * ptz)
{
int * ptb, * pty, tmp1, tmp2;
size_t loop = (ptz - pta) / 2;

ptb = pta + loop;
pty = ptz - loop;
if(loop % 2 == 0)
{
tmp2 = *ptb;
*ptb-- = *pty;
*pty++ = tmp2;
loop--;
}
loop /= 2;
do
{
tmp1 = *pta;
*pta++ = *ptz;
*ptz-- = tmp1;
tmp2 = *ptb;
*ptb-- = *pty;
*pty++ = tmp2;
}while(loop--);
}

void quad_swap_merge32(int * array, int * swap, CMPFUNCPTR cmp, void * arg)
{
int * pts, * ptl, * ptr;
size_t x;

ptl = array + 0;
ptr = array + 0 + 2;
pts = swap + 0;
x = cmp(arg, ptl, ptr) <= 0;
*pts = *ptl;
ptl += x;
pts[x] = *ptr;
ptr += (int)!x;
pts++;
;
*pts = cmp(arg, ptl, ptr) <= 0 ? *ptl : *ptr;
ptl = array + 0 + 1;
ptr = array + 0 + 3;
pts = swap + 0 + 3;
x = cmp(arg, ptl, ptr) <= 0;
*pts = *ptl;
ptl -= (int)!x;
pts--;
pts[x] = *ptr;
ptr -= x;
;
*pts = cmp(arg, ptl, ptr) > 0 ? *ptl : *ptr;
;
ptl = array + 4;
ptr = array + 4 + 2;
pts = swap + 4;
x = cmp(arg, ptl, ptr) <= 0;
*pts = *ptl;
ptl += x;
pts[x] = *ptr;
ptr += (int)!x;
pts++;
;
*pts = cmp(arg, ptl, ptr) <= 0 ? *ptl : *ptr;
ptl = array + 4 + 1;
ptr = array + 4 + 3;
pts = swap + 4 + 3;
x = cmp(arg, ptl, ptr) <= 0;
*pts = *ptl;
ptl -= (int)!x;
pts--;
pts[x] = *ptr;
ptr -= x;
;
*pts = cmp(arg, ptl, ptr) > 0 ? *ptl : *ptr;
;
ptl = swap + 0;
ptr = swap + 4;
pts = array;
x = cmp(arg, ptl, ptr) <= 0;
*pts = *ptl;
ptl += x;
pts[x] = *ptr;
ptr += (int)!x;
pts++;
;
x = cmp(arg, ptl, ptr) <= 0;
*pts = *ptl;
ptl += x;
pts[x] = *ptr;
ptr += (int)!x;
pts++;
;
x = cmp(arg, ptl, ptr) <= 0;
*pts = *ptl;
ptl += x;
pts[x] = *ptr;
ptr += (int)!x;
pts++;
;
*pts = cmp(arg, ptl, ptr) <= 0 ? *ptl : *ptr;
ptl = swap + 3;
ptr = swap + 7;
pts = array + 7;
x = cmp(arg, ptl, ptr) <= 0;
*pts = *ptl;
ptl -= (int)!x;
pts--;
pts[x] = *ptr;
ptr -= x;
;
x = cmp(arg, ptl, ptr) <= 0;
*pts = *ptl;
ptl -= (int)!x;
pts--;
pts[x] = *ptr;
ptr -= x;
;
x = cmp(arg, ptl, ptr) <= 0;
*pts = *ptl;
ptl -= (int)!x;
pts--;
pts[x] = *ptr;
ptr -= x;
;
*pts = cmp(arg, ptl, ptr) > 0 ? *ptl : *ptr;
;
}

void tail_merge32(int * array, int * swap, size_t swap_size, size_t nmemb, size_t block, CMPFUNCPTR cmp, void * arg);

size_t monobound_binary_first32(int * array, int * value, size_t top, CMPFUNCPTR cmp, void * arg)
{
int * end;
size_t mid;

end = array + top;
while(top > 1)
{
mid = top / 2;
if(cmp(arg, value, end - mid) <= 0)
{
end -= mid;
}
top -= mid;
}
if(cmp(arg, value, end - 1) <= 0)
{
end--;
}
return (end - array);
}

void parity_swap_four_int32(int * array, CMPFUNCPTR cmp, void * arg)
{
int tmp, * pta = array;
size_t x;

x = (*(pta) > *(pta + 1)) > 0;
tmp = pta[(int)!x];
pta[0] = pta[x];
pta[1] = tmp;
;
pta += 2;
x = (*(pta) > *(pta + 1)) > 0;
tmp = pta[(int)!x];
pta[0] = pta[x];
pta[1] = tmp;
;
pta--;
if((*(pta) > *(pta + 1)) > 0)
{
tmp = pta[0];
pta[0] = pta[1];
pta[1] = tmp;
pta--;
x = (*(pta) > *(pta + 1)) > 0;
tmp = pta[(int)!x];
pta[0] = pta[x];
pta[1] = tmp;
;
pta += 2;
x = (*(pta) > *(pta + 1)) > 0;
tmp = pta[(int)!x];
pta[0] = pta[x];
pta[1] = tmp;
;
pta--;
x = (*(pta) > *(pta + 1)) > 0;
tmp = pta[(int)!x];
pta[0] = pta[x];
pta[1] = tmp;
;
}
}

void parity_swap_five_int32(int * array, CMPFUNCPTR cmp, void * arg)
{
int tmp, * pta = array;
size_t x, y;

x = (*(pta) > *(pta + 1)) > 0;
tmp = pta[(int)!x];
pta[0] = pta[x];
pta[1] = tmp;
;
pta += 2;
x = (*(pta) > *(pta + 1)) > 0;
tmp = pta[(int)!x];
pta[0] = pta[x];
pta[1] = tmp;
;
pta -= 1;
x = (*(pta) > *(pta + 1)) > 0;
tmp = pta[(int)!x];
pta[0] = pta[x];
pta[1] = tmp;
;
pta += 2;
y = (*(pta) > *(pta + 1)) > 0;
tmp = pta[(int)!y];
pta[0] = pta[y];
pta[1] = tmp;
;
pta = array;
if(x + y)
{
x = (*(pta) > *(pta + 1)) > 0;
tmp = pta[(int)!x];
pta[0] = pta[x];
pta[1] = tmp;
;
pta += 2;
x = (*(pta) > *(pta + 1)) > 0;
tmp = pta[(int)!x];
pta[0] = pta[x];
pta[1] = tmp;
;
pta -= 1;
x = (*(pta) > *(pta + 1)) > 0;
tmp = pta[(int)!x];
pta[0] = pta[x];
pta[1] = tmp;
;
pta += 2;
x = (*(pta) > *(pta + 1)) > 0;
tmp = pta[(int)!x];
pta[0] = pta[x];
pta[1] = tmp;
;
pta = array;
x = (*(pta) > *(pta + 1)) > 0;
tmp = pta[(int)!x];
pta[0] = pta[x];
pta[1] = tmp;
;
pta += 2;
x = (*(pta) > *(pta + 1)) > 0;
tmp = pta[(int)!x];
pta[0] = pta[x];
pta[1] = tmp;
;
pta -= 1;
}
}

void parity_swap_six_int32(int * array, int * swap, CMPFUNCPTR cmp, void * arg)
{
int tmp, * pta = array, * ptl, * ptr;
size_t x, y;

x = (*(pta) > *(pta + 1)) > 0;
tmp = pta[(int)!x];
pta[0] = pta[x];
pta[1] = tmp;
;
pta++;
x = (*(pta) > *(pta + 1)) > 0;
tmp = pta[(int)!x];
pta[0] = pta[x];
pta[1] = tmp;
;
pta += 3;
x = (*(pta) > *(pta + 1)) > 0;
tmp = pta[(int)!x];
pta[0] = pta[x];
pta[1] = tmp;
;
pta--;
x = (*(pta) > *(pta + 1)) > 0;
tmp = pta[(int)!x];
pta[0] = pta[x];
pta[1] = tmp;
;
pta = array;
if((*(pta + 2) > *(pta + 3)) <= 0)
{
x = (*(pta) > *(pta + 1)) > 0;
tmp = pta[(int)!x];
pta[0] = pta[x];
pta[1] = tmp;
;
pta += 4;
x = (*(pta) > *(pta + 1)) > 0;
tmp = pta[(int)!x];
pta[0] = pta[x];
pta[1] = tmp;
;
return ;
}
x = (*(pta) > *(pta + 1)) > 0;
y = !x;
swap[0] = pta[x];
swap[1] = pta[y];
swap[2] = pta[2];
pta += 4;
x = (*(pta) > *(pta + 1)) > 0;
y = !x;
swap[4] = pta[x];
swap[5] = pta[y];
swap[3] = pta[-1];
pta = array;
ptl = swap;
ptr = swap + 3;
x = (*(ptl) > *(ptr)) <= 0;
*pta = *ptl;
ptl += x;
pta[x] = *ptr;
ptr += (int)!x;
pta++;
;
x = (*(ptl) > *(ptr)) <= 0;
*pta = *ptl;
ptl += x;
pta[x] = *ptr;
ptr += (int)!x;
pta++;
;
x = (*(ptl) > *(ptr)) <= 0;
*pta = *ptl;
ptl += x;
pta[x] = *ptr;
ptr += (int)!x;
pta++;
;
pta = array + 5;
ptl = swap + 2;
ptr = swap + 5;
y = (*(ptl) > *(ptr)) <= 0;
*pta = *ptl;
ptl -= (int)!y;
pta--;
pta[y] = *ptr;
ptr -= y;
;
y = (*(ptl) > *(ptr)) <= 0;
*pta = *ptl;
ptl -= (int)!y;
pta--;
pta[y] = *ptr;
ptr -= y;
;
*pta = (*(ptl) > *(ptr)) > 0 ? *ptl : *ptr;
}

void parity_swap_seven_int32(int * array, int * swap, CMPFUNCPTR cmp, void * arg)
{
int tmp, * pta = array, * ptl, * ptr;
size_t x, y;

x = (*(pta) > *(pta + 1)) > 0;
tmp = pta[(int)!x];
pta[0] = pta[x];
pta[1] = tmp;
;
pta += 2;
x = (*(pta) > *(pta + 1)) > 0;
tmp = pta[(int)!x];
pta[0] = pta[x];
pta[1] = tmp;
;
pta += 2;
x = (*(pta) > *(pta + 1)) > 0;
tmp = pta[(int)!x];
pta[0] = pta[x];
pta[1] = tmp;
;
pta -= 3;
y = (*(pta) > *(pta + 1)) > 0;
tmp = pta[(int)!y];
pta[0] = pta[y];
pta[1] = tmp;
;
pta += 2;
x = (*(pta) > *(pta + 1)) > 0;
tmp = pta[(int)!x];
pta[0] = pta[x];
pta[1] = tmp;
;
pta += 2;
y += x;
x = (*(pta) > *(pta + 1)) > 0;
tmp = pta[(int)!x];
pta[0] = pta[x];
pta[1] = tmp;
;
pta -= 1;
y += x;
if(y == 0)
return ;
x = (*(pta) > *(pta + 1)) > 0;
tmp = pta[(int)!x];
pta[0] = pta[x];
pta[1] = tmp;
;
pta = array;
x = (*(pta) > *(pta + 1)) > 0;
swap[0] = pta[x];
swap[1] = pta[!x];
swap[2] = pta[2];
pta += 3;
x = (*(pta) > *(pta + 1)) > 0;
swap[3] = pta[x];
swap[4] = pta[!x];
pta += 2;
x = (*(pta) > *(pta + 1)) > 0;
swap[5] = pta[x];
swap[6] = pta[!x];
pta = array;
ptl = swap;
ptr = swap + 3;
x = (*(ptl) > *(ptr)) <= 0;
*pta = *ptl;
ptl += x;
pta[x] = *ptr;
ptr += (int)!x;
pta++;
;
x = (*(ptl) > *(ptr)) <= 0;
*pta = *ptl;
ptl += x;
pta[x] = *ptr;
ptr += (int)!x;
pta++;
;
x = (*(ptl) > *(ptr)) <= 0;
*pta = *ptl;
ptl += x;
pta[x] = *ptr;
ptr += (int)!x;
pta++;
;
pta = array + 6;
ptl = swap + 2;
ptr = swap + 6;
y = (*(ptl) > *(ptr)) <= 0;
*pta = *ptl;
ptl -= (int)!y;
pta--;
pta[y] = *ptr;
ptr -= y;
;
y = (*(ptl) > *(ptr)) <= 0;
*pta = *ptl;
ptl -= (int)!y;
pta--;
pta[y] = *ptr;
ptr -= y;
;
y = (*(ptl) > *(ptr)) <= 0;
*pta = *ptl;
ptl -= (int)!y;
pta--;
pta[y] = *ptr;
ptr -= y;
;
*pta = (*(ptl) > *(ptr)) > 0 ? *ptl : *ptr;
}

void parity_merge_int32(int * dest, int * from, size_t left, size_t right, CMPFUNCPTR cmp, void * arg)
{
int * ptl, * ptr, * tpl, * tpr, * tpd, * ptd;
size_t x, y;

ptl = from;
ptr = from + left;
ptd = dest;
tpl = ptr - 1;
tpr = tpl + right;
tpd = dest + left + right - 1;
if(left < right)
{
*ptd++ = (*(ptl) > *(ptr)) <= 0 ? *ptl++ : *ptr++;
}
*ptd++ = (*(ptl) > *(ptr)) <= 0 ? *ptl++ : *ptr++;
{
while(--left)
{
x = (*(ptl) > *(ptr)) <= 0;
*ptd = *ptl;
ptl += x;
ptd[x] = *ptr;
ptr += (int)!x;
ptd++;
;
y = (*(tpl) > *(tpr)) <= 0;
*tpd = *tpl;
tpl -= (int)!y;
tpd--;
tpd[y] = *tpr;
tpr -= y;
;
}
}
*tpd = (*(tpl) > *(tpr)) > 0 ? *tpl : *tpr;
}

void quad_reversal_int32(int * pta, int * ptz)
{
int * ptb, * pty, tmp1, tmp2;
size_t loop = (ptz - pta) / 2;

ptb = pta + loop;
pty = ptz - loop;
if(loop % 2 == 0)
{
tmp2 = *ptb;
*ptb-- = *pty;
*pty++ = tmp2;
loop--;
}
loop /= 2;
do
{
tmp1 = *pta;
*pta++ = *ptz;
*ptz-- = tmp1;
tmp2 = *ptb;
*ptb-- = *pty;
*pty++ = tmp2;
}while(loop--);
}

void quad_swap_merge_int32(int * array, int * swap, CMPFUNCPTR cmp, void * arg)
{
int * pts, * ptl, * ptr;
size_t x;

ptl = array + 0;
ptr = array + 0 + 2;
pts = swap + 0;
x = (*(ptl) > *(ptr)) <= 0;
*pts = *ptl;
ptl += x;
pts[x] = *ptr;
ptr += (int)!x;
pts++;
;
*pts = (*(ptl) > *(ptr)) <= 0 ? *ptl : *ptr;
ptl = array + 0 + 1;
ptr = array + 0 + 3;
pts = swap + 0 + 3;
x = (*(ptl) > *(ptr)) <= 0;
*pts = *ptl;
ptl -= (int)!x;
pts--;
pts[x] = *ptr;
ptr -= x;
;
*pts = (*(ptl) > *(ptr)) > 0 ? *ptl : *ptr;
;
ptl = array + 4;
ptr = array + 4 + 2;
pts = swap + 4;
x = (*(ptl) > *(ptr)) <= 0;
*pts = *ptl;
ptl += x;
pts[x] = *ptr;
ptr += (int)!x;
pts++;
;
*pts = (*(ptl) > *(ptr)) <= 0 ? *ptl : *ptr;
ptl = array + 4 + 1;
ptr = array + 4 + 3;
pts = swap + 4 + 3;
x = (*(ptl) > *(ptr)) <= 0;
*pts = *ptl;
ptl -= (int)!x;
pts--;
pts[x] = *ptr;
ptr -= x;
;
*pts = (*(ptl) > *(ptr)) > 0 ? *ptl : *ptr;
;
ptl = swap + 0;
ptr = swap + 4;
pts = array;
x = (*(ptl) > *(ptr)) <= 0;
*pts = *ptl;
ptl += x;
pts[x] = *ptr;
ptr += (int)!x;
pts++;
;
x = (*(ptl) > *(ptr)) <= 0;
*pts = *ptl;
ptl += x;
pts[x] = *ptr;
ptr += (int)!x;
pts++;
;
x = (*(ptl) > *(ptr)) <= 0;
*pts = *ptl;
ptl += x;
pts[x] = *ptr;
ptr += (int)!x;
pts++;
;
*pts = (*(ptl) > *(ptr)) <= 0 ? *ptl : *ptr;
ptl = swap + 3;
ptr = swap + 7;
pts = array + 7;
x = (*(ptl) > *(ptr)) <= 0;
*pts = *ptl;
ptl -= (int)!x;
pts--;
pts[x] = *ptr;
ptr -= x;
;
x = (*(ptl) > *(ptr)) <= 0;
*pts = *ptl;
ptl -= (int)!x;
pts--;
pts[x] = *ptr;
ptr -= x;
;
x = (*(ptl) > *(ptr)) <= 0;
*pts = *ptl;
ptl -= (int)!x;
pts--;
pts[x] = *ptr;
ptr -= x;
;
*pts = (*(ptl) > *(ptr)) > 0 ? *ptl : *ptr;
;
}

void tail_merge_int32(int * array, int * swap, size_t swap_size, size_t nmemb, size_t block, CMPFUNCPTR cmp, void * arg);

size_t monobound_binary_first_int32(int * array, int * value, size_t top, CMPFUNCPTR cmp, void * arg)
{
int * end;
size_t mid;

end = array + top;
while(top > 1)
{
mid = top / 2;
if((*(value) > *(end - mid)) <= 0)
{
end -= mid;
}
top -= mid;
}
if((*(value) > *(end - 1)) <= 0)
{
end--;
}
return (end - array);
}

void parity_swap_four_uint32(unsigned int * array, CMPFUNCPTR cmp, void * arg)
{
unsigned int tmp, * pta = array;
size_t x;

x = (*(pta) > *(pta + 1)) > 0;
tmp = pta[(int)!x];
pta[0] = pta[x];
pta[1] = tmp;
;
pta += 2;
x = (*(pta) > *(pta + 1)) > 0;
tmp = pta[(int)!x];
pta[0] = pta[x];
pta[1] = tmp;
;
pta--;
if((*(pta) > *(pta + 1)) > 0)
{
tmp = pta[0];
pta[0] = pta[1];
pta[1] = tmp;
pta--;
x = (*(pta) > *(pta + 1)) > 0;
tmp = pta[(int)!x];
pta[0] = pta[x];
pta[1] = tmp;
;
pta += 2;
x = (*(pta) > *(pta + 1)) > 0;
tmp = pta[(int)!x];
pta[0] = pta[x];
pta[1] = tmp;
;
pta--;
x = (*(pta) > *(pta + 1)) > 0;
tmp = pta[(int)!x];
pta[0] = pta[x];
pta[1] = tmp;
;
}
}

void parity_swap_five_uint32(unsigned int * array, CMPFUNCPTR cmp, void * arg)
{
unsigned int tmp, * pta = array;
size_t x, y;

x = (*(pta) > *(pta + 1)) > 0;
tmp = pta[(int)!x];
pta[0] = pta[x];
pta[1] = tmp;
;
pta += 2;
x = (*(pta) > *(pta + 1)) > 0;
tmp = pta[(int)!x];
pta[0] = pta[x];
pta[1] = tmp;
;
pta -= 1;
x = (*(pta) > *(pta + 1)) > 0;
tmp = pta[(int)!x];
pta[0] = pta[x];
pta[1] = tmp;
;
pta += 2;
y = (*(pta) > *(pta + 1)) > 0;
tmp = pta[(int)!y];
pta[0] = pta[y];
pta[1] = tmp;
;
pta = array;
if(x + y)
{
x = (*(pta) > *(pta + 1)) > 0;
tmp = pta[(int)!x];
pta[0] = pta[x];
pta[1] = tmp;
;
pta += 2;
x = (*(pta) > *(pta + 1)) > 0;
tmp = pta[(int)!x];
pta[0] = pta[x];
pta[1] = tmp;
;
pta -= 1;
x = (*(pta) > *(pta + 1)) > 0;
tmp = pta[(int)!x];
pta[0] = pta[x];
pta[1] = tmp;
;
pta += 2;
x = (*(pta) > *(pta + 1)) > 0;
tmp = pta[(int)!x];
pta[0] = pta[x];
pta[1] = tmp;
;
pta = array;
x = (*(pta) > *(pta + 1)) > 0;
tmp = pta[(int)!x];
pta[0] = pta[x];
pta[1] = tmp;
;
pta += 2;
x = (*(pta) > *(pta + 1)) > 0;
tmp = pta[(int)!x];
pta[0] = pta[x];
pta[1] = tmp;
;
pta -= 1;
}
}

void parity_swap_six_uint32(unsigned int * array, unsigned int * swap, CMPFUNCPTR cmp, void * arg)
{
unsigned int tmp, * pta = array, * ptl, * ptr;
size_t x, y;

x = (*(pta) > *(pta + 1)) > 0;
tmp = pta[(int)!x];
pta[0] = pta[x];
pta[1] = tmp;
;
pta++;
x = (*(pta) > *(pta + 1)) > 0;
tmp = pta[(int)!x];
pta[0] = pta[x];
pta[1] = tmp;
;
pta += 3;
x = (*(pta) > *(pta + 1)) > 0;
tmp = pta[(int)!x];
pta[0] = pta[x];
pta[1] = tmp;
;
pta--;
x = (*(pta) > *(pta + 1)) > 0;
tmp = pta[(int)!x];
pta[0] = pta[x];
pta[1] = tmp;
;
pta = array;
if((*(pta + 2) > *(pta + 3)) <= 0)
{
x = (*(pta) > *(pta + 1)) > 0;
tmp = pta[(int)!x];
pta[0] = pta[x];
pta[1] = tmp;
;
pta += 4;
x = (*(pta) > *(pta + 1)) > 0;
tmp = pta[(int)!x];
pta[0] = pta[x];
pta[1] = tmp;
;
return ;
}
x = (*(pta) > *(pta + 1)) > 0;
y = !x;
swap[0] = pta[x];
swap[1] = pta[y];
swap[2] = pta[2];
pta += 4;
x = (*(pta) > *(pta + 1)) > 0;
y = !x;
swap[4] = pta[x];
swap[5] = pta[y];
swap[3] = pta[-1];
pta = array;
ptl = swap;
ptr = swap + 3;
x = (*(ptl) > *(ptr)) <= 0;
*pta = *ptl;
ptl += x;
pta[x] = *ptr;
ptr += (int)!x;
pta++;
;
x = (*(ptl) > *(ptr)) <= 0;
*pta = *ptl;
ptl += x;
pta[x] = *ptr;
ptr += (int)!x;
pta++;
;
x = (*(ptl) > *(ptr)) <= 0;
*pta = *ptl;
ptl += x;
pta[x] = *ptr;
ptr += (int)!x;
pta++;
;
pta = array + 5;
ptl = swap + 2;
ptr = swap + 5;
y = (*(ptl) > *(ptr)) <= 0;
*pta = *ptl;
ptl -= (int)!y;
pta--;
pta[y] = *ptr;
ptr -= y;
;
y = (*(ptl) > *(ptr)) <= 0;
*pta = *ptl;
ptl -= (int)!y;
pta--;
pta[y] = *ptr;
ptr -= y;
;
*pta = (*(ptl) > *(ptr)) > 0 ? *ptl : *ptr;
}

void parity_swap_seven_uint32(unsigned int * array, unsigned int * swap, CMPFUNCPTR cmp, void * arg)
{
unsigned int tmp, * pta = array, * ptl, * ptr;
size_t x, y;

x = (*(pta) > *(pta + 1)) > 0;
tmp = pta[(int)!x];
pta[0] = pta[x];
pta[1] = tmp;
;
pta += 2;
x = (*(pta) > *(pta + 1)) > 0;
tmp = pta[(int)!x];
pta[0] = pta[x];
pta[1] = tmp;
;
pta += 2;
x = (*(pta) > *(pta + 1)) > 0;
tmp = pta[(int)!x];
pta[0] = pta[x];
pta[1] = tmp;
;
pta -= 3;
y = (*(pta) > *(pta + 1)) > 0;
tmp = pta[(int)!y];
pta[0] = pta[y];
pta[1] = tmp;
;
pta += 2;
x = (*(pta) > *(pta + 1)) > 0;
tmp = pta[(int)!x];
pta[0] = pta[x];
pta[1] = tmp;
;
pta += 2;
y += x;
x = (*(pta) > *(pta + 1)) > 0;
tmp = pta[(int)!x];
pta[0] = pta[x];
pta[1] = tmp;
;
pta -= 1;
y += x;
if(y == 0)
return ;
x = (*(pta) > *(pta + 1)) > 0;
tmp = pta[(int)!x];
pta[0] = pta[x];
pta[1] = tmp;
;
pta = array;
x = (*(pta) > *(pta + 1)) > 0;
swap[0] = pta[x];
swap[1] = pta[!x];
swap[2] = pta[2];
pta += 3;
x = (*(pta) > *(pta + 1)) > 0;
swap[3] = pta[x];
swap[4] = pta[!x];
pta += 2;
x = (*(pta) > *(pta + 1)) > 0;
swap[5] = pta[x];
swap[6] = pta[!x];
pta = array;
ptl = swap;
ptr = swap + 3;
x = (*(ptl) > *(ptr)) <= 0;
*pta = *ptl;
ptl += x;
pta[x] = *ptr;
ptr += (int)!x;
pta++;
;
x = (*(ptl) > *(ptr)) <= 0;
*pta = *ptl;
ptl += x;
pta[x] = *ptr;
ptr += (int)!x;
pta++;
;
x = (*(ptl) > *(ptr)) <= 0;
*pta = *ptl;
ptl += x;
pta[x] = *ptr;
ptr += (int)!x;
pta++;
;
pta = array + 6;
ptl = swap + 2;
ptr = swap + 6;
y = (*(ptl) > *(ptr)) <= 0;
*pta = *ptl;
ptl -= (int)!y;
pta--;
pta[y] = *ptr;
ptr -= y;
;
y = (*(ptl) > *(ptr)) <= 0;
*pta = *ptl;
ptl -= (int)!y;
pta--;
pta[y] = *ptr;
ptr -= y;
;
y = (*(ptl) > *(ptr)) <= 0;
*pta = *ptl;
ptl -= (int)!y;
pta--;
pta[y] = *ptr;
ptr -= y;
;
*pta = (*(ptl) > *(ptr)) > 0 ? *ptl : *ptr;
}

void parity_merge_uint32(unsigned int * dest, unsigned int * from, size_t left, size_t right, CMPFUNCPTR cmp, void * arg)
{
unsigned int * ptl, * ptr, * tpl, * tpr, * tpd, * ptd;
size_t x, y;

ptl = from;
ptr = from + left;
ptd = dest;
tpl = ptr - 1;
tpr = tpl + right;
tpd = dest + left + right - 1;
if(left < right)
{
*ptd++ = (*(ptl) > *(ptr)) <= 0 ? *ptl++ : *ptr++;
}
*ptd++ = (*(ptl) > *(ptr)) <= 0 ? *ptl++ : *ptr++;
{
while(--left)
{
x = (*(ptl) > *(ptr)) <= 0;
*ptd = *ptl;
ptl += x;
ptd[x] = *ptr;
ptr += (int)!x;
ptd++;
;
y = (*(tpl) > *(tpr)) <= 0;
*tpd = *tpl;
tpl -= (int)!y;
tpd--;
tpd[y] = *tpr;
tpr -= y;
;
}
}
*tpd = (*(tpl) > *(tpr)) > 0 ? *tpl : *tpr;
}

void quad_reversal_uint32(unsigned int * pta, unsigned int * ptz)
{
unsigned int * ptb, * pty, tmp1, tmp2;
size_t loop = (ptz - pta) / 2;

ptb = pta + loop;
pty = ptz - loop;
if(loop % 2 == 0)
{
tmp2 = *ptb;
*ptb-- = *pty;
*pty++ = tmp2;
loop--;
}
loop /= 2;
do
{
tmp1 = *pta;
*pta++ = *ptz;
*ptz-- = tmp1;
tmp2 = *ptb;
*ptb-- = *pty;
*pty++ = tmp2;
}while(loop--);
}

void quad_swap_merge_uint32(unsigned int * array, unsigned int * swap, CMPFUNCPTR cmp, void * arg)
{
unsigned int * pts, * ptl, * ptr;
size_t x;

ptl = array + 0;
ptr = array + 0 + 2;
pts = swap + 0;
x = (*(ptl) > *(ptr)) <= 0;
*pts = *ptl;
ptl += x;
pts[x] = *ptr;
ptr += (int)!x;
pts++;
;
*pts = (*(ptl) > *(ptr)) <= 0 ? *ptl : *ptr;
ptl = array + 0 + 1;
ptr = array + 0 + 3;
pts = swap + 0 + 3;
x = (*(ptl) > *(ptr)) <= 0;
*pts = *ptl;
ptl -= (int)!x;
pts--;
pts[x] = *ptr;
ptr -= x;
;
*pts = (*(ptl) > *(ptr)) > 0 ? *ptl : *ptr;
;
ptl = array + 4;
ptr = array + 4 + 2;
pts = swap + 4;
x = (*(ptl) > *(ptr)) <= 0;
*pts = *ptl;
ptl += x;
pts[x] = *ptr;
ptr += (int)!x;
pts++;
;
*pts = (*(ptl) > *(ptr)) <= 0 ? *ptl : *ptr;
ptl = array + 4 + 1;
ptr = array + 4 + 3;
pts = swap + 4 + 3;
x = (*(ptl) > *(ptr)) <= 0;
*pts = *ptl;
ptl -= (int)!x;
pts--;
pts[x] = *ptr;
ptr -= x;
;
*pts = (*(ptl) > *(ptr)) > 0 ? *ptl : *ptr;
;
ptl = swap + 0;
ptr = swap + 4;
pts = array;
x = (*(ptl) > *(ptr)) <= 0;
*pts = *ptl;
ptl += x;
pts[x] = *ptr;
ptr += (int)!x;
pts++;
;
x = (*(ptl) > *(ptr)) <= 0;
*pts = *ptl;
ptl += x;
pts[x] = *ptr;
ptr += (int)!x;
pts++;
;
x = (*(ptl) > *(ptr)) <= 0;
*pts = *ptl;
ptl += x;
pts[x] = *ptr;
ptr += (int)!x;
pts++;
;
*pts = (*(ptl) > *(ptr)) <= 0 ? *ptl : *ptr;
ptl = swap + 3;
ptr = swap + 7;
pts = array + 7;
x = (*(ptl) > *(ptr)) <= 0;
*pts = *ptl;
ptl -= (int)!x;
pts--;
pts[x] = *ptr;
ptr -= x;
;
x = (*(ptl) > *(ptr)) <= 0;
*pts = *ptl;
ptl -= (int)!x;
pts--;
pts[x] = *ptr;
ptr -= x;
;
x = (*(ptl) > *(ptr)) <= 0;
*pts = *ptl;
ptl -= (int)!x;
pts--;
pts[x] = *ptr;
ptr -= x;
;
*pts = (*(ptl) > *(ptr)) > 0 ? *ptl : *ptr;
;
}

void tail_merge_uint32(unsigned int * array, unsigned int * swap, size_t swap_size, size_t nmemb, size_t block, CMPFUNCPTR cmp, void * arg);

size_t monobound_binary_first_uint32(unsigned int * array, unsigned int * value, size_t top, CMPFUNCPTR cmp, void * arg)
{
unsigned int * end;
size_t mid;

end = array + top;
while(top > 1)
{
mid = top / 2;
if((*(value) > *(end - mid)) <= 0)
{
end -= mid;
}
top -= mid;
}
if((*(value) > *(end - 1)) <= 0)
{
end--;
}
return (end - array);
}

void parity_swap_four64(long long * array, CMPFUNCPTR cmp, void * arg)
{
long long tmp, * pta = array;
size_t x;

x = cmp(arg, pta, pta + 1) > 0;
tmp = pta[(int)!x];
pta[0] = pta[x];
pta[1] = tmp;
;
pta += 2;
x = cmp(arg, pta, pta + 1) > 0;
tmp = pta[(int)!x];
pta[0] = pta[x];
pta[1] = tmp;
;
pta--;
if(cmp(arg, pta, pta + 1) > 0)
{
tmp = pta[0];
pta[0] = pta[1];
pta[1] = tmp;
pta--;
x = cmp(arg, pta, pta + 1) > 0;
tmp = pta[(int)!x];
pta[0] = pta[x];
pta[1] = tmp;
;
pta += 2;
x = cmp(arg, pta, pta + 1) > 0;
tmp = pta[(int)!x];
pta[0] = pta[x];
pta[1] = tmp;
;
pta--;
x = cmp(arg, pta, pta + 1) > 0;
tmp = pta[(int)!x];
pta[0] = pta[x];
pta[1] = tmp;
;
}
}

void parity_swap_five64(long long * array, CMPFUNCPTR cmp, void * arg)
{
long long tmp, * pta = array;
size_t x, y;

x = cmp(arg, pta, pta + 1) > 0;
tmp = pta[(int)!x];
pta[0] = pta[x];
pta[1] = tmp;
;
pta += 2;
x = cmp(arg, pta, pta + 1) > 0;
tmp = pta[(int)!x];
pta[0] = pta[x];
pta[1] = tmp;
;
pta -= 1;
x = cmp(arg, pta, pta + 1) > 0;
tmp = pta[(int)!x];
pta[0] = pta[x];
pta[1] = tmp;
;
pta += 2;
y = cmp(arg, pta, pta + 1) > 0;
tmp = pta[(int)!y];
pta[0] = pta[y];
pta[1] = tmp;
;
pta = array;
if(x + y)
{
x = cmp(arg, pta, pta + 1) > 0;
tmp = pta[(int)!x];
pta[0] = pta[x];
pta[1] = tmp;
;
pta += 2;
x = cmp(arg, pta, pta + 1) > 0;
tmp = pta[(int)!x];
pta[0] = pta[x];
pta[1] = tmp;
;
pta -= 1;
x = cmp(arg, pta, pta + 1) > 0;
tmp = pta[(int)!x];
pta[0] = pta[x];
pta[1] = tmp;
;
pta += 2;
x = cmp(arg, pta, pta + 1) > 0;
tmp = pta[(int)!x];
pta[0] = pta[x];
pta[1] = tmp;
;
pta = array;
x = cmp(arg, pta, pta + 1) > 0;
tmp = pta[(int)!x];
pta[0] = pta[x];
pta[1] = tmp;
;
pta += 2;
x = cmp(arg, pta, pta + 1) > 0;
tmp = pta[(int)!x];
pta[0] = pta[x];
pta[1] = tmp;
;
pta -= 1;
}
}

void parity_swap_six64(long long * array, long long * swap, CMPFUNCPTR cmp, void * arg)
{
long long tmp, * pta = array, * ptl, * ptr;
size_t x, y;

x = cmp(arg, pta, pta + 1) > 0;
tmp = pta[(int)!x];
pta[0] = pta[x];
pta[1] = tmp;
;
pta++;
x = cmp(arg, pta, pta + 1) > 0;
tmp = pta[(int)!x];
pta[0] = pta[x];
pta[1] = tmp;
;
pta += 3;
x = cmp(arg, pta, pta + 1) > 0;
tmp = pta[(int)!x];
pta[0] = pta[x];
pta[1] = tmp;
;
pta--;
x = cmp(arg, pta, pta + 1) > 0;
tmp = pta[(int)!x];
pta[0] = pta[x];
pta[1] = tmp;
;
pta = array;
if(cmp(arg, pta + 2, pta + 3) <= 0)
{
x = cmp(arg, pta, pta + 1) > 0;
tmp = pta[(int)!x];
pta[0] = pta[x];
pta[1] = tmp;
;
pta += 4;
x = cmp(arg, pta, pta + 1) > 0;
tmp = pta[(int)!x];
pta[0] = pta[x];
pta[1] = tmp;
;
return ;
}
x = cmp(arg, pta, pta + 1) > 0;
y = !x;
swap[0] = pta[x];
swap[1] = pta[y];
swap[2] = pta[2];
pta += 4;
x = cmp(arg, pta, pta + 1) > 0;
y = !x;
swap[4] = pta[x];
swap[5] = pta[y];
swap[3] = pta[-1];
pta = array;
ptl = swap;
ptr = swap + 3;
x = cmp(arg, ptl, ptr) <= 0;
*pta = *ptl;
ptl += x;
pta[x] = *ptr;
ptr += (int)!x;
pta++;
;
x = cmp(arg, ptl, ptr) <= 0;
*pta = *ptl;
ptl += x;
pta[x] = *ptr;
ptr += (int)!x;
pta++;
;
x = cmp(arg, ptl, ptr) <= 0;
*pta = *ptl;
ptl += x;
pta[x] = *ptr;
ptr += (int)!x;
pta++;
;
pta = array + 5;
ptl = swap + 2;
ptr = swap + 5;
y = cmp(arg, ptl, ptr) <= 0;
*pta = *ptl;
ptl -= (int)!y;
pta--;
pta[y] = *ptr;
ptr -= y;
;
y = cmp(arg, ptl, ptr) <= 0;
*pta = *ptl;
ptl -= (int)!y;
pta--;
pta[y] = *ptr;
ptr -= y;
;
*pta = cmp(arg, ptl, ptr) > 0 ? *ptl : *ptr;
}

void parity_swap_seven64(long long * array, long long * swap, CMPFUNCPTR cmp, void * arg)
{
long long tmp, * pta = array, * ptl, * ptr;
size_t x, y;

x = cmp(arg, pta, pta + 1) > 0;
tmp = pta[(int)!x];
pta[0] = pta[x];
pta[1] = tmp;
;
pta += 2;
x = cmp(arg, pta, pta + 1) > 0;
tmp = pta[(int)!x];
pta[0] = pta[x];
pta[1] = tmp;
;
pta += 2;
x = cmp(arg, pta, pta + 1) > 0;
tmp = pta[(int)!x];
pta[0] = pta[x];
pta[1] = tmp;
;
pta -= 3;
y = cmp(arg, pta, pta + 1) > 0;
tmp = pta[(int)!y];
pta[0] = pta[y];
pta[1] = tmp;
;
pta += 2;
x = cmp(arg, pta, pta + 1) > 0;
tmp = pta[(int)!x];
pta[0] = pta[x];
pta[1] = tmp;
;
pta += 2;
y += x;
x = cmp(arg, pta, pta + 1) > 0;
tmp = pta[(int)!x];
pta[0] = pta[x];
pta[1] = tmp;
;
pta -= 1;
y += x;
if(y == 0)
return ;
x = cmp(arg, pta, pta + 1) > 0;
tmp = pta[(int)!x];
pta[0] = pta[x];
pta[1] = tmp;
;
pta = array;
x = cmp(arg, pta, pta + 1) > 0;
swap[0] = pta[x];
swap[1] = pta[!x];
swap[2] = pta[2];
pta += 3;
x = cmp(arg, pta, pta + 1) > 0;
swap[3] = pta[x];
swap[4] = pta[!x];
pta += 2;
x = cmp(arg, pta, pta + 1) > 0;
swap[5] = pta[x];
swap[6] = pta[!x];
pta = array;
ptl = swap;
ptr = swap + 3;
x = cmp(arg, ptl, ptr) <= 0;
*pta = *ptl;
ptl += x;
pta[x] = *ptr;
ptr += (int)!x;
pta++;
;
x = cmp(arg, ptl, ptr) <= 0;
*pta = *ptl;
ptl += x;
pta[x] = *ptr;
ptr += (int)!x;
pta++;
;
x = cmp(arg, ptl, ptr) <= 0;
*pta = *ptl;
ptl += x;
pta[x] = *ptr;
ptr += (int)!x;
pta++;
;
pta = array + 6;
ptl = swap + 2;
ptr = swap + 6;
y = cmp(arg, ptl, ptr) <= 0;
*pta = *ptl;
ptl -= (int)!y;
pta--;
pta[y] = *ptr;
ptr -= y;
;
y = cmp(arg, ptl, ptr) <= 0;
*pta = *ptl;
ptl -= (int)!y;
pta--;
pta[y] = *ptr;
ptr -= y;
;
y = cmp(arg, ptl, ptr) <= 0;
*pta = *ptl;
ptl -= (int)!y;
pta--;
pta[y] = *ptr;
ptr -= y;
;
*pta = cmp(arg, ptl, ptr) > 0 ? *ptl : *ptr;
}

void parity_merge64(long long * dest, long long * from, size_t left, size_t right, CMPFUNCPTR cmp, void * arg)
{
long long * ptl, * ptr, * tpl, * tpr, * tpd, * ptd;
size_t x, y;

ptl = from;
ptr = from + left;
ptd = dest;
tpl = ptr - 1;
tpr = tpl + right;
tpd = dest + left + right - 1;
if(left < right)
{
*ptd++ = cmp(arg, ptl, ptr) <= 0 ? *ptl++ : *ptr++;
}
*ptd++ = cmp(arg, ptl, ptr) <= 0 ? *ptl++ : *ptr++;
if(left > 262144)
{
while(--left)
{
*ptd++ = cmp(arg, ptl, ptr) <= 0 ? *ptl++ : *ptr++;
*tpd-- = cmp(arg, tpl, tpr) > 0 ? *tpl-- : *tpr--;
}
}
else
{
while(--left)
{
x = cmp(arg, ptl, ptr) <= 0;
*ptd = *ptl;
ptl += x;
ptd[x] = *ptr;
ptr += (int)!x;
ptd++;
;
y = cmp(arg, tpl, tpr) <= 0;
*tpd = *tpl;
tpl -= (int)!y;
tpd--;
tpd[y] = *tpr;
tpr -= y;
;
}
}
*tpd = cmp(arg, tpl, tpr) > 0 ? *tpl : *tpr;
}

void quad_reversal64(long long * pta, long long * ptz)
{
long long * ptb, * pty, tmp1, tmp2;
size_t loop = (ptz - pta) / 2;

ptb = pta + loop;
pty = ptz - loop;
if(loop % 2 == 0)
{
tmp2 = *ptb;
*ptb-- = *pty;
*pty++ = tmp2;
loop--;
}
loop /= 2;
do
{
tmp1 = *pta;
*pta++ = *ptz;
*ptz-- = tmp1;
tmp2 = *ptb;
*ptb-- = *pty;
*pty++ = tmp2;
}while(loop--);
}

void quad_swap_merge64(long long * array, long long * swap, CMPFUNCPTR cmp, void * arg)
{
long long * pts, * ptl, * ptr;
size_t x;

ptl = array + 0;
ptr = array + 0 + 2;
pts = swap + 0;
x = cmp(arg, ptl, ptr) <= 0;
*pts = *ptl;
ptl += x;
pts[x] = *ptr;
ptr += (int)!x;
pts++;
;
*pts = cmp(arg, ptl, ptr) <= 0 ? *ptl : *ptr;
ptl = array + 0 + 1;
ptr = array + 0 + 3;
pts = swap + 0 + 3;
x = cmp(arg, ptl, ptr) <= 0;
*pts = *ptl;
ptl -= (int)!x;
pts--;
pts[x] = *ptr;
ptr -= x;
;
*pts = cmp(arg, ptl, ptr) > 0 ? *ptl : *ptr;
;
ptl = array + 4;
ptr = array + 4 + 2;
pts = swap + 4;
x = cmp(arg, ptl, ptr) <= 0;
*pts = *ptl;
ptl += x;
pts[x] = *ptr;
ptr += (int)!x;
pts++;
;
*pts = cmp(arg, ptl, ptr) <= 0 ? *ptl : *ptr;
ptl = array + 4 + 1;
ptr = array + 4 + 3;
pts = swap + 4 + 3;
x = cmp(arg, ptl, ptr) <= 0;
*pts = *ptl;
ptl -= (int)!x;
pts--;
pts[x] = *ptr;
ptr -= x;
;
*pts = cmp(arg, ptl, ptr) > 0 ? *ptl : *ptr;
;
ptl = swap + 0;
ptr = swap + 4;
pts = array;
x = cmp(arg, ptl, ptr) <= 0;
*pts = *ptl;
ptl += x;
pts[x] = *ptr;
ptr += (int)!x;
pts++;
;
x = cmp(arg, ptl, ptr) <= 0;
*pts = *ptl;
ptl += x;
pts[x] = *ptr;
ptr += (int)!x;
pts++;
;
x = cmp(arg, ptl, ptr) <= 0;
*pts = *ptl;
ptl += x;
pts[x] = *ptr;
ptr += (int)!x;
pts++;
;
*pts = cmp(arg, ptl, ptr) <= 0 ? *ptl : *ptr;
ptl = swap + 3;
ptr = swap + 7;
pts = array + 7;
x = cmp(arg, ptl, ptr) <= 0;
*pts = *ptl;
ptl -= (int)!x;
pts--;
pts[x] = *ptr;
ptr -= x;
;
x = cmp(arg, ptl, ptr) <= 0;
*pts = *ptl;
ptl -= (int)!x;
pts--;
pts[x] = *ptr;
ptr -= x;
;
x = cmp(arg, ptl, ptr) <= 0;
*pts = *ptl;
ptl -= (int)!x;
pts--;
pts[x] = *ptr;
ptr -= x;
;
*pts = cmp(arg, ptl, ptr) > 0 ? *ptl : *ptr;
;
}

void tail_merge64(long long * array, long long * swap, size_t swap_size, size_t nmemb, size_t block, CMPFUNCPTR cmp, void * arg);

size_t monobound_binary_first64(long long * array, long long * value, size_t top, CMPFUNCPTR cmp, void * arg)
{
long long * end;
size_t mid;

end = array + top;
while(top > 1)
{
mid = top / 2;
if(cmp(arg, value, end - mid) <= 0)
{
end -= mid;
}
top -= mid;
}
if(cmp(arg, value, end - 1) <= 0)
{
end--;
}
return (end - array);
}

void parity_swap_four_int64(long long * array, CMPFUNCPTR cmp, void * arg)
{
long long tmp, * pta = array;
size_t x;

x = (*(pta) > *(pta + 1)) > 0;
tmp = pta[(int)!x];
pta[0] = pta[x];
pta[1] = tmp;
;
pta += 2;
x = (*(pta) > *(pta + 1)) > 0;
tmp = pta[(int)!x];
pta[0] = pta[x];
pta[1] = tmp;
;
pta--;
if((*(pta) > *(pta + 1)) > 0)
{
tmp = pta[0];
pta[0] = pta[1];
pta[1] = tmp;
pta--;
x = (*(pta) > *(pta + 1)) > 0;
tmp = pta[(int)!x];
pta[0] = pta[x];
pta[1] = tmp;
;
pta += 2;
x = (*(pta) > *(pta + 1)) > 0;
tmp = pta[(int)!x];
pta[0] = pta[x];
pta[1] = tmp;
;
pta--;
x = (*(pta) > *(pta + 1)) > 0;
tmp = pta[(int)!x];
pta[0] = pta[x];
pta[1] = tmp;
;
}
}

void parity_swap_five_int64(long long * array, CMPFUNCPTR cmp, void * arg)
{
long long tmp, * pta = array;
size_t x, y;

x = (*(pta) > *(pta + 1)) > 0;
tmp = pta[(int)!x];
pta[0] = pta[x];
pta[1] = tmp;
;
pta += 2;
x = (*(pta) > *(pta + 1)) > 0;
tmp = pta[(int)!x];
pta[0] = pta[x];
pta[1] = tmp;
;
pta -= 1;
x = (*(pta) > *(pta + 1)) > 0;
tmp = pta[(int)!x];
pta[0] = pta[x];
pta[1] = tmp;
;
pta += 2;
y = (*(pta) > *(pta + 1)) > 0;
tmp = pta[(int)!y];
pta[0] = pta[y];
pta[1] = tmp;
;
pta = array;
if(x + y)
{
x = (*(pta) > *(pta + 1)) > 0;
tmp = pta[(int)!x];
pta[0] = pta[x];
pta[1] = tmp;
;
pta += 2;
x = (*(pta) > *(pta + 1)) > 0;
tmp = pta[(int)!x];
pta[0] = pta[x];
pta[1] = tmp;
;
pta -= 1;
x = (*(pta) > *(pta + 1)) > 0;
tmp = pta[(int)!x];
pta[0] = pta[x];
pta[1] = tmp;
;
pta += 2;
x = (*(pta) > *(pta + 1)) > 0;
tmp = pta[(int)!x];
pta[0] = pta[x];
pta[1] = tmp;
;
pta = array;
x = (*(pta) > *(pta + 1)) > 0;
tmp = pta[(int)!x];
pta[0] = pta[x];
pta[1] = tmp;
;
pta += 2;
x = (*(pta) > *(pta + 1)) > 0;
tmp = pta[(int)!x];
pta[0] = pta[x];
pta[1] = tmp;
;
pta -= 1;
}
}

void parity_swap_six_int64(long long * array, long long * swap, CMPFUNCPTR cmp, void * arg)
{
long long tmp, * pta = array, * ptl, * ptr;
size_t x, y;

x = (*(pta) > *(pta + 1)) > 0;
tmp = pta[(int)!x];
pta[0] = pta[x];
pta[1] = tmp;
;
pta++;
x = (*(pta) > *(pta + 1)) > 0;
tmp = pta[(int)!x];
pta[0] = pta[x];
pta[1] = tmp;
;
pta += 3;
x = (*(pta) > *(pta + 1)) > 0;
tmp = pta[(int)!x];
pta[0] = pta[x];
pta[1] = tmp;
;
pta--;
x = (*(pta) > *(pta + 1)) > 0;
tmp = pta[(int)!x];
pta[0] = pta[x];
pta[1] = tmp;
;
pta = array;
if((*(pta + 2) > *(pta + 3)) <= 0)
{
x = (*(pta) > *(pta + 1)) > 0;
tmp = pta[(int)!x];
pta[0] = pta[x];
pta[1] = tmp;
;
pta += 4;
x = (*(pta) > *(pta + 1)) > 0;
tmp = pta[(int)!x];
pta[0] = pta[x];
pta[1] = tmp;
;
return ;
}
x = (*(pta) > *(pta + 1)) > 0;
y = !x;
swap[0] = pta[x];
swap[1] = pta[y];
swap[2] = pta[2];
pta += 4;
x = (*(pta) > *(pta + 1)) > 0;
y = !x;
swap[4] = pta[x];
swap[5] = pta[y];
swap[3] = pta[-1];
pta = array;
ptl = swap;
ptr = swap + 3;
x = (*(ptl) > *(ptr)) <= 0;
*pta = *ptl;
ptl += x;
pta[x] = *ptr;
ptr += (int)!x;
pta++;
;
x = (*(ptl) > *(ptr)) <= 0;
*pta = *ptl;
ptl += x;
pta[x] = *ptr;
ptr += (int)!x;
pta++;
;
x = (*(ptl) > *(ptr)) <= 0;
*pta = *ptl;
ptl += x;
pta[x] = *ptr;
ptr += (int)!x;
pta++;
;
pta = array + 5;
ptl = swap + 2;
ptr = swap + 5;
y = (*(ptl) > *(ptr)) <= 0;
*pta = *ptl;
ptl -= (int)!y;
pta--;
pta[y] = *ptr;
ptr -= y;
;
y = (*(ptl) > *(ptr)) <= 0;
*pta = *ptl;
ptl -= (int)!y;
pta--;
pta[y] = *ptr;
ptr -= y;
;
*pta = (*(ptl) > *(ptr)) > 0 ? *ptl : *ptr;
}

void parity_swap_seven_int64(long long * array, long long * swap, CMPFUNCPTR cmp, void * arg)
{
long long tmp, * pta = array, * ptl, * ptr;
size_t x, y;

x = (*(pta) > *(pta + 1)) > 0;
tmp = pta[(int)!x];
pta[0] = pta[x];
pta[1] = tmp;
;
pta += 2;
x = (*(pta) > *(pta + 1)) > 0;
tmp = pta[(int)!x];
pta[0] = pta[x];
pta[1] = tmp;
;
pta += 2;
x = (*(pta) > *(pta + 1)) > 0;
tmp = pta[(int)!x];
pta[0] = pta[x];
pta[1] = tmp;
;
pta -= 3;
y = (*(pta) > *(pta + 1)) > 0;
tmp = pta[(int)!y];
pta[0] = pta[y];
pta[1] = tmp;
;
pta += 2;
x = (*(pta) > *(pta + 1)) > 0;
tmp = pta[(int)!x];
pta[0] = pta[x];
pta[1] = tmp;
;
pta += 2;
y += x;
x = (*(pta) > *(pta + 1)) > 0;
tmp = pta[(int)!x];
pta[0] = pta[x];
pta[1] = tmp;
;
pta -= 1;
y += x;
if(y == 0)
return ;
x = (*(pta) > *(pta + 1)) > 0;
tmp = pta[(int)!x];
pta[0] = pta[x];
pta[1] = tmp;
;
pta = array;
x = (*(pta) > *(pta + 1)) > 0;
swap[0] = pta[x];
swap[1] = pta[!x];
swap[2] = pta[2];
pta += 3;
x = (*(pta) > *(pta + 1)) > 0;
swap[3] = pta[x];
swap[4] = pta[!x];
pta += 2;
x = (*(pta) > *(pta + 1)) > 0;
swap[5] = pta[x];
swap[6] = pta[!x];
pta = array;
ptl = swap;
ptr = swap + 3;
x = (*(ptl) > *(ptr)) <= 0;
*pta = *ptl;
ptl += x;
pta[x] = *ptr;
ptr += (int)!x;
pta++;
;
x = (*(ptl) > *(ptr)) <= 0;
*pta = *ptl;
ptl += x;
pta[x] = *ptr;
ptr += (int)!x;
pta++;
;
x = (*(ptl) > *(ptr)) <= 0;
*pta = *ptl;
ptl += x;
pta[x] = *ptr;
ptr += (int)!x;
pta++;
;
pta = array + 6;
ptl = swap + 2;
ptr = swap + 6;
y = (*(ptl) > *(ptr)) <= 0;
*pta = *ptl;
ptl -= (int)!y;
pta--;
pta[y] = *ptr;
ptr -= y;
;
y = (*(ptl) > *(ptr)) <= 0;
*pta = *ptl;
ptl -= (int)!y;
pta--;
pta[y] = *ptr;
ptr -= y;
;
y = (*(ptl) > *(ptr)) <= 0;
*pta = *ptl;
ptl -= (int)!y;
pta--;
pta[y] = *ptr;
ptr -= y;
;
*pta = (*(ptl) > *(ptr)) > 0 ? *ptl : *ptr;
}

void parity_merge_int64(long long * dest, long long * from, size_t left, size_t right, CMPFUNCPTR cmp, void * arg)
{
long long * ptl, * ptr, * tpl, * tpr, * tpd, * ptd;
size_t x, y;

ptl = from;
ptr = from + left;
ptd = dest;
tpl = ptr - 1;
tpr = tpl + right;
tpd = dest + left + right - 1;
if(left < right)
{
*ptd++ = (*(ptl) > *(ptr)) <= 0 ? *ptl++ : *ptr++;
}
*ptd++ = (*(ptl) > *(ptr)) <= 0 ? *ptl++ : *ptr++;
{
while(--left)
{
x = (*(ptl) > *(ptr)) <= 0;
*ptd = *ptl;
ptl += x;
ptd[x] = *ptr;
ptr += (int)!x;
ptd++;
;
y = (*(tpl) > *(tpr)) <= 0;
*tpd = *tpl;
tpl -= (int)!y;
tpd--;
tpd[y] = *tpr;
tpr -= y;
;
}
}
*tpd = (*(tpl) > *(tpr)) > 0 ? *tpl : *tpr;
}

void quad_reversal_int64(long long * pta, long long * ptz)
{
long long * ptb, * pty, tmp1, tmp2;
size_t loop = (ptz - pta) / 2;

ptb = pta + loop;
pty = ptz - loop;
if(loop % 2 == 0)
{
tmp2 = *ptb;
*ptb-- = *pty;
*pty++ = tmp2;
loop--;
}
loop /= 2;
do
{
tmp1 = *pta;
*pta++ = *ptz;
*ptz-- = tmp1;
tmp2 = *ptb;
*ptb-- = *pty;
*pty++ = tmp2;
}while(loop--);
}

void quad_swap_merge_int64(long long * array, long long * swap, CMPFUNCPTR cmp, void * arg)
{
long long * pts, * ptl, * ptr;
size_t x;

ptl = array + 0;
ptr = array + 0 + 2;
pts = swap + 0;
x = (*(ptl) > *(ptr)) <= 0;
*pts = *ptl;
ptl += x;
pts[x] = *ptr;
ptr += (int)!x;
pts++;
;
*pts = (*(ptl) > *(ptr)) <= 0 ? *ptl : *ptr;
ptl = array + 0 + 1;
ptr = array + 0 + 3;
pts = swap + 0 + 3;
x = (*(ptl) > *(ptr)) <= 0;
*pts = *ptl;
ptl -= (int)!x;
pts--;
pts[x] = *ptr;
ptr -= x;
;
*pts = (*(ptl) > *(ptr)) > 0 ? *ptl : *ptr;
;
ptl = array + 4;
ptr = array + 4 + 2;
pts = swap + 4;
x = (*(ptl) > *(ptr)) <= 0;
*pts = *ptl;
ptl += x;
pts[x] = *ptr;
ptr += (int)!x;
pts++;
;
*pts = (*(ptl) > *(ptr)) <= 0 ? *ptl : *ptr;
ptl = array + 4 + 1;
ptr = array + 4 + 3;
pts = swap + 4 + 3;
x = (*(ptl) > *(ptr)) <= 0;
*pts = *ptl;
ptl -= (int)!x;
pts--;
pts[x] = *ptr;
ptr -= x;
;
*pts = (*(ptl) > *(ptr)) > 0 ? *ptl : *ptr;
;
ptl = swap + 0;
ptr = swap + 4;
pts = array;
x = (*(ptl) > *(ptr)) <= 0;
*pts = *ptl;
ptl += x;
pts[x] = *ptr;
ptr += (int)!x;
pts++;
;
x = (*(ptl) > *(ptr)) <= 0;
*pts = *ptl;
ptl += x;
pts[x] = *ptr;
ptr += (int)!x;
pts++;
;
x = (*(ptl) > *(ptr)) <= 0;
*pts = *ptl;
ptl += x;
pts[x] = *ptr;
ptr += (int)!x;
pts++;
;
*pts = (*(ptl) > *(ptr)) <= 0 ? *ptl : *ptr;
ptl = swap + 3;
ptr = swap + 7;
pts = array + 7;
x = (*(ptl) > *(ptr)) <= 0;
*pts = *ptl;
ptl -= (int)!x;
pts--;
pts[x] = *ptr;
ptr -= x;
;
x = (*(ptl) > *(ptr)) <= 0;
*pts = *ptl;
ptl -= (int)!x;
pts--;
pts[x] = *ptr;
ptr -= x;
;
x = (*(ptl) > *(ptr)) <= 0;
*pts = *ptl;
ptl -= (int)!x;
pts--;
pts[x] = *ptr;
ptr -= x;
;
*pts = (*(ptl) > *(ptr)) > 0 ? *ptl : *ptr;
;
}

void tail_merge_int64(long long * array, long long * swap, size_t swap_size, size_t nmemb, size_t block, CMPFUNCPTR cmp, void * arg);

size_t monobound_binary_first_int64(long long * array, long long * value, size_t top, CMPFUNCPTR cmp, void * arg)
{
long long * end;
size_t mid;

end = array + top;
while(top > 1)
{
mid = top / 2;
if((*(value) > *(end - mid)) <= 0)
{
end -= mid;
}
top -= mid;
}
if((*(value) > *(end - 1)) <= 0)
{
end--;
}
return (end - array);
}

void parity_swap_four_uint64(unsigned long long * array, CMPFUNCPTR cmp, void * arg)
{
unsigned long long tmp, * pta = array;
size_t x;

x = (*(pta) > *(pta + 1)) > 0;
tmp = pta[(int)!x];
pta[0] = pta[x];
pta[1] = tmp;
;
pta += 2;
x = (*(pta) > *(pta + 1)) > 0;
tmp = pta[(int)!x];
pta[0] = pta[x];
pta[1] = tmp;
;
pta--;
if((*(pta) > *(pta + 1)) > 0)
{
tmp = pta[0];
pta[0] = pta[1];
pta[1] = tmp;
pta--;
x = (*(pta) > *(pta + 1)) > 0;
tmp = pta[(int)!x];
pta[0] = pta[x];
pta[1] = tmp;
;
pta += 2;
x = (*(pta) > *(pta + 1)) > 0;
tmp = pta[(int)!x];
pta[0] = pta[x];
pta[1] = tmp;
;
pta--;
x = (*(pta) > *(pta + 1)) > 0;
tmp = pta[(int)!x];
pta[0] = pta[x];
pta[1] = tmp;
;
}
}

void parity_swap_five_uint64(unsigned long long * array, CMPFUNCPTR cmp, void * arg)
{
unsigned long long tmp, * pta = array;
size_t x, y;

x = (*(pta) > *(pta + 1)) > 0;
tmp = pta[(int)!x];
pta[0] = pta[x];
pta[1] = tmp;
;
pta += 2;
x = (*(pta) > *(pta + 1)) > 0;
tmp = pta[(int)!x];
pta[0] = pta[x];
pta[1] = tmp;
;
pta -= 1;
x = (*(pta) > *(pta + 1)) > 0;
tmp = pta[(int)!x];
pta[0] = pta[x];
pta[1] = tmp;
;
pta += 2;
y = (*(pta) > *(pta + 1)) > 0;
tmp = pta[(int)!y];
pta[0] = pta[y];
pta[1] = tmp;
;
pta = array;
if(x + y)
{
x = (*(pta) > *(pta + 1)) > 0;
tmp = pta[(int)!x];
pta[0] = pta[x];
pta[1] = tmp;
;
pta += 2;
x = (*(pta) > *(pta + 1)) > 0;
tmp = pta[(int)!x];
pta[0] = pta[x];
pta[1] = tmp;
;
pta -= 1;
x = (*(pta) > *(pta + 1)) > 0;
tmp = pta[(int)!x];
pta[0] = pta[x];
pta[1] = tmp;
;
pta += 2;
x = (*(pta) > *(pta + 1)) > 0;
tmp = pta[(int)!x];
pta[0] = pta[x];
pta[1] = tmp;
;
pta = array;
x = (*(pta) > *(pta + 1)) > 0;
tmp = pta[(int)!x];
pta[0] = pta[x];
pta[1] = tmp;
;
pta += 2;
x = (*(pta) > *(pta + 1)) > 0;
tmp = pta[(int)!x];
pta[0] = pta[x];
pta[1] = tmp;
;
pta -= 1;
}
}

void parity_swap_six_uint64(unsigned long long * array, unsigned long long * swap, CMPFUNCPTR cmp, void * arg)
{
unsigned long long tmp, * pta = array, * ptl, * ptr;
size_t x, y;

x = (*(pta) > *(pta + 1)) > 0;
tmp = pta[(int)!x];
pta[0] = pta[x];
pta[1] = tmp;
;
pta++;
x = (*(pta) > *(pta + 1)) > 0;
tmp = pta[(int)!x];
pta[0] = pta[x];
pta[1] = tmp;
;
pta += 3;
x = (*(pta) > *(pta + 1)) > 0;
tmp = pta[(int)!x];
pta[0] = pta[x];
pta[1] = tmp;
;
pta--;
x = (*(pta) > *(pta + 1)) > 0;
tmp = pta[(int)!x];
pta[0] = pta[x];
pta[1] = tmp;
;
pta = array;
if((*(pta + 2) > *(pta + 3)) <= 0)
{
x = (*(pta) > *(pta + 1)) > 0;
tmp = pta[(int)!x];
pta[0] = pta[x];
pta[1] = tmp;
;
pta += 4;
x = (*(pta) > *(pta + 1)) > 0;
tmp = pta[(int)!x];
pta[0] = pta[x];
pta[1] = tmp;
;
return ;
}
x = (*(pta) > *(pta + 1)) > 0;
y = !x;
swap[0] = pta[x];
swap[1] = pta[y];
swap[2] = pta[2];
pta += 4;
x = (*(pta) > *(pta + 1)) > 0;
y = !x;
swap[4] = pta[x];
swap[5] = pta[y];
swap[3] = pta[-1];
pta = array;
ptl = swap;
ptr = swap + 3;
x = (*(ptl) > *(ptr)) <= 0;
*pta = *ptl;
ptl += x;
pta[x] = *ptr;
ptr += (int)!x;
pta++;
;
x = (*(ptl) > *(ptr)) <= 0;
*pta = *ptl;
ptl += x;
pta[x] = *ptr;
ptr += (int)!x;
pta++;
;
x = (*(ptl) > *(ptr)) <= 0;
*pta = *ptl;
ptl += x;
pta[x] = *ptr;
ptr += (int)!x;
pta++;
;
pta = array + 5;
ptl = swap + 2;
ptr = swap + 5;
y = (*(ptl) > *(ptr)) <= 0;
*pta = *ptl;
ptl -= (int)!y;
pta--;
pta[y] = *ptr;
ptr -= y;
;
y = (*(ptl) > *(ptr)) <= 0;
*pta = *ptl;
ptl -= (int)!y;
pta--;
pta[y] = *ptr;
ptr -= y;
;
*pta = (*(ptl) > *(ptr)) > 0 ? *ptl : *ptr;
}

void parity_swap_seven_uint64(unsigned long long * array, unsigned long long * swap, CMPFUNCPTR cmp, void * arg)
{
unsigned long long tmp, * pta = array, * ptl, * ptr;
size_t x, y;

x = (*(pta) > *(pta + 1)) > 0;
tmp = pta[(int)!x];
pta[0] = pta[x];
pta[1] = tmp;
;
pta += 2;
x = (*(pta) > *(pta + 1)) > 0;
tmp = pta[(int)!x];
pta[0] = pta[x];
pta[1] = tmp;
;
pta += 2;
x = (*(pta) > *(pta + 1)) > 0;
tmp = pta[(int)!x];
pta[0] = pta[x];
pta[1] = tmp;
;
pta -= 3;
y = (*(pta) > *(pta + 1)) > 0;
tmp = pta[(int)!y];
pta[0] = pta[y];
pta[1] = tmp;
;
pta += 2;
x = (*(pta) > *(pta + 1)) > 0;
tmp = pta[(int)!x];
pta[0] = pta[x];
pta[1] = tmp;
;
pta += 2;
y += x;
x = (*(pta) > *(pta + 1)) > 0;
tmp = pta[(int)!x];
pta[0] = pta[x];
pta[1] = tmp;
;
pta -= 1;
y += x;
if(y == 0)
return ;
x = (*(pta) > *(pta + 1)) > 0;
tmp = pta[(int)!x];
pta[0] = pta[x];
pta[1] = tmp;
;
pta = array;
x = (*(pta) > *(pta + 1)) > 0;
swap[0] = pta[x];
swap[1] = pta[!x];
swap[2] = pta[2];
pta += 3;
x = (*(pta) > *(pta + 1)) > 0;
swap[3] = pta[x];
swap[4] = pta[!x];
pta += 2;
x = (*(pta) > *(pta + 1)) > 0;
swap[5] = pta[x];
swap[6] = pta[!x];
pta = array;
ptl = swap;
ptr = swap + 3;
x = (*(ptl) > *(ptr)) <= 0;
*pta = *ptl;
ptl += x;
pta[x] = *ptr;
ptr += (int)!x;
pta++;
;
x = (*(ptl) > *(ptr)) <= 0;
*pta = *ptl;
ptl += x;
pta[x] = *ptr;
ptr += (int)!x;
pta++;
;
x = (*(ptl) > *(ptr)) <= 0;
*pta = *ptl;
ptl += x;
pta[x] = *ptr;
ptr += (int)!x;
pta++;
;
pta = array + 6;
ptl = swap + 2;
ptr = swap + 6;
y = (*(ptl) > *(ptr)) <= 0;
*pta = *ptl;
ptl -= (int)!y;
pta--;
pta[y] = *ptr;
ptr -= y;
;
y = (*(ptl) > *(ptr)) <= 0;
*pta = *ptl;
ptl -= (int)!y;
pta--;
pta[y] = *ptr;
ptr -= y;
;
y = (*(ptl) > *(ptr)) <= 0;
*pta = *ptl;
ptl -= (int)!y;
pta--;
pta[y] = *ptr;
ptr -= y;
;
*pta = (*(ptl) > *(ptr)) > 0 ? *ptl : *ptr;
}

void parity_merge_uint64(unsigned long long * dest, unsigned long long * from, size_t left, size_t right, CMPFUNCPTR cmp, void * arg)
{
unsigned long long * ptl, * ptr, * tpl, * tpr, * tpd, * ptd;
size_t x, y;

ptl = from;
ptr = from + left;
ptd = dest;
tpl = ptr - 1;
tpr = tpl + right;
tpd = dest + left + right - 1;
if(left < right)
{
*ptd++ = (*(ptl) > *(ptr)) <= 0 ? *ptl++ : *ptr++;
}
*ptd++ = (*(ptl) > *(ptr)) <= 0 ? *ptl++ : *ptr++;
{
while(--left)
{
x = (*(ptl) > *(ptr)) <= 0;
*ptd = *ptl;
ptl += x;
ptd[x] = *ptr;
ptr += (int)!x;
ptd++;
;
y = (*(tpl) > *(tpr)) <= 0;
*tpd = *tpl;
tpl -= (int)!y;
tpd--;
tpd[y] = *tpr;
tpr -= y;
;
}
}
*tpd = (*(tpl) > *(tpr)) > 0 ? *tpl : *tpr;
}

void quad_reversal_uint64(unsigned long long * pta, unsigned long long * ptz)
{
unsigned long long * ptb, * pty, tmp1, tmp2;
size_t loop = (ptz - pta) / 2;

ptb = pta + loop;
pty = ptz - loop;
if(loop % 2 == 0)
{
tmp2 = *ptb;
*ptb-- = *pty;
*pty++ = tmp2;
loop--;
}
loop /= 2;
do
{
tmp1 = *pta;
*pta++ = *ptz;
*ptz-- = tmp1;
tmp2 = *ptb;
*ptb-- = *pty;
*pty++ = tmp2;
}while(loop--);
}

void quad_swap_merge_uint64(unsigned long long * array, unsigned long long * swap, CMPFUNCPTR cmp, void * arg)
{
unsigned long long * pts, * ptl, * ptr;
size_t x;

ptl = array + 0;
ptr = array + 0 + 2;
pts = swap + 0;
x = (*(ptl) > *(ptr)) <= 0;
*pts = *ptl;
ptl += x;
pts[x] = *ptr;
ptr += (int)!x;
pts++;
;
*pts = (*(ptl) > *(ptr)) <= 0 ? *ptl : *ptr;
ptl = array + 0 + 1;
ptr = array + 0 + 3;
pts = swap + 0 + 3;
x = (*(ptl) > *(ptr)) <= 0;
*pts = *ptl;
ptl -= (int)!x;
pts--;
pts[x] = *ptr;
ptr -= x;
;
*pts = (*(ptl) > *(ptr)) > 0 ? *ptl : *ptr;
;
ptl = array + 4;
ptr = array + 4 + 2;
pts = swap + 4;
x = (*(ptl) > *(ptr)) <= 0;
*pts = *ptl;
ptl += x;
pts[x] = *ptr;
ptr += (int)!x;
pts++;
;
*pts = (*(ptl) > *(ptr)) <= 0 ? *ptl : *ptr;
ptl = array + 4 + 1;
ptr = array + 4 + 3;
pts = swap + 4 + 3;
x = (*(ptl) > *(ptr)) <= 0;
*pts = *ptl;
ptl -= (int)!x;
pts--;
pts[x] = *ptr;
ptr -= x;
;
*pts = (*(ptl) > *(ptr)) > 0 ? *ptl : *ptr;
;
ptl = swap + 0;
ptr = swap + 4;
pts = array;
x = (*(ptl) > *(ptr)) <= 0;
*pts = *ptl;
ptl += x;
pts[x] = *ptr;
ptr += (int)!x;
pts++;
;
x = (*(ptl) > *(ptr)) <= 0;
*pts = *ptl;
ptl += x;
pts[x] = *ptr;
ptr += (int)!x;
pts++;
;
x = (*(ptl) > *(ptr)) <= 0;
*pts = *ptl;
ptl += x;
pts[x] = *ptr;
ptr += (int)!x;
pts++;
;
*pts = (*(ptl) > *(ptr)) <= 0 ? *ptl : *ptr;
ptl = swap + 3;
ptr = swap + 7;
pts = array + 7;
x = (*(ptl) > *(ptr)) <= 0;
*pts = *ptl;
ptl -= (int)!x;
pts--;
pts[x] = *ptr;
ptr -= x;
;
x = (*(ptl) > *(ptr)) <= 0;
*pts = *ptl;
ptl -= (int)!x;
pts--;
pts[x] = *ptr;
ptr -= x;
;
x = (*(ptl) > *(ptr)) <= 0;
*pts = *ptl;
ptl -= (int)!x;
pts--;
pts[x] = *ptr;
ptr -= x;
;
*pts = (*(ptl) > *(ptr)) > 0 ? *ptl : *ptr;
;
}

void tail_merge_uint64(unsigned long long * array, unsigned long long * swap, size_t swap_size, size_t nmemb, size_t block, CMPFUNCPTR cmp, void * arg);

size_t monobound_binary_first_uint64(unsigned long long * array, unsigned long long * value, size_t top, CMPFUNCPTR cmp, void * arg)
{
unsigned long long * end;
size_t mid;

end = array + top;
while(top > 1)
{
mid = top / 2;
if((*(value) > *(end - mid)) <= 0)
{
end -= mid;
}
top -= mid;
}
if((*(value) > *(end - 1)) <= 0)
{
end--;
}
return (end - array);
}

void parity_swap_four8(char * array, CMPFUNCPTR cmp, void * arg)
{
char tmp, * pta = array;
size_t x;

x = cmp(arg, pta, pta + 1) > 0;
tmp = pta[(int)!x];
pta[0] = pta[x];
pta[1] = tmp;
;
pta += 2;
x = cmp(arg, pta, pta + 1) > 0;
tmp = pta[(int)!x];
pta[0] = pta[x];
pta[1] = tmp;
;
pta--;
if(cmp(arg, pta, pta + 1) > 0)
{
tmp = pta[0];
pta[0] = pta[1];
pta[1] = tmp;
pta--;
x = cmp(arg, pta, pta + 1) > 0;
tmp = pta[(int)!x];
pta[0] = pta[x];
pta[1] = tmp;
;
pta += 2;
x = cmp(arg, pta, pta + 1) > 0;
tmp = pta[(int)!x];
pta[0] = pta[x];
pta[1] = tmp;
;
pta--;
x = cmp(arg, pta, pta + 1) > 0;
tmp = pta[(int)!x];
pta[0] = pta[x];
pta[1] = tmp;
;
}
}

void parity_swap_five8(char * array, CMPFUNCPTR cmp, void * arg)
{
char tmp, * pta = array;
size_t x, y;

x = cmp(arg, pta, pta + 1) > 0;
tmp = pta[(int)!x];
pta[0] = pta[x];
pta[1] = tmp;
;
pta += 2;
x = cmp(arg, pta, pta + 1) > 0;
tmp = pta[(int)!x];
pta[0] = pta[x];
pta[1] = tmp;
;
pta -= 1;
x = cmp(arg, pta, pta + 1) > 0;
tmp = pta[(int)!x];
pta[0] = pta[x];
pta[1] = tmp;
;
pta += 2;
y = cmp(arg, pta, pta + 1) > 0;
tmp = pta[(int)!y];
pta[0] = pta[y];
pta[1] = tmp;
;
pta = array;
if(x + y)
{
x = cmp(arg, pta, pta + 1) > 0;
tmp = pta[(int)!x];
pta[0] = pta[x];
pta[1] = tmp;
;
pta += 2;
x = cmp(arg, pta, pta + 1) > 0;
tmp = pta[(int)!x];
pta[0] = pta[x];
pta[1] = tmp;
;
pta -= 1;
x = cmp(arg, pta, pta + 1) > 0;
tmp = pta[(int)!x];
pta[0] = pta[x];
pta[1] = tmp;
;
pta += 2;
x = cmp(arg, pta, pta + 1) > 0;
tmp = pta[(int)!x];
pta[0] = pta[x];
pta[1] = tmp;
;
pta = array;
x = cmp(arg, pta, pta + 1) > 0;
tmp = pta[(int)!x];
pta[0] = pta[x];
pta[1] = tmp;
;
pta += 2;
x = cmp(arg, pta, pta + 1) > 0;
tmp = pta[(int)!x];
pta[0] = pta[x];
pta[1] = tmp;
;
pta -= 1;
}
}

void parity_swap_six8(char * array, char * swap, CMPFUNCPTR cmp, void * arg)
{
char tmp, * pta = array, * ptl, * ptr;
size_t x, y;

x = cmp(arg, pta, pta + 1) > 0;
tmp = pta[(int)!x];
pta[0] = pta[x];
pta[1] = tmp;
;
pta++;
x = cmp(arg, pta, pta + 1) > 0;
tmp = pta[(int)!x];
pta[0] = pta[x];
pta[1] = tmp;
;
pta += 3;
x = cmp(arg, pta, pta + 1) > 0;
tmp = pta[(int)!x];
pta[0] = pta[x];
pta[1] = tmp;
;
pta--;
x = cmp(arg, pta, pta + 1) > 0;
tmp = pta[(int)!x];
pta[0] = pta[x];
pta[1] = tmp;
;
pta = array;
if(cmp(arg, pta + 2, pta + 3) <= 0)
{
x = cmp(arg, pta, pta + 1) > 0;
tmp = pta[(int)!x];
pta[0] = pta[x];
pta[1] = tmp;
;
pta += 4;
x = cmp(arg, pta, pta + 1) > 0;
tmp = pta[(int)!x];
pta[0] = pta[x];
pta[1] = tmp;
;
return ;
}
x = cmp(arg, pta, pta + 1) > 0;
y = !x;
swap[0] = pta[x];
swap[1] = pta[y];
swap[2] = pta[2];
pta += 4;
x = cmp(arg, pta, pta + 1) > 0;
y = !x;
swap[4] = pta[x];
swap[5] = pta[y];
swap[3] = pta[-1];
pta = array;
ptl = swap;
ptr = swap + 3;
x = cmp(arg, ptl, ptr) <= 0;
*pta = *ptl;
ptl += x;
pta[x] = *ptr;
ptr += (int)!x;
pta++;
;
x = cmp(arg, ptl, ptr) <= 0;
*pta = *ptl;
ptl += x;
pta[x] = *ptr;
ptr += (int)!x;
pta++;
;
x = cmp(arg, ptl, ptr) <= 0;
*pta = *ptl;
ptl += x;
pta[x] = *ptr;
ptr += (int)!x;
pta++;
;
pta = array + 5;
ptl = swap + 2;
ptr = swap + 5;
y = cmp(arg, ptl, ptr) <= 0;
*pta = *ptl;
ptl -= (int)!y;
pta--;
pta[y] = *ptr;
ptr -= y;
;
y = cmp(arg, ptl, ptr) <= 0;
*pta = *ptl;
ptl -= (int)!y;
pta--;
pta[y] = *ptr;
ptr -= y;
;
*pta = cmp(arg, ptl, ptr) > 0 ? *ptl : *ptr;
}

void parity_swap_seven8(char * array, char * swap, CMPFUNCPTR cmp, void * arg)
{
char tmp, * pta = array, * ptl, * ptr;
size_t x, y;

x = cmp(arg, pta, pta + 1) > 0;
tmp = pta[(int)!x];
pta[0] = pta[x];
pta[1] = tmp;
;
pta += 2;
x = cmp(arg, pta, pta + 1) > 0;
tmp = pta[(int)!x];
pta[0] = pta[x];
pta[1] = tmp;
;
pta += 2;
x = cmp(arg, pta, pta + 1) > 0;
tmp = pta[(int)!x];
pta[0] = pta[x];
pta[1] = tmp;
;
pta -= 3;
y = cmp(arg, pta, pta + 1) > 0;
tmp = pta[(int)!y];
pta[0] = pta[y];
pta[1] = tmp;
;
pta += 2;
x = cmp(arg, pta, pta + 1) > 0;
tmp = pta[(int)!x];
pta[0] = pta[x];
pta[1] = tmp;
;
pta += 2;
y += x;
x = cmp(arg, pta, pta + 1) > 0;
tmp = pta[(int)!x];
pta[0] = pta[x];
pta[1] = tmp;
;
pta -= 1;
y += x;
if(y == 0)
return ;
x = cmp(arg, pta, pta + 1) > 0;
tmp = pta[(int)!x];
pta[0] = pta[x];
pta[1] = tmp;
;
pta = array;
x = cmp(arg, pta, pta + 1) > 0;
swap[0] = pta[x];
swap[1] = pta[!x];
swap[2] = pta[2];
pta += 3;
x = cmp(arg, pta, pta + 1) > 0;
swap[3] = pta[x];
swap[4] = pta[!x];
pta += 2;
x = cmp(arg, pta, pta + 1) > 0;
swap[5] = pta[x];
swap[6] = pta[!x];
pta = array;
ptl = swap;
ptr = swap + 3;
x = cmp(arg, ptl, ptr) <= 0;
*pta = *ptl;
ptl += x;
pta[x] = *ptr;
ptr += (int)!x;
pta++;
;
x = cmp(arg, ptl, ptr) <= 0;
*pta = *ptl;
ptl += x;
pta[x] = *ptr;
ptr += (int)!x;
pta++;
;
x = cmp(arg, ptl, ptr) <= 0;
*pta = *ptl;
ptl += x;
pta[x] = *ptr;
ptr += (int)!x;
pta++;
;
pta = array + 6;
ptl = swap + 2;
ptr = swap + 6;
y = cmp(arg, ptl, ptr) <= 0;
*pta = *ptl;
ptl -= (int)!y;
pta--;
pta[y] = *ptr;
ptr -= y;
;
y = cmp(arg, ptl, ptr) <= 0;
*pta = *ptl;
ptl -= (int)!y;
pta--;
pta[y] = *ptr;
ptr -= y;
;
y = cmp(arg, ptl, ptr) <= 0;
*pta = *ptl;
ptl -= (int)!y;
pta--;
pta[y] = *ptr;
ptr -= y;
;
*pta = cmp(arg, ptl, ptr) > 0 ? *ptl : *ptr;
}

void parity_merge8(char * dest, char * from, size_t left, size_t right, CMPFUNCPTR cmp, void * arg)
{
char * ptl, * ptr, * tpl, * tpr, * tpd, * ptd;
size_t x, y;

ptl = from;
ptr = from + left;
ptd = dest;
tpl = ptr - 1;
tpr = tpl + right;
tpd = dest + left + right - 1;
if(left < right)
{
*ptd++ = cmp(arg, ptl, ptr) <= 0 ? *ptl++ : *ptr++;
}
*ptd++ = cmp(arg, ptl, ptr) <= 0 ? *ptl++ : *ptr++;
if(left > 4294967295)
{
while(--left)
{
*ptd++ = cmp(arg, ptl, ptr) <= 0 ? *ptl++ : *ptr++;
*tpd-- = cmp(arg, tpl, tpr) > 0 ? *tpl-- : *tpr--;
}
}
else
{
while(--left)
{
x = cmp(arg, ptl, ptr) <= 0;
*ptd = *ptl;
ptl += x;
ptd[x] = *ptr;
ptr += (int)!x;
ptd++;
;
y = cmp(arg, tpl, tpr) <= 0;
*tpd = *tpl;
tpl -= (int)!y;
tpd--;
tpd[y] = *tpr;
tpr -= y;
;
}
}
*tpd = cmp(arg, tpl, tpr) > 0 ? *tpl : *tpr;
}

void quad_reversal8(char * pta, char * ptz)
{
char * ptb, * pty, tmp1, tmp2;
size_t loop = (ptz - pta) / 2;

ptb = pta + loop;
pty = ptz - loop;
if(loop % 2 == 0)
{
tmp2 = *ptb;
*ptb-- = *pty;
*pty++ = tmp2;
loop--;
}
loop /= 2;
do
{
tmp1 = *pta;
*pta++ = *ptz;
*ptz-- = tmp1;
tmp2 = *ptb;
*ptb-- = *pty;
*pty++ = tmp2;
}while(loop--);
}

void quad_swap_merge8(char * array, char * swap, CMPFUNCPTR cmp, void * arg)
{
char * pts, * ptl, * ptr;
size_t x;

ptl = array + 0;
ptr = array + 0 + 2;
pts = swap + 0;
x = cmp(arg, ptl, ptr) <= 0;
*pts = *ptl;
ptl += x;
pts[x] = *ptr;
ptr += (int)!x;
pts++;
;
*pts = cmp(arg, ptl, ptr) <= 0 ? *ptl : *ptr;
ptl = array + 0 + 1;
ptr = array + 0 + 3;
pts = swap + 0 + 3;
x = cmp(arg, ptl, ptr) <= 0;
*pts = *ptl;
ptl -= (int)!x;
pts--;
pts[x] = *ptr;
ptr -= x;
;
*pts = cmp(arg, ptl, ptr) > 0 ? *ptl : *ptr;
;
ptl = array + 4;
ptr = array + 4 + 2;
pts = swap + 4;
x = cmp(arg, ptl, ptr) <= 0;
*pts = *ptl;
ptl += x;
pts[x] = *ptr;
ptr += (int)!x;
pts++;
;
*pts = cmp(arg, ptl, ptr) <= 0 ? *ptl : *ptr;
ptl = array + 4 + 1;
ptr = array + 4 + 3;
pts = swap + 4 + 3;
x = cmp(arg, ptl, ptr) <= 0;
*pts = *ptl;
ptl -= (int)!x;
pts--;
pts[x] = *ptr;
ptr -= x;
;
*pts = cmp(arg, ptl, ptr) > 0 ? *ptl : *ptr;
;
ptl = swap + 0;
ptr = swap + 4;
pts = array;
x = cmp(arg, ptl, ptr) <= 0;
*pts = *ptl;
ptl += x;
pts[x] = *ptr;
ptr += (int)!x;
pts++;
;
x = cmp(arg, ptl, ptr) <= 0;
*pts = *ptl;
ptl += x;
pts[x] = *ptr;
ptr += (int)!x;
pts++;
;
x = cmp(arg, ptl, ptr) <= 0;
*pts = *ptl;
ptl += x;
pts[x] = *ptr;
ptr += (int)!x;
pts++;
;
*pts = cmp(arg, ptl, ptr) <= 0 ? *ptl : *ptr;
ptl = swap + 3;
ptr = swap + 7;
pts = array + 7;
x = cmp(arg, ptl, ptr) <= 0;
*pts = *ptl;
ptl -= (int)!x;
pts--;
pts[x] = *ptr;
ptr -= x;
;
x = cmp(arg, ptl, ptr) <= 0;
*pts = *ptl;
ptl -= (int)!x;
pts--;
pts[x] = *ptr;
ptr -= x;
;
x = cmp(arg, ptl, ptr) <= 0;
*pts = *ptl;
ptl -= (int)!x;
pts--;
pts[x] = *ptr;
ptr -= x;
;
*pts = cmp(arg, ptl, ptr) > 0 ? *ptl : *ptr;
;
}

void tail_merge8(char * array, char * swap, size_t swap_size, size_t nmemb, size_t block, CMPFUNCPTR cmp, void * arg);

size_t monobound_binary_first8(char * array, char * value, size_t top, CMPFUNCPTR cmp, void * arg)
{
char * end;
size_t mid;

end = array + top;
while(top > 1)
{
mid = top / 2;
if(cmp(arg, value, end - mid) <= 0)
{
end -= mid;
}
top -= mid;
}
if(cmp(arg, value, end - 1) <= 0)
{
end--;
}
return (end - array);
}

void parity_swap_four16(short * array, CMPFUNCPTR cmp, void * arg)
{
short tmp, * pta = array;
size_t x;

x = cmp(arg, pta, pta + 1) > 0;
tmp = pta[(int)!x];
pta[0] = pta[x];
pta[1] = tmp;
;
pta += 2;
x = cmp(arg, pta, pta + 1) > 0;
tmp = pta[(int)!x];
pta[0] = pta[x];
pta[1] = tmp;
;
pta--;
if(cmp(arg, pta, pta + 1) > 0)
{
tmp = pta[0];
pta[0] = pta[1];
pta[1] = tmp;
pta--;
x = cmp(arg, pta, pta + 1) > 0;
tmp = pta[(int)!x];
pta[0] = pta[x];
pta[1] = tmp;
;
pta += 2;
x = cmp(arg, pta, pta + 1) > 0;
tmp = pta[(int)!x];
pta[0] = pta[x];
pta[1] = tmp;
;
pta--;
x = cmp(arg, pta, pta + 1) > 0;
tmp = pta[(int)!x];
pta[0] = pta[x];
pta[1] = tmp;
;
}
}

void parity_swap_five16(short * array, CMPFUNCPTR cmp, void * arg)
{
short tmp, * pta = array;
size_t x, y;

x = cmp(arg, pta, pta + 1) > 0;
tmp = pta[(int)!x];
pta[0] = pta[x];
pta[1] = tmp;
;
pta += 2;
x = cmp(arg, pta, pta + 1) > 0;
tmp = pta[(int)!x];
pta[0] = pta[x];
pta[1] = tmp;
;
pta -= 1;
x = cmp(arg, pta, pta + 1) > 0;
tmp = pta[(int)!x];
pta[0] = pta[x];
pta[1] = tmp;
;
pta += 2;
y = cmp(arg, pta, pta + 1) > 0;
tmp = pta[(int)!y];
pta[0] = pta[y];
pta[1] = tmp;
;
pta = array;
if(x + y)
{
x = cmp(arg, pta, pta + 1) > 0;
tmp = pta[(int)!x];
pta[0] = pta[x];
pta[1] = tmp;
;
pta += 2;
x = cmp(arg, pta, pta + 1) > 0;
tmp = pta[(int)!x];
pta[0] = pta[x];
pta[1] = tmp;
;
pta -= 1;
x = cmp(arg, pta, pta + 1) > 0;
tmp = pta[(int)!x];
pta[0] = pta[x];
pta[1] = tmp;
;
pta += 2;
x = cmp(arg, pta, pta + 1) > 0;
tmp = pta[(int)!x];
pta[0] = pta[x];
pta[1] = tmp;
;
pta = array;
x = cmp(arg, pta, pta + 1) > 0;
tmp = pta[(int)!x];
pta[0] = pta[x];
pta[1] = tmp;
;
pta += 2;
x = cmp(arg, pta, pta + 1) > 0;
tmp = pta[(int)!x];
pta[0] = pta[x];
pta[1] = tmp;
;
pta -= 1;
}
}

void parity_swap_six16(short * array, short * swap, CMPFUNCPTR cmp, void * arg)
{
short tmp, * pta = array, * ptl, * ptr;
size_t x, y;

x = cmp(arg, pta, pta + 1) > 0;
tmp = pta[(int)!x];
pta[0] = pta[x];
pta[1] = tmp;
;
pta++;
x = cmp(arg, pta, pta + 1) > 0;
tmp = pta[(int)!x];
pta[0] = pta[x];
pta[1] = tmp;
;
pta += 3;
x = cmp(arg, pta, pta + 1) > 0;
tmp = pta[(int)!x];
pta[0] = pta[x];
pta[1] = tmp;
;
pta--;
x = cmp(arg, pta, pta + 1) > 0;
tmp = pta[(int)!x];
pta[0] = pta[x];
pta[1] = tmp;
;
pta = array;
if(cmp(arg, pta + 2, pta + 3) <= 0)
{
x = cmp(arg, pta, pta + 1) > 0;
tmp = pta[(int)!x];
pta[0] = pta[x];
pta[1] = tmp;
;
pta += 4;
x = cmp(arg, pta, pta + 1) > 0;
tmp = pta[(int)!x];
pta[0] = pta[x];
pta[1] = tmp;
;
return ;
}
x = cmp(arg, pta, pta + 1) > 0;
y = !x;
swap[0] = pta[x];
swap[1] = pta[y];
swap[2] = pta[2];
pta += 4;
x = cmp(arg, pta, pta + 1) > 0;
y = !x;
swap[4] = pta[x];
swap[5] = pta[y];
swap[3] = pta[-1];
pta = array;
ptl = swap;
ptr = swap + 3;
x = cmp(arg, ptl, ptr) <= 0;
*pta = *ptl;
ptl += x;
pta[x] = *ptr;
ptr += (int)!x;
pta++;
;
x = cmp(arg, ptl, ptr) <= 0;
*pta = *ptl;
ptl += x;
pta[x] = *ptr;
ptr += (int)!x;
pta++;
;
x = cmp(arg, ptl, ptr) <= 0;
*pta = *ptl;
ptl += x;
pta[x] = *ptr;
ptr += (int)!x;
pta++;
;
pta = array + 5;
ptl = swap + 2;
ptr = swap + 5;
y = cmp(arg, ptl, ptr) <= 0;
*pta = *ptl;
ptl -= (int)!y;
pta--;
pta[y] = *ptr;
ptr -= y;
;
y = cmp(arg, ptl, ptr) <= 0;
*pta = *ptl;
ptl -= (int)!y;
pta--;
pta[y] = *ptr;
ptr -= y;
;
*pta = cmp(arg, ptl, ptr) > 0 ? *ptl : *ptr;
}

void parity_swap_seven16(short * array, short * swap, CMPFUNCPTR cmp, void * arg)
{
short tmp, * pta = array, * ptl, * ptr;
size_t x, y;

x = cmp(arg, pta, pta + 1) > 0;
tmp = pta[(int)!x];
pta[0] = pta[x];
pta[1] = tmp;
;
pta += 2;
x = cmp(arg, pta, pta + 1) > 0;
tmp = pta[(int)!x];
pta[0] = pta[x];
pta[1] = tmp;
;
pta += 2;
x = cmp(arg, pta, pta + 1) > 0;
tmp = pta[(int)!x];
pta[0] = pta[x];
pta[1] = tmp;
;
pta -= 3;
y = cmp(arg, pta, pta + 1) > 0;
tmp = pta[(int)!y];
pta[0] = pta[y];
pta[1] = tmp;
;
pta += 2;
x = cmp(arg, pta, pta + 1) > 0;
tmp = pta[(int)!x];
pta[0] = pta[x];
pta[1] = tmp;
;
pta += 2;
y += x;
x = cmp(arg, pta, pta + 1) > 0;
tmp = pta[(int)!x];
pta[0] = pta[x];
pta[1] = tmp;
;
pta -= 1;
y += x;
if(y == 0)
return ;
x = cmp(arg, pta, pta + 1) > 0;
tmp = pta[(int)!x];
pta[0] = pta[x];
pta[1] = tmp;
;
pta = array;
x = cmp(arg, pta, pta + 1) > 0;
swap[0] = pta[x];
swap[1] = pta[!x];
swap[2] = pta[2];
pta += 3;
x = cmp(arg, pta, pta + 1) > 0;
swap[3] = pta[x];
swap[4] = pta[!x];
pta += 2;
x = cmp(arg, pta, pta + 1) > 0;
swap[5] = pta[x];
swap[6] = pta[!x];
pta = array;
ptl = swap;
ptr = swap + 3;
x = cmp(arg, ptl, ptr) <= 0;
*pta = *ptl;
ptl += x;
pta[x] = *ptr;
ptr += (int)!x;
pta++;
;
x = cmp(arg, ptl, ptr) <= 0;
*pta = *ptl;
ptl += x;
pta[x] = *ptr;
ptr += (int)!x;
pta++;
;
x = cmp(arg, ptl, ptr) <= 0;
*pta = *ptl;
ptl += x;
pta[x] = *ptr;
ptr += (int)!x;
pta++;
;
pta = array + 6;
ptl = swap + 2;
ptr = swap + 6;
y = cmp(arg, ptl, ptr) <= 0;
*pta = *ptl;
ptl -= (int)!y;
pta--;
pta[y] = *ptr;
ptr -= y;
;
y = cmp(arg, ptl, ptr) <= 0;
*pta = *ptl;
ptl -= (int)!y;
pta--;
pta[y] = *ptr;
ptr -= y;
;
y = cmp(arg, ptl, ptr) <= 0;
*pta = *ptl;
ptl -= (int)!y;
pta--;
pta[y] = *ptr;
ptr -= y;
;
*pta = cmp(arg, ptl, ptr) > 0 ? *ptl : *ptr;
}

void parity_merge16(short * dest, short * from, size_t left, size_t right, CMPFUNCPTR cmp, void * arg)
{
short * ptl, * ptr, * tpl, * tpr, * tpd, * ptd;
size_t x, y;

ptl = from;
ptr = from + left;
ptd = dest;
tpl = ptr - 1;
tpr = tpl + right;
tpd = dest + left + right - 1;
if(left < right)
{
*ptd++ = cmp(arg, ptl, ptr) <= 0 ? *ptl++ : *ptr++;
}
*ptd++ = cmp(arg, ptl, ptr) <= 0 ? *ptl++ : *ptr++;
if(left > 4294967295)
{
while(--left)
{
*ptd++ = cmp(arg, ptl, ptr) <= 0 ? *ptl++ : *ptr++;
*tpd-- = cmp(arg, tpl, tpr) > 0 ? *tpl-- : *tpr--;
}
}
else
{
while(--left)
{
x = cmp(arg, ptl, ptr) <= 0;
*ptd = *ptl;
ptl += x;
ptd[x] = *ptr;
ptr += (int)!x;
ptd++;
;
y = cmp(arg, tpl, tpr) <= 0;
*tpd = *tpl;
tpl -= (int)!y;
tpd--;
tpd[y] = *tpr;
tpr -= y;
;
}
}
*tpd = cmp(arg, tpl, tpr) > 0 ? *tpl : *tpr;
}

void quad_reversal16(short * pta, short * ptz)
{
short * ptb, * pty, tmp1, tmp2;
size_t loop = (ptz - pta) / 2;

ptb = pta + loop;
pty = ptz - loop;
if(loop % 2 == 0)
{
tmp2 = *ptb;
*ptb-- = *pty;
*pty++ = tmp2;
loop--;
}
loop /= 2;
do
{
tmp1 = *pta;
*pta++ = *ptz;
*ptz-- = tmp1;
tmp2 = *ptb;
*ptb-- = *pty;
*pty++ = tmp2;
}while(loop--);
}

void quad_swap_merge16(short * array, short * swap, CMPFUNCPTR cmp, void * arg)
{
short * pts, * ptl, * ptr;
size_t x;

ptl = array + 0;
ptr = array + 0 + 2;
pts = swap + 0;
x = cmp(arg, ptl, ptr) <= 0;
*pts = *ptl;
ptl += x;
pts[x] = *ptr;
ptr += (int)!x;
pts++;
;
*pts = cmp(arg, ptl, ptr) <= 0 ? *ptl : *ptr;
ptl = array + 0 + 1;
ptr = array + 0 + 3;
pts = swap + 0 + 3;
x = cmp(arg, ptl, ptr) <= 0;
*pts = *ptl;
ptl -= (int)!x;
pts--;
pts[x] = *ptr;
ptr -= x;
;
*pts = cmp(arg, ptl, ptr) > 0 ? *ptl : *ptr;
;
ptl = array + 4;
ptr = array + 4 + 2;
pts = swap + 4;
x = cmp(arg, ptl, ptr) <= 0;
*pts = *ptl;
ptl += x;
pts[x] = *ptr;
ptr += (int)!x;
pts++;
;
*pts = cmp(arg, ptl, ptr) <= 0 ? *ptl : *ptr;
ptl = array + 4 + 1;
ptr = array + 4 + 3;
pts = swap + 4 + 3;
x = cmp(arg, ptl, ptr) <= 0;
*pts = *ptl;
ptl -= (int)!x;
pts--;
pts[x] = *ptr;
ptr -= x;
;
*pts = cmp(arg, ptl, ptr) > 0 ? *ptl : *ptr;
;
ptl = swap + 0;
ptr = swap + 4;
pts = array;
x = cmp(arg, ptl, ptr) <= 0;
*pts = *ptl;
ptl += x;
pts[x] = *ptr;
ptr += (int)!x;
pts++;
;
x = cmp(arg, ptl, ptr) <= 0;
*pts = *ptl;
ptl += x;
pts[x] = *ptr;
ptr += (int)!x;
pts++;
;
x = cmp(arg, ptl, ptr) <= 0;
*pts = *ptl;
ptl += x;
pts[x] = *ptr;
ptr += (int)!x;
pts++;
;
*pts = cmp(arg, ptl, ptr) <= 0 ? *ptl : *ptr;
ptl = swap + 3;
ptr = swap + 7;
pts = array + 7;
x = cmp(arg, ptl, ptr) <= 0;
*pts = *ptl;
ptl -= (int)!x;
pts--;
pts[x] = *ptr;
ptr -= x;
;
x = cmp(arg, ptl, ptr) <= 0;
*pts = *ptl;
ptl -= (int)!x;
pts--;
pts[x] = *ptr;
ptr -= x;
;
x = cmp(arg, ptl, ptr) <= 0;
*pts = *ptl;
ptl -= (int)!x;
pts--;
pts[x] = *ptr;
ptr -= x;
;
*pts = cmp(arg, ptl, ptr) > 0 ? *ptl : *ptr;
;
}

void tail_merge16(short * array, short * swap, size_t swap_size, size_t nmemb, size_t block, CMPFUNCPTR cmp, void * arg);

size_t monobound_binary_first16(short * array, short * value, size_t top, CMPFUNCPTR cmp, void * arg)
{
short * end;
size_t mid;

end = array + top;
while(top > 1)
{
mid = top / 2;
if(cmp(arg, value, end - mid) <= 0)
{
end -= mid;
}
top -= mid;
}
if(cmp(arg, value, end - 1) <= 0)
{
end--;
}
return (end - array);
}

void parity_swap_four128(long double * array, CMPFUNCPTR cmp, void * arg)
{
long double tmp, * pta = array;
size_t x;

x = cmp(arg, pta, pta + 1) > 0;
tmp = pta[(int)!x];
pta[0] = pta[x];
pta[1] = tmp;
;
pta += 2;
x = cmp(arg, pta, pta + 1) > 0;
tmp = pta[(int)!x];
pta[0] = pta[x];
pta[1] = tmp;
;
pta--;
if(cmp(arg, pta, pta + 1) > 0)
{
tmp = pta[0];
pta[0] = pta[1];
pta[1] = tmp;
pta--;
x = cmp(arg, pta, pta + 1) > 0;
tmp = pta[(int)!x];
pta[0] = pta[x];
pta[1] = tmp;
;
pta += 2;
x = cmp(arg, pta, pta + 1) > 0;
tmp = pta[(int)!x];
pta[0] = pta[x];
pta[1] = tmp;
;
pta--;
x = cmp(arg, pta, pta + 1) > 0;
tmp = pta[(int)!x];
pta[0] = pta[x];
pta[1] = tmp;
;
}
}

void parity_swap_five128(long double * array, CMPFUNCPTR cmp, void * arg)
{
long double tmp, * pta = array;
size_t x, y;

x = cmp(arg, pta, pta + 1) > 0;
tmp = pta[(int)!x];
pta[0] = pta[x];
pta[1] = tmp;
;
pta += 2;
x = cmp(arg, pta, pta + 1) > 0;
tmp = pta[(int)!x];
pta[0] = pta[x];
pta[1] = tmp;
;
pta -= 1;
x = cmp(arg, pta, pta + 1) > 0;
tmp = pta[(int)!x];
pta[0] = pta[x];
pta[1] = tmp;
;
pta += 2;
y = cmp(arg, pta, pta + 1) > 0;
tmp = pta[(int)!y];
pta[0] = pta[y];
pta[1] = tmp;
;
pta = array;
if(x + y)
{
x = cmp(arg, pta, pta + 1) > 0;
tmp = pta[(int)!x];
pta[0] = pta[x];
pta[1] = tmp;
;
pta += 2;
x = cmp(arg, pta, pta + 1) > 0;
tmp = pta[(int)!x];
pta[0] = pta[x];
pta[1] = tmp;
;
pta -= 1;
x = cmp(arg, pta, pta + 1) > 0;
tmp = pta[(int)!x];
pta[0] = pta[x];
pta[1] = tmp;
;
pta += 2;
x = cmp(arg, pta, pta + 1) > 0;
tmp = pta[(int)!x];
pta[0] = pta[x];
pta[1] = tmp;
;
pta = array;
x = cmp(arg, pta, pta + 1) > 0;
tmp = pta[(int)!x];
pta[0] = pta[x];
pta[1] = tmp;
;
pta += 2;
x = cmp(arg, pta, pta + 1) > 0;
tmp = pta[(int)!x];
pta[0] = pta[x];
pta[1] = tmp;
;
pta -= 1;
}
}

void parity_swap_six128(long double * array, long double * swap, CMPFUNCPTR cmp, void * arg)
{
long double tmp, * pta = array, * ptl, * ptr;
size_t x, y;

x = cmp(arg, pta, pta + 1) > 0;
tmp = pta[(int)!x];
pta[0] = pta[x];
pta[1] = tmp;
;
pta++;
x = cmp(arg, pta, pta + 1) > 0;
tmp = pta[(int)!x];
pta[0] = pta[x];
pta[1] = tmp;
;
pta += 3;
x = cmp(arg, pta, pta + 1) > 0;
tmp = pta[(int)!x];
pta[0] = pta[x];
pta[1] = tmp;
;
pta--;
x = cmp(arg, pta, pta + 1) > 0;
tmp = pta[(int)!x];
pta[0] = pta[x];
pta[1] = tmp;
;
pta = array;
if(cmp(arg, pta + 2, pta + 3) <= 0)
{
x = cmp(arg, pta, pta + 1) > 0;
tmp = pta[(int)!x];
pta[0] = pta[x];
pta[1] = tmp;
;
pta += 4;
x = cmp(arg, pta, pta + 1) > 0;
tmp = pta[(int)!x];
pta[0] = pta[x];
pta[1] = tmp;
;
return ;
}
x = cmp(arg, pta, pta + 1) > 0;
y = !x;
swap[0] = pta[x];
swap[1] = pta[y];
swap[2] = pta[2];
pta += 4;
x = cmp(arg, pta, pta + 1) > 0;
y = !x;
swap[4] = pta[x];
swap[5] = pta[y];
swap[3] = pta[-1];
pta = array;
ptl = swap;
ptr = swap + 3;
x = cmp(arg, ptl, ptr) <= 0;
*pta = *ptl;
ptl += x;
pta[x] = *ptr;
ptr += (int)!x;
pta++;
;
x = cmp(arg, ptl, ptr) <= 0;
*pta = *ptl;
ptl += x;
pta[x] = *ptr;
ptr += (int)!x;
pta++;
;
x = cmp(arg, ptl, ptr) <= 0;
*pta = *ptl;
ptl += x;
pta[x] = *ptr;
ptr += (int)!x;
pta++;
;
pta = array + 5;
ptl = swap + 2;
ptr = swap + 5;
y = cmp(arg, ptl, ptr) <= 0;
*pta = *ptl;
ptl -= (int)!y;
pta--;
pta[y] = *ptr;
ptr -= y;
;
y = cmp(arg, ptl, ptr) <= 0;
*pta = *ptl;
ptl -= (int)!y;
pta--;
pta[y] = *ptr;
ptr -= y;
;
*pta = cmp(arg, ptl, ptr) > 0 ? *ptl : *ptr;
}

void parity_swap_seven128(long double * array, long double * swap, CMPFUNCPTR cmp, void * arg)
{
long double tmp, * pta = array, * ptl, * ptr;
size_t x, y;

x = cmp(arg, pta, pta + 1) > 0;
tmp = pta[(int)!x];
pta[0] = pta[x];
pta[1] = tmp;
;
pta += 2;
x = cmp(arg, pta, pta + 1) > 0;
tmp = pta[(int)!x];
pta[0] = pta[x];
pta[1] = tmp;
;
pta += 2;
x = cmp(arg, pta, pta + 1) > 0;
tmp = pta[(int)!x];
pta[0] = pta[x];
pta[1] = tmp;
;
pta -= 3;
y = cmp(arg, pta, pta + 1) > 0;
tmp = pta[(int)!y];
pta[0] = pta[y];
pta[1] = tmp;
;
pta += 2;
x = cmp(arg, pta, pta + 1) > 0;
tmp = pta[(int)!x];
pta[0] = pta[x];
pta[1] = tmp;
;
pta += 2;
y += x;
x = cmp(arg, pta, pta + 1) > 0;
tmp = pta[(int)!x];
pta[0] = pta[x];
pta[1] = tmp;
;
pta -= 1;
y += x;
if(y == 0)
return ;
x = cmp(arg, pta, pta + 1) > 0;
tmp = pta[(int)!x];
pta[0] = pta[x];
pta[1] = tmp;
;
pta = array;
x = cmp(arg, pta, pta + 1) > 0;
swap[0] = pta[x];
swap[1] = pta[!x];
swap[2] = pta[2];
pta += 3;
x = cmp(arg, pta, pta + 1) > 0;
swap[3] = pta[x];
swap[4] = pta[!x];
pta += 2;
x = cmp(arg, pta, pta + 1) > 0;
swap[5] = pta[x];
swap[6] = pta[!x];
pta = array;
ptl = swap;
ptr = swap + 3;
x = cmp(arg, ptl, ptr) <= 0;
*pta = *ptl;
ptl += x;
pta[x] = *ptr;
ptr += (int)!x;
pta++;
;
x = cmp(arg, ptl, ptr) <= 0;
*pta = *ptl;
ptl += x;
pta[x] = *ptr;
ptr += (int)!x;
pta++;
;
x = cmp(arg, ptl, ptr) <= 0;
*pta = *ptl;
ptl += x;
pta[x] = *ptr;
ptr += (int)!x;
pta++;
;
pta = array + 6;
ptl = swap + 2;
ptr = swap + 6;
y = cmp(arg, ptl, ptr) <= 0;
*pta = *ptl;
ptl -= (int)!y;
pta--;
pta[y] = *ptr;
ptr -= y;
;
y = cmp(arg, ptl, ptr) <= 0;
*pta = *ptl;
ptl -= (int)!y;
pta--;
pta[y] = *ptr;
ptr -= y;
;
y = cmp(arg, ptl, ptr) <= 0;
*pta = *ptl;
ptl -= (int)!y;
pta--;
pta[y] = *ptr;
ptr -= y;
;
*pta = cmp(arg, ptl, ptr) > 0 ? *ptl : *ptr;
}

void parity_merge128(long double * dest, long double * from, size_t left, size_t right, CMPFUNCPTR cmp, void * arg)
{
long double * ptl, * ptr, * tpl, * tpr, * tpd, * ptd;
size_t x, y;

ptl = from;
ptr = from + left;
ptd = dest;
tpl = ptr - 1;
tpr = tpl + right;
tpd = dest + left + right - 1;
if(left < right)
{
*ptd++ = cmp(arg, ptl, ptr) <= 0 ? *ptl++ : *ptr++;
}
*ptd++ = cmp(arg, ptl, ptr) <= 0 ? *ptl++ : *ptr++;
if(left > 4294967295)
{
while(--left)
{
*ptd++ = cmp(arg, ptl, ptr) <= 0 ? *ptl++ : *ptr++;
*tpd-- = cmp(arg, tpl, tpr) > 0 ? *tpl-- : *tpr--;
}
}
else
{
while(--left)
{
x = cmp(arg, ptl, ptr) <= 0;
*ptd = *ptl;
ptl += x;
ptd[x] = *ptr;
ptr += (int)!x;
ptd++;
;
y = cmp(arg, tpl, tpr) <= 0;
*tpd = *tpl;
tpl -= (int)!y;
tpd--;
tpd[y] = *tpr;
tpr -= y;
;
}
}
*tpd = cmp(arg, tpl, tpr) > 0 ? *tpl : *tpr;
}

void quad_reversal128(long double * pta, long double * ptz)
{
long double * ptb, * pty, tmp1, tmp2;
size_t loop = (ptz - pta) / 2;

ptb = pta + loop;
pty = ptz - loop;
if(loop % 2 == 0)
{
tmp2 = *ptb;
*ptb-- = *pty;
*pty++ = tmp2;
loop--;
}
loop /= 2;
do
{
tmp1 = *pta;
*pta++ = *ptz;
*ptz-- = tmp1;
tmp2 = *ptb;
*ptb-- = *pty;
*pty++ = tmp2;
}while(loop--);
}

void quad_swap_merge128(long double * array, long double * swap, CMPFUNCPTR cmp, void * arg)
{
long double * pts, * ptl, * ptr;
size_t x;

ptl = array + 0;
ptr = array + 0 + 2;
pts = swap + 0;
x = cmp(arg, ptl, ptr) <= 0;
*pts = *ptl;
ptl += x;
pts[x] = *ptr;
ptr += (int)!x;
pts++;
;
*pts = cmp(arg, ptl, ptr) <= 0 ? *ptl : *ptr;
ptl = array + 0 + 1;
ptr = array + 0 + 3;
pts = swap + 0 + 3;
x = cmp(arg, ptl, ptr) <= 0;
*pts = *ptl;
ptl -= (int)!x;
pts--;
pts[x] = *ptr;
ptr -= x;
;
*pts = cmp(arg, ptl, ptr) > 0 ? *ptl : *ptr;
;
ptl = array + 4;
ptr = array + 4 + 2;
pts = swap + 4;
x = cmp(arg, ptl, ptr) <= 0;
*pts = *ptl;
ptl += x;
pts[x] = *ptr;
ptr += (int)!x;
pts++;
;
*pts = cmp(arg, ptl, ptr) <= 0 ? *ptl : *ptr;
ptl = array + 4 + 1;
ptr = array + 4 + 3;
pts = swap + 4 + 3;
x = cmp(arg, ptl, ptr) <= 0;
*pts = *ptl;
ptl -= (int)!x;
pts--;
pts[x] = *ptr;
ptr -= x;
;
*pts = cmp(arg, ptl, ptr) > 0 ? *ptl : *ptr;
;
ptl = swap + 0;
ptr = swap + 4;
pts = array;
x = cmp(arg, ptl, ptr) <= 0;
*pts = *ptl;
ptl += x;
pts[x] = *ptr;
ptr += (int)!x;
pts++;
;
x = cmp(arg, ptl, ptr) <= 0;
*pts = *ptl;
ptl += x;
pts[x] = *ptr;
ptr += (int)!x;
pts++;
;
x = cmp(arg, ptl, ptr) <= 0;
*pts = *ptl;
ptl += x;
pts[x] = *ptr;
ptr += (int)!x;
pts++;
;
*pts = cmp(arg, ptl, ptr) <= 0 ? *ptl : *ptr;
ptl = swap + 3;
ptr = swap + 7;
pts = array + 7;
x = cmp(arg, ptl, ptr) <= 0;
*pts = *ptl;
ptl -= (int)!x;
pts--;
pts[x] = *ptr;
ptr -= x;
;
x = cmp(arg, ptl, ptr) <= 0;
*pts = *ptl;
ptl -= (int)!x;
pts--;
pts[x] = *ptr;
ptr -= x;
;
x = cmp(arg, ptl, ptr) <= 0;
*pts = *ptl;
ptl -= (int)!x;
pts--;
pts[x] = *ptr;
ptr -= x;
;
*pts = cmp(arg, ptl, ptr) > 0 ? *ptl : *ptr;
;
}

void tail_merge128(long double * array, long double * swap, size_t swap_size, size_t nmemb, size_t block, CMPFUNCPTR cmp, void * arg);

size_t monobound_binary_first128(long double * array, long double * value, size_t top, CMPFUNCPTR cmp, void * arg)
{
long double * end;
size_t mid;

end = array + top;
while(top > 1)
{
mid = top / 2;
if(cmp(arg, value, end - mid) <= 0)
{
end -= mid;
}
top -= mid;
}
if(cmp(arg, value, end - 1) <= 0)
{
end--;
}
return (end - array);
}

void fulcrum_partition32(int * array, int * swap, int * max, size_t swap_size, size_t nmemb, CMPFUNCPTR cmp, void * arg);

int * crum_binary_median32(int * pta, int * ptb, size_t len, CMPFUNCPTR cmp, void * arg)
{
while(len /= 2)
{
if(cmp(arg, pta + len, ptb + len) <= 0)
pta += len;
else
ptb += len;
}
return cmp(arg, pta, ptb) > 0 ? pta : ptb;
}

size_t crum_median_of_three32(int * array, size_t v0, size_t v1, size_t v2, CMPFUNCPTR cmp, void * arg)
{
size_t v[3] =
{
v0, v1, v2
};
char x, y, z;

x = cmp(arg, array + v0, array + v1) > 0;
y = cmp(arg, array + v0, array + v2) > 0;
z = cmp(arg, array + v1, array + v2) > 0;
return v[(x == y) + (y ^ z)];
}

void fulcrum_partition_int32(int * array, int * swap, int * max, size_t swap_size, size_t nmemb, CMPFUNCPTR cmp, void * arg);

int * crum_binary_median_int32(int * pta, int * ptb, size_t len, CMPFUNCPTR cmp, void * arg)
{
while(len /= 2)
{
if((*(pta + len) > *(ptb + len)) <= 0)
pta += len;
else
ptb += len;
}
return (*(pta) > *(ptb)) > 0 ? pta : ptb;
}

size_t crum_median_of_three_int32(int * array, size_t v0, size_t v1, size_t v2, CMPFUNCPTR cmp, void * arg)
{
size_t v[3] =
{
v0, v1, v2
};
char x, y, z;

x = (*(array + v0) > *(array + v1)) > 0;
y = (*(array + v0) > *(array + v2)) > 0;
z = (*(array + v1) > *(array + v2)) > 0;
return v[(x == y) + (y ^ z)];
}

void fulcrum_partition_uint32(unsigned int * array, unsigned int * swap, unsigned int * max, size_t swap_size, size_t nmemb, CMPFUNCPTR cmp, void * arg);

unsigned int * crum_binary_median_uint32(unsigned int * pta, unsigned int * ptb, size_t len, CMPFUNCPTR cmp, void * arg)
{
while(len /= 2)
{
if((*(pta + len) > *(ptb + len)) <= 0)
pta += len;
else
ptb += len;
}
return (*(pta) > *(ptb)) > 0 ? pta : ptb;
}

size_t crum_median_of_three_uint32(unsigned int * array, size_t v0, size_t v1, size_t v2, CMPFUNCPTR cmp, void * arg)
{
size_t v[3] =
{
v0, v1, v2
};
char x, y, z;

x = (*(array + v0) > *(array + v1)) > 0;
y = (*(array + v0) > *(array + v2)) > 0;
z = (*(array + v1) > *(array + v2)) > 0;
return v[(x == y) + (y ^ z)];
}

void fulcrum_partition64(long long * array, long long * swap, long long * max, size_t swap_size, size_t nmemb, CMPFUNCPTR cmp, void * arg);

long long * crum_binary_median64(long long * pta, long long * ptb, size_t len, CMPFUNCPTR cmp, void * arg)
{
while(len /= 2)
{
if(cmp(arg, pta + len, ptb + len) <= 0)
pta += len;
else
ptb += len;
}
return cmp(arg, pta, ptb) > 0 ? pta : ptb;
}

size_t crum_median_of_three64(long long * array, size_t v0, size_t v1, size_t v2, CMPFUNCPTR cmp, void * arg)
{
size_t v[3] =
{
v0, v1, v2
};
char x, y, z;

x = cmp(arg, array + v0, array + v1) > 0;
y = cmp(arg, array + v0, array + v2) > 0;
z = cmp(arg, array + v1, array + v2) > 0;
return v[(x == y) + (y ^ z)];
}

void fulcrum_partition_int64(long long * array, long long * swap, long long * max, size_t swap_size, size_t nmemb, CMPFUNCPTR cmp, void * arg);

long long * crum_binary_median_int64(long long * pta, long long * ptb, size_t len, CMPFUNCPTR cmp, void * arg)
{
while(len /= 2)
{
if((*(pta + len) > *(ptb + len)) <= 0)
pta += len;
else
ptb += len;
}
return (*(pta) > *(ptb)) > 0 ? pta : ptb;
}

size_t crum_median_of_three_int64(long long * array, size_t v0, size_t v1, size_t v2, CMPFUNCPTR cmp, void * arg)
{
size_t v[3] =
{
v0, v1, v2
};
char x, y, z;

x = (*(array + v0) > *(array + v1)) > 0;
y = (*(array + v0) > *(array + v2)) > 0;
z = (*(array + v1) > *(array + v2)) > 0;
return v[(x == y) + (y ^ z)];
}

void fulcrum_partition_uint64(unsigned long long * array, unsigned long long * swap, unsigned long long * max, size_t swap_size, size_t nmemb, CMPFUNCPTR cmp, void * arg);

unsigned long long * crum_binary_median_uint64(unsigned long long * pta, unsigned long long * ptb, size_t len, CMPFUNCPTR cmp, void * arg)
{
while(len /= 2)
{
if((*(pta + len) > *(ptb + len)) <= 0)
pta += len;
else
ptb += len;
}
return (*(pta) > *(ptb)) > 0 ? pta : ptb;
}

size_t crum_median_of_three_uint64(unsigned long long * array, size_t v0, size_t v1, size_t v2, CMPFUNCPTR cmp, void * arg)
{
size_t v[3] =
{
v0, v1, v2
};
char x, y, z;

x = (*(array + v0) > *(array + v1)) > 0;
y = (*(array + v0) > *(array + v2)) > 0;
z = (*(array + v1) > *(array + v2)) > 0;
return v[(x == y) + (y ^ z)];
}

void fulcrum_partition8(char * array, char * swap, char * max, size_t swap_size, size_t nmemb, CMPFUNCPTR cmp, void * arg);

char * crum_binary_median8(char * pta, char * ptb, size_t len, CMPFUNCPTR cmp, void * arg)
{
while(len /= 2)
{
if(cmp(arg, pta + len, ptb + len) <= 0)
pta += len;
else
ptb += len;
}
return cmp(arg, pta, ptb) > 0 ? pta : ptb;
}

size_t crum_median_of_three8(char * array, size_t v0, size_t v1, size_t v2, CMPFUNCPTR cmp, void * arg)
{
size_t v[3] =
{
v0, v1, v2
};
char x, y, z;

x = cmp(arg, array + v0, array + v1) > 0;
y = cmp(arg, array + v0, array + v2) > 0;
z = cmp(arg, array + v1, array + v2) > 0;
return v[(x == y) + (y ^ z)];
}

void fulcrum_partition16(short * array, short * swap, short * max, size_t swap_size, size_t nmemb, CMPFUNCPTR cmp, void * arg);

short * crum_binary_median16(short * pta, short * ptb, size_t len, CMPFUNCPTR cmp, void * arg)
{
while(len /= 2)
{
if(cmp(arg, pta + len, ptb + len) <= 0)
pta += len;
else
ptb += len;
}
return cmp(arg, pta, ptb) > 0 ? pta : ptb;
}

size_t crum_median_of_three16(short * array, size_t v0, size_t v1, size_t v2, CMPFUNCPTR cmp, void * arg)
{
size_t v[3] =
{
v0, v1, v2
};
char x, y, z;

x = cmp(arg, array + v0, array + v1) > 0;
y = cmp(arg, array + v0, array + v2) > 0;
z = cmp(arg, array + v1, array + v2) > 0;
return v[(x == y) + (y ^ z)];
}

void fulcrum_partition128(long double * array, long double * swap, long double * max, size_t swap_size, size_t nmemb, CMPFUNCPTR cmp, void * arg);

long double * crum_binary_median128(long double * pta, long double * ptb, size_t len, CMPFUNCPTR cmp, void * arg)
{
while(len /= 2)
{
if(cmp(arg, pta + len, ptb + len) <= 0)
pta += len;
else
ptb += len;
}
return cmp(arg, pta, ptb) > 0 ? pta : ptb;
}

size_t crum_median_of_three128(long double * array, size_t v0, size_t v1, size_t v2, CMPFUNCPTR cmp, void * arg)
{
size_t v[3] =
{
v0, v1, v2
};
char x, y, z;

x = cmp(arg, array + v0, array + v1) > 0;
y = cmp(arg, array + v0, array + v2) > 0;
z = cmp(arg, array + v1, array + v2) > 0;
return v[(x == y) + (y ^ z)];
}

struct __eCNameSpace__eC__containers__Array
{
uint64 * array;
unsigned int count;
unsigned int minAllocSize;
} eC_gcc_struct;

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
double d;
long long i64;
uint64 ui64;
char c;
unsigned char uc;
short s;
unsigned short us;
int i;
unsigned int ui;
void *  p;
float f;
} eC_gcc_struct __anon1;
} eC_gcc_struct;

struct __eCNameSpace__eC__types__SerialBuffer
{
unsigned char *  _buffer;
size_t count;
size_t _size;
size_t pos;
} eC_gcc_struct;

extern void *  __eCNameSpace__eC__types__eSystem_New(size_t size);

extern void *  __eCNameSpace__eC__types__eSystem_New0(size_t size);

extern void *  __eCNameSpace__eC__types__eSystem_Renew(void *  memory, size_t size);

extern void *  __eCNameSpace__eC__types__eSystem_Renew0(void *  memory, size_t size);

extern void __eCNameSpace__eC__types__eSystem_Delete(void *  memory);

struct __eCNameSpace__eC__containers__IteratorPointer;

struct __eCNameSpace__eC__types__GlobalFunction;

extern void *  memcpy(void * , const void * , size_t size);

extern int __eCVMethodID_class_OnFree;

static inline int __eCNameSpace__eC__containers__compareDeref(struct __eCNameSpace__eC__containers__SortRData * cs, const void ** a, const void ** b)
{
return cs->compare(cs->arg, *a, *b);
}

static inline int __eCNameSpace__eC__containers__compareDescDeref(struct __eCNameSpace__eC__containers__SortRData * cs, const void ** a, const void ** b)
{
return -cs->compare(cs->arg, *a, *b);
}

static inline int __eCNameSpace__eC__containers__compareDesc(struct __eCNameSpace__eC__containers__SortRData * cs, const void * a, const void * b)
{
return -cs->compare(cs->arg, a, b);
}

static inline int __eCNameSpace__eC__containers__compareArgLast(const void * a, const void * b, struct __eCNameSpace__eC__containers__SortRData * cs)
{
return cs->compare(cs->arg, a, b);
}

static inline int __eCNameSpace__eC__containers__compareDerefArgLast(const void ** a, const void ** b, struct __eCNameSpace__eC__containers__SortRData * cs)
{
return cs->compare(cs->arg, *a, *b);
}

static inline int __eCNameSpace__eC__containers__compareDescDerefArgLast(const void ** a, const void ** b, struct __eCNameSpace__eC__containers__SortRData * cs)
{
return -cs->compare(cs->arg, *a, *b);
}

static inline int __eCNameSpace__eC__containers__compareDescArgLast(const void * a, const void * b, struct __eCNameSpace__eC__containers__SortRData * cs)
{
return -cs->compare(cs->arg, a, b);
}

void partial_forward_merge32(int * array, int * swap, size_t swap_size, size_t nmemb, size_t block, CMPFUNCPTR cmp, void * arg)
{
int * ptl, * ptr, * tpl, * tpr;
size_t x;

if(nmemb == block)
{
return ;
}
ptr = array + block;
tpr = array + nmemb - 1;
if(cmp(arg, ptr - 1, ptr) <= 0)
{
return ;
}
memcpy(swap, array, block * sizeof(int));
ptl = swap;
tpl = swap + block - 1;
while(ptl < tpl - 1 && ptr < tpr - 1)
{
ptr2:
if(cmp(arg, ptl, ptr + 1) > 0)
{
*array++ = *ptr++;
*array++ = *ptr++;
if(ptr < tpr - 1)
{
goto ptr2;
}
break;
}
if(cmp(arg, ptl + 1, ptr) <= 0)
{
*array++ = *ptl++;
*array++ = *ptl++;
if(ptl < tpl - 1)
{
goto ptl2;
}
break;
}
goto cross_swap;
ptl2:
if(cmp(arg, ptl + 1, ptr) <= 0)
{
*array++ = *ptl++;
*array++ = *ptl++;
if(ptl < tpl - 1)
{
goto ptl2;
}
break;
}
if(cmp(arg, ptl, ptr + 1) > 0)
{
*array++ = *ptr++;
*array++ = *ptr++;
if(ptr < tpr - 1)
{
goto ptr2;
}
break;
}
cross_swap:
x = cmp(arg, ptl, ptr) <= 0;
array[x] = *ptr;
ptr += 1;
array[!x] = *ptl;
ptl += 1;
array += 2;
x = cmp(arg, ptl, ptr) <= 0;
*array = *ptl;
ptl += x;
array[x] = *ptr;
ptr += (int)!x;
array++;
;
}
while(ptl <= tpl && ptr <= tpr)
{
*array++ = cmp(arg, ptl, ptr) <= 0 ? *ptl++ : *ptr++;
}
while(ptl <= tpl)
{
*array++ = *ptl++;
}
}

void partial_forward_merge_int32(int * array, int * swap, size_t swap_size, size_t nmemb, size_t block, CMPFUNCPTR cmp, void * arg)
{
int * ptl, * ptr, * tpl, * tpr;
size_t x;

if(nmemb == block)
{
return ;
}
ptr = array + block;
tpr = array + nmemb - 1;
if((*(ptr - 1) > *(ptr)) <= 0)
{
return ;
}
memcpy(swap, array, block * sizeof(int));
ptl = swap;
tpl = swap + block - 1;
while(ptl < tpl - 1 && ptr < tpr - 1)
{
ptr2:
if((*(ptl) > *(ptr + 1)) > 0)
{
*array++ = *ptr++;
*array++ = *ptr++;
if(ptr < tpr - 1)
{
goto ptr2;
}
break;
}
if((*(ptl + 1) > *(ptr)) <= 0)
{
*array++ = *ptl++;
*array++ = *ptl++;
if(ptl < tpl - 1)
{
goto ptl2;
}
break;
}
goto cross_swap;
ptl2:
if((*(ptl + 1) > *(ptr)) <= 0)
{
*array++ = *ptl++;
*array++ = *ptl++;
if(ptl < tpl - 1)
{
goto ptl2;
}
break;
}
if((*(ptl) > *(ptr + 1)) > 0)
{
*array++ = *ptr++;
*array++ = *ptr++;
if(ptr < tpr - 1)
{
goto ptr2;
}
break;
}
cross_swap:
x = (*(ptl) > *(ptr)) <= 0;
array[x] = *ptr;
ptr += 1;
array[!x] = *ptl;
ptl += 1;
array += 2;
x = (*(ptl) > *(ptr)) <= 0;
*array = *ptl;
ptl += x;
array[x] = *ptr;
ptr += (int)!x;
array++;
;
}
while(ptl <= tpl && ptr <= tpr)
{
*array++ = (*(ptl) > *(ptr)) <= 0 ? *ptl++ : *ptr++;
}
while(ptl <= tpl)
{
*array++ = *ptl++;
}
}

void partial_forward_merge_uint32(unsigned int * array, unsigned int * swap, size_t swap_size, size_t nmemb, size_t block, CMPFUNCPTR cmp, void * arg)
{
unsigned int * ptl, * ptr, * tpl, * tpr;
size_t x;

if(nmemb == block)
{
return ;
}
ptr = array + block;
tpr = array + nmemb - 1;
if((*(ptr - 1) > *(ptr)) <= 0)
{
return ;
}
memcpy(swap, array, block * sizeof(unsigned int));
ptl = swap;
tpl = swap + block - 1;
while(ptl < tpl - 1 && ptr < tpr - 1)
{
ptr2:
if((*(ptl) > *(ptr + 1)) > 0)
{
*array++ = *ptr++;
*array++ = *ptr++;
if(ptr < tpr - 1)
{
goto ptr2;
}
break;
}
if((*(ptl + 1) > *(ptr)) <= 0)
{
*array++ = *ptl++;
*array++ = *ptl++;
if(ptl < tpl - 1)
{
goto ptl2;
}
break;
}
goto cross_swap;
ptl2:
if((*(ptl + 1) > *(ptr)) <= 0)
{
*array++ = *ptl++;
*array++ = *ptl++;
if(ptl < tpl - 1)
{
goto ptl2;
}
break;
}
if((*(ptl) > *(ptr + 1)) > 0)
{
*array++ = *ptr++;
*array++ = *ptr++;
if(ptr < tpr - 1)
{
goto ptr2;
}
break;
}
cross_swap:
x = (*(ptl) > *(ptr)) <= 0;
array[x] = *ptr;
ptr += 1;
array[!x] = *ptl;
ptl += 1;
array += 2;
x = (*(ptl) > *(ptr)) <= 0;
*array = *ptl;
ptl += x;
array[x] = *ptr;
ptr += (int)!x;
array++;
;
}
while(ptl <= tpl && ptr <= tpr)
{
*array++ = (*(ptl) > *(ptr)) <= 0 ? *ptl++ : *ptr++;
}
while(ptl <= tpl)
{
*array++ = *ptl++;
}
}

void partial_forward_merge64(long long * array, long long * swap, size_t swap_size, size_t nmemb, size_t block, CMPFUNCPTR cmp, void * arg)
{
long long * ptl, * ptr, * tpl, * tpr;
size_t x;

if(nmemb == block)
{
return ;
}
ptr = array + block;
tpr = array + nmemb - 1;
if(cmp(arg, ptr - 1, ptr) <= 0)
{
return ;
}
memcpy(swap, array, block * sizeof(long long));
ptl = swap;
tpl = swap + block - 1;
while(ptl < tpl - 1 && ptr < tpr - 1)
{
ptr2:
if(cmp(arg, ptl, ptr + 1) > 0)
{
*array++ = *ptr++;
*array++ = *ptr++;
if(ptr < tpr - 1)
{
goto ptr2;
}
break;
}
if(cmp(arg, ptl + 1, ptr) <= 0)
{
*array++ = *ptl++;
*array++ = *ptl++;
if(ptl < tpl - 1)
{
goto ptl2;
}
break;
}
goto cross_swap;
ptl2:
if(cmp(arg, ptl + 1, ptr) <= 0)
{
*array++ = *ptl++;
*array++ = *ptl++;
if(ptl < tpl - 1)
{
goto ptl2;
}
break;
}
if(cmp(arg, ptl, ptr + 1) > 0)
{
*array++ = *ptr++;
*array++ = *ptr++;
if(ptr < tpr - 1)
{
goto ptr2;
}
break;
}
cross_swap:
x = cmp(arg, ptl, ptr) <= 0;
array[x] = *ptr;
ptr += 1;
array[!x] = *ptl;
ptl += 1;
array += 2;
x = cmp(arg, ptl, ptr) <= 0;
*array = *ptl;
ptl += x;
array[x] = *ptr;
ptr += (int)!x;
array++;
;
}
while(ptl <= tpl && ptr <= tpr)
{
*array++ = cmp(arg, ptl, ptr) <= 0 ? *ptl++ : *ptr++;
}
while(ptl <= tpl)
{
*array++ = *ptl++;
}
}

void partial_forward_merge_int64(long long * array, long long * swap, size_t swap_size, size_t nmemb, size_t block, CMPFUNCPTR cmp, void * arg)
{
long long * ptl, * ptr, * tpl, * tpr;
size_t x;

if(nmemb == block)
{
return ;
}
ptr = array + block;
tpr = array + nmemb - 1;
if((*(ptr - 1) > *(ptr)) <= 0)
{
return ;
}
memcpy(swap, array, block * sizeof(long long));
ptl = swap;
tpl = swap + block - 1;
while(ptl < tpl - 1 && ptr < tpr - 1)
{
ptr2:
if((*(ptl) > *(ptr + 1)) > 0)
{
*array++ = *ptr++;
*array++ = *ptr++;
if(ptr < tpr - 1)
{
goto ptr2;
}
break;
}
if((*(ptl + 1) > *(ptr)) <= 0)
{
*array++ = *ptl++;
*array++ = *ptl++;
if(ptl < tpl - 1)
{
goto ptl2;
}
break;
}
goto cross_swap;
ptl2:
if((*(ptl + 1) > *(ptr)) <= 0)
{
*array++ = *ptl++;
*array++ = *ptl++;
if(ptl < tpl - 1)
{
goto ptl2;
}
break;
}
if((*(ptl) > *(ptr + 1)) > 0)
{
*array++ = *ptr++;
*array++ = *ptr++;
if(ptr < tpr - 1)
{
goto ptr2;
}
break;
}
cross_swap:
x = (*(ptl) > *(ptr)) <= 0;
array[x] = *ptr;
ptr += 1;
array[!x] = *ptl;
ptl += 1;
array += 2;
x = (*(ptl) > *(ptr)) <= 0;
*array = *ptl;
ptl += x;
array[x] = *ptr;
ptr += (int)!x;
array++;
;
}
while(ptl <= tpl && ptr <= tpr)
{
*array++ = (*(ptl) > *(ptr)) <= 0 ? *ptl++ : *ptr++;
}
while(ptl <= tpl)
{
*array++ = *ptl++;
}
}

void partial_forward_merge_uint64(unsigned long long * array, unsigned long long * swap, size_t swap_size, size_t nmemb, size_t block, CMPFUNCPTR cmp, void * arg)
{
unsigned long long * ptl, * ptr, * tpl, * tpr;
size_t x;

if(nmemb == block)
{
return ;
}
ptr = array + block;
tpr = array + nmemb - 1;
if((*(ptr - 1) > *(ptr)) <= 0)
{
return ;
}
memcpy(swap, array, block * sizeof(unsigned long long));
ptl = swap;
tpl = swap + block - 1;
while(ptl < tpl - 1 && ptr < tpr - 1)
{
ptr2:
if((*(ptl) > *(ptr + 1)) > 0)
{
*array++ = *ptr++;
*array++ = *ptr++;
if(ptr < tpr - 1)
{
goto ptr2;
}
break;
}
if((*(ptl + 1) > *(ptr)) <= 0)
{
*array++ = *ptl++;
*array++ = *ptl++;
if(ptl < tpl - 1)
{
goto ptl2;
}
break;
}
goto cross_swap;
ptl2:
if((*(ptl + 1) > *(ptr)) <= 0)
{
*array++ = *ptl++;
*array++ = *ptl++;
if(ptl < tpl - 1)
{
goto ptl2;
}
break;
}
if((*(ptl) > *(ptr + 1)) > 0)
{
*array++ = *ptr++;
*array++ = *ptr++;
if(ptr < tpr - 1)
{
goto ptr2;
}
break;
}
cross_swap:
x = (*(ptl) > *(ptr)) <= 0;
array[x] = *ptr;
ptr += 1;
array[!x] = *ptl;
ptl += 1;
array += 2;
x = (*(ptl) > *(ptr)) <= 0;
*array = *ptl;
ptl += x;
array[x] = *ptr;
ptr += (int)!x;
array++;
;
}
while(ptl <= tpl && ptr <= tpr)
{
*array++ = (*(ptl) > *(ptr)) <= 0 ? *ptl++ : *ptr++;
}
while(ptl <= tpl)
{
*array++ = *ptl++;
}
}

void partial_forward_merge8(char * array, char * swap, size_t swap_size, size_t nmemb, size_t block, CMPFUNCPTR cmp, void * arg)
{
char * ptl, * ptr, * tpl, * tpr;
size_t x;

if(nmemb == block)
{
return ;
}
ptr = array + block;
tpr = array + nmemb - 1;
if(cmp(arg, ptr - 1, ptr) <= 0)
{
return ;
}
memcpy(swap, array, block * sizeof(char));
ptl = swap;
tpl = swap + block - 1;
while(ptl < tpl - 1 && ptr < tpr - 1)
{
ptr2:
if(cmp(arg, ptl, ptr + 1) > 0)
{
*array++ = *ptr++;
*array++ = *ptr++;
if(ptr < tpr - 1)
{
goto ptr2;
}
break;
}
if(cmp(arg, ptl + 1, ptr) <= 0)
{
*array++ = *ptl++;
*array++ = *ptl++;
if(ptl < tpl - 1)
{
goto ptl2;
}
break;
}
goto cross_swap;
ptl2:
if(cmp(arg, ptl + 1, ptr) <= 0)
{
*array++ = *ptl++;
*array++ = *ptl++;
if(ptl < tpl - 1)
{
goto ptl2;
}
break;
}
if(cmp(arg, ptl, ptr + 1) > 0)
{
*array++ = *ptr++;
*array++ = *ptr++;
if(ptr < tpr - 1)
{
goto ptr2;
}
break;
}
cross_swap:
x = cmp(arg, ptl, ptr) <= 0;
array[x] = *ptr;
ptr += 1;
array[!x] = *ptl;
ptl += 1;
array += 2;
x = cmp(arg, ptl, ptr) <= 0;
*array = *ptl;
ptl += x;
array[x] = *ptr;
ptr += (int)!x;
array++;
;
}
while(ptl <= tpl && ptr <= tpr)
{
*array++ = cmp(arg, ptl, ptr) <= 0 ? *ptl++ : *ptr++;
}
while(ptl <= tpl)
{
*array++ = *ptl++;
}
}

void partial_forward_merge16(short * array, short * swap, size_t swap_size, size_t nmemb, size_t block, CMPFUNCPTR cmp, void * arg)
{
short * ptl, * ptr, * tpl, * tpr;
size_t x;

if(nmemb == block)
{
return ;
}
ptr = array + block;
tpr = array + nmemb - 1;
if(cmp(arg, ptr - 1, ptr) <= 0)
{
return ;
}
memcpy(swap, array, block * sizeof(short));
ptl = swap;
tpl = swap + block - 1;
while(ptl < tpl - 1 && ptr < tpr - 1)
{
ptr2:
if(cmp(arg, ptl, ptr + 1) > 0)
{
*array++ = *ptr++;
*array++ = *ptr++;
if(ptr < tpr - 1)
{
goto ptr2;
}
break;
}
if(cmp(arg, ptl + 1, ptr) <= 0)
{
*array++ = *ptl++;
*array++ = *ptl++;
if(ptl < tpl - 1)
{
goto ptl2;
}
break;
}
goto cross_swap;
ptl2:
if(cmp(arg, ptl + 1, ptr) <= 0)
{
*array++ = *ptl++;
*array++ = *ptl++;
if(ptl < tpl - 1)
{
goto ptl2;
}
break;
}
if(cmp(arg, ptl, ptr + 1) > 0)
{
*array++ = *ptr++;
*array++ = *ptr++;
if(ptr < tpr - 1)
{
goto ptr2;
}
break;
}
cross_swap:
x = cmp(arg, ptl, ptr) <= 0;
array[x] = *ptr;
ptr += 1;
array[!x] = *ptl;
ptl += 1;
array += 2;
x = cmp(arg, ptl, ptr) <= 0;
*array = *ptl;
ptl += x;
array[x] = *ptr;
ptr += (int)!x;
array++;
;
}
while(ptl <= tpl && ptr <= tpr)
{
*array++ = cmp(arg, ptl, ptr) <= 0 ? *ptl++ : *ptr++;
}
while(ptl <= tpl)
{
*array++ = *ptl++;
}
}

void partial_forward_merge128(long double * array, long double * swap, size_t swap_size, size_t nmemb, size_t block, CMPFUNCPTR cmp, void * arg)
{
long double * ptl, * ptr, * tpl, * tpr;
size_t x;

if(nmemb == block)
{
return ;
}
ptr = array + block;
tpr = array + nmemb - 1;
if(cmp(arg, ptr - 1, ptr) <= 0)
{
return ;
}
memcpy(swap, array, block * sizeof(long double));
ptl = swap;
tpl = swap + block - 1;
while(ptl < tpl - 1 && ptr < tpr - 1)
{
ptr2:
if(cmp(arg, ptl, ptr + 1) > 0)
{
*array++ = *ptr++;
*array++ = *ptr++;
if(ptr < tpr - 1)
{
goto ptr2;
}
break;
}
if(cmp(arg, ptl + 1, ptr) <= 0)
{
*array++ = *ptl++;
*array++ = *ptl++;
if(ptl < tpl - 1)
{
goto ptl2;
}
break;
}
goto cross_swap;
ptl2:
if(cmp(arg, ptl + 1, ptr) <= 0)
{
*array++ = *ptl++;
*array++ = *ptl++;
if(ptl < tpl - 1)
{
goto ptl2;
}
break;
}
if(cmp(arg, ptl, ptr + 1) > 0)
{
*array++ = *ptr++;
*array++ = *ptr++;
if(ptr < tpr - 1)
{
goto ptr2;
}
break;
}
cross_swap:
x = cmp(arg, ptl, ptr) <= 0;
array[x] = *ptr;
ptr += 1;
array[!x] = *ptl;
ptl += 1;
array += 2;
x = cmp(arg, ptl, ptr) <= 0;
*array = *ptl;
ptl += x;
array[x] = *ptr;
ptr += (int)!x;
array++;
;
}
while(ptl <= tpl && ptr <= tpr)
{
*array++ = cmp(arg, ptl, ptr) <= 0 ? *ptl++ : *ptr++;
}
while(ptl <= tpl)
{
*array++ = *ptl++;
}
}

size_t fulcrum_default_partition32(int * array, int * swap, int * ptx, int * piv, size_t swap_size, size_t nmemb, CMPFUNCPTR cmp, void * arg)
{
size_t i, cnt, val, m = 0;
int * ptl, * ptr, * pta, * tpa;

memcpy(swap, array, 32 * sizeof(int));
memcpy(swap + 32, array + nmemb - 32, 32 * sizeof(int));
ptl = array;
ptr = array + nmemb - 1;
pta = array + 32;
tpa = array + nmemb - 33;
cnt = nmemb / 16 - 4;
while(1)
{
if(pta - ptl - m <= 48)
{
if(cnt-- == 0)
break;
for(i = 16; i; i--)
{
val = cmp(arg, pta, piv) <= 0;
ptl[m] = ptr[m] = *pta++;
m += val;
ptr--;
}
}
if(pta - ptl - m >= 16)
{
if(cnt-- == 0)
break;
for(i = 16; i; i--)
{
val = cmp(arg, tpa, piv) <= 0;
ptl[m] = ptr[m] = *tpa--;
m += val;
ptr--;
}
}
}
if(pta - ptl - m <= 48)
{
for(cnt = nmemb % 16; cnt; cnt--)
{
val = cmp(arg, pta, piv) <= 0;
ptl[m] = ptr[m] = *pta++;
m += val;
ptr--;
}
}
else
{
for(cnt = nmemb % 16; cnt; cnt--)
{
val = cmp(arg, tpa, piv) <= 0;
ptl[m] = ptr[m] = *tpa--;
m += val;
ptr--;
}
}
pta = swap;
for(cnt = 16; cnt; cnt--)
{
val = cmp(arg, pta, piv) <= 0;
ptl[m] = ptr[m] = *pta++;
m += val;
ptr--;
val = cmp(arg, pta, piv) <= 0;
ptl[m] = ptr[m] = *pta++;
m += val;
ptr--;
val = cmp(arg, pta, piv) <= 0;
ptl[m] = ptr[m] = *pta++;
m += val;
ptr--;
val = cmp(arg, pta, piv) <= 0;
ptl[m] = ptr[m] = *pta++;
m += val;
ptr--;
}
return m;
}

size_t fulcrum_reverse_partition32(int * array, int * swap, int * ptx, int * piv, size_t swap_size, size_t nmemb, CMPFUNCPTR cmp, void * arg)
{
size_t i, cnt, val, m = 0;
int * ptl, * ptr, * pta, * tpa;

memcpy(swap, array, 32 * sizeof(int));
memcpy(swap + 32, array + nmemb - 32, 32 * sizeof(int));
ptl = array;
ptr = array + nmemb - 1;
pta = array + 32;
tpa = array + nmemb - 33;
cnt = nmemb / 16 - 4;
while(1)
{
if(pta - ptl - m <= 48)
{
if(cnt-- == 0)
break;
for(i = 16; i; i--)
{
val = cmp(arg, piv, pta) > 0;
ptl[m] = ptr[m] = *pta++;
m += val;
ptr--;
}
}
if(pta - ptl - m >= 16)
{
if(cnt-- == 0)
break;
for(i = 16; i; i--)
{
val = cmp(arg, piv, tpa) > 0;
ptl[m] = ptr[m] = *tpa--;
m += val;
ptr--;
}
}
}
if(pta - ptl - m <= 48)
{
for(cnt = nmemb % 16; cnt; cnt--)
{
val = cmp(arg, piv, pta) > 0;
ptl[m] = ptr[m] = *pta++;
m += val;
ptr--;
}
}
else
{
for(cnt = nmemb % 16; cnt; cnt--)
{
val = cmp(arg, piv, tpa) > 0;
ptl[m] = ptr[m] = *tpa--;
m += val;
ptr--;
}
}
pta = swap;
for(cnt = 16; cnt; cnt--)
{
val = cmp(arg, piv, pta) > 0;
ptl[m] = ptr[m] = *pta++;
m += val;
ptr--;
val = cmp(arg, piv, pta) > 0;
ptl[m] = ptr[m] = *pta++;
m += val;
ptr--;
val = cmp(arg, piv, pta) > 0;
ptl[m] = ptr[m] = *pta++;
m += val;
ptr--;
val = cmp(arg, piv, pta) > 0;
ptl[m] = ptr[m] = *pta++;
m += val;
ptr--;
}
return m;
}

size_t fulcrum_default_partition_int32(int * array, int * swap, int * ptx, int * piv, size_t swap_size, size_t nmemb, CMPFUNCPTR cmp, void * arg)
{
size_t i, cnt, val, m = 0;
int * ptl, * ptr, * pta, * tpa;

memcpy(swap, array, 32 * sizeof(int));
memcpy(swap + 32, array + nmemb - 32, 32 * sizeof(int));
ptl = array;
ptr = array + nmemb - 1;
pta = array + 32;
tpa = array + nmemb - 33;
cnt = nmemb / 16 - 4;
while(1)
{
if(pta - ptl - m <= 48)
{
if(cnt-- == 0)
break;
for(i = 16; i; i--)
{
val = (*(pta) > *(piv)) <= 0;
ptl[m] = ptr[m] = *pta++;
m += val;
ptr--;
}
}
if(pta - ptl - m >= 16)
{
if(cnt-- == 0)
break;
for(i = 16; i; i--)
{
val = (*(tpa) > *(piv)) <= 0;
ptl[m] = ptr[m] = *tpa--;
m += val;
ptr--;
}
}
}
if(pta - ptl - m <= 48)
{
for(cnt = nmemb % 16; cnt; cnt--)
{
val = (*(pta) > *(piv)) <= 0;
ptl[m] = ptr[m] = *pta++;
m += val;
ptr--;
}
}
else
{
for(cnt = nmemb % 16; cnt; cnt--)
{
val = (*(tpa) > *(piv)) <= 0;
ptl[m] = ptr[m] = *tpa--;
m += val;
ptr--;
}
}
pta = swap;
for(cnt = 16; cnt; cnt--)
{
val = (*(pta) > *(piv)) <= 0;
ptl[m] = ptr[m] = *pta++;
m += val;
ptr--;
val = (*(pta) > *(piv)) <= 0;
ptl[m] = ptr[m] = *pta++;
m += val;
ptr--;
val = (*(pta) > *(piv)) <= 0;
ptl[m] = ptr[m] = *pta++;
m += val;
ptr--;
val = (*(pta) > *(piv)) <= 0;
ptl[m] = ptr[m] = *pta++;
m += val;
ptr--;
}
return m;
}

size_t fulcrum_reverse_partition_int32(int * array, int * swap, int * ptx, int * piv, size_t swap_size, size_t nmemb, CMPFUNCPTR cmp, void * arg)
{
size_t i, cnt, val, m = 0;
int * ptl, * ptr, * pta, * tpa;

memcpy(swap, array, 32 * sizeof(int));
memcpy(swap + 32, array + nmemb - 32, 32 * sizeof(int));
ptl = array;
ptr = array + nmemb - 1;
pta = array + 32;
tpa = array + nmemb - 33;
cnt = nmemb / 16 - 4;
while(1)
{
if(pta - ptl - m <= 48)
{
if(cnt-- == 0)
break;
for(i = 16; i; i--)
{
val = (*(piv) > *(pta)) > 0;
ptl[m] = ptr[m] = *pta++;
m += val;
ptr--;
}
}
if(pta - ptl - m >= 16)
{
if(cnt-- == 0)
break;
for(i = 16; i; i--)
{
val = (*(piv) > *(tpa)) > 0;
ptl[m] = ptr[m] = *tpa--;
m += val;
ptr--;
}
}
}
if(pta - ptl - m <= 48)
{
for(cnt = nmemb % 16; cnt; cnt--)
{
val = (*(piv) > *(pta)) > 0;
ptl[m] = ptr[m] = *pta++;
m += val;
ptr--;
}
}
else
{
for(cnt = nmemb % 16; cnt; cnt--)
{
val = (*(piv) > *(tpa)) > 0;
ptl[m] = ptr[m] = *tpa--;
m += val;
ptr--;
}
}
pta = swap;
for(cnt = 16; cnt; cnt--)
{
val = (*(piv) > *(pta)) > 0;
ptl[m] = ptr[m] = *pta++;
m += val;
ptr--;
val = (*(piv) > *(pta)) > 0;
ptl[m] = ptr[m] = *pta++;
m += val;
ptr--;
val = (*(piv) > *(pta)) > 0;
ptl[m] = ptr[m] = *pta++;
m += val;
ptr--;
val = (*(piv) > *(pta)) > 0;
ptl[m] = ptr[m] = *pta++;
m += val;
ptr--;
}
return m;
}

size_t fulcrum_default_partition_uint32(unsigned int * array, unsigned int * swap, unsigned int * ptx, unsigned int * piv, size_t swap_size, size_t nmemb, CMPFUNCPTR cmp, void * arg)
{
size_t i, cnt, val, m = 0;
unsigned int * ptl, * ptr, * pta, * tpa;

memcpy(swap, array, 32 * sizeof(unsigned int));
memcpy(swap + 32, array + nmemb - 32, 32 * sizeof(unsigned int));
ptl = array;
ptr = array + nmemb - 1;
pta = array + 32;
tpa = array + nmemb - 33;
cnt = nmemb / 16 - 4;
while(1)
{
if(pta - ptl - m <= 48)
{
if(cnt-- == 0)
break;
for(i = 16; i; i--)
{
val = (*(pta) > *(piv)) <= 0;
ptl[m] = ptr[m] = *pta++;
m += val;
ptr--;
}
}
if(pta - ptl - m >= 16)
{
if(cnt-- == 0)
break;
for(i = 16; i; i--)
{
val = (*(tpa) > *(piv)) <= 0;
ptl[m] = ptr[m] = *tpa--;
m += val;
ptr--;
}
}
}
if(pta - ptl - m <= 48)
{
for(cnt = nmemb % 16; cnt; cnt--)
{
val = (*(pta) > *(piv)) <= 0;
ptl[m] = ptr[m] = *pta++;
m += val;
ptr--;
}
}
else
{
for(cnt = nmemb % 16; cnt; cnt--)
{
val = (*(tpa) > *(piv)) <= 0;
ptl[m] = ptr[m] = *tpa--;
m += val;
ptr--;
}
}
pta = swap;
for(cnt = 16; cnt; cnt--)
{
val = (*(pta) > *(piv)) <= 0;
ptl[m] = ptr[m] = *pta++;
m += val;
ptr--;
val = (*(pta) > *(piv)) <= 0;
ptl[m] = ptr[m] = *pta++;
m += val;
ptr--;
val = (*(pta) > *(piv)) <= 0;
ptl[m] = ptr[m] = *pta++;
m += val;
ptr--;
val = (*(pta) > *(piv)) <= 0;
ptl[m] = ptr[m] = *pta++;
m += val;
ptr--;
}
return m;
}

size_t fulcrum_reverse_partition_uint32(unsigned int * array, unsigned int * swap, unsigned int * ptx, unsigned int * piv, size_t swap_size, size_t nmemb, CMPFUNCPTR cmp, void * arg)
{
size_t i, cnt, val, m = 0;
unsigned int * ptl, * ptr, * pta, * tpa;

memcpy(swap, array, 32 * sizeof(unsigned int));
memcpy(swap + 32, array + nmemb - 32, 32 * sizeof(unsigned int));
ptl = array;
ptr = array + nmemb - 1;
pta = array + 32;
tpa = array + nmemb - 33;
cnt = nmemb / 16 - 4;
while(1)
{
if(pta - ptl - m <= 48)
{
if(cnt-- == 0)
break;
for(i = 16; i; i--)
{
val = (*(piv) > *(pta)) > 0;
ptl[m] = ptr[m] = *pta++;
m += val;
ptr--;
}
}
if(pta - ptl - m >= 16)
{
if(cnt-- == 0)
break;
for(i = 16; i; i--)
{
val = (*(piv) > *(tpa)) > 0;
ptl[m] = ptr[m] = *tpa--;
m += val;
ptr--;
}
}
}
if(pta - ptl - m <= 48)
{
for(cnt = nmemb % 16; cnt; cnt--)
{
val = (*(piv) > *(pta)) > 0;
ptl[m] = ptr[m] = *pta++;
m += val;
ptr--;
}
}
else
{
for(cnt = nmemb % 16; cnt; cnt--)
{
val = (*(piv) > *(tpa)) > 0;
ptl[m] = ptr[m] = *tpa--;
m += val;
ptr--;
}
}
pta = swap;
for(cnt = 16; cnt; cnt--)
{
val = (*(piv) > *(pta)) > 0;
ptl[m] = ptr[m] = *pta++;
m += val;
ptr--;
val = (*(piv) > *(pta)) > 0;
ptl[m] = ptr[m] = *pta++;
m += val;
ptr--;
val = (*(piv) > *(pta)) > 0;
ptl[m] = ptr[m] = *pta++;
m += val;
ptr--;
val = (*(piv) > *(pta)) > 0;
ptl[m] = ptr[m] = *pta++;
m += val;
ptr--;
}
return m;
}

size_t fulcrum_default_partition64(long long * array, long long * swap, long long * ptx, long long * piv, size_t swap_size, size_t nmemb, CMPFUNCPTR cmp, void * arg)
{
size_t i, cnt, val, m = 0;
long long * ptl, * ptr, * pta, * tpa;

memcpy(swap, array, 32 * sizeof(long long));
memcpy(swap + 32, array + nmemb - 32, 32 * sizeof(long long));
ptl = array;
ptr = array + nmemb - 1;
pta = array + 32;
tpa = array + nmemb - 33;
cnt = nmemb / 16 - 4;
while(1)
{
if(pta - ptl - m <= 48)
{
if(cnt-- == 0)
break;
for(i = 16; i; i--)
{
val = cmp(arg, pta, piv) <= 0;
ptl[m] = ptr[m] = *pta++;
m += val;
ptr--;
}
}
if(pta - ptl - m >= 16)
{
if(cnt-- == 0)
break;
for(i = 16; i; i--)
{
val = cmp(arg, tpa, piv) <= 0;
ptl[m] = ptr[m] = *tpa--;
m += val;
ptr--;
}
}
}
if(pta - ptl - m <= 48)
{
for(cnt = nmemb % 16; cnt; cnt--)
{
val = cmp(arg, pta, piv) <= 0;
ptl[m] = ptr[m] = *pta++;
m += val;
ptr--;
}
}
else
{
for(cnt = nmemb % 16; cnt; cnt--)
{
val = cmp(arg, tpa, piv) <= 0;
ptl[m] = ptr[m] = *tpa--;
m += val;
ptr--;
}
}
pta = swap;
for(cnt = 16; cnt; cnt--)
{
val = cmp(arg, pta, piv) <= 0;
ptl[m] = ptr[m] = *pta++;
m += val;
ptr--;
val = cmp(arg, pta, piv) <= 0;
ptl[m] = ptr[m] = *pta++;
m += val;
ptr--;
val = cmp(arg, pta, piv) <= 0;
ptl[m] = ptr[m] = *pta++;
m += val;
ptr--;
val = cmp(arg, pta, piv) <= 0;
ptl[m] = ptr[m] = *pta++;
m += val;
ptr--;
}
return m;
}

size_t fulcrum_reverse_partition64(long long * array, long long * swap, long long * ptx, long long * piv, size_t swap_size, size_t nmemb, CMPFUNCPTR cmp, void * arg)
{
size_t i, cnt, val, m = 0;
long long * ptl, * ptr, * pta, * tpa;

memcpy(swap, array, 32 * sizeof(long long));
memcpy(swap + 32, array + nmemb - 32, 32 * sizeof(long long));
ptl = array;
ptr = array + nmemb - 1;
pta = array + 32;
tpa = array + nmemb - 33;
cnt = nmemb / 16 - 4;
while(1)
{
if(pta - ptl - m <= 48)
{
if(cnt-- == 0)
break;
for(i = 16; i; i--)
{
val = cmp(arg, piv, pta) > 0;
ptl[m] = ptr[m] = *pta++;
m += val;
ptr--;
}
}
if(pta - ptl - m >= 16)
{
if(cnt-- == 0)
break;
for(i = 16; i; i--)
{
val = cmp(arg, piv, tpa) > 0;
ptl[m] = ptr[m] = *tpa--;
m += val;
ptr--;
}
}
}
if(pta - ptl - m <= 48)
{
for(cnt = nmemb % 16; cnt; cnt--)
{
val = cmp(arg, piv, pta) > 0;
ptl[m] = ptr[m] = *pta++;
m += val;
ptr--;
}
}
else
{
for(cnt = nmemb % 16; cnt; cnt--)
{
val = cmp(arg, piv, tpa) > 0;
ptl[m] = ptr[m] = *tpa--;
m += val;
ptr--;
}
}
pta = swap;
for(cnt = 16; cnt; cnt--)
{
val = cmp(arg, piv, pta) > 0;
ptl[m] = ptr[m] = *pta++;
m += val;
ptr--;
val = cmp(arg, piv, pta) > 0;
ptl[m] = ptr[m] = *pta++;
m += val;
ptr--;
val = cmp(arg, piv, pta) > 0;
ptl[m] = ptr[m] = *pta++;
m += val;
ptr--;
val = cmp(arg, piv, pta) > 0;
ptl[m] = ptr[m] = *pta++;
m += val;
ptr--;
}
return m;
}

size_t fulcrum_default_partition_int64(long long * array, long long * swap, long long * ptx, long long * piv, size_t swap_size, size_t nmemb, CMPFUNCPTR cmp, void * arg)
{
size_t i, cnt, val, m = 0;
long long * ptl, * ptr, * pta, * tpa;

memcpy(swap, array, 32 * sizeof(long long));
memcpy(swap + 32, array + nmemb - 32, 32 * sizeof(long long));
ptl = array;
ptr = array + nmemb - 1;
pta = array + 32;
tpa = array + nmemb - 33;
cnt = nmemb / 16 - 4;
while(1)
{
if(pta - ptl - m <= 48)
{
if(cnt-- == 0)
break;
for(i = 16; i; i--)
{
val = (*(pta) > *(piv)) <= 0;
ptl[m] = ptr[m] = *pta++;
m += val;
ptr--;
}
}
if(pta - ptl - m >= 16)
{
if(cnt-- == 0)
break;
for(i = 16; i; i--)
{
val = (*(tpa) > *(piv)) <= 0;
ptl[m] = ptr[m] = *tpa--;
m += val;
ptr--;
}
}
}
if(pta - ptl - m <= 48)
{
for(cnt = nmemb % 16; cnt; cnt--)
{
val = (*(pta) > *(piv)) <= 0;
ptl[m] = ptr[m] = *pta++;
m += val;
ptr--;
}
}
else
{
for(cnt = nmemb % 16; cnt; cnt--)
{
val = (*(tpa) > *(piv)) <= 0;
ptl[m] = ptr[m] = *tpa--;
m += val;
ptr--;
}
}
pta = swap;
for(cnt = 16; cnt; cnt--)
{
val = (*(pta) > *(piv)) <= 0;
ptl[m] = ptr[m] = *pta++;
m += val;
ptr--;
val = (*(pta) > *(piv)) <= 0;
ptl[m] = ptr[m] = *pta++;
m += val;
ptr--;
val = (*(pta) > *(piv)) <= 0;
ptl[m] = ptr[m] = *pta++;
m += val;
ptr--;
val = (*(pta) > *(piv)) <= 0;
ptl[m] = ptr[m] = *pta++;
m += val;
ptr--;
}
return m;
}

size_t fulcrum_reverse_partition_int64(long long * array, long long * swap, long long * ptx, long long * piv, size_t swap_size, size_t nmemb, CMPFUNCPTR cmp, void * arg)
{
size_t i, cnt, val, m = 0;
long long * ptl, * ptr, * pta, * tpa;

memcpy(swap, array, 32 * sizeof(long long));
memcpy(swap + 32, array + nmemb - 32, 32 * sizeof(long long));
ptl = array;
ptr = array + nmemb - 1;
pta = array + 32;
tpa = array + nmemb - 33;
cnt = nmemb / 16 - 4;
while(1)
{
if(pta - ptl - m <= 48)
{
if(cnt-- == 0)
break;
for(i = 16; i; i--)
{
val = (*(piv) > *(pta)) > 0;
ptl[m] = ptr[m] = *pta++;
m += val;
ptr--;
}
}
if(pta - ptl - m >= 16)
{
if(cnt-- == 0)
break;
for(i = 16; i; i--)
{
val = (*(piv) > *(tpa)) > 0;
ptl[m] = ptr[m] = *tpa--;
m += val;
ptr--;
}
}
}
if(pta - ptl - m <= 48)
{
for(cnt = nmemb % 16; cnt; cnt--)
{
val = (*(piv) > *(pta)) > 0;
ptl[m] = ptr[m] = *pta++;
m += val;
ptr--;
}
}
else
{
for(cnt = nmemb % 16; cnt; cnt--)
{
val = (*(piv) > *(tpa)) > 0;
ptl[m] = ptr[m] = *tpa--;
m += val;
ptr--;
}
}
pta = swap;
for(cnt = 16; cnt; cnt--)
{
val = (*(piv) > *(pta)) > 0;
ptl[m] = ptr[m] = *pta++;
m += val;
ptr--;
val = (*(piv) > *(pta)) > 0;
ptl[m] = ptr[m] = *pta++;
m += val;
ptr--;
val = (*(piv) > *(pta)) > 0;
ptl[m] = ptr[m] = *pta++;
m += val;
ptr--;
val = (*(piv) > *(pta)) > 0;
ptl[m] = ptr[m] = *pta++;
m += val;
ptr--;
}
return m;
}

size_t fulcrum_default_partition_uint64(unsigned long long * array, unsigned long long * swap, unsigned long long * ptx, unsigned long long * piv, size_t swap_size, size_t nmemb, CMPFUNCPTR cmp, void * arg)
{
size_t i, cnt, val, m = 0;
unsigned long long * ptl, * ptr, * pta, * tpa;

memcpy(swap, array, 32 * sizeof(unsigned long long));
memcpy(swap + 32, array + nmemb - 32, 32 * sizeof(unsigned long long));
ptl = array;
ptr = array + nmemb - 1;
pta = array + 32;
tpa = array + nmemb - 33;
cnt = nmemb / 16 - 4;
while(1)
{
if(pta - ptl - m <= 48)
{
if(cnt-- == 0)
break;
for(i = 16; i; i--)
{
val = (*(pta) > *(piv)) <= 0;
ptl[m] = ptr[m] = *pta++;
m += val;
ptr--;
}
}
if(pta - ptl - m >= 16)
{
if(cnt-- == 0)
break;
for(i = 16; i; i--)
{
val = (*(tpa) > *(piv)) <= 0;
ptl[m] = ptr[m] = *tpa--;
m += val;
ptr--;
}
}
}
if(pta - ptl - m <= 48)
{
for(cnt = nmemb % 16; cnt; cnt--)
{
val = (*(pta) > *(piv)) <= 0;
ptl[m] = ptr[m] = *pta++;
m += val;
ptr--;
}
}
else
{
for(cnt = nmemb % 16; cnt; cnt--)
{
val = (*(tpa) > *(piv)) <= 0;
ptl[m] = ptr[m] = *tpa--;
m += val;
ptr--;
}
}
pta = swap;
for(cnt = 16; cnt; cnt--)
{
val = (*(pta) > *(piv)) <= 0;
ptl[m] = ptr[m] = *pta++;
m += val;
ptr--;
val = (*(pta) > *(piv)) <= 0;
ptl[m] = ptr[m] = *pta++;
m += val;
ptr--;
val = (*(pta) > *(piv)) <= 0;
ptl[m] = ptr[m] = *pta++;
m += val;
ptr--;
val = (*(pta) > *(piv)) <= 0;
ptl[m] = ptr[m] = *pta++;
m += val;
ptr--;
}
return m;
}

size_t fulcrum_reverse_partition_uint64(unsigned long long * array, unsigned long long * swap, unsigned long long * ptx, unsigned long long * piv, size_t swap_size, size_t nmemb, CMPFUNCPTR cmp, void * arg)
{
size_t i, cnt, val, m = 0;
unsigned long long * ptl, * ptr, * pta, * tpa;

memcpy(swap, array, 32 * sizeof(unsigned long long));
memcpy(swap + 32, array + nmemb - 32, 32 * sizeof(unsigned long long));
ptl = array;
ptr = array + nmemb - 1;
pta = array + 32;
tpa = array + nmemb - 33;
cnt = nmemb / 16 - 4;
while(1)
{
if(pta - ptl - m <= 48)
{
if(cnt-- == 0)
break;
for(i = 16; i; i--)
{
val = (*(piv) > *(pta)) > 0;
ptl[m] = ptr[m] = *pta++;
m += val;
ptr--;
}
}
if(pta - ptl - m >= 16)
{
if(cnt-- == 0)
break;
for(i = 16; i; i--)
{
val = (*(piv) > *(tpa)) > 0;
ptl[m] = ptr[m] = *tpa--;
m += val;
ptr--;
}
}
}
if(pta - ptl - m <= 48)
{
for(cnt = nmemb % 16; cnt; cnt--)
{
val = (*(piv) > *(pta)) > 0;
ptl[m] = ptr[m] = *pta++;
m += val;
ptr--;
}
}
else
{
for(cnt = nmemb % 16; cnt; cnt--)
{
val = (*(piv) > *(tpa)) > 0;
ptl[m] = ptr[m] = *tpa--;
m += val;
ptr--;
}
}
pta = swap;
for(cnt = 16; cnt; cnt--)
{
val = (*(piv) > *(pta)) > 0;
ptl[m] = ptr[m] = *pta++;
m += val;
ptr--;
val = (*(piv) > *(pta)) > 0;
ptl[m] = ptr[m] = *pta++;
m += val;
ptr--;
val = (*(piv) > *(pta)) > 0;
ptl[m] = ptr[m] = *pta++;
m += val;
ptr--;
val = (*(piv) > *(pta)) > 0;
ptl[m] = ptr[m] = *pta++;
m += val;
ptr--;
}
return m;
}

size_t fulcrum_default_partition8(char * array, char * swap, char * ptx, char * piv, size_t swap_size, size_t nmemb, CMPFUNCPTR cmp, void * arg)
{
size_t i, cnt, val, m = 0;
char * ptl, * ptr, * pta, * tpa;

memcpy(swap, array, 32 * sizeof(char));
memcpy(swap + 32, array + nmemb - 32, 32 * sizeof(char));
ptl = array;
ptr = array + nmemb - 1;
pta = array + 32;
tpa = array + nmemb - 33;
cnt = nmemb / 16 - 4;
while(1)
{
if(pta - ptl - m <= 48)
{
if(cnt-- == 0)
break;
for(i = 16; i; i--)
{
val = cmp(arg, pta, piv) <= 0;
ptl[m] = ptr[m] = *pta++;
m += val;
ptr--;
}
}
if(pta - ptl - m >= 16)
{
if(cnt-- == 0)
break;
for(i = 16; i; i--)
{
val = cmp(arg, tpa, piv) <= 0;
ptl[m] = ptr[m] = *tpa--;
m += val;
ptr--;
}
}
}
if(pta - ptl - m <= 48)
{
for(cnt = nmemb % 16; cnt; cnt--)
{
val = cmp(arg, pta, piv) <= 0;
ptl[m] = ptr[m] = *pta++;
m += val;
ptr--;
}
}
else
{
for(cnt = nmemb % 16; cnt; cnt--)
{
val = cmp(arg, tpa, piv) <= 0;
ptl[m] = ptr[m] = *tpa--;
m += val;
ptr--;
}
}
pta = swap;
for(cnt = 16; cnt; cnt--)
{
val = cmp(arg, pta, piv) <= 0;
ptl[m] = ptr[m] = *pta++;
m += val;
ptr--;
val = cmp(arg, pta, piv) <= 0;
ptl[m] = ptr[m] = *pta++;
m += val;
ptr--;
val = cmp(arg, pta, piv) <= 0;
ptl[m] = ptr[m] = *pta++;
m += val;
ptr--;
val = cmp(arg, pta, piv) <= 0;
ptl[m] = ptr[m] = *pta++;
m += val;
ptr--;
}
return m;
}

size_t fulcrum_reverse_partition8(char * array, char * swap, char * ptx, char * piv, size_t swap_size, size_t nmemb, CMPFUNCPTR cmp, void * arg)
{
size_t i, cnt, val, m = 0;
char * ptl, * ptr, * pta, * tpa;

memcpy(swap, array, 32 * sizeof(char));
memcpy(swap + 32, array + nmemb - 32, 32 * sizeof(char));
ptl = array;
ptr = array + nmemb - 1;
pta = array + 32;
tpa = array + nmemb - 33;
cnt = nmemb / 16 - 4;
while(1)
{
if(pta - ptl - m <= 48)
{
if(cnt-- == 0)
break;
for(i = 16; i; i--)
{
val = cmp(arg, piv, pta) > 0;
ptl[m] = ptr[m] = *pta++;
m += val;
ptr--;
}
}
if(pta - ptl - m >= 16)
{
if(cnt-- == 0)
break;
for(i = 16; i; i--)
{
val = cmp(arg, piv, tpa) > 0;
ptl[m] = ptr[m] = *tpa--;
m += val;
ptr--;
}
}
}
if(pta - ptl - m <= 48)
{
for(cnt = nmemb % 16; cnt; cnt--)
{
val = cmp(arg, piv, pta) > 0;
ptl[m] = ptr[m] = *pta++;
m += val;
ptr--;
}
}
else
{
for(cnt = nmemb % 16; cnt; cnt--)
{
val = cmp(arg, piv, tpa) > 0;
ptl[m] = ptr[m] = *tpa--;
m += val;
ptr--;
}
}
pta = swap;
for(cnt = 16; cnt; cnt--)
{
val = cmp(arg, piv, pta) > 0;
ptl[m] = ptr[m] = *pta++;
m += val;
ptr--;
val = cmp(arg, piv, pta) > 0;
ptl[m] = ptr[m] = *pta++;
m += val;
ptr--;
val = cmp(arg, piv, pta) > 0;
ptl[m] = ptr[m] = *pta++;
m += val;
ptr--;
val = cmp(arg, piv, pta) > 0;
ptl[m] = ptr[m] = *pta++;
m += val;
ptr--;
}
return m;
}

size_t fulcrum_default_partition16(short * array, short * swap, short * ptx, short * piv, size_t swap_size, size_t nmemb, CMPFUNCPTR cmp, void * arg)
{
size_t i, cnt, val, m = 0;
short * ptl, * ptr, * pta, * tpa;

memcpy(swap, array, 32 * sizeof(short));
memcpy(swap + 32, array + nmemb - 32, 32 * sizeof(short));
ptl = array;
ptr = array + nmemb - 1;
pta = array + 32;
tpa = array + nmemb - 33;
cnt = nmemb / 16 - 4;
while(1)
{
if(pta - ptl - m <= 48)
{
if(cnt-- == 0)
break;
for(i = 16; i; i--)
{
val = cmp(arg, pta, piv) <= 0;
ptl[m] = ptr[m] = *pta++;
m += val;
ptr--;
}
}
if(pta - ptl - m >= 16)
{
if(cnt-- == 0)
break;
for(i = 16; i; i--)
{
val = cmp(arg, tpa, piv) <= 0;
ptl[m] = ptr[m] = *tpa--;
m += val;
ptr--;
}
}
}
if(pta - ptl - m <= 48)
{
for(cnt = nmemb % 16; cnt; cnt--)
{
val = cmp(arg, pta, piv) <= 0;
ptl[m] = ptr[m] = *pta++;
m += val;
ptr--;
}
}
else
{
for(cnt = nmemb % 16; cnt; cnt--)
{
val = cmp(arg, tpa, piv) <= 0;
ptl[m] = ptr[m] = *tpa--;
m += val;
ptr--;
}
}
pta = swap;
for(cnt = 16; cnt; cnt--)
{
val = cmp(arg, pta, piv) <= 0;
ptl[m] = ptr[m] = *pta++;
m += val;
ptr--;
val = cmp(arg, pta, piv) <= 0;
ptl[m] = ptr[m] = *pta++;
m += val;
ptr--;
val = cmp(arg, pta, piv) <= 0;
ptl[m] = ptr[m] = *pta++;
m += val;
ptr--;
val = cmp(arg, pta, piv) <= 0;
ptl[m] = ptr[m] = *pta++;
m += val;
ptr--;
}
return m;
}

size_t fulcrum_reverse_partition16(short * array, short * swap, short * ptx, short * piv, size_t swap_size, size_t nmemb, CMPFUNCPTR cmp, void * arg)
{
size_t i, cnt, val, m = 0;
short * ptl, * ptr, * pta, * tpa;

memcpy(swap, array, 32 * sizeof(short));
memcpy(swap + 32, array + nmemb - 32, 32 * sizeof(short));
ptl = array;
ptr = array + nmemb - 1;
pta = array + 32;
tpa = array + nmemb - 33;
cnt = nmemb / 16 - 4;
while(1)
{
if(pta - ptl - m <= 48)
{
if(cnt-- == 0)
break;
for(i = 16; i; i--)
{
val = cmp(arg, piv, pta) > 0;
ptl[m] = ptr[m] = *pta++;
m += val;
ptr--;
}
}
if(pta - ptl - m >= 16)
{
if(cnt-- == 0)
break;
for(i = 16; i; i--)
{
val = cmp(arg, piv, tpa) > 0;
ptl[m] = ptr[m] = *tpa--;
m += val;
ptr--;
}
}
}
if(pta - ptl - m <= 48)
{
for(cnt = nmemb % 16; cnt; cnt--)
{
val = cmp(arg, piv, pta) > 0;
ptl[m] = ptr[m] = *pta++;
m += val;
ptr--;
}
}
else
{
for(cnt = nmemb % 16; cnt; cnt--)
{
val = cmp(arg, piv, tpa) > 0;
ptl[m] = ptr[m] = *tpa--;
m += val;
ptr--;
}
}
pta = swap;
for(cnt = 16; cnt; cnt--)
{
val = cmp(arg, piv, pta) > 0;
ptl[m] = ptr[m] = *pta++;
m += val;
ptr--;
val = cmp(arg, piv, pta) > 0;
ptl[m] = ptr[m] = *pta++;
m += val;
ptr--;
val = cmp(arg, piv, pta) > 0;
ptl[m] = ptr[m] = *pta++;
m += val;
ptr--;
val = cmp(arg, piv, pta) > 0;
ptl[m] = ptr[m] = *pta++;
m += val;
ptr--;
}
return m;
}

size_t fulcrum_default_partition128(long double * array, long double * swap, long double * ptx, long double * piv, size_t swap_size, size_t nmemb, CMPFUNCPTR cmp, void * arg)
{
size_t i, cnt, val, m = 0;
long double * ptl, * ptr, * pta, * tpa;

memcpy(swap, array, 32 * sizeof(long double));
memcpy(swap + 32, array + nmemb - 32, 32 * sizeof(long double));
ptl = array;
ptr = array + nmemb - 1;
pta = array + 32;
tpa = array + nmemb - 33;
cnt = nmemb / 16 - 4;
while(1)
{
if(pta - ptl - m <= 48)
{
if(cnt-- == 0)
break;
for(i = 16; i; i--)
{
val = cmp(arg, pta, piv) <= 0;
ptl[m] = ptr[m] = *pta++;
m += val;
ptr--;
}
}
if(pta - ptl - m >= 16)
{
if(cnt-- == 0)
break;
for(i = 16; i; i--)
{
val = cmp(arg, tpa, piv) <= 0;
ptl[m] = ptr[m] = *tpa--;
m += val;
ptr--;
}
}
}
if(pta - ptl - m <= 48)
{
for(cnt = nmemb % 16; cnt; cnt--)
{
val = cmp(arg, pta, piv) <= 0;
ptl[m] = ptr[m] = *pta++;
m += val;
ptr--;
}
}
else
{
for(cnt = nmemb % 16; cnt; cnt--)
{
val = cmp(arg, tpa, piv) <= 0;
ptl[m] = ptr[m] = *tpa--;
m += val;
ptr--;
}
}
pta = swap;
for(cnt = 16; cnt; cnt--)
{
val = cmp(arg, pta, piv) <= 0;
ptl[m] = ptr[m] = *pta++;
m += val;
ptr--;
val = cmp(arg, pta, piv) <= 0;
ptl[m] = ptr[m] = *pta++;
m += val;
ptr--;
val = cmp(arg, pta, piv) <= 0;
ptl[m] = ptr[m] = *pta++;
m += val;
ptr--;
val = cmp(arg, pta, piv) <= 0;
ptl[m] = ptr[m] = *pta++;
m += val;
ptr--;
}
return m;
}

size_t fulcrum_reverse_partition128(long double * array, long double * swap, long double * ptx, long double * piv, size_t swap_size, size_t nmemb, CMPFUNCPTR cmp, void * arg)
{
size_t i, cnt, val, m = 0;
long double * ptl, * ptr, * pta, * tpa;

memcpy(swap, array, 32 * sizeof(long double));
memcpy(swap + 32, array + nmemb - 32, 32 * sizeof(long double));
ptl = array;
ptr = array + nmemb - 1;
pta = array + 32;
tpa = array + nmemb - 33;
cnt = nmemb / 16 - 4;
while(1)
{
if(pta - ptl - m <= 48)
{
if(cnt-- == 0)
break;
for(i = 16; i; i--)
{
val = cmp(arg, piv, pta) > 0;
ptl[m] = ptr[m] = *pta++;
m += val;
ptr--;
}
}
if(pta - ptl - m >= 16)
{
if(cnt-- == 0)
break;
for(i = 16; i; i--)
{
val = cmp(arg, piv, tpa) > 0;
ptl[m] = ptr[m] = *tpa--;
m += val;
ptr--;
}
}
}
if(pta - ptl - m <= 48)
{
for(cnt = nmemb % 16; cnt; cnt--)
{
val = cmp(arg, piv, pta) > 0;
ptl[m] = ptr[m] = *pta++;
m += val;
ptr--;
}
}
else
{
for(cnt = nmemb % 16; cnt; cnt--)
{
val = cmp(arg, piv, tpa) > 0;
ptl[m] = ptr[m] = *tpa--;
m += val;
ptr--;
}
}
pta = swap;
for(cnt = 16; cnt; cnt--)
{
val = cmp(arg, piv, pta) > 0;
ptl[m] = ptr[m] = *pta++;
m += val;
ptr--;
val = cmp(arg, piv, pta) > 0;
ptl[m] = ptr[m] = *pta++;
m += val;
ptr--;
val = cmp(arg, piv, pta) > 0;
ptl[m] = ptr[m] = *pta++;
m += val;
ptr--;
val = cmp(arg, piv, pta) > 0;
ptl[m] = ptr[m] = *pta++;
m += val;
ptr--;
}
return m;
}

void trinity_rotation32(int * array, int * swap, size_t swap_size, size_t nmemb, size_t left)
{
int temp;
size_t bridge, right = nmemb - left;

if(swap_size > 65536)
{
swap_size = 65536;
}
if(left < right)
{
if(left <= swap_size)
{
memcpy(swap, array, left * sizeof(int));
memmove(array, array + left, right * sizeof(int));
memcpy(array + right, swap, left * sizeof(int));
}
else
{
int * pta, * ptb, * ptc, * ptd;

pta = array;
ptb = pta + left;
bridge = right - left;
if(bridge <= swap_size && bridge > 3)
{
ptc = pta + right;
ptd = ptc + left;
memcpy(swap, ptb, bridge * sizeof(int));
while(left--)
{
*--ptc = *--ptd;
*ptd = *--ptb;
}
memcpy(pta, swap, bridge * sizeof(int));
}
else
{
ptc = ptb;
ptd = ptc + right;
bridge = left / 2;
while(bridge--)
{
temp = *--ptb;
*ptb = *pta;
*pta++ = *ptc;
*ptc++ = *--ptd;
*ptd = temp;
}
bridge = (ptd - ptc) / 2;
while(bridge--)
{
temp = *ptc;
*ptc++ = *--ptd;
*ptd = *pta;
*pta++ = temp;
}
bridge = (ptd - pta) / 2;
while(bridge--)
{
temp = *pta;
*pta++ = *--ptd;
*ptd = temp;
}
}
}
}
else if(right < left)
{
if(right <= swap_size)
{
memcpy(swap, array + left, right * sizeof(int));
memmove(array + right, array, left * sizeof(int));
memcpy(array, swap, right * sizeof(int));
}
else
{
int * pta, * ptb, * ptc, * ptd;

pta = array;
ptb = pta + left;
bridge = left - right;
if(bridge <= swap_size && bridge > 3)
{
ptc = pta + right;
ptd = ptc + left;
memcpy(swap, ptc, bridge * sizeof(int));
while(right--)
{
*ptc++ = *pta;
*pta++ = *ptb++;
}
memcpy(ptd - bridge, swap, bridge * sizeof(int));
}
else
{
ptc = ptb;
ptd = ptc + right;
bridge = right / 2;
while(bridge--)
{
temp = *--ptb;
*ptb = *pta;
*pta++ = *ptc;
*ptc++ = *--ptd;
*ptd = temp;
}
bridge = (ptb - pta) / 2;
while(bridge--)
{
temp = *--ptb;
*ptb = *pta;
*pta++ = *--ptd;
*ptd = temp;
}
bridge = (ptd - pta) / 2;
while(bridge--)
{
temp = *pta;
*pta++ = *--ptd;
*ptd = temp;
}
}
}
}
else
{
int * pta, * ptb;

pta = array;
ptb = pta + left;
while(left--)
{
temp = *pta;
*pta++ = *ptb;
*ptb++ = temp;
}
}
}

void trinity_rotation_int32(int * array, int * swap, size_t swap_size, size_t nmemb, size_t left)
{
int temp;
size_t bridge, right = nmemb - left;

if(swap_size > 65536)
{
swap_size = 65536;
}
if(left < right)
{
if(left <= swap_size)
{
memcpy(swap, array, left * sizeof(int));
memmove(array, array + left, right * sizeof(int));
memcpy(array + right, swap, left * sizeof(int));
}
else
{
int * pta, * ptb, * ptc, * ptd;

pta = array;
ptb = pta + left;
bridge = right - left;
if(bridge <= swap_size && bridge > 3)
{
ptc = pta + right;
ptd = ptc + left;
memcpy(swap, ptb, bridge * sizeof(int));
while(left--)
{
*--ptc = *--ptd;
*ptd = *--ptb;
}
memcpy(pta, swap, bridge * sizeof(int));
}
else
{
ptc = ptb;
ptd = ptc + right;
bridge = left / 2;
while(bridge--)
{
temp = *--ptb;
*ptb = *pta;
*pta++ = *ptc;
*ptc++ = *--ptd;
*ptd = temp;
}
bridge = (ptd - ptc) / 2;
while(bridge--)
{
temp = *ptc;
*ptc++ = *--ptd;
*ptd = *pta;
*pta++ = temp;
}
bridge = (ptd - pta) / 2;
while(bridge--)
{
temp = *pta;
*pta++ = *--ptd;
*ptd = temp;
}
}
}
}
else if(right < left)
{
if(right <= swap_size)
{
memcpy(swap, array + left, right * sizeof(int));
memmove(array + right, array, left * sizeof(int));
memcpy(array, swap, right * sizeof(int));
}
else
{
int * pta, * ptb, * ptc, * ptd;

pta = array;
ptb = pta + left;
bridge = left - right;
if(bridge <= swap_size && bridge > 3)
{
ptc = pta + right;
ptd = ptc + left;
memcpy(swap, ptc, bridge * sizeof(int));
while(right--)
{
*ptc++ = *pta;
*pta++ = *ptb++;
}
memcpy(ptd - bridge, swap, bridge * sizeof(int));
}
else
{
ptc = ptb;
ptd = ptc + right;
bridge = right / 2;
while(bridge--)
{
temp = *--ptb;
*ptb = *pta;
*pta++ = *ptc;
*ptc++ = *--ptd;
*ptd = temp;
}
bridge = (ptb - pta) / 2;
while(bridge--)
{
temp = *--ptb;
*ptb = *pta;
*pta++ = *--ptd;
*ptd = temp;
}
bridge = (ptd - pta) / 2;
while(bridge--)
{
temp = *pta;
*pta++ = *--ptd;
*ptd = temp;
}
}
}
}
else
{
int * pta, * ptb;

pta = array;
ptb = pta + left;
while(left--)
{
temp = *pta;
*pta++ = *ptb;
*ptb++ = temp;
}
}
}

void trinity_rotation_uint32(unsigned int * array, unsigned int * swap, size_t swap_size, size_t nmemb, size_t left)
{
unsigned int temp;
size_t bridge, right = nmemb - left;

if(swap_size > 65536)
{
swap_size = 65536;
}
if(left < right)
{
if(left <= swap_size)
{
memcpy(swap, array, left * sizeof(unsigned int));
memmove(array, array + left, right * sizeof(unsigned int));
memcpy(array + right, swap, left * sizeof(unsigned int));
}
else
{
unsigned int * pta, * ptb, * ptc, * ptd;

pta = array;
ptb = pta + left;
bridge = right - left;
if(bridge <= swap_size && bridge > 3)
{
ptc = pta + right;
ptd = ptc + left;
memcpy(swap, ptb, bridge * sizeof(unsigned int));
while(left--)
{
*--ptc = *--ptd;
*ptd = *--ptb;
}
memcpy(pta, swap, bridge * sizeof(unsigned int));
}
else
{
ptc = ptb;
ptd = ptc + right;
bridge = left / 2;
while(bridge--)
{
temp = *--ptb;
*ptb = *pta;
*pta++ = *ptc;
*ptc++ = *--ptd;
*ptd = temp;
}
bridge = (ptd - ptc) / 2;
while(bridge--)
{
temp = *ptc;
*ptc++ = *--ptd;
*ptd = *pta;
*pta++ = temp;
}
bridge = (ptd - pta) / 2;
while(bridge--)
{
temp = *pta;
*pta++ = *--ptd;
*ptd = temp;
}
}
}
}
else if(right < left)
{
if(right <= swap_size)
{
memcpy(swap, array + left, right * sizeof(unsigned int));
memmove(array + right, array, left * sizeof(unsigned int));
memcpy(array, swap, right * sizeof(unsigned int));
}
else
{
unsigned int * pta, * ptb, * ptc, * ptd;

pta = array;
ptb = pta + left;
bridge = left - right;
if(bridge <= swap_size && bridge > 3)
{
ptc = pta + right;
ptd = ptc + left;
memcpy(swap, ptc, bridge * sizeof(unsigned int));
while(right--)
{
*ptc++ = *pta;
*pta++ = *ptb++;
}
memcpy(ptd - bridge, swap, bridge * sizeof(unsigned int));
}
else
{
ptc = ptb;
ptd = ptc + right;
bridge = right / 2;
while(bridge--)
{
temp = *--ptb;
*ptb = *pta;
*pta++ = *ptc;
*ptc++ = *--ptd;
*ptd = temp;
}
bridge = (ptb - pta) / 2;
while(bridge--)
{
temp = *--ptb;
*ptb = *pta;
*pta++ = *--ptd;
*ptd = temp;
}
bridge = (ptd - pta) / 2;
while(bridge--)
{
temp = *pta;
*pta++ = *--ptd;
*ptd = temp;
}
}
}
}
else
{
unsigned int * pta, * ptb;

pta = array;
ptb = pta + left;
while(left--)
{
temp = *pta;
*pta++ = *ptb;
*ptb++ = temp;
}
}
}

void trinity_rotation64(long long * array, long long * swap, size_t swap_size, size_t nmemb, size_t left)
{
long long temp;
size_t bridge, right = nmemb - left;

if(swap_size > 65536)
{
swap_size = 65536;
}
if(left < right)
{
if(left <= swap_size)
{
memcpy(swap, array, left * sizeof(long long));
memmove(array, array + left, right * sizeof(long long));
memcpy(array + right, swap, left * sizeof(long long));
}
else
{
long long * pta, * ptb, * ptc, * ptd;

pta = array;
ptb = pta + left;
bridge = right - left;
if(bridge <= swap_size && bridge > 3)
{
ptc = pta + right;
ptd = ptc + left;
memcpy(swap, ptb, bridge * sizeof(long long));
while(left--)
{
*--ptc = *--ptd;
*ptd = *--ptb;
}
memcpy(pta, swap, bridge * sizeof(long long));
}
else
{
ptc = ptb;
ptd = ptc + right;
bridge = left / 2;
while(bridge--)
{
temp = *--ptb;
*ptb = *pta;
*pta++ = *ptc;
*ptc++ = *--ptd;
*ptd = temp;
}
bridge = (ptd - ptc) / 2;
while(bridge--)
{
temp = *ptc;
*ptc++ = *--ptd;
*ptd = *pta;
*pta++ = temp;
}
bridge = (ptd - pta) / 2;
while(bridge--)
{
temp = *pta;
*pta++ = *--ptd;
*ptd = temp;
}
}
}
}
else if(right < left)
{
if(right <= swap_size)
{
memcpy(swap, array + left, right * sizeof(long long));
memmove(array + right, array, left * sizeof(long long));
memcpy(array, swap, right * sizeof(long long));
}
else
{
long long * pta, * ptb, * ptc, * ptd;

pta = array;
ptb = pta + left;
bridge = left - right;
if(bridge <= swap_size && bridge > 3)
{
ptc = pta + right;
ptd = ptc + left;
memcpy(swap, ptc, bridge * sizeof(long long));
while(right--)
{
*ptc++ = *pta;
*pta++ = *ptb++;
}
memcpy(ptd - bridge, swap, bridge * sizeof(long long));
}
else
{
ptc = ptb;
ptd = ptc + right;
bridge = right / 2;
while(bridge--)
{
temp = *--ptb;
*ptb = *pta;
*pta++ = *ptc;
*ptc++ = *--ptd;
*ptd = temp;
}
bridge = (ptb - pta) / 2;
while(bridge--)
{
temp = *--ptb;
*ptb = *pta;
*pta++ = *--ptd;
*ptd = temp;
}
bridge = (ptd - pta) / 2;
while(bridge--)
{
temp = *pta;
*pta++ = *--ptd;
*ptd = temp;
}
}
}
}
else
{
long long * pta, * ptb;

pta = array;
ptb = pta + left;
while(left--)
{
temp = *pta;
*pta++ = *ptb;
*ptb++ = temp;
}
}
}

void trinity_rotation_int64(long long * array, long long * swap, size_t swap_size, size_t nmemb, size_t left)
{
long long temp;
size_t bridge, right = nmemb - left;

if(swap_size > 65536)
{
swap_size = 65536;
}
if(left < right)
{
if(left <= swap_size)
{
memcpy(swap, array, left * sizeof(long long));
memmove(array, array + left, right * sizeof(long long));
memcpy(array + right, swap, left * sizeof(long long));
}
else
{
long long * pta, * ptb, * ptc, * ptd;

pta = array;
ptb = pta + left;
bridge = right - left;
if(bridge <= swap_size && bridge > 3)
{
ptc = pta + right;
ptd = ptc + left;
memcpy(swap, ptb, bridge * sizeof(long long));
while(left--)
{
*--ptc = *--ptd;
*ptd = *--ptb;
}
memcpy(pta, swap, bridge * sizeof(long long));
}
else
{
ptc = ptb;
ptd = ptc + right;
bridge = left / 2;
while(bridge--)
{
temp = *--ptb;
*ptb = *pta;
*pta++ = *ptc;
*ptc++ = *--ptd;
*ptd = temp;
}
bridge = (ptd - ptc) / 2;
while(bridge--)
{
temp = *ptc;
*ptc++ = *--ptd;
*ptd = *pta;
*pta++ = temp;
}
bridge = (ptd - pta) / 2;
while(bridge--)
{
temp = *pta;
*pta++ = *--ptd;
*ptd = temp;
}
}
}
}
else if(right < left)
{
if(right <= swap_size)
{
memcpy(swap, array + left, right * sizeof(long long));
memmove(array + right, array, left * sizeof(long long));
memcpy(array, swap, right * sizeof(long long));
}
else
{
long long * pta, * ptb, * ptc, * ptd;

pta = array;
ptb = pta + left;
bridge = left - right;
if(bridge <= swap_size && bridge > 3)
{
ptc = pta + right;
ptd = ptc + left;
memcpy(swap, ptc, bridge * sizeof(long long));
while(right--)
{
*ptc++ = *pta;
*pta++ = *ptb++;
}
memcpy(ptd - bridge, swap, bridge * sizeof(long long));
}
else
{
ptc = ptb;
ptd = ptc + right;
bridge = right / 2;
while(bridge--)
{
temp = *--ptb;
*ptb = *pta;
*pta++ = *ptc;
*ptc++ = *--ptd;
*ptd = temp;
}
bridge = (ptb - pta) / 2;
while(bridge--)
{
temp = *--ptb;
*ptb = *pta;
*pta++ = *--ptd;
*ptd = temp;
}
bridge = (ptd - pta) / 2;
while(bridge--)
{
temp = *pta;
*pta++ = *--ptd;
*ptd = temp;
}
}
}
}
else
{
long long * pta, * ptb;

pta = array;
ptb = pta + left;
while(left--)
{
temp = *pta;
*pta++ = *ptb;
*ptb++ = temp;
}
}
}

void trinity_rotation_uint64(unsigned long long * array, unsigned long long * swap, size_t swap_size, size_t nmemb, size_t left)
{
unsigned long long temp;
size_t bridge, right = nmemb - left;

if(swap_size > 65536)
{
swap_size = 65536;
}
if(left < right)
{
if(left <= swap_size)
{
memcpy(swap, array, left * sizeof(unsigned long long));
memmove(array, array + left, right * sizeof(unsigned long long));
memcpy(array + right, swap, left * sizeof(unsigned long long));
}
else
{
unsigned long long * pta, * ptb, * ptc, * ptd;

pta = array;
ptb = pta + left;
bridge = right - left;
if(bridge <= swap_size && bridge > 3)
{
ptc = pta + right;
ptd = ptc + left;
memcpy(swap, ptb, bridge * sizeof(unsigned long long));
while(left--)
{
*--ptc = *--ptd;
*ptd = *--ptb;
}
memcpy(pta, swap, bridge * sizeof(unsigned long long));
}
else
{
ptc = ptb;
ptd = ptc + right;
bridge = left / 2;
while(bridge--)
{
temp = *--ptb;
*ptb = *pta;
*pta++ = *ptc;
*ptc++ = *--ptd;
*ptd = temp;
}
bridge = (ptd - ptc) / 2;
while(bridge--)
{
temp = *ptc;
*ptc++ = *--ptd;
*ptd = *pta;
*pta++ = temp;
}
bridge = (ptd - pta) / 2;
while(bridge--)
{
temp = *pta;
*pta++ = *--ptd;
*ptd = temp;
}
}
}
}
else if(right < left)
{
if(right <= swap_size)
{
memcpy(swap, array + left, right * sizeof(unsigned long long));
memmove(array + right, array, left * sizeof(unsigned long long));
memcpy(array, swap, right * sizeof(unsigned long long));
}
else
{
unsigned long long * pta, * ptb, * ptc, * ptd;

pta = array;
ptb = pta + left;
bridge = left - right;
if(bridge <= swap_size && bridge > 3)
{
ptc = pta + right;
ptd = ptc + left;
memcpy(swap, ptc, bridge * sizeof(unsigned long long));
while(right--)
{
*ptc++ = *pta;
*pta++ = *ptb++;
}
memcpy(ptd - bridge, swap, bridge * sizeof(unsigned long long));
}
else
{
ptc = ptb;
ptd = ptc + right;
bridge = right / 2;
while(bridge--)
{
temp = *--ptb;
*ptb = *pta;
*pta++ = *ptc;
*ptc++ = *--ptd;
*ptd = temp;
}
bridge = (ptb - pta) / 2;
while(bridge--)
{
temp = *--ptb;
*ptb = *pta;
*pta++ = *--ptd;
*ptd = temp;
}
bridge = (ptd - pta) / 2;
while(bridge--)
{
temp = *pta;
*pta++ = *--ptd;
*ptd = temp;
}
}
}
}
else
{
unsigned long long * pta, * ptb;

pta = array;
ptb = pta + left;
while(left--)
{
temp = *pta;
*pta++ = *ptb;
*ptb++ = temp;
}
}
}

void trinity_rotation8(char * array, char * swap, size_t swap_size, size_t nmemb, size_t left)
{
char temp;
size_t bridge, right = nmemb - left;

if(swap_size > 65536)
{
swap_size = 65536;
}
if(left < right)
{
if(left <= swap_size)
{
memcpy(swap, array, left * sizeof(char));
memmove(array, array + left, right * sizeof(char));
memcpy(array + right, swap, left * sizeof(char));
}
else
{
char * pta, * ptb, * ptc, * ptd;

pta = array;
ptb = pta + left;
bridge = right - left;
if(bridge <= swap_size && bridge > 3)
{
ptc = pta + right;
ptd = ptc + left;
memcpy(swap, ptb, bridge * sizeof(char));
while(left--)
{
*--ptc = *--ptd;
*ptd = *--ptb;
}
memcpy(pta, swap, bridge * sizeof(char));
}
else
{
ptc = ptb;
ptd = ptc + right;
bridge = left / 2;
while(bridge--)
{
temp = *--ptb;
*ptb = *pta;
*pta++ = *ptc;
*ptc++ = *--ptd;
*ptd = temp;
}
bridge = (ptd - ptc) / 2;
while(bridge--)
{
temp = *ptc;
*ptc++ = *--ptd;
*ptd = *pta;
*pta++ = temp;
}
bridge = (ptd - pta) / 2;
while(bridge--)
{
temp = *pta;
*pta++ = *--ptd;
*ptd = temp;
}
}
}
}
else if(right < left)
{
if(right <= swap_size)
{
memcpy(swap, array + left, right * sizeof(char));
memmove(array + right, array, left * sizeof(char));
memcpy(array, swap, right * sizeof(char));
}
else
{
char * pta, * ptb, * ptc, * ptd;

pta = array;
ptb = pta + left;
bridge = left - right;
if(bridge <= swap_size && bridge > 3)
{
ptc = pta + right;
ptd = ptc + left;
memcpy(swap, ptc, bridge * sizeof(char));
while(right--)
{
*ptc++ = *pta;
*pta++ = *ptb++;
}
memcpy(ptd - bridge, swap, bridge * sizeof(char));
}
else
{
ptc = ptb;
ptd = ptc + right;
bridge = right / 2;
while(bridge--)
{
temp = *--ptb;
*ptb = *pta;
*pta++ = *ptc;
*ptc++ = *--ptd;
*ptd = temp;
}
bridge = (ptb - pta) / 2;
while(bridge--)
{
temp = *--ptb;
*ptb = *pta;
*pta++ = *--ptd;
*ptd = temp;
}
bridge = (ptd - pta) / 2;
while(bridge--)
{
temp = *pta;
*pta++ = *--ptd;
*ptd = temp;
}
}
}
}
else
{
char * pta, * ptb;

pta = array;
ptb = pta + left;
while(left--)
{
temp = *pta;
*pta++ = *ptb;
*ptb++ = temp;
}
}
}

void trinity_rotation16(short * array, short * swap, size_t swap_size, size_t nmemb, size_t left)
{
short temp;
size_t bridge, right = nmemb - left;

if(swap_size > 65536)
{
swap_size = 65536;
}
if(left < right)
{
if(left <= swap_size)
{
memcpy(swap, array, left * sizeof(short));
memmove(array, array + left, right * sizeof(short));
memcpy(array + right, swap, left * sizeof(short));
}
else
{
short * pta, * ptb, * ptc, * ptd;

pta = array;
ptb = pta + left;
bridge = right - left;
if(bridge <= swap_size && bridge > 3)
{
ptc = pta + right;
ptd = ptc + left;
memcpy(swap, ptb, bridge * sizeof(short));
while(left--)
{
*--ptc = *--ptd;
*ptd = *--ptb;
}
memcpy(pta, swap, bridge * sizeof(short));
}
else
{
ptc = ptb;
ptd = ptc + right;
bridge = left / 2;
while(bridge--)
{
temp = *--ptb;
*ptb = *pta;
*pta++ = *ptc;
*ptc++ = *--ptd;
*ptd = temp;
}
bridge = (ptd - ptc) / 2;
while(bridge--)
{
temp = *ptc;
*ptc++ = *--ptd;
*ptd = *pta;
*pta++ = temp;
}
bridge = (ptd - pta) / 2;
while(bridge--)
{
temp = *pta;
*pta++ = *--ptd;
*ptd = temp;
}
}
}
}
else if(right < left)
{
if(right <= swap_size)
{
memcpy(swap, array + left, right * sizeof(short));
memmove(array + right, array, left * sizeof(short));
memcpy(array, swap, right * sizeof(short));
}
else
{
short * pta, * ptb, * ptc, * ptd;

pta = array;
ptb = pta + left;
bridge = left - right;
if(bridge <= swap_size && bridge > 3)
{
ptc = pta + right;
ptd = ptc + left;
memcpy(swap, ptc, bridge * sizeof(short));
while(right--)
{
*ptc++ = *pta;
*pta++ = *ptb++;
}
memcpy(ptd - bridge, swap, bridge * sizeof(short));
}
else
{
ptc = ptb;
ptd = ptc + right;
bridge = right / 2;
while(bridge--)
{
temp = *--ptb;
*ptb = *pta;
*pta++ = *ptc;
*ptc++ = *--ptd;
*ptd = temp;
}
bridge = (ptb - pta) / 2;
while(bridge--)
{
temp = *--ptb;
*ptb = *pta;
*pta++ = *--ptd;
*ptd = temp;
}
bridge = (ptd - pta) / 2;
while(bridge--)
{
temp = *pta;
*pta++ = *--ptd;
*ptd = temp;
}
}
}
}
else
{
short * pta, * ptb;

pta = array;
ptb = pta + left;
while(left--)
{
temp = *pta;
*pta++ = *ptb;
*ptb++ = temp;
}
}
}

void trinity_rotation128(long double * array, long double * swap, size_t swap_size, size_t nmemb, size_t left)
{
long double temp;
size_t bridge, right = nmemb - left;

if(swap_size > 65536)
{
swap_size = 65536;
}
if(left < right)
{
if(left <= swap_size)
{
memcpy(swap, array, left * sizeof(long double));
memmove(array, array + left, right * sizeof(long double));
memcpy(array + right, swap, left * sizeof(long double));
}
else
{
long double * pta, * ptb, * ptc, * ptd;

pta = array;
ptb = pta + left;
bridge = right - left;
if(bridge <= swap_size && bridge > 3)
{
ptc = pta + right;
ptd = ptc + left;
memcpy(swap, ptb, bridge * sizeof(long double));
while(left--)
{
*--ptc = *--ptd;
*ptd = *--ptb;
}
memcpy(pta, swap, bridge * sizeof(long double));
}
else
{
ptc = ptb;
ptd = ptc + right;
bridge = left / 2;
while(bridge--)
{
temp = *--ptb;
*ptb = *pta;
*pta++ = *ptc;
*ptc++ = *--ptd;
*ptd = temp;
}
bridge = (ptd - ptc) / 2;
while(bridge--)
{
temp = *ptc;
*ptc++ = *--ptd;
*ptd = *pta;
*pta++ = temp;
}
bridge = (ptd - pta) / 2;
while(bridge--)
{
temp = *pta;
*pta++ = *--ptd;
*ptd = temp;
}
}
}
}
else if(right < left)
{
if(right <= swap_size)
{
memcpy(swap, array + left, right * sizeof(long double));
memmove(array + right, array, left * sizeof(long double));
memcpy(array, swap, right * sizeof(long double));
}
else
{
long double * pta, * ptb, * ptc, * ptd;

pta = array;
ptb = pta + left;
bridge = left - right;
if(bridge <= swap_size && bridge > 3)
{
ptc = pta + right;
ptd = ptc + left;
memcpy(swap, ptc, bridge * sizeof(long double));
while(right--)
{
*ptc++ = *pta;
*pta++ = *ptb++;
}
memcpy(ptd - bridge, swap, bridge * sizeof(long double));
}
else
{
ptc = ptb;
ptd = ptc + right;
bridge = right / 2;
while(bridge--)
{
temp = *--ptb;
*ptb = *pta;
*pta++ = *ptc;
*ptc++ = *--ptd;
*ptd = temp;
}
bridge = (ptb - pta) / 2;
while(bridge--)
{
temp = *--ptb;
*ptb = *pta;
*pta++ = *--ptd;
*ptd = temp;
}
bridge = (ptd - pta) / 2;
while(bridge--)
{
temp = *pta;
*pta++ = *--ptd;
*ptd = temp;
}
}
}
}
else
{
long double * pta, * ptb;

pta = array;
ptb = pta + left;
while(left--)
{
temp = *pta;
*pta++ = *ptb;
*ptb++ = temp;
}
}
}

void tiny_sort32(int * array, int * swap, size_t nmemb, CMPFUNCPTR cmp, void * arg)
{
int tmp;
size_t x;

switch(nmemb)
{
case 0:
case 1:
return ;
case 2:
x = cmp(arg, array, array + 1) > 0;
tmp = array[(int)!x];
array[0] = array[x];
array[1] = tmp;
;
return ;
case 3:
x = cmp(arg, array, array + 1) > 0;
tmp = array[(int)!x];
array[0] = array[x];
array[1] = tmp;
;
array++;
x = cmp(arg, array, array + 1) > 0;
tmp = array[(int)!x];
array[0] = array[x];
array[1] = tmp;
;
array--;
x = cmp(arg, array, array + 1) > 0;
tmp = array[(int)!x];
array[0] = array[x];
array[1] = tmp;
;
return ;
case 4:
parity_swap_four32(array, cmp, arg);
return ;
case 5:
parity_swap_five32(array, cmp, arg);
return ;
case 6:
parity_swap_six32(array, swap, cmp, arg);
return ;
case 7:
parity_swap_seven32(array, swap, cmp, arg);
return ;
}
}

void cross_merge32(int * dest, int * from, size_t left, size_t right, CMPFUNCPTR cmp, void * arg)
{
int * ptl, * tpl, * ptr, * tpr, * ptd, * tpd;
size_t loop;
size_t x, y;

ptl = from;
ptr = from + left;
tpl = ptr - 1;
tpr = tpl + right;
if(left + 1 >= right && right >= left && left >= 32)
{
if(cmp(arg, ptl + 15, ptr) > 0 && cmp(arg, ptl, ptr + 15) <= 0 && cmp(arg, tpl, tpr - 15) > 0 && cmp(arg, tpl - 15, tpr) <= 0)
{
parity_merge32(dest, from, left, right, cmp, arg);
return ;
}
}
ptd = dest;
tpd = dest + left + right - 1;
while(1)
{
if(tpl - ptl > 8)
{
ptl8_ptr:
if(cmp(arg, ptl + 7, ptr) <= 0)
{
memcpy(ptd, ptl, 8 * sizeof(int));
ptd += 8;
ptl += 8;
if(tpl - ptl > 8)
{
goto ptl8_ptr;
}
continue;
}
tpl8_tpr:
if(cmp(arg, tpl - 7, tpr) > 0)
{
tpd -= 7;
tpl -= 7;
memcpy(tpd--, tpl--, 8 * sizeof(int));
if(tpl - ptl > 8)
{
goto tpl8_tpr;
}
continue;
}
}
if(tpr - ptr > 8)
{
ptl_ptr8:
if(cmp(arg, ptl, ptr + 7) > 0)
{
memcpy(ptd, ptr, 8 * sizeof(int));
ptd += 8;
ptr += 8;
if(tpr - ptr > 8)
{
goto ptl_ptr8;
}
continue;
}
tpl_tpr8:
if(cmp(arg, tpl, tpr - 7) <= 0)
{
tpd -= 7;
tpr -= 7;
memcpy(tpd--, tpr--, 8 * sizeof(int));
if(tpr - ptr > 8)
{
goto tpl_tpr8;
}
continue;
}
}
if(tpd - ptd < 16)
{
break;
}
if(left > 262144)
{
loop = 8;
do
{
*ptd++ = cmp(arg, ptl, ptr) <= 0 ? *ptl++ : *ptr++;
*tpd-- = cmp(arg, tpl, tpr) > 0 ? *tpl-- : *tpr--;
}while(--loop);
}
else
{
loop = 8;
do
{
x = cmp(arg, ptl, ptr) <= 0;
*ptd = *ptl;
ptl += x;
ptd[x] = *ptr;
ptr += (int)!x;
ptd++;
;
y = cmp(arg, tpl, tpr) <= 0;
*tpd = *tpl;
tpl -= (int)!y;
tpd--;
tpd[y] = *tpr;
tpr -= y;
;
}while(--loop);
}
}
while(ptl <= tpl && ptr <= tpr)
{
*ptd++ = cmp(arg, ptl, ptr) <= 0 ? *ptl++ : *ptr++;
}
while(ptl <= tpl)
{
*ptd++ = *ptl++;
}
while(ptr <= tpr)
{
*ptd++ = *ptr++;
}
}

void tiny_sort_int32(int * array, int * swap, size_t nmemb, CMPFUNCPTR cmp, void * arg)
{
int tmp;
size_t x;

switch(nmemb)
{
case 0:
case 1:
return ;
case 2:
x = (*(array) > *(array + 1)) > 0;
tmp = array[(int)!x];
array[0] = array[x];
array[1] = tmp;
;
return ;
case 3:
x = (*(array) > *(array + 1)) > 0;
tmp = array[(int)!x];
array[0] = array[x];
array[1] = tmp;
;
array++;
x = (*(array) > *(array + 1)) > 0;
tmp = array[(int)!x];
array[0] = array[x];
array[1] = tmp;
;
array--;
x = (*(array) > *(array + 1)) > 0;
tmp = array[(int)!x];
array[0] = array[x];
array[1] = tmp;
;
return ;
case 4:
parity_swap_four_int32(array, cmp, arg);
return ;
case 5:
parity_swap_five_int32(array, cmp, arg);
return ;
case 6:
parity_swap_six_int32(array, swap, cmp, arg);
return ;
case 7:
parity_swap_seven_int32(array, swap, cmp, arg);
return ;
}
}

void cross_merge_int32(int * dest, int * from, size_t left, size_t right, CMPFUNCPTR cmp, void * arg)
{
int * ptl, * tpl, * ptr, * tpr, * ptd, * tpd;
size_t loop;
size_t x, y;

ptl = from;
ptr = from + left;
tpl = ptr - 1;
tpr = tpl + right;
if(left + 1 >= right && right >= left && left >= 32)
{
if((*(ptl + 15) > *(ptr)) > 0 && (*(ptl) > *(ptr + 15)) <= 0 && (*(tpl) > *(tpr - 15)) > 0 && (*(tpl - 15) > *(tpr)) <= 0)
{
parity_merge_int32(dest, from, left, right, cmp, arg);
return ;
}
}
ptd = dest;
tpd = dest + left + right - 1;
while(1)
{
if(tpl - ptl > 8)
{
ptl8_ptr:
if((*(ptl + 7) > *(ptr)) <= 0)
{
memcpy(ptd, ptl, 8 * sizeof(int));
ptd += 8;
ptl += 8;
if(tpl - ptl > 8)
{
goto ptl8_ptr;
}
continue;
}
tpl8_tpr:
if((*(tpl - 7) > *(tpr)) > 0)
{
tpd -= 7;
tpl -= 7;
memcpy(tpd--, tpl--, 8 * sizeof(int));
if(tpl - ptl > 8)
{
goto tpl8_tpr;
}
continue;
}
}
if(tpr - ptr > 8)
{
ptl_ptr8:
if((*(ptl) > *(ptr + 7)) > 0)
{
memcpy(ptd, ptr, 8 * sizeof(int));
ptd += 8;
ptr += 8;
if(tpr - ptr > 8)
{
goto ptl_ptr8;
}
continue;
}
tpl_tpr8:
if((*(tpl) > *(tpr - 7)) <= 0)
{
tpd -= 7;
tpr -= 7;
memcpy(tpd--, tpr--, 8 * sizeof(int));
if(tpr - ptr > 8)
{
goto tpl_tpr8;
}
continue;
}
}
if(tpd - ptd < 16)
{
break;
}
{
loop = 8;
do
{
x = (*(ptl) > *(ptr)) <= 0;
*ptd = *ptl;
ptl += x;
ptd[x] = *ptr;
ptr += (int)!x;
ptd++;
;
y = (*(tpl) > *(tpr)) <= 0;
*tpd = *tpl;
tpl -= (int)!y;
tpd--;
tpd[y] = *tpr;
tpr -= y;
;
}while(--loop);
}
}
while(ptl <= tpl && ptr <= tpr)
{
*ptd++ = (*(ptl) > *(ptr)) <= 0 ? *ptl++ : *ptr++;
}
while(ptl <= tpl)
{
*ptd++ = *ptl++;
}
while(ptr <= tpr)
{
*ptd++ = *ptr++;
}
}

void tiny_sort_uint32(unsigned int * array, unsigned int * swap, size_t nmemb, CMPFUNCPTR cmp, void * arg)
{
unsigned int tmp;
size_t x;

switch(nmemb)
{
case 0:
case 1:
return ;
case 2:
x = (*(array) > *(array + 1)) > 0;
tmp = array[(int)!x];
array[0] = array[x];
array[1] = tmp;
;
return ;
case 3:
x = (*(array) > *(array + 1)) > 0;
tmp = array[(int)!x];
array[0] = array[x];
array[1] = tmp;
;
array++;
x = (*(array) > *(array + 1)) > 0;
tmp = array[(int)!x];
array[0] = array[x];
array[1] = tmp;
;
array--;
x = (*(array) > *(array + 1)) > 0;
tmp = array[(int)!x];
array[0] = array[x];
array[1] = tmp;
;
return ;
case 4:
parity_swap_four_uint32(array, cmp, arg);
return ;
case 5:
parity_swap_five_uint32(array, cmp, arg);
return ;
case 6:
parity_swap_six_uint32(array, swap, cmp, arg);
return ;
case 7:
parity_swap_seven_uint32(array, swap, cmp, arg);
return ;
}
}

void cross_merge_uint32(unsigned int * dest, unsigned int * from, size_t left, size_t right, CMPFUNCPTR cmp, void * arg)
{
unsigned int * ptl, * tpl, * ptr, * tpr, * ptd, * tpd;
size_t loop;
size_t x, y;

ptl = from;
ptr = from + left;
tpl = ptr - 1;
tpr = tpl + right;
if(left + 1 >= right && right >= left && left >= 32)
{
if((*(ptl + 15) > *(ptr)) > 0 && (*(ptl) > *(ptr + 15)) <= 0 && (*(tpl) > *(tpr - 15)) > 0 && (*(tpl - 15) > *(tpr)) <= 0)
{
parity_merge_uint32(dest, from, left, right, cmp, arg);
return ;
}
}
ptd = dest;
tpd = dest + left + right - 1;
while(1)
{
if(tpl - ptl > 8)
{
ptl8_ptr:
if((*(ptl + 7) > *(ptr)) <= 0)
{
memcpy(ptd, ptl, 8 * sizeof(unsigned int));
ptd += 8;
ptl += 8;
if(tpl - ptl > 8)
{
goto ptl8_ptr;
}
continue;
}
tpl8_tpr:
if((*(tpl - 7) > *(tpr)) > 0)
{
tpd -= 7;
tpl -= 7;
memcpy(tpd--, tpl--, 8 * sizeof(unsigned int));
if(tpl - ptl > 8)
{
goto tpl8_tpr;
}
continue;
}
}
if(tpr - ptr > 8)
{
ptl_ptr8:
if((*(ptl) > *(ptr + 7)) > 0)
{
memcpy(ptd, ptr, 8 * sizeof(unsigned int));
ptd += 8;
ptr += 8;
if(tpr - ptr > 8)
{
goto ptl_ptr8;
}
continue;
}
tpl_tpr8:
if((*(tpl) > *(tpr - 7)) <= 0)
{
tpd -= 7;
tpr -= 7;
memcpy(tpd--, tpr--, 8 * sizeof(unsigned int));
if(tpr - ptr > 8)
{
goto tpl_tpr8;
}
continue;
}
}
if(tpd - ptd < 16)
{
break;
}
{
loop = 8;
do
{
x = (*(ptl) > *(ptr)) <= 0;
*ptd = *ptl;
ptl += x;
ptd[x] = *ptr;
ptr += (int)!x;
ptd++;
;
y = (*(tpl) > *(tpr)) <= 0;
*tpd = *tpl;
tpl -= (int)!y;
tpd--;
tpd[y] = *tpr;
tpr -= y;
;
}while(--loop);
}
}
while(ptl <= tpl && ptr <= tpr)
{
*ptd++ = (*(ptl) > *(ptr)) <= 0 ? *ptl++ : *ptr++;
}
while(ptl <= tpl)
{
*ptd++ = *ptl++;
}
while(ptr <= tpr)
{
*ptd++ = *ptr++;
}
}

void tiny_sort64(long long * array, long long * swap, size_t nmemb, CMPFUNCPTR cmp, void * arg)
{
long long tmp;
size_t x;

switch(nmemb)
{
case 0:
case 1:
return ;
case 2:
x = cmp(arg, array, array + 1) > 0;
tmp = array[(int)!x];
array[0] = array[x];
array[1] = tmp;
;
return ;
case 3:
x = cmp(arg, array, array + 1) > 0;
tmp = array[(int)!x];
array[0] = array[x];
array[1] = tmp;
;
array++;
x = cmp(arg, array, array + 1) > 0;
tmp = array[(int)!x];
array[0] = array[x];
array[1] = tmp;
;
array--;
x = cmp(arg, array, array + 1) > 0;
tmp = array[(int)!x];
array[0] = array[x];
array[1] = tmp;
;
return ;
case 4:
parity_swap_four64(array, cmp, arg);
return ;
case 5:
parity_swap_five64(array, cmp, arg);
return ;
case 6:
parity_swap_six64(array, swap, cmp, arg);
return ;
case 7:
parity_swap_seven64(array, swap, cmp, arg);
return ;
}
}

void cross_merge64(long long * dest, long long * from, size_t left, size_t right, CMPFUNCPTR cmp, void * arg)
{
long long * ptl, * tpl, * ptr, * tpr, * ptd, * tpd;
size_t loop;
size_t x, y;

ptl = from;
ptr = from + left;
tpl = ptr - 1;
tpr = tpl + right;
if(left + 1 >= right && right >= left && left >= 32)
{
if(cmp(arg, ptl + 15, ptr) > 0 && cmp(arg, ptl, ptr + 15) <= 0 && cmp(arg, tpl, tpr - 15) > 0 && cmp(arg, tpl - 15, tpr) <= 0)
{
parity_merge64(dest, from, left, right, cmp, arg);
return ;
}
}
ptd = dest;
tpd = dest + left + right - 1;
while(1)
{
if(tpl - ptl > 8)
{
ptl8_ptr:
if(cmp(arg, ptl + 7, ptr) <= 0)
{
memcpy(ptd, ptl, 8 * sizeof(long long));
ptd += 8;
ptl += 8;
if(tpl - ptl > 8)
{
goto ptl8_ptr;
}
continue;
}
tpl8_tpr:
if(cmp(arg, tpl - 7, tpr) > 0)
{
tpd -= 7;
tpl -= 7;
memcpy(tpd--, tpl--, 8 * sizeof(long long));
if(tpl - ptl > 8)
{
goto tpl8_tpr;
}
continue;
}
}
if(tpr - ptr > 8)
{
ptl_ptr8:
if(cmp(arg, ptl, ptr + 7) > 0)
{
memcpy(ptd, ptr, 8 * sizeof(long long));
ptd += 8;
ptr += 8;
if(tpr - ptr > 8)
{
goto ptl_ptr8;
}
continue;
}
tpl_tpr8:
if(cmp(arg, tpl, tpr - 7) <= 0)
{
tpd -= 7;
tpr -= 7;
memcpy(tpd--, tpr--, 8 * sizeof(long long));
if(tpr - ptr > 8)
{
goto tpl_tpr8;
}
continue;
}
}
if(tpd - ptd < 16)
{
break;
}
if(left > 262144)
{
loop = 8;
do
{
*ptd++ = cmp(arg, ptl, ptr) <= 0 ? *ptl++ : *ptr++;
*tpd-- = cmp(arg, tpl, tpr) > 0 ? *tpl-- : *tpr--;
}while(--loop);
}
else
{
loop = 8;
do
{
x = cmp(arg, ptl, ptr) <= 0;
*ptd = *ptl;
ptl += x;
ptd[x] = *ptr;
ptr += (int)!x;
ptd++;
;
y = cmp(arg, tpl, tpr) <= 0;
*tpd = *tpl;
tpl -= (int)!y;
tpd--;
tpd[y] = *tpr;
tpr -= y;
;
}while(--loop);
}
}
while(ptl <= tpl && ptr <= tpr)
{
*ptd++ = cmp(arg, ptl, ptr) <= 0 ? *ptl++ : *ptr++;
}
while(ptl <= tpl)
{
*ptd++ = *ptl++;
}
while(ptr <= tpr)
{
*ptd++ = *ptr++;
}
}

void tiny_sort_int64(long long * array, long long * swap, size_t nmemb, CMPFUNCPTR cmp, void * arg)
{
long long tmp;
size_t x;

switch(nmemb)
{
case 0:
case 1:
return ;
case 2:
x = (*(array) > *(array + 1)) > 0;
tmp = array[(int)!x];
array[0] = array[x];
array[1] = tmp;
;
return ;
case 3:
x = (*(array) > *(array + 1)) > 0;
tmp = array[(int)!x];
array[0] = array[x];
array[1] = tmp;
;
array++;
x = (*(array) > *(array + 1)) > 0;
tmp = array[(int)!x];
array[0] = array[x];
array[1] = tmp;
;
array--;
x = (*(array) > *(array + 1)) > 0;
tmp = array[(int)!x];
array[0] = array[x];
array[1] = tmp;
;
return ;
case 4:
parity_swap_four_int64(array, cmp, arg);
return ;
case 5:
parity_swap_five_int64(array, cmp, arg);
return ;
case 6:
parity_swap_six_int64(array, swap, cmp, arg);
return ;
case 7:
parity_swap_seven_int64(array, swap, cmp, arg);
return ;
}
}

void cross_merge_int64(long long * dest, long long * from, size_t left, size_t right, CMPFUNCPTR cmp, void * arg)
{
long long * ptl, * tpl, * ptr, * tpr, * ptd, * tpd;
size_t loop;
size_t x, y;

ptl = from;
ptr = from + left;
tpl = ptr - 1;
tpr = tpl + right;
if(left + 1 >= right && right >= left && left >= 32)
{
if((*(ptl + 15) > *(ptr)) > 0 && (*(ptl) > *(ptr + 15)) <= 0 && (*(tpl) > *(tpr - 15)) > 0 && (*(tpl - 15) > *(tpr)) <= 0)
{
parity_merge_int64(dest, from, left, right, cmp, arg);
return ;
}
}
ptd = dest;
tpd = dest + left + right - 1;
while(1)
{
if(tpl - ptl > 8)
{
ptl8_ptr:
if((*(ptl + 7) > *(ptr)) <= 0)
{
memcpy(ptd, ptl, 8 * sizeof(long long));
ptd += 8;
ptl += 8;
if(tpl - ptl > 8)
{
goto ptl8_ptr;
}
continue;
}
tpl8_tpr:
if((*(tpl - 7) > *(tpr)) > 0)
{
tpd -= 7;
tpl -= 7;
memcpy(tpd--, tpl--, 8 * sizeof(long long));
if(tpl - ptl > 8)
{
goto tpl8_tpr;
}
continue;
}
}
if(tpr - ptr > 8)
{
ptl_ptr8:
if((*(ptl) > *(ptr + 7)) > 0)
{
memcpy(ptd, ptr, 8 * sizeof(long long));
ptd += 8;
ptr += 8;
if(tpr - ptr > 8)
{
goto ptl_ptr8;
}
continue;
}
tpl_tpr8:
if((*(tpl) > *(tpr - 7)) <= 0)
{
tpd -= 7;
tpr -= 7;
memcpy(tpd--, tpr--, 8 * sizeof(long long));
if(tpr - ptr > 8)
{
goto tpl_tpr8;
}
continue;
}
}
if(tpd - ptd < 16)
{
break;
}
{
loop = 8;
do
{
x = (*(ptl) > *(ptr)) <= 0;
*ptd = *ptl;
ptl += x;
ptd[x] = *ptr;
ptr += (int)!x;
ptd++;
;
y = (*(tpl) > *(tpr)) <= 0;
*tpd = *tpl;
tpl -= (int)!y;
tpd--;
tpd[y] = *tpr;
tpr -= y;
;
}while(--loop);
}
}
while(ptl <= tpl && ptr <= tpr)
{
*ptd++ = (*(ptl) > *(ptr)) <= 0 ? *ptl++ : *ptr++;
}
while(ptl <= tpl)
{
*ptd++ = *ptl++;
}
while(ptr <= tpr)
{
*ptd++ = *ptr++;
}
}

void tiny_sort_uint64(unsigned long long * array, unsigned long long * swap, size_t nmemb, CMPFUNCPTR cmp, void * arg)
{
unsigned long long tmp;
size_t x;

switch(nmemb)
{
case 0:
case 1:
return ;
case 2:
x = (*(array) > *(array + 1)) > 0;
tmp = array[(int)!x];
array[0] = array[x];
array[1] = tmp;
;
return ;
case 3:
x = (*(array) > *(array + 1)) > 0;
tmp = array[(int)!x];
array[0] = array[x];
array[1] = tmp;
;
array++;
x = (*(array) > *(array + 1)) > 0;
tmp = array[(int)!x];
array[0] = array[x];
array[1] = tmp;
;
array--;
x = (*(array) > *(array + 1)) > 0;
tmp = array[(int)!x];
array[0] = array[x];
array[1] = tmp;
;
return ;
case 4:
parity_swap_four_uint64(array, cmp, arg);
return ;
case 5:
parity_swap_five_uint64(array, cmp, arg);
return ;
case 6:
parity_swap_six_uint64(array, swap, cmp, arg);
return ;
case 7:
parity_swap_seven_uint64(array, swap, cmp, arg);
return ;
}
}

void cross_merge_uint64(unsigned long long * dest, unsigned long long * from, size_t left, size_t right, CMPFUNCPTR cmp, void * arg)
{
unsigned long long * ptl, * tpl, * ptr, * tpr, * ptd, * tpd;
size_t loop;
size_t x, y;

ptl = from;
ptr = from + left;
tpl = ptr - 1;
tpr = tpl + right;
if(left + 1 >= right && right >= left && left >= 32)
{
if((*(ptl + 15) > *(ptr)) > 0 && (*(ptl) > *(ptr + 15)) <= 0 && (*(tpl) > *(tpr - 15)) > 0 && (*(tpl - 15) > *(tpr)) <= 0)
{
parity_merge_uint64(dest, from, left, right, cmp, arg);
return ;
}
}
ptd = dest;
tpd = dest + left + right - 1;
while(1)
{
if(tpl - ptl > 8)
{
ptl8_ptr:
if((*(ptl + 7) > *(ptr)) <= 0)
{
memcpy(ptd, ptl, 8 * sizeof(unsigned long long));
ptd += 8;
ptl += 8;
if(tpl - ptl > 8)
{
goto ptl8_ptr;
}
continue;
}
tpl8_tpr:
if((*(tpl - 7) > *(tpr)) > 0)
{
tpd -= 7;
tpl -= 7;
memcpy(tpd--, tpl--, 8 * sizeof(unsigned long long));
if(tpl - ptl > 8)
{
goto tpl8_tpr;
}
continue;
}
}
if(tpr - ptr > 8)
{
ptl_ptr8:
if((*(ptl) > *(ptr + 7)) > 0)
{
memcpy(ptd, ptr, 8 * sizeof(unsigned long long));
ptd += 8;
ptr += 8;
if(tpr - ptr > 8)
{
goto ptl_ptr8;
}
continue;
}
tpl_tpr8:
if((*(tpl) > *(tpr - 7)) <= 0)
{
tpd -= 7;
tpr -= 7;
memcpy(tpd--, tpr--, 8 * sizeof(unsigned long long));
if(tpr - ptr > 8)
{
goto tpl_tpr8;
}
continue;
}
}
if(tpd - ptd < 16)
{
break;
}
{
loop = 8;
do
{
x = (*(ptl) > *(ptr)) <= 0;
*ptd = *ptl;
ptl += x;
ptd[x] = *ptr;
ptr += (int)!x;
ptd++;
;
y = (*(tpl) > *(tpr)) <= 0;
*tpd = *tpl;
tpl -= (int)!y;
tpd--;
tpd[y] = *tpr;
tpr -= y;
;
}while(--loop);
}
}
while(ptl <= tpl && ptr <= tpr)
{
*ptd++ = (*(ptl) > *(ptr)) <= 0 ? *ptl++ : *ptr++;
}
while(ptl <= tpl)
{
*ptd++ = *ptl++;
}
while(ptr <= tpr)
{
*ptd++ = *ptr++;
}
}

void tiny_sort8(char * array, char * swap, size_t nmemb, CMPFUNCPTR cmp, void * arg)
{
char tmp;
size_t x;

switch(nmemb)
{
case 0:
case 1:
return ;
case 2:
x = cmp(arg, array, array + 1) > 0;
tmp = array[(int)!x];
array[0] = array[x];
array[1] = tmp;
;
return ;
case 3:
x = cmp(arg, array, array + 1) > 0;
tmp = array[(int)!x];
array[0] = array[x];
array[1] = tmp;
;
array++;
x = cmp(arg, array, array + 1) > 0;
tmp = array[(int)!x];
array[0] = array[x];
array[1] = tmp;
;
array--;
x = cmp(arg, array, array + 1) > 0;
tmp = array[(int)!x];
array[0] = array[x];
array[1] = tmp;
;
return ;
case 4:
parity_swap_four8(array, cmp, arg);
return ;
case 5:
parity_swap_five8(array, cmp, arg);
return ;
case 6:
parity_swap_six8(array, swap, cmp, arg);
return ;
case 7:
parity_swap_seven8(array, swap, cmp, arg);
return ;
}
}

void cross_merge8(char * dest, char * from, size_t left, size_t right, CMPFUNCPTR cmp, void * arg)
{
char * ptl, * tpl, * ptr, * tpr, * ptd, * tpd;
size_t loop;
size_t x, y;

ptl = from;
ptr = from + left;
tpl = ptr - 1;
tpr = tpl + right;
if(left + 1 >= right && right >= left && left >= 32)
{
if(cmp(arg, ptl + 15, ptr) > 0 && cmp(arg, ptl, ptr + 15) <= 0 && cmp(arg, tpl, tpr - 15) > 0 && cmp(arg, tpl - 15, tpr) <= 0)
{
parity_merge8(dest, from, left, right, cmp, arg);
return ;
}
}
ptd = dest;
tpd = dest + left + right - 1;
while(1)
{
if(tpl - ptl > 8)
{
ptl8_ptr:
if(cmp(arg, ptl + 7, ptr) <= 0)
{
memcpy(ptd, ptl, 8 * sizeof(char));
ptd += 8;
ptl += 8;
if(tpl - ptl > 8)
{
goto ptl8_ptr;
}
continue;
}
tpl8_tpr:
if(cmp(arg, tpl - 7, tpr) > 0)
{
tpd -= 7;
tpl -= 7;
memcpy(tpd--, tpl--, 8 * sizeof(char));
if(tpl - ptl > 8)
{
goto tpl8_tpr;
}
continue;
}
}
if(tpr - ptr > 8)
{
ptl_ptr8:
if(cmp(arg, ptl, ptr + 7) > 0)
{
memcpy(ptd, ptr, 8 * sizeof(char));
ptd += 8;
ptr += 8;
if(tpr - ptr > 8)
{
goto ptl_ptr8;
}
continue;
}
tpl_tpr8:
if(cmp(arg, tpl, tpr - 7) <= 0)
{
tpd -= 7;
tpr -= 7;
memcpy(tpd--, tpr--, 8 * sizeof(char));
if(tpr - ptr > 8)
{
goto tpl_tpr8;
}
continue;
}
}
if(tpd - ptd < 16)
{
break;
}
if(left > 4294967295)
{
loop = 8;
do
{
*ptd++ = cmp(arg, ptl, ptr) <= 0 ? *ptl++ : *ptr++;
*tpd-- = cmp(arg, tpl, tpr) > 0 ? *tpl-- : *tpr--;
}while(--loop);
}
else
{
loop = 8;
do
{
x = cmp(arg, ptl, ptr) <= 0;
*ptd = *ptl;
ptl += x;
ptd[x] = *ptr;
ptr += (int)!x;
ptd++;
;
y = cmp(arg, tpl, tpr) <= 0;
*tpd = *tpl;
tpl -= (int)!y;
tpd--;
tpd[y] = *tpr;
tpr -= y;
;
}while(--loop);
}
}
while(ptl <= tpl && ptr <= tpr)
{
*ptd++ = cmp(arg, ptl, ptr) <= 0 ? *ptl++ : *ptr++;
}
while(ptl <= tpl)
{
*ptd++ = *ptl++;
}
while(ptr <= tpr)
{
*ptd++ = *ptr++;
}
}

void tiny_sort16(short * array, short * swap, size_t nmemb, CMPFUNCPTR cmp, void * arg)
{
short tmp;
size_t x;

switch(nmemb)
{
case 0:
case 1:
return ;
case 2:
x = cmp(arg, array, array + 1) > 0;
tmp = array[(int)!x];
array[0] = array[x];
array[1] = tmp;
;
return ;
case 3:
x = cmp(arg, array, array + 1) > 0;
tmp = array[(int)!x];
array[0] = array[x];
array[1] = tmp;
;
array++;
x = cmp(arg, array, array + 1) > 0;
tmp = array[(int)!x];
array[0] = array[x];
array[1] = tmp;
;
array--;
x = cmp(arg, array, array + 1) > 0;
tmp = array[(int)!x];
array[0] = array[x];
array[1] = tmp;
;
return ;
case 4:
parity_swap_four16(array, cmp, arg);
return ;
case 5:
parity_swap_five16(array, cmp, arg);
return ;
case 6:
parity_swap_six16(array, swap, cmp, arg);
return ;
case 7:
parity_swap_seven16(array, swap, cmp, arg);
return ;
}
}

void cross_merge16(short * dest, short * from, size_t left, size_t right, CMPFUNCPTR cmp, void * arg)
{
short * ptl, * tpl, * ptr, * tpr, * ptd, * tpd;
size_t loop;
size_t x, y;

ptl = from;
ptr = from + left;
tpl = ptr - 1;
tpr = tpl + right;
if(left + 1 >= right && right >= left && left >= 32)
{
if(cmp(arg, ptl + 15, ptr) > 0 && cmp(arg, ptl, ptr + 15) <= 0 && cmp(arg, tpl, tpr - 15) > 0 && cmp(arg, tpl - 15, tpr) <= 0)
{
parity_merge16(dest, from, left, right, cmp, arg);
return ;
}
}
ptd = dest;
tpd = dest + left + right - 1;
while(1)
{
if(tpl - ptl > 8)
{
ptl8_ptr:
if(cmp(arg, ptl + 7, ptr) <= 0)
{
memcpy(ptd, ptl, 8 * sizeof(short));
ptd += 8;
ptl += 8;
if(tpl - ptl > 8)
{
goto ptl8_ptr;
}
continue;
}
tpl8_tpr:
if(cmp(arg, tpl - 7, tpr) > 0)
{
tpd -= 7;
tpl -= 7;
memcpy(tpd--, tpl--, 8 * sizeof(short));
if(tpl - ptl > 8)
{
goto tpl8_tpr;
}
continue;
}
}
if(tpr - ptr > 8)
{
ptl_ptr8:
if(cmp(arg, ptl, ptr + 7) > 0)
{
memcpy(ptd, ptr, 8 * sizeof(short));
ptd += 8;
ptr += 8;
if(tpr - ptr > 8)
{
goto ptl_ptr8;
}
continue;
}
tpl_tpr8:
if(cmp(arg, tpl, tpr - 7) <= 0)
{
tpd -= 7;
tpr -= 7;
memcpy(tpd--, tpr--, 8 * sizeof(short));
if(tpr - ptr > 8)
{
goto tpl_tpr8;
}
continue;
}
}
if(tpd - ptd < 16)
{
break;
}
if(left > 4294967295)
{
loop = 8;
do
{
*ptd++ = cmp(arg, ptl, ptr) <= 0 ? *ptl++ : *ptr++;
*tpd-- = cmp(arg, tpl, tpr) > 0 ? *tpl-- : *tpr--;
}while(--loop);
}
else
{
loop = 8;
do
{
x = cmp(arg, ptl, ptr) <= 0;
*ptd = *ptl;
ptl += x;
ptd[x] = *ptr;
ptr += (int)!x;
ptd++;
;
y = cmp(arg, tpl, tpr) <= 0;
*tpd = *tpl;
tpl -= (int)!y;
tpd--;
tpd[y] = *tpr;
tpr -= y;
;
}while(--loop);
}
}
while(ptl <= tpl && ptr <= tpr)
{
*ptd++ = cmp(arg, ptl, ptr) <= 0 ? *ptl++ : *ptr++;
}
while(ptl <= tpl)
{
*ptd++ = *ptl++;
}
while(ptr <= tpr)
{
*ptd++ = *ptr++;
}
}

void tiny_sort128(long double * array, long double * swap, size_t nmemb, CMPFUNCPTR cmp, void * arg)
{
long double tmp;
size_t x;

switch(nmemb)
{
case 0:
case 1:
return ;
case 2:
x = cmp(arg, array, array + 1) > 0;
tmp = array[(int)!x];
array[0] = array[x];
array[1] = tmp;
;
return ;
case 3:
x = cmp(arg, array, array + 1) > 0;
tmp = array[(int)!x];
array[0] = array[x];
array[1] = tmp;
;
array++;
x = cmp(arg, array, array + 1) > 0;
tmp = array[(int)!x];
array[0] = array[x];
array[1] = tmp;
;
array--;
x = cmp(arg, array, array + 1) > 0;
tmp = array[(int)!x];
array[0] = array[x];
array[1] = tmp;
;
return ;
case 4:
parity_swap_four128(array, cmp, arg);
return ;
case 5:
parity_swap_five128(array, cmp, arg);
return ;
case 6:
parity_swap_six128(array, swap, cmp, arg);
return ;
case 7:
parity_swap_seven128(array, swap, cmp, arg);
return ;
}
}

void cross_merge128(long double * dest, long double * from, size_t left, size_t right, CMPFUNCPTR cmp, void * arg)
{
long double * ptl, * tpl, * ptr, * tpr, * ptd, * tpd;
size_t loop;
size_t x, y;

ptl = from;
ptr = from + left;
tpl = ptr - 1;
tpr = tpl + right;
if(left + 1 >= right && right >= left && left >= 32)
{
if(cmp(arg, ptl + 15, ptr) > 0 && cmp(arg, ptl, ptr + 15) <= 0 && cmp(arg, tpl, tpr - 15) > 0 && cmp(arg, tpl - 15, tpr) <= 0)
{
parity_merge128(dest, from, left, right, cmp, arg);
return ;
}
}
ptd = dest;
tpd = dest + left + right - 1;
while(1)
{
if(tpl - ptl > 8)
{
ptl8_ptr:
if(cmp(arg, ptl + 7, ptr) <= 0)
{
memcpy(ptd, ptl, 8 * sizeof(long double));
ptd += 8;
ptl += 8;
if(tpl - ptl > 8)
{
goto ptl8_ptr;
}
continue;
}
tpl8_tpr:
if(cmp(arg, tpl - 7, tpr) > 0)
{
tpd -= 7;
tpl -= 7;
memcpy(tpd--, tpl--, 8 * sizeof(long double));
if(tpl - ptl > 8)
{
goto tpl8_tpr;
}
continue;
}
}
if(tpr - ptr > 8)
{
ptl_ptr8:
if(cmp(arg, ptl, ptr + 7) > 0)
{
memcpy(ptd, ptr, 8 * sizeof(long double));
ptd += 8;
ptr += 8;
if(tpr - ptr > 8)
{
goto ptl_ptr8;
}
continue;
}
tpl_tpr8:
if(cmp(arg, tpl, tpr - 7) <= 0)
{
tpd -= 7;
tpr -= 7;
memcpy(tpd--, tpr--, 8 * sizeof(long double));
if(tpr - ptr > 8)
{
goto tpl_tpr8;
}
continue;
}
}
if(tpd - ptd < 16)
{
break;
}
if(left > 4294967295)
{
loop = 8;
do
{
*ptd++ = cmp(arg, ptl, ptr) <= 0 ? *ptl++ : *ptr++;
*tpd-- = cmp(arg, tpl, tpr) > 0 ? *tpl-- : *tpr--;
}while(--loop);
}
else
{
loop = 8;
do
{
x = cmp(arg, ptl, ptr) <= 0;
*ptd = *ptl;
ptl += x;
ptd[x] = *ptr;
ptr += (int)!x;
ptd++;
;
y = cmp(arg, tpl, tpr) <= 0;
*tpd = *tpl;
tpl -= (int)!y;
tpd--;
tpd[y] = *tpr;
tpr -= y;
;
}while(--loop);
}
}
while(ptl <= tpl && ptr <= tpr)
{
*ptd++ = cmp(arg, ptl, ptr) <= 0 ? *ptl++ : *ptr++;
}
while(ptl <= tpl)
{
*ptd++ = *ptl++;
}
while(ptr <= tpr)
{
*ptd++ = *ptr++;
}
}

int * crum_median_of_nine32(int * array, size_t nmemb, CMPFUNCPTR cmp, void * arg)
{
size_t x, y, z, div = nmemb / 16;

x = crum_median_of_three32(array, div * 2, div * 1, div * 4, cmp, arg);
y = crum_median_of_three32(array, div * 8, div * 6, div * 10, cmp, arg);
z = crum_median_of_three32(array, div * 14, div * 12, div * 15, cmp, arg);
return array + crum_median_of_three32(array, x, y, z, cmp, arg);
}

int * crum_median_of_nine_int32(int * array, size_t nmemb, CMPFUNCPTR cmp, void * arg)
{
size_t x, y, z, div = nmemb / 16;

x = crum_median_of_three_int32(array, div * 2, div * 1, div * 4, cmp, arg);
y = crum_median_of_three_int32(array, div * 8, div * 6, div * 10, cmp, arg);
z = crum_median_of_three_int32(array, div * 14, div * 12, div * 15, cmp, arg);
return array + crum_median_of_three_int32(array, x, y, z, cmp, arg);
}

unsigned int * crum_median_of_nine_uint32(unsigned int * array, size_t nmemb, CMPFUNCPTR cmp, void * arg)
{
size_t x, y, z, div = nmemb / 16;

x = crum_median_of_three_uint32(array, div * 2, div * 1, div * 4, cmp, arg);
y = crum_median_of_three_uint32(array, div * 8, div * 6, div * 10, cmp, arg);
z = crum_median_of_three_uint32(array, div * 14, div * 12, div * 15, cmp, arg);
return array + crum_median_of_three_uint32(array, x, y, z, cmp, arg);
}

long long * crum_median_of_nine64(long long * array, size_t nmemb, CMPFUNCPTR cmp, void * arg)
{
size_t x, y, z, div = nmemb / 16;

x = crum_median_of_three64(array, div * 2, div * 1, div * 4, cmp, arg);
y = crum_median_of_three64(array, div * 8, div * 6, div * 10, cmp, arg);
z = crum_median_of_three64(array, div * 14, div * 12, div * 15, cmp, arg);
return array + crum_median_of_three64(array, x, y, z, cmp, arg);
}

long long * crum_median_of_nine_int64(long long * array, size_t nmemb, CMPFUNCPTR cmp, void * arg)
{
size_t x, y, z, div = nmemb / 16;

x = crum_median_of_three_int64(array, div * 2, div * 1, div * 4, cmp, arg);
y = crum_median_of_three_int64(array, div * 8, div * 6, div * 10, cmp, arg);
z = crum_median_of_three_int64(array, div * 14, div * 12, div * 15, cmp, arg);
return array + crum_median_of_three_int64(array, x, y, z, cmp, arg);
}

unsigned long long * crum_median_of_nine_uint64(unsigned long long * array, size_t nmemb, CMPFUNCPTR cmp, void * arg)
{
size_t x, y, z, div = nmemb / 16;

x = crum_median_of_three_uint64(array, div * 2, div * 1, div * 4, cmp, arg);
y = crum_median_of_three_uint64(array, div * 8, div * 6, div * 10, cmp, arg);
z = crum_median_of_three_uint64(array, div * 14, div * 12, div * 15, cmp, arg);
return array + crum_median_of_three_uint64(array, x, y, z, cmp, arg);
}

char * crum_median_of_nine8(char * array, size_t nmemb, CMPFUNCPTR cmp, void * arg)
{
size_t x, y, z, div = nmemb / 16;

x = crum_median_of_three8(array, div * 2, div * 1, div * 4, cmp, arg);
y = crum_median_of_three8(array, div * 8, div * 6, div * 10, cmp, arg);
z = crum_median_of_three8(array, div * 14, div * 12, div * 15, cmp, arg);
return array + crum_median_of_three8(array, x, y, z, cmp, arg);
}

short * crum_median_of_nine16(short * array, size_t nmemb, CMPFUNCPTR cmp, void * arg)
{
size_t x, y, z, div = nmemb / 16;

x = crum_median_of_three16(array, div * 2, div * 1, div * 4, cmp, arg);
y = crum_median_of_three16(array, div * 8, div * 6, div * 10, cmp, arg);
z = crum_median_of_three16(array, div * 14, div * 12, div * 15, cmp, arg);
return array + crum_median_of_three16(array, x, y, z, cmp, arg);
}

long double * crum_median_of_nine128(long double * array, size_t nmemb, CMPFUNCPTR cmp, void * arg)
{
size_t x, y, z, div = nmemb / 16;

x = crum_median_of_three128(array, div * 2, div * 1, div * 4, cmp, arg);
y = crum_median_of_three128(array, div * 8, div * 6, div * 10, cmp, arg);
z = crum_median_of_three128(array, div * 14, div * 12, div * 15, cmp, arg);
return array + crum_median_of_three128(array, x, y, z, cmp, arg);
}

void tail_swap32(int * array, int * swap, size_t nmemb, CMPFUNCPTR cmp, void * arg)
{
if(nmemb < 8)
tiny_sort32(array, swap, nmemb, cmp, arg);
else
{
int * pta = array;
size_t half1 = nmemb / 2;
size_t quad1 = half1 / 2;
size_t quad2 = half1 - quad1;
size_t half2 = nmemb - half1;
size_t quad3 = half2 / 2;
size_t quad4 = half2 - quad3;

tail_swap32(pta, swap, quad1, cmp, arg);
pta += quad1;
tail_swap32(pta, swap, quad2, cmp, arg);
pta += quad2;
tail_swap32(pta, swap, quad3, cmp, arg);
pta += quad3;
tail_swap32(pta, swap, quad4, cmp, arg);
if(cmp(arg, array + quad1 - 1, array + quad1) <= 0 && cmp(arg, array + half1 - 1, array + half1) <= 0 && cmp(arg, pta - 1, pta) <= 0)
return ;
parity_merge32(swap, array, quad1, quad2, cmp, arg);
parity_merge32(swap + half1, array + half1, quad3, quad4, cmp, arg);
parity_merge32(array, swap, half1, half2, cmp, arg);
}
}

void quad_merge_block32(int * array, int * swap, size_t block, CMPFUNCPTR cmp, void * arg)
{
int * pt1, * pt2, * pt3;
size_t block_x_2 = block * 2;

pt1 = array + block;
pt2 = pt1 + block;
pt3 = pt2 + block;
switch((cmp(arg, pt1 - 1, pt1) <= 0) | (cmp(arg, pt3 - 1, pt3) <= 0) * 2)
{
case 0:
cross_merge32(swap, array, block, block, cmp, arg);
cross_merge32(swap + block_x_2, pt2, block, block, cmp, arg);
break;
case 1:
memcpy(swap, array, block_x_2 * sizeof(int));
cross_merge32(swap + block_x_2, pt2, block, block, cmp, arg);
break;
case 2:
cross_merge32(swap, array, block, block, cmp, arg);
memcpy(swap + block_x_2, pt2, block_x_2 * sizeof(int));
break;
case 3:
if(cmp(arg, pt2 - 1, pt2) <= 0)
return ;
memcpy(swap, array, block_x_2 * 2 * sizeof(int));
}
cross_merge32(array, swap, block_x_2, block_x_2, cmp, arg);
}

void partial_backward_merge32(int * array, int * swap, size_t swap_size, size_t nmemb, size_t block, CMPFUNCPTR cmp, void * arg)
{
int * tpl, * tpa, * tpr;
size_t right, loop, x;

if(nmemb == block)
{
return ;
}
tpl = array + block - 1;
tpa = array + nmemb - 1;
if(cmp(arg, tpl, tpl + 1) <= 0)
{
return ;
}
right = nmemb - block;
if(nmemb <= swap_size && right >= 64)
{
cross_merge32(swap, array, block, right, cmp, arg);
memcpy(array, swap, nmemb * sizeof(int));
return ;
}
memcpy(swap, array + block, right * sizeof(int));
tpr = swap + right - 1;
while(tpl > array + 16 && tpr > swap + 16)
{
tpl_tpr16:
if(cmp(arg, tpl, tpr - 15) <= 0)
{
loop = 16;
do
*tpa-- = *tpr--;while(--loop);
if(tpr > swap + 16)
{
goto tpl_tpr16;
}
break;
}
tpl16_tpr:
if(cmp(arg, tpl - 15, tpr) > 0)
{
loop = 16;
do
*tpa-- = *tpl--;while(--loop);
if(tpl > array + 16)
{
goto tpl16_tpr;
}
break;
}
loop = 8;
do
{
if(cmp(arg, tpl, tpr - 1) <= 0)
{
*tpa-- = *tpr--;
*tpa-- = *tpr--;
}
else if(cmp(arg, tpl - 1, tpr) > 0)
{
*tpa-- = *tpl--;
*tpa-- = *tpl--;
}
else
{
x = cmp(arg, tpl, tpr) <= 0;
tpa--;
tpa[x] = *tpr;
tpr -= 1;
tpa[!x] = *tpl;
tpl -= 1;
tpa--;
x = cmp(arg, tpl, tpr) <= 0;
*tpa = *tpl;
tpl -= (int)!x;
tpa--;
tpa[x] = *tpr;
tpr -= x;
;
}
}while(--loop);
}
while(tpr > swap + 1 && tpl > array + 1)
{
tpr2:
if(cmp(arg, tpl, tpr - 1) <= 0)
{
*tpa-- = *tpr--;
*tpa-- = *tpr--;
if(tpr > swap + 1)
{
goto tpr2;
}
break;
}
if(cmp(arg, tpl - 1, tpr) > 0)
{
*tpa-- = *tpl--;
*tpa-- = *tpl--;
if(tpl > array + 1)
{
goto tpl2;
}
break;
}
goto cross_swap;
tpl2:
if(cmp(arg, tpl - 1, tpr) > 0)
{
*tpa-- = *tpl--;
*tpa-- = *tpl--;
if(tpl > array + 1)
{
goto tpl2;
}
break;
}
if(cmp(arg, tpl, tpr - 1) <= 0)
{
*tpa-- = *tpr--;
*tpa-- = *tpr--;
if(tpr > swap + 1)
{
goto tpr2;
}
break;
}
cross_swap:
x = cmp(arg, tpl, tpr) <= 0;
tpa--;
tpa[x] = *tpr;
tpr -= 1;
tpa[!x] = *tpl;
tpl -= 1;
tpa--;
x = cmp(arg, tpl, tpr) <= 0;
*tpa = *tpl;
tpl -= (int)!x;
tpa--;
tpa[x] = *tpr;
tpr -= x;
;
}
while(tpr >= swap && tpl >= array)
{
*tpa-- = cmp(arg, tpl, tpr) > 0 ? *tpl-- : *tpr--;
}
while(tpr >= swap)
{
*tpa-- = *tpr--;
}
}

void tail_swap_int32(int * array, int * swap, size_t nmemb, CMPFUNCPTR cmp, void * arg)
{
if(nmemb < 8)
tiny_sort_int32(array, swap, nmemb, cmp, arg);
else
{
int * pta = array;
size_t half1 = nmemb / 2;
size_t quad1 = half1 / 2;
size_t quad2 = half1 - quad1;
size_t half2 = nmemb - half1;
size_t quad3 = half2 / 2;
size_t quad4 = half2 - quad3;

tail_swap_int32(pta, swap, quad1, cmp, arg);
pta += quad1;
tail_swap_int32(pta, swap, quad2, cmp, arg);
pta += quad2;
tail_swap_int32(pta, swap, quad3, cmp, arg);
pta += quad3;
tail_swap_int32(pta, swap, quad4, cmp, arg);
if((*(array + quad1 - 1) > *(array + quad1)) <= 0 && (*(array + half1 - 1) > *(array + half1)) <= 0 && (*(pta - 1) > *(pta)) <= 0)
return ;
parity_merge_int32(swap, array, quad1, quad2, cmp, arg);
parity_merge_int32(swap + half1, array + half1, quad3, quad4, cmp, arg);
parity_merge_int32(array, swap, half1, half2, cmp, arg);
}
}

void quad_merge_block_int32(int * array, int * swap, size_t block, CMPFUNCPTR cmp, void * arg)
{
int * pt1, * pt2, * pt3;
size_t block_x_2 = block * 2;

pt1 = array + block;
pt2 = pt1 + block;
pt3 = pt2 + block;
switch(((*(pt1 - 1) > *(pt1)) <= 0) | ((*(pt3 - 1) > *(pt3)) <= 0) * 2)
{
case 0:
cross_merge_int32(swap, array, block, block, cmp, arg);
cross_merge_int32(swap + block_x_2, pt2, block, block, cmp, arg);
break;
case 1:
memcpy(swap, array, block_x_2 * sizeof(int));
cross_merge_int32(swap + block_x_2, pt2, block, block, cmp, arg);
break;
case 2:
cross_merge_int32(swap, array, block, block, cmp, arg);
memcpy(swap + block_x_2, pt2, block_x_2 * sizeof(int));
break;
case 3:
if((*(pt2 - 1) > *(pt2)) <= 0)
return ;
memcpy(swap, array, block_x_2 * 2 * sizeof(int));
}
cross_merge_int32(array, swap, block_x_2, block_x_2, cmp, arg);
}

void partial_backward_merge_int32(int * array, int * swap, size_t swap_size, size_t nmemb, size_t block, CMPFUNCPTR cmp, void * arg)
{
int * tpl, * tpa, * tpr;
size_t right, loop, x;

if(nmemb == block)
{
return ;
}
tpl = array + block - 1;
tpa = array + nmemb - 1;
if((*(tpl) > *(tpl + 1)) <= 0)
{
return ;
}
right = nmemb - block;
if(nmemb <= swap_size && right >= 64)
{
cross_merge_int32(swap, array, block, right, cmp, arg);
memcpy(array, swap, nmemb * sizeof(int));
return ;
}
memcpy(swap, array + block, right * sizeof(int));
tpr = swap + right - 1;
while(tpl > array + 16 && tpr > swap + 16)
{
tpl_tpr16:
if((*(tpl) > *(tpr - 15)) <= 0)
{
loop = 16;
do
*tpa-- = *tpr--;while(--loop);
if(tpr > swap + 16)
{
goto tpl_tpr16;
}
break;
}
tpl16_tpr:
if((*(tpl - 15) > *(tpr)) > 0)
{
loop = 16;
do
*tpa-- = *tpl--;while(--loop);
if(tpl > array + 16)
{
goto tpl16_tpr;
}
break;
}
loop = 8;
do
{
if((*(tpl) > *(tpr - 1)) <= 0)
{
*tpa-- = *tpr--;
*tpa-- = *tpr--;
}
else if((*(tpl - 1) > *(tpr)) > 0)
{
*tpa-- = *tpl--;
*tpa-- = *tpl--;
}
else
{
x = (*(tpl) > *(tpr)) <= 0;
tpa--;
tpa[x] = *tpr;
tpr -= 1;
tpa[!x] = *tpl;
tpl -= 1;
tpa--;
x = (*(tpl) > *(tpr)) <= 0;
*tpa = *tpl;
tpl -= (int)!x;
tpa--;
tpa[x] = *tpr;
tpr -= x;
;
}
}while(--loop);
}
while(tpr > swap + 1 && tpl > array + 1)
{
tpr2:
if((*(tpl) > *(tpr - 1)) <= 0)
{
*tpa-- = *tpr--;
*tpa-- = *tpr--;
if(tpr > swap + 1)
{
goto tpr2;
}
break;
}
if((*(tpl - 1) > *(tpr)) > 0)
{
*tpa-- = *tpl--;
*tpa-- = *tpl--;
if(tpl > array + 1)
{
goto tpl2;
}
break;
}
goto cross_swap;
tpl2:
if((*(tpl - 1) > *(tpr)) > 0)
{
*tpa-- = *tpl--;
*tpa-- = *tpl--;
if(tpl > array + 1)
{
goto tpl2;
}
break;
}
if((*(tpl) > *(tpr - 1)) <= 0)
{
*tpa-- = *tpr--;
*tpa-- = *tpr--;
if(tpr > swap + 1)
{
goto tpr2;
}
break;
}
cross_swap:
x = (*(tpl) > *(tpr)) <= 0;
tpa--;
tpa[x] = *tpr;
tpr -= 1;
tpa[!x] = *tpl;
tpl -= 1;
tpa--;
x = (*(tpl) > *(tpr)) <= 0;
*tpa = *tpl;
tpl -= (int)!x;
tpa--;
tpa[x] = *tpr;
tpr -= x;
;
}
while(tpr >= swap && tpl >= array)
{
*tpa-- = (*(tpl) > *(tpr)) > 0 ? *tpl-- : *tpr--;
}
while(tpr >= swap)
{
*tpa-- = *tpr--;
}
}

void tail_swap_uint32(unsigned int * array, unsigned int * swap, size_t nmemb, CMPFUNCPTR cmp, void * arg)
{
if(nmemb < 8)
tiny_sort_uint32(array, swap, nmemb, cmp, arg);
else
{
unsigned int * pta = array;
size_t half1 = nmemb / 2;
size_t quad1 = half1 / 2;
size_t quad2 = half1 - quad1;
size_t half2 = nmemb - half1;
size_t quad3 = half2 / 2;
size_t quad4 = half2 - quad3;

tail_swap_uint32(pta, swap, quad1, cmp, arg);
pta += quad1;
tail_swap_uint32(pta, swap, quad2, cmp, arg);
pta += quad2;
tail_swap_uint32(pta, swap, quad3, cmp, arg);
pta += quad3;
tail_swap_uint32(pta, swap, quad4, cmp, arg);
if((*(array + quad1 - 1) > *(array + quad1)) <= 0 && (*(array + half1 - 1) > *(array + half1)) <= 0 && (*(pta - 1) > *(pta)) <= 0)
return ;
parity_merge_uint32(swap, array, quad1, quad2, cmp, arg);
parity_merge_uint32(swap + half1, array + half1, quad3, quad4, cmp, arg);
parity_merge_uint32(array, swap, half1, half2, cmp, arg);
}
}

void quad_merge_block_uint32(unsigned int * array, unsigned int * swap, size_t block, CMPFUNCPTR cmp, void * arg)
{
unsigned int * pt1, * pt2, * pt3;
size_t block_x_2 = block * 2;

pt1 = array + block;
pt2 = pt1 + block;
pt3 = pt2 + block;
switch(((*(pt1 - 1) > *(pt1)) <= 0) | ((*(pt3 - 1) > *(pt3)) <= 0) * 2)
{
case 0:
cross_merge_uint32(swap, array, block, block, cmp, arg);
cross_merge_uint32(swap + block_x_2, pt2, block, block, cmp, arg);
break;
case 1:
memcpy(swap, array, block_x_2 * sizeof(unsigned int));
cross_merge_uint32(swap + block_x_2, pt2, block, block, cmp, arg);
break;
case 2:
cross_merge_uint32(swap, array, block, block, cmp, arg);
memcpy(swap + block_x_2, pt2, block_x_2 * sizeof(unsigned int));
break;
case 3:
if((*(pt2 - 1) > *(pt2)) <= 0)
return ;
memcpy(swap, array, block_x_2 * 2 * sizeof(unsigned int));
}
cross_merge_uint32(array, swap, block_x_2, block_x_2, cmp, arg);
}

void partial_backward_merge_uint32(unsigned int * array, unsigned int * swap, size_t swap_size, size_t nmemb, size_t block, CMPFUNCPTR cmp, void * arg)
{
unsigned int * tpl, * tpa, * tpr;
size_t right, loop, x;

if(nmemb == block)
{
return ;
}
tpl = array + block - 1;
tpa = array + nmemb - 1;
if((*(tpl) > *(tpl + 1)) <= 0)
{
return ;
}
right = nmemb - block;
if(nmemb <= swap_size && right >= 64)
{
cross_merge_uint32(swap, array, block, right, cmp, arg);
memcpy(array, swap, nmemb * sizeof(unsigned int));
return ;
}
memcpy(swap, array + block, right * sizeof(unsigned int));
tpr = swap + right - 1;
while(tpl > array + 16 && tpr > swap + 16)
{
tpl_tpr16:
if((*(tpl) > *(tpr - 15)) <= 0)
{
loop = 16;
do
*tpa-- = *tpr--;while(--loop);
if(tpr > swap + 16)
{
goto tpl_tpr16;
}
break;
}
tpl16_tpr:
if((*(tpl - 15) > *(tpr)) > 0)
{
loop = 16;
do
*tpa-- = *tpl--;while(--loop);
if(tpl > array + 16)
{
goto tpl16_tpr;
}
break;
}
loop = 8;
do
{
if((*(tpl) > *(tpr - 1)) <= 0)
{
*tpa-- = *tpr--;
*tpa-- = *tpr--;
}
else if((*(tpl - 1) > *(tpr)) > 0)
{
*tpa-- = *tpl--;
*tpa-- = *tpl--;
}
else
{
x = (*(tpl) > *(tpr)) <= 0;
tpa--;
tpa[x] = *tpr;
tpr -= 1;
tpa[!x] = *tpl;
tpl -= 1;
tpa--;
x = (*(tpl) > *(tpr)) <= 0;
*tpa = *tpl;
tpl -= (int)!x;
tpa--;
tpa[x] = *tpr;
tpr -= x;
;
}
}while(--loop);
}
while(tpr > swap + 1 && tpl > array + 1)
{
tpr2:
if((*(tpl) > *(tpr - 1)) <= 0)
{
*tpa-- = *tpr--;
*tpa-- = *tpr--;
if(tpr > swap + 1)
{
goto tpr2;
}
break;
}
if((*(tpl - 1) > *(tpr)) > 0)
{
*tpa-- = *tpl--;
*tpa-- = *tpl--;
if(tpl > array + 1)
{
goto tpl2;
}
break;
}
goto cross_swap;
tpl2:
if((*(tpl - 1) > *(tpr)) > 0)
{
*tpa-- = *tpl--;
*tpa-- = *tpl--;
if(tpl > array + 1)
{
goto tpl2;
}
break;
}
if((*(tpl) > *(tpr - 1)) <= 0)
{
*tpa-- = *tpr--;
*tpa-- = *tpr--;
if(tpr > swap + 1)
{
goto tpr2;
}
break;
}
cross_swap:
x = (*(tpl) > *(tpr)) <= 0;
tpa--;
tpa[x] = *tpr;
tpr -= 1;
tpa[!x] = *tpl;
tpl -= 1;
tpa--;
x = (*(tpl) > *(tpr)) <= 0;
*tpa = *tpl;
tpl -= (int)!x;
tpa--;
tpa[x] = *tpr;
tpr -= x;
;
}
while(tpr >= swap && tpl >= array)
{
*tpa-- = (*(tpl) > *(tpr)) > 0 ? *tpl-- : *tpr--;
}
while(tpr >= swap)
{
*tpa-- = *tpr--;
}
}

void tail_swap64(long long * array, long long * swap, size_t nmemb, CMPFUNCPTR cmp, void * arg)
{
if(nmemb < 8)
tiny_sort64(array, swap, nmemb, cmp, arg);
else
{
long long * pta = array;
size_t half1 = nmemb / 2;
size_t quad1 = half1 / 2;
size_t quad2 = half1 - quad1;
size_t half2 = nmemb - half1;
size_t quad3 = half2 / 2;
size_t quad4 = half2 - quad3;

tail_swap64(pta, swap, quad1, cmp, arg);
pta += quad1;
tail_swap64(pta, swap, quad2, cmp, arg);
pta += quad2;
tail_swap64(pta, swap, quad3, cmp, arg);
pta += quad3;
tail_swap64(pta, swap, quad4, cmp, arg);
if(cmp(arg, array + quad1 - 1, array + quad1) <= 0 && cmp(arg, array + half1 - 1, array + half1) <= 0 && cmp(arg, pta - 1, pta) <= 0)
return ;
parity_merge64(swap, array, quad1, quad2, cmp, arg);
parity_merge64(swap + half1, array + half1, quad3, quad4, cmp, arg);
parity_merge64(array, swap, half1, half2, cmp, arg);
}
}

void quad_merge_block64(long long * array, long long * swap, size_t block, CMPFUNCPTR cmp, void * arg)
{
long long * pt1, * pt2, * pt3;
size_t block_x_2 = block * 2;

pt1 = array + block;
pt2 = pt1 + block;
pt3 = pt2 + block;
switch((cmp(arg, pt1 - 1, pt1) <= 0) | (cmp(arg, pt3 - 1, pt3) <= 0) * 2)
{
case 0:
cross_merge64(swap, array, block, block, cmp, arg);
cross_merge64(swap + block_x_2, pt2, block, block, cmp, arg);
break;
case 1:
memcpy(swap, array, block_x_2 * sizeof(long long));
cross_merge64(swap + block_x_2, pt2, block, block, cmp, arg);
break;
case 2:
cross_merge64(swap, array, block, block, cmp, arg);
memcpy(swap + block_x_2, pt2, block_x_2 * sizeof(long long));
break;
case 3:
if(cmp(arg, pt2 - 1, pt2) <= 0)
return ;
memcpy(swap, array, block_x_2 * 2 * sizeof(long long));
}
cross_merge64(array, swap, block_x_2, block_x_2, cmp, arg);
}

void partial_backward_merge64(long long * array, long long * swap, size_t swap_size, size_t nmemb, size_t block, CMPFUNCPTR cmp, void * arg)
{
long long * tpl, * tpa, * tpr;
size_t right, loop, x;

if(nmemb == block)
{
return ;
}
tpl = array + block - 1;
tpa = array + nmemb - 1;
if(cmp(arg, tpl, tpl + 1) <= 0)
{
return ;
}
right = nmemb - block;
if(nmemb <= swap_size && right >= 64)
{
cross_merge64(swap, array, block, right, cmp, arg);
memcpy(array, swap, nmemb * sizeof(long long));
return ;
}
memcpy(swap, array + block, right * sizeof(long long));
tpr = swap + right - 1;
while(tpl > array + 16 && tpr > swap + 16)
{
tpl_tpr16:
if(cmp(arg, tpl, tpr - 15) <= 0)
{
loop = 16;
do
*tpa-- = *tpr--;while(--loop);
if(tpr > swap + 16)
{
goto tpl_tpr16;
}
break;
}
tpl16_tpr:
if(cmp(arg, tpl - 15, tpr) > 0)
{
loop = 16;
do
*tpa-- = *tpl--;while(--loop);
if(tpl > array + 16)
{
goto tpl16_tpr;
}
break;
}
loop = 8;
do
{
if(cmp(arg, tpl, tpr - 1) <= 0)
{
*tpa-- = *tpr--;
*tpa-- = *tpr--;
}
else if(cmp(arg, tpl - 1, tpr) > 0)
{
*tpa-- = *tpl--;
*tpa-- = *tpl--;
}
else
{
x = cmp(arg, tpl, tpr) <= 0;
tpa--;
tpa[x] = *tpr;
tpr -= 1;
tpa[!x] = *tpl;
tpl -= 1;
tpa--;
x = cmp(arg, tpl, tpr) <= 0;
*tpa = *tpl;
tpl -= (int)!x;
tpa--;
tpa[x] = *tpr;
tpr -= x;
;
}
}while(--loop);
}
while(tpr > swap + 1 && tpl > array + 1)
{
tpr2:
if(cmp(arg, tpl, tpr - 1) <= 0)
{
*tpa-- = *tpr--;
*tpa-- = *tpr--;
if(tpr > swap + 1)
{
goto tpr2;
}
break;
}
if(cmp(arg, tpl - 1, tpr) > 0)
{
*tpa-- = *tpl--;
*tpa-- = *tpl--;
if(tpl > array + 1)
{
goto tpl2;
}
break;
}
goto cross_swap;
tpl2:
if(cmp(arg, tpl - 1, tpr) > 0)
{
*tpa-- = *tpl--;
*tpa-- = *tpl--;
if(tpl > array + 1)
{
goto tpl2;
}
break;
}
if(cmp(arg, tpl, tpr - 1) <= 0)
{
*tpa-- = *tpr--;
*tpa-- = *tpr--;
if(tpr > swap + 1)
{
goto tpr2;
}
break;
}
cross_swap:
x = cmp(arg, tpl, tpr) <= 0;
tpa--;
tpa[x] = *tpr;
tpr -= 1;
tpa[!x] = *tpl;
tpl -= 1;
tpa--;
x = cmp(arg, tpl, tpr) <= 0;
*tpa = *tpl;
tpl -= (int)!x;
tpa--;
tpa[x] = *tpr;
tpr -= x;
;
}
while(tpr >= swap && tpl >= array)
{
*tpa-- = cmp(arg, tpl, tpr) > 0 ? *tpl-- : *tpr--;
}
while(tpr >= swap)
{
*tpa-- = *tpr--;
}
}

void tail_swap_int64(long long * array, long long * swap, size_t nmemb, CMPFUNCPTR cmp, void * arg)
{
if(nmemb < 8)
tiny_sort_int64(array, swap, nmemb, cmp, arg);
else
{
long long * pta = array;
size_t half1 = nmemb / 2;
size_t quad1 = half1 / 2;
size_t quad2 = half1 - quad1;
size_t half2 = nmemb - half1;
size_t quad3 = half2 / 2;
size_t quad4 = half2 - quad3;

tail_swap_int64(pta, swap, quad1, cmp, arg);
pta += quad1;
tail_swap_int64(pta, swap, quad2, cmp, arg);
pta += quad2;
tail_swap_int64(pta, swap, quad3, cmp, arg);
pta += quad3;
tail_swap_int64(pta, swap, quad4, cmp, arg);
if((*(array + quad1 - 1) > *(array + quad1)) <= 0 && (*(array + half1 - 1) > *(array + half1)) <= 0 && (*(pta - 1) > *(pta)) <= 0)
return ;
parity_merge_int64(swap, array, quad1, quad2, cmp, arg);
parity_merge_int64(swap + half1, array + half1, quad3, quad4, cmp, arg);
parity_merge_int64(array, swap, half1, half2, cmp, arg);
}
}

void quad_merge_block_int64(long long * array, long long * swap, size_t block, CMPFUNCPTR cmp, void * arg)
{
long long * pt1, * pt2, * pt3;
size_t block_x_2 = block * 2;

pt1 = array + block;
pt2 = pt1 + block;
pt3 = pt2 + block;
switch(((*(pt1 - 1) > *(pt1)) <= 0) | ((*(pt3 - 1) > *(pt3)) <= 0) * 2)
{
case 0:
cross_merge_int64(swap, array, block, block, cmp, arg);
cross_merge_int64(swap + block_x_2, pt2, block, block, cmp, arg);
break;
case 1:
memcpy(swap, array, block_x_2 * sizeof(long long));
cross_merge_int64(swap + block_x_2, pt2, block, block, cmp, arg);
break;
case 2:
cross_merge_int64(swap, array, block, block, cmp, arg);
memcpy(swap + block_x_2, pt2, block_x_2 * sizeof(long long));
break;
case 3:
if((*(pt2 - 1) > *(pt2)) <= 0)
return ;
memcpy(swap, array, block_x_2 * 2 * sizeof(long long));
}
cross_merge_int64(array, swap, block_x_2, block_x_2, cmp, arg);
}

void partial_backward_merge_int64(long long * array, long long * swap, size_t swap_size, size_t nmemb, size_t block, CMPFUNCPTR cmp, void * arg)
{
long long * tpl, * tpa, * tpr;
size_t right, loop, x;

if(nmemb == block)
{
return ;
}
tpl = array + block - 1;
tpa = array + nmemb - 1;
if((*(tpl) > *(tpl + 1)) <= 0)
{
return ;
}
right = nmemb - block;
if(nmemb <= swap_size && right >= 64)
{
cross_merge_int64(swap, array, block, right, cmp, arg);
memcpy(array, swap, nmemb * sizeof(long long));
return ;
}
memcpy(swap, array + block, right * sizeof(long long));
tpr = swap + right - 1;
while(tpl > array + 16 && tpr > swap + 16)
{
tpl_tpr16:
if((*(tpl) > *(tpr - 15)) <= 0)
{
loop = 16;
do
*tpa-- = *tpr--;while(--loop);
if(tpr > swap + 16)
{
goto tpl_tpr16;
}
break;
}
tpl16_tpr:
if((*(tpl - 15) > *(tpr)) > 0)
{
loop = 16;
do
*tpa-- = *tpl--;while(--loop);
if(tpl > array + 16)
{
goto tpl16_tpr;
}
break;
}
loop = 8;
do
{
if((*(tpl) > *(tpr - 1)) <= 0)
{
*tpa-- = *tpr--;
*tpa-- = *tpr--;
}
else if((*(tpl - 1) > *(tpr)) > 0)
{
*tpa-- = *tpl--;
*tpa-- = *tpl--;
}
else
{
x = (*(tpl) > *(tpr)) <= 0;
tpa--;
tpa[x] = *tpr;
tpr -= 1;
tpa[!x] = *tpl;
tpl -= 1;
tpa--;
x = (*(tpl) > *(tpr)) <= 0;
*tpa = *tpl;
tpl -= (int)!x;
tpa--;
tpa[x] = *tpr;
tpr -= x;
;
}
}while(--loop);
}
while(tpr > swap + 1 && tpl > array + 1)
{
tpr2:
if((*(tpl) > *(tpr - 1)) <= 0)
{
*tpa-- = *tpr--;
*tpa-- = *tpr--;
if(tpr > swap + 1)
{
goto tpr2;
}
break;
}
if((*(tpl - 1) > *(tpr)) > 0)
{
*tpa-- = *tpl--;
*tpa-- = *tpl--;
if(tpl > array + 1)
{
goto tpl2;
}
break;
}
goto cross_swap;
tpl2:
if((*(tpl - 1) > *(tpr)) > 0)
{
*tpa-- = *tpl--;
*tpa-- = *tpl--;
if(tpl > array + 1)
{
goto tpl2;
}
break;
}
if((*(tpl) > *(tpr - 1)) <= 0)
{
*tpa-- = *tpr--;
*tpa-- = *tpr--;
if(tpr > swap + 1)
{
goto tpr2;
}
break;
}
cross_swap:
x = (*(tpl) > *(tpr)) <= 0;
tpa--;
tpa[x] = *tpr;
tpr -= 1;
tpa[!x] = *tpl;
tpl -= 1;
tpa--;
x = (*(tpl) > *(tpr)) <= 0;
*tpa = *tpl;
tpl -= (int)!x;
tpa--;
tpa[x] = *tpr;
tpr -= x;
;
}
while(tpr >= swap && tpl >= array)
{
*tpa-- = (*(tpl) > *(tpr)) > 0 ? *tpl-- : *tpr--;
}
while(tpr >= swap)
{
*tpa-- = *tpr--;
}
}

void tail_swap_uint64(unsigned long long * array, unsigned long long * swap, size_t nmemb, CMPFUNCPTR cmp, void * arg)
{
if(nmemb < 8)
tiny_sort_uint64(array, swap, nmemb, cmp, arg);
else
{
unsigned long long * pta = array;
size_t half1 = nmemb / 2;
size_t quad1 = half1 / 2;
size_t quad2 = half1 - quad1;
size_t half2 = nmemb - half1;
size_t quad3 = half2 / 2;
size_t quad4 = half2 - quad3;

tail_swap_uint64(pta, swap, quad1, cmp, arg);
pta += quad1;
tail_swap_uint64(pta, swap, quad2, cmp, arg);
pta += quad2;
tail_swap_uint64(pta, swap, quad3, cmp, arg);
pta += quad3;
tail_swap_uint64(pta, swap, quad4, cmp, arg);
if((*(array + quad1 - 1) > *(array + quad1)) <= 0 && (*(array + half1 - 1) > *(array + half1)) <= 0 && (*(pta - 1) > *(pta)) <= 0)
return ;
parity_merge_uint64(swap, array, quad1, quad2, cmp, arg);
parity_merge_uint64(swap + half1, array + half1, quad3, quad4, cmp, arg);
parity_merge_uint64(array, swap, half1, half2, cmp, arg);
}
}

void quad_merge_block_uint64(unsigned long long * array, unsigned long long * swap, size_t block, CMPFUNCPTR cmp, void * arg)
{
unsigned long long * pt1, * pt2, * pt3;
size_t block_x_2 = block * 2;

pt1 = array + block;
pt2 = pt1 + block;
pt3 = pt2 + block;
switch(((*(pt1 - 1) > *(pt1)) <= 0) | ((*(pt3 - 1) > *(pt3)) <= 0) * 2)
{
case 0:
cross_merge_uint64(swap, array, block, block, cmp, arg);
cross_merge_uint64(swap + block_x_2, pt2, block, block, cmp, arg);
break;
case 1:
memcpy(swap, array, block_x_2 * sizeof(unsigned long long));
cross_merge_uint64(swap + block_x_2, pt2, block, block, cmp, arg);
break;
case 2:
cross_merge_uint64(swap, array, block, block, cmp, arg);
memcpy(swap + block_x_2, pt2, block_x_2 * sizeof(unsigned long long));
break;
case 3:
if((*(pt2 - 1) > *(pt2)) <= 0)
return ;
memcpy(swap, array, block_x_2 * 2 * sizeof(unsigned long long));
}
cross_merge_uint64(array, swap, block_x_2, block_x_2, cmp, arg);
}

void partial_backward_merge_uint64(unsigned long long * array, unsigned long long * swap, size_t swap_size, size_t nmemb, size_t block, CMPFUNCPTR cmp, void * arg)
{
unsigned long long * tpl, * tpa, * tpr;
size_t right, loop, x;

if(nmemb == block)
{
return ;
}
tpl = array + block - 1;
tpa = array + nmemb - 1;
if((*(tpl) > *(tpl + 1)) <= 0)
{
return ;
}
right = nmemb - block;
if(nmemb <= swap_size && right >= 64)
{
cross_merge_uint64(swap, array, block, right, cmp, arg);
memcpy(array, swap, nmemb * sizeof(unsigned long long));
return ;
}
memcpy(swap, array + block, right * sizeof(unsigned long long));
tpr = swap + right - 1;
while(tpl > array + 16 && tpr > swap + 16)
{
tpl_tpr16:
if((*(tpl) > *(tpr - 15)) <= 0)
{
loop = 16;
do
*tpa-- = *tpr--;while(--loop);
if(tpr > swap + 16)
{
goto tpl_tpr16;
}
break;
}
tpl16_tpr:
if((*(tpl - 15) > *(tpr)) > 0)
{
loop = 16;
do
*tpa-- = *tpl--;while(--loop);
if(tpl > array + 16)
{
goto tpl16_tpr;
}
break;
}
loop = 8;
do
{
if((*(tpl) > *(tpr - 1)) <= 0)
{
*tpa-- = *tpr--;
*tpa-- = *tpr--;
}
else if((*(tpl - 1) > *(tpr)) > 0)
{
*tpa-- = *tpl--;
*tpa-- = *tpl--;
}
else
{
x = (*(tpl) > *(tpr)) <= 0;
tpa--;
tpa[x] = *tpr;
tpr -= 1;
tpa[!x] = *tpl;
tpl -= 1;
tpa--;
x = (*(tpl) > *(tpr)) <= 0;
*tpa = *tpl;
tpl -= (int)!x;
tpa--;
tpa[x] = *tpr;
tpr -= x;
;
}
}while(--loop);
}
while(tpr > swap + 1 && tpl > array + 1)
{
tpr2:
if((*(tpl) > *(tpr - 1)) <= 0)
{
*tpa-- = *tpr--;
*tpa-- = *tpr--;
if(tpr > swap + 1)
{
goto tpr2;
}
break;
}
if((*(tpl - 1) > *(tpr)) > 0)
{
*tpa-- = *tpl--;
*tpa-- = *tpl--;
if(tpl > array + 1)
{
goto tpl2;
}
break;
}
goto cross_swap;
tpl2:
if((*(tpl - 1) > *(tpr)) > 0)
{
*tpa-- = *tpl--;
*tpa-- = *tpl--;
if(tpl > array + 1)
{
goto tpl2;
}
break;
}
if((*(tpl) > *(tpr - 1)) <= 0)
{
*tpa-- = *tpr--;
*tpa-- = *tpr--;
if(tpr > swap + 1)
{
goto tpr2;
}
break;
}
cross_swap:
x = (*(tpl) > *(tpr)) <= 0;
tpa--;
tpa[x] = *tpr;
tpr -= 1;
tpa[!x] = *tpl;
tpl -= 1;
tpa--;
x = (*(tpl) > *(tpr)) <= 0;
*tpa = *tpl;
tpl -= (int)!x;
tpa--;
tpa[x] = *tpr;
tpr -= x;
;
}
while(tpr >= swap && tpl >= array)
{
*tpa-- = (*(tpl) > *(tpr)) > 0 ? *tpl-- : *tpr--;
}
while(tpr >= swap)
{
*tpa-- = *tpr--;
}
}

void tail_swap8(char * array, char * swap, size_t nmemb, CMPFUNCPTR cmp, void * arg)
{
if(nmemb < 8)
tiny_sort8(array, swap, nmemb, cmp, arg);
else
{
char * pta = array;
size_t half1 = nmemb / 2;
size_t quad1 = half1 / 2;
size_t quad2 = half1 - quad1;
size_t half2 = nmemb - half1;
size_t quad3 = half2 / 2;
size_t quad4 = half2 - quad3;

tail_swap8(pta, swap, quad1, cmp, arg);
pta += quad1;
tail_swap8(pta, swap, quad2, cmp, arg);
pta += quad2;
tail_swap8(pta, swap, quad3, cmp, arg);
pta += quad3;
tail_swap8(pta, swap, quad4, cmp, arg);
if(cmp(arg, array + quad1 - 1, array + quad1) <= 0 && cmp(arg, array + half1 - 1, array + half1) <= 0 && cmp(arg, pta - 1, pta) <= 0)
return ;
parity_merge8(swap, array, quad1, quad2, cmp, arg);
parity_merge8(swap + half1, array + half1, quad3, quad4, cmp, arg);
parity_merge8(array, swap, half1, half2, cmp, arg);
}
}

void quad_merge_block8(char * array, char * swap, size_t block, CMPFUNCPTR cmp, void * arg)
{
char * pt1, * pt2, * pt3;
size_t block_x_2 = block * 2;

pt1 = array + block;
pt2 = pt1 + block;
pt3 = pt2 + block;
switch((cmp(arg, pt1 - 1, pt1) <= 0) | (cmp(arg, pt3 - 1, pt3) <= 0) * 2)
{
case 0:
cross_merge8(swap, array, block, block, cmp, arg);
cross_merge8(swap + block_x_2, pt2, block, block, cmp, arg);
break;
case 1:
memcpy(swap, array, block_x_2 * sizeof(char));
cross_merge8(swap + block_x_2, pt2, block, block, cmp, arg);
break;
case 2:
cross_merge8(swap, array, block, block, cmp, arg);
memcpy(swap + block_x_2, pt2, block_x_2 * sizeof(char));
break;
case 3:
if(cmp(arg, pt2 - 1, pt2) <= 0)
return ;
memcpy(swap, array, block_x_2 * 2 * sizeof(char));
}
cross_merge8(array, swap, block_x_2, block_x_2, cmp, arg);
}

void partial_backward_merge8(char * array, char * swap, size_t swap_size, size_t nmemb, size_t block, CMPFUNCPTR cmp, void * arg)
{
char * tpl, * tpa, * tpr;
size_t right, loop, x;

if(nmemb == block)
{
return ;
}
tpl = array + block - 1;
tpa = array + nmemb - 1;
if(cmp(arg, tpl, tpl + 1) <= 0)
{
return ;
}
right = nmemb - block;
if(nmemb <= swap_size && right >= 64)
{
cross_merge8(swap, array, block, right, cmp, arg);
memcpy(array, swap, nmemb * sizeof(char));
return ;
}
memcpy(swap, array + block, right * sizeof(char));
tpr = swap + right - 1;
while(tpl > array + 16 && tpr > swap + 16)
{
tpl_tpr16:
if(cmp(arg, tpl, tpr - 15) <= 0)
{
loop = 16;
do
*tpa-- = *tpr--;while(--loop);
if(tpr > swap + 16)
{
goto tpl_tpr16;
}
break;
}
tpl16_tpr:
if(cmp(arg, tpl - 15, tpr) > 0)
{
loop = 16;
do
*tpa-- = *tpl--;while(--loop);
if(tpl > array + 16)
{
goto tpl16_tpr;
}
break;
}
loop = 8;
do
{
if(cmp(arg, tpl, tpr - 1) <= 0)
{
*tpa-- = *tpr--;
*tpa-- = *tpr--;
}
else if(cmp(arg, tpl - 1, tpr) > 0)
{
*tpa-- = *tpl--;
*tpa-- = *tpl--;
}
else
{
x = cmp(arg, tpl, tpr) <= 0;
tpa--;
tpa[x] = *tpr;
tpr -= 1;
tpa[!x] = *tpl;
tpl -= 1;
tpa--;
x = cmp(arg, tpl, tpr) <= 0;
*tpa = *tpl;
tpl -= (int)!x;
tpa--;
tpa[x] = *tpr;
tpr -= x;
;
}
}while(--loop);
}
while(tpr > swap + 1 && tpl > array + 1)
{
tpr2:
if(cmp(arg, tpl, tpr - 1) <= 0)
{
*tpa-- = *tpr--;
*tpa-- = *tpr--;
if(tpr > swap + 1)
{
goto tpr2;
}
break;
}
if(cmp(arg, tpl - 1, tpr) > 0)
{
*tpa-- = *tpl--;
*tpa-- = *tpl--;
if(tpl > array + 1)
{
goto tpl2;
}
break;
}
goto cross_swap;
tpl2:
if(cmp(arg, tpl - 1, tpr) > 0)
{
*tpa-- = *tpl--;
*tpa-- = *tpl--;
if(tpl > array + 1)
{
goto tpl2;
}
break;
}
if(cmp(arg, tpl, tpr - 1) <= 0)
{
*tpa-- = *tpr--;
*tpa-- = *tpr--;
if(tpr > swap + 1)
{
goto tpr2;
}
break;
}
cross_swap:
x = cmp(arg, tpl, tpr) <= 0;
tpa--;
tpa[x] = *tpr;
tpr -= 1;
tpa[!x] = *tpl;
tpl -= 1;
tpa--;
x = cmp(arg, tpl, tpr) <= 0;
*tpa = *tpl;
tpl -= (int)!x;
tpa--;
tpa[x] = *tpr;
tpr -= x;
;
}
while(tpr >= swap && tpl >= array)
{
*tpa-- = cmp(arg, tpl, tpr) > 0 ? *tpl-- : *tpr--;
}
while(tpr >= swap)
{
*tpa-- = *tpr--;
}
}

void tail_swap16(short * array, short * swap, size_t nmemb, CMPFUNCPTR cmp, void * arg)
{
if(nmemb < 8)
tiny_sort16(array, swap, nmemb, cmp, arg);
else
{
short * pta = array;
size_t half1 = nmemb / 2;
size_t quad1 = half1 / 2;
size_t quad2 = half1 - quad1;
size_t half2 = nmemb - half1;
size_t quad3 = half2 / 2;
size_t quad4 = half2 - quad3;

tail_swap16(pta, swap, quad1, cmp, arg);
pta += quad1;
tail_swap16(pta, swap, quad2, cmp, arg);
pta += quad2;
tail_swap16(pta, swap, quad3, cmp, arg);
pta += quad3;
tail_swap16(pta, swap, quad4, cmp, arg);
if(cmp(arg, array + quad1 - 1, array + quad1) <= 0 && cmp(arg, array + half1 - 1, array + half1) <= 0 && cmp(arg, pta - 1, pta) <= 0)
return ;
parity_merge16(swap, array, quad1, quad2, cmp, arg);
parity_merge16(swap + half1, array + half1, quad3, quad4, cmp, arg);
parity_merge16(array, swap, half1, half2, cmp, arg);
}
}

void quad_merge_block16(short * array, short * swap, size_t block, CMPFUNCPTR cmp, void * arg)
{
short * pt1, * pt2, * pt3;
size_t block_x_2 = block * 2;

pt1 = array + block;
pt2 = pt1 + block;
pt3 = pt2 + block;
switch((cmp(arg, pt1 - 1, pt1) <= 0) | (cmp(arg, pt3 - 1, pt3) <= 0) * 2)
{
case 0:
cross_merge16(swap, array, block, block, cmp, arg);
cross_merge16(swap + block_x_2, pt2, block, block, cmp, arg);
break;
case 1:
memcpy(swap, array, block_x_2 * sizeof(short));
cross_merge16(swap + block_x_2, pt2, block, block, cmp, arg);
break;
case 2:
cross_merge16(swap, array, block, block, cmp, arg);
memcpy(swap + block_x_2, pt2, block_x_2 * sizeof(short));
break;
case 3:
if(cmp(arg, pt2 - 1, pt2) <= 0)
return ;
memcpy(swap, array, block_x_2 * 2 * sizeof(short));
}
cross_merge16(array, swap, block_x_2, block_x_2, cmp, arg);
}

void partial_backward_merge16(short * array, short * swap, size_t swap_size, size_t nmemb, size_t block, CMPFUNCPTR cmp, void * arg)
{
short * tpl, * tpa, * tpr;
size_t right, loop, x;

if(nmemb == block)
{
return ;
}
tpl = array + block - 1;
tpa = array + nmemb - 1;
if(cmp(arg, tpl, tpl + 1) <= 0)
{
return ;
}
right = nmemb - block;
if(nmemb <= swap_size && right >= 64)
{
cross_merge16(swap, array, block, right, cmp, arg);
memcpy(array, swap, nmemb * sizeof(short));
return ;
}
memcpy(swap, array + block, right * sizeof(short));
tpr = swap + right - 1;
while(tpl > array + 16 && tpr > swap + 16)
{
tpl_tpr16:
if(cmp(arg, tpl, tpr - 15) <= 0)
{
loop = 16;
do
*tpa-- = *tpr--;while(--loop);
if(tpr > swap + 16)
{
goto tpl_tpr16;
}
break;
}
tpl16_tpr:
if(cmp(arg, tpl - 15, tpr) > 0)
{
loop = 16;
do
*tpa-- = *tpl--;while(--loop);
if(tpl > array + 16)
{
goto tpl16_tpr;
}
break;
}
loop = 8;
do
{
if(cmp(arg, tpl, tpr - 1) <= 0)
{
*tpa-- = *tpr--;
*tpa-- = *tpr--;
}
else if(cmp(arg, tpl - 1, tpr) > 0)
{
*tpa-- = *tpl--;
*tpa-- = *tpl--;
}
else
{
x = cmp(arg, tpl, tpr) <= 0;
tpa--;
tpa[x] = *tpr;
tpr -= 1;
tpa[!x] = *tpl;
tpl -= 1;
tpa--;
x = cmp(arg, tpl, tpr) <= 0;
*tpa = *tpl;
tpl -= (int)!x;
tpa--;
tpa[x] = *tpr;
tpr -= x;
;
}
}while(--loop);
}
while(tpr > swap + 1 && tpl > array + 1)
{
tpr2:
if(cmp(arg, tpl, tpr - 1) <= 0)
{
*tpa-- = *tpr--;
*tpa-- = *tpr--;
if(tpr > swap + 1)
{
goto tpr2;
}
break;
}
if(cmp(arg, tpl - 1, tpr) > 0)
{
*tpa-- = *tpl--;
*tpa-- = *tpl--;
if(tpl > array + 1)
{
goto tpl2;
}
break;
}
goto cross_swap;
tpl2:
if(cmp(arg, tpl - 1, tpr) > 0)
{
*tpa-- = *tpl--;
*tpa-- = *tpl--;
if(tpl > array + 1)
{
goto tpl2;
}
break;
}
if(cmp(arg, tpl, tpr - 1) <= 0)
{
*tpa-- = *tpr--;
*tpa-- = *tpr--;
if(tpr > swap + 1)
{
goto tpr2;
}
break;
}
cross_swap:
x = cmp(arg, tpl, tpr) <= 0;
tpa--;
tpa[x] = *tpr;
tpr -= 1;
tpa[!x] = *tpl;
tpl -= 1;
tpa--;
x = cmp(arg, tpl, tpr) <= 0;
*tpa = *tpl;
tpl -= (int)!x;
tpa--;
tpa[x] = *tpr;
tpr -= x;
;
}
while(tpr >= swap && tpl >= array)
{
*tpa-- = cmp(arg, tpl, tpr) > 0 ? *tpl-- : *tpr--;
}
while(tpr >= swap)
{
*tpa-- = *tpr--;
}
}

void tail_swap128(long double * array, long double * swap, size_t nmemb, CMPFUNCPTR cmp, void * arg)
{
if(nmemb < 8)
tiny_sort128(array, swap, nmemb, cmp, arg);
else
{
long double * pta = array;
size_t half1 = nmemb / 2;
size_t quad1 = half1 / 2;
size_t quad2 = half1 - quad1;
size_t half2 = nmemb - half1;
size_t quad3 = half2 / 2;
size_t quad4 = half2 - quad3;

tail_swap128(pta, swap, quad1, cmp, arg);
pta += quad1;
tail_swap128(pta, swap, quad2, cmp, arg);
pta += quad2;
tail_swap128(pta, swap, quad3, cmp, arg);
pta += quad3;
tail_swap128(pta, swap, quad4, cmp, arg);
if(cmp(arg, array + quad1 - 1, array + quad1) <= 0 && cmp(arg, array + half1 - 1, array + half1) <= 0 && cmp(arg, pta - 1, pta) <= 0)
return ;
parity_merge128(swap, array, quad1, quad2, cmp, arg);
parity_merge128(swap + half1, array + half1, quad3, quad4, cmp, arg);
parity_merge128(array, swap, half1, half2, cmp, arg);
}
}

void quad_merge_block128(long double * array, long double * swap, size_t block, CMPFUNCPTR cmp, void * arg)
{
long double * pt1, * pt2, * pt3;
size_t block_x_2 = block * 2;

pt1 = array + block;
pt2 = pt1 + block;
pt3 = pt2 + block;
switch((cmp(arg, pt1 - 1, pt1) <= 0) | (cmp(arg, pt3 - 1, pt3) <= 0) * 2)
{
case 0:
cross_merge128(swap, array, block, block, cmp, arg);
cross_merge128(swap + block_x_2, pt2, block, block, cmp, arg);
break;
case 1:
memcpy(swap, array, block_x_2 * sizeof(long double));
cross_merge128(swap + block_x_2, pt2, block, block, cmp, arg);
break;
case 2:
cross_merge128(swap, array, block, block, cmp, arg);
memcpy(swap + block_x_2, pt2, block_x_2 * sizeof(long double));
break;
case 3:
if(cmp(arg, pt2 - 1, pt2) <= 0)
return ;
memcpy(swap, array, block_x_2 * 2 * sizeof(long double));
}
cross_merge128(array, swap, block_x_2, block_x_2, cmp, arg);
}

void partial_backward_merge128(long double * array, long double * swap, size_t swap_size, size_t nmemb, size_t block, CMPFUNCPTR cmp, void * arg)
{
long double * tpl, * tpa, * tpr;
size_t right, loop, x;

if(nmemb == block)
{
return ;
}
tpl = array + block - 1;
tpa = array + nmemb - 1;
if(cmp(arg, tpl, tpl + 1) <= 0)
{
return ;
}
right = nmemb - block;
if(nmemb <= swap_size && right >= 64)
{
cross_merge128(swap, array, block, right, cmp, arg);
memcpy(array, swap, nmemb * sizeof(long double));
return ;
}
memcpy(swap, array + block, right * sizeof(long double));
tpr = swap + right - 1;
while(tpl > array + 16 && tpr > swap + 16)
{
tpl_tpr16:
if(cmp(arg, tpl, tpr - 15) <= 0)
{
loop = 16;
do
*tpa-- = *tpr--;while(--loop);
if(tpr > swap + 16)
{
goto tpl_tpr16;
}
break;
}
tpl16_tpr:
if(cmp(arg, tpl - 15, tpr) > 0)
{
loop = 16;
do
*tpa-- = *tpl--;while(--loop);
if(tpl > array + 16)
{
goto tpl16_tpr;
}
break;
}
loop = 8;
do
{
if(cmp(arg, tpl, tpr - 1) <= 0)
{
*tpa-- = *tpr--;
*tpa-- = *tpr--;
}
else if(cmp(arg, tpl - 1, tpr) > 0)
{
*tpa-- = *tpl--;
*tpa-- = *tpl--;
}
else
{
x = cmp(arg, tpl, tpr) <= 0;
tpa--;
tpa[x] = *tpr;
tpr -= 1;
tpa[!x] = *tpl;
tpl -= 1;
tpa--;
x = cmp(arg, tpl, tpr) <= 0;
*tpa = *tpl;
tpl -= (int)!x;
tpa--;
tpa[x] = *tpr;
tpr -= x;
;
}
}while(--loop);
}
while(tpr > swap + 1 && tpl > array + 1)
{
tpr2:
if(cmp(arg, tpl, tpr - 1) <= 0)
{
*tpa-- = *tpr--;
*tpa-- = *tpr--;
if(tpr > swap + 1)
{
goto tpr2;
}
break;
}
if(cmp(arg, tpl - 1, tpr) > 0)
{
*tpa-- = *tpl--;
*tpa-- = *tpl--;
if(tpl > array + 1)
{
goto tpl2;
}
break;
}
goto cross_swap;
tpl2:
if(cmp(arg, tpl - 1, tpr) > 0)
{
*tpa-- = *tpl--;
*tpa-- = *tpl--;
if(tpl > array + 1)
{
goto tpl2;
}
break;
}
if(cmp(arg, tpl, tpr - 1) <= 0)
{
*tpa-- = *tpr--;
*tpa-- = *tpr--;
if(tpr > swap + 1)
{
goto tpr2;
}
break;
}
cross_swap:
x = cmp(arg, tpl, tpr) <= 0;
tpa--;
tpa[x] = *tpr;
tpr -= 1;
tpa[!x] = *tpl;
tpl -= 1;
tpa--;
x = cmp(arg, tpl, tpr) <= 0;
*tpa = *tpl;
tpl -= (int)!x;
tpa--;
tpa[x] = *tpr;
tpr -= x;
;
}
while(tpr >= swap && tpl >= array)
{
*tpa-- = cmp(arg, tpl, tpr) > 0 ? *tpl-- : *tpr--;
}
while(tpr >= swap)
{
*tpa-- = *tpr--;
}
}

size_t quad_swap32(int * array, size_t nmemb, CMPFUNCPTR cmp, void * arg)
{
int tmp, swap[32];
size_t count;
int * pta, * pts;
unsigned char v1, v2, v3, v4, x;

pta = array;
count = nmemb / 8;
while(count--)
{
v1 = cmp(arg, pta + 0, pta + 1) > 0;
v2 = cmp(arg, pta + 2, pta + 3) > 0;
v3 = cmp(arg, pta + 4, pta + 5) > 0;
v4 = cmp(arg, pta + 6, pta + 7) > 0;
switch(v1 + v2 * 2 + v3 * 4 + v4 * 8)
{
case 0:
if(cmp(arg, pta + 1, pta + 2) <= 0 && cmp(arg, pta + 3, pta + 4) <= 0 && cmp(arg, pta + 5, pta + 6) <= 0)
{
goto ordered;
}
quad_swap_merge32(pta, swap, cmp, arg);
break;
case 15:
if(cmp(arg, pta + 1, pta + 2) > 0 && cmp(arg, pta + 3, pta + 4) > 0 && cmp(arg, pta + 5, pta + 6) > 0)
{
pts = pta;
goto reversed;
}
default:
not_ordered:
x = !v1;
tmp = pta[x];
pta[0] = pta[v1];
pta[1] = tmp;
pta += 2;
x = !v2;
tmp = pta[x];
pta[0] = pta[v2];
pta[1] = tmp;
pta += 2;
x = !v3;
tmp = pta[x];
pta[0] = pta[v3];
pta[1] = tmp;
pta += 2;
x = !v4;
tmp = pta[x];
pta[0] = pta[v4];
pta[1] = tmp;
pta -= 6;
quad_swap_merge32(pta, swap, cmp, arg);
}
pta += 8;
continue;
ordered:
pta += 8;
if(count--)
{
if((v1 = cmp(arg, pta + 0, pta + 1) > 0) | (v2 = cmp(arg, pta + 2, pta + 3) > 0) | (v3 = cmp(arg, pta + 4, pta + 5) > 0) | (v4 = cmp(arg, pta + 6, pta + 7) > 0))
{
if(v1 + v2 + v3 + v4 == 4 && cmp(arg, pta + 1, pta + 2) > 0 && cmp(arg, pta + 3, pta + 4) > 0 && cmp(arg, pta + 5, pta + 6) > 0)
{
pts = pta;
goto reversed;
}
goto not_ordered;
}
if(cmp(arg, pta + 1, pta + 2) <= 0 && cmp(arg, pta + 3, pta + 4) <= 0 && cmp(arg, pta + 5, pta + 6) <= 0)
{
goto ordered;
}
quad_swap_merge32(pta, swap, cmp, arg);
pta += 8;
continue;
}
break;
reversed:
pta += 8;
if(count--)
{
if((v1 = cmp(arg, pta + 0, pta + 1) <= 0) | (v2 = cmp(arg, pta + 2, pta + 3) <= 0) | (v3 = cmp(arg, pta + 4, pta + 5) <= 0) | (v4 = cmp(arg, pta + 6, pta + 7) <= 0))
{
}
else
{
if(cmp(arg, pta - 1, pta) > 0 && cmp(arg, pta + 1, pta + 2) > 0 && cmp(arg, pta + 3, pta + 4) > 0 && cmp(arg, pta + 5, pta + 6) > 0)
{
goto reversed;
}
}
quad_reversal32(pts, pta - 1);
if(v1 + v2 + v3 + v4 == 4 && cmp(arg, pta + 1, pta + 2) <= 0 && cmp(arg, pta + 3, pta + 4) <= 0 && cmp(arg, pta + 5, pta + 6) <= 0)
{
goto ordered;
}
if(v1 + v2 + v3 + v4 == 0 && cmp(arg, pta + 1, pta + 2) > 0 && cmp(arg, pta + 3, pta + 4) > 0 && cmp(arg, pta + 5, pta + 6) > 0)
{
pts = pta;
goto reversed;
}
x = !v1;
tmp = pta[v1];
pta[0] = pta[x];
pta[1] = tmp;
pta += 2;
x = !v2;
tmp = pta[v2];
pta[0] = pta[x];
pta[1] = tmp;
pta += 2;
x = !v3;
tmp = pta[v3];
pta[0] = pta[x];
pta[1] = tmp;
pta += 2;
x = !v4;
tmp = pta[v4];
pta[0] = pta[x];
pta[1] = tmp;
pta -= 6;
if(cmp(arg, pta + 1, pta + 2) > 0 || cmp(arg, pta + 3, pta + 4) > 0 || cmp(arg, pta + 5, pta + 6) > 0)
{
quad_swap_merge32(pta, swap, cmp, arg);
}
pta += 8;
continue;
}
switch(nmemb % 8)
{
case 7:
if(cmp(arg, pta + 5, pta + 6) <= 0)
break;
case 6:
if(cmp(arg, pta + 4, pta + 5) <= 0)
break;
case 5:
if(cmp(arg, pta + 3, pta + 4) <= 0)
break;
case 4:
if(cmp(arg, pta + 2, pta + 3) <= 0)
break;
case 3:
if(cmp(arg, pta + 1, pta + 2) <= 0)
break;
case 2:
if(cmp(arg, pta + 0, pta + 1) <= 0)
break;
case 1:
if(cmp(arg, pta - 1, pta + 0) <= 0)
break;
case 0:
quad_reversal32(pts, pta + nmemb % 8 - 1);
if(pts == array)
{
return 1;
}
goto reverse_end;
}
quad_reversal32(pts, pta - 1);
break;
}
tail_swap32(pta, swap, nmemb % 8, cmp, arg);
reverse_end:
pta = array;
for(count = nmemb / 32; count--; pta += 32)
{
if(cmp(arg, pta + 7, pta + 8) <= 0 && cmp(arg, pta + 15, pta + 16) <= 0 && cmp(arg, pta + 23, pta + 24) <= 0)
{
continue;
}
parity_merge32(swap, pta, 8, 8, cmp, arg);
parity_merge32(swap + 16, pta + 16, 8, 8, cmp, arg);
parity_merge32(pta, swap, 16, 16, cmp, arg);
}
if(nmemb % 32 > 8)
{
tail_merge32(pta, swap, 32, nmemb % 32, 8, cmp, arg);
}
return 0;
}

size_t quad_merge32(int * array, int * swap, size_t swap_size, size_t nmemb, size_t block, CMPFUNCPTR cmp, void * arg)
{
int * pta, * pte;

pte = array + nmemb;
block *= 4;
while(block <= nmemb && block <= swap_size)
{
pta = array;
do
{
quad_merge_block32(pta, swap, block / 4, cmp, arg);
pta += block;
}while(pta + block <= pte);
tail_merge32(pta, swap, swap_size, pte - pta, block / 4, cmp, arg);
block *= 4;
}
tail_merge32(array, swap, swap_size, nmemb, block / 4, cmp, arg);
return block / 2;
}

void tail_merge32(int * array, int * swap, size_t swap_size, size_t nmemb, size_t block, CMPFUNCPTR cmp, void * arg)
{
int * pta, * pte;

pte = array + nmemb;
while(block < nmemb && block <= swap_size)
{
for(pta = array; pta + block < pte; pta += block * 2)
{
if(pta + block * 2 < pte)
{
partial_backward_merge32(pta, swap, swap_size, block * 2, block, cmp, arg);
continue;
}
partial_backward_merge32(pta, swap, swap_size, pte - pta, block, cmp, arg);
break;
}
block *= 2;
}
}

void rotate_merge_block32(int * array, int * swap, size_t swap_size, size_t lblock, size_t right, CMPFUNCPTR cmp, void * arg)
{
size_t left, rblock, unbalanced;

if(cmp(arg, array + lblock - 1, array + lblock) <= 0)
{
return ;
}
rblock = lblock / 2;
lblock -= rblock;
left = monobound_binary_first32(array + lblock + rblock, array + lblock, right, cmp, arg);
right -= left;
if(left)
{
if(lblock + left <= swap_size)
{
memcpy(swap, array, lblock * sizeof(int));
memcpy(swap + lblock, array + lblock + rblock, left * sizeof(int));
memmove(array + lblock + left, array + lblock, rblock * sizeof(int));
cross_merge32(array, swap, lblock, left, cmp, arg);
}
else
{
trinity_rotation32(array + lblock, swap, swap_size, rblock + left, rblock);
unbalanced = (left * 2 < lblock) | (lblock * 2 < left);
if(unbalanced && left <= swap_size)
{
partial_backward_merge32(array, swap, swap_size, lblock + left, lblock, cmp, arg);
}
else if(unbalanced && lblock <= swap_size)
{
partial_forward_merge32(array, swap, swap_size, lblock + left, lblock, cmp, arg);
}
else
{
rotate_merge_block32(array, swap, swap_size, lblock, left, cmp, arg);
}
}
}
if(right)
{
unbalanced = (right * 2 < rblock) | (rblock * 2 < right);
if((unbalanced && right <= swap_size) || right + rblock <= swap_size)
{
partial_backward_merge32(array + lblock + left, swap, swap_size, rblock + right, rblock, cmp, arg);
}
else if(unbalanced && rblock <= swap_size)
{
partial_forward_merge32(array + lblock + left, swap, swap_size, rblock + right, rblock, cmp, arg);
}
else
{
rotate_merge_block32(array + lblock + left, swap, swap_size, rblock, right, cmp, arg);
}
}
}

size_t quad_swap_int32(int * array, size_t nmemb, CMPFUNCPTR cmp, void * arg)
{
int tmp, swap[32];
size_t count;
int * pta, * pts;
unsigned char v1, v2, v3, v4, x;

pta = array;
count = nmemb / 8;
while(count--)
{
v1 = (*(pta + 0) > *(pta + 1)) > 0;
v2 = (*(pta + 2) > *(pta + 3)) > 0;
v3 = (*(pta + 4) > *(pta + 5)) > 0;
v4 = (*(pta + 6) > *(pta + 7)) > 0;
switch(v1 + v2 * 2 + v3 * 4 + v4 * 8)
{
case 0:
if((*(pta + 1) > *(pta + 2)) <= 0 && (*(pta + 3) > *(pta + 4)) <= 0 && (*(pta + 5) > *(pta + 6)) <= 0)
{
goto ordered;
}
quad_swap_merge_int32(pta, swap, cmp, arg);
break;
case 15:
if((*(pta + 1) > *(pta + 2)) > 0 && (*(pta + 3) > *(pta + 4)) > 0 && (*(pta + 5) > *(pta + 6)) > 0)
{
pts = pta;
goto reversed;
}
default:
not_ordered:
x = !v1;
tmp = pta[x];
pta[0] = pta[v1];
pta[1] = tmp;
pta += 2;
x = !v2;
tmp = pta[x];
pta[0] = pta[v2];
pta[1] = tmp;
pta += 2;
x = !v3;
tmp = pta[x];
pta[0] = pta[v3];
pta[1] = tmp;
pta += 2;
x = !v4;
tmp = pta[x];
pta[0] = pta[v4];
pta[1] = tmp;
pta -= 6;
quad_swap_merge_int32(pta, swap, cmp, arg);
}
pta += 8;
continue;
ordered:
pta += 8;
if(count--)
{
if((v1 = (*(pta + 0) > *(pta + 1)) > 0) | (v2 = (*(pta + 2) > *(pta + 3)) > 0) | (v3 = (*(pta + 4) > *(pta + 5)) > 0) | (v4 = (*(pta + 6) > *(pta + 7)) > 0))
{
if(v1 + v2 + v3 + v4 == 4 && (*(pta + 1) > *(pta + 2)) > 0 && (*(pta + 3) > *(pta + 4)) > 0 && (*(pta + 5) > *(pta + 6)) > 0)
{
pts = pta;
goto reversed;
}
goto not_ordered;
}
if((*(pta + 1) > *(pta + 2)) <= 0 && (*(pta + 3) > *(pta + 4)) <= 0 && (*(pta + 5) > *(pta + 6)) <= 0)
{
goto ordered;
}
quad_swap_merge_int32(pta, swap, cmp, arg);
pta += 8;
continue;
}
break;
reversed:
pta += 8;
if(count--)
{
if((v1 = (*(pta + 0) > *(pta + 1)) <= 0) | (v2 = (*(pta + 2) > *(pta + 3)) <= 0) | (v3 = (*(pta + 4) > *(pta + 5)) <= 0) | (v4 = (*(pta + 6) > *(pta + 7)) <= 0))
{
}
else
{
if((*(pta - 1) > *(pta)) > 0 && (*(pta + 1) > *(pta + 2)) > 0 && (*(pta + 3) > *(pta + 4)) > 0 && (*(pta + 5) > *(pta + 6)) > 0)
{
goto reversed;
}
}
quad_reversal_int32(pts, pta - 1);
if(v1 + v2 + v3 + v4 == 4 && (*(pta + 1) > *(pta + 2)) <= 0 && (*(pta + 3) > *(pta + 4)) <= 0 && (*(pta + 5) > *(pta + 6)) <= 0)
{
goto ordered;
}
if(v1 + v2 + v3 + v4 == 0 && (*(pta + 1) > *(pta + 2)) > 0 && (*(pta + 3) > *(pta + 4)) > 0 && (*(pta + 5) > *(pta + 6)) > 0)
{
pts = pta;
goto reversed;
}
x = !v1;
tmp = pta[v1];
pta[0] = pta[x];
pta[1] = tmp;
pta += 2;
x = !v2;
tmp = pta[v2];
pta[0] = pta[x];
pta[1] = tmp;
pta += 2;
x = !v3;
tmp = pta[v3];
pta[0] = pta[x];
pta[1] = tmp;
pta += 2;
x = !v4;
tmp = pta[v4];
pta[0] = pta[x];
pta[1] = tmp;
pta -= 6;
if((*(pta + 1) > *(pta + 2)) > 0 || (*(pta + 3) > *(pta + 4)) > 0 || (*(pta + 5) > *(pta + 6)) > 0)
{
quad_swap_merge_int32(pta, swap, cmp, arg);
}
pta += 8;
continue;
}
switch(nmemb % 8)
{
case 7:
if((*(pta + 5) > *(pta + 6)) <= 0)
break;
case 6:
if((*(pta + 4) > *(pta + 5)) <= 0)
break;
case 5:
if((*(pta + 3) > *(pta + 4)) <= 0)
break;
case 4:
if((*(pta + 2) > *(pta + 3)) <= 0)
break;
case 3:
if((*(pta + 1) > *(pta + 2)) <= 0)
break;
case 2:
if((*(pta + 0) > *(pta + 1)) <= 0)
break;
case 1:
if((*(pta - 1) > *(pta + 0)) <= 0)
break;
case 0:
quad_reversal_int32(pts, pta + nmemb % 8 - 1);
if(pts == array)
{
return 1;
}
goto reverse_end;
}
quad_reversal_int32(pts, pta - 1);
break;
}
tail_swap_int32(pta, swap, nmemb % 8, cmp, arg);
reverse_end:
pta = array;
for(count = nmemb / 32; count--; pta += 32)
{
if((*(pta + 7) > *(pta + 8)) <= 0 && (*(pta + 15) > *(pta + 16)) <= 0 && (*(pta + 23) > *(pta + 24)) <= 0)
{
continue;
}
parity_merge_int32(swap, pta, 8, 8, cmp, arg);
parity_merge_int32(swap + 16, pta + 16, 8, 8, cmp, arg);
parity_merge_int32(pta, swap, 16, 16, cmp, arg);
}
if(nmemb % 32 > 8)
{
tail_merge_int32(pta, swap, 32, nmemb % 32, 8, cmp, arg);
}
return 0;
}

size_t quad_merge_int32(int * array, int * swap, size_t swap_size, size_t nmemb, size_t block, CMPFUNCPTR cmp, void * arg)
{
int * pta, * pte;

pte = array + nmemb;
block *= 4;
while(block <= nmemb && block <= swap_size)
{
pta = array;
do
{
quad_merge_block_int32(pta, swap, block / 4, cmp, arg);
pta += block;
}while(pta + block <= pte);
tail_merge_int32(pta, swap, swap_size, pte - pta, block / 4, cmp, arg);
block *= 4;
}
tail_merge_int32(array, swap, swap_size, nmemb, block / 4, cmp, arg);
return block / 2;
}

void tail_merge_int32(int * array, int * swap, size_t swap_size, size_t nmemb, size_t block, CMPFUNCPTR cmp, void * arg)
{
int * pta, * pte;

pte = array + nmemb;
while(block < nmemb && block <= swap_size)
{
for(pta = array; pta + block < pte; pta += block * 2)
{
if(pta + block * 2 < pte)
{
partial_backward_merge_int32(pta, swap, swap_size, block * 2, block, cmp, arg);
continue;
}
partial_backward_merge_int32(pta, swap, swap_size, pte - pta, block, cmp, arg);
break;
}
block *= 2;
}
}

void rotate_merge_block_int32(int * array, int * swap, size_t swap_size, size_t lblock, size_t right, CMPFUNCPTR cmp, void * arg)
{
size_t left, rblock, unbalanced;

if((*(array + lblock - 1) > *(array + lblock)) <= 0)
{
return ;
}
rblock = lblock / 2;
lblock -= rblock;
left = monobound_binary_first_int32(array + lblock + rblock, array + lblock, right, cmp, arg);
right -= left;
if(left)
{
if(lblock + left <= swap_size)
{
memcpy(swap, array, lblock * sizeof(int));
memcpy(swap + lblock, array + lblock + rblock, left * sizeof(int));
memmove(array + lblock + left, array + lblock, rblock * sizeof(int));
cross_merge_int32(array, swap, lblock, left, cmp, arg);
}
else
{
trinity_rotation_int32(array + lblock, swap, swap_size, rblock + left, rblock);
unbalanced = (left * 2 < lblock) | (lblock * 2 < left);
if(unbalanced && left <= swap_size)
{
partial_backward_merge_int32(array, swap, swap_size, lblock + left, lblock, cmp, arg);
}
else if(unbalanced && lblock <= swap_size)
{
partial_forward_merge_int32(array, swap, swap_size, lblock + left, lblock, cmp, arg);
}
else
{
rotate_merge_block_int32(array, swap, swap_size, lblock, left, cmp, arg);
}
}
}
if(right)
{
unbalanced = (right * 2 < rblock) | (rblock * 2 < right);
if((unbalanced && right <= swap_size) || right + rblock <= swap_size)
{
partial_backward_merge_int32(array + lblock + left, swap, swap_size, rblock + right, rblock, cmp, arg);
}
else if(unbalanced && rblock <= swap_size)
{
partial_forward_merge_int32(array + lblock + left, swap, swap_size, rblock + right, rblock, cmp, arg);
}
else
{
rotate_merge_block_int32(array + lblock + left, swap, swap_size, rblock, right, cmp, arg);
}
}
}

size_t quad_swap_uint32(unsigned int * array, size_t nmemb, CMPFUNCPTR cmp, void * arg)
{
unsigned int tmp, swap[32];
size_t count;
unsigned int * pta, * pts;
unsigned char v1, v2, v3, v4, x;

pta = array;
count = nmemb / 8;
while(count--)
{
v1 = (*(pta + 0) > *(pta + 1)) > 0;
v2 = (*(pta + 2) > *(pta + 3)) > 0;
v3 = (*(pta + 4) > *(pta + 5)) > 0;
v4 = (*(pta + 6) > *(pta + 7)) > 0;
switch(v1 + v2 * 2 + v3 * 4 + v4 * 8)
{
case 0:
if((*(pta + 1) > *(pta + 2)) <= 0 && (*(pta + 3) > *(pta + 4)) <= 0 && (*(pta + 5) > *(pta + 6)) <= 0)
{
goto ordered;
}
quad_swap_merge_uint32(pta, swap, cmp, arg);
break;
case 15:
if((*(pta + 1) > *(pta + 2)) > 0 && (*(pta + 3) > *(pta + 4)) > 0 && (*(pta + 5) > *(pta + 6)) > 0)
{
pts = pta;
goto reversed;
}
default:
not_ordered:
x = !v1;
tmp = pta[x];
pta[0] = pta[v1];
pta[1] = tmp;
pta += 2;
x = !v2;
tmp = pta[x];
pta[0] = pta[v2];
pta[1] = tmp;
pta += 2;
x = !v3;
tmp = pta[x];
pta[0] = pta[v3];
pta[1] = tmp;
pta += 2;
x = !v4;
tmp = pta[x];
pta[0] = pta[v4];
pta[1] = tmp;
pta -= 6;
quad_swap_merge_uint32(pta, swap, cmp, arg);
}
pta += 8;
continue;
ordered:
pta += 8;
if(count--)
{
if((v1 = (*(pta + 0) > *(pta + 1)) > 0) | (v2 = (*(pta + 2) > *(pta + 3)) > 0) | (v3 = (*(pta + 4) > *(pta + 5)) > 0) | (v4 = (*(pta + 6) > *(pta + 7)) > 0))
{
if(v1 + v2 + v3 + v4 == 4 && (*(pta + 1) > *(pta + 2)) > 0 && (*(pta + 3) > *(pta + 4)) > 0 && (*(pta + 5) > *(pta + 6)) > 0)
{
pts = pta;
goto reversed;
}
goto not_ordered;
}
if((*(pta + 1) > *(pta + 2)) <= 0 && (*(pta + 3) > *(pta + 4)) <= 0 && (*(pta + 5) > *(pta + 6)) <= 0)
{
goto ordered;
}
quad_swap_merge_uint32(pta, swap, cmp, arg);
pta += 8;
continue;
}
break;
reversed:
pta += 8;
if(count--)
{
if((v1 = (*(pta + 0) > *(pta + 1)) <= 0) | (v2 = (*(pta + 2) > *(pta + 3)) <= 0) | (v3 = (*(pta + 4) > *(pta + 5)) <= 0) | (v4 = (*(pta + 6) > *(pta + 7)) <= 0))
{
}
else
{
if((*(pta - 1) > *(pta)) > 0 && (*(pta + 1) > *(pta + 2)) > 0 && (*(pta + 3) > *(pta + 4)) > 0 && (*(pta + 5) > *(pta + 6)) > 0)
{
goto reversed;
}
}
quad_reversal_uint32(pts, pta - 1);
if(v1 + v2 + v3 + v4 == 4 && (*(pta + 1) > *(pta + 2)) <= 0 && (*(pta + 3) > *(pta + 4)) <= 0 && (*(pta + 5) > *(pta + 6)) <= 0)
{
goto ordered;
}
if(v1 + v2 + v3 + v4 == 0 && (*(pta + 1) > *(pta + 2)) > 0 && (*(pta + 3) > *(pta + 4)) > 0 && (*(pta + 5) > *(pta + 6)) > 0)
{
pts = pta;
goto reversed;
}
x = !v1;
tmp = pta[v1];
pta[0] = pta[x];
pta[1] = tmp;
pta += 2;
x = !v2;
tmp = pta[v2];
pta[0] = pta[x];
pta[1] = tmp;
pta += 2;
x = !v3;
tmp = pta[v3];
pta[0] = pta[x];
pta[1] = tmp;
pta += 2;
x = !v4;
tmp = pta[v4];
pta[0] = pta[x];
pta[1] = tmp;
pta -= 6;
if((*(pta + 1) > *(pta + 2)) > 0 || (*(pta + 3) > *(pta + 4)) > 0 || (*(pta + 5) > *(pta + 6)) > 0)
{
quad_swap_merge_uint32(pta, swap, cmp, arg);
}
pta += 8;
continue;
}
switch(nmemb % 8)
{
case 7:
if((*(pta + 5) > *(pta + 6)) <= 0)
break;
case 6:
if((*(pta + 4) > *(pta + 5)) <= 0)
break;
case 5:
if((*(pta + 3) > *(pta + 4)) <= 0)
break;
case 4:
if((*(pta + 2) > *(pta + 3)) <= 0)
break;
case 3:
if((*(pta + 1) > *(pta + 2)) <= 0)
break;
case 2:
if((*(pta + 0) > *(pta + 1)) <= 0)
break;
case 1:
if((*(pta - 1) > *(pta + 0)) <= 0)
break;
case 0:
quad_reversal_uint32(pts, pta + nmemb % 8 - 1);
if(pts == array)
{
return 1;
}
goto reverse_end;
}
quad_reversal_uint32(pts, pta - 1);
break;
}
tail_swap_uint32(pta, swap, nmemb % 8, cmp, arg);
reverse_end:
pta = array;
for(count = nmemb / 32; count--; pta += 32)
{
if((*(pta + 7) > *(pta + 8)) <= 0 && (*(pta + 15) > *(pta + 16)) <= 0 && (*(pta + 23) > *(pta + 24)) <= 0)
{
continue;
}
parity_merge_uint32(swap, pta, 8, 8, cmp, arg);
parity_merge_uint32(swap + 16, pta + 16, 8, 8, cmp, arg);
parity_merge_uint32(pta, swap, 16, 16, cmp, arg);
}
if(nmemb % 32 > 8)
{
tail_merge_uint32(pta, swap, 32, nmemb % 32, 8, cmp, arg);
}
return 0;
}

size_t quad_merge_uint32(unsigned int * array, unsigned int * swap, size_t swap_size, size_t nmemb, size_t block, CMPFUNCPTR cmp, void * arg)
{
unsigned int * pta, * pte;

pte = array + nmemb;
block *= 4;
while(block <= nmemb && block <= swap_size)
{
pta = array;
do
{
quad_merge_block_uint32(pta, swap, block / 4, cmp, arg);
pta += block;
}while(pta + block <= pte);
tail_merge_uint32(pta, swap, swap_size, pte - pta, block / 4, cmp, arg);
block *= 4;
}
tail_merge_uint32(array, swap, swap_size, nmemb, block / 4, cmp, arg);
return block / 2;
}

void tail_merge_uint32(unsigned int * array, unsigned int * swap, size_t swap_size, size_t nmemb, size_t block, CMPFUNCPTR cmp, void * arg)
{
unsigned int * pta, * pte;

pte = array + nmemb;
while(block < nmemb && block <= swap_size)
{
for(pta = array; pta + block < pte; pta += block * 2)
{
if(pta + block * 2 < pte)
{
partial_backward_merge_uint32(pta, swap, swap_size, block * 2, block, cmp, arg);
continue;
}
partial_backward_merge_uint32(pta, swap, swap_size, pte - pta, block, cmp, arg);
break;
}
block *= 2;
}
}

void rotate_merge_block_uint32(unsigned int * array, unsigned int * swap, size_t swap_size, size_t lblock, size_t right, CMPFUNCPTR cmp, void * arg)
{
size_t left, rblock, unbalanced;

if((*(array + lblock - 1) > *(array + lblock)) <= 0)
{
return ;
}
rblock = lblock / 2;
lblock -= rblock;
left = monobound_binary_first_uint32(array + lblock + rblock, array + lblock, right, cmp, arg);
right -= left;
if(left)
{
if(lblock + left <= swap_size)
{
memcpy(swap, array, lblock * sizeof(unsigned int));
memcpy(swap + lblock, array + lblock + rblock, left * sizeof(unsigned int));
memmove(array + lblock + left, array + lblock, rblock * sizeof(unsigned int));
cross_merge_uint32(array, swap, lblock, left, cmp, arg);
}
else
{
trinity_rotation_uint32(array + lblock, swap, swap_size, rblock + left, rblock);
unbalanced = (left * 2 < lblock) | (lblock * 2 < left);
if(unbalanced && left <= swap_size)
{
partial_backward_merge_uint32(array, swap, swap_size, lblock + left, lblock, cmp, arg);
}
else if(unbalanced && lblock <= swap_size)
{
partial_forward_merge_uint32(array, swap, swap_size, lblock + left, lblock, cmp, arg);
}
else
{
rotate_merge_block_uint32(array, swap, swap_size, lblock, left, cmp, arg);
}
}
}
if(right)
{
unbalanced = (right * 2 < rblock) | (rblock * 2 < right);
if((unbalanced && right <= swap_size) || right + rblock <= swap_size)
{
partial_backward_merge_uint32(array + lblock + left, swap, swap_size, rblock + right, rblock, cmp, arg);
}
else if(unbalanced && rblock <= swap_size)
{
partial_forward_merge_uint32(array + lblock + left, swap, swap_size, rblock + right, rblock, cmp, arg);
}
else
{
rotate_merge_block_uint32(array + lblock + left, swap, swap_size, rblock, right, cmp, arg);
}
}
}

size_t quad_swap64(long long * array, size_t nmemb, CMPFUNCPTR cmp, void * arg)
{
long long tmp, swap[32];
size_t count;
long long * pta, * pts;
unsigned char v1, v2, v3, v4, x;

pta = array;
count = nmemb / 8;
while(count--)
{
v1 = cmp(arg, pta + 0, pta + 1) > 0;
v2 = cmp(arg, pta + 2, pta + 3) > 0;
v3 = cmp(arg, pta + 4, pta + 5) > 0;
v4 = cmp(arg, pta + 6, pta + 7) > 0;
switch(v1 + v2 * 2 + v3 * 4 + v4 * 8)
{
case 0:
if(cmp(arg, pta + 1, pta + 2) <= 0 && cmp(arg, pta + 3, pta + 4) <= 0 && cmp(arg, pta + 5, pta + 6) <= 0)
{
goto ordered;
}
quad_swap_merge64(pta, swap, cmp, arg);
break;
case 15:
if(cmp(arg, pta + 1, pta + 2) > 0 && cmp(arg, pta + 3, pta + 4) > 0 && cmp(arg, pta + 5, pta + 6) > 0)
{
pts = pta;
goto reversed;
}
default:
not_ordered:
x = !v1;
tmp = pta[x];
pta[0] = pta[v1];
pta[1] = tmp;
pta += 2;
x = !v2;
tmp = pta[x];
pta[0] = pta[v2];
pta[1] = tmp;
pta += 2;
x = !v3;
tmp = pta[x];
pta[0] = pta[v3];
pta[1] = tmp;
pta += 2;
x = !v4;
tmp = pta[x];
pta[0] = pta[v4];
pta[1] = tmp;
pta -= 6;
quad_swap_merge64(pta, swap, cmp, arg);
}
pta += 8;
continue;
ordered:
pta += 8;
if(count--)
{
if((v1 = cmp(arg, pta + 0, pta + 1) > 0) | (v2 = cmp(arg, pta + 2, pta + 3) > 0) | (v3 = cmp(arg, pta + 4, pta + 5) > 0) | (v4 = cmp(arg, pta + 6, pta + 7) > 0))
{
if(v1 + v2 + v3 + v4 == 4 && cmp(arg, pta + 1, pta + 2) > 0 && cmp(arg, pta + 3, pta + 4) > 0 && cmp(arg, pta + 5, pta + 6) > 0)
{
pts = pta;
goto reversed;
}
goto not_ordered;
}
if(cmp(arg, pta + 1, pta + 2) <= 0 && cmp(arg, pta + 3, pta + 4) <= 0 && cmp(arg, pta + 5, pta + 6) <= 0)
{
goto ordered;
}
quad_swap_merge64(pta, swap, cmp, arg);
pta += 8;
continue;
}
break;
reversed:
pta += 8;
if(count--)
{
if((v1 = cmp(arg, pta + 0, pta + 1) <= 0) | (v2 = cmp(arg, pta + 2, pta + 3) <= 0) | (v3 = cmp(arg, pta + 4, pta + 5) <= 0) | (v4 = cmp(arg, pta + 6, pta + 7) <= 0))
{
}
else
{
if(cmp(arg, pta - 1, pta) > 0 && cmp(arg, pta + 1, pta + 2) > 0 && cmp(arg, pta + 3, pta + 4) > 0 && cmp(arg, pta + 5, pta + 6) > 0)
{
goto reversed;
}
}
quad_reversal64(pts, pta - 1);
if(v1 + v2 + v3 + v4 == 4 && cmp(arg, pta + 1, pta + 2) <= 0 && cmp(arg, pta + 3, pta + 4) <= 0 && cmp(arg, pta + 5, pta + 6) <= 0)
{
goto ordered;
}
if(v1 + v2 + v3 + v4 == 0 && cmp(arg, pta + 1, pta + 2) > 0 && cmp(arg, pta + 3, pta + 4) > 0 && cmp(arg, pta + 5, pta + 6) > 0)
{
pts = pta;
goto reversed;
}
x = !v1;
tmp = pta[v1];
pta[0] = pta[x];
pta[1] = tmp;
pta += 2;
x = !v2;
tmp = pta[v2];
pta[0] = pta[x];
pta[1] = tmp;
pta += 2;
x = !v3;
tmp = pta[v3];
pta[0] = pta[x];
pta[1] = tmp;
pta += 2;
x = !v4;
tmp = pta[v4];
pta[0] = pta[x];
pta[1] = tmp;
pta -= 6;
if(cmp(arg, pta + 1, pta + 2) > 0 || cmp(arg, pta + 3, pta + 4) > 0 || cmp(arg, pta + 5, pta + 6) > 0)
{
quad_swap_merge64(pta, swap, cmp, arg);
}
pta += 8;
continue;
}
switch(nmemb % 8)
{
case 7:
if(cmp(arg, pta + 5, pta + 6) <= 0)
break;
case 6:
if(cmp(arg, pta + 4, pta + 5) <= 0)
break;
case 5:
if(cmp(arg, pta + 3, pta + 4) <= 0)
break;
case 4:
if(cmp(arg, pta + 2, pta + 3) <= 0)
break;
case 3:
if(cmp(arg, pta + 1, pta + 2) <= 0)
break;
case 2:
if(cmp(arg, pta + 0, pta + 1) <= 0)
break;
case 1:
if(cmp(arg, pta - 1, pta + 0) <= 0)
break;
case 0:
quad_reversal64(pts, pta + nmemb % 8 - 1);
if(pts == array)
{
return 1;
}
goto reverse_end;
}
quad_reversal64(pts, pta - 1);
break;
}
tail_swap64(pta, swap, nmemb % 8, cmp, arg);
reverse_end:
pta = array;
for(count = nmemb / 32; count--; pta += 32)
{
if(cmp(arg, pta + 7, pta + 8) <= 0 && cmp(arg, pta + 15, pta + 16) <= 0 && cmp(arg, pta + 23, pta + 24) <= 0)
{
continue;
}
parity_merge64(swap, pta, 8, 8, cmp, arg);
parity_merge64(swap + 16, pta + 16, 8, 8, cmp, arg);
parity_merge64(pta, swap, 16, 16, cmp, arg);
}
if(nmemb % 32 > 8)
{
tail_merge64(pta, swap, 32, nmemb % 32, 8, cmp, arg);
}
return 0;
}

size_t quad_merge64(long long * array, long long * swap, size_t swap_size, size_t nmemb, size_t block, CMPFUNCPTR cmp, void * arg)
{
long long * pta, * pte;

pte = array + nmemb;
block *= 4;
while(block <= nmemb && block <= swap_size)
{
pta = array;
do
{
quad_merge_block64(pta, swap, block / 4, cmp, arg);
pta += block;
}while(pta + block <= pte);
tail_merge64(pta, swap, swap_size, pte - pta, block / 4, cmp, arg);
block *= 4;
}
tail_merge64(array, swap, swap_size, nmemb, block / 4, cmp, arg);
return block / 2;
}

void tail_merge64(long long * array, long long * swap, size_t swap_size, size_t nmemb, size_t block, CMPFUNCPTR cmp, void * arg)
{
long long * pta, * pte;

pte = array + nmemb;
while(block < nmemb && block <= swap_size)
{
for(pta = array; pta + block < pte; pta += block * 2)
{
if(pta + block * 2 < pte)
{
partial_backward_merge64(pta, swap, swap_size, block * 2, block, cmp, arg);
continue;
}
partial_backward_merge64(pta, swap, swap_size, pte - pta, block, cmp, arg);
break;
}
block *= 2;
}
}

void rotate_merge_block64(long long * array, long long * swap, size_t swap_size, size_t lblock, size_t right, CMPFUNCPTR cmp, void * arg)
{
size_t left, rblock, unbalanced;

if(cmp(arg, array + lblock - 1, array + lblock) <= 0)
{
return ;
}
rblock = lblock / 2;
lblock -= rblock;
left = monobound_binary_first64(array + lblock + rblock, array + lblock, right, cmp, arg);
right -= left;
if(left)
{
if(lblock + left <= swap_size)
{
memcpy(swap, array, lblock * sizeof(long long));
memcpy(swap + lblock, array + lblock + rblock, left * sizeof(long long));
memmove(array + lblock + left, array + lblock, rblock * sizeof(long long));
cross_merge64(array, swap, lblock, left, cmp, arg);
}
else
{
trinity_rotation64(array + lblock, swap, swap_size, rblock + left, rblock);
unbalanced = (left * 2 < lblock) | (lblock * 2 < left);
if(unbalanced && left <= swap_size)
{
partial_backward_merge64(array, swap, swap_size, lblock + left, lblock, cmp, arg);
}
else if(unbalanced && lblock <= swap_size)
{
partial_forward_merge64(array, swap, swap_size, lblock + left, lblock, cmp, arg);
}
else
{
rotate_merge_block64(array, swap, swap_size, lblock, left, cmp, arg);
}
}
}
if(right)
{
unbalanced = (right * 2 < rblock) | (rblock * 2 < right);
if((unbalanced && right <= swap_size) || right + rblock <= swap_size)
{
partial_backward_merge64(array + lblock + left, swap, swap_size, rblock + right, rblock, cmp, arg);
}
else if(unbalanced && rblock <= swap_size)
{
partial_forward_merge64(array + lblock + left, swap, swap_size, rblock + right, rblock, cmp, arg);
}
else
{
rotate_merge_block64(array + lblock + left, swap, swap_size, rblock, right, cmp, arg);
}
}
}

size_t quad_swap_int64(long long * array, size_t nmemb, CMPFUNCPTR cmp, void * arg)
{
long long tmp, swap[32];
size_t count;
long long * pta, * pts;
unsigned char v1, v2, v3, v4, x;

pta = array;
count = nmemb / 8;
while(count--)
{
v1 = (*(pta + 0) > *(pta + 1)) > 0;
v2 = (*(pta + 2) > *(pta + 3)) > 0;
v3 = (*(pta + 4) > *(pta + 5)) > 0;
v4 = (*(pta + 6) > *(pta + 7)) > 0;
switch(v1 + v2 * 2 + v3 * 4 + v4 * 8)
{
case 0:
if((*(pta + 1) > *(pta + 2)) <= 0 && (*(pta + 3) > *(pta + 4)) <= 0 && (*(pta + 5) > *(pta + 6)) <= 0)
{
goto ordered;
}
quad_swap_merge_int64(pta, swap, cmp, arg);
break;
case 15:
if((*(pta + 1) > *(pta + 2)) > 0 && (*(pta + 3) > *(pta + 4)) > 0 && (*(pta + 5) > *(pta + 6)) > 0)
{
pts = pta;
goto reversed;
}
default:
not_ordered:
x = !v1;
tmp = pta[x];
pta[0] = pta[v1];
pta[1] = tmp;
pta += 2;
x = !v2;
tmp = pta[x];
pta[0] = pta[v2];
pta[1] = tmp;
pta += 2;
x = !v3;
tmp = pta[x];
pta[0] = pta[v3];
pta[1] = tmp;
pta += 2;
x = !v4;
tmp = pta[x];
pta[0] = pta[v4];
pta[1] = tmp;
pta -= 6;
quad_swap_merge_int64(pta, swap, cmp, arg);
}
pta += 8;
continue;
ordered:
pta += 8;
if(count--)
{
if((v1 = (*(pta + 0) > *(pta + 1)) > 0) | (v2 = (*(pta + 2) > *(pta + 3)) > 0) | (v3 = (*(pta + 4) > *(pta + 5)) > 0) | (v4 = (*(pta + 6) > *(pta + 7)) > 0))
{
if(v1 + v2 + v3 + v4 == 4 && (*(pta + 1) > *(pta + 2)) > 0 && (*(pta + 3) > *(pta + 4)) > 0 && (*(pta + 5) > *(pta + 6)) > 0)
{
pts = pta;
goto reversed;
}
goto not_ordered;
}
if((*(pta + 1) > *(pta + 2)) <= 0 && (*(pta + 3) > *(pta + 4)) <= 0 && (*(pta + 5) > *(pta + 6)) <= 0)
{
goto ordered;
}
quad_swap_merge_int64(pta, swap, cmp, arg);
pta += 8;
continue;
}
break;
reversed:
pta += 8;
if(count--)
{
if((v1 = (*(pta + 0) > *(pta + 1)) <= 0) | (v2 = (*(pta + 2) > *(pta + 3)) <= 0) | (v3 = (*(pta + 4) > *(pta + 5)) <= 0) | (v4 = (*(pta + 6) > *(pta + 7)) <= 0))
{
}
else
{
if((*(pta - 1) > *(pta)) > 0 && (*(pta + 1) > *(pta + 2)) > 0 && (*(pta + 3) > *(pta + 4)) > 0 && (*(pta + 5) > *(pta + 6)) > 0)
{
goto reversed;
}
}
quad_reversal_int64(pts, pta - 1);
if(v1 + v2 + v3 + v4 == 4 && (*(pta + 1) > *(pta + 2)) <= 0 && (*(pta + 3) > *(pta + 4)) <= 0 && (*(pta + 5) > *(pta + 6)) <= 0)
{
goto ordered;
}
if(v1 + v2 + v3 + v4 == 0 && (*(pta + 1) > *(pta + 2)) > 0 && (*(pta + 3) > *(pta + 4)) > 0 && (*(pta + 5) > *(pta + 6)) > 0)
{
pts = pta;
goto reversed;
}
x = !v1;
tmp = pta[v1];
pta[0] = pta[x];
pta[1] = tmp;
pta += 2;
x = !v2;
tmp = pta[v2];
pta[0] = pta[x];
pta[1] = tmp;
pta += 2;
x = !v3;
tmp = pta[v3];
pta[0] = pta[x];
pta[1] = tmp;
pta += 2;
x = !v4;
tmp = pta[v4];
pta[0] = pta[x];
pta[1] = tmp;
pta -= 6;
if((*(pta + 1) > *(pta + 2)) > 0 || (*(pta + 3) > *(pta + 4)) > 0 || (*(pta + 5) > *(pta + 6)) > 0)
{
quad_swap_merge_int64(pta, swap, cmp, arg);
}
pta += 8;
continue;
}
switch(nmemb % 8)
{
case 7:
if((*(pta + 5) > *(pta + 6)) <= 0)
break;
case 6:
if((*(pta + 4) > *(pta + 5)) <= 0)
break;
case 5:
if((*(pta + 3) > *(pta + 4)) <= 0)
break;
case 4:
if((*(pta + 2) > *(pta + 3)) <= 0)
break;
case 3:
if((*(pta + 1) > *(pta + 2)) <= 0)
break;
case 2:
if((*(pta + 0) > *(pta + 1)) <= 0)
break;
case 1:
if((*(pta - 1) > *(pta + 0)) <= 0)
break;
case 0:
quad_reversal_int64(pts, pta + nmemb % 8 - 1);
if(pts == array)
{
return 1;
}
goto reverse_end;
}
quad_reversal_int64(pts, pta - 1);
break;
}
tail_swap_int64(pta, swap, nmemb % 8, cmp, arg);
reverse_end:
pta = array;
for(count = nmemb / 32; count--; pta += 32)
{
if((*(pta + 7) > *(pta + 8)) <= 0 && (*(pta + 15) > *(pta + 16)) <= 0 && (*(pta + 23) > *(pta + 24)) <= 0)
{
continue;
}
parity_merge_int64(swap, pta, 8, 8, cmp, arg);
parity_merge_int64(swap + 16, pta + 16, 8, 8, cmp, arg);
parity_merge_int64(pta, swap, 16, 16, cmp, arg);
}
if(nmemb % 32 > 8)
{
tail_merge_int64(pta, swap, 32, nmemb % 32, 8, cmp, arg);
}
return 0;
}

size_t quad_merge_int64(long long * array, long long * swap, size_t swap_size, size_t nmemb, size_t block, CMPFUNCPTR cmp, void * arg)
{
long long * pta, * pte;

pte = array + nmemb;
block *= 4;
while(block <= nmemb && block <= swap_size)
{
pta = array;
do
{
quad_merge_block_int64(pta, swap, block / 4, cmp, arg);
pta += block;
}while(pta + block <= pte);
tail_merge_int64(pta, swap, swap_size, pte - pta, block / 4, cmp, arg);
block *= 4;
}
tail_merge_int64(array, swap, swap_size, nmemb, block / 4, cmp, arg);
return block / 2;
}

void tail_merge_int64(long long * array, long long * swap, size_t swap_size, size_t nmemb, size_t block, CMPFUNCPTR cmp, void * arg)
{
long long * pta, * pte;

pte = array + nmemb;
while(block < nmemb && block <= swap_size)
{
for(pta = array; pta + block < pte; pta += block * 2)
{
if(pta + block * 2 < pte)
{
partial_backward_merge_int64(pta, swap, swap_size, block * 2, block, cmp, arg);
continue;
}
partial_backward_merge_int64(pta, swap, swap_size, pte - pta, block, cmp, arg);
break;
}
block *= 2;
}
}

void rotate_merge_block_int64(long long * array, long long * swap, size_t swap_size, size_t lblock, size_t right, CMPFUNCPTR cmp, void * arg)
{
size_t left, rblock, unbalanced;

if((*(array + lblock - 1) > *(array + lblock)) <= 0)
{
return ;
}
rblock = lblock / 2;
lblock -= rblock;
left = monobound_binary_first_int64(array + lblock + rblock, array + lblock, right, cmp, arg);
right -= left;
if(left)
{
if(lblock + left <= swap_size)
{
memcpy(swap, array, lblock * sizeof(long long));
memcpy(swap + lblock, array + lblock + rblock, left * sizeof(long long));
memmove(array + lblock + left, array + lblock, rblock * sizeof(long long));
cross_merge_int64(array, swap, lblock, left, cmp, arg);
}
else
{
trinity_rotation_int64(array + lblock, swap, swap_size, rblock + left, rblock);
unbalanced = (left * 2 < lblock) | (lblock * 2 < left);
if(unbalanced && left <= swap_size)
{
partial_backward_merge_int64(array, swap, swap_size, lblock + left, lblock, cmp, arg);
}
else if(unbalanced && lblock <= swap_size)
{
partial_forward_merge_int64(array, swap, swap_size, lblock + left, lblock, cmp, arg);
}
else
{
rotate_merge_block_int64(array, swap, swap_size, lblock, left, cmp, arg);
}
}
}
if(right)
{
unbalanced = (right * 2 < rblock) | (rblock * 2 < right);
if((unbalanced && right <= swap_size) || right + rblock <= swap_size)
{
partial_backward_merge_int64(array + lblock + left, swap, swap_size, rblock + right, rblock, cmp, arg);
}
else if(unbalanced && rblock <= swap_size)
{
partial_forward_merge_int64(array + lblock + left, swap, swap_size, rblock + right, rblock, cmp, arg);
}
else
{
rotate_merge_block_int64(array + lblock + left, swap, swap_size, rblock, right, cmp, arg);
}
}
}

size_t quad_swap_uint64(unsigned long long * array, size_t nmemb, CMPFUNCPTR cmp, void * arg)
{
unsigned long long tmp, swap[32];
size_t count;
unsigned long long * pta, * pts;
unsigned char v1, v2, v3, v4, x;

pta = array;
count = nmemb / 8;
while(count--)
{
v1 = (*(pta + 0) > *(pta + 1)) > 0;
v2 = (*(pta + 2) > *(pta + 3)) > 0;
v3 = (*(pta + 4) > *(pta + 5)) > 0;
v4 = (*(pta + 6) > *(pta + 7)) > 0;
switch(v1 + v2 * 2 + v3 * 4 + v4 * 8)
{
case 0:
if((*(pta + 1) > *(pta + 2)) <= 0 && (*(pta + 3) > *(pta + 4)) <= 0 && (*(pta + 5) > *(pta + 6)) <= 0)
{
goto ordered;
}
quad_swap_merge_uint64(pta, swap, cmp, arg);
break;
case 15:
if((*(pta + 1) > *(pta + 2)) > 0 && (*(pta + 3) > *(pta + 4)) > 0 && (*(pta + 5) > *(pta + 6)) > 0)
{
pts = pta;
goto reversed;
}
default:
not_ordered:
x = !v1;
tmp = pta[x];
pta[0] = pta[v1];
pta[1] = tmp;
pta += 2;
x = !v2;
tmp = pta[x];
pta[0] = pta[v2];
pta[1] = tmp;
pta += 2;
x = !v3;
tmp = pta[x];
pta[0] = pta[v3];
pta[1] = tmp;
pta += 2;
x = !v4;
tmp = pta[x];
pta[0] = pta[v4];
pta[1] = tmp;
pta -= 6;
quad_swap_merge_uint64(pta, swap, cmp, arg);
}
pta += 8;
continue;
ordered:
pta += 8;
if(count--)
{
if((v1 = (*(pta + 0) > *(pta + 1)) > 0) | (v2 = (*(pta + 2) > *(pta + 3)) > 0) | (v3 = (*(pta + 4) > *(pta + 5)) > 0) | (v4 = (*(pta + 6) > *(pta + 7)) > 0))
{
if(v1 + v2 + v3 + v4 == 4 && (*(pta + 1) > *(pta + 2)) > 0 && (*(pta + 3) > *(pta + 4)) > 0 && (*(pta + 5) > *(pta + 6)) > 0)
{
pts = pta;
goto reversed;
}
goto not_ordered;
}
if((*(pta + 1) > *(pta + 2)) <= 0 && (*(pta + 3) > *(pta + 4)) <= 0 && (*(pta + 5) > *(pta + 6)) <= 0)
{
goto ordered;
}
quad_swap_merge_uint64(pta, swap, cmp, arg);
pta += 8;
continue;
}
break;
reversed:
pta += 8;
if(count--)
{
if((v1 = (*(pta + 0) > *(pta + 1)) <= 0) | (v2 = (*(pta + 2) > *(pta + 3)) <= 0) | (v3 = (*(pta + 4) > *(pta + 5)) <= 0) | (v4 = (*(pta + 6) > *(pta + 7)) <= 0))
{
}
else
{
if((*(pta - 1) > *(pta)) > 0 && (*(pta + 1) > *(pta + 2)) > 0 && (*(pta + 3) > *(pta + 4)) > 0 && (*(pta + 5) > *(pta + 6)) > 0)
{
goto reversed;
}
}
quad_reversal_uint64(pts, pta - 1);
if(v1 + v2 + v3 + v4 == 4 && (*(pta + 1) > *(pta + 2)) <= 0 && (*(pta + 3) > *(pta + 4)) <= 0 && (*(pta + 5) > *(pta + 6)) <= 0)
{
goto ordered;
}
if(v1 + v2 + v3 + v4 == 0 && (*(pta + 1) > *(pta + 2)) > 0 && (*(pta + 3) > *(pta + 4)) > 0 && (*(pta + 5) > *(pta + 6)) > 0)
{
pts = pta;
goto reversed;
}
x = !v1;
tmp = pta[v1];
pta[0] = pta[x];
pta[1] = tmp;
pta += 2;
x = !v2;
tmp = pta[v2];
pta[0] = pta[x];
pta[1] = tmp;
pta += 2;
x = !v3;
tmp = pta[v3];
pta[0] = pta[x];
pta[1] = tmp;
pta += 2;
x = !v4;
tmp = pta[v4];
pta[0] = pta[x];
pta[1] = tmp;
pta -= 6;
if((*(pta + 1) > *(pta + 2)) > 0 || (*(pta + 3) > *(pta + 4)) > 0 || (*(pta + 5) > *(pta + 6)) > 0)
{
quad_swap_merge_uint64(pta, swap, cmp, arg);
}
pta += 8;
continue;
}
switch(nmemb % 8)
{
case 7:
if((*(pta + 5) > *(pta + 6)) <= 0)
break;
case 6:
if((*(pta + 4) > *(pta + 5)) <= 0)
break;
case 5:
if((*(pta + 3) > *(pta + 4)) <= 0)
break;
case 4:
if((*(pta + 2) > *(pta + 3)) <= 0)
break;
case 3:
if((*(pta + 1) > *(pta + 2)) <= 0)
break;
case 2:
if((*(pta + 0) > *(pta + 1)) <= 0)
break;
case 1:
if((*(pta - 1) > *(pta + 0)) <= 0)
break;
case 0:
quad_reversal_uint64(pts, pta + nmemb % 8 - 1);
if(pts == array)
{
return 1;
}
goto reverse_end;
}
quad_reversal_uint64(pts, pta - 1);
break;
}
tail_swap_uint64(pta, swap, nmemb % 8, cmp, arg);
reverse_end:
pta = array;
for(count = nmemb / 32; count--; pta += 32)
{
if((*(pta + 7) > *(pta + 8)) <= 0 && (*(pta + 15) > *(pta + 16)) <= 0 && (*(pta + 23) > *(pta + 24)) <= 0)
{
continue;
}
parity_merge_uint64(swap, pta, 8, 8, cmp, arg);
parity_merge_uint64(swap + 16, pta + 16, 8, 8, cmp, arg);
parity_merge_uint64(pta, swap, 16, 16, cmp, arg);
}
if(nmemb % 32 > 8)
{
tail_merge_uint64(pta, swap, 32, nmemb % 32, 8, cmp, arg);
}
return 0;
}

size_t quad_merge_uint64(unsigned long long * array, unsigned long long * swap, size_t swap_size, size_t nmemb, size_t block, CMPFUNCPTR cmp, void * arg)
{
unsigned long long * pta, * pte;

pte = array + nmemb;
block *= 4;
while(block <= nmemb && block <= swap_size)
{
pta = array;
do
{
quad_merge_block_uint64(pta, swap, block / 4, cmp, arg);
pta += block;
}while(pta + block <= pte);
tail_merge_uint64(pta, swap, swap_size, pte - pta, block / 4, cmp, arg);
block *= 4;
}
tail_merge_uint64(array, swap, swap_size, nmemb, block / 4, cmp, arg);
return block / 2;
}

void tail_merge_uint64(unsigned long long * array, unsigned long long * swap, size_t swap_size, size_t nmemb, size_t block, CMPFUNCPTR cmp, void * arg)
{
unsigned long long * pta, * pte;

pte = array + nmemb;
while(block < nmemb && block <= swap_size)
{
for(pta = array; pta + block < pte; pta += block * 2)
{
if(pta + block * 2 < pte)
{
partial_backward_merge_uint64(pta, swap, swap_size, block * 2, block, cmp, arg);
continue;
}
partial_backward_merge_uint64(pta, swap, swap_size, pte - pta, block, cmp, arg);
break;
}
block *= 2;
}
}

void rotate_merge_block_uint64(unsigned long long * array, unsigned long long * swap, size_t swap_size, size_t lblock, size_t right, CMPFUNCPTR cmp, void * arg)
{
size_t left, rblock, unbalanced;

if((*(array + lblock - 1) > *(array + lblock)) <= 0)
{
return ;
}
rblock = lblock / 2;
lblock -= rblock;
left = monobound_binary_first_uint64(array + lblock + rblock, array + lblock, right, cmp, arg);
right -= left;
if(left)
{
if(lblock + left <= swap_size)
{
memcpy(swap, array, lblock * sizeof(unsigned long long));
memcpy(swap + lblock, array + lblock + rblock, left * sizeof(unsigned long long));
memmove(array + lblock + left, array + lblock, rblock * sizeof(unsigned long long));
cross_merge_uint64(array, swap, lblock, left, cmp, arg);
}
else
{
trinity_rotation_uint64(array + lblock, swap, swap_size, rblock + left, rblock);
unbalanced = (left * 2 < lblock) | (lblock * 2 < left);
if(unbalanced && left <= swap_size)
{
partial_backward_merge_uint64(array, swap, swap_size, lblock + left, lblock, cmp, arg);
}
else if(unbalanced && lblock <= swap_size)
{
partial_forward_merge_uint64(array, swap, swap_size, lblock + left, lblock, cmp, arg);
}
else
{
rotate_merge_block_uint64(array, swap, swap_size, lblock, left, cmp, arg);
}
}
}
if(right)
{
unbalanced = (right * 2 < rblock) | (rblock * 2 < right);
if((unbalanced && right <= swap_size) || right + rblock <= swap_size)
{
partial_backward_merge_uint64(array + lblock + left, swap, swap_size, rblock + right, rblock, cmp, arg);
}
else if(unbalanced && rblock <= swap_size)
{
partial_forward_merge_uint64(array + lblock + left, swap, swap_size, rblock + right, rblock, cmp, arg);
}
else
{
rotate_merge_block_uint64(array + lblock + left, swap, swap_size, rblock, right, cmp, arg);
}
}
}

size_t quad_swap8(char * array, size_t nmemb, CMPFUNCPTR cmp, void * arg)
{
char tmp, swap[32];
size_t count;
char * pta, * pts;
unsigned char v1, v2, v3, v4, x;

pta = array;
count = nmemb / 8;
while(count--)
{
v1 = cmp(arg, pta + 0, pta + 1) > 0;
v2 = cmp(arg, pta + 2, pta + 3) > 0;
v3 = cmp(arg, pta + 4, pta + 5) > 0;
v4 = cmp(arg, pta + 6, pta + 7) > 0;
switch(v1 + v2 * 2 + v3 * 4 + v4 * 8)
{
case 0:
if(cmp(arg, pta + 1, pta + 2) <= 0 && cmp(arg, pta + 3, pta + 4) <= 0 && cmp(arg, pta + 5, pta + 6) <= 0)
{
goto ordered;
}
quad_swap_merge8(pta, swap, cmp, arg);
break;
case 15:
if(cmp(arg, pta + 1, pta + 2) > 0 && cmp(arg, pta + 3, pta + 4) > 0 && cmp(arg, pta + 5, pta + 6) > 0)
{
pts = pta;
goto reversed;
}
default:
not_ordered:
x = !v1;
tmp = pta[x];
pta[0] = pta[v1];
pta[1] = tmp;
pta += 2;
x = !v2;
tmp = pta[x];
pta[0] = pta[v2];
pta[1] = tmp;
pta += 2;
x = !v3;
tmp = pta[x];
pta[0] = pta[v3];
pta[1] = tmp;
pta += 2;
x = !v4;
tmp = pta[x];
pta[0] = pta[v4];
pta[1] = tmp;
pta -= 6;
quad_swap_merge8(pta, swap, cmp, arg);
}
pta += 8;
continue;
ordered:
pta += 8;
if(count--)
{
if((v1 = cmp(arg, pta + 0, pta + 1) > 0) | (v2 = cmp(arg, pta + 2, pta + 3) > 0) | (v3 = cmp(arg, pta + 4, pta + 5) > 0) | (v4 = cmp(arg, pta + 6, pta + 7) > 0))
{
if(v1 + v2 + v3 + v4 == 4 && cmp(arg, pta + 1, pta + 2) > 0 && cmp(arg, pta + 3, pta + 4) > 0 && cmp(arg, pta + 5, pta + 6) > 0)
{
pts = pta;
goto reversed;
}
goto not_ordered;
}
if(cmp(arg, pta + 1, pta + 2) <= 0 && cmp(arg, pta + 3, pta + 4) <= 0 && cmp(arg, pta + 5, pta + 6) <= 0)
{
goto ordered;
}
quad_swap_merge8(pta, swap, cmp, arg);
pta += 8;
continue;
}
break;
reversed:
pta += 8;
if(count--)
{
if((v1 = cmp(arg, pta + 0, pta + 1) <= 0) | (v2 = cmp(arg, pta + 2, pta + 3) <= 0) | (v3 = cmp(arg, pta + 4, pta + 5) <= 0) | (v4 = cmp(arg, pta + 6, pta + 7) <= 0))
{
}
else
{
if(cmp(arg, pta - 1, pta) > 0 && cmp(arg, pta + 1, pta + 2) > 0 && cmp(arg, pta + 3, pta + 4) > 0 && cmp(arg, pta + 5, pta + 6) > 0)
{
goto reversed;
}
}
quad_reversal8(pts, pta - 1);
if(v1 + v2 + v3 + v4 == 4 && cmp(arg, pta + 1, pta + 2) <= 0 && cmp(arg, pta + 3, pta + 4) <= 0 && cmp(arg, pta + 5, pta + 6) <= 0)
{
goto ordered;
}
if(v1 + v2 + v3 + v4 == 0 && cmp(arg, pta + 1, pta + 2) > 0 && cmp(arg, pta + 3, pta + 4) > 0 && cmp(arg, pta + 5, pta + 6) > 0)
{
pts = pta;
goto reversed;
}
x = !v1;
tmp = pta[v1];
pta[0] = pta[x];
pta[1] = tmp;
pta += 2;
x = !v2;
tmp = pta[v2];
pta[0] = pta[x];
pta[1] = tmp;
pta += 2;
x = !v3;
tmp = pta[v3];
pta[0] = pta[x];
pta[1] = tmp;
pta += 2;
x = !v4;
tmp = pta[v4];
pta[0] = pta[x];
pta[1] = tmp;
pta -= 6;
if(cmp(arg, pta + 1, pta + 2) > 0 || cmp(arg, pta + 3, pta + 4) > 0 || cmp(arg, pta + 5, pta + 6) > 0)
{
quad_swap_merge8(pta, swap, cmp, arg);
}
pta += 8;
continue;
}
switch(nmemb % 8)
{
case 7:
if(cmp(arg, pta + 5, pta + 6) <= 0)
break;
case 6:
if(cmp(arg, pta + 4, pta + 5) <= 0)
break;
case 5:
if(cmp(arg, pta + 3, pta + 4) <= 0)
break;
case 4:
if(cmp(arg, pta + 2, pta + 3) <= 0)
break;
case 3:
if(cmp(arg, pta + 1, pta + 2) <= 0)
break;
case 2:
if(cmp(arg, pta + 0, pta + 1) <= 0)
break;
case 1:
if(cmp(arg, pta - 1, pta + 0) <= 0)
break;
case 0:
quad_reversal8(pts, pta + nmemb % 8 - 1);
if(pts == array)
{
return 1;
}
goto reverse_end;
}
quad_reversal8(pts, pta - 1);
break;
}
tail_swap8(pta, swap, nmemb % 8, cmp, arg);
reverse_end:
pta = array;
for(count = nmemb / 32; count--; pta += 32)
{
if(cmp(arg, pta + 7, pta + 8) <= 0 && cmp(arg, pta + 15, pta + 16) <= 0 && cmp(arg, pta + 23, pta + 24) <= 0)
{
continue;
}
parity_merge8(swap, pta, 8, 8, cmp, arg);
parity_merge8(swap + 16, pta + 16, 8, 8, cmp, arg);
parity_merge8(pta, swap, 16, 16, cmp, arg);
}
if(nmemb % 32 > 8)
{
tail_merge8(pta, swap, 32, nmemb % 32, 8, cmp, arg);
}
return 0;
}

size_t quad_merge8(char * array, char * swap, size_t swap_size, size_t nmemb, size_t block, CMPFUNCPTR cmp, void * arg)
{
char * pta, * pte;

pte = array + nmemb;
block *= 4;
while(block <= nmemb && block <= swap_size)
{
pta = array;
do
{
quad_merge_block8(pta, swap, block / 4, cmp, arg);
pta += block;
}while(pta + block <= pte);
tail_merge8(pta, swap, swap_size, pte - pta, block / 4, cmp, arg);
block *= 4;
}
tail_merge8(array, swap, swap_size, nmemb, block / 4, cmp, arg);
return block / 2;
}

void tail_merge8(char * array, char * swap, size_t swap_size, size_t nmemb, size_t block, CMPFUNCPTR cmp, void * arg)
{
char * pta, * pte;

pte = array + nmemb;
while(block < nmemb && block <= swap_size)
{
for(pta = array; pta + block < pte; pta += block * 2)
{
if(pta + block * 2 < pte)
{
partial_backward_merge8(pta, swap, swap_size, block * 2, block, cmp, arg);
continue;
}
partial_backward_merge8(pta, swap, swap_size, pte - pta, block, cmp, arg);
break;
}
block *= 2;
}
}

void rotate_merge_block8(char * array, char * swap, size_t swap_size, size_t lblock, size_t right, CMPFUNCPTR cmp, void * arg)
{
size_t left, rblock, unbalanced;

if(cmp(arg, array + lblock - 1, array + lblock) <= 0)
{
return ;
}
rblock = lblock / 2;
lblock -= rblock;
left = monobound_binary_first8(array + lblock + rblock, array + lblock, right, cmp, arg);
right -= left;
if(left)
{
if(lblock + left <= swap_size)
{
memcpy(swap, array, lblock * sizeof(char));
memcpy(swap + lblock, array + lblock + rblock, left * sizeof(char));
memmove(array + lblock + left, array + lblock, rblock * sizeof(char));
cross_merge8(array, swap, lblock, left, cmp, arg);
}
else
{
trinity_rotation8(array + lblock, swap, swap_size, rblock + left, rblock);
unbalanced = (left * 2 < lblock) | (lblock * 2 < left);
if(unbalanced && left <= swap_size)
{
partial_backward_merge8(array, swap, swap_size, lblock + left, lblock, cmp, arg);
}
else if(unbalanced && lblock <= swap_size)
{
partial_forward_merge8(array, swap, swap_size, lblock + left, lblock, cmp, arg);
}
else
{
rotate_merge_block8(array, swap, swap_size, lblock, left, cmp, arg);
}
}
}
if(right)
{
unbalanced = (right * 2 < rblock) | (rblock * 2 < right);
if((unbalanced && right <= swap_size) || right + rblock <= swap_size)
{
partial_backward_merge8(array + lblock + left, swap, swap_size, rblock + right, rblock, cmp, arg);
}
else if(unbalanced && rblock <= swap_size)
{
partial_forward_merge8(array + lblock + left, swap, swap_size, rblock + right, rblock, cmp, arg);
}
else
{
rotate_merge_block8(array + lblock + left, swap, swap_size, rblock, right, cmp, arg);
}
}
}

size_t quad_swap16(short * array, size_t nmemb, CMPFUNCPTR cmp, void * arg)
{
short tmp, swap[32];
size_t count;
short * pta, * pts;
unsigned char v1, v2, v3, v4, x;

pta = array;
count = nmemb / 8;
while(count--)
{
v1 = cmp(arg, pta + 0, pta + 1) > 0;
v2 = cmp(arg, pta + 2, pta + 3) > 0;
v3 = cmp(arg, pta + 4, pta + 5) > 0;
v4 = cmp(arg, pta + 6, pta + 7) > 0;
switch(v1 + v2 * 2 + v3 * 4 + v4 * 8)
{
case 0:
if(cmp(arg, pta + 1, pta + 2) <= 0 && cmp(arg, pta + 3, pta + 4) <= 0 && cmp(arg, pta + 5, pta + 6) <= 0)
{
goto ordered;
}
quad_swap_merge16(pta, swap, cmp, arg);
break;
case 15:
if(cmp(arg, pta + 1, pta + 2) > 0 && cmp(arg, pta + 3, pta + 4) > 0 && cmp(arg, pta + 5, pta + 6) > 0)
{
pts = pta;
goto reversed;
}
default:
not_ordered:
x = !v1;
tmp = pta[x];
pta[0] = pta[v1];
pta[1] = tmp;
pta += 2;
x = !v2;
tmp = pta[x];
pta[0] = pta[v2];
pta[1] = tmp;
pta += 2;
x = !v3;
tmp = pta[x];
pta[0] = pta[v3];
pta[1] = tmp;
pta += 2;
x = !v4;
tmp = pta[x];
pta[0] = pta[v4];
pta[1] = tmp;
pta -= 6;
quad_swap_merge16(pta, swap, cmp, arg);
}
pta += 8;
continue;
ordered:
pta += 8;
if(count--)
{
if((v1 = cmp(arg, pta + 0, pta + 1) > 0) | (v2 = cmp(arg, pta + 2, pta + 3) > 0) | (v3 = cmp(arg, pta + 4, pta + 5) > 0) | (v4 = cmp(arg, pta + 6, pta + 7) > 0))
{
if(v1 + v2 + v3 + v4 == 4 && cmp(arg, pta + 1, pta + 2) > 0 && cmp(arg, pta + 3, pta + 4) > 0 && cmp(arg, pta + 5, pta + 6) > 0)
{
pts = pta;
goto reversed;
}
goto not_ordered;
}
if(cmp(arg, pta + 1, pta + 2) <= 0 && cmp(arg, pta + 3, pta + 4) <= 0 && cmp(arg, pta + 5, pta + 6) <= 0)
{
goto ordered;
}
quad_swap_merge16(pta, swap, cmp, arg);
pta += 8;
continue;
}
break;
reversed:
pta += 8;
if(count--)
{
if((v1 = cmp(arg, pta + 0, pta + 1) <= 0) | (v2 = cmp(arg, pta + 2, pta + 3) <= 0) | (v3 = cmp(arg, pta + 4, pta + 5) <= 0) | (v4 = cmp(arg, pta + 6, pta + 7) <= 0))
{
}
else
{
if(cmp(arg, pta - 1, pta) > 0 && cmp(arg, pta + 1, pta + 2) > 0 && cmp(arg, pta + 3, pta + 4) > 0 && cmp(arg, pta + 5, pta + 6) > 0)
{
goto reversed;
}
}
quad_reversal16(pts, pta - 1);
if(v1 + v2 + v3 + v4 == 4 && cmp(arg, pta + 1, pta + 2) <= 0 && cmp(arg, pta + 3, pta + 4) <= 0 && cmp(arg, pta + 5, pta + 6) <= 0)
{
goto ordered;
}
if(v1 + v2 + v3 + v4 == 0 && cmp(arg, pta + 1, pta + 2) > 0 && cmp(arg, pta + 3, pta + 4) > 0 && cmp(arg, pta + 5, pta + 6) > 0)
{
pts = pta;
goto reversed;
}
x = !v1;
tmp = pta[v1];
pta[0] = pta[x];
pta[1] = tmp;
pta += 2;
x = !v2;
tmp = pta[v2];
pta[0] = pta[x];
pta[1] = tmp;
pta += 2;
x = !v3;
tmp = pta[v3];
pta[0] = pta[x];
pta[1] = tmp;
pta += 2;
x = !v4;
tmp = pta[v4];
pta[0] = pta[x];
pta[1] = tmp;
pta -= 6;
if(cmp(arg, pta + 1, pta + 2) > 0 || cmp(arg, pta + 3, pta + 4) > 0 || cmp(arg, pta + 5, pta + 6) > 0)
{
quad_swap_merge16(pta, swap, cmp, arg);
}
pta += 8;
continue;
}
switch(nmemb % 8)
{
case 7:
if(cmp(arg, pta + 5, pta + 6) <= 0)
break;
case 6:
if(cmp(arg, pta + 4, pta + 5) <= 0)
break;
case 5:
if(cmp(arg, pta + 3, pta + 4) <= 0)
break;
case 4:
if(cmp(arg, pta + 2, pta + 3) <= 0)
break;
case 3:
if(cmp(arg, pta + 1, pta + 2) <= 0)
break;
case 2:
if(cmp(arg, pta + 0, pta + 1) <= 0)
break;
case 1:
if(cmp(arg, pta - 1, pta + 0) <= 0)
break;
case 0:
quad_reversal16(pts, pta + nmemb % 8 - 1);
if(pts == array)
{
return 1;
}
goto reverse_end;
}
quad_reversal16(pts, pta - 1);
break;
}
tail_swap16(pta, swap, nmemb % 8, cmp, arg);
reverse_end:
pta = array;
for(count = nmemb / 32; count--; pta += 32)
{
if(cmp(arg, pta + 7, pta + 8) <= 0 && cmp(arg, pta + 15, pta + 16) <= 0 && cmp(arg, pta + 23, pta + 24) <= 0)
{
continue;
}
parity_merge16(swap, pta, 8, 8, cmp, arg);
parity_merge16(swap + 16, pta + 16, 8, 8, cmp, arg);
parity_merge16(pta, swap, 16, 16, cmp, arg);
}
if(nmemb % 32 > 8)
{
tail_merge16(pta, swap, 32, nmemb % 32, 8, cmp, arg);
}
return 0;
}

size_t quad_merge16(short * array, short * swap, size_t swap_size, size_t nmemb, size_t block, CMPFUNCPTR cmp, void * arg)
{
short * pta, * pte;

pte = array + nmemb;
block *= 4;
while(block <= nmemb && block <= swap_size)
{
pta = array;
do
{
quad_merge_block16(pta, swap, block / 4, cmp, arg);
pta += block;
}while(pta + block <= pte);
tail_merge16(pta, swap, swap_size, pte - pta, block / 4, cmp, arg);
block *= 4;
}
tail_merge16(array, swap, swap_size, nmemb, block / 4, cmp, arg);
return block / 2;
}

void tail_merge16(short * array, short * swap, size_t swap_size, size_t nmemb, size_t block, CMPFUNCPTR cmp, void * arg)
{
short * pta, * pte;

pte = array + nmemb;
while(block < nmemb && block <= swap_size)
{
for(pta = array; pta + block < pte; pta += block * 2)
{
if(pta + block * 2 < pte)
{
partial_backward_merge16(pta, swap, swap_size, block * 2, block, cmp, arg);
continue;
}
partial_backward_merge16(pta, swap, swap_size, pte - pta, block, cmp, arg);
break;
}
block *= 2;
}
}

void rotate_merge_block16(short * array, short * swap, size_t swap_size, size_t lblock, size_t right, CMPFUNCPTR cmp, void * arg)
{
size_t left, rblock, unbalanced;

if(cmp(arg, array + lblock - 1, array + lblock) <= 0)
{
return ;
}
rblock = lblock / 2;
lblock -= rblock;
left = monobound_binary_first16(array + lblock + rblock, array + lblock, right, cmp, arg);
right -= left;
if(left)
{
if(lblock + left <= swap_size)
{
memcpy(swap, array, lblock * sizeof(short));
memcpy(swap + lblock, array + lblock + rblock, left * sizeof(short));
memmove(array + lblock + left, array + lblock, rblock * sizeof(short));
cross_merge16(array, swap, lblock, left, cmp, arg);
}
else
{
trinity_rotation16(array + lblock, swap, swap_size, rblock + left, rblock);
unbalanced = (left * 2 < lblock) | (lblock * 2 < left);
if(unbalanced && left <= swap_size)
{
partial_backward_merge16(array, swap, swap_size, lblock + left, lblock, cmp, arg);
}
else if(unbalanced && lblock <= swap_size)
{
partial_forward_merge16(array, swap, swap_size, lblock + left, lblock, cmp, arg);
}
else
{
rotate_merge_block16(array, swap, swap_size, lblock, left, cmp, arg);
}
}
}
if(right)
{
unbalanced = (right * 2 < rblock) | (rblock * 2 < right);
if((unbalanced && right <= swap_size) || right + rblock <= swap_size)
{
partial_backward_merge16(array + lblock + left, swap, swap_size, rblock + right, rblock, cmp, arg);
}
else if(unbalanced && rblock <= swap_size)
{
partial_forward_merge16(array + lblock + left, swap, swap_size, rblock + right, rblock, cmp, arg);
}
else
{
rotate_merge_block16(array + lblock + left, swap, swap_size, rblock, right, cmp, arg);
}
}
}

size_t quad_swap128(long double * array, size_t nmemb, CMPFUNCPTR cmp, void * arg)
{
long double tmp, swap[32];
size_t count;
long double * pta, * pts;
unsigned char v1, v2, v3, v4, x;

pta = array;
count = nmemb / 8;
while(count--)
{
v1 = cmp(arg, pta + 0, pta + 1) > 0;
v2 = cmp(arg, pta + 2, pta + 3) > 0;
v3 = cmp(arg, pta + 4, pta + 5) > 0;
v4 = cmp(arg, pta + 6, pta + 7) > 0;
switch(v1 + v2 * 2 + v3 * 4 + v4 * 8)
{
case 0:
if(cmp(arg, pta + 1, pta + 2) <= 0 && cmp(arg, pta + 3, pta + 4) <= 0 && cmp(arg, pta + 5, pta + 6) <= 0)
{
goto ordered;
}
quad_swap_merge128(pta, swap, cmp, arg);
break;
case 15:
if(cmp(arg, pta + 1, pta + 2) > 0 && cmp(arg, pta + 3, pta + 4) > 0 && cmp(arg, pta + 5, pta + 6) > 0)
{
pts = pta;
goto reversed;
}
default:
not_ordered:
x = !v1;
tmp = pta[x];
pta[0] = pta[v1];
pta[1] = tmp;
pta += 2;
x = !v2;
tmp = pta[x];
pta[0] = pta[v2];
pta[1] = tmp;
pta += 2;
x = !v3;
tmp = pta[x];
pta[0] = pta[v3];
pta[1] = tmp;
pta += 2;
x = !v4;
tmp = pta[x];
pta[0] = pta[v4];
pta[1] = tmp;
pta -= 6;
quad_swap_merge128(pta, swap, cmp, arg);
}
pta += 8;
continue;
ordered:
pta += 8;
if(count--)
{
if((v1 = cmp(arg, pta + 0, pta + 1) > 0) | (v2 = cmp(arg, pta + 2, pta + 3) > 0) | (v3 = cmp(arg, pta + 4, pta + 5) > 0) | (v4 = cmp(arg, pta + 6, pta + 7) > 0))
{
if(v1 + v2 + v3 + v4 == 4 && cmp(arg, pta + 1, pta + 2) > 0 && cmp(arg, pta + 3, pta + 4) > 0 && cmp(arg, pta + 5, pta + 6) > 0)
{
pts = pta;
goto reversed;
}
goto not_ordered;
}
if(cmp(arg, pta + 1, pta + 2) <= 0 && cmp(arg, pta + 3, pta + 4) <= 0 && cmp(arg, pta + 5, pta + 6) <= 0)
{
goto ordered;
}
quad_swap_merge128(pta, swap, cmp, arg);
pta += 8;
continue;
}
break;
reversed:
pta += 8;
if(count--)
{
if((v1 = cmp(arg, pta + 0, pta + 1) <= 0) | (v2 = cmp(arg, pta + 2, pta + 3) <= 0) | (v3 = cmp(arg, pta + 4, pta + 5) <= 0) | (v4 = cmp(arg, pta + 6, pta + 7) <= 0))
{
}
else
{
if(cmp(arg, pta - 1, pta) > 0 && cmp(arg, pta + 1, pta + 2) > 0 && cmp(arg, pta + 3, pta + 4) > 0 && cmp(arg, pta + 5, pta + 6) > 0)
{
goto reversed;
}
}
quad_reversal128(pts, pta - 1);
if(v1 + v2 + v3 + v4 == 4 && cmp(arg, pta + 1, pta + 2) <= 0 && cmp(arg, pta + 3, pta + 4) <= 0 && cmp(arg, pta + 5, pta + 6) <= 0)
{
goto ordered;
}
if(v1 + v2 + v3 + v4 == 0 && cmp(arg, pta + 1, pta + 2) > 0 && cmp(arg, pta + 3, pta + 4) > 0 && cmp(arg, pta + 5, pta + 6) > 0)
{
pts = pta;
goto reversed;
}
x = !v1;
tmp = pta[v1];
pta[0] = pta[x];
pta[1] = tmp;
pta += 2;
x = !v2;
tmp = pta[v2];
pta[0] = pta[x];
pta[1] = tmp;
pta += 2;
x = !v3;
tmp = pta[v3];
pta[0] = pta[x];
pta[1] = tmp;
pta += 2;
x = !v4;
tmp = pta[v4];
pta[0] = pta[x];
pta[1] = tmp;
pta -= 6;
if(cmp(arg, pta + 1, pta + 2) > 0 || cmp(arg, pta + 3, pta + 4) > 0 || cmp(arg, pta + 5, pta + 6) > 0)
{
quad_swap_merge128(pta, swap, cmp, arg);
}
pta += 8;
continue;
}
switch(nmemb % 8)
{
case 7:
if(cmp(arg, pta + 5, pta + 6) <= 0)
break;
case 6:
if(cmp(arg, pta + 4, pta + 5) <= 0)
break;
case 5:
if(cmp(arg, pta + 3, pta + 4) <= 0)
break;
case 4:
if(cmp(arg, pta + 2, pta + 3) <= 0)
break;
case 3:
if(cmp(arg, pta + 1, pta + 2) <= 0)
break;
case 2:
if(cmp(arg, pta + 0, pta + 1) <= 0)
break;
case 1:
if(cmp(arg, pta - 1, pta + 0) <= 0)
break;
case 0:
quad_reversal128(pts, pta + nmemb % 8 - 1);
if(pts == array)
{
return 1;
}
goto reverse_end;
}
quad_reversal128(pts, pta - 1);
break;
}
tail_swap128(pta, swap, nmemb % 8, cmp, arg);
reverse_end:
pta = array;
for(count = nmemb / 32; count--; pta += 32)
{
if(cmp(arg, pta + 7, pta + 8) <= 0 && cmp(arg, pta + 15, pta + 16) <= 0 && cmp(arg, pta + 23, pta + 24) <= 0)
{
continue;
}
parity_merge128(swap, pta, 8, 8, cmp, arg);
parity_merge128(swap + 16, pta + 16, 8, 8, cmp, arg);
parity_merge128(pta, swap, 16, 16, cmp, arg);
}
if(nmemb % 32 > 8)
{
tail_merge128(pta, swap, 32, nmemb % 32, 8, cmp, arg);
}
return 0;
}

size_t quad_merge128(long double * array, long double * swap, size_t swap_size, size_t nmemb, size_t block, CMPFUNCPTR cmp, void * arg)
{
long double * pta, * pte;

pte = array + nmemb;
block *= 4;
while(block <= nmemb && block <= swap_size)
{
pta = array;
do
{
quad_merge_block128(pta, swap, block / 4, cmp, arg);
pta += block;
}while(pta + block <= pte);
tail_merge128(pta, swap, swap_size, pte - pta, block / 4, cmp, arg);
block *= 4;
}
tail_merge128(array, swap, swap_size, nmemb, block / 4, cmp, arg);
return block / 2;
}

void tail_merge128(long double * array, long double * swap, size_t swap_size, size_t nmemb, size_t block, CMPFUNCPTR cmp, void * arg)
{
long double * pta, * pte;

pte = array + nmemb;
while(block < nmemb && block <= swap_size)
{
for(pta = array; pta + block < pte; pta += block * 2)
{
if(pta + block * 2 < pte)
{
partial_backward_merge128(pta, swap, swap_size, block * 2, block, cmp, arg);
continue;
}
partial_backward_merge128(pta, swap, swap_size, pte - pta, block, cmp, arg);
break;
}
block *= 2;
}
}

void rotate_merge_block128(long double * array, long double * swap, size_t swap_size, size_t lblock, size_t right, CMPFUNCPTR cmp, void * arg)
{
size_t left, rblock, unbalanced;

if(cmp(arg, array + lblock - 1, array + lblock) <= 0)
{
return ;
}
rblock = lblock / 2;
lblock -= rblock;
left = monobound_binary_first128(array + lblock + rblock, array + lblock, right, cmp, arg);
right -= left;
if(left)
{
if(lblock + left <= swap_size)
{
memcpy(swap, array, lblock * sizeof(long double));
memcpy(swap + lblock, array + lblock + rblock, left * sizeof(long double));
memmove(array + lblock + left, array + lblock, rblock * sizeof(long double));
cross_merge128(array, swap, lblock, left, cmp, arg);
}
else
{
trinity_rotation128(array + lblock, swap, swap_size, rblock + left, rblock);
unbalanced = (left * 2 < lblock) | (lblock * 2 < left);
if(unbalanced && left <= swap_size)
{
partial_backward_merge128(array, swap, swap_size, lblock + left, lblock, cmp, arg);
}
else if(unbalanced && lblock <= swap_size)
{
partial_forward_merge128(array, swap, swap_size, lblock + left, lblock, cmp, arg);
}
else
{
rotate_merge_block128(array, swap, swap_size, lblock, left, cmp, arg);
}
}
}
if(right)
{
unbalanced = (right * 2 < rblock) | (rblock * 2 < right);
if((unbalanced && right <= swap_size) || right + rblock <= swap_size)
{
partial_backward_merge128(array + lblock + left, swap, swap_size, rblock + right, rblock, cmp, arg);
}
else if(unbalanced && rblock <= swap_size)
{
partial_forward_merge128(array + lblock + left, swap, swap_size, rblock + right, rblock, cmp, arg);
}
else
{
rotate_merge_block128(array + lblock + left, swap, swap_size, rblock, right, cmp, arg);
}
}
}

void rotate_merge32(int * array, int * swap, size_t swap_size, size_t nmemb, size_t block, CMPFUNCPTR cmp, void * arg)
{
int * pta, * pte;

pte = array + nmemb;
if(nmemb <= block * 2 && nmemb - block <= swap_size)
{
partial_backward_merge32(array, swap, swap_size, nmemb, block, cmp, arg);
return ;
}
while(block < nmemb)
{
for(pta = array; pta + block < pte; pta += block * 2)
{
if(pta + block * 2 < pte)
{
rotate_merge_block32(pta, swap, swap_size, block, block, cmp, arg);
continue;
}
rotate_merge_block32(pta, swap, swap_size, block, pte - pta - block, cmp, arg);
break;
}
block *= 2;
}
}

void rotate_merge_int32(int * array, int * swap, size_t swap_size, size_t nmemb, size_t block, CMPFUNCPTR cmp, void * arg)
{
int * pta, * pte;

pte = array + nmemb;
if(nmemb <= block * 2 && nmemb - block <= swap_size)
{
partial_backward_merge_int32(array, swap, swap_size, nmemb, block, cmp, arg);
return ;
}
while(block < nmemb)
{
for(pta = array; pta + block < pte; pta += block * 2)
{
if(pta + block * 2 < pte)
{
rotate_merge_block_int32(pta, swap, swap_size, block, block, cmp, arg);
continue;
}
rotate_merge_block_int32(pta, swap, swap_size, block, pte - pta - block, cmp, arg);
break;
}
block *= 2;
}
}

void rotate_merge_uint32(unsigned int * array, unsigned int * swap, size_t swap_size, size_t nmemb, size_t block, CMPFUNCPTR cmp, void * arg)
{
unsigned int * pta, * pte;

pte = array + nmemb;
if(nmemb <= block * 2 && nmemb - block <= swap_size)
{
partial_backward_merge_uint32(array, swap, swap_size, nmemb, block, cmp, arg);
return ;
}
while(block < nmemb)
{
for(pta = array; pta + block < pte; pta += block * 2)
{
if(pta + block * 2 < pte)
{
rotate_merge_block_uint32(pta, swap, swap_size, block, block, cmp, arg);
continue;
}
rotate_merge_block_uint32(pta, swap, swap_size, block, pte - pta - block, cmp, arg);
break;
}
block *= 2;
}
}

void rotate_merge64(long long * array, long long * swap, size_t swap_size, size_t nmemb, size_t block, CMPFUNCPTR cmp, void * arg)
{
long long * pta, * pte;

pte = array + nmemb;
if(nmemb <= block * 2 && nmemb - block <= swap_size)
{
partial_backward_merge64(array, swap, swap_size, nmemb, block, cmp, arg);
return ;
}
while(block < nmemb)
{
for(pta = array; pta + block < pte; pta += block * 2)
{
if(pta + block * 2 < pte)
{
rotate_merge_block64(pta, swap, swap_size, block, block, cmp, arg);
continue;
}
rotate_merge_block64(pta, swap, swap_size, block, pte - pta - block, cmp, arg);
break;
}
block *= 2;
}
}

void rotate_merge_int64(long long * array, long long * swap, size_t swap_size, size_t nmemb, size_t block, CMPFUNCPTR cmp, void * arg)
{
long long * pta, * pte;

pte = array + nmemb;
if(nmemb <= block * 2 && nmemb - block <= swap_size)
{
partial_backward_merge_int64(array, swap, swap_size, nmemb, block, cmp, arg);
return ;
}
while(block < nmemb)
{
for(pta = array; pta + block < pte; pta += block * 2)
{
if(pta + block * 2 < pte)
{
rotate_merge_block_int64(pta, swap, swap_size, block, block, cmp, arg);
continue;
}
rotate_merge_block_int64(pta, swap, swap_size, block, pte - pta - block, cmp, arg);
break;
}
block *= 2;
}
}

void rotate_merge_uint64(unsigned long long * array, unsigned long long * swap, size_t swap_size, size_t nmemb, size_t block, CMPFUNCPTR cmp, void * arg)
{
unsigned long long * pta, * pte;

pte = array + nmemb;
if(nmemb <= block * 2 && nmemb - block <= swap_size)
{
partial_backward_merge_uint64(array, swap, swap_size, nmemb, block, cmp, arg);
return ;
}
while(block < nmemb)
{
for(pta = array; pta + block < pte; pta += block * 2)
{
if(pta + block * 2 < pte)
{
rotate_merge_block_uint64(pta, swap, swap_size, block, block, cmp, arg);
continue;
}
rotate_merge_block_uint64(pta, swap, swap_size, block, pte - pta - block, cmp, arg);
break;
}
block *= 2;
}
}

void rotate_merge8(char * array, char * swap, size_t swap_size, size_t nmemb, size_t block, CMPFUNCPTR cmp, void * arg)
{
char * pta, * pte;

pte = array + nmemb;
if(nmemb <= block * 2 && nmemb - block <= swap_size)
{
partial_backward_merge8(array, swap, swap_size, nmemb, block, cmp, arg);
return ;
}
while(block < nmemb)
{
for(pta = array; pta + block < pte; pta += block * 2)
{
if(pta + block * 2 < pte)
{
rotate_merge_block8(pta, swap, swap_size, block, block, cmp, arg);
continue;
}
rotate_merge_block8(pta, swap, swap_size, block, pte - pta - block, cmp, arg);
break;
}
block *= 2;
}
}

void rotate_merge16(short * array, short * swap, size_t swap_size, size_t nmemb, size_t block, CMPFUNCPTR cmp, void * arg)
{
short * pta, * pte;

pte = array + nmemb;
if(nmemb <= block * 2 && nmemb - block <= swap_size)
{
partial_backward_merge16(array, swap, swap_size, nmemb, block, cmp, arg);
return ;
}
while(block < nmemb)
{
for(pta = array; pta + block < pte; pta += block * 2)
{
if(pta + block * 2 < pte)
{
rotate_merge_block16(pta, swap, swap_size, block, block, cmp, arg);
continue;
}
rotate_merge_block16(pta, swap, swap_size, block, pte - pta - block, cmp, arg);
break;
}
block *= 2;
}
}

void rotate_merge128(long double * array, long double * swap, size_t swap_size, size_t nmemb, size_t block, CMPFUNCPTR cmp, void * arg)
{
long double * pta, * pte;

pte = array + nmemb;
if(nmemb <= block * 2 && nmemb - block <= swap_size)
{
partial_backward_merge128(array, swap, swap_size, nmemb, block, cmp, arg);
return ;
}
while(block < nmemb)
{
for(pta = array; pta + block < pte; pta += block * 2)
{
if(pta + block * 2 < pte)
{
rotate_merge_block128(pta, swap, swap_size, block, block, cmp, arg);
continue;
}
rotate_merge_block128(pta, swap, swap_size, block, pte - pta - block, cmp, arg);
break;
}
block *= 2;
}
}

void quadsort32(void * array, size_t nmemb, CMPFUNCPTR cmp, void * arg)
{
int * pta = (int *)array;

if(nmemb < 32)
{
int swap[32];

tail_swap32(pta, swap, nmemb, cmp, arg);
}
else if(quad_swap32(pta, nmemb, cmp, arg) == 0)
{
int * swap = ((void *)0);
size_t block, swap_size = nmemb;

if(nmemb > 4194304)
for(swap_size = 4194304; swap_size * 8 <= nmemb; swap_size *= 4)
{
}
swap = (int *)malloc(swap_size * sizeof(int));
if(swap == ((void *)0))
{
int stack[512];

block = quad_merge32(pta, stack, 512, nmemb, 32, cmp, arg);
rotate_merge32(pta, stack, 512, nmemb, block, cmp, arg);
return ;
}
block = quad_merge32(pta, swap, swap_size, nmemb, 32, cmp, arg);
rotate_merge32(pta, swap, swap_size, nmemb, block, cmp, arg);
free(swap);
}
}

void quadsort_swap32(void * array, void * swap, size_t swap_size, size_t nmemb, CMPFUNCPTR cmp, void * arg)
{
int * pta = (int *)array;
int * pts = (int *)swap;

if(nmemb <= 96)
{
tail_swap32(pta, pts, nmemb, cmp, arg);
}
else if(quad_swap32(pta, nmemb, cmp, arg) == 0)
{
size_t block = quad_merge32(pta, pts, swap_size, nmemb, 32, cmp, arg);

rotate_merge32(pta, pts, swap_size, nmemb, block, cmp, arg);
}
}

void quadsort_int32(void * array, size_t nmemb, CMPFUNCPTR cmp, void * arg)
{
int * pta = (int *)array;

if(nmemb < 32)
{
int swap[32];

tail_swap_int32(pta, swap, nmemb, cmp, arg);
}
else if(quad_swap_int32(pta, nmemb, cmp, arg) == 0)
{
int * swap = ((void *)0);
size_t block, swap_size = nmemb;

if(nmemb > 4194304)
for(swap_size = 4194304; swap_size * 8 <= nmemb; swap_size *= 4)
{
}
swap = (int *)malloc(swap_size * sizeof(int));
if(swap == ((void *)0))
{
int stack[512];

block = quad_merge_int32(pta, stack, 512, nmemb, 32, cmp, arg);
rotate_merge_int32(pta, stack, 512, nmemb, block, cmp, arg);
return ;
}
block = quad_merge_int32(pta, swap, swap_size, nmemb, 32, cmp, arg);
rotate_merge_int32(pta, swap, swap_size, nmemb, block, cmp, arg);
free(swap);
}
}

void quadsort_swap_int32(void * array, void * swap, size_t swap_size, size_t nmemb, CMPFUNCPTR cmp, void * arg)
{
int * pta = (int *)array;
int * pts = (int *)swap;

if(nmemb <= 96)
{
tail_swap_int32(pta, pts, nmemb, cmp, arg);
}
else if(quad_swap_int32(pta, nmemb, cmp, arg) == 0)
{
size_t block = quad_merge_int32(pta, pts, swap_size, nmemb, 32, cmp, arg);

rotate_merge_int32(pta, pts, swap_size, nmemb, block, cmp, arg);
}
}

void quadsort_uint32(void * array, size_t nmemb, CMPFUNCPTR cmp, void * arg)
{
unsigned int * pta = (unsigned int *)array;

if(nmemb < 32)
{
unsigned int swap[32];

tail_swap_uint32(pta, swap, nmemb, cmp, arg);
}
else if(quad_swap_uint32(pta, nmemb, cmp, arg) == 0)
{
unsigned int * swap = ((void *)0);
size_t block, swap_size = nmemb;

if(nmemb > 4194304)
for(swap_size = 4194304; swap_size * 8 <= nmemb; swap_size *= 4)
{
}
swap = (unsigned int *)malloc(swap_size * sizeof(unsigned int));
if(swap == ((void *)0))
{
unsigned int stack[512];

block = quad_merge_uint32(pta, stack, 512, nmemb, 32, cmp, arg);
rotate_merge_uint32(pta, stack, 512, nmemb, block, cmp, arg);
return ;
}
block = quad_merge_uint32(pta, swap, swap_size, nmemb, 32, cmp, arg);
rotate_merge_uint32(pta, swap, swap_size, nmemb, block, cmp, arg);
free(swap);
}
}

void quadsort_swap_uint32(void * array, void * swap, size_t swap_size, size_t nmemb, CMPFUNCPTR cmp, void * arg)
{
unsigned int * pta = (unsigned int *)array;
unsigned int * pts = (unsigned int *)swap;

if(nmemb <= 96)
{
tail_swap_uint32(pta, pts, nmemb, cmp, arg);
}
else if(quad_swap_uint32(pta, nmemb, cmp, arg) == 0)
{
size_t block = quad_merge_uint32(pta, pts, swap_size, nmemb, 32, cmp, arg);

rotate_merge_uint32(pta, pts, swap_size, nmemb, block, cmp, arg);
}
}

void quadsort64(void * array, size_t nmemb, CMPFUNCPTR cmp, void * arg)
{
long long * pta = (long long *)array;

if(nmemb < 32)
{
long long swap[32];

tail_swap64(pta, swap, nmemb, cmp, arg);
}
else if(quad_swap64(pta, nmemb, cmp, arg) == 0)
{
long long * swap = ((void *)0);
size_t block, swap_size = nmemb;

if(nmemb > 4194304)
for(swap_size = 4194304; swap_size * 8 <= nmemb; swap_size *= 4)
{
}
swap = (long long *)malloc(swap_size * sizeof(long long));
if(swap == ((void *)0))
{
long long stack[512];

block = quad_merge64(pta, stack, 512, nmemb, 32, cmp, arg);
rotate_merge64(pta, stack, 512, nmemb, block, cmp, arg);
return ;
}
block = quad_merge64(pta, swap, swap_size, nmemb, 32, cmp, arg);
rotate_merge64(pta, swap, swap_size, nmemb, block, cmp, arg);
free(swap);
}
}

void quadsort_swap64(void * array, void * swap, size_t swap_size, size_t nmemb, CMPFUNCPTR cmp, void * arg)
{
long long * pta = (long long *)array;
long long * pts = (long long *)swap;

if(nmemb <= 96)
{
tail_swap64(pta, pts, nmemb, cmp, arg);
}
else if(quad_swap64(pta, nmemb, cmp, arg) == 0)
{
size_t block = quad_merge64(pta, pts, swap_size, nmemb, 32, cmp, arg);

rotate_merge64(pta, pts, swap_size, nmemb, block, cmp, arg);
}
}

void quadsort_int64(void * array, size_t nmemb, CMPFUNCPTR cmp, void * arg)
{
long long * pta = (long long *)array;

if(nmemb < 32)
{
long long swap[32];

tail_swap_int64(pta, swap, nmemb, cmp, arg);
}
else if(quad_swap_int64(pta, nmemb, cmp, arg) == 0)
{
long long * swap = ((void *)0);
size_t block, swap_size = nmemb;

if(nmemb > 4194304)
for(swap_size = 4194304; swap_size * 8 <= nmemb; swap_size *= 4)
{
}
swap = (long long *)malloc(swap_size * sizeof(long long));
if(swap == ((void *)0))
{
long long stack[512];

block = quad_merge_int64(pta, stack, 512, nmemb, 32, cmp, arg);
rotate_merge_int64(pta, stack, 512, nmemb, block, cmp, arg);
return ;
}
block = quad_merge_int64(pta, swap, swap_size, nmemb, 32, cmp, arg);
rotate_merge_int64(pta, swap, swap_size, nmemb, block, cmp, arg);
free(swap);
}
}

void quadsort_swap_int64(void * array, void * swap, size_t swap_size, size_t nmemb, CMPFUNCPTR cmp, void * arg)
{
long long * pta = (long long *)array;
long long * pts = (long long *)swap;

if(nmemb <= 96)
{
tail_swap_int64(pta, pts, nmemb, cmp, arg);
}
else if(quad_swap_int64(pta, nmemb, cmp, arg) == 0)
{
size_t block = quad_merge_int64(pta, pts, swap_size, nmemb, 32, cmp, arg);

rotate_merge_int64(pta, pts, swap_size, nmemb, block, cmp, arg);
}
}

void quadsort_uint64(void * array, size_t nmemb, CMPFUNCPTR cmp, void * arg)
{
unsigned long long * pta = (unsigned long long *)array;

if(nmemb < 32)
{
unsigned long long swap[32];

tail_swap_uint64(pta, swap, nmemb, cmp, arg);
}
else if(quad_swap_uint64(pta, nmemb, cmp, arg) == 0)
{
unsigned long long * swap = ((void *)0);
size_t block, swap_size = nmemb;

if(nmemb > 4194304)
for(swap_size = 4194304; swap_size * 8 <= nmemb; swap_size *= 4)
{
}
swap = (unsigned long long *)malloc(swap_size * sizeof(unsigned long long));
if(swap == ((void *)0))
{
unsigned long long stack[512];

block = quad_merge_uint64(pta, stack, 512, nmemb, 32, cmp, arg);
rotate_merge_uint64(pta, stack, 512, nmemb, block, cmp, arg);
return ;
}
block = quad_merge_uint64(pta, swap, swap_size, nmemb, 32, cmp, arg);
rotate_merge_uint64(pta, swap, swap_size, nmemb, block, cmp, arg);
free(swap);
}
}

void quadsort_swap_uint64(void * array, void * swap, size_t swap_size, size_t nmemb, CMPFUNCPTR cmp, void * arg)
{
unsigned long long * pta = (unsigned long long *)array;
unsigned long long * pts = (unsigned long long *)swap;

if(nmemb <= 96)
{
tail_swap_uint64(pta, pts, nmemb, cmp, arg);
}
else if(quad_swap_uint64(pta, nmemb, cmp, arg) == 0)
{
size_t block = quad_merge_uint64(pta, pts, swap_size, nmemb, 32, cmp, arg);

rotate_merge_uint64(pta, pts, swap_size, nmemb, block, cmp, arg);
}
}

void quadsort8(void * array, size_t nmemb, CMPFUNCPTR cmp, void * arg)
{
char * pta = (char *)array;

if(nmemb < 32)
{
char swap[32];

tail_swap8(pta, swap, nmemb, cmp, arg);
}
else if(quad_swap8(pta, nmemb, cmp, arg) == 0)
{
char * swap = ((void *)0);
size_t block, swap_size = nmemb;

if(nmemb > 4194304)
for(swap_size = 4194304; swap_size * 8 <= nmemb; swap_size *= 4)
{
}
swap = (char *)malloc(swap_size * sizeof(char));
if(swap == ((void *)0))
{
char stack[512];

block = quad_merge8(pta, stack, 512, nmemb, 32, cmp, arg);
rotate_merge8(pta, stack, 512, nmemb, block, cmp, arg);
return ;
}
block = quad_merge8(pta, swap, swap_size, nmemb, 32, cmp, arg);
rotate_merge8(pta, swap, swap_size, nmemb, block, cmp, arg);
free(swap);
}
}

void quadsort_swap8(void * array, void * swap, size_t swap_size, size_t nmemb, CMPFUNCPTR cmp, void * arg)
{
char * pta = (char *)array;
char * pts = (char *)swap;

if(nmemb <= 96)
{
tail_swap8(pta, pts, nmemb, cmp, arg);
}
else if(quad_swap8(pta, nmemb, cmp, arg) == 0)
{
size_t block = quad_merge8(pta, pts, swap_size, nmemb, 32, cmp, arg);

rotate_merge8(pta, pts, swap_size, nmemb, block, cmp, arg);
}
}

void quadsort16(void * array, size_t nmemb, CMPFUNCPTR cmp, void * arg)
{
short * pta = (short *)array;

if(nmemb < 32)
{
short swap[32];

tail_swap16(pta, swap, nmemb, cmp, arg);
}
else if(quad_swap16(pta, nmemb, cmp, arg) == 0)
{
short * swap = ((void *)0);
size_t block, swap_size = nmemb;

if(nmemb > 4194304)
for(swap_size = 4194304; swap_size * 8 <= nmemb; swap_size *= 4)
{
}
swap = (short *)malloc(swap_size * sizeof(short));
if(swap == ((void *)0))
{
short stack[512];

block = quad_merge16(pta, stack, 512, nmemb, 32, cmp, arg);
rotate_merge16(pta, stack, 512, nmemb, block, cmp, arg);
return ;
}
block = quad_merge16(pta, swap, swap_size, nmemb, 32, cmp, arg);
rotate_merge16(pta, swap, swap_size, nmemb, block, cmp, arg);
free(swap);
}
}

void quadsort_swap16(void * array, void * swap, size_t swap_size, size_t nmemb, CMPFUNCPTR cmp, void * arg)
{
short * pta = (short *)array;
short * pts = (short *)swap;

if(nmemb <= 96)
{
tail_swap16(pta, pts, nmemb, cmp, arg);
}
else if(quad_swap16(pta, nmemb, cmp, arg) == 0)
{
size_t block = quad_merge16(pta, pts, swap_size, nmemb, 32, cmp, arg);

rotate_merge16(pta, pts, swap_size, nmemb, block, cmp, arg);
}
}

void quadsort128(void * array, size_t nmemb, CMPFUNCPTR cmp, void * arg)
{
long double * pta = (long double *)array;

if(nmemb < 32)
{
long double swap[32];

tail_swap128(pta, swap, nmemb, cmp, arg);
}
else if(quad_swap128(pta, nmemb, cmp, arg) == 0)
{
long double * swap = ((void *)0);
size_t block, swap_size = nmemb;

if(nmemb > 4194304)
for(swap_size = 4194304; swap_size * 8 <= nmemb; swap_size *= 4)
{
}
swap = (long double *)malloc(swap_size * sizeof(long double));
if(swap == ((void *)0))
{
long double stack[512];

block = quad_merge128(pta, stack, 512, nmemb, 32, cmp, arg);
rotate_merge128(pta, stack, 512, nmemb, block, cmp, arg);
return ;
}
block = quad_merge128(pta, swap, swap_size, nmemb, 32, cmp, arg);
rotate_merge128(pta, swap, swap_size, nmemb, block, cmp, arg);
free(swap);
}
}

void quadsort_swap128(void * array, void * swap, size_t swap_size, size_t nmemb, CMPFUNCPTR cmp, void * arg)
{
long double * pta = (long double *)array;
long double * pts = (long double *)swap;

if(nmemb <= 96)
{
tail_swap128(pta, pts, nmemb, cmp, arg);
}
else if(quad_swap128(pta, nmemb, cmp, arg) == 0)
{
size_t block = quad_merge128(pta, pts, swap_size, nmemb, 32, cmp, arg);

rotate_merge128(pta, pts, swap_size, nmemb, block, cmp, arg);
}
}

void crum_analyze32(int * array, int * swap, size_t swap_size, size_t nmemb, CMPFUNCPTR cmp, void * arg)
{
size_t half1 = nmemb / 2;
size_t quad1 = half1 / 2;
size_t quad2 = half1 - quad1;
size_t half2 = nmemb - half1;
size_t quad3 = half2 / 2;
size_t quad4 = half2 - quad3;
int * pta = array;
int * ptb = array + quad1;
int * ptc = array + half1;
int * ptd = array + half1 + quad3;
unsigned int astreaks = 0, bstreaks = 0, cstreaks = 0, dstreaks = 0;
unsigned int abalance = 0, bbalance = 0, cbalance = 0, dbalance = 0;
size_t cnt;
unsigned char asum = 0, bsum = 0, csum = 0, dsum = 0;

for(cnt = nmemb; cnt > 132; cnt -= 128)
{
unsigned char loop;

asum = 0, bsum = 0, csum = 0, dsum = 0;
for(loop = 32; loop; loop--)
{
asum += cmp(arg, pta, pta + 1) > 0;
pta++;
bsum += cmp(arg, ptb, ptb + 1) > 0;
ptb++;
csum += cmp(arg, ptc, ptc + 1) > 0;
ptc++;
dsum += cmp(arg, ptd, ptd + 1) > 0;
ptd++;
}
abalance += asum;
astreaks += asum = (asum == 0) | (asum == 32);
bbalance += bsum;
bstreaks += bsum = (bsum == 0) | (bsum == 32);
cbalance += csum;
cstreaks += csum = (csum == 0) | (csum == 32);
dbalance += dsum;
dstreaks += dsum = (dsum == 0) | (dsum == 32);
if(cnt > 516 && asum + bsum + csum + dsum == 0)
{
abalance += 48;
pta += 96;
bbalance += 48;
ptb += 96;
cbalance += 48;
ptc += 96;
dbalance += 48;
ptd += 96;
cnt -= 384;
}
}
for(; cnt > 7; cnt -= 4)
{
abalance += cmp(arg, pta, pta + 1) > 0;
pta++;
bbalance += cmp(arg, ptb, ptb + 1) > 0;
ptb++;
cbalance += cmp(arg, ptc, ptc + 1) > 0;
ptc++;
dbalance += cmp(arg, ptd, ptd + 1) > 0;
ptd++;
}
if(quad1 < quad2)
{
bbalance += cmp(arg, ptb, ptb + 1) > 0;
ptb++;
}
if(quad1 < quad3)
{
cbalance += cmp(arg, ptc, ptc + 1) > 0;
ptc++;
}
if(quad1 < quad4)
{
dbalance += cmp(arg, ptd, ptd + 1) > 0;
ptd++;
}
cnt = abalance + bbalance + cbalance + dbalance;
if(cnt == 0)
{
if(cmp(arg, pta, pta + 1) <= 0 && cmp(arg, ptb, ptb + 1) <= 0 && cmp(arg, ptc, ptc + 1) <= 0)
{
return ;
}
}
asum = quad1 - abalance == 1;
bsum = quad2 - bbalance == 1;
csum = quad3 - cbalance == 1;
dsum = quad4 - dbalance == 1;
if(asum | bsum | csum | dsum)
{
unsigned char span1 = (asum && bsum) * (cmp(arg, pta, pta + 1) > 0);
unsigned char span2 = (bsum && csum) * (cmp(arg, ptb, ptb + 1) > 0);
unsigned char span3 = (csum && dsum) * (cmp(arg, ptc, ptc + 1) > 0);

switch(span1 | span2 * 2 | span3 * 4)
{
case 0:
break;
case 1:
quad_reversal32(array, ptb);
abalance = bbalance = 0;
break;
case 2:
quad_reversal32(pta + 1, ptc);
bbalance = cbalance = 0;
break;
case 3:
quad_reversal32(array, ptc);
abalance = bbalance = cbalance = 0;
break;
case 4:
quad_reversal32(ptb + 1, ptd);
cbalance = dbalance = 0;
break;
case 5:
quad_reversal32(array, ptb);
quad_reversal32(ptb + 1, ptd);
abalance = bbalance = cbalance = dbalance = 0;
break;
case 6:
quad_reversal32(pta + 1, ptd);
bbalance = cbalance = dbalance = 0;
break;
case 7:
quad_reversal32(array, ptd);
return ;
}
if(asum && abalance)
{
quad_reversal32(array, pta);
abalance = 0;
}
if(bsum && bbalance)
{
quad_reversal32(pta + 1, ptb);
bbalance = 0;
}
if(csum && cbalance)
{
quad_reversal32(ptb + 1, ptc);
cbalance = 0;
}
if(dsum && dbalance)
{
quad_reversal32(ptc + 1, ptd);
dbalance = 0;
}
}
cnt = nmemb / 512;
asum = astreaks > cnt;
bsum = bstreaks > cnt;
csum = cstreaks > cnt;
dsum = dstreaks > cnt;
if(quad1 > 262144)
{
goto quad_cache;
}
switch(asum + bsum * 2 + csum * 4 + dsum * 8)
{
case 0:
fulcrum_partition32(array, swap, ((void *)0), swap_size, nmemb, cmp, arg);
return ;
case 1:
if(abalance)
quadsort_swap32(array, swap, swap_size, quad1, cmp, arg);
fulcrum_partition32(pta + 1, swap, ((void *)0), swap_size, quad2 + half2, cmp, arg);
break;
case 2:
fulcrum_partition32(array, swap, ((void *)0), swap_size, quad1, cmp, arg);
if(bbalance)
quadsort_swap32(pta + 1, swap, swap_size, quad2, cmp, arg);
fulcrum_partition32(ptb + 1, swap, ((void *)0), swap_size, half2, cmp, arg);
break;
case 3:
if(abalance)
quadsort_swap32(array, swap, swap_size, quad1, cmp, arg);
if(bbalance)
quadsort_swap32(pta + 1, swap, swap_size, quad2, cmp, arg);
fulcrum_partition32(ptb + 1, swap, ((void *)0), swap_size, half2, cmp, arg);
break;
case 4:
fulcrum_partition32(array, swap, ((void *)0), swap_size, half1, cmp, arg);
if(cbalance)
quadsort_swap32(ptb + 1, swap, swap_size, quad3, cmp, arg);
fulcrum_partition32(ptc + 1, swap, ((void *)0), swap_size, quad4, cmp, arg);
break;
case 8:
fulcrum_partition32(array, swap, ((void *)0), swap_size, half1 + quad3, cmp, arg);
if(dbalance)
quadsort_swap32(ptc + 1, swap, swap_size, quad4, cmp, arg);
break;
case 9:
if(abalance)
quadsort_swap32(array, swap, swap_size, quad1, cmp, arg);
fulcrum_partition32(pta + 1, swap, ((void *)0), swap_size, quad2 + quad3, cmp, arg);
if(dbalance)
quadsort_swap32(ptc + 1, swap, swap_size, quad4, cmp, arg);
break;
case 12:
fulcrum_partition32(array, swap, ((void *)0), swap_size, half1, cmp, arg);
if(cbalance)
quadsort_swap32(ptb + 1, swap, swap_size, quad3, cmp, arg);
if(dbalance)
quadsort_swap32(ptc + 1, swap, swap_size, quad4, cmp, arg);
break;
case 5:
case 6:
case 7:
case 10:
case 11:
case 13:
case 14:
case 15:
quad_cache:
if(asum)
{
if(abalance)
quadsort_swap32(array, swap, swap_size, quad1, cmp, arg);
}
else
fulcrum_partition32(array, swap, ((void *)0), swap_size, quad1, cmp, arg);
if(bsum)
{
if(bbalance)
quadsort_swap32(pta + 1, swap, swap_size, quad2, cmp, arg);
}
else
fulcrum_partition32(pta + 1, swap, ((void *)0), swap_size, quad2, cmp, arg);
if(csum)
{
if(cbalance)
quadsort_swap32(ptb + 1, swap, swap_size, quad3, cmp, arg);
}
else
fulcrum_partition32(ptb + 1, swap, ((void *)0), swap_size, quad3, cmp, arg);
if(dsum)
{
if(dbalance)
quadsort_swap32(ptc + 1, swap, swap_size, quad4, cmp, arg);
}
else
fulcrum_partition32(ptc + 1, swap, ((void *)0), swap_size, quad4, cmp, arg);
break;
}
if(cmp(arg, pta, pta + 1) <= 0)
{
if(cmp(arg, ptc, ptc + 1) <= 0)
{
if(cmp(arg, ptb, ptb + 1) <= 0)
{
return ;
}
}
else
{
rotate_merge_block32(array + half1, swap, swap_size, quad3, quad4, cmp, arg);
}
}
else
{
rotate_merge_block32(array, swap, swap_size, quad1, quad2, cmp, arg);
if(cmp(arg, ptc, ptc + 1) > 0)
{
rotate_merge_block32(array + half1, swap, swap_size, quad3, quad4, cmp, arg);
}
}
rotate_merge_block32(array, swap, swap_size, half1, half2, cmp, arg);
}

int * crum_median_of_cbrt32(int * array, int * swap, size_t swap_size, size_t nmemb, int * generic, CMPFUNCPTR cmp, void * arg)
{
int * pta, * piv;
size_t cnt, cbrt, div;

for(cbrt = 32; nmemb > cbrt * cbrt * cbrt && cbrt < swap_size; cbrt *= 2)
{
}
div = nmemb / cbrt;
pta = array + nmemb - 1 - (size_t)&div / 64 % div;
piv = array + cbrt;
for(cnt = cbrt; cnt; cnt--)
{
swap[0] = *--piv;
*piv = *pta;
*pta = swap[0];
pta -= div;
}
cbrt /= 2;
quadsort_swap32(piv, swap, swap_size, cbrt, cmp, arg);
quadsort_swap32(piv + cbrt, swap, swap_size, cbrt, cmp, arg);
*generic = (cmp(arg, piv + cbrt * 2 - 1, piv) <= 0) & (cmp(arg, piv + cbrt - 1, piv) <= 0);
return crum_binary_median32(piv, piv + cbrt, cbrt, cmp, arg);
}

void crum_analyze_int32(int * array, int * swap, size_t swap_size, size_t nmemb, CMPFUNCPTR cmp, void * arg)
{
size_t half1 = nmemb / 2;
size_t quad1 = half1 / 2;
size_t quad2 = half1 - quad1;
size_t half2 = nmemb - half1;
size_t quad3 = half2 / 2;
size_t quad4 = half2 - quad3;
int * pta = array;
int * ptb = array + quad1;
int * ptc = array + half1;
int * ptd = array + half1 + quad3;
unsigned int astreaks = 0, bstreaks = 0, cstreaks = 0, dstreaks = 0;
unsigned int abalance = 0, bbalance = 0, cbalance = 0, dbalance = 0;
size_t cnt;
unsigned char asum = 0, bsum = 0, csum = 0, dsum = 0;

for(cnt = nmemb; cnt > 132; cnt -= 128)
{
unsigned char loop;

asum = 0, bsum = 0, csum = 0, dsum = 0;
for(loop = 32; loop; loop--)
{
asum += (*(pta) > *(pta + 1)) > 0;
pta++;
bsum += (*(ptb) > *(ptb + 1)) > 0;
ptb++;
csum += (*(ptc) > *(ptc + 1)) > 0;
ptc++;
dsum += (*(ptd) > *(ptd + 1)) > 0;
ptd++;
}
abalance += asum;
astreaks += asum = (asum == 0) | (asum == 32);
bbalance += bsum;
bstreaks += bsum = (bsum == 0) | (bsum == 32);
cbalance += csum;
cstreaks += csum = (csum == 0) | (csum == 32);
dbalance += dsum;
dstreaks += dsum = (dsum == 0) | (dsum == 32);
if(cnt > 516 && asum + bsum + csum + dsum == 0)
{
abalance += 48;
pta += 96;
bbalance += 48;
ptb += 96;
cbalance += 48;
ptc += 96;
dbalance += 48;
ptd += 96;
cnt -= 384;
}
}
for(; cnt > 7; cnt -= 4)
{
abalance += (*(pta) > *(pta + 1)) > 0;
pta++;
bbalance += (*(ptb) > *(ptb + 1)) > 0;
ptb++;
cbalance += (*(ptc) > *(ptc + 1)) > 0;
ptc++;
dbalance += (*(ptd) > *(ptd + 1)) > 0;
ptd++;
}
if(quad1 < quad2)
{
bbalance += (*(ptb) > *(ptb + 1)) > 0;
ptb++;
}
if(quad1 < quad3)
{
cbalance += (*(ptc) > *(ptc + 1)) > 0;
ptc++;
}
if(quad1 < quad4)
{
dbalance += (*(ptd) > *(ptd + 1)) > 0;
ptd++;
}
cnt = abalance + bbalance + cbalance + dbalance;
if(cnt == 0)
{
if((*(pta) > *(pta + 1)) <= 0 && (*(ptb) > *(ptb + 1)) <= 0 && (*(ptc) > *(ptc + 1)) <= 0)
{
return ;
}
}
asum = quad1 - abalance == 1;
bsum = quad2 - bbalance == 1;
csum = quad3 - cbalance == 1;
dsum = quad4 - dbalance == 1;
if(asum | bsum | csum | dsum)
{
unsigned char span1 = (asum && bsum) * ((*(pta) > *(pta + 1)) > 0);
unsigned char span2 = (bsum && csum) * ((*(ptb) > *(ptb + 1)) > 0);
unsigned char span3 = (csum && dsum) * ((*(ptc) > *(ptc + 1)) > 0);

switch(span1 | span2 * 2 | span3 * 4)
{
case 0:
break;
case 1:
quad_reversal_int32(array, ptb);
abalance = bbalance = 0;
break;
case 2:
quad_reversal_int32(pta + 1, ptc);
bbalance = cbalance = 0;
break;
case 3:
quad_reversal_int32(array, ptc);
abalance = bbalance = cbalance = 0;
break;
case 4:
quad_reversal_int32(ptb + 1, ptd);
cbalance = dbalance = 0;
break;
case 5:
quad_reversal_int32(array, ptb);
quad_reversal_int32(ptb + 1, ptd);
abalance = bbalance = cbalance = dbalance = 0;
break;
case 6:
quad_reversal_int32(pta + 1, ptd);
bbalance = cbalance = dbalance = 0;
break;
case 7:
quad_reversal_int32(array, ptd);
return ;
}
if(asum && abalance)
{
quad_reversal_int32(array, pta);
abalance = 0;
}
if(bsum && bbalance)
{
quad_reversal_int32(pta + 1, ptb);
bbalance = 0;
}
if(csum && cbalance)
{
quad_reversal_int32(ptb + 1, ptc);
cbalance = 0;
}
if(dsum && dbalance)
{
quad_reversal_int32(ptc + 1, ptd);
dbalance = 0;
}
}
cnt = nmemb / 256;
asum = astreaks > cnt;
bsum = bstreaks > cnt;
csum = cstreaks > cnt;
dsum = dstreaks > cnt;
switch(asum + bsum * 2 + csum * 4 + dsum * 8)
{
case 0:
fulcrum_partition_int32(array, swap, ((void *)0), swap_size, nmemb, cmp, arg);
return ;
case 1:
if(abalance)
quadsort_swap_int32(array, swap, swap_size, quad1, cmp, arg);
fulcrum_partition_int32(pta + 1, swap, ((void *)0), swap_size, quad2 + half2, cmp, arg);
break;
case 2:
fulcrum_partition_int32(array, swap, ((void *)0), swap_size, quad1, cmp, arg);
if(bbalance)
quadsort_swap_int32(pta + 1, swap, swap_size, quad2, cmp, arg);
fulcrum_partition_int32(ptb + 1, swap, ((void *)0), swap_size, half2, cmp, arg);
break;
case 3:
if(abalance)
quadsort_swap_int32(array, swap, swap_size, quad1, cmp, arg);
if(bbalance)
quadsort_swap_int32(pta + 1, swap, swap_size, quad2, cmp, arg);
fulcrum_partition_int32(ptb + 1, swap, ((void *)0), swap_size, half2, cmp, arg);
break;
case 4:
fulcrum_partition_int32(array, swap, ((void *)0), swap_size, half1, cmp, arg);
if(cbalance)
quadsort_swap_int32(ptb + 1, swap, swap_size, quad3, cmp, arg);
fulcrum_partition_int32(ptc + 1, swap, ((void *)0), swap_size, quad4, cmp, arg);
break;
case 8:
fulcrum_partition_int32(array, swap, ((void *)0), swap_size, half1 + quad3, cmp, arg);
if(dbalance)
quadsort_swap_int32(ptc + 1, swap, swap_size, quad4, cmp, arg);
break;
case 9:
if(abalance)
quadsort_swap_int32(array, swap, swap_size, quad1, cmp, arg);
fulcrum_partition_int32(pta + 1, swap, ((void *)0), swap_size, quad2 + quad3, cmp, arg);
if(dbalance)
quadsort_swap_int32(ptc + 1, swap, swap_size, quad4, cmp, arg);
break;
case 12:
fulcrum_partition_int32(array, swap, ((void *)0), swap_size, half1, cmp, arg);
if(cbalance)
quadsort_swap_int32(ptb + 1, swap, swap_size, quad3, cmp, arg);
if(dbalance)
quadsort_swap_int32(ptc + 1, swap, swap_size, quad4, cmp, arg);
break;
case 5:
case 6:
case 7:
case 10:
case 11:
case 13:
case 14:
case 15:
if(asum)
{
if(abalance)
quadsort_swap_int32(array, swap, swap_size, quad1, cmp, arg);
}
else
fulcrum_partition_int32(array, swap, ((void *)0), swap_size, quad1, cmp, arg);
if(bsum)
{
if(bbalance)
quadsort_swap_int32(pta + 1, swap, swap_size, quad2, cmp, arg);
}
else
fulcrum_partition_int32(pta + 1, swap, ((void *)0), swap_size, quad2, cmp, arg);
if(csum)
{
if(cbalance)
quadsort_swap_int32(ptb + 1, swap, swap_size, quad3, cmp, arg);
}
else
fulcrum_partition_int32(ptb + 1, swap, ((void *)0), swap_size, quad3, cmp, arg);
if(dsum)
{
if(dbalance)
quadsort_swap_int32(ptc + 1, swap, swap_size, quad4, cmp, arg);
}
else
fulcrum_partition_int32(ptc + 1, swap, ((void *)0), swap_size, quad4, cmp, arg);
break;
}
if((*(pta) > *(pta + 1)) <= 0)
{
if((*(ptc) > *(ptc + 1)) <= 0)
{
if((*(ptb) > *(ptb + 1)) <= 0)
{
return ;
}
}
else
{
rotate_merge_block_int32(array + half1, swap, swap_size, quad3, quad4, cmp, arg);
}
}
else
{
rotate_merge_block_int32(array, swap, swap_size, quad1, quad2, cmp, arg);
if((*(ptc) > *(ptc + 1)) > 0)
{
rotate_merge_block_int32(array + half1, swap, swap_size, quad3, quad4, cmp, arg);
}
}
rotate_merge_block_int32(array, swap, swap_size, half1, half2, cmp, arg);
}

int * crum_median_of_cbrt_int32(int * array, int * swap, size_t swap_size, size_t nmemb, int * generic, CMPFUNCPTR cmp, void * arg)
{
int * pta, * piv;
size_t cnt, cbrt, div;

for(cbrt = 32; nmemb > cbrt * cbrt * cbrt && cbrt < swap_size; cbrt *= 2)
{
}
div = nmemb / cbrt;
pta = array + nmemb - 1 - (size_t)&div / 64 % div;
piv = array + cbrt;
for(cnt = cbrt; cnt; cnt--)
{
swap[0] = *--piv;
*piv = *pta;
*pta = swap[0];
pta -= div;
}
cbrt /= 2;
quadsort_swap_int32(piv, swap, swap_size, cbrt, cmp, arg);
quadsort_swap_int32(piv + cbrt, swap, swap_size, cbrt, cmp, arg);
*generic = ((*(piv + cbrt * 2 - 1) > *(piv)) <= 0) & ((*(piv + cbrt - 1) > *(piv)) <= 0);
return crum_binary_median_int32(piv, piv + cbrt, cbrt, cmp, arg);
}

void crum_analyze_uint32(unsigned int * array, unsigned int * swap, size_t swap_size, size_t nmemb, CMPFUNCPTR cmp, void * arg)
{
size_t half1 = nmemb / 2;
size_t quad1 = half1 / 2;
size_t quad2 = half1 - quad1;
size_t half2 = nmemb - half1;
size_t quad3 = half2 / 2;
size_t quad4 = half2 - quad3;
unsigned int * pta = array;
unsigned int * ptb = array + quad1;
unsigned int * ptc = array + half1;
unsigned int * ptd = array + half1 + quad3;
unsigned int astreaks = 0, bstreaks = 0, cstreaks = 0, dstreaks = 0;
unsigned int abalance = 0, bbalance = 0, cbalance = 0, dbalance = 0;
size_t cnt;
unsigned char asum = 0, bsum = 0, csum = 0, dsum = 0;

for(cnt = nmemb; cnt > 132; cnt -= 128)
{
unsigned char loop;

asum = 0, bsum = 0, csum = 0, dsum = 0;
for(loop = 32; loop; loop--)
{
asum += (*(pta) > *(pta + 1)) > 0;
pta++;
bsum += (*(ptb) > *(ptb + 1)) > 0;
ptb++;
csum += (*(ptc) > *(ptc + 1)) > 0;
ptc++;
dsum += (*(ptd) > *(ptd + 1)) > 0;
ptd++;
}
abalance += asum;
astreaks += asum = (asum == 0) | (asum == 32);
bbalance += bsum;
bstreaks += bsum = (bsum == 0) | (bsum == 32);
cbalance += csum;
cstreaks += csum = (csum == 0) | (csum == 32);
dbalance += dsum;
dstreaks += dsum = (dsum == 0) | (dsum == 32);
if(cnt > 516 && asum + bsum + csum + dsum == 0)
{
abalance += 48;
pta += 96;
bbalance += 48;
ptb += 96;
cbalance += 48;
ptc += 96;
dbalance += 48;
ptd += 96;
cnt -= 384;
}
}
for(; cnt > 7; cnt -= 4)
{
abalance += (*(pta) > *(pta + 1)) > 0;
pta++;
bbalance += (*(ptb) > *(ptb + 1)) > 0;
ptb++;
cbalance += (*(ptc) > *(ptc + 1)) > 0;
ptc++;
dbalance += (*(ptd) > *(ptd + 1)) > 0;
ptd++;
}
if(quad1 < quad2)
{
bbalance += (*(ptb) > *(ptb + 1)) > 0;
ptb++;
}
if(quad1 < quad3)
{
cbalance += (*(ptc) > *(ptc + 1)) > 0;
ptc++;
}
if(quad1 < quad4)
{
dbalance += (*(ptd) > *(ptd + 1)) > 0;
ptd++;
}
cnt = abalance + bbalance + cbalance + dbalance;
if(cnt == 0)
{
if((*(pta) > *(pta + 1)) <= 0 && (*(ptb) > *(ptb + 1)) <= 0 && (*(ptc) > *(ptc + 1)) <= 0)
{
return ;
}
}
asum = quad1 - abalance == 1;
bsum = quad2 - bbalance == 1;
csum = quad3 - cbalance == 1;
dsum = quad4 - dbalance == 1;
if(asum | bsum | csum | dsum)
{
unsigned char span1 = (asum && bsum) * ((*(pta) > *(pta + 1)) > 0);
unsigned char span2 = (bsum && csum) * ((*(ptb) > *(ptb + 1)) > 0);
unsigned char span3 = (csum && dsum) * ((*(ptc) > *(ptc + 1)) > 0);

switch(span1 | span2 * 2 | span3 * 4)
{
case 0:
break;
case 1:
quad_reversal_uint32(array, ptb);
abalance = bbalance = 0;
break;
case 2:
quad_reversal_uint32(pta + 1, ptc);
bbalance = cbalance = 0;
break;
case 3:
quad_reversal_uint32(array, ptc);
abalance = bbalance = cbalance = 0;
break;
case 4:
quad_reversal_uint32(ptb + 1, ptd);
cbalance = dbalance = 0;
break;
case 5:
quad_reversal_uint32(array, ptb);
quad_reversal_uint32(ptb + 1, ptd);
abalance = bbalance = cbalance = dbalance = 0;
break;
case 6:
quad_reversal_uint32(pta + 1, ptd);
bbalance = cbalance = dbalance = 0;
break;
case 7:
quad_reversal_uint32(array, ptd);
return ;
}
if(asum && abalance)
{
quad_reversal_uint32(array, pta);
abalance = 0;
}
if(bsum && bbalance)
{
quad_reversal_uint32(pta + 1, ptb);
bbalance = 0;
}
if(csum && cbalance)
{
quad_reversal_uint32(ptb + 1, ptc);
cbalance = 0;
}
if(dsum && dbalance)
{
quad_reversal_uint32(ptc + 1, ptd);
dbalance = 0;
}
}
cnt = nmemb / 256;
asum = astreaks > cnt;
bsum = bstreaks > cnt;
csum = cstreaks > cnt;
dsum = dstreaks > cnt;
switch(asum + bsum * 2 + csum * 4 + dsum * 8)
{
case 0:
fulcrum_partition_uint32(array, swap, ((void *)0), swap_size, nmemb, cmp, arg);
return ;
case 1:
if(abalance)
quadsort_swap_uint32(array, swap, swap_size, quad1, cmp, arg);
fulcrum_partition_uint32(pta + 1, swap, ((void *)0), swap_size, quad2 + half2, cmp, arg);
break;
case 2:
fulcrum_partition_uint32(array, swap, ((void *)0), swap_size, quad1, cmp, arg);
if(bbalance)
quadsort_swap_uint32(pta + 1, swap, swap_size, quad2, cmp, arg);
fulcrum_partition_uint32(ptb + 1, swap, ((void *)0), swap_size, half2, cmp, arg);
break;
case 3:
if(abalance)
quadsort_swap_uint32(array, swap, swap_size, quad1, cmp, arg);
if(bbalance)
quadsort_swap_uint32(pta + 1, swap, swap_size, quad2, cmp, arg);
fulcrum_partition_uint32(ptb + 1, swap, ((void *)0), swap_size, half2, cmp, arg);
break;
case 4:
fulcrum_partition_uint32(array, swap, ((void *)0), swap_size, half1, cmp, arg);
if(cbalance)
quadsort_swap_uint32(ptb + 1, swap, swap_size, quad3, cmp, arg);
fulcrum_partition_uint32(ptc + 1, swap, ((void *)0), swap_size, quad4, cmp, arg);
break;
case 8:
fulcrum_partition_uint32(array, swap, ((void *)0), swap_size, half1 + quad3, cmp, arg);
if(dbalance)
quadsort_swap_uint32(ptc + 1, swap, swap_size, quad4, cmp, arg);
break;
case 9:
if(abalance)
quadsort_swap_uint32(array, swap, swap_size, quad1, cmp, arg);
fulcrum_partition_uint32(pta + 1, swap, ((void *)0), swap_size, quad2 + quad3, cmp, arg);
if(dbalance)
quadsort_swap_uint32(ptc + 1, swap, swap_size, quad4, cmp, arg);
break;
case 12:
fulcrum_partition_uint32(array, swap, ((void *)0), swap_size, half1, cmp, arg);
if(cbalance)
quadsort_swap_uint32(ptb + 1, swap, swap_size, quad3, cmp, arg);
if(dbalance)
quadsort_swap_uint32(ptc + 1, swap, swap_size, quad4, cmp, arg);
break;
case 5:
case 6:
case 7:
case 10:
case 11:
case 13:
case 14:
case 15:
if(asum)
{
if(abalance)
quadsort_swap_uint32(array, swap, swap_size, quad1, cmp, arg);
}
else
fulcrum_partition_uint32(array, swap, ((void *)0), swap_size, quad1, cmp, arg);
if(bsum)
{
if(bbalance)
quadsort_swap_uint32(pta + 1, swap, swap_size, quad2, cmp, arg);
}
else
fulcrum_partition_uint32(pta + 1, swap, ((void *)0), swap_size, quad2, cmp, arg);
if(csum)
{
if(cbalance)
quadsort_swap_uint32(ptb + 1, swap, swap_size, quad3, cmp, arg);
}
else
fulcrum_partition_uint32(ptb + 1, swap, ((void *)0), swap_size, quad3, cmp, arg);
if(dsum)
{
if(dbalance)
quadsort_swap_uint32(ptc + 1, swap, swap_size, quad4, cmp, arg);
}
else
fulcrum_partition_uint32(ptc + 1, swap, ((void *)0), swap_size, quad4, cmp, arg);
break;
}
if((*(pta) > *(pta + 1)) <= 0)
{
if((*(ptc) > *(ptc + 1)) <= 0)
{
if((*(ptb) > *(ptb + 1)) <= 0)
{
return ;
}
}
else
{
rotate_merge_block_uint32(array + half1, swap, swap_size, quad3, quad4, cmp, arg);
}
}
else
{
rotate_merge_block_uint32(array, swap, swap_size, quad1, quad2, cmp, arg);
if((*(ptc) > *(ptc + 1)) > 0)
{
rotate_merge_block_uint32(array + half1, swap, swap_size, quad3, quad4, cmp, arg);
}
}
rotate_merge_block_uint32(array, swap, swap_size, half1, half2, cmp, arg);
}

unsigned int * crum_median_of_cbrt_uint32(unsigned int * array, unsigned int * swap, size_t swap_size, size_t nmemb, int * generic, CMPFUNCPTR cmp, void * arg)
{
unsigned int * pta, * piv;
size_t cnt, cbrt, div;

for(cbrt = 32; nmemb > cbrt * cbrt * cbrt && cbrt < swap_size; cbrt *= 2)
{
}
div = nmemb / cbrt;
pta = array + nmemb - 1 - (size_t)&div / 64 % div;
piv = array + cbrt;
for(cnt = cbrt; cnt; cnt--)
{
swap[0] = *--piv;
*piv = *pta;
*pta = swap[0];
pta -= div;
}
cbrt /= 2;
quadsort_swap_uint32(piv, swap, swap_size, cbrt, cmp, arg);
quadsort_swap_uint32(piv + cbrt, swap, swap_size, cbrt, cmp, arg);
*generic = ((*(piv + cbrt * 2 - 1) > *(piv)) <= 0) & ((*(piv + cbrt - 1) > *(piv)) <= 0);
return crum_binary_median_uint32(piv, piv + cbrt, cbrt, cmp, arg);
}

void quadsort_size(void * array, size_t nmemb, size_t size, CMPFUNCPTR cmp, void * arg)
{
char ** pti, * pta, * pts;
size_t index, offset;

if(nmemb < 2)
{
return ;
}
pta = (char *)array;
pti = (char **)malloc(nmemb * sizeof(char *));
for(index = offset = 0; index < nmemb; index++)
{
pti[index] = pta + offset;
offset += size;
}
switch(sizeof(size_t))
{
case 4:
quadsort32(pti, nmemb, cmp, arg);
break;
case 8:
quadsort64(pti, nmemb, cmp, arg);
break;
}
pts = (char *)malloc(nmemb * size);
for(index = 0; index < nmemb; index++)
{
memcpy(pts, pti[index], size);
pts += size;
}
pts -= nmemb * size;
memcpy(array, pts, nmemb * size);
free(pti);
free(pts);
}

void crum_analyze64(long long * array, long long * swap, size_t swap_size, size_t nmemb, CMPFUNCPTR cmp, void * arg)
{
size_t half1 = nmemb / 2;
size_t quad1 = half1 / 2;
size_t quad2 = half1 - quad1;
size_t half2 = nmemb - half1;
size_t quad3 = half2 / 2;
size_t quad4 = half2 - quad3;
long long * pta = array;
long long * ptb = array + quad1;
long long * ptc = array + half1;
long long * ptd = array + half1 + quad3;
unsigned int astreaks = 0, bstreaks = 0, cstreaks = 0, dstreaks = 0;
unsigned int abalance = 0, bbalance = 0, cbalance = 0, dbalance = 0;
size_t cnt;
unsigned char asum = 0, bsum = 0, csum = 0, dsum = 0;

for(cnt = nmemb; cnt > 132; cnt -= 128)
{
unsigned char loop;

asum = 0, bsum = 0, csum = 0, dsum = 0;
for(loop = 32; loop; loop--)
{
asum += cmp(arg, pta, pta + 1) > 0;
pta++;
bsum += cmp(arg, ptb, ptb + 1) > 0;
ptb++;
csum += cmp(arg, ptc, ptc + 1) > 0;
ptc++;
dsum += cmp(arg, ptd, ptd + 1) > 0;
ptd++;
}
abalance += asum;
astreaks += asum = (asum == 0) | (asum == 32);
bbalance += bsum;
bstreaks += bsum = (bsum == 0) | (bsum == 32);
cbalance += csum;
cstreaks += csum = (csum == 0) | (csum == 32);
dbalance += dsum;
dstreaks += dsum = (dsum == 0) | (dsum == 32);
if(cnt > 516 && asum + bsum + csum + dsum == 0)
{
abalance += 48;
pta += 96;
bbalance += 48;
ptb += 96;
cbalance += 48;
ptc += 96;
dbalance += 48;
ptd += 96;
cnt -= 384;
}
}
for(; cnt > 7; cnt -= 4)
{
abalance += cmp(arg, pta, pta + 1) > 0;
pta++;
bbalance += cmp(arg, ptb, ptb + 1) > 0;
ptb++;
cbalance += cmp(arg, ptc, ptc + 1) > 0;
ptc++;
dbalance += cmp(arg, ptd, ptd + 1) > 0;
ptd++;
}
if(quad1 < quad2)
{
bbalance += cmp(arg, ptb, ptb + 1) > 0;
ptb++;
}
if(quad1 < quad3)
{
cbalance += cmp(arg, ptc, ptc + 1) > 0;
ptc++;
}
if(quad1 < quad4)
{
dbalance += cmp(arg, ptd, ptd + 1) > 0;
ptd++;
}
cnt = abalance + bbalance + cbalance + dbalance;
if(cnt == 0)
{
if(cmp(arg, pta, pta + 1) <= 0 && cmp(arg, ptb, ptb + 1) <= 0 && cmp(arg, ptc, ptc + 1) <= 0)
{
return ;
}
}
asum = quad1 - abalance == 1;
bsum = quad2 - bbalance == 1;
csum = quad3 - cbalance == 1;
dsum = quad4 - dbalance == 1;
if(asum | bsum | csum | dsum)
{
unsigned char span1 = (asum && bsum) * (cmp(arg, pta, pta + 1) > 0);
unsigned char span2 = (bsum && csum) * (cmp(arg, ptb, ptb + 1) > 0);
unsigned char span3 = (csum && dsum) * (cmp(arg, ptc, ptc + 1) > 0);

switch(span1 | span2 * 2 | span3 * 4)
{
case 0:
break;
case 1:
quad_reversal64(array, ptb);
abalance = bbalance = 0;
break;
case 2:
quad_reversal64(pta + 1, ptc);
bbalance = cbalance = 0;
break;
case 3:
quad_reversal64(array, ptc);
abalance = bbalance = cbalance = 0;
break;
case 4:
quad_reversal64(ptb + 1, ptd);
cbalance = dbalance = 0;
break;
case 5:
quad_reversal64(array, ptb);
quad_reversal64(ptb + 1, ptd);
abalance = bbalance = cbalance = dbalance = 0;
break;
case 6:
quad_reversal64(pta + 1, ptd);
bbalance = cbalance = dbalance = 0;
break;
case 7:
quad_reversal64(array, ptd);
return ;
}
if(asum && abalance)
{
quad_reversal64(array, pta);
abalance = 0;
}
if(bsum && bbalance)
{
quad_reversal64(pta + 1, ptb);
bbalance = 0;
}
if(csum && cbalance)
{
quad_reversal64(ptb + 1, ptc);
cbalance = 0;
}
if(dsum && dbalance)
{
quad_reversal64(ptc + 1, ptd);
dbalance = 0;
}
}
cnt = nmemb / 512;
asum = astreaks > cnt;
bsum = bstreaks > cnt;
csum = cstreaks > cnt;
dsum = dstreaks > cnt;
if(quad1 > 262144)
{
goto quad_cache;
}
switch(asum + bsum * 2 + csum * 4 + dsum * 8)
{
case 0:
fulcrum_partition64(array, swap, ((void *)0), swap_size, nmemb, cmp, arg);
return ;
case 1:
if(abalance)
quadsort_swap64(array, swap, swap_size, quad1, cmp, arg);
fulcrum_partition64(pta + 1, swap, ((void *)0), swap_size, quad2 + half2, cmp, arg);
break;
case 2:
fulcrum_partition64(array, swap, ((void *)0), swap_size, quad1, cmp, arg);
if(bbalance)
quadsort_swap64(pta + 1, swap, swap_size, quad2, cmp, arg);
fulcrum_partition64(ptb + 1, swap, ((void *)0), swap_size, half2, cmp, arg);
break;
case 3:
if(abalance)
quadsort_swap64(array, swap, swap_size, quad1, cmp, arg);
if(bbalance)
quadsort_swap64(pta + 1, swap, swap_size, quad2, cmp, arg);
fulcrum_partition64(ptb + 1, swap, ((void *)0), swap_size, half2, cmp, arg);
break;
case 4:
fulcrum_partition64(array, swap, ((void *)0), swap_size, half1, cmp, arg);
if(cbalance)
quadsort_swap64(ptb + 1, swap, swap_size, quad3, cmp, arg);
fulcrum_partition64(ptc + 1, swap, ((void *)0), swap_size, quad4, cmp, arg);
break;
case 8:
fulcrum_partition64(array, swap, ((void *)0), swap_size, half1 + quad3, cmp, arg);
if(dbalance)
quadsort_swap64(ptc + 1, swap, swap_size, quad4, cmp, arg);
break;
case 9:
if(abalance)
quadsort_swap64(array, swap, swap_size, quad1, cmp, arg);
fulcrum_partition64(pta + 1, swap, ((void *)0), swap_size, quad2 + quad3, cmp, arg);
if(dbalance)
quadsort_swap64(ptc + 1, swap, swap_size, quad4, cmp, arg);
break;
case 12:
fulcrum_partition64(array, swap, ((void *)0), swap_size, half1, cmp, arg);
if(cbalance)
quadsort_swap64(ptb + 1, swap, swap_size, quad3, cmp, arg);
if(dbalance)
quadsort_swap64(ptc + 1, swap, swap_size, quad4, cmp, arg);
break;
case 5:
case 6:
case 7:
case 10:
case 11:
case 13:
case 14:
case 15:
quad_cache:
if(asum)
{
if(abalance)
quadsort_swap64(array, swap, swap_size, quad1, cmp, arg);
}
else
fulcrum_partition64(array, swap, ((void *)0), swap_size, quad1, cmp, arg);
if(bsum)
{
if(bbalance)
quadsort_swap64(pta + 1, swap, swap_size, quad2, cmp, arg);
}
else
fulcrum_partition64(pta + 1, swap, ((void *)0), swap_size, quad2, cmp, arg);
if(csum)
{
if(cbalance)
quadsort_swap64(ptb + 1, swap, swap_size, quad3, cmp, arg);
}
else
fulcrum_partition64(ptb + 1, swap, ((void *)0), swap_size, quad3, cmp, arg);
if(dsum)
{
if(dbalance)
quadsort_swap64(ptc + 1, swap, swap_size, quad4, cmp, arg);
}
else
fulcrum_partition64(ptc + 1, swap, ((void *)0), swap_size, quad4, cmp, arg);
break;
}
if(cmp(arg, pta, pta + 1) <= 0)
{
if(cmp(arg, ptc, ptc + 1) <= 0)
{
if(cmp(arg, ptb, ptb + 1) <= 0)
{
return ;
}
}
else
{
rotate_merge_block64(array + half1, swap, swap_size, quad3, quad4, cmp, arg);
}
}
else
{
rotate_merge_block64(array, swap, swap_size, quad1, quad2, cmp, arg);
if(cmp(arg, ptc, ptc + 1) > 0)
{
rotate_merge_block64(array + half1, swap, swap_size, quad3, quad4, cmp, arg);
}
}
rotate_merge_block64(array, swap, swap_size, half1, half2, cmp, arg);
}

long long * crum_median_of_cbrt64(long long * array, long long * swap, size_t swap_size, size_t nmemb, int * generic, CMPFUNCPTR cmp, void * arg)
{
long long * pta, * piv;
size_t cnt, cbrt, div;

for(cbrt = 32; nmemb > cbrt * cbrt * cbrt && cbrt < swap_size; cbrt *= 2)
{
}
div = nmemb / cbrt;
pta = array + nmemb - 1 - (size_t)&div / 64 % div;
piv = array + cbrt;
for(cnt = cbrt; cnt; cnt--)
{
swap[0] = *--piv;
*piv = *pta;
*pta = swap[0];
pta -= div;
}
cbrt /= 2;
quadsort_swap64(piv, swap, swap_size, cbrt, cmp, arg);
quadsort_swap64(piv + cbrt, swap, swap_size, cbrt, cmp, arg);
*generic = (cmp(arg, piv + cbrt * 2 - 1, piv) <= 0) & (cmp(arg, piv + cbrt - 1, piv) <= 0);
return crum_binary_median64(piv, piv + cbrt, cbrt, cmp, arg);
}

void crum_analyze_int64(long long * array, long long * swap, size_t swap_size, size_t nmemb, CMPFUNCPTR cmp, void * arg)
{
size_t half1 = nmemb / 2;
size_t quad1 = half1 / 2;
size_t quad2 = half1 - quad1;
size_t half2 = nmemb - half1;
size_t quad3 = half2 / 2;
size_t quad4 = half2 - quad3;
long long * pta = array;
long long * ptb = array + quad1;
long long * ptc = array + half1;
long long * ptd = array + half1 + quad3;
unsigned int astreaks = 0, bstreaks = 0, cstreaks = 0, dstreaks = 0;
unsigned int abalance = 0, bbalance = 0, cbalance = 0, dbalance = 0;
size_t cnt;
unsigned char asum = 0, bsum = 0, csum = 0, dsum = 0;

for(cnt = nmemb; cnt > 132; cnt -= 128)
{
unsigned char loop;

asum = 0, bsum = 0, csum = 0, dsum = 0;
for(loop = 32; loop; loop--)
{
asum += (*(pta) > *(pta + 1)) > 0;
pta++;
bsum += (*(ptb) > *(ptb + 1)) > 0;
ptb++;
csum += (*(ptc) > *(ptc + 1)) > 0;
ptc++;
dsum += (*(ptd) > *(ptd + 1)) > 0;
ptd++;
}
abalance += asum;
astreaks += asum = (asum == 0) | (asum == 32);
bbalance += bsum;
bstreaks += bsum = (bsum == 0) | (bsum == 32);
cbalance += csum;
cstreaks += csum = (csum == 0) | (csum == 32);
dbalance += dsum;
dstreaks += dsum = (dsum == 0) | (dsum == 32);
if(cnt > 516 && asum + bsum + csum + dsum == 0)
{
abalance += 48;
pta += 96;
bbalance += 48;
ptb += 96;
cbalance += 48;
ptc += 96;
dbalance += 48;
ptd += 96;
cnt -= 384;
}
}
for(; cnt > 7; cnt -= 4)
{
abalance += (*(pta) > *(pta + 1)) > 0;
pta++;
bbalance += (*(ptb) > *(ptb + 1)) > 0;
ptb++;
cbalance += (*(ptc) > *(ptc + 1)) > 0;
ptc++;
dbalance += (*(ptd) > *(ptd + 1)) > 0;
ptd++;
}
if(quad1 < quad2)
{
bbalance += (*(ptb) > *(ptb + 1)) > 0;
ptb++;
}
if(quad1 < quad3)
{
cbalance += (*(ptc) > *(ptc + 1)) > 0;
ptc++;
}
if(quad1 < quad4)
{
dbalance += (*(ptd) > *(ptd + 1)) > 0;
ptd++;
}
cnt = abalance + bbalance + cbalance + dbalance;
if(cnt == 0)
{
if((*(pta) > *(pta + 1)) <= 0 && (*(ptb) > *(ptb + 1)) <= 0 && (*(ptc) > *(ptc + 1)) <= 0)
{
return ;
}
}
asum = quad1 - abalance == 1;
bsum = quad2 - bbalance == 1;
csum = quad3 - cbalance == 1;
dsum = quad4 - dbalance == 1;
if(asum | bsum | csum | dsum)
{
unsigned char span1 = (asum && bsum) * ((*(pta) > *(pta + 1)) > 0);
unsigned char span2 = (bsum && csum) * ((*(ptb) > *(ptb + 1)) > 0);
unsigned char span3 = (csum && dsum) * ((*(ptc) > *(ptc + 1)) > 0);

switch(span1 | span2 * 2 | span3 * 4)
{
case 0:
break;
case 1:
quad_reversal_int64(array, ptb);
abalance = bbalance = 0;
break;
case 2:
quad_reversal_int64(pta + 1, ptc);
bbalance = cbalance = 0;
break;
case 3:
quad_reversal_int64(array, ptc);
abalance = bbalance = cbalance = 0;
break;
case 4:
quad_reversal_int64(ptb + 1, ptd);
cbalance = dbalance = 0;
break;
case 5:
quad_reversal_int64(array, ptb);
quad_reversal_int64(ptb + 1, ptd);
abalance = bbalance = cbalance = dbalance = 0;
break;
case 6:
quad_reversal_int64(pta + 1, ptd);
bbalance = cbalance = dbalance = 0;
break;
case 7:
quad_reversal_int64(array, ptd);
return ;
}
if(asum && abalance)
{
quad_reversal_int64(array, pta);
abalance = 0;
}
if(bsum && bbalance)
{
quad_reversal_int64(pta + 1, ptb);
bbalance = 0;
}
if(csum && cbalance)
{
quad_reversal_int64(ptb + 1, ptc);
cbalance = 0;
}
if(dsum && dbalance)
{
quad_reversal_int64(ptc + 1, ptd);
dbalance = 0;
}
}
cnt = nmemb / 256;
asum = astreaks > cnt;
bsum = bstreaks > cnt;
csum = cstreaks > cnt;
dsum = dstreaks > cnt;
switch(asum + bsum * 2 + csum * 4 + dsum * 8)
{
case 0:
fulcrum_partition_int64(array, swap, ((void *)0), swap_size, nmemb, cmp, arg);
return ;
case 1:
if(abalance)
quadsort_swap_int64(array, swap, swap_size, quad1, cmp, arg);
fulcrum_partition_int64(pta + 1, swap, ((void *)0), swap_size, quad2 + half2, cmp, arg);
break;
case 2:
fulcrum_partition_int64(array, swap, ((void *)0), swap_size, quad1, cmp, arg);
if(bbalance)
quadsort_swap_int64(pta + 1, swap, swap_size, quad2, cmp, arg);
fulcrum_partition_int64(ptb + 1, swap, ((void *)0), swap_size, half2, cmp, arg);
break;
case 3:
if(abalance)
quadsort_swap_int64(array, swap, swap_size, quad1, cmp, arg);
if(bbalance)
quadsort_swap_int64(pta + 1, swap, swap_size, quad2, cmp, arg);
fulcrum_partition_int64(ptb + 1, swap, ((void *)0), swap_size, half2, cmp, arg);
break;
case 4:
fulcrum_partition_int64(array, swap, ((void *)0), swap_size, half1, cmp, arg);
if(cbalance)
quadsort_swap_int64(ptb + 1, swap, swap_size, quad3, cmp, arg);
fulcrum_partition_int64(ptc + 1, swap, ((void *)0), swap_size, quad4, cmp, arg);
break;
case 8:
fulcrum_partition_int64(array, swap, ((void *)0), swap_size, half1 + quad3, cmp, arg);
if(dbalance)
quadsort_swap_int64(ptc + 1, swap, swap_size, quad4, cmp, arg);
break;
case 9:
if(abalance)
quadsort_swap_int64(array, swap, swap_size, quad1, cmp, arg);
fulcrum_partition_int64(pta + 1, swap, ((void *)0), swap_size, quad2 + quad3, cmp, arg);
if(dbalance)
quadsort_swap_int64(ptc + 1, swap, swap_size, quad4, cmp, arg);
break;
case 12:
fulcrum_partition_int64(array, swap, ((void *)0), swap_size, half1, cmp, arg);
if(cbalance)
quadsort_swap_int64(ptb + 1, swap, swap_size, quad3, cmp, arg);
if(dbalance)
quadsort_swap_int64(ptc + 1, swap, swap_size, quad4, cmp, arg);
break;
case 5:
case 6:
case 7:
case 10:
case 11:
case 13:
case 14:
case 15:
if(asum)
{
if(abalance)
quadsort_swap_int64(array, swap, swap_size, quad1, cmp, arg);
}
else
fulcrum_partition_int64(array, swap, ((void *)0), swap_size, quad1, cmp, arg);
if(bsum)
{
if(bbalance)
quadsort_swap_int64(pta + 1, swap, swap_size, quad2, cmp, arg);
}
else
fulcrum_partition_int64(pta + 1, swap, ((void *)0), swap_size, quad2, cmp, arg);
if(csum)
{
if(cbalance)
quadsort_swap_int64(ptb + 1, swap, swap_size, quad3, cmp, arg);
}
else
fulcrum_partition_int64(ptb + 1, swap, ((void *)0), swap_size, quad3, cmp, arg);
if(dsum)
{
if(dbalance)
quadsort_swap_int64(ptc + 1, swap, swap_size, quad4, cmp, arg);
}
else
fulcrum_partition_int64(ptc + 1, swap, ((void *)0), swap_size, quad4, cmp, arg);
break;
}
if((*(pta) > *(pta + 1)) <= 0)
{
if((*(ptc) > *(ptc + 1)) <= 0)
{
if((*(ptb) > *(ptb + 1)) <= 0)
{
return ;
}
}
else
{
rotate_merge_block_int64(array + half1, swap, swap_size, quad3, quad4, cmp, arg);
}
}
else
{
rotate_merge_block_int64(array, swap, swap_size, quad1, quad2, cmp, arg);
if((*(ptc) > *(ptc + 1)) > 0)
{
rotate_merge_block_int64(array + half1, swap, swap_size, quad3, quad4, cmp, arg);
}
}
rotate_merge_block_int64(array, swap, swap_size, half1, half2, cmp, arg);
}

long long * crum_median_of_cbrt_int64(long long * array, long long * swap, size_t swap_size, size_t nmemb, int * generic, CMPFUNCPTR cmp, void * arg)
{
long long * pta, * piv;
size_t cnt, cbrt, div;

for(cbrt = 32; nmemb > cbrt * cbrt * cbrt && cbrt < swap_size; cbrt *= 2)
{
}
div = nmemb / cbrt;
pta = array + nmemb - 1 - (size_t)&div / 64 % div;
piv = array + cbrt;
for(cnt = cbrt; cnt; cnt--)
{
swap[0] = *--piv;
*piv = *pta;
*pta = swap[0];
pta -= div;
}
cbrt /= 2;
quadsort_swap_int64(piv, swap, swap_size, cbrt, cmp, arg);
quadsort_swap_int64(piv + cbrt, swap, swap_size, cbrt, cmp, arg);
*generic = ((*(piv + cbrt * 2 - 1) > *(piv)) <= 0) & ((*(piv + cbrt - 1) > *(piv)) <= 0);
return crum_binary_median_int64(piv, piv + cbrt, cbrt, cmp, arg);
}

void quadsort_prim(void * array, size_t nmemb, size_t size)
{
if(nmemb < 2)
{
return ;
}
switch(size)
{
case 4:
quadsort_int32(array, nmemb, ((void *)0), ((void *)0));
return ;
case 5:
quadsort_uint32(array, nmemb, ((void *)0), ((void *)0));
return ;
case 8:
quadsort_int64(array, nmemb, ((void *)0), ((void *)0));
return ;
case 9:
quadsort_uint64(array, nmemb, ((void *)0), ((void *)0));
return ;
}
}

void crum_analyze_uint64(unsigned long long * array, unsigned long long * swap, size_t swap_size, size_t nmemb, CMPFUNCPTR cmp, void * arg)
{
size_t half1 = nmemb / 2;
size_t quad1 = half1 / 2;
size_t quad2 = half1 - quad1;
size_t half2 = nmemb - half1;
size_t quad3 = half2 / 2;
size_t quad4 = half2 - quad3;
unsigned long long * pta = array;
unsigned long long * ptb = array + quad1;
unsigned long long * ptc = array + half1;
unsigned long long * ptd = array + half1 + quad3;
unsigned int astreaks = 0, bstreaks = 0, cstreaks = 0, dstreaks = 0;
unsigned int abalance = 0, bbalance = 0, cbalance = 0, dbalance = 0;
size_t cnt;
unsigned char asum = 0, bsum = 0, csum = 0, dsum = 0;

for(cnt = nmemb; cnt > 132; cnt -= 128)
{
unsigned char loop;

asum = 0, bsum = 0, csum = 0, dsum = 0;
for(loop = 32; loop; loop--)
{
asum += (*(pta) > *(pta + 1)) > 0;
pta++;
bsum += (*(ptb) > *(ptb + 1)) > 0;
ptb++;
csum += (*(ptc) > *(ptc + 1)) > 0;
ptc++;
dsum += (*(ptd) > *(ptd + 1)) > 0;
ptd++;
}
abalance += asum;
astreaks += asum = (asum == 0) | (asum == 32);
bbalance += bsum;
bstreaks += bsum = (bsum == 0) | (bsum == 32);
cbalance += csum;
cstreaks += csum = (csum == 0) | (csum == 32);
dbalance += dsum;
dstreaks += dsum = (dsum == 0) | (dsum == 32);
if(cnt > 516 && asum + bsum + csum + dsum == 0)
{
abalance += 48;
pta += 96;
bbalance += 48;
ptb += 96;
cbalance += 48;
ptc += 96;
dbalance += 48;
ptd += 96;
cnt -= 384;
}
}
for(; cnt > 7; cnt -= 4)
{
abalance += (*(pta) > *(pta + 1)) > 0;
pta++;
bbalance += (*(ptb) > *(ptb + 1)) > 0;
ptb++;
cbalance += (*(ptc) > *(ptc + 1)) > 0;
ptc++;
dbalance += (*(ptd) > *(ptd + 1)) > 0;
ptd++;
}
if(quad1 < quad2)
{
bbalance += (*(ptb) > *(ptb + 1)) > 0;
ptb++;
}
if(quad1 < quad3)
{
cbalance += (*(ptc) > *(ptc + 1)) > 0;
ptc++;
}
if(quad1 < quad4)
{
dbalance += (*(ptd) > *(ptd + 1)) > 0;
ptd++;
}
cnt = abalance + bbalance + cbalance + dbalance;
if(cnt == 0)
{
if((*(pta) > *(pta + 1)) <= 0 && (*(ptb) > *(ptb + 1)) <= 0 && (*(ptc) > *(ptc + 1)) <= 0)
{
return ;
}
}
asum = quad1 - abalance == 1;
bsum = quad2 - bbalance == 1;
csum = quad3 - cbalance == 1;
dsum = quad4 - dbalance == 1;
if(asum | bsum | csum | dsum)
{
unsigned char span1 = (asum && bsum) * ((*(pta) > *(pta + 1)) > 0);
unsigned char span2 = (bsum && csum) * ((*(ptb) > *(ptb + 1)) > 0);
unsigned char span3 = (csum && dsum) * ((*(ptc) > *(ptc + 1)) > 0);

switch(span1 | span2 * 2 | span3 * 4)
{
case 0:
break;
case 1:
quad_reversal_uint64(array, ptb);
abalance = bbalance = 0;
break;
case 2:
quad_reversal_uint64(pta + 1, ptc);
bbalance = cbalance = 0;
break;
case 3:
quad_reversal_uint64(array, ptc);
abalance = bbalance = cbalance = 0;
break;
case 4:
quad_reversal_uint64(ptb + 1, ptd);
cbalance = dbalance = 0;
break;
case 5:
quad_reversal_uint64(array, ptb);
quad_reversal_uint64(ptb + 1, ptd);
abalance = bbalance = cbalance = dbalance = 0;
break;
case 6:
quad_reversal_uint64(pta + 1, ptd);
bbalance = cbalance = dbalance = 0;
break;
case 7:
quad_reversal_uint64(array, ptd);
return ;
}
if(asum && abalance)
{
quad_reversal_uint64(array, pta);
abalance = 0;
}
if(bsum && bbalance)
{
quad_reversal_uint64(pta + 1, ptb);
bbalance = 0;
}
if(csum && cbalance)
{
quad_reversal_uint64(ptb + 1, ptc);
cbalance = 0;
}
if(dsum && dbalance)
{
quad_reversal_uint64(ptc + 1, ptd);
dbalance = 0;
}
}
cnt = nmemb / 256;
asum = astreaks > cnt;
bsum = bstreaks > cnt;
csum = cstreaks > cnt;
dsum = dstreaks > cnt;
switch(asum + bsum * 2 + csum * 4 + dsum * 8)
{
case 0:
fulcrum_partition_uint64(array, swap, ((void *)0), swap_size, nmemb, cmp, arg);
return ;
case 1:
if(abalance)
quadsort_swap_uint64(array, swap, swap_size, quad1, cmp, arg);
fulcrum_partition_uint64(pta + 1, swap, ((void *)0), swap_size, quad2 + half2, cmp, arg);
break;
case 2:
fulcrum_partition_uint64(array, swap, ((void *)0), swap_size, quad1, cmp, arg);
if(bbalance)
quadsort_swap_uint64(pta + 1, swap, swap_size, quad2, cmp, arg);
fulcrum_partition_uint64(ptb + 1, swap, ((void *)0), swap_size, half2, cmp, arg);
break;
case 3:
if(abalance)
quadsort_swap_uint64(array, swap, swap_size, quad1, cmp, arg);
if(bbalance)
quadsort_swap_uint64(pta + 1, swap, swap_size, quad2, cmp, arg);
fulcrum_partition_uint64(ptb + 1, swap, ((void *)0), swap_size, half2, cmp, arg);
break;
case 4:
fulcrum_partition_uint64(array, swap, ((void *)0), swap_size, half1, cmp, arg);
if(cbalance)
quadsort_swap_uint64(ptb + 1, swap, swap_size, quad3, cmp, arg);
fulcrum_partition_uint64(ptc + 1, swap, ((void *)0), swap_size, quad4, cmp, arg);
break;
case 8:
fulcrum_partition_uint64(array, swap, ((void *)0), swap_size, half1 + quad3, cmp, arg);
if(dbalance)
quadsort_swap_uint64(ptc + 1, swap, swap_size, quad4, cmp, arg);
break;
case 9:
if(abalance)
quadsort_swap_uint64(array, swap, swap_size, quad1, cmp, arg);
fulcrum_partition_uint64(pta + 1, swap, ((void *)0), swap_size, quad2 + quad3, cmp, arg);
if(dbalance)
quadsort_swap_uint64(ptc + 1, swap, swap_size, quad4, cmp, arg);
break;
case 12:
fulcrum_partition_uint64(array, swap, ((void *)0), swap_size, half1, cmp, arg);
if(cbalance)
quadsort_swap_uint64(ptb + 1, swap, swap_size, quad3, cmp, arg);
if(dbalance)
quadsort_swap_uint64(ptc + 1, swap, swap_size, quad4, cmp, arg);
break;
case 5:
case 6:
case 7:
case 10:
case 11:
case 13:
case 14:
case 15:
if(asum)
{
if(abalance)
quadsort_swap_uint64(array, swap, swap_size, quad1, cmp, arg);
}
else
fulcrum_partition_uint64(array, swap, ((void *)0), swap_size, quad1, cmp, arg);
if(bsum)
{
if(bbalance)
quadsort_swap_uint64(pta + 1, swap, swap_size, quad2, cmp, arg);
}
else
fulcrum_partition_uint64(pta + 1, swap, ((void *)0), swap_size, quad2, cmp, arg);
if(csum)
{
if(cbalance)
quadsort_swap_uint64(ptb + 1, swap, swap_size, quad3, cmp, arg);
}
else
fulcrum_partition_uint64(ptb + 1, swap, ((void *)0), swap_size, quad3, cmp, arg);
if(dsum)
{
if(dbalance)
quadsort_swap_uint64(ptc + 1, swap, swap_size, quad4, cmp, arg);
}
else
fulcrum_partition_uint64(ptc + 1, swap, ((void *)0), swap_size, quad4, cmp, arg);
break;
}
if((*(pta) > *(pta + 1)) <= 0)
{
if((*(ptc) > *(ptc + 1)) <= 0)
{
if((*(ptb) > *(ptb + 1)) <= 0)
{
return ;
}
}
else
{
rotate_merge_block_uint64(array + half1, swap, swap_size, quad3, quad4, cmp, arg);
}
}
else
{
rotate_merge_block_uint64(array, swap, swap_size, quad1, quad2, cmp, arg);
if((*(ptc) > *(ptc + 1)) > 0)
{
rotate_merge_block_uint64(array + half1, swap, swap_size, quad3, quad4, cmp, arg);
}
}
rotate_merge_block_uint64(array, swap, swap_size, half1, half2, cmp, arg);
}

unsigned long long * crum_median_of_cbrt_uint64(unsigned long long * array, unsigned long long * swap, size_t swap_size, size_t nmemb, int * generic, CMPFUNCPTR cmp, void * arg)
{
unsigned long long * pta, * piv;
size_t cnt, cbrt, div;

for(cbrt = 32; nmemb > cbrt * cbrt * cbrt && cbrt < swap_size; cbrt *= 2)
{
}
div = nmemb / cbrt;
pta = array + nmemb - 1 - (size_t)&div / 64 % div;
piv = array + cbrt;
for(cnt = cbrt; cnt; cnt--)
{
swap[0] = *--piv;
*piv = *pta;
*pta = swap[0];
pta -= div;
}
cbrt /= 2;
quadsort_swap_uint64(piv, swap, swap_size, cbrt, cmp, arg);
quadsort_swap_uint64(piv + cbrt, swap, swap_size, cbrt, cmp, arg);
*generic = ((*(piv + cbrt * 2 - 1) > *(piv)) <= 0) & ((*(piv + cbrt - 1) > *(piv)) <= 0);
return crum_binary_median_uint64(piv, piv + cbrt, cbrt, cmp, arg);
}

void crum_analyze8(char * array, char * swap, size_t swap_size, size_t nmemb, CMPFUNCPTR cmp, void * arg)
{
size_t half1 = nmemb / 2;
size_t quad1 = half1 / 2;
size_t quad2 = half1 - quad1;
size_t half2 = nmemb - half1;
size_t quad3 = half2 / 2;
size_t quad4 = half2 - quad3;
char * pta = array;
char * ptb = array + quad1;
char * ptc = array + half1;
char * ptd = array + half1 + quad3;
unsigned int astreaks = 0, bstreaks = 0, cstreaks = 0, dstreaks = 0;
unsigned int abalance = 0, bbalance = 0, cbalance = 0, dbalance = 0;
size_t cnt;
unsigned char asum = 0, bsum = 0, csum = 0, dsum = 0;

for(cnt = nmemb; cnt > 132; cnt -= 128)
{
unsigned char loop;

asum = 0, bsum = 0, csum = 0, dsum = 0;
for(loop = 32; loop; loop--)
{
asum += cmp(arg, pta, pta + 1) > 0;
pta++;
bsum += cmp(arg, ptb, ptb + 1) > 0;
ptb++;
csum += cmp(arg, ptc, ptc + 1) > 0;
ptc++;
dsum += cmp(arg, ptd, ptd + 1) > 0;
ptd++;
}
abalance += asum;
astreaks += asum = (asum == 0) | (asum == 32);
bbalance += bsum;
bstreaks += bsum = (bsum == 0) | (bsum == 32);
cbalance += csum;
cstreaks += csum = (csum == 0) | (csum == 32);
dbalance += dsum;
dstreaks += dsum = (dsum == 0) | (dsum == 32);
if(cnt > 516 && asum + bsum + csum + dsum == 0)
{
abalance += 48;
pta += 96;
bbalance += 48;
ptb += 96;
cbalance += 48;
ptc += 96;
dbalance += 48;
ptd += 96;
cnt -= 384;
}
}
for(; cnt > 7; cnt -= 4)
{
abalance += cmp(arg, pta, pta + 1) > 0;
pta++;
bbalance += cmp(arg, ptb, ptb + 1) > 0;
ptb++;
cbalance += cmp(arg, ptc, ptc + 1) > 0;
ptc++;
dbalance += cmp(arg, ptd, ptd + 1) > 0;
ptd++;
}
if(quad1 < quad2)
{
bbalance += cmp(arg, ptb, ptb + 1) > 0;
ptb++;
}
if(quad1 < quad3)
{
cbalance += cmp(arg, ptc, ptc + 1) > 0;
ptc++;
}
if(quad1 < quad4)
{
dbalance += cmp(arg, ptd, ptd + 1) > 0;
ptd++;
}
cnt = abalance + bbalance + cbalance + dbalance;
if(cnt == 0)
{
if(cmp(arg, pta, pta + 1) <= 0 && cmp(arg, ptb, ptb + 1) <= 0 && cmp(arg, ptc, ptc + 1) <= 0)
{
return ;
}
}
asum = quad1 - abalance == 1;
bsum = quad2 - bbalance == 1;
csum = quad3 - cbalance == 1;
dsum = quad4 - dbalance == 1;
if(asum | bsum | csum | dsum)
{
unsigned char span1 = (asum && bsum) * (cmp(arg, pta, pta + 1) > 0);
unsigned char span2 = (bsum && csum) * (cmp(arg, ptb, ptb + 1) > 0);
unsigned char span3 = (csum && dsum) * (cmp(arg, ptc, ptc + 1) > 0);

switch(span1 | span2 * 2 | span3 * 4)
{
case 0:
break;
case 1:
quad_reversal8(array, ptb);
abalance = bbalance = 0;
break;
case 2:
quad_reversal8(pta + 1, ptc);
bbalance = cbalance = 0;
break;
case 3:
quad_reversal8(array, ptc);
abalance = bbalance = cbalance = 0;
break;
case 4:
quad_reversal8(ptb + 1, ptd);
cbalance = dbalance = 0;
break;
case 5:
quad_reversal8(array, ptb);
quad_reversal8(ptb + 1, ptd);
abalance = bbalance = cbalance = dbalance = 0;
break;
case 6:
quad_reversal8(pta + 1, ptd);
bbalance = cbalance = dbalance = 0;
break;
case 7:
quad_reversal8(array, ptd);
return ;
}
if(asum && abalance)
{
quad_reversal8(array, pta);
abalance = 0;
}
if(bsum && bbalance)
{
quad_reversal8(pta + 1, ptb);
bbalance = 0;
}
if(csum && cbalance)
{
quad_reversal8(ptb + 1, ptc);
cbalance = 0;
}
if(dsum && dbalance)
{
quad_reversal8(ptc + 1, ptd);
dbalance = 0;
}
}
cnt = nmemb / 512;
asum = astreaks > cnt;
bsum = bstreaks > cnt;
csum = cstreaks > cnt;
dsum = dstreaks > cnt;
if(quad1 > 4294967295)
{
goto quad_cache;
}
switch(asum + bsum * 2 + csum * 4 + dsum * 8)
{
case 0:
fulcrum_partition8(array, swap, ((void *)0), swap_size, nmemb, cmp, arg);
return ;
case 1:
if(abalance)
quadsort_swap8(array, swap, swap_size, quad1, cmp, arg);
fulcrum_partition8(pta + 1, swap, ((void *)0), swap_size, quad2 + half2, cmp, arg);
break;
case 2:
fulcrum_partition8(array, swap, ((void *)0), swap_size, quad1, cmp, arg);
if(bbalance)
quadsort_swap8(pta + 1, swap, swap_size, quad2, cmp, arg);
fulcrum_partition8(ptb + 1, swap, ((void *)0), swap_size, half2, cmp, arg);
break;
case 3:
if(abalance)
quadsort_swap8(array, swap, swap_size, quad1, cmp, arg);
if(bbalance)
quadsort_swap8(pta + 1, swap, swap_size, quad2, cmp, arg);
fulcrum_partition8(ptb + 1, swap, ((void *)0), swap_size, half2, cmp, arg);
break;
case 4:
fulcrum_partition8(array, swap, ((void *)0), swap_size, half1, cmp, arg);
if(cbalance)
quadsort_swap8(ptb + 1, swap, swap_size, quad3, cmp, arg);
fulcrum_partition8(ptc + 1, swap, ((void *)0), swap_size, quad4, cmp, arg);
break;
case 8:
fulcrum_partition8(array, swap, ((void *)0), swap_size, half1 + quad3, cmp, arg);
if(dbalance)
quadsort_swap8(ptc + 1, swap, swap_size, quad4, cmp, arg);
break;
case 9:
if(abalance)
quadsort_swap8(array, swap, swap_size, quad1, cmp, arg);
fulcrum_partition8(pta + 1, swap, ((void *)0), swap_size, quad2 + quad3, cmp, arg);
if(dbalance)
quadsort_swap8(ptc + 1, swap, swap_size, quad4, cmp, arg);
break;
case 12:
fulcrum_partition8(array, swap, ((void *)0), swap_size, half1, cmp, arg);
if(cbalance)
quadsort_swap8(ptb + 1, swap, swap_size, quad3, cmp, arg);
if(dbalance)
quadsort_swap8(ptc + 1, swap, swap_size, quad4, cmp, arg);
break;
case 5:
case 6:
case 7:
case 10:
case 11:
case 13:
case 14:
case 15:
quad_cache:
if(asum)
{
if(abalance)
quadsort_swap8(array, swap, swap_size, quad1, cmp, arg);
}
else
fulcrum_partition8(array, swap, ((void *)0), swap_size, quad1, cmp, arg);
if(bsum)
{
if(bbalance)
quadsort_swap8(pta + 1, swap, swap_size, quad2, cmp, arg);
}
else
fulcrum_partition8(pta + 1, swap, ((void *)0), swap_size, quad2, cmp, arg);
if(csum)
{
if(cbalance)
quadsort_swap8(ptb + 1, swap, swap_size, quad3, cmp, arg);
}
else
fulcrum_partition8(ptb + 1, swap, ((void *)0), swap_size, quad3, cmp, arg);
if(dsum)
{
if(dbalance)
quadsort_swap8(ptc + 1, swap, swap_size, quad4, cmp, arg);
}
else
fulcrum_partition8(ptc + 1, swap, ((void *)0), swap_size, quad4, cmp, arg);
break;
}
if(cmp(arg, pta, pta + 1) <= 0)
{
if(cmp(arg, ptc, ptc + 1) <= 0)
{
if(cmp(arg, ptb, ptb + 1) <= 0)
{
return ;
}
}
else
{
rotate_merge_block8(array + half1, swap, swap_size, quad3, quad4, cmp, arg);
}
}
else
{
rotate_merge_block8(array, swap, swap_size, quad1, quad2, cmp, arg);
if(cmp(arg, ptc, ptc + 1) > 0)
{
rotate_merge_block8(array + half1, swap, swap_size, quad3, quad4, cmp, arg);
}
}
rotate_merge_block8(array, swap, swap_size, half1, half2, cmp, arg);
}

char * crum_median_of_cbrt8(char * array, char * swap, size_t swap_size, size_t nmemb, int * generic, CMPFUNCPTR cmp, void * arg)
{
char * pta, * piv;
size_t cnt, cbrt, div;

for(cbrt = 32; nmemb > cbrt * cbrt * cbrt && cbrt < swap_size; cbrt *= 2)
{
}
div = nmemb / cbrt;
pta = array + nmemb - 1 - (size_t)&div / 64 % div;
piv = array + cbrt;
for(cnt = cbrt; cnt; cnt--)
{
swap[0] = *--piv;
*piv = *pta;
*pta = swap[0];
pta -= div;
}
cbrt /= 2;
quadsort_swap8(piv, swap, swap_size, cbrt, cmp, arg);
quadsort_swap8(piv + cbrt, swap, swap_size, cbrt, cmp, arg);
*generic = (cmp(arg, piv + cbrt * 2 - 1, piv) <= 0) & (cmp(arg, piv + cbrt - 1, piv) <= 0);
return crum_binary_median8(piv, piv + cbrt, cbrt, cmp, arg);
}

void quadsort(void * array, size_t nmemb, size_t size, CMPFUNCPTR cmp, void * arg)
{
if(nmemb < 2)
{
return ;
}
switch(size)
{
case 1:
quadsort8(array, nmemb, cmp, arg);
return ;
case 2:
quadsort16(array, nmemb, cmp, arg);
return ;
case 4:
quadsort32(array, nmemb, cmp, arg);
return ;
case 8:
quadsort64(array, nmemb, cmp, arg);
return ;
}
}

void crum_analyze16(short * array, short * swap, size_t swap_size, size_t nmemb, CMPFUNCPTR cmp, void * arg)
{
size_t half1 = nmemb / 2;
size_t quad1 = half1 / 2;
size_t quad2 = half1 - quad1;
size_t half2 = nmemb - half1;
size_t quad3 = half2 / 2;
size_t quad4 = half2 - quad3;
short * pta = array;
short * ptb = array + quad1;
short * ptc = array + half1;
short * ptd = array + half1 + quad3;
unsigned int astreaks = 0, bstreaks = 0, cstreaks = 0, dstreaks = 0;
unsigned int abalance = 0, bbalance = 0, cbalance = 0, dbalance = 0;
size_t cnt;
unsigned char asum = 0, bsum = 0, csum = 0, dsum = 0;

for(cnt = nmemb; cnt > 132; cnt -= 128)
{
unsigned char loop;

asum = 0, bsum = 0, csum = 0, dsum = 0;
for(loop = 32; loop; loop--)
{
asum += cmp(arg, pta, pta + 1) > 0;
pta++;
bsum += cmp(arg, ptb, ptb + 1) > 0;
ptb++;
csum += cmp(arg, ptc, ptc + 1) > 0;
ptc++;
dsum += cmp(arg, ptd, ptd + 1) > 0;
ptd++;
}
abalance += asum;
astreaks += asum = (asum == 0) | (asum == 32);
bbalance += bsum;
bstreaks += bsum = (bsum == 0) | (bsum == 32);
cbalance += csum;
cstreaks += csum = (csum == 0) | (csum == 32);
dbalance += dsum;
dstreaks += dsum = (dsum == 0) | (dsum == 32);
if(cnt > 516 && asum + bsum + csum + dsum == 0)
{
abalance += 48;
pta += 96;
bbalance += 48;
ptb += 96;
cbalance += 48;
ptc += 96;
dbalance += 48;
ptd += 96;
cnt -= 384;
}
}
for(; cnt > 7; cnt -= 4)
{
abalance += cmp(arg, pta, pta + 1) > 0;
pta++;
bbalance += cmp(arg, ptb, ptb + 1) > 0;
ptb++;
cbalance += cmp(arg, ptc, ptc + 1) > 0;
ptc++;
dbalance += cmp(arg, ptd, ptd + 1) > 0;
ptd++;
}
if(quad1 < quad2)
{
bbalance += cmp(arg, ptb, ptb + 1) > 0;
ptb++;
}
if(quad1 < quad3)
{
cbalance += cmp(arg, ptc, ptc + 1) > 0;
ptc++;
}
if(quad1 < quad4)
{
dbalance += cmp(arg, ptd, ptd + 1) > 0;
ptd++;
}
cnt = abalance + bbalance + cbalance + dbalance;
if(cnt == 0)
{
if(cmp(arg, pta, pta + 1) <= 0 && cmp(arg, ptb, ptb + 1) <= 0 && cmp(arg, ptc, ptc + 1) <= 0)
{
return ;
}
}
asum = quad1 - abalance == 1;
bsum = quad2 - bbalance == 1;
csum = quad3 - cbalance == 1;
dsum = quad4 - dbalance == 1;
if(asum | bsum | csum | dsum)
{
unsigned char span1 = (asum && bsum) * (cmp(arg, pta, pta + 1) > 0);
unsigned char span2 = (bsum && csum) * (cmp(arg, ptb, ptb + 1) > 0);
unsigned char span3 = (csum && dsum) * (cmp(arg, ptc, ptc + 1) > 0);

switch(span1 | span2 * 2 | span3 * 4)
{
case 0:
break;
case 1:
quad_reversal16(array, ptb);
abalance = bbalance = 0;
break;
case 2:
quad_reversal16(pta + 1, ptc);
bbalance = cbalance = 0;
break;
case 3:
quad_reversal16(array, ptc);
abalance = bbalance = cbalance = 0;
break;
case 4:
quad_reversal16(ptb + 1, ptd);
cbalance = dbalance = 0;
break;
case 5:
quad_reversal16(array, ptb);
quad_reversal16(ptb + 1, ptd);
abalance = bbalance = cbalance = dbalance = 0;
break;
case 6:
quad_reversal16(pta + 1, ptd);
bbalance = cbalance = dbalance = 0;
break;
case 7:
quad_reversal16(array, ptd);
return ;
}
if(asum && abalance)
{
quad_reversal16(array, pta);
abalance = 0;
}
if(bsum && bbalance)
{
quad_reversal16(pta + 1, ptb);
bbalance = 0;
}
if(csum && cbalance)
{
quad_reversal16(ptb + 1, ptc);
cbalance = 0;
}
if(dsum && dbalance)
{
quad_reversal16(ptc + 1, ptd);
dbalance = 0;
}
}
cnt = nmemb / 512;
asum = astreaks > cnt;
bsum = bstreaks > cnt;
csum = cstreaks > cnt;
dsum = dstreaks > cnt;
if(quad1 > 4294967295)
{
goto quad_cache;
}
switch(asum + bsum * 2 + csum * 4 + dsum * 8)
{
case 0:
fulcrum_partition16(array, swap, ((void *)0), swap_size, nmemb, cmp, arg);
return ;
case 1:
if(abalance)
quadsort_swap16(array, swap, swap_size, quad1, cmp, arg);
fulcrum_partition16(pta + 1, swap, ((void *)0), swap_size, quad2 + half2, cmp, arg);
break;
case 2:
fulcrum_partition16(array, swap, ((void *)0), swap_size, quad1, cmp, arg);
if(bbalance)
quadsort_swap16(pta + 1, swap, swap_size, quad2, cmp, arg);
fulcrum_partition16(ptb + 1, swap, ((void *)0), swap_size, half2, cmp, arg);
break;
case 3:
if(abalance)
quadsort_swap16(array, swap, swap_size, quad1, cmp, arg);
if(bbalance)
quadsort_swap16(pta + 1, swap, swap_size, quad2, cmp, arg);
fulcrum_partition16(ptb + 1, swap, ((void *)0), swap_size, half2, cmp, arg);
break;
case 4:
fulcrum_partition16(array, swap, ((void *)0), swap_size, half1, cmp, arg);
if(cbalance)
quadsort_swap16(ptb + 1, swap, swap_size, quad3, cmp, arg);
fulcrum_partition16(ptc + 1, swap, ((void *)0), swap_size, quad4, cmp, arg);
break;
case 8:
fulcrum_partition16(array, swap, ((void *)0), swap_size, half1 + quad3, cmp, arg);
if(dbalance)
quadsort_swap16(ptc + 1, swap, swap_size, quad4, cmp, arg);
break;
case 9:
if(abalance)
quadsort_swap16(array, swap, swap_size, quad1, cmp, arg);
fulcrum_partition16(pta + 1, swap, ((void *)0), swap_size, quad2 + quad3, cmp, arg);
if(dbalance)
quadsort_swap16(ptc + 1, swap, swap_size, quad4, cmp, arg);
break;
case 12:
fulcrum_partition16(array, swap, ((void *)0), swap_size, half1, cmp, arg);
if(cbalance)
quadsort_swap16(ptb + 1, swap, swap_size, quad3, cmp, arg);
if(dbalance)
quadsort_swap16(ptc + 1, swap, swap_size, quad4, cmp, arg);
break;
case 5:
case 6:
case 7:
case 10:
case 11:
case 13:
case 14:
case 15:
quad_cache:
if(asum)
{
if(abalance)
quadsort_swap16(array, swap, swap_size, quad1, cmp, arg);
}
else
fulcrum_partition16(array, swap, ((void *)0), swap_size, quad1, cmp, arg);
if(bsum)
{
if(bbalance)
quadsort_swap16(pta + 1, swap, swap_size, quad2, cmp, arg);
}
else
fulcrum_partition16(pta + 1, swap, ((void *)0), swap_size, quad2, cmp, arg);
if(csum)
{
if(cbalance)
quadsort_swap16(ptb + 1, swap, swap_size, quad3, cmp, arg);
}
else
fulcrum_partition16(ptb + 1, swap, ((void *)0), swap_size, quad3, cmp, arg);
if(dsum)
{
if(dbalance)
quadsort_swap16(ptc + 1, swap, swap_size, quad4, cmp, arg);
}
else
fulcrum_partition16(ptc + 1, swap, ((void *)0), swap_size, quad4, cmp, arg);
break;
}
if(cmp(arg, pta, pta + 1) <= 0)
{
if(cmp(arg, ptc, ptc + 1) <= 0)
{
if(cmp(arg, ptb, ptb + 1) <= 0)
{
return ;
}
}
else
{
rotate_merge_block16(array + half1, swap, swap_size, quad3, quad4, cmp, arg);
}
}
else
{
rotate_merge_block16(array, swap, swap_size, quad1, quad2, cmp, arg);
if(cmp(arg, ptc, ptc + 1) > 0)
{
rotate_merge_block16(array + half1, swap, swap_size, quad3, quad4, cmp, arg);
}
}
rotate_merge_block16(array, swap, swap_size, half1, half2, cmp, arg);
}

short * crum_median_of_cbrt16(short * array, short * swap, size_t swap_size, size_t nmemb, int * generic, CMPFUNCPTR cmp, void * arg)
{
short * pta, * piv;
size_t cnt, cbrt, div;

for(cbrt = 32; nmemb > cbrt * cbrt * cbrt && cbrt < swap_size; cbrt *= 2)
{
}
div = nmemb / cbrt;
pta = array + nmemb - 1 - (size_t)&div / 64 % div;
piv = array + cbrt;
for(cnt = cbrt; cnt; cnt--)
{
swap[0] = *--piv;
*piv = *pta;
*pta = swap[0];
pta -= div;
}
cbrt /= 2;
quadsort_swap16(piv, swap, swap_size, cbrt, cmp, arg);
quadsort_swap16(piv + cbrt, swap, swap_size, cbrt, cmp, arg);
*generic = (cmp(arg, piv + cbrt * 2 - 1, piv) <= 0) & (cmp(arg, piv + cbrt - 1, piv) <= 0);
return crum_binary_median16(piv, piv + cbrt, cbrt, cmp, arg);
}

void crum_analyze128(long double * array, long double * swap, size_t swap_size, size_t nmemb, CMPFUNCPTR cmp, void * arg)
{
size_t half1 = nmemb / 2;
size_t quad1 = half1 / 2;
size_t quad2 = half1 - quad1;
size_t half2 = nmemb - half1;
size_t quad3 = half2 / 2;
size_t quad4 = half2 - quad3;
long double * pta = array;
long double * ptb = array + quad1;
long double * ptc = array + half1;
long double * ptd = array + half1 + quad3;
unsigned int astreaks = 0, bstreaks = 0, cstreaks = 0, dstreaks = 0;
unsigned int abalance = 0, bbalance = 0, cbalance = 0, dbalance = 0;
size_t cnt;
unsigned char asum = 0, bsum = 0, csum = 0, dsum = 0;

for(cnt = nmemb; cnt > 132; cnt -= 128)
{
unsigned char loop;

asum = 0, bsum = 0, csum = 0, dsum = 0;
for(loop = 32; loop; loop--)
{
asum += cmp(arg, pta, pta + 1) > 0;
pta++;
bsum += cmp(arg, ptb, ptb + 1) > 0;
ptb++;
csum += cmp(arg, ptc, ptc + 1) > 0;
ptc++;
dsum += cmp(arg, ptd, ptd + 1) > 0;
ptd++;
}
abalance += asum;
astreaks += asum = (asum == 0) | (asum == 32);
bbalance += bsum;
bstreaks += bsum = (bsum == 0) | (bsum == 32);
cbalance += csum;
cstreaks += csum = (csum == 0) | (csum == 32);
dbalance += dsum;
dstreaks += dsum = (dsum == 0) | (dsum == 32);
if(cnt > 516 && asum + bsum + csum + dsum == 0)
{
abalance += 48;
pta += 96;
bbalance += 48;
ptb += 96;
cbalance += 48;
ptc += 96;
dbalance += 48;
ptd += 96;
cnt -= 384;
}
}
for(; cnt > 7; cnt -= 4)
{
abalance += cmp(arg, pta, pta + 1) > 0;
pta++;
bbalance += cmp(arg, ptb, ptb + 1) > 0;
ptb++;
cbalance += cmp(arg, ptc, ptc + 1) > 0;
ptc++;
dbalance += cmp(arg, ptd, ptd + 1) > 0;
ptd++;
}
if(quad1 < quad2)
{
bbalance += cmp(arg, ptb, ptb + 1) > 0;
ptb++;
}
if(quad1 < quad3)
{
cbalance += cmp(arg, ptc, ptc + 1) > 0;
ptc++;
}
if(quad1 < quad4)
{
dbalance += cmp(arg, ptd, ptd + 1) > 0;
ptd++;
}
cnt = abalance + bbalance + cbalance + dbalance;
if(cnt == 0)
{
if(cmp(arg, pta, pta + 1) <= 0 && cmp(arg, ptb, ptb + 1) <= 0 && cmp(arg, ptc, ptc + 1) <= 0)
{
return ;
}
}
asum = quad1 - abalance == 1;
bsum = quad2 - bbalance == 1;
csum = quad3 - cbalance == 1;
dsum = quad4 - dbalance == 1;
if(asum | bsum | csum | dsum)
{
unsigned char span1 = (asum && bsum) * (cmp(arg, pta, pta + 1) > 0);
unsigned char span2 = (bsum && csum) * (cmp(arg, ptb, ptb + 1) > 0);
unsigned char span3 = (csum && dsum) * (cmp(arg, ptc, ptc + 1) > 0);

switch(span1 | span2 * 2 | span3 * 4)
{
case 0:
break;
case 1:
quad_reversal128(array, ptb);
abalance = bbalance = 0;
break;
case 2:
quad_reversal128(pta + 1, ptc);
bbalance = cbalance = 0;
break;
case 3:
quad_reversal128(array, ptc);
abalance = bbalance = cbalance = 0;
break;
case 4:
quad_reversal128(ptb + 1, ptd);
cbalance = dbalance = 0;
break;
case 5:
quad_reversal128(array, ptb);
quad_reversal128(ptb + 1, ptd);
abalance = bbalance = cbalance = dbalance = 0;
break;
case 6:
quad_reversal128(pta + 1, ptd);
bbalance = cbalance = dbalance = 0;
break;
case 7:
quad_reversal128(array, ptd);
return ;
}
if(asum && abalance)
{
quad_reversal128(array, pta);
abalance = 0;
}
if(bsum && bbalance)
{
quad_reversal128(pta + 1, ptb);
bbalance = 0;
}
if(csum && cbalance)
{
quad_reversal128(ptb + 1, ptc);
cbalance = 0;
}
if(dsum && dbalance)
{
quad_reversal128(ptc + 1, ptd);
dbalance = 0;
}
}
cnt = nmemb / 512;
asum = astreaks > cnt;
bsum = bstreaks > cnt;
csum = cstreaks > cnt;
dsum = dstreaks > cnt;
if(quad1 > 4294967295)
{
goto quad_cache;
}
switch(asum + bsum * 2 + csum * 4 + dsum * 8)
{
case 0:
fulcrum_partition128(array, swap, ((void *)0), swap_size, nmemb, cmp, arg);
return ;
case 1:
if(abalance)
quadsort_swap128(array, swap, swap_size, quad1, cmp, arg);
fulcrum_partition128(pta + 1, swap, ((void *)0), swap_size, quad2 + half2, cmp, arg);
break;
case 2:
fulcrum_partition128(array, swap, ((void *)0), swap_size, quad1, cmp, arg);
if(bbalance)
quadsort_swap128(pta + 1, swap, swap_size, quad2, cmp, arg);
fulcrum_partition128(ptb + 1, swap, ((void *)0), swap_size, half2, cmp, arg);
break;
case 3:
if(abalance)
quadsort_swap128(array, swap, swap_size, quad1, cmp, arg);
if(bbalance)
quadsort_swap128(pta + 1, swap, swap_size, quad2, cmp, arg);
fulcrum_partition128(ptb + 1, swap, ((void *)0), swap_size, half2, cmp, arg);
break;
case 4:
fulcrum_partition128(array, swap, ((void *)0), swap_size, half1, cmp, arg);
if(cbalance)
quadsort_swap128(ptb + 1, swap, swap_size, quad3, cmp, arg);
fulcrum_partition128(ptc + 1, swap, ((void *)0), swap_size, quad4, cmp, arg);
break;
case 8:
fulcrum_partition128(array, swap, ((void *)0), swap_size, half1 + quad3, cmp, arg);
if(dbalance)
quadsort_swap128(ptc + 1, swap, swap_size, quad4, cmp, arg);
break;
case 9:
if(abalance)
quadsort_swap128(array, swap, swap_size, quad1, cmp, arg);
fulcrum_partition128(pta + 1, swap, ((void *)0), swap_size, quad2 + quad3, cmp, arg);
if(dbalance)
quadsort_swap128(ptc + 1, swap, swap_size, quad4, cmp, arg);
break;
case 12:
fulcrum_partition128(array, swap, ((void *)0), swap_size, half1, cmp, arg);
if(cbalance)
quadsort_swap128(ptb + 1, swap, swap_size, quad3, cmp, arg);
if(dbalance)
quadsort_swap128(ptc + 1, swap, swap_size, quad4, cmp, arg);
break;
case 5:
case 6:
case 7:
case 10:
case 11:
case 13:
case 14:
case 15:
quad_cache:
if(asum)
{
if(abalance)
quadsort_swap128(array, swap, swap_size, quad1, cmp, arg);
}
else
fulcrum_partition128(array, swap, ((void *)0), swap_size, quad1, cmp, arg);
if(bsum)
{
if(bbalance)
quadsort_swap128(pta + 1, swap, swap_size, quad2, cmp, arg);
}
else
fulcrum_partition128(pta + 1, swap, ((void *)0), swap_size, quad2, cmp, arg);
if(csum)
{
if(cbalance)
quadsort_swap128(ptb + 1, swap, swap_size, quad3, cmp, arg);
}
else
fulcrum_partition128(ptb + 1, swap, ((void *)0), swap_size, quad3, cmp, arg);
if(dsum)
{
if(dbalance)
quadsort_swap128(ptc + 1, swap, swap_size, quad4, cmp, arg);
}
else
fulcrum_partition128(ptc + 1, swap, ((void *)0), swap_size, quad4, cmp, arg);
break;
}
if(cmp(arg, pta, pta + 1) <= 0)
{
if(cmp(arg, ptc, ptc + 1) <= 0)
{
if(cmp(arg, ptb, ptb + 1) <= 0)
{
return ;
}
}
else
{
rotate_merge_block128(array + half1, swap, swap_size, quad3, quad4, cmp, arg);
}
}
else
{
rotate_merge_block128(array, swap, swap_size, quad1, quad2, cmp, arg);
if(cmp(arg, ptc, ptc + 1) > 0)
{
rotate_merge_block128(array + half1, swap, swap_size, quad3, quad4, cmp, arg);
}
}
rotate_merge_block128(array, swap, swap_size, half1, half2, cmp, arg);
}

long double * crum_median_of_cbrt128(long double * array, long double * swap, size_t swap_size, size_t nmemb, int * generic, CMPFUNCPTR cmp, void * arg)
{
long double * pta, * piv;
size_t cnt, cbrt, div;

for(cbrt = 32; nmemb > cbrt * cbrt * cbrt && cbrt < swap_size; cbrt *= 2)
{
}
div = nmemb / cbrt;
pta = array + nmemb - 1 - (size_t)&div / 64 % div;
piv = array + cbrt;
for(cnt = cbrt; cnt; cnt--)
{
swap[0] = *--piv;
*piv = *pta;
*pta = swap[0];
pta -= div;
}
cbrt /= 2;
quadsort_swap128(piv, swap, swap_size, cbrt, cmp, arg);
quadsort_swap128(piv + cbrt, swap, swap_size, cbrt, cmp, arg);
*generic = (cmp(arg, piv + cbrt * 2 - 1, piv) <= 0) & (cmp(arg, piv + cbrt - 1, piv) <= 0);
return crum_binary_median128(piv, piv + cbrt, cbrt, cmp, arg);
}

void crumsort32(void * array, size_t nmemb, CMPFUNCPTR cmp, void * arg)
{
if(nmemb <= 256)
{
int swap[256];

quadsort_swap32(array, swap, nmemb, nmemb, cmp, arg);
}
else
{
int * pta = (int *)array;
size_t swap_size = 512;
int swap[512];

crum_analyze32(pta, swap, swap_size, nmemb, cmp, arg);
}
}

void crumsort_swap32(void * array, void * swap, size_t swap_size, size_t nmemb, CMPFUNCPTR cmp, void * arg)
{
if(nmemb <= 256)
{
quadsort_swap32(array, swap, swap_size, nmemb, cmp, arg);
}
else
{
int * pta = (int *)array;
int * pts = (int *)swap;

crum_analyze32(pta, pts, swap_size, nmemb, cmp, arg);
}
}

void fulcrum_partition32(int * array, int * swap, int * max, size_t swap_size, size_t nmemb, CMPFUNCPTR cmp, void * arg)
{
size_t a_size, s_size;
int * ptp, piv;
int generic = 0;

while(1)
{
if(nmemb <= 2048)
{
ptp = crum_median_of_nine32(array, nmemb, cmp, arg);
}
else
{
ptp = crum_median_of_cbrt32(array, swap, swap_size, nmemb, &generic, cmp, arg);
if(generic)
break;
}
piv = *ptp;
if(max && cmp(arg, max, &piv) <= 0)
{
a_size = fulcrum_reverse_partition32(array, swap, array, &piv, swap_size, nmemb, cmp, arg);
s_size = nmemb - a_size;
nmemb = a_size;
if(s_size <= a_size / 32 || a_size <= 96)
break;
max = ((void *)0);
continue;
}
*ptp = array[--nmemb];
a_size = fulcrum_default_partition32(array, swap, array, &piv, swap_size, nmemb, cmp, arg);
s_size = nmemb - a_size;
ptp = array + a_size;
array[nmemb] = *ptp;
*ptp = piv;
if(a_size <= s_size / 32 || s_size <= 96)
{
quadsort_swap32(ptp + 1, swap, swap_size, s_size, cmp, arg);
}
else
{
fulcrum_partition32(ptp + 1, swap, max, swap_size, s_size, cmp, arg);
}
nmemb = a_size;
if(s_size <= a_size / 32 || a_size <= 96)
{
if(a_size <= 96)
break;
a_size = fulcrum_reverse_partition32(array, swap, array, &piv, swap_size, nmemb, cmp, arg);
s_size = nmemb - a_size;
nmemb = a_size;
if(s_size <= a_size / 32 || a_size <= 96)
break;
max = ((void *)0);
continue;
}
max = ptp;
}
quadsort_swap32(array, swap, swap_size, nmemb, cmp, arg);
}

void crumsort_int32(void * array, size_t nmemb, CMPFUNCPTR cmp, void * arg)
{
if(nmemb <= 256)
{
int swap[256];

quadsort_swap_int32(array, swap, nmemb, nmemb, cmp, arg);
}
else
{
int * pta = (int *)array;
size_t swap_size = 512;
int swap[512];

crum_analyze_int32(pta, swap, swap_size, nmemb, cmp, arg);
}
}

void crumsort_swap_int32(void * array, void * swap, size_t swap_size, size_t nmemb, CMPFUNCPTR cmp, void * arg)
{
if(nmemb <= 256)
{
quadsort_swap_int32(array, swap, swap_size, nmemb, cmp, arg);
}
else
{
int * pta = (int *)array;
int * pts = (int *)swap;

crum_analyze_int32(pta, pts, swap_size, nmemb, cmp, arg);
}
}

void fulcrum_partition_int32(int * array, int * swap, int * max, size_t swap_size, size_t nmemb, CMPFUNCPTR cmp, void * arg)
{
size_t a_size, s_size;
int * ptp, piv;
int generic = 0;

while(1)
{
if(nmemb <= 2048)
{
ptp = crum_median_of_nine_int32(array, nmemb, cmp, arg);
}
else
{
ptp = crum_median_of_cbrt_int32(array, swap, swap_size, nmemb, &generic, cmp, arg);
if(generic)
break;
}
piv = *ptp;
if(max && (*(max) > *(&piv)) <= 0)
{
a_size = fulcrum_reverse_partition_int32(array, swap, array, &piv, swap_size, nmemb, cmp, arg);
s_size = nmemb - a_size;
nmemb = a_size;
if(s_size <= a_size / 32 || a_size <= 96)
break;
max = ((void *)0);
continue;
}
*ptp = array[--nmemb];
a_size = fulcrum_default_partition_int32(array, swap, array, &piv, swap_size, nmemb, cmp, arg);
s_size = nmemb - a_size;
ptp = array + a_size;
array[nmemb] = *ptp;
*ptp = piv;
if(a_size <= s_size / 32 || s_size <= 96)
{
quadsort_swap_int32(ptp + 1, swap, swap_size, s_size, cmp, arg);
}
else
{
fulcrum_partition_int32(ptp + 1, swap, max, swap_size, s_size, cmp, arg);
}
nmemb = a_size;
if(s_size <= a_size / 32 || a_size <= 96)
{
if(a_size <= 96)
break;
a_size = fulcrum_reverse_partition_int32(array, swap, array, &piv, swap_size, nmemb, cmp, arg);
s_size = nmemb - a_size;
nmemb = a_size;
if(s_size <= a_size / 32 || a_size <= 96)
break;
max = ((void *)0);
continue;
}
max = ptp;
}
quadsort_swap_int32(array, swap, swap_size, nmemb, cmp, arg);
}

void crumsort_uint32(void * array, size_t nmemb, CMPFUNCPTR cmp, void * arg)
{
if(nmemb <= 256)
{
unsigned int swap[256];

quadsort_swap_uint32(array, swap, nmemb, nmemb, cmp, arg);
}
else
{
unsigned int * pta = (unsigned int *)array;
size_t swap_size = 512;
unsigned int swap[512];

crum_analyze_uint32(pta, swap, swap_size, nmemb, cmp, arg);
}
}

void crumsort_swap_uint32(void * array, void * swap, size_t swap_size, size_t nmemb, CMPFUNCPTR cmp, void * arg)
{
if(nmemb <= 256)
{
quadsort_swap_uint32(array, swap, swap_size, nmemb, cmp, arg);
}
else
{
unsigned int * pta = (unsigned int *)array;
unsigned int * pts = (unsigned int *)swap;

crum_analyze_uint32(pta, pts, swap_size, nmemb, cmp, arg);
}
}

void fulcrum_partition_uint32(unsigned int * array, unsigned int * swap, unsigned int * max, size_t swap_size, size_t nmemb, CMPFUNCPTR cmp, void * arg)
{
size_t a_size, s_size;
unsigned int * ptp, piv;
int generic = 0;

while(1)
{
if(nmemb <= 2048)
{
ptp = crum_median_of_nine_uint32(array, nmemb, cmp, arg);
}
else
{
ptp = crum_median_of_cbrt_uint32(array, swap, swap_size, nmemb, &generic, cmp, arg);
if(generic)
break;
}
piv = *ptp;
if(max && (*(max) > *(&piv)) <= 0)
{
a_size = fulcrum_reverse_partition_uint32(array, swap, array, &piv, swap_size, nmemb, cmp, arg);
s_size = nmemb - a_size;
nmemb = a_size;
if(s_size <= a_size / 32 || a_size <= 96)
break;
max = ((void *)0);
continue;
}
*ptp = array[--nmemb];
a_size = fulcrum_default_partition_uint32(array, swap, array, &piv, swap_size, nmemb, cmp, arg);
s_size = nmemb - a_size;
ptp = array + a_size;
array[nmemb] = *ptp;
*ptp = piv;
if(a_size <= s_size / 32 || s_size <= 96)
{
quadsort_swap_uint32(ptp + 1, swap, swap_size, s_size, cmp, arg);
}
else
{
fulcrum_partition_uint32(ptp + 1, swap, max, swap_size, s_size, cmp, arg);
}
nmemb = a_size;
if(s_size <= a_size / 32 || a_size <= 96)
{
if(a_size <= 96)
break;
a_size = fulcrum_reverse_partition_uint32(array, swap, array, &piv, swap_size, nmemb, cmp, arg);
s_size = nmemb - a_size;
nmemb = a_size;
if(s_size <= a_size / 32 || a_size <= 96)
break;
max = ((void *)0);
continue;
}
max = ptp;
}
quadsort_swap_uint32(array, swap, swap_size, nmemb, cmp, arg);
}

void crumsort64(void * array, size_t nmemb, CMPFUNCPTR cmp, void * arg)
{
if(nmemb <= 256)
{
long long swap[256];

quadsort_swap64(array, swap, nmemb, nmemb, cmp, arg);
}
else
{
long long * pta = (long long *)array;
size_t swap_size = 512;
long long swap[512];

crum_analyze64(pta, swap, swap_size, nmemb, cmp, arg);
}
}

void crumsort_swap64(void * array, void * swap, size_t swap_size, size_t nmemb, CMPFUNCPTR cmp, void * arg)
{
if(nmemb <= 256)
{
quadsort_swap64(array, swap, swap_size, nmemb, cmp, arg);
}
else
{
long long * pta = (long long *)array;
long long * pts = (long long *)swap;

crum_analyze64(pta, pts, swap_size, nmemb, cmp, arg);
}
}

void fulcrum_partition64(long long * array, long long * swap, long long * max, size_t swap_size, size_t nmemb, CMPFUNCPTR cmp, void * arg)
{
size_t a_size, s_size;
long long * ptp, piv;
int generic = 0;

while(1)
{
if(nmemb <= 2048)
{
ptp = crum_median_of_nine64(array, nmemb, cmp, arg);
}
else
{
ptp = crum_median_of_cbrt64(array, swap, swap_size, nmemb, &generic, cmp, arg);
if(generic)
break;
}
piv = *ptp;
if(max && cmp(arg, max, &piv) <= 0)
{
a_size = fulcrum_reverse_partition64(array, swap, array, &piv, swap_size, nmemb, cmp, arg);
s_size = nmemb - a_size;
nmemb = a_size;
if(s_size <= a_size / 32 || a_size <= 96)
break;
max = ((void *)0);
continue;
}
*ptp = array[--nmemb];
a_size = fulcrum_default_partition64(array, swap, array, &piv, swap_size, nmemb, cmp, arg);
s_size = nmemb - a_size;
ptp = array + a_size;
array[nmemb] = *ptp;
*ptp = piv;
if(a_size <= s_size / 32 || s_size <= 96)
{
quadsort_swap64(ptp + 1, swap, swap_size, s_size, cmp, arg);
}
else
{
fulcrum_partition64(ptp + 1, swap, max, swap_size, s_size, cmp, arg);
}
nmemb = a_size;
if(s_size <= a_size / 32 || a_size <= 96)
{
if(a_size <= 96)
break;
a_size = fulcrum_reverse_partition64(array, swap, array, &piv, swap_size, nmemb, cmp, arg);
s_size = nmemb - a_size;
nmemb = a_size;
if(s_size <= a_size / 32 || a_size <= 96)
break;
max = ((void *)0);
continue;
}
max = ptp;
}
quadsort_swap64(array, swap, swap_size, nmemb, cmp, arg);
}

void crumsort_int64(void * array, size_t nmemb, CMPFUNCPTR cmp, void * arg)
{
if(nmemb <= 256)
{
long long swap[256];

quadsort_swap_int64(array, swap, nmemb, nmemb, cmp, arg);
}
else
{
long long * pta = (long long *)array;
size_t swap_size = 512;
long long swap[512];

crum_analyze_int64(pta, swap, swap_size, nmemb, cmp, arg);
}
}

void crumsort_swap_int64(void * array, void * swap, size_t swap_size, size_t nmemb, CMPFUNCPTR cmp, void * arg)
{
if(nmemb <= 256)
{
quadsort_swap_int64(array, swap, swap_size, nmemb, cmp, arg);
}
else
{
long long * pta = (long long *)array;
long long * pts = (long long *)swap;

crum_analyze_int64(pta, pts, swap_size, nmemb, cmp, arg);
}
}

void fulcrum_partition_int64(long long * array, long long * swap, long long * max, size_t swap_size, size_t nmemb, CMPFUNCPTR cmp, void * arg)
{
size_t a_size, s_size;
long long * ptp, piv;
int generic = 0;

while(1)
{
if(nmemb <= 2048)
{
ptp = crum_median_of_nine_int64(array, nmemb, cmp, arg);
}
else
{
ptp = crum_median_of_cbrt_int64(array, swap, swap_size, nmemb, &generic, cmp, arg);
if(generic)
break;
}
piv = *ptp;
if(max && (*(max) > *(&piv)) <= 0)
{
a_size = fulcrum_reverse_partition_int64(array, swap, array, &piv, swap_size, nmemb, cmp, arg);
s_size = nmemb - a_size;
nmemb = a_size;
if(s_size <= a_size / 32 || a_size <= 96)
break;
max = ((void *)0);
continue;
}
*ptp = array[--nmemb];
a_size = fulcrum_default_partition_int64(array, swap, array, &piv, swap_size, nmemb, cmp, arg);
s_size = nmemb - a_size;
ptp = array + a_size;
array[nmemb] = *ptp;
*ptp = piv;
if(a_size <= s_size / 32 || s_size <= 96)
{
quadsort_swap_int64(ptp + 1, swap, swap_size, s_size, cmp, arg);
}
else
{
fulcrum_partition_int64(ptp + 1, swap, max, swap_size, s_size, cmp, arg);
}
nmemb = a_size;
if(s_size <= a_size / 32 || a_size <= 96)
{
if(a_size <= 96)
break;
a_size = fulcrum_reverse_partition_int64(array, swap, array, &piv, swap_size, nmemb, cmp, arg);
s_size = nmemb - a_size;
nmemb = a_size;
if(s_size <= a_size / 32 || a_size <= 96)
break;
max = ((void *)0);
continue;
}
max = ptp;
}
quadsort_swap_int64(array, swap, swap_size, nmemb, cmp, arg);
}

void crumsort_uint64(void * array, size_t nmemb, CMPFUNCPTR cmp, void * arg)
{
if(nmemb <= 256)
{
unsigned long long swap[256];

quadsort_swap_uint64(array, swap, nmemb, nmemb, cmp, arg);
}
else
{
unsigned long long * pta = (unsigned long long *)array;
size_t swap_size = 512;
unsigned long long swap[512];

crum_analyze_uint64(pta, swap, swap_size, nmemb, cmp, arg);
}
}

void crumsort_swap_uint64(void * array, void * swap, size_t swap_size, size_t nmemb, CMPFUNCPTR cmp, void * arg)
{
if(nmemb <= 256)
{
quadsort_swap_uint64(array, swap, swap_size, nmemb, cmp, arg);
}
else
{
unsigned long long * pta = (unsigned long long *)array;
unsigned long long * pts = (unsigned long long *)swap;

crum_analyze_uint64(pta, pts, swap_size, nmemb, cmp, arg);
}
}

void fulcrum_partition_uint64(unsigned long long * array, unsigned long long * swap, unsigned long long * max, size_t swap_size, size_t nmemb, CMPFUNCPTR cmp, void * arg)
{
size_t a_size, s_size;
unsigned long long * ptp, piv;
int generic = 0;

while(1)
{
if(nmemb <= 2048)
{
ptp = crum_median_of_nine_uint64(array, nmemb, cmp, arg);
}
else
{
ptp = crum_median_of_cbrt_uint64(array, swap, swap_size, nmemb, &generic, cmp, arg);
if(generic)
break;
}
piv = *ptp;
if(max && (*(max) > *(&piv)) <= 0)
{
a_size = fulcrum_reverse_partition_uint64(array, swap, array, &piv, swap_size, nmemb, cmp, arg);
s_size = nmemb - a_size;
nmemb = a_size;
if(s_size <= a_size / 32 || a_size <= 96)
break;
max = ((void *)0);
continue;
}
*ptp = array[--nmemb];
a_size = fulcrum_default_partition_uint64(array, swap, array, &piv, swap_size, nmemb, cmp, arg);
s_size = nmemb - a_size;
ptp = array + a_size;
array[nmemb] = *ptp;
*ptp = piv;
if(a_size <= s_size / 32 || s_size <= 96)
{
quadsort_swap_uint64(ptp + 1, swap, swap_size, s_size, cmp, arg);
}
else
{
fulcrum_partition_uint64(ptp + 1, swap, max, swap_size, s_size, cmp, arg);
}
nmemb = a_size;
if(s_size <= a_size / 32 || a_size <= 96)
{
if(a_size <= 96)
break;
a_size = fulcrum_reverse_partition_uint64(array, swap, array, &piv, swap_size, nmemb, cmp, arg);
s_size = nmemb - a_size;
nmemb = a_size;
if(s_size <= a_size / 32 || a_size <= 96)
break;
max = ((void *)0);
continue;
}
max = ptp;
}
quadsort_swap_uint64(array, swap, swap_size, nmemb, cmp, arg);
}

void crumsort8(void * array, size_t nmemb, CMPFUNCPTR cmp, void * arg)
{
if(nmemb <= 256)
{
char swap[256];

quadsort_swap8(array, swap, nmemb, nmemb, cmp, arg);
}
else
{
char * pta = (char *)array;
size_t swap_size = 512;
char swap[512];

crum_analyze8(pta, swap, swap_size, nmemb, cmp, arg);
}
}

void crumsort_swap8(void * array, void * swap, size_t swap_size, size_t nmemb, CMPFUNCPTR cmp, void * arg)
{
if(nmemb <= 256)
{
quadsort_swap8(array, swap, swap_size, nmemb, cmp, arg);
}
else
{
char * pta = (char *)array;
char * pts = (char *)swap;

crum_analyze8(pta, pts, swap_size, nmemb, cmp, arg);
}
}

void fulcrum_partition8(char * array, char * swap, char * max, size_t swap_size, size_t nmemb, CMPFUNCPTR cmp, void * arg)
{
size_t a_size, s_size;
char * ptp, piv;
int generic = 0;

while(1)
{
if(nmemb <= 2048)
{
ptp = crum_median_of_nine8(array, nmemb, cmp, arg);
}
else
{
ptp = crum_median_of_cbrt8(array, swap, swap_size, nmemb, &generic, cmp, arg);
if(generic)
break;
}
piv = *ptp;
if(max && cmp(arg, max, &piv) <= 0)
{
a_size = fulcrum_reverse_partition8(array, swap, array, &piv, swap_size, nmemb, cmp, arg);
s_size = nmemb - a_size;
nmemb = a_size;
if(s_size <= a_size / 32 || a_size <= 96)
break;
max = ((void *)0);
continue;
}
*ptp = array[--nmemb];
a_size = fulcrum_default_partition8(array, swap, array, &piv, swap_size, nmemb, cmp, arg);
s_size = nmemb - a_size;
ptp = array + a_size;
array[nmemb] = *ptp;
*ptp = piv;
if(a_size <= s_size / 32 || s_size <= 96)
{
quadsort_swap8(ptp + 1, swap, swap_size, s_size, cmp, arg);
}
else
{
fulcrum_partition8(ptp + 1, swap, max, swap_size, s_size, cmp, arg);
}
nmemb = a_size;
if(s_size <= a_size / 32 || a_size <= 96)
{
if(a_size <= 96)
break;
a_size = fulcrum_reverse_partition8(array, swap, array, &piv, swap_size, nmemb, cmp, arg);
s_size = nmemb - a_size;
nmemb = a_size;
if(s_size <= a_size / 32 || a_size <= 96)
break;
max = ((void *)0);
continue;
}
max = ptp;
}
quadsort_swap8(array, swap, swap_size, nmemb, cmp, arg);
}

void crumsort16(void * array, size_t nmemb, CMPFUNCPTR cmp, void * arg)
{
if(nmemb <= 256)
{
short swap[256];

quadsort_swap16(array, swap, nmemb, nmemb, cmp, arg);
}
else
{
short * pta = (short *)array;
size_t swap_size = 512;
short swap[512];

crum_analyze16(pta, swap, swap_size, nmemb, cmp, arg);
}
}

void crumsort_swap16(void * array, void * swap, size_t swap_size, size_t nmemb, CMPFUNCPTR cmp, void * arg)
{
if(nmemb <= 256)
{
quadsort_swap16(array, swap, swap_size, nmemb, cmp, arg);
}
else
{
short * pta = (short *)array;
short * pts = (short *)swap;

crum_analyze16(pta, pts, swap_size, nmemb, cmp, arg);
}
}

void fulcrum_partition16(short * array, short * swap, short * max, size_t swap_size, size_t nmemb, CMPFUNCPTR cmp, void * arg)
{
size_t a_size, s_size;
short * ptp, piv;
int generic = 0;

while(1)
{
if(nmemb <= 2048)
{
ptp = crum_median_of_nine16(array, nmemb, cmp, arg);
}
else
{
ptp = crum_median_of_cbrt16(array, swap, swap_size, nmemb, &generic, cmp, arg);
if(generic)
break;
}
piv = *ptp;
if(max && cmp(arg, max, &piv) <= 0)
{
a_size = fulcrum_reverse_partition16(array, swap, array, &piv, swap_size, nmemb, cmp, arg);
s_size = nmemb - a_size;
nmemb = a_size;
if(s_size <= a_size / 32 || a_size <= 96)
break;
max = ((void *)0);
continue;
}
*ptp = array[--nmemb];
a_size = fulcrum_default_partition16(array, swap, array, &piv, swap_size, nmemb, cmp, arg);
s_size = nmemb - a_size;
ptp = array + a_size;
array[nmemb] = *ptp;
*ptp = piv;
if(a_size <= s_size / 32 || s_size <= 96)
{
quadsort_swap16(ptp + 1, swap, swap_size, s_size, cmp, arg);
}
else
{
fulcrum_partition16(ptp + 1, swap, max, swap_size, s_size, cmp, arg);
}
nmemb = a_size;
if(s_size <= a_size / 32 || a_size <= 96)
{
if(a_size <= 96)
break;
a_size = fulcrum_reverse_partition16(array, swap, array, &piv, swap_size, nmemb, cmp, arg);
s_size = nmemb - a_size;
nmemb = a_size;
if(s_size <= a_size / 32 || a_size <= 96)
break;
max = ((void *)0);
continue;
}
max = ptp;
}
quadsort_swap16(array, swap, swap_size, nmemb, cmp, arg);
}

void crumsort128(void * array, size_t nmemb, CMPFUNCPTR cmp, void * arg)
{
if(nmemb <= 256)
{
long double swap[256];

quadsort_swap128(array, swap, nmemb, nmemb, cmp, arg);
}
else
{
long double * pta = (long double *)array;
size_t swap_size = 512;
long double swap[512];

crum_analyze128(pta, swap, swap_size, nmemb, cmp, arg);
}
}

void crumsort_swap128(void * array, void * swap, size_t swap_size, size_t nmemb, CMPFUNCPTR cmp, void * arg)
{
if(nmemb <= 256)
{
quadsort_swap128(array, swap, swap_size, nmemb, cmp, arg);
}
else
{
long double * pta = (long double *)array;
long double * pts = (long double *)swap;

crum_analyze128(pta, pts, swap_size, nmemb, cmp, arg);
}
}

void fulcrum_partition128(long double * array, long double * swap, long double * max, size_t swap_size, size_t nmemb, CMPFUNCPTR cmp, void * arg)
{
size_t a_size, s_size;
long double * ptp, piv;
int generic = 0;

while(1)
{
if(nmemb <= 2048)
{
ptp = crum_median_of_nine128(array, nmemb, cmp, arg);
}
else
{
ptp = crum_median_of_cbrt128(array, swap, swap_size, nmemb, &generic, cmp, arg);
if(generic)
break;
}
piv = *ptp;
if(max && cmp(arg, max, &piv) <= 0)
{
a_size = fulcrum_reverse_partition128(array, swap, array, &piv, swap_size, nmemb, cmp, arg);
s_size = nmemb - a_size;
nmemb = a_size;
if(s_size <= a_size / 32 || a_size <= 96)
break;
max = ((void *)0);
continue;
}
*ptp = array[--nmemb];
a_size = fulcrum_default_partition128(array, swap, array, &piv, swap_size, nmemb, cmp, arg);
s_size = nmemb - a_size;
ptp = array + a_size;
array[nmemb] = *ptp;
*ptp = piv;
if(a_size <= s_size / 32 || s_size <= 96)
{
quadsort_swap128(ptp + 1, swap, swap_size, s_size, cmp, arg);
}
else
{
fulcrum_partition128(ptp + 1, swap, max, swap_size, s_size, cmp, arg);
}
nmemb = a_size;
if(s_size <= a_size / 32 || a_size <= 96)
{
if(a_size <= 96)
break;
a_size = fulcrum_reverse_partition128(array, swap, array, &piv, swap_size, nmemb, cmp, arg);
s_size = nmemb - a_size;
nmemb = a_size;
if(s_size <= a_size / 32 || a_size <= 96)
break;
max = ((void *)0);
continue;
}
max = ptp;
}
quadsort_swap128(array, swap, swap_size, nmemb, cmp, arg);
}

void crumsort_prim(void * array, size_t nmemb, size_t size)
{
if(nmemb < 2)
{
return ;
}
switch(size)
{
case 4:
crumsort_int32(array, nmemb, ((void *)0), ((void *)0));
return ;
case 5:
crumsort_uint32(array, nmemb, ((void *)0), ((void *)0));
return ;
case 8:
crumsort_int64(array, nmemb, ((void *)0), ((void *)0));
return ;
case 9:
crumsort_uint64(array, nmemb, ((void *)0), ((void *)0));
return ;
}
}

void crumsort(void * array, size_t nmemb, size_t size, CMPFUNCPTR cmp, void * arg)
{
if(nmemb < 2)
{
return ;
}
switch(size)
{
case 1:
crumsort8(array, nmemb, cmp, arg);
return ;
case 2:
crumsort16(array, nmemb, cmp, arg);
return ;
case 4:
crumsort32(array, nmemb, cmp, arg);
return ;
case 8:
crumsort64(array, nmemb, cmp, arg);
return ;
return ;
}
}

static inline void __eCNameSpace__eC__containers___qsortrx(void * base, size_t nel, size_t width, int (* compare)(void * arg, const void * a, const void * b), int (* optCompareArgLast)(const void * a, const void * b, void * arg), void * arg, unsigned int deref, unsigned int ascending)
{
if(!deref && ascending)
{
crumsort(base, nel, width, compare, arg);
}
else
{
struct __eCNameSpace__eC__containers__SortRData s =
{
arg, compare
};

crumsort(base, nel, width, (void *)(!deref ? (void *)(__eCNameSpace__eC__containers__compareDesc) : (void *)(ascending ? (void *)(__eCNameSpace__eC__containers__compareDeref) : (void *)(__eCNameSpace__eC__containers__compareDescDeref))), &s);
}
}

void __eCNameSpace__eC__containers__qsortrx(void * base, size_t nel, size_t width, int (* compare)(void * arg, const void * a, const void * b), int (* optCompareArgLast)(const void * a, const void * b, void * arg), void * arg, unsigned int deref, unsigned int ascending)
{
__eCNameSpace__eC__containers___qsortrx(base, nel, width, compare, optCompareArgLast, arg, deref, ascending);
}

void __eCNameSpace__eC__containers__qsortr(void * base, size_t nel, size_t width, int (* compare)(void * arg, const void * a, const void * b), void * arg)
{
__eCNameSpace__eC__containers___qsortrx(base, nel, width, compare, (((void *)0)), arg, 0, 1);
}

struct __eCNameSpace__eC__types__Property;

static __attribute__((unused)) struct __eCNameSpace__eC__types__Property * __eCProp___eCNameSpace__eC__containers__Array_size, * __eCPropM___eCNameSpace__eC__containers__Array_size;

static __attribute__((unused)) struct __eCNameSpace__eC__types__Property * __eCProp___eCNameSpace__eC__containers__Array_minAllocSize, * __eCPropM___eCNameSpace__eC__containers__Array_minAllocSize;

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

struct __eCNameSpace__eC__containers__BuiltInContainer
{
void * *  _vTbl;
struct __eCNameSpace__eC__types__Class * _class;
int _refCount;
void *  data;
int count;
struct __eCNameSpace__eC__types__Class * type;
} eC_gcc_struct;

extern unsigned int __eCNameSpace__eC__types__eClass_IsDerived(struct __eCNameSpace__eC__types__Class * _class, struct __eCNameSpace__eC__types__Class * from);

extern struct __eCNameSpace__eC__types__Property * __eCNameSpace__eC__types__eClass_AddProperty(struct __eCNameSpace__eC__types__Class * _class, const char *  name, const char *  dataType, void *  setStmt, void *  getStmt, int declMode);

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

extern void __eCNameSpace__eC__types__eInstance_SetMethod(struct __eCNameSpace__eC__types__Instance * instance, const char *  name, void *  function);

extern void __eCNameSpace__eC__types__eInstance_IncRef(struct __eCNameSpace__eC__types__Instance * instance);

extern void __eCNameSpace__eC__types__eInstance_StopWatching(struct __eCNameSpace__eC__types__Instance * instance, struct __eCNameSpace__eC__types__Property * _property, struct __eCNameSpace__eC__types__Instance * object);

extern void __eCNameSpace__eC__types__eInstance_Watch(struct __eCNameSpace__eC__types__Instance * instance, struct __eCNameSpace__eC__types__Property * _property, void *  object, void (*  callback)(void * , void * ));

extern void __eCNameSpace__eC__types__eInstance_FireWatchers(struct __eCNameSpace__eC__types__Instance * instance, struct __eCNameSpace__eC__types__Property * _property);

unsigned int __eCProp___eCNameSpace__eC__containers__Array_Get_size(struct __eCNameSpace__eC__types__Instance * this);

void __eCProp___eCNameSpace__eC__containers__Array_Set_size(struct __eCNameSpace__eC__types__Instance * this, unsigned int value);

unsigned int __eCProp___eCNameSpace__eC__containers__Array_Get_minAllocSize(struct __eCNameSpace__eC__types__Instance * this);

void __eCProp___eCNameSpace__eC__containers__Array_Set_minAllocSize(struct __eCNameSpace__eC__types__Instance * this, unsigned int value);

void __eCMethod___eCNameSpace__eC__types__IOChannel_Get(struct __eCNameSpace__eC__types__Instance * this, struct __eCNameSpace__eC__types__Class * class, void * *  data);

extern int __eCVMethodID___eCNameSpace__eC__containers__Container_GetCount;

extern int __eCVMethodID___eCNameSpace__eC__containers__Container_GetFirst;

extern int __eCVMethodID___eCNameSpace__eC__containers__Container_GetNext;

extern int __eCVMethodID___eCNameSpace__eC__containers__Container_GetData;

extern int __eCVMethodID___eCNameSpace__eC__containers__Container_Remove;

struct __eCNameSpace__eC__containers__BinaryTree;

struct __eCNameSpace__eC__containers__BinaryTree
{
struct __eCNameSpace__eC__containers__BTNode * root;
int count;
int (*  CompareKey)(struct __eCNameSpace__eC__containers__BinaryTree * tree, uintptr_t a, uintptr_t b);
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
struct __eCNameSpace__eC__containers__BinaryTree membersAlpha;
int memberOffset;
short structAlignment;
short pointerAlignment;
} eC_gcc_struct;

extern struct __eCNameSpace__eC__types__DataMember * __eCNameSpace__eC__types__eClass_AddDataMember(struct __eCNameSpace__eC__types__Class * _class, const char *  name, const char *  type, unsigned int size, unsigned int alignment, int declMode);

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

extern struct __eCNameSpace__eC__types__Method * __eCNameSpace__eC__types__eClass_AddMethod(struct __eCNameSpace__eC__types__Class * _class, const char *  name, const char *  type, void *  function, int declMode);

struct __eCNameSpace__eC__types__Module;

extern struct __eCNameSpace__eC__types__Class * __eCNameSpace__eC__types__eSystem_RegisterClass(int type, const char *  name, const char *  baseName, int size, int sizeClass, unsigned int (*  Constructor)(void * ), void (*  Destructor)(void * ), struct __eCNameSpace__eC__types__Instance * module, int declMode, int inheritanceAccess);

extern struct __eCNameSpace__eC__types__Instance * __thisModule;

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

static struct __eCNameSpace__eC__types__Class * __eCClass___eCNameSpace__eC__containers__SortRData;

static struct __eCNameSpace__eC__types__Class * __eCClass___eCNameSpace__eC__containers__Array;

extern void __eCNameSpace__eC__types__PrintLn(struct __eCNameSpace__eC__types__Class * class, const void * object, ...);

extern struct __eCNameSpace__eC__types__Class * __eCClass_uint;

extern struct __eCNameSpace__eC__types__Class * __eCClass___eCNameSpace__eC__types__Instance;

extern struct __eCNameSpace__eC__types__Class * __eCClass___eCNameSpace__eC__containers__Container;

extern struct __eCNameSpace__eC__types__Class * __eCClass_char__PTR_;

extern struct __eCNameSpace__eC__types__Class * __eCClass___eCNameSpace__eC__containers__BuiltInContainer;

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

void __eCDestructor___eCNameSpace__eC__containers__Array(struct __eCNameSpace__eC__types__Instance * this)
{
__attribute__((unused)) struct __eCNameSpace__eC__containers__Array * __eCPointer___eCNameSpace__eC__containers__Array = (struct __eCNameSpace__eC__containers__Array *)(this ? (((char *)this) + 0 + sizeof(struct __eCNameSpace__eC__types__Instance)) : 0);

{
(__eCNameSpace__eC__types__eSystem_Delete(__eCPointer___eCNameSpace__eC__containers__Array->array), __eCPointer___eCNameSpace__eC__containers__Array->array = 0);
}
}

struct __eCNameSpace__eC__containers__IteratorPointer * __eCMethod___eCNameSpace__eC__containers__Array_GetFirst(struct __eCNameSpace__eC__types__Instance * this)
{
__attribute__((unused)) struct __eCNameSpace__eC__containers__Array * __eCPointer___eCNameSpace__eC__containers__Array = (struct __eCNameSpace__eC__containers__Array *)(this ? (((char *)this) + 0 + sizeof(struct __eCNameSpace__eC__types__Instance)) : 0);

return (struct __eCNameSpace__eC__containers__IteratorPointer *)(__eCPointer___eCNameSpace__eC__containers__Array->count ? __eCPointer___eCNameSpace__eC__containers__Array->array : (((void *)0)));
}

int __eCMethod___eCNameSpace__eC__containers__Array_GetCount(struct __eCNameSpace__eC__types__Instance * this)
{
__attribute__((unused)) struct __eCNameSpace__eC__containers__Array * __eCPointer___eCNameSpace__eC__containers__Array = (struct __eCNameSpace__eC__containers__Array *)(this ? (((char *)this) + 0 + sizeof(struct __eCNameSpace__eC__types__Instance)) : 0);

return __eCPointer___eCNameSpace__eC__containers__Array->count;
}

unsigned int __eCProp___eCNameSpace__eC__containers__Array_Get_size(struct __eCNameSpace__eC__types__Instance * this)
{
__attribute__((unused)) struct __eCNameSpace__eC__containers__Array * __eCPointer___eCNameSpace__eC__containers__Array = (struct __eCNameSpace__eC__containers__Array *)(this ? (((char *)this) + 0 + sizeof(struct __eCNameSpace__eC__types__Instance)) : 0);

return __eCPointer___eCNameSpace__eC__containers__Array->count;
}

unsigned int __eCProp___eCNameSpace__eC__containers__Array_Get_minAllocSize(struct __eCNameSpace__eC__types__Instance * this)
{
__attribute__((unused)) struct __eCNameSpace__eC__containers__Array * __eCPointer___eCNameSpace__eC__containers__Array = (struct __eCNameSpace__eC__containers__Array *)(this ? (((char *)this) + 0 + sizeof(struct __eCNameSpace__eC__types__Instance)) : 0);

return __eCPointer___eCNameSpace__eC__containers__Array->minAllocSize;
}

void __eCMethod___eCNameSpace__eC__containers__Array_OnUnserialize(struct __eCNameSpace__eC__types__Class * class, struct __eCNameSpace__eC__types__Instance ** this, struct __eCNameSpace__eC__types__Instance * channel)
{
__attribute__((unused)) struct __eCNameSpace__eC__containers__Array * __eCPointer___eCNameSpace__eC__containers__Array = (struct __eCNameSpace__eC__containers__Array *)(this ? (((char *)this) + 0 + sizeof(struct __eCNameSpace__eC__types__Instance)) : 0);
struct __eCNameSpace__eC__types__Instance * array = __eCNameSpace__eC__types__eInstance_New(class);
unsigned int count, c;
struct __eCNameSpace__eC__types__Class * Dclass = class->templateArgs[2].__anon1.__anon1.dataTypeClass;

array->_refCount++;
__eCMethod___eCNameSpace__eC__types__IOChannel_Get(channel, __eCClass_uint, (void *)&count);
__eCProp___eCNameSpace__eC__containers__Array_Set_size(array, count);
for(c = 0; c < count; c++)
((void (*)(void *, void *, void *))(void *)Dclass->_vTbl[__eCVMethodID_class_OnUnserialize])(Dclass, ((unsigned char *)((struct __eCNameSpace__eC__containers__Array *)(((char *)array + 0 + sizeof(struct __eCNameSpace__eC__types__Instance))))->array) + Dclass->typeSize * c, channel);
(*this) = array;
}

struct __eCNameSpace__eC__containers__IteratorPointer * __eCMethod___eCNameSpace__eC__containers__Array_GetLast(struct __eCNameSpace__eC__types__Instance * this)
{
__attribute__((unused)) struct __eCNameSpace__eC__containers__Array * __eCPointer___eCNameSpace__eC__containers__Array = (struct __eCNameSpace__eC__containers__Array *)(this ? (((char *)this) + 0 + sizeof(struct __eCNameSpace__eC__types__Instance)) : 0);

return (struct __eCNameSpace__eC__containers__IteratorPointer *)(__eCPointer___eCNameSpace__eC__containers__Array->count && __eCPointer___eCNameSpace__eC__containers__Array->array ? (((unsigned char *)__eCPointer___eCNameSpace__eC__containers__Array->array) + ((__eCPointer___eCNameSpace__eC__containers__Array->count - 1) * ((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[0].__anon1.__anon1.dataTypeClass->typeSize)) : (((void *)0)));
}

struct __eCNameSpace__eC__containers__IteratorPointer * __eCMethod___eCNameSpace__eC__containers__Array_GetPrev(struct __eCNameSpace__eC__types__Instance * this, struct __eCNameSpace__eC__containers__IteratorPointer * ip)
{
__attribute__((unused)) struct __eCNameSpace__eC__containers__Array * __eCPointer___eCNameSpace__eC__containers__Array = (struct __eCNameSpace__eC__containers__Array *)(this ? (((char *)this) + 0 + sizeof(struct __eCNameSpace__eC__types__Instance)) : 0);
uint64 * item = (uint64 *)ip;

return (struct __eCNameSpace__eC__containers__IteratorPointer *)((item && (void *)(item) > (void *)(__eCPointer___eCNameSpace__eC__containers__Array->array)) ? (((unsigned char *)item) - (1 * ((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[0].__anon1.__anon1.dataTypeClass->typeSize)) : (((void *)0)));
}

struct __eCNameSpace__eC__containers__IteratorPointer * __eCMethod___eCNameSpace__eC__containers__Array_GetNext(struct __eCNameSpace__eC__types__Instance * this, struct __eCNameSpace__eC__containers__IteratorPointer * ip)
{
__attribute__((unused)) struct __eCNameSpace__eC__containers__Array * __eCPointer___eCNameSpace__eC__containers__Array = (struct __eCNameSpace__eC__containers__Array *)(this ? (((char *)this) + 0 + sizeof(struct __eCNameSpace__eC__types__Instance)) : 0);
uint64 * item = (uint64 *)ip;

return (struct __eCNameSpace__eC__containers__IteratorPointer *)((item && (void *)(item) < (void *)(((unsigned char *)((unsigned char *)__eCPointer___eCNameSpace__eC__containers__Array->array) + (__eCPointer___eCNameSpace__eC__containers__Array->count * ((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[0].__anon1.__anon1.dataTypeClass->typeSize)) - (1 * ((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[0].__anon1.__anon1.dataTypeClass->typeSize))) ? (((unsigned char *)item) + (1 * ((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[0].__anon1.__anon1.dataTypeClass->typeSize)) : (((void *)0)));
}

uint64 __eCMethod___eCNameSpace__eC__containers__Array_GetData(struct __eCNameSpace__eC__types__Instance * this, struct __eCNameSpace__eC__containers__IteratorPointer * ip)
{
__attribute__((unused)) struct __eCNameSpace__eC__containers__Array * __eCPointer___eCNameSpace__eC__containers__Array = (struct __eCNameSpace__eC__containers__Array *)(this ? (((char *)this) + 0 + sizeof(struct __eCNameSpace__eC__types__Instance)) : 0);
uint64 * item = (uint64 *)ip;

return ((((((struct __eCNameSpace__eC__types__Instance * )(char * )this)->_class->templateArgs[0].__anon1.__anon1.dataTypeClass->type == 1) ? ((uint64)(uintptr_t)item) : ((((struct __eCNameSpace__eC__types__Instance * )(char * )this)->_class->templateArgs[0].__anon1.__anon1.dataTypeClass->typeSize == 1) ? *((unsigned char *)item) : ((((struct __eCNameSpace__eC__types__Instance * )(char * )this)->_class->templateArgs[0].__anon1.__anon1.dataTypeClass->typeSize == 2) ? *((unsigned short *)item) : ((((struct __eCNameSpace__eC__types__Instance * )(char * )this)->_class->templateArgs[0].__anon1.__anon1.dataTypeClass->typeSize == 4) ? *((unsigned int *)item) : *(item)))))));
}

unsigned int __eCMethod___eCNameSpace__eC__containers__Array_SetData(struct __eCNameSpace__eC__types__Instance * this, struct __eCNameSpace__eC__containers__IteratorPointer * ip, uint64 value)
{
__attribute__((unused)) struct __eCNameSpace__eC__containers__Array * __eCPointer___eCNameSpace__eC__containers__Array = (struct __eCNameSpace__eC__containers__Array *)(this ? (((char *)this) + 0 + sizeof(struct __eCNameSpace__eC__types__Instance)) : 0);
uint64 * item = (uint64 *)ip;

(memcpy(item, (((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[0].__anon1.__anon1.dataTypeClass->type == 1) ? (char *)(uintptr_t)(value) : ((char *)&value + __ENDIAN_PAD(((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[0].__anon1.__anon1.dataTypeClass->typeSize)), ((struct __eCNameSpace__eC__types__Instance * )(char * )this)->_class->templateArgs[0].__anon1.__anon1.dataTypeClass->typeSize));
return 1;
}

struct __eCNameSpace__eC__containers__IteratorPointer * __eCMethod___eCNameSpace__eC__containers__Array_GetAtPosition(struct __eCNameSpace__eC__types__Instance * this, const uint64 pos, unsigned int create, unsigned int * justAdded)
{
__attribute__((unused)) struct __eCNameSpace__eC__containers__Array * __eCPointer___eCNameSpace__eC__containers__Array = (struct __eCNameSpace__eC__containers__Array *)(this ? (((char *)this) + 0 + sizeof(struct __eCNameSpace__eC__types__Instance)) : 0);

if((int)((const uint64)(pos)) > __eCPointer___eCNameSpace__eC__containers__Array->count && create)
{
if((int)((const uint64)(pos)) + 1 > __eCPointer___eCNameSpace__eC__containers__Array->minAllocSize)
__eCPointer___eCNameSpace__eC__containers__Array->array = __eCNameSpace__eC__types__eSystem_Renew(__eCPointer___eCNameSpace__eC__containers__Array->array, ((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[0].__anon1.__anon1.dataTypeClass->typeSize * ((int)((const uint64)(pos)) + 1));
__eCPointer___eCNameSpace__eC__containers__Array->count = (int)((const uint64)(pos)) + 1;
if(justAdded)
*justAdded = 1;
}
return ((int)((const uint64)(pos)) < __eCPointer___eCNameSpace__eC__containers__Array->count && __eCPointer___eCNameSpace__eC__containers__Array->array) ? (struct __eCNameSpace__eC__containers__IteratorPointer *)(((unsigned char *)__eCPointer___eCNameSpace__eC__containers__Array->array) + ((int)((const uint64)(pos)) * ((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[0].__anon1.__anon1.dataTypeClass->typeSize)) : (((void *)0));
}

struct __eCNameSpace__eC__containers__IteratorPointer * __eCMethod___eCNameSpace__eC__containers__Array_Insert(struct __eCNameSpace__eC__types__Instance * this, struct __eCNameSpace__eC__containers__IteratorPointer * ip, uint64 value)
{
__attribute__((unused)) struct __eCNameSpace__eC__containers__Array * __eCPointer___eCNameSpace__eC__containers__Array = (struct __eCNameSpace__eC__containers__Array *)(this ? (((char *)this) + 0 + sizeof(struct __eCNameSpace__eC__types__Instance)) : 0);
unsigned int tsize = ((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[0].__anon1.__anon1.dataTypeClass->typeSize;
unsigned char * pos = ip ? ((unsigned char *)ip + tsize) : (unsigned char *)__eCPointer___eCNameSpace__eC__containers__Array->array;

if(__eCPointer___eCNameSpace__eC__containers__Array->count + 1 > __eCPointer___eCNameSpace__eC__containers__Array->minAllocSize)
{
int offset = pos - (unsigned char *)__eCPointer___eCNameSpace__eC__containers__Array->array;

__eCPointer___eCNameSpace__eC__containers__Array->array = __eCNameSpace__eC__types__eSystem_Renew(__eCPointer___eCNameSpace__eC__containers__Array->array, ((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[0].__anon1.__anon1.dataTypeClass->typeSize * (__eCPointer___eCNameSpace__eC__containers__Array->count + 1));
pos = (unsigned char *)__eCPointer___eCNameSpace__eC__containers__Array->array + offset;
}
memmove(pos + tsize, pos, (unsigned char *)__eCPointer___eCNameSpace__eC__containers__Array->array + (__eCPointer___eCNameSpace__eC__containers__Array->count++) * tsize - pos);
(memcpy((uint64 *)pos, (((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[0].__anon1.__anon1.dataTypeClass->type == 1) ? (char *)(uintptr_t)(value) : ((char *)&value + __ENDIAN_PAD(((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[0].__anon1.__anon1.dataTypeClass->typeSize)), ((struct __eCNameSpace__eC__types__Instance * )(char * )this)->_class->templateArgs[0].__anon1.__anon1.dataTypeClass->typeSize));
return (struct __eCNameSpace__eC__containers__IteratorPointer *)pos;
}

struct __eCNameSpace__eC__containers__IteratorPointer * __eCMethod___eCNameSpace__eC__containers__Array_Add(struct __eCNameSpace__eC__types__Instance * this, uint64 value)
{
__attribute__((unused)) struct __eCNameSpace__eC__containers__Array * __eCPointer___eCNameSpace__eC__containers__Array = (struct __eCNameSpace__eC__containers__Array *)(this ? (((char *)this) + 0 + sizeof(struct __eCNameSpace__eC__types__Instance)) : 0);

if(__eCPointer___eCNameSpace__eC__containers__Array->count + 1 > __eCPointer___eCNameSpace__eC__containers__Array->minAllocSize)
__eCPointer___eCNameSpace__eC__containers__Array->array = __eCNameSpace__eC__types__eSystem_Renew(__eCPointer___eCNameSpace__eC__containers__Array->array, ((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[0].__anon1.__anon1.dataTypeClass->typeSize * (__eCPointer___eCNameSpace__eC__containers__Array->count + 1));
(memcpy((char *)__eCPointer___eCNameSpace__eC__containers__Array->array + (__eCPointer___eCNameSpace__eC__containers__Array->count * ((struct __eCNameSpace__eC__types__Instance * )(char * )this)->_class->templateArgs[0].__anon1.__anon1.dataTypeClass->typeSize), (((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[0].__anon1.__anon1.dataTypeClass->type == 1) ? (char *)(uintptr_t)(value) : ((char *)&value + __ENDIAN_PAD(((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[0].__anon1.__anon1.dataTypeClass->typeSize)), ((struct __eCNameSpace__eC__types__Instance * )(char * )this)->_class->templateArgs[0].__anon1.__anon1.dataTypeClass->typeSize));
return (struct __eCNameSpace__eC__containers__IteratorPointer *)(((unsigned char *)__eCPointer___eCNameSpace__eC__containers__Array->array) + ((__eCPointer___eCNameSpace__eC__containers__Array->count++) * ((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[0].__anon1.__anon1.dataTypeClass->typeSize));
}

void __eCMethod___eCNameSpace__eC__containers__Array_Remove(struct __eCNameSpace__eC__types__Instance * this, struct __eCNameSpace__eC__containers__IteratorPointer * ip)
{
__attribute__((unused)) struct __eCNameSpace__eC__containers__Array * __eCPointer___eCNameSpace__eC__containers__Array = (struct __eCNameSpace__eC__containers__Array *)(this ? (((char *)this) + 0 + sizeof(struct __eCNameSpace__eC__types__Instance)) : 0);
uint64 * it = (uint64 *)ip;

memmove(it, ((unsigned char *)it) + (1 * ((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[0].__anon1.__anon1.dataTypeClass->typeSize), (__eCPointer___eCNameSpace__eC__containers__Array->count - ((((unsigned char *)(it) - (unsigned char *)(__eCPointer___eCNameSpace__eC__containers__Array->array)) / ((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[0].__anon1.__anon1.dataTypeClass->typeSize)) - 1) * ((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[0].__anon1.__anon1.dataTypeClass->typeSize);
__eCPointer___eCNameSpace__eC__containers__Array->count--;
if(__eCPointer___eCNameSpace__eC__containers__Array->count + 1 > __eCPointer___eCNameSpace__eC__containers__Array->minAllocSize)
__eCPointer___eCNameSpace__eC__containers__Array->array = __eCNameSpace__eC__types__eSystem_Renew(__eCPointer___eCNameSpace__eC__containers__Array->array, ((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[0].__anon1.__anon1.dataTypeClass->typeSize * (__eCPointer___eCNameSpace__eC__containers__Array->count));
}

void __eCMethod___eCNameSpace__eC__containers__Array_Move(struct __eCNameSpace__eC__types__Instance * this, struct __eCNameSpace__eC__containers__IteratorPointer * ip, struct __eCNameSpace__eC__containers__IteratorPointer * afterIp)
{
__attribute__((unused)) struct __eCNameSpace__eC__containers__Array * __eCPointer___eCNameSpace__eC__containers__Array = (struct __eCNameSpace__eC__containers__Array *)(this ? (((char *)this) + 0 + sizeof(struct __eCNameSpace__eC__types__Instance)) : 0);
uint64 * it = (uint64 *)ip;
uint64 * after = (uint64 *)afterIp;
size_t size = ((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[0].__anon1.__anon1.dataTypeClass->typeSize;
unsigned char * temp = __eCNameSpace__eC__types__eSystem_New(sizeof(unsigned char) * (size));

memcpy(temp, it, size);
if(!after)
{
memmove(((unsigned char *)__eCPointer___eCNameSpace__eC__containers__Array->array) + (1 * ((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[0].__anon1.__anon1.dataTypeClass->typeSize), __eCPointer___eCNameSpace__eC__containers__Array->array, (unsigned char *)it - (unsigned char *)__eCPointer___eCNameSpace__eC__containers__Array->array);
memcpy(__eCPointer___eCNameSpace__eC__containers__Array->array, temp, size);
}
else
{
if((void *)(it) < (void *)(after))
{
memmove(it, ((unsigned char *)it) + (1 * ((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[0].__anon1.__anon1.dataTypeClass->typeSize), (unsigned char *)after - (unsigned char *)it);
memcpy(after, temp, size);
}
else if((void *)(it) > (void *)(after))
{
memmove(((unsigned char *)after) + (2 * ((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[0].__anon1.__anon1.dataTypeClass->typeSize), ((unsigned char *)after) + (1 * ((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[0].__anon1.__anon1.dataTypeClass->typeSize), (unsigned char *)it - (unsigned char *)(((unsigned char *)after) + (1 * ((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[0].__anon1.__anon1.dataTypeClass->typeSize)));
memcpy(((unsigned char *)after) + (1 * ((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[0].__anon1.__anon1.dataTypeClass->typeSize), temp, size);
}
}
(__eCNameSpace__eC__types__eSystem_Delete(temp), temp = 0);
}

void __eCMethod___eCNameSpace__eC__containers__Array_RemoveAll(struct __eCNameSpace__eC__types__Instance * this)
{
__attribute__((unused)) struct __eCNameSpace__eC__containers__Array * __eCPointer___eCNameSpace__eC__containers__Array = (struct __eCNameSpace__eC__containers__Array *)(this ? (((char *)this) + 0 + sizeof(struct __eCNameSpace__eC__types__Instance)) : 0);

if(__eCPointer___eCNameSpace__eC__containers__Array->minAllocSize && __eCPointer___eCNameSpace__eC__containers__Array->array)
__eCPointer___eCNameSpace__eC__containers__Array->array = __eCNameSpace__eC__types__eSystem_Renew0(__eCPointer___eCNameSpace__eC__containers__Array->array, ((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[0].__anon1.__anon1.dataTypeClass->typeSize * (__eCPointer___eCNameSpace__eC__containers__Array->minAllocSize));
else
(__eCNameSpace__eC__types__eSystem_Delete(__eCPointer___eCNameSpace__eC__containers__Array->array), __eCPointer___eCNameSpace__eC__containers__Array->array = 0);
__eCPointer___eCNameSpace__eC__containers__Array->count = 0;
}

void __eCProp___eCNameSpace__eC__containers__Array_Set_size(struct __eCNameSpace__eC__types__Instance * this, unsigned int value)
{
__attribute__((unused)) struct __eCNameSpace__eC__containers__Array * __eCPointer___eCNameSpace__eC__containers__Array = (struct __eCNameSpace__eC__containers__Array *)(this ? (((char *)this) + 0 + sizeof(struct __eCNameSpace__eC__types__Instance)) : 0);

if(__eCPointer___eCNameSpace__eC__containers__Array->count != value)
{
if(!__eCPointer___eCNameSpace__eC__containers__Array->minAllocSize || value > __eCPointer___eCNameSpace__eC__containers__Array->minAllocSize)
__eCPointer___eCNameSpace__eC__containers__Array->array = __eCNameSpace__eC__types__eSystem_Renew0(__eCPointer___eCNameSpace__eC__containers__Array->array, ((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[0].__anon1.__anon1.dataTypeClass->typeSize * (value));
else if(value > __eCPointer___eCNameSpace__eC__containers__Array->count)
memset((unsigned char *)__eCPointer___eCNameSpace__eC__containers__Array->array + __eCPointer___eCNameSpace__eC__containers__Array->count * ((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[0].__anon1.__anon1.dataTypeClass->typeSize, 0, (value - __eCPointer___eCNameSpace__eC__containers__Array->count) * ((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[0].__anon1.__anon1.dataTypeClass->typeSize);
__eCPointer___eCNameSpace__eC__containers__Array->count = value;
}
__eCProp___eCNameSpace__eC__containers__Array_size && __eCProp___eCNameSpace__eC__containers__Array_size->selfWatchable ? __eCNameSpace__eC__types__eInstance_FireSelfWatchers(this, __eCProp___eCNameSpace__eC__containers__Array_size) : (void)0, __eCPropM___eCNameSpace__eC__containers__Array_size && __eCPropM___eCNameSpace__eC__containers__Array_size->selfWatchable ? __eCNameSpace__eC__types__eInstance_FireSelfWatchers(this, __eCPropM___eCNameSpace__eC__containers__Array_size) : (void)0;
}

void __eCProp___eCNameSpace__eC__containers__Array_Set_minAllocSize(struct __eCNameSpace__eC__types__Instance * this, unsigned int value)
{
__attribute__((unused)) struct __eCNameSpace__eC__containers__Array * __eCPointer___eCNameSpace__eC__containers__Array = (struct __eCNameSpace__eC__containers__Array *)(this ? (((char *)this) + 0 + sizeof(struct __eCNameSpace__eC__types__Instance)) : 0);

if(__eCPointer___eCNameSpace__eC__containers__Array->minAllocSize != value)
{
if(value > __eCPointer___eCNameSpace__eC__containers__Array->count)
__eCPointer___eCNameSpace__eC__containers__Array->array = __eCNameSpace__eC__types__eSystem_Renew(__eCPointer___eCNameSpace__eC__containers__Array->array, ((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[0].__anon1.__anon1.dataTypeClass->typeSize * (value));
__eCPointer___eCNameSpace__eC__containers__Array->minAllocSize = value;
}
__eCProp___eCNameSpace__eC__containers__Array_minAllocSize && __eCProp___eCNameSpace__eC__containers__Array_minAllocSize->selfWatchable ? __eCNameSpace__eC__types__eInstance_FireSelfWatchers(this, __eCProp___eCNameSpace__eC__containers__Array_minAllocSize) : (void)0, __eCPropM___eCNameSpace__eC__containers__Array_minAllocSize && __eCPropM___eCNameSpace__eC__containers__Array_minAllocSize->selfWatchable ? __eCNameSpace__eC__types__eInstance_FireSelfWatchers(this, __eCPropM___eCNameSpace__eC__containers__Array_minAllocSize) : (void)0;
}

void __eCMethod___eCNameSpace__eC__containers__Array_Free(struct __eCNameSpace__eC__types__Instance * this)
{
__attribute__((unused)) struct __eCNameSpace__eC__containers__Array * __eCPointer___eCNameSpace__eC__containers__Array = (struct __eCNameSpace__eC__containers__Array *)(this ? (((char *)this) + 0 + sizeof(struct __eCNameSpace__eC__types__Instance)) : 0);
int c;

for(c = 0; c < __eCPointer___eCNameSpace__eC__containers__Array->count; c++)
{
uint64 data = ((((((struct __eCNameSpace__eC__types__Instance * )(char * )this)->_class->templateArgs[0].__anon1.__anon1.dataTypeClass->type == 1) ? (uint64)(uintptr_t)(((unsigned char *)__eCPointer___eCNameSpace__eC__containers__Array->array) + (c) * ((struct __eCNameSpace__eC__types__Instance * )(char * )this)->_class->templateArgs[0].__anon1.__anon1.dataTypeClass->typeSize) : ((((struct __eCNameSpace__eC__types__Instance * )(char * )this)->_class->templateArgs[0].__anon1.__anon1.dataTypeClass->typeSize == 1) ? ((unsigned char *)__eCPointer___eCNameSpace__eC__containers__Array->array)[c] : ((((struct __eCNameSpace__eC__types__Instance * )(char * )this)->_class->templateArgs[0].__anon1.__anon1.dataTypeClass->typeSize == 2) ? ((unsigned short *)__eCPointer___eCNameSpace__eC__containers__Array->array)[c] : ((((struct __eCNameSpace__eC__types__Instance * )(char * )this)->_class->templateArgs[0].__anon1.__anon1.dataTypeClass->typeSize == 4) ? ((unsigned int *)__eCPointer___eCNameSpace__eC__containers__Array->array)[c] : (__eCPointer___eCNameSpace__eC__containers__Array->array)[c]))))));

(((void (* )(void *  _class, void *  data))((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[0].__anon1.__anon1.dataTypeClass->_vTbl[__eCVMethodID_class_OnFree])(((struct __eCNameSpace__eC__types__Instance * )(char * )this)->_class->templateArgs[0].__anon1.__anon1.dataTypeClass, ((void * )((uintptr_t)(data)))), data = 0);
}
(__eCNameSpace__eC__types__eSystem_Delete(__eCPointer___eCNameSpace__eC__containers__Array->array), __eCPointer___eCNameSpace__eC__containers__Array->array = 0);
__eCPointer___eCNameSpace__eC__containers__Array->count = 0;
__eCPointer___eCNameSpace__eC__containers__Array->minAllocSize = 0;
}

void __eCMethod___eCNameSpace__eC__containers__Array_Delete(struct __eCNameSpace__eC__types__Instance * this, struct __eCNameSpace__eC__containers__IteratorPointer * item)
{
__attribute__((unused)) struct __eCNameSpace__eC__containers__Array * __eCPointer___eCNameSpace__eC__containers__Array = (struct __eCNameSpace__eC__containers__Array *)(this ? (((char *)this) + 0 + sizeof(struct __eCNameSpace__eC__types__Instance)) : 0);
uint64 data = ((((((struct __eCNameSpace__eC__types__Instance * )(char * )this)->_class->templateArgs[0].__anon1.__anon1.dataTypeClass->type == 1) ? ((uint64)(uintptr_t)(uint64 * )item) : ((((struct __eCNameSpace__eC__types__Instance * )(char * )this)->_class->templateArgs[0].__anon1.__anon1.dataTypeClass->typeSize == 1) ? *((unsigned char *)(uint64 * )item) : ((((struct __eCNameSpace__eC__types__Instance * )(char * )this)->_class->templateArgs[0].__anon1.__anon1.dataTypeClass->typeSize == 2) ? *((unsigned short *)(uint64 * )item) : ((((struct __eCNameSpace__eC__types__Instance * )(char * )this)->_class->templateArgs[0].__anon1.__anon1.dataTypeClass->typeSize == 4) ? *((unsigned int *)(uint64 * )item) : *((uint64 *)item)))))));

(((void (* )(void *  _class, void *  data))((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[0].__anon1.__anon1.dataTypeClass->_vTbl[__eCVMethodID_class_OnFree])(((struct __eCNameSpace__eC__types__Instance * )(char * )this)->_class->templateArgs[0].__anon1.__anon1.dataTypeClass, ((void * )((uintptr_t)(data)))), data = 0);
(__extension__ ({
void (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, struct __eCNameSpace__eC__containers__IteratorPointer * it);

__internal_VirtualMethod = ((void (*)(struct __eCNameSpace__eC__types__Instance *, struct __eCNameSpace__eC__containers__IteratorPointer * it))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = this;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__containers__Array->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__containers__Container_Remove]);
__internal_VirtualMethod ? __internal_VirtualMethod(this, item) : (void)1;
}));
}

void __eCMethod___eCNameSpace__eC__containers__Array_Sort(struct __eCNameSpace__eC__types__Instance * this, unsigned int ascending)
{
__attribute__((unused)) struct __eCNameSpace__eC__containers__Array * __eCPointer___eCNameSpace__eC__containers__Array = (struct __eCNameSpace__eC__containers__Array *)(this ? (((char *)this) + 0 + sizeof(struct __eCNameSpace__eC__types__Instance)) : 0);
struct __eCNameSpace__eC__types__Class * Dclass = ((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[2].__anon1.__anon1.dataTypeClass;
unsigned int byRef = (Dclass->type == 1000 && !Dclass->byValueSystemClass) || Dclass->type == 2 || Dclass->type == 4 || Dclass->type == 3 || Dclass->type == 1;

__eCNameSpace__eC__containers___qsortrx(__eCPointer___eCNameSpace__eC__containers__Array->array, __eCPointer___eCNameSpace__eC__containers__Array->count, Dclass->typeSize, (void *)Dclass->_vTbl[__eCVMethodID_class_OnCompare], (((void *)0)), Dclass, !byRef, ascending);
}

void __eCMethod___eCNameSpace__eC__containers__Array_Copy(struct __eCNameSpace__eC__types__Instance * this, struct __eCNameSpace__eC__types__Instance * source)
{
__attribute__((unused)) struct __eCNameSpace__eC__containers__Array * __eCPointer___eCNameSpace__eC__containers__Array = (struct __eCNameSpace__eC__containers__Array *)(this ? (((char *)this) + 0 + sizeof(struct __eCNameSpace__eC__types__Instance)) : 0);

__eCPointer___eCNameSpace__eC__containers__Array->count = (__extension__ ({
int (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *);

__internal_VirtualMethod = ((int (*)(struct __eCNameSpace__eC__types__Instance *))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = source;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__containers__Container->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__containers__Container_GetCount]);
__internal_VirtualMethod ? __internal_VirtualMethod(source) : (int)1;
}));
if(__eCPointer___eCNameSpace__eC__containers__Array->count > __eCPointer___eCNameSpace__eC__containers__Array->minAllocSize)
{
if(!((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[0].__anon1.__anon1.dataTypeClass)
{
__eCNameSpace__eC__types__PrintLn(__eCClass_char__PTR_, "ERROR: Array::Copy() called with undefined type", (void *)0);
return ;
}
__eCPointer___eCNameSpace__eC__containers__Array->array = __eCNameSpace__eC__types__eSystem_Renew(__eCPointer___eCNameSpace__eC__containers__Array->array, ((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[0].__anon1.__anon1.dataTypeClass->typeSize * (__eCPointer___eCNameSpace__eC__containers__Array->count));
}
if((((struct __eCNameSpace__eC__types__Instance *)(char *)source)->_class == __eCClass___eCNameSpace__eC__containers__BuiltInContainer && (*((struct __eCNameSpace__eC__containers__BuiltInContainer *)source)).type->type != 1) || __eCNameSpace__eC__types__eClass_IsDerived(((struct __eCNameSpace__eC__types__Instance *)(char *)source)->_class, __eCClass___eCNameSpace__eC__containers__Array))
{
memcpy(__eCPointer___eCNameSpace__eC__containers__Array->array, ((struct __eCNameSpace__eC__containers__Array *)(((char *)((struct __eCNameSpace__eC__types__Instance *)source) + 0 + sizeof(struct __eCNameSpace__eC__types__Instance))))->array, __eCPointer___eCNameSpace__eC__containers__Array->count * ((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[0].__anon1.__anon1.dataTypeClass->typeSize);
}
else
{
struct __eCNameSpace__eC__containers__IteratorPointer * i;
int c;

for(c = 0, i = (__extension__ ({
struct __eCNameSpace__eC__containers__IteratorPointer * (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *);

__internal_VirtualMethod = ((struct __eCNameSpace__eC__containers__IteratorPointer * (*)(struct __eCNameSpace__eC__types__Instance *))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = source;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__containers__Container->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__containers__Container_GetFirst]);
__internal_VirtualMethod ? __internal_VirtualMethod(source) : (struct __eCNameSpace__eC__containers__IteratorPointer *)1;
})); i; i = (__extension__ ({
struct __eCNameSpace__eC__containers__IteratorPointer * (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, struct __eCNameSpace__eC__containers__IteratorPointer * pointer);

__internal_VirtualMethod = ((struct __eCNameSpace__eC__containers__IteratorPointer * (*)(struct __eCNameSpace__eC__types__Instance *, struct __eCNameSpace__eC__containers__IteratorPointer * pointer))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = source;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__containers__Container->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__containers__Container_GetNext]);
__internal_VirtualMethod ? __internal_VirtualMethod(source, i) : (struct __eCNameSpace__eC__containers__IteratorPointer *)1;
})), c++)
{
uint64 data = (__extension__ ({
uint64 (*  __internal_VirtualMethod)(struct __eCNameSpace__eC__types__Instance *, struct __eCNameSpace__eC__containers__IteratorPointer * pointer);

__internal_VirtualMethod = ((uint64 (*)(struct __eCNameSpace__eC__types__Instance *, struct __eCNameSpace__eC__containers__IteratorPointer * pointer))__extension__ ({
struct __eCNameSpace__eC__types__Instance * __internal_ClassInst = source;

__internal_ClassInst ? __internal_ClassInst->_vTbl : __eCClass___eCNameSpace__eC__containers__Container->_vTbl;
})[__eCVMethodID___eCNameSpace__eC__containers__Container_GetData]);
__internal_VirtualMethod ? __internal_VirtualMethod(source, i) : (uint64)1;
}));

(memcpy((char *)__eCPointer___eCNameSpace__eC__containers__Array->array + ((c) * ((struct __eCNameSpace__eC__types__Instance * )(char * )this)->_class->templateArgs[0].__anon1.__anon1.dataTypeClass->typeSize), (((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[0].__anon1.__anon1.dataTypeClass->type == 1) ? (char *)(uintptr_t)(data) : ((char *)&data + __ENDIAN_PAD(((struct __eCNameSpace__eC__types__Instance *)(char *)this)->_class->templateArgs[2].__anon1.__anon1.dataTypeClass->typeSize)), ((struct __eCNameSpace__eC__types__Instance * )(char * )this)->_class->templateArgs[0].__anon1.__anon1.dataTypeClass->typeSize));
}
}
}

void __eCUnregisterModule_Array(struct __eCNameSpace__eC__types__Instance * module)
{

__eCPropM___eCNameSpace__eC__containers__Array_size = (void *)0;
__eCPropM___eCNameSpace__eC__containers__Array_minAllocSize = (void *)0;
}

void __eCRegisterModule_Array(struct __eCNameSpace__eC__types__Instance * module)
{
struct __eCNameSpace__eC__types__Class __attribute__((unused)) * class;

class = __eCNameSpace__eC__types__eSystem_RegisterClass(1, "Array_ec}eC::containers::SortRData", 0, sizeof(struct __eCNameSpace__eC__containers__SortRData), 0, (void *)0, (void *)0, module, 3, 1);
if(((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application == ((struct __eCNameSpace__eC__types__Module *)(((char *)__thisModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->application && class)
__eCClass___eCNameSpace__eC__containers__SortRData = class;
__eCNameSpace__eC__types__eClass_AddDataMember(class, "arg", "void *", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "compare", "int (*)(void *, const void *, const void *)", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eSystem_RegisterFunction("eC::containers::qsortrx", "void eC::containers::qsortrx(void * base, uintsize nel, uintsize width, int (* compare)(void * arg, const void * a, const void * b), int (* optCompareArgLast)(const void * a, const void * b, void * arg), void * arg, bool deref, bool ascending)", __eCNameSpace__eC__containers__qsortrx, module, 1);
__eCNameSpace__eC__types__eSystem_RegisterFunction("eC::containers::qsortr", "void eC::containers::qsortr(void * base, uintsize nel, uintsize width, int (* compare)(void * arg, const void * a, const void * b), void * arg)", __eCNameSpace__eC__containers__qsortr, module, 1);
class = __eCNameSpace__eC__types__eSystem_RegisterClass(0, "eC::containers::Array", "eC::containers::Container", sizeof(struct __eCNameSpace__eC__containers__Array), 0, (void *)0, (void *)__eCDestructor___eCNameSpace__eC__containers__Array, module, 1, 1);
if(((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application == ((struct __eCNameSpace__eC__types__Module *)(((char *)__thisModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->application && class)
__eCClass___eCNameSpace__eC__containers__Array = class;
__eCNameSpace__eC__types__eClass_AddMethod(class, "OnUnserialize", 0, __eCMethod___eCNameSpace__eC__containers__Array_OnUnserialize, 1);
__eCNameSpace__eC__types__eClass_AddMethod(class, "GetFirst", 0, __eCMethod___eCNameSpace__eC__containers__Array_GetFirst, 1);
__eCNameSpace__eC__types__eClass_AddMethod(class, "GetLast", 0, __eCMethod___eCNameSpace__eC__containers__Array_GetLast, 1);
__eCNameSpace__eC__types__eClass_AddMethod(class, "GetPrev", 0, __eCMethod___eCNameSpace__eC__containers__Array_GetPrev, 1);
__eCNameSpace__eC__types__eClass_AddMethod(class, "GetNext", 0, __eCMethod___eCNameSpace__eC__containers__Array_GetNext, 1);
__eCNameSpace__eC__types__eClass_AddMethod(class, "GetData", 0, __eCMethod___eCNameSpace__eC__containers__Array_GetData, 1);
__eCNameSpace__eC__types__eClass_AddMethod(class, "SetData", 0, __eCMethod___eCNameSpace__eC__containers__Array_SetData, 1);
__eCNameSpace__eC__types__eClass_AddMethod(class, "GetAtPosition", 0, __eCMethod___eCNameSpace__eC__containers__Array_GetAtPosition, 1);
__eCNameSpace__eC__types__eClass_AddMethod(class, "Insert", 0, __eCMethod___eCNameSpace__eC__containers__Array_Insert, 1);
__eCNameSpace__eC__types__eClass_AddMethod(class, "Add", 0, __eCMethod___eCNameSpace__eC__containers__Array_Add, 1);
__eCNameSpace__eC__types__eClass_AddMethod(class, "Remove", 0, __eCMethod___eCNameSpace__eC__containers__Array_Remove, 1);
__eCNameSpace__eC__types__eClass_AddMethod(class, "Move", 0, __eCMethod___eCNameSpace__eC__containers__Array_Move, 1);
__eCNameSpace__eC__types__eClass_AddMethod(class, "RemoveAll", 0, __eCMethod___eCNameSpace__eC__containers__Array_RemoveAll, 1);
__eCNameSpace__eC__types__eClass_AddMethod(class, "Copy", 0, __eCMethod___eCNameSpace__eC__containers__Array_Copy, 1);
__eCNameSpace__eC__types__eClass_AddMethod(class, "GetCount", 0, __eCMethod___eCNameSpace__eC__containers__Array_GetCount, 1);
__eCNameSpace__eC__types__eClass_AddMethod(class, "Free", 0, __eCMethod___eCNameSpace__eC__containers__Array_Free, 1);
__eCNameSpace__eC__types__eClass_AddMethod(class, "Delete", 0, __eCMethod___eCNameSpace__eC__containers__Array_Delete, 1);
__eCNameSpace__eC__types__eClass_AddMethod(class, "Sort", 0, __eCMethod___eCNameSpace__eC__containers__Array_Sort, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "array", "T *", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "count", "uint", 4, 4, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "minAllocSize", "uint", 4, 4, 1);
__eCPropM___eCNameSpace__eC__containers__Array_size = __eCNameSpace__eC__types__eClass_AddProperty(class, "size", "uint", __eCProp___eCNameSpace__eC__containers__Array_Set_size, __eCProp___eCNameSpace__eC__containers__Array_Get_size, 1);
if(((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application == ((struct __eCNameSpace__eC__types__Module *)(((char *)__thisModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->application)
__eCProp___eCNameSpace__eC__containers__Array_size = __eCPropM___eCNameSpace__eC__containers__Array_size, __eCPropM___eCNameSpace__eC__containers__Array_size = (void *)0;
__eCPropM___eCNameSpace__eC__containers__Array_minAllocSize = __eCNameSpace__eC__types__eClass_AddProperty(class, "minAllocSize", "uint", __eCProp___eCNameSpace__eC__containers__Array_Set_minAllocSize, __eCProp___eCNameSpace__eC__containers__Array_Get_minAllocSize, 1);
if(((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application == ((struct __eCNameSpace__eC__types__Module *)(((char *)__thisModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->application)
__eCProp___eCNameSpace__eC__containers__Array_minAllocSize = __eCPropM___eCNameSpace__eC__containers__Array_minAllocSize, __eCPropM___eCNameSpace__eC__containers__Array_minAllocSize = (void *)0;
if(class)
class->fixed = (unsigned int)1;
}

