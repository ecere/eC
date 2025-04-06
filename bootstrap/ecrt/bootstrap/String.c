/* Code generated from eC source file: String.ec */
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

extern __attribute__ ((visibility("default"))) unsigned int ccUtf8ToUnicode(unsigned int b, unsigned int * state, unsigned int * retunicode)
{
unsigned int type;
static const unsigned char utf8d[] =
{
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 8, 8, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 10, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 4, 3, 3, 11, 6, 6, 6, 5, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 0, 12, 24, 36, 60, 96, 84, 12, 12, 12, 48, 72, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 0, 12, 12, 12, 12, 12, 0, 12, 0, 12, 12, 12, 24, 12, 12, 12, 12, 12, 24, 12, 24, 12, 12, 12, 12, 12, 12, 12, 12, 12, 24, 12, 12, 12, 12, 12, 24, 12, 12, 12, 12, 12, 12, 12, 24, 12, 12, 12, 12, 12, 12, 12, 12, 12, 36, 12, 36, 12, 12, 12, 36, 12, 12, 12, 12, 12, 36, 12, 36, 12, 12, 12, 36, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12
};

type = utf8d[b];
*retunicode = ((*state != 0) ? ((b & 0x3fu) | (*retunicode << 6)) : ((0xff >> type) & (b)));
*state = utf8d[256 + *state + type];
return *state;
}

extern int runtimePlatform;








static inline int __eCNameSpace__eC__types___UnescapeCString(char * d, const char * s, int len, unsigned int keepBS)
{
int j = 0, k = 0;
char ch;

while(j < len && (ch = s[j]))
{
switch(ch)
{
case '\\':
switch((ch = s[++j]))
{
case 'n':
d[k] = '\n';
break;
case 't':
d[k] = '\t';
break;
case 'a':
d[k] = '\a';
break;
case 'b':
d[k] = '\b';
break;
case 'f':
d[k] = '\f';
break;
case 'r':
d[k] = '\r';
break;
case 'v':
d[k] = '\v';
break;
case '\\':
d[k] = '\\';
break;
case '\"':
d[k] = '\"';
break;
case '\'':
d[k] = '\'';
break;
default:
d[k] = '\\';
d[k + (int)keepBS] = ch;
}
break;
default:
d[k] = ch;
}
j++, k++;
}
d[k] = '\0';
return k;
}

void __eCNameSpace__eC__types__ChangeCh(char * string, char ch1, char ch2)
{
int c;

for(c = 0; string[c]; c++)
if(string[c] == ch1)
string[c] = ch2;
}

void __eCNameSpace__eC__types__RepeatCh(char * string, int count, char ch)
{
int c;

for(c = 0; c < count; c++)
string[c] = ch;
string[c] = 0;
}

unsigned int __eCNameSpace__eC__types__GetString(const char ** buffer, char * string, int max)
{
int c;
char ch;
unsigned int quoted = 0;
unsigned int result = 1;

if(!* *buffer)
{
string[0] = 0;
return 0;
}
for(; ; )
{
if(!(ch = *((*buffer)++)))
result = 0;
if((ch != '\n') && (ch != '\r') && (ch != ' ') && (ch != ',') && (ch != '\t'))
break;
if(!*(*buffer))
break;
}
if(result)
{
for(c = 0; c < max - 1; c++)
{
if(!quoted && ((ch == '\n') || (ch == '\r') || (ch == ' ') || (ch == ',') || (ch == '\t')))
{
result = 1;
break;
}
if(ch == '\"')
{
quoted ^= (unsigned int)1;
c--;
}
else
string[c] = ch;
if(!(ch = *(*buffer)))
{
c++;
break;
}
(*buffer)++;
}
string[c] = 0;
}
return result;
}

struct __eCNameSpace__eC__types__ZString
{
char * _string;
int len;
int allocType;
int size;
int minSize;
int maxSize;
} eC_gcc_struct;

char * __eCNameSpace__eC__types__strchrmax(const char * s, int c, int max)
{
int i;
char ch;

for(i = 0; i < max && (ch = s[i]); i++)
if(ch == c)
return (char *)s + i;
return (((void *)0));
}

struct __eCNameSpace__eC__types__BTNode;

struct __eCNameSpace__eC__types__OldList
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

extern size_t strlen(const char * );

extern char *  strcpy(char * , const char * );

extern int strcmp(const char * , const char * );

extern void *  memmove(void * , const void * , size_t size);

extern char *  strncpy(char * , const char * , size_t n);

extern char *  strstr(const char * , const char * );

extern void *  memcpy(void * , const void * , size_t size);

extern int toupper(int);

extern char *  strcat(char * , const char * );

extern int sprintf(char * , const char * , ...);

extern int strcasecmp(const char * , const char * );

extern unsigned int isdigit(int);

extern int strncmp(const char * , const char * , size_t n);

extern int strncasecmp(const char * , const char * , size_t n);

extern int tolower(int);

extern int isalnum(int c);

extern void *  memset(void *  area, int value, size_t count);

extern char *  strchr(const char * , int);

extern int atoi(const char * );

extern unsigned long strtoul(const char *  nptr, char * *  endptr, int base);

extern int vsnprintf(char * , size_t, const char * , __builtin_va_list);

extern unsigned int __eCNameSpace__eC__i18n__UTF8GetChar(const char *  string, int *  numBytes);

struct __eCNameSpace__eC__types__DefinedExpression;

struct __eCNameSpace__eC__types__GlobalFunction;

struct __eCNameSpace__eC__types__BitMember;

int __eCNameSpace__eC__types__UnescapeCString(char * d, const char * s, int len)
{
return __eCNameSpace__eC__types___UnescapeCString(d, s, len, 0);
}

int __eCNameSpace__eC__types__UnescapeCStringLoose(char * d, const char * s, int len)
{
return __eCNameSpace__eC__types___UnescapeCString(d, s, len, 1);
}

unsigned int __eCNameSpace__eC__types__StripExtension(char * string)
{
int c;

for(c = strlen(string); c >= 0; c--)
if(string[c] == '.')
{
string[c] = '\0';
return 1;
}
else if(string[c] == '\\' || string[c] == '/')
break;
return 0;
}

char * __eCNameSpace__eC__types__GetExtension(const char * string, char * output)
{
int __simpleStruct0;
int c;
int len = strlen(string);
int limit = (__simpleStruct0 = len - (17), (0 > __simpleStruct0) ? 0 : __simpleStruct0);

output[0] = '\0';
for(c = len; c >= limit; c--)
{
char ch = string[c];

if(ch == '.')
{
strcpy(output, string + c + 1);
break;
}
else if(ch == '/' || ch == '\\')
break;
}
return output;
}

char * __eCNameSpace__eC__types__StripLastDirectory(const char * string, char * output)
{
int c;

if(runtimePlatform == 1 && !strcmp(string, "\\\\"))
{
strcpy(output, "/");
return output;
}
else
{
int len = strlen(string);

for(c = len - 2; c >= 0; c--)
if(string[c] == '/' || string[c] == '\\')
break;
else if(string[c] == '>' || (string[c] == ':' && c == 0))
{
c++;
break;
}
if((runtimePlatform == 1) ? (c >= 0) : (c > 0))
{
memmove(output, string, c);
if(c > 0)
{
if(runtimePlatform == 1 && c == 1 && output[0] == '\\' && output[1] == '\\')
output[2] = '\0';
else
output[c] = '\0';
}
else
strcpy(output, ((__runtimePlatform == 1) ? "\\" : "/"));
return output;
}
else
{
if(c == 0)
{
strcpy(output, ((__runtimePlatform == 1) ? "\\" : "/"));
return output;
}
else
{
strcpy(output, "");
return (((void *)0));
}
}
}
}

char * __eCNameSpace__eC__types__SplitDirectory(const char * string, char * part, char * rest)
{
int len = 0;
char ch;
int c = 0;

for(; (ch = string[c]) && (ch == '/' || ch == '\\'); c++)
;
if(c)
part[len++] = ((__runtimePlatform == 1) ? '\\' : '/');
else
{
for(; (ch = string[c]) && (ch != '/' && ch != '\\'); c++)
{
if(len < (274))
part[len++] = ch;
}
}
for(; (ch = string[c]) && (ch == '/' || ch == '\\'); c++)
;
memmove(rest, string + c, strlen(string + c) + 1);
for(c = strlen(rest); c >= 0; c--)
if(ch != '/' && ch != '\\')
break;
if(c > 0)
rest[c] = '\0';
part[len] = '\0';
return rest;
}

char * __eCNameSpace__eC__types__GetLastDirectory(const char * string, char * output)
{
int c;
int len = string ? strlen(string) : 0;

for(c = len - 2; c >= 0; c--)
if(string[c] == '/' || string[c] == '\\' || string[c] == ':' || string[c] == '>')
break;
c++;
if(c >= 0)
memmove(output, string + c, strlen(string + c) + 1);
else
output[0] = '\0';
len = strlen(output);
if(len > 1 && (output[len - 1] == '\\' || output[len - 1] == '/'))
output[len - 1] = '\0';
return output;
}

char * __eCNameSpace__eC__types__TrimLSpaces(const char * string, char * output)
{
int c;

for(c = 0; string[c] && string[c] == ' '; c++)
;
memmove(output, string + c, strlen(string + c) + 1);
return output;
}

char * __eCNameSpace__eC__types__TrimRSpaces(const char * string, char * output)
{
int c;

for(c = strlen(string) - 1; c >= 0 && string[c] == ' '; c--)
;
if(c >= 0)
{
memmove(output, string, c + 1);
output[c + 1] = '\0';
}
else
output[0] = '\0';
return output;
}

char * __eCNameSpace__eC__types__StripQuotes(const char * string, char * output)
{
int len;
const char * src = (string[0] == '\"') ? (string + 1) : string;

memmove(output, src, strlen(src) + 1);
len = strlen(output);
if(len && output[len - 1] == '\"')
output[len - 1] = '\0';
return output;
}

unsigned int __eCNameSpace__eC__types__SplitArchivePath(const char * fileName, char * archiveName, const char ** archiveFile)
{
if(fileName[0] == '<')
{
int c = strlen(fileName);

for(; c > 0 && fileName[c] != '>'; c--)
;
if(c > 0)
{
strncpy(archiveName, fileName + 1, c - 1);
archiveName[c - 1] = '\0';
*archiveFile = fileName + c + 1;
return 1;
}
}
else if(fileName[0] == ':')
{
strcpy(archiveName, ":");
*archiveFile = fileName + 1;
return 1;
}
return 0;
}

char * __eCNameSpace__eC__types__CopyString(const char * string)
{
if(string)
{
int len = strlen(string);
char * destination = __eCNameSpace__eC__types__eSystem_New(sizeof(char) * (len + 1));

if(destination)
memcpy(destination, string, len + 1);
return destination;
}
else
return (((void *)0));
}

void __eCNameSpace__eC__types__PrintSize(char * string, uint64 size, int prec)
{
if(size > 1024)
{
char format[8];

sprintf(format, "%%.0%df", prec);
if(size > 1024 * 1024 * 1024)
{
sprintf(string, format, (float)size / (float)((float)(float)(1024 * 1024 * 1024)));
strcat(string, " GB");
}
else if(size > 1024 * 1024)
{
sprintf(string, format, (float)size / (float)((float)(float)(1024 * 1024)));
strcat(string, " MB");
}
else
{
sprintf(string, format, (float)size / (float)1024);
strcat(string, " KB");
}
}
else
sprintf(string, "%d B", (unsigned int)size);
}

void __eCNameSpace__eC__types__PrintBigSize(char * string, double size, int prec)
{
if(size > (double)1024)
{
char format[8];

sprintf(format, "%%.0%df", prec);
if(size > 1024.0 * 1024.0 * 1024.0 * 1024.0)
{
sprintf(string, format, size / ((double)(double)(1024 * 1024) * 1024.0 * 1024.0));
strcat(string, " TB");
}
else if(size > 1024.0 * 1024.0 * 1024.0)
{
sprintf(string, format, size / (1024.0 * 1024.0 * 1024.0));
strcat(string, " GB");
}
else if(size > 1024.0 * 1024.0)
{
sprintf(string, format, size / (1024.0 * 1024.0));
strcat(string, " MB");
}
else
{
sprintf(string, format, size / 1024.0);
strcat(string, " KB");
}
}
else
sprintf(string, "%.0f B", size);
}

unsigned int __eCNameSpace__eC__types__ishexdigit(char x)
{
return (isdigit(x) || (x >= 'a' && x <= 'f') || (x >= 'A' && x <= 'F'));
}

double __eCNameSpace__eC__types__FloatFromString(const char * string)
{
int c, dig;
double dec = 0, res = 0;
int neg = 1;
char ch;

for(c = 0; string[c]; c++)
{
ch = string[c];
if(ch == ' ')
continue;
if(ch == '-')
{
if(neg == -1)
break;
neg = -1;
}
else if((ch == '.') && !dec)
dec = 10;
else if(isdigit(ch))
{
dig = ch - '0';
if(dec)
{
res += (double)dig / dec;
dec *= 10;
}
else
res = res * (double)10 + (double)dig;
}
else
break;
}
return (double)neg * res;
}

char * __eCNameSpace__eC__types__SearchString(const char * buffer, int start, const char * subStr, unsigned int matchCase, unsigned int matchWord)
{
if(buffer && subStr)
{
const char * ptr;
const char * strBuffer = buffer + start;
int subLen = strlen(subStr);
char beforeChar = start ? *(strBuffer - 1) : 0;
int (* strcompare)(const char *, const char *, size_t) = (void *)(matchCase ? (void *)(strncmp) : ((void *)(strncasecmp)));

for(ptr = strBuffer; *ptr; ptr++)
{
if(matchCase ? (*subStr == *ptr) : (tolower(*subStr) == tolower(*ptr)))
{
if(matchWord)
{
if(!strcompare(ptr, subStr, subLen) && (!((subStr[subLen - 1]) == '_' || isalnum((subStr[subLen - 1]))) || !((ptr[subLen]) == '_' || isalnum((ptr[subLen])))) && (!((subStr[0]) == '_' || isalnum((subStr[0]))) || !((beforeChar) == '_' || isalnum((beforeChar)))))
return (char *)ptr;
}
else
{
if(!strcompare(ptr, subStr, subLen))
return (char *)ptr;
}
}
beforeChar = ptr[0];
}
}
return (((void *)0));
}

char * __eCNameSpace__eC__types__RSearchString(const char * buffer, const char * subStr, int maxLen, unsigned int matchCase, unsigned int matchWord)
{
if(buffer && subStr)
{
int subLen = strlen(subStr);
const char * ptr1 = buffer + maxLen - subLen;
const char * ptr2 = ptr1 - 1;
int (* strcompare)(const char *, const char *, size_t) = (void *)(matchCase ? (void *)(strncmp) : ((void *)(strncasecmp)));

for(; ptr1 >= buffer; ptr1--, ptr2--)
{
if(tolower(*subStr) == tolower(*ptr1))
{
if(matchWord)
{
if(!strcompare(ptr1, subStr, subLen) && (!((subStr[subLen - 1]) == '_' || isalnum((subStr[subLen - 1]))) || !((ptr1[subLen]) == '_' || isalnum((ptr1[subLen])))) && (!((subStr[0]) == '_' || isalnum((subStr[0]))) || !((*ptr2) == '_' || isalnum((*ptr2)))))
return (char *)ptr1;
}
else
{
if(!strcompare(ptr1, subStr, subLen))
return (char *)ptr1;
}
}
}
}
return (((void *)0));
}

int __eCNameSpace__eC__types__EscapeCString(char * outString, int bufferLen, const char * s, unsigned int options)
{
size_t actualIndent = 3 * ((int)((options & 0xFFFF0) >> 4));
int d = 0, c = 0;
const char * string = s;
char ch;

if(!options)
options = (options & ~0x2) | (((unsigned int)(1)) << 1);
if(((unsigned int)((options & 0x4) >> 2)))
outString[d++] = '\"';
while(d + 2 < bufferLen)
{
ch = string[c++];
if(ch == '\"' && ((unsigned int)((options & 0x2) >> 1)))
outString[d++] = '\\', outString[d++] = '\"';
else if(ch == '\'' && ((unsigned int)((options & 0x1) >> 0)))
outString[d++] = '\\', outString[d++] = '\'';
else if(ch == '\\')
outString[d++] = '\\', outString[d++] = '\\';
else if(ch == '\t')
outString[d++] = '\\', outString[d++] = 't';
else if(ch == '\b')
outString[d++] = '\\', outString[d++] = 'b';
else if(ch == '\r')
outString[d++] = '\\', outString[d++] = 'r';
else if(ch == '\f')
outString[d++] = '\\', outString[d++] = 'f';
else if(ch == '\n')
{
outString[d++] = '\\', outString[d++] = 'n';
if(((unsigned int)((options & 0x8) >> 3)) && ((unsigned int)((options & 0x4) >> 2)))
{
outString[d++] = '\"';
outString[d++] = '\n';
memset(outString + d, ' ', actualIndent);
d += actualIndent;
outString[d++] = '\"';
}
}
else if(ch)
outString[d++] = ch;
else
break;
}
if(((unsigned int)((options & 0x4) >> 2)))
outString[d++] = '\"';
outString[d] = 0;
return d;
}

int __eCNameSpace__eC__types__Tokenize(char * string, int maxTokens, char * tokens[], unsigned int esc)
{
const char * escChars, * escCharsQuoted;
int count = 0;
unsigned int quoted = 0, escaped = 0;
char * start = (((void *)0)), * output = string;
char ch;

if(__runtimePlatform == 1)
{
escChars = " !\"%&'()+,;=[]^`{}~";
escCharsQuoted = "\"";
}
else
{
escChars = " !\"$&'()*:;<=>?[\\`{|";
escCharsQuoted = "\"()$";
}
for(; (ch = *string) && count < maxTokens; string++, output++)
{
unsigned int wasEscaped = escaped;

if(output != string)
*output = ch;
if(start)
{
if(escaped)
{
escaped = 0;
output--;
*output = ch;
}
else if(ch == '\"')
{
quoted ^= 1;
output--;
}
else if(ch == ' ' && !quoted)
{
tokens[count++] = start;
*output = '\0';
start = (((void *)0));
}
}
else if(ch != ' ')
{
if(ch == '\"')
{
quoted = 1;
start = output + 1;
}
else
start = output;
}
if(!wasEscaped && ch == '\\' && (esc == 1 || (esc == 2 && strchr(quoted ? escCharsQuoted : escChars, *(string + 1)))))
escaped = 1;
}
if(start && count < maxTokens)
{
tokens[count++] = start;
*output = '\0';
}
return count;
}

int __eCNameSpace__eC__types__TokenizeWith(char * string, int maxTokens, char * tokens[], const char * tokenizers, unsigned int escapeBackSlashes)
{
int count = 0;
unsigned int quoted = 0;
char * start = (((void *)0));
unsigned int escaped = 0;
char * output = string;
unsigned int quotedFromStart = 0;

for(; *string && count < maxTokens; string++, output++)
{
if(output != string)
*output = *string;
if(start)
{
if(escaped)
{
escaped = 0;
output--;
if(output != string)
*output = *string;
}
else if(escapeBackSlashes && *string == '\\')
escaped = 1;
else if(*string == '\"')
{
if(quoted)
{
if(quotedFromStart)
*output = '\0';
quotedFromStart = 0;
quoted = 0;
}
else
quoted = 1;
}
else if(strchr(tokenizers, *string) && !quoted)
{
tokens[count++] = start;
*output = '\0';
start = (((void *)0));
}
}
else if(!strchr(tokenizers, *string))
{
if(*string == '\"')
{
quotedFromStart = 1;
quoted = 1;
start = output + 1;
}
else
{
start = output;
if(*string == '\\' && escapeBackSlashes)
escaped = 1;
}
}
}
if(start && count < maxTokens)
{
tokens[count++] = start;
*output = '\0';
}
return count;
}

char * __eCNameSpace__eC__types__StripChars(char * string, const char * chars)
{
int i, j;
char ch;

for(i = 0, j = 0; (ch = string[i]); i++)
{
if(!strchr(chars, ch))
{
if(i != j)
string[j] = ch;
j++;
}
}
string[j] = 0;
return string;
}

void __eCNameSpace__eC__types__ChangeChars(char * string, const char * chars, char alt)
{
int c;

for(c = 0; string[c]; c++)
if(strchr(chars, string[c]))
string[c] = alt;
}

int __eCNameSpace__eC__types__GetValue(const char ** buffer)
{
char string[20];

__eCNameSpace__eC__types__GetString(buffer, string, 20);
return atoi(string);
}

unsigned int __eCNameSpace__eC__types__GetHexValue(const char ** buffer)
{
char string[20];

__eCNameSpace__eC__types__GetString(buffer, string, 20);
return (unsigned int)strtoul(string, (((void *)0)), 16);
}

unsigned int __eCNameSpace__eC__types__StringLikePattern(const char * string, const char * pattern)
{
unsigned int result = 1;
int wildcardPosition[300], stringPosition[300], currentWildcard = 0;
int i, j;
char chp;
unsigned int lastWasWildcard = 0;

for(i = 0, j = 0; (chp = pattern[i]); i++, j++)
{
char chs = string[j];

lastWasWildcard = 0;
if(chs && chp == '_')
{
int nb;

__eCNameSpace__eC__i18n__UTF8GetChar(string + j, &nb);
j += nb - 1;
}
else
{
if(chp == '%')
{
if(pattern[i + 1] == '%')
i++;
else
{
lastWasWildcard = 1;
if(chs && currentWildcard < 300)
{
wildcardPosition[currentWildcard] = i;
stringPosition[currentWildcard] = j;
currentWildcard++;
}
j--;
continue;
}
}
if(chs != chp || (!lastWasWildcard && currentWildcard && string[j + 1] && !pattern[i + 1]))
{
if(currentWildcard)
{
currentWildcard--;
i = wildcardPosition[currentWildcard] - 1;
j = stringPosition[currentWildcard];
}
else
{
if(!lastWasWildcard || pattern[i + 1])
result = 0;
break;
}
}
}
}
if(!lastWasWildcard && string[j])
result = 0;
return result;
}

char * __eCNameSpace__eC__types__ChangeExtension(const char * string, const char * ext, char * output)
{
if(string != output)
strcpy(output, string);
__eCNameSpace__eC__types__StripExtension(output);
if(ext[0])
strcat(output, ".");
strcat(output, ext);
return output;
}

unsigned int __eCNameSpace__eC__types__IsPathInsideOf(const char * path, const char * of)
{
if(!path[0] || !of[0])
return 0;
else
{
char ofPart[274], ofRest[797];
char pathPart[274], pathRest[797];

strcpy(ofRest, of);
strcpy(pathRest, path);
for(; ofRest[0] && pathRest[0]; )
{
__eCNameSpace__eC__types__SplitDirectory(ofRest, ofPart, ofRest);
__eCNameSpace__eC__types__SplitDirectory(pathRest, pathPart, pathRest);
if(((__runtimePlatform == 1) ? (strcasecmp) : strcmp)(pathPart, ofPart))
return 0;
}
if(!ofRest[0] && !pathRest[0])
return 0;
else if(!pathRest[0])
return 0;
return 1;
}
}

char * __eCNameSpace__eC__types__PathCatSlash(char * string, const char * addedPath)
{
unsigned int modified = 0;

if(addedPath)
{
char fileName[797] = "", archiveName[797] = "";
const char * file = (((void *)0));
int c = 0;
unsigned int isURL = 0;
unsigned int isArchive = __eCNameSpace__eC__types__SplitArchivePath(string, archiveName, &file);
char * urlFileName = (((void *)0));
char * protocolSymbol;

strcpy(fileName, isArchive ? file : string);
if(!isArchive)
{
protocolSymbol = (fileName[0] && fileName[0] != '.' && fileName[0] != '/' && fileName[0] != '\\' && fileName[1] != ':') ? strstr(fileName, "://") : (((void *)0));
if(protocolSymbol)
{
char * slash = strstr(protocolSymbol + 3, "/");

isURL = 1;
if(slash)
urlFileName = slash;
else
urlFileName = fileName + strlen(fileName);
}
}
protocolSymbol = (addedPath[0] && addedPath[0] != '.' && addedPath[0] != '/' && addedPath[0] != '\\' && addedPath[1] != ':') ? strstr(addedPath, "://") : (((void *)0));
if(protocolSymbol)
{
int len = protocolSymbol - addedPath + 3;

memcpy(fileName, addedPath, len);
fileName[len] = 0;
isURL = 1;
c = len;
}
else if(__runtimePlatform == 1)
{
if(addedPath[0] && addedPath[1] == ':' && addedPath[0] != '<')
{
fileName[0] = (char)toupper(addedPath[0]);
fileName[1] = ':';
fileName[2] = '\0';
c = 2;
modified = 1;
}
else if(addedPath[0] == '\\' && addedPath[1] == '\\')
{
fileName[0] = fileName[1] = '\\';
fileName[2] = '\0';
c = 2;
modified = 1;
}
}
if(!modified && isURL && (addedPath[0] == '\\' || addedPath[0] == '/'))
{
urlFileName[0] = '/';
urlFileName[1] = '\0';
}
else if(!modified && (addedPath[0] == '\\' || addedPath[0] == '/'))
{
if(__runtimePlatform == 1)
{
if(addedPath[0] == '/' && !addedPath[1])
{
fileName[0] = addedPath[0];
fileName[1] = '\0';
modified = 1;
}
else if(fileName[0] && fileName[1] == ':')
{
fileName[2] = '\0';
modified = 1;
}
else
{
fileName[0] = '\\';
fileName[1] = '\0';
modified = 1;
}
}
else
{
fileName[0] = '/';
fileName[1] = '\0';
modified = 1;
}
c = 1;
}
for(; addedPath[c]; )
{
char directory[4384];
int len = 0;
char ch;
int count;

for(; (ch = addedPath[c]) && (ch == '/' || ch == '\\'); c++)
;
for(; (ch = addedPath[c]) && (ch != '/' && ch != '\\'); c++)
{
if(isURL && ch == '?')
{
break;
}
if(len < (274))
directory[len++] = ch;
}
directory[len] = '\0';
for(count = len - 1; count >= 0 && (directory[count] == ' ' || directory[count] == '\t'); count--)
{
directory[count] = '\0';
len--;
}
if(len > 0)
{
modified = 1;
if(strstr(directory, "..") == directory && (!directory[2] || directory[2] == ((__runtimePlatform == 1) ? '\\' : '/') || directory[2] == '/'))
{
int strLen = strlen(fileName) - 1;

if(strLen > -1)
{
for(; strLen > -1 && (ch = fileName[strLen]) && (ch == '/' || ch == '\\'); strLen--)
;
for(; strLen > -1 && (ch = fileName[strLen]) && (ch != '/' && ch != '\\' && ch != ':'); strLen--)
;
for(; strLen > -1 && (ch = fileName[strLen]) && (ch == '/' || ch == '\\'); strLen--)
;
if(isURL)
{
int __simpleStruct0;

strLen = (__simpleStruct0 = urlFileName - fileName, (strLen > __simpleStruct0) ? strLen : __simpleStruct0);
}
if(!strcmp(fileName + strLen + 1, ".."))
{
strcat(fileName, "/");
strcat(fileName, "..");
}
else
{
if(__runtimePlatform == 1)
{
if(!strLen && fileName[0] == '\\' && fileName[1] == '\\')
{
if(!fileName[2])
return (((void *)0));
else
{
fileName[0] = '\\';
fileName[1] = '\\';
fileName[2] = '\0';
}
}
else
fileName[strLen + 1] = '\0';
}
else
{
fileName[strLen + 1] = '\0';
if(strLen < 0)
{
if(string[0] == '/')
{
fileName[0] = '/';
fileName[1] = '\0';
}
else
{
fileName[0] = '.';
fileName[1] = '/';
fileName[2] = '\0';
}
}
}
}
}
else
{
strcpy(fileName, "..");
}
}
else if(strcmp(directory, "."))
{
int strLen = strlen(fileName);
unsigned int notZeroLen = strLen > 0;

if(strLen > 0 && (fileName[strLen - 1] == '/' || fileName[strLen - 1] == '\\'))
strLen--;
if(notZeroLen)
fileName[strLen++] = '/';
fileName[strLen] = '\0';
if(strLen + strlen(directory) > (797) - 3)
return (((void *)0));
strcat(fileName, directory);
}
}
if(isURL && ch == '/')
strcat(fileName, "/");
if(isURL && ch == '?')
{
strcat(fileName, addedPath + c);
break;
}
}
if(archiveName[0])
sprintf(string, "<%s>%s", archiveName, fileName);
else
strcpy(string, fileName);
}
return modified ? string : (((void *)0));
}

char * __eCNameSpace__eC__types__PathCat(char * string, const char * addedPath)
{
unsigned int modified = 0;

if(addedPath)
{
char fileName[797] = "", archiveName[797] = "";
const char * file = (((void *)0));
int c = 0;
unsigned int isURL = 0;
unsigned int isArchive = __eCNameSpace__eC__types__SplitArchivePath(string, archiveName, &file);
char * urlFileName = (((void *)0));
char * protocolSymbol;

strcpy(fileName, isArchive ? file : string);
if(!isArchive)
{
protocolSymbol = (fileName[0] && fileName[0] != '.' && fileName[0] != '/' && fileName[0] != '\\' && fileName[1] != ':') ? strstr(fileName, "://") : (((void *)0));
if(protocolSymbol)
{
char * slash = strstr(protocolSymbol + 3, "/");

isURL = 1;
if(slash)
urlFileName = slash;
else
urlFileName = fileName + strlen(fileName);
}
}
protocolSymbol = (addedPath[0] && addedPath[0] != '.' && addedPath[0] != '/' && addedPath[0] != '\\' && addedPath[1] != ':') ? strstr(addedPath, "://") : (((void *)0));
if(protocolSymbol)
{
int len = protocolSymbol - addedPath + 3;

memcpy(fileName, addedPath, len);
fileName[len] = 0;
isURL = 1;
c = len;
}
else if(runtimePlatform == 1)
{
if(addedPath[0] && addedPath[1] == ':' && addedPath[0] != '<')
{
fileName[0] = (char)toupper(addedPath[0]);
fileName[1] = ':';
fileName[2] = '\0';
c = 2;
modified = 1;
}
else if(addedPath[0] == '\\' && addedPath[1] == '\\')
{
fileName[0] = fileName[1] = '\\';
fileName[2] = '\0';
c = 2;
modified = 1;
}
else if(fileName[0] == '/' && !archiveName[0] && strcmp(addedPath, "/"))
return (((void *)0));
}
if(!modified && isURL && (addedPath[0] == '\\' || addedPath[0] == '/'))
{
urlFileName[0] = '/';
urlFileName[1] = '\0';
}
else if(!modified && (addedPath[0] == '\\' || addedPath[0] == '/'))
{
if(runtimePlatform == 1)
{
if(addedPath[0] == '/' && !addedPath[1])
{
fileName[0] = addedPath[0];
fileName[1] = '\0';
modified = 1;
}
else if(fileName[0] && fileName[1] == ':')
{
fileName[2] = '\0';
modified = 1;
}
else
{
fileName[0] = '\\';
fileName[1] = '\0';
modified = 1;
}
}
else
{
fileName[0] = '/';
fileName[1] = '\0';
modified = 1;
}
c = 1;
}
for(; addedPath[c]; )
{
char directory[4384];
int len = 0;
char ch;
int count;

for(; (ch = addedPath[c]) && (ch == '/' || ch == '\\'); c++)
;
for(; (ch = addedPath[c]) && (ch != '/' && ch != '\\'); c++)
{
if(isURL && ch == '?')
{
break;
}
if(len < (274))
directory[len++] = ch;
}
directory[len] = '\0';
for(count = len - 1; count >= 0 && (directory[count] == ' ' || directory[count] == '\t'); count--)
{
directory[count] = '\0';
len--;
}
if(len > 0)
{
modified = 1;
if(strstr(directory, "..") == directory && (!directory[2] || directory[2] == ((__runtimePlatform == 1) ? '\\' : '/')))
{
int strLen = strlen(fileName) - 1;

if(strLen > -1)
{
unsigned int separator = 0;

for(; strLen > -1 && (ch = fileName[strLen]) && (ch == '/' || ch == '\\'); strLen--)
;
for(; strLen > -1 && (ch = fileName[strLen]) && (ch != '/' && ch != '\\' && ch != ':'); strLen--)
;
for(; strLen > -1 && (ch = fileName[strLen]) && (ch == '/' || ch == '\\'); strLen--)
separator = 1;
if(isURL)
{
int __simpleStruct0;

strLen = (__simpleStruct0 = urlFileName - fileName, (strLen > __simpleStruct0) ? strLen : __simpleStruct0);
}
if(!strcmp(fileName + strLen + (separator ? 2 : 1), ".."))
{
strcat(fileName, ((__runtimePlatform == 1) ? "\\" : "/"));
strcat(fileName, "..");
}
else
{
if(runtimePlatform == 1)
{
if(!strLen && fileName[0] == '\\' && fileName[1] == '\\')
{
if(!fileName[2])
return (((void *)0));
else
{
fileName[0] = '\\';
fileName[1] = '\\';
fileName[2] = '\0';
}
}
else
fileName[strLen + 1] = '\0';
}
else
{
fileName[strLen + 1] = '\0';
if(strLen < 0)
{
if(string[0] == '/')
{
fileName[0] = '/';
fileName[1] = '\0';
}
else
{
fileName[0] = '.';
fileName[1] = '/';
fileName[2] = '\0';
}
}
}
}
}
else
{
strcpy(fileName, "..");
}
}
else if(strcmp(directory, "."))
{
int strLen = strlen(fileName);
unsigned int notZeroLen = strLen > 0;

if(strLen > 0 && (fileName[strLen - 1] == '/' || fileName[strLen - 1] == '\\'))
strLen--;
if(notZeroLen)
{
if(isURL)
fileName[strLen++] = '/';
else
fileName[strLen++] = ((__runtimePlatform == 1) ? '\\' : '/');
}
fileName[strLen] = '\0';
if(strLen + strlen(directory) > (797) - 3)
return (((void *)0));
strcat(fileName, directory);
}
}
if(isURL && ch == '/')
strcat(fileName, "/");
if(isURL && ch == '?')
{
strcat(fileName, addedPath + c);
break;
}
}
if(archiveName[0])
sprintf(string, "<%s>%s", archiveName, fileName);
else
strcpy(string, fileName);
}
return modified ? string : (((void *)0));
}

char * __eCNameSpace__eC__types__MakePathRelative(const char * path, const char * to, char * destination)
{
int len;

if(!path[0])
memmove(destination, path, strlen(path) + 1);
else
{
char pathPart[4384], pathRest[797];
char toPart[4384], toRest[797];
unsigned int different = 0;

strcpy(pathRest, path);
strcpy(toRest, to);
destination[0] = '\0';
for(; toRest[0]; )
{
__eCNameSpace__eC__types__SplitDirectory(toRest, toPart, toRest);
if(!different)
__eCNameSpace__eC__types__SplitDirectory(pathRest, pathPart, pathRest);
if(different || ((__runtimePlatform == 1) ? (strcasecmp) : strcmp)(toPart, pathPart))
{
different = 1;
strcat(destination, "..");
strcat(destination, ((__runtimePlatform == 1) ? "\\" : "/"));
}
}
if(different)
__eCNameSpace__eC__types__PathCat(destination, pathPart);
for(; pathRest[0]; )
{
__eCNameSpace__eC__types__SplitDirectory(pathRest, pathPart, pathRest);
__eCNameSpace__eC__types__PathCat(destination, pathPart);
}
}
len = strlen(destination);
if(len > 1 && (destination[len - 1] == '/' || destination[len - 1] == '\\'))
destination[--len] = '\0';
return destination;
}

struct __eCNameSpace__eC__types__Property;

static __attribute__((unused)) struct __eCNameSpace__eC__types__Property * __eCProp___eCNameSpace__eC__types__ZString_string, * __eCPropM___eCNameSpace__eC__types__ZString_string;

static __attribute__((unused)) struct __eCNameSpace__eC__types__Property * __eCProp___eCNameSpace__eC__types__ZString_char__PTR_, * __eCPropM___eCNameSpace__eC__types__ZString_char__PTR_;

static __attribute__((unused)) struct __eCNameSpace__eC__types__Property * __eCProp___eCNameSpace__eC__types__ZString_String, * __eCPropM___eCNameSpace__eC__types__ZString_String;

struct __eCNameSpace__eC__types__Class;

struct __eCNameSpace__eC__types__Instance
{
void * *  _vTbl;
struct __eCNameSpace__eC__types__Class * _class;
int _refCount;
} eC_gcc_struct;

extern long long __eCNameSpace__eC__types__eClass_GetProperty(struct __eCNameSpace__eC__types__Class * _class, const char *  name);

extern void __eCNameSpace__eC__types__eClass_SetProperty(struct __eCNameSpace__eC__types__Class * _class, const char *  name, long long value);

extern struct __eCNameSpace__eC__types__BitMember * __eCNameSpace__eC__types__eClass_AddBitMember(struct __eCNameSpace__eC__types__Class * _class, const char *  name, const char *  type, int bitSize, int bitPos, int declMode);

extern void __eCNameSpace__eC__types__eEnum_AddFixedValue(struct __eCNameSpace__eC__types__Class * _class, const char *  string, long long value);

extern struct __eCNameSpace__eC__types__Property * __eCNameSpace__eC__types__eClass_AddProperty(struct __eCNameSpace__eC__types__Class * _class, const char *  name, const char *  dataType, void *  setStmt, void *  getStmt, int declMode);

extern void *  __eCNameSpace__eC__types__eInstance_New(struct __eCNameSpace__eC__types__Class * _class);

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

const char *  __eCProp___eCNameSpace__eC__types__ZString_Get_string(struct __eCNameSpace__eC__types__Instance * this);

void __eCProp___eCNameSpace__eC__types__ZString_Set_string(struct __eCNameSpace__eC__types__Instance * this, const char *  value);

extern void __eCNameSpace__eC__types__eInstance_DecRef(struct __eCNameSpace__eC__types__Instance * instance);

const char *  __eCProp___eCNameSpace__eC__types__ZString_Get_char__PTR_(struct __eCNameSpace__eC__types__Instance * this);

struct __eCNameSpace__eC__types__Instance * __eCProp___eCNameSpace__eC__types__ZString_Set_char__PTR_(const char *  value);

struct __eCNameSpace__eC__types__BinaryTree;

struct __eCNameSpace__eC__types__BinaryTree
{
struct __eCNameSpace__eC__types__BTNode * root;
int count;
int (*  CompareKey)(struct __eCNameSpace__eC__types__BinaryTree * tree, uintptr_t a, uintptr_t b);
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
struct __eCNameSpace__eC__types__OldList members;
struct __eCNameSpace__eC__types__BinaryTree membersAlpha;
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

extern struct __eCNameSpace__eC__types__DefinedExpression * __eCNameSpace__eC__types__eSystem_RegisterDefine(const char *  name, const char *  value, struct __eCNameSpace__eC__types__Instance * module, int declMode);

extern struct __eCNameSpace__eC__types__GlobalFunction * __eCNameSpace__eC__types__eSystem_RegisterFunction(const char *  name, const char *  type, void *  func, struct __eCNameSpace__eC__types__Instance * module, int declMode);

extern struct __eCNameSpace__eC__types__Class * __eCNameSpace__eC__types__eSystem_RegisterClass(int type, const char *  name, const char *  baseName, int size, int sizeClass, unsigned int (*  Constructor)(void * ), void (*  Destructor)(void * ), struct __eCNameSpace__eC__types__Instance * module, int declMode, int inheritanceAccess);

extern struct __eCNameSpace__eC__types__Instance * __thisModule;

struct __eCNameSpace__eC__types__NameSpace;

struct __eCNameSpace__eC__types__NameSpace
{
const char *  name;
struct __eCNameSpace__eC__types__NameSpace *  btParent;
struct __eCNameSpace__eC__types__NameSpace *  left;
struct __eCNameSpace__eC__types__NameSpace *  right;
int depth;
struct __eCNameSpace__eC__types__NameSpace *  parent;
struct __eCNameSpace__eC__types__BinaryTree nameSpaces;
struct __eCNameSpace__eC__types__BinaryTree classes;
struct __eCNameSpace__eC__types__BinaryTree defines;
struct __eCNameSpace__eC__types__BinaryTree functions;
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
struct __eCNameSpace__eC__types__BinaryTree methods;
struct __eCNameSpace__eC__types__BinaryTree members;
struct __eCNameSpace__eC__types__BinaryTree prop;
struct __eCNameSpace__eC__types__OldList membersAndProperties;
struct __eCNameSpace__eC__types__BinaryTree classProperties;
struct __eCNameSpace__eC__types__OldList derivatives;
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
struct __eCNameSpace__eC__types__OldList selfWatchers;
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
struct __eCNameSpace__eC__types__OldList delayedCPValues;
int inheritanceAccess;
const char *  fullName;
void *  symbol;
struct __eCNameSpace__eC__types__OldList conversions;
struct __eCNameSpace__eC__types__OldList templateParams;
struct __eCNameSpace__eC__types__ClassTemplateArgument *  templateArgs;
struct __eCNameSpace__eC__types__Class * templateClass;
struct __eCNameSpace__eC__types__OldList templatized;
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
struct __eCNameSpace__eC__types__OldList allModules;
char *  parsedCommand;
struct __eCNameSpace__eC__types__NameSpace systemNameSpace;
} eC_gcc_struct;

static struct __eCNameSpace__eC__types__Class * __eCClass___eCNameSpace__eC__types__EscapeCStringOptions;

static struct __eCNameSpace__eC__types__Class * __eCClass___eCNameSpace__eC__types__BackSlashEscaping;

static struct __eCNameSpace__eC__types__Class * __eCClass___eCNameSpace__eC__types__StringAllocType;

static struct __eCNameSpace__eC__types__Class * __eCClass___eCNameSpace__eC__types__ZString;

extern int __eCNameSpace__eC__types__PrintStdArgsToBuffer(char *  buffer, int maxLen, struct __eCNameSpace__eC__types__Class * class, const void * object, __builtin_va_list args);

extern struct __eCNameSpace__eC__types__Class * __eCClass___eCNameSpace__eC__types__Module;

struct __eCNameSpace__eC__types__Module
{
struct __eCNameSpace__eC__types__Instance * application;
struct __eCNameSpace__eC__types__OldList classes;
struct __eCNameSpace__eC__types__OldList defines;
struct __eCNameSpace__eC__types__OldList functions;
struct __eCNameSpace__eC__types__OldList modules;
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

unsigned int __eCConstructor___eCNameSpace__eC__types__ZString(struct __eCNameSpace__eC__types__Instance * this)
{
__attribute__((unused)) struct __eCNameSpace__eC__types__ZString * __eCPointer___eCNameSpace__eC__types__ZString = (struct __eCNameSpace__eC__types__ZString *)(this ? (((char *)this) + __eCClass___eCNameSpace__eC__types__ZString->offset) : 0);

{
__eCPointer___eCNameSpace__eC__types__ZString->maxSize = (((int)0x7fffffff));
}
return 1;
}

void __eCDestructor___eCNameSpace__eC__types__ZString(struct __eCNameSpace__eC__types__Instance * this)
{
__attribute__((unused)) struct __eCNameSpace__eC__types__ZString * __eCPointer___eCNameSpace__eC__types__ZString = (struct __eCNameSpace__eC__types__ZString *)(this ? (((char *)this) + __eCClass___eCNameSpace__eC__types__ZString->offset) : 0);

{
if(__eCPointer___eCNameSpace__eC__types__ZString->allocType == 2)
(__eCNameSpace__eC__types__eSystem_Delete(__eCPointer___eCNameSpace__eC__types__ZString->_string), __eCPointer___eCNameSpace__eC__types__ZString->_string = 0);
}
}

void __eCMethod___eCNameSpace__eC__types__ZString_copyString(struct __eCNameSpace__eC__types__Instance * this, const char * value, int newLen)
{
__attribute__((unused)) struct __eCNameSpace__eC__types__ZString * __eCPointer___eCNameSpace__eC__types__ZString = (struct __eCNameSpace__eC__types__ZString *)(this ? (((char *)this) + __eCClass___eCNameSpace__eC__types__ZString->offset) : 0);

if(__eCPointer___eCNameSpace__eC__types__ZString->allocType == 0)
{
__eCPointer___eCNameSpace__eC__types__ZString->size = 0;
__eCPointer___eCNameSpace__eC__types__ZString->_string = (((void *)0));
__eCPointer___eCNameSpace__eC__types__ZString->allocType = 2;
}
if(__eCPointer___eCNameSpace__eC__types__ZString->allocType == 2)
{
int newSize = newLen ? newLen + 1 : 1;

if(newSize != __eCPointer___eCNameSpace__eC__types__ZString->size)
{
if(newSize < __eCPointer___eCNameSpace__eC__types__ZString->minSize)
newSize = __eCPointer___eCNameSpace__eC__types__ZString->minSize;
else if(newSize > __eCPointer___eCNameSpace__eC__types__ZString->maxSize)
newSize = __eCPointer___eCNameSpace__eC__types__ZString->maxSize;
if(newSize && __eCPointer___eCNameSpace__eC__types__ZString->size)
__eCPointer___eCNameSpace__eC__types__ZString->_string = __eCNameSpace__eC__types__eSystem_Renew(__eCPointer___eCNameSpace__eC__types__ZString->_string, sizeof(char) * (newSize));
else if(newSize)
__eCPointer___eCNameSpace__eC__types__ZString->_string = __eCNameSpace__eC__types__eSystem_New(sizeof(char) * (newSize));
else
(__eCNameSpace__eC__types__eSystem_Delete(__eCPointer___eCNameSpace__eC__types__ZString->_string), __eCPointer___eCNameSpace__eC__types__ZString->_string = 0);
__eCPointer___eCNameSpace__eC__types__ZString->size = newSize;
}
}
if(newLen + 1 > __eCPointer___eCNameSpace__eC__types__ZString->size)
newLen = __eCPointer___eCNameSpace__eC__types__ZString->size - 1;
__eCPointer___eCNameSpace__eC__types__ZString->len = newLen;
if(value)
{
memcpy(__eCPointer___eCNameSpace__eC__types__ZString->_string, value, newLen);
__eCPointer___eCNameSpace__eC__types__ZString->_string[newLen] = 0;
}
}

const char * __eCMethod___eCNameSpace__eC__types__ZString_OnGetString(struct __eCNameSpace__eC__types__Class * class, struct __eCNameSpace__eC__types__Instance * this, char * tempString, void * fieldData, unsigned int * onType)
{
__attribute__((unused)) struct __eCNameSpace__eC__types__ZString * __eCPointer___eCNameSpace__eC__types__ZString = (struct __eCNameSpace__eC__types__ZString *)(this ? (((char *)this) + __eCClass___eCNameSpace__eC__types__ZString->offset) : 0);

return __eCPointer___eCNameSpace__eC__types__ZString->_string;
}

unsigned int __eCMethod___eCNameSpace__eC__types__ZString_OnGetDataFromString(struct __eCNameSpace__eC__types__Class * class, struct __eCNameSpace__eC__types__Instance ** this, const char * string)
{
__attribute__((unused)) struct __eCNameSpace__eC__types__ZString * __eCPointer___eCNameSpace__eC__types__ZString = (struct __eCNameSpace__eC__types__ZString *)(this ? (((char *)this) + __eCClass___eCNameSpace__eC__types__ZString->offset) : 0);

__eCProp___eCNameSpace__eC__types__ZString_Set_string((*this), (char *)string);
return 1;
}

const char *  __eCProp___eCNameSpace__eC__types__ZString_Get_string(struct __eCNameSpace__eC__types__Instance * this)
{
__attribute__((unused)) struct __eCNameSpace__eC__types__ZString * __eCPointer___eCNameSpace__eC__types__ZString = (struct __eCNameSpace__eC__types__ZString *)(this ? (((char *)this) + __eCClass___eCNameSpace__eC__types__ZString->offset) : 0);

return __eCPointer___eCNameSpace__eC__types__ZString->_string;
}

const char *  __eCProp___eCNameSpace__eC__types__ZString_Get_char__PTR_(struct __eCNameSpace__eC__types__Instance * this)
{
__attribute__((unused)) struct __eCNameSpace__eC__types__ZString * __eCPointer___eCNameSpace__eC__types__ZString = (struct __eCNameSpace__eC__types__ZString *)(this ? (((char *)this) + __eCClass___eCNameSpace__eC__types__ZString->offset) : 0);

return __eCPointer___eCNameSpace__eC__types__ZString->_string;
}

const char * __eCProp___eCNameSpace__eC__types__ZString_Get_String(struct __eCNameSpace__eC__types__Instance * this)
{
__attribute__((unused)) struct __eCNameSpace__eC__types__ZString * __eCPointer___eCNameSpace__eC__types__ZString = (struct __eCNameSpace__eC__types__ZString *)(this ? (((char *)this) + __eCClass___eCNameSpace__eC__types__ZString->offset) : 0);

return __eCPointer___eCNameSpace__eC__types__ZString->_string;
}

void __eCMethod___eCNameSpace__eC__types__ZString_concatf(struct __eCNameSpace__eC__types__Instance * this, const char * format, ...)
{
__attribute__((unused)) struct __eCNameSpace__eC__types__ZString * __eCPointer___eCNameSpace__eC__types__ZString = (struct __eCNameSpace__eC__types__ZString *)(this ? (((char *)this) + __eCClass___eCNameSpace__eC__types__ZString->offset) : 0);

if(format && __eCPointer___eCNameSpace__eC__types__ZString->allocType != 0)
{
int __simpleStruct0;
int addedLen, n;
va_list args;

if(__eCPointer___eCNameSpace__eC__types__ZString->size < __eCPointer___eCNameSpace__eC__types__ZString->minSize)
{
__eCPointer___eCNameSpace__eC__types__ZString->_string = __eCNameSpace__eC__types__eSystem_Renew(__eCPointer___eCNameSpace__eC__types__ZString->_string, sizeof(char) * (__eCPointer___eCNameSpace__eC__types__ZString->minSize));
__eCPointer___eCNameSpace__eC__types__ZString->size = __eCPointer___eCNameSpace__eC__types__ZString->minSize;
}
n = (__simpleStruct0 = __eCPointer___eCNameSpace__eC__types__ZString->size - 1 - __eCPointer___eCNameSpace__eC__types__ZString->len, (0 > __simpleStruct0) ? 0 : __simpleStruct0);
if(n < 64)
{
int __simpleStruct0;

__eCPointer___eCNameSpace__eC__types__ZString->size += 64 - n;
__eCPointer___eCNameSpace__eC__types__ZString->_string = __eCNameSpace__eC__types__eSystem_Renew(__eCPointer___eCNameSpace__eC__types__ZString->_string, sizeof(char) * (__eCPointer___eCNameSpace__eC__types__ZString->size));
n = (__simpleStruct0 = __eCPointer___eCNameSpace__eC__types__ZString->size - 1 - __eCPointer___eCNameSpace__eC__types__ZString->len, (0 > __simpleStruct0) ? 0 : __simpleStruct0);
}
while(1)
{
int __simpleStruct2;
int __simpleStruct1;
int __simpleStruct0;

__builtin_va_start(args, format);
addedLen = vsnprintf(__eCPointer___eCNameSpace__eC__types__ZString->_string + __eCPointer___eCNameSpace__eC__types__ZString->len, n, format, args);
if(addedLen >= 0 && addedLen < n)
break;
addedLen = (__simpleStruct1 = n + (__simpleStruct0 = __eCPointer___eCNameSpace__eC__types__ZString->size / 2, (1 > __simpleStruct0) ? 1 : __simpleStruct0), (__simpleStruct1 > addedLen) ? __simpleStruct1 : addedLen);
__eCPointer___eCNameSpace__eC__types__ZString->size += addedLen + 1 - n;
__eCPointer___eCNameSpace__eC__types__ZString->_string = __eCNameSpace__eC__types__eSystem_Renew(__eCPointer___eCNameSpace__eC__types__ZString->_string, sizeof(char) * (__eCPointer___eCNameSpace__eC__types__ZString->size));
n = (__simpleStruct2 = __eCPointer___eCNameSpace__eC__types__ZString->size - 1 - __eCPointer___eCNameSpace__eC__types__ZString->len, (0 > __simpleStruct2) ? 0 : __simpleStruct2);
}
if(addedLen > 0)
{
__eCPointer___eCNameSpace__eC__types__ZString->len += addedLen;
__eCPointer___eCNameSpace__eC__types__ZString->_string[__eCPointer___eCNameSpace__eC__types__ZString->len] = 0;
}
__builtin_va_end(args);
}
}

void __eCMethod___eCNameSpace__eC__types__ZString_concat(struct __eCNameSpace__eC__types__Instance * this, struct __eCNameSpace__eC__types__Instance * s)
{
__attribute__((unused)) struct __eCNameSpace__eC__types__ZString * __eCPointer___eCNameSpace__eC__types__ZString = (struct __eCNameSpace__eC__types__ZString *)(this ? (((char *)this) + __eCClass___eCNameSpace__eC__types__ZString->offset) : 0);

if(s && __eCPointer___eCNameSpace__eC__types__ZString->allocType != 0)
{
int addedLen = ((struct __eCNameSpace__eC__types__ZString *)(((char *)s + __eCClass___eCNameSpace__eC__types__ZString->offset)))->len;
int newLen = __eCPointer___eCNameSpace__eC__types__ZString->len + addedLen;

if(__eCPointer___eCNameSpace__eC__types__ZString->allocType == 2 && newLen + 1 > __eCPointer___eCNameSpace__eC__types__ZString->size)
{
int newSize = newLen + 1;

if(newSize > __eCPointer___eCNameSpace__eC__types__ZString->maxSize)
newSize = __eCPointer___eCNameSpace__eC__types__ZString->maxSize;
if(newSize > __eCPointer___eCNameSpace__eC__types__ZString->size)
{
__eCPointer___eCNameSpace__eC__types__ZString->_string = __eCNameSpace__eC__types__eSystem_Renew(__eCPointer___eCNameSpace__eC__types__ZString->_string, sizeof(char) * (newSize));
__eCPointer___eCNameSpace__eC__types__ZString->size = newSize;
}
}
if(newLen + 1 > __eCPointer___eCNameSpace__eC__types__ZString->size)
addedLen = __eCPointer___eCNameSpace__eC__types__ZString->size - 1 - __eCPointer___eCNameSpace__eC__types__ZString->len;
if(addedLen > 0)
{
memcpy(__eCPointer___eCNameSpace__eC__types__ZString->_string + __eCPointer___eCNameSpace__eC__types__ZString->len, ((struct __eCNameSpace__eC__types__ZString *)(((char *)s + __eCClass___eCNameSpace__eC__types__ZString->offset)))->_string, addedLen);
__eCPointer___eCNameSpace__eC__types__ZString->len += addedLen;
}
__eCPointer___eCNameSpace__eC__types__ZString->_string[__eCPointer___eCNameSpace__eC__types__ZString->len] = 0;
if(((struct __eCNameSpace__eC__types__ZString *)(((char *)s + __eCClass___eCNameSpace__eC__types__ZString->offset)))->allocType == 0)
(__eCNameSpace__eC__types__eInstance_DecRef(s), s = 0);
}
}

void __eCMethod___eCNameSpace__eC__types__ZString_concatn(struct __eCNameSpace__eC__types__Instance * this, struct __eCNameSpace__eC__types__Instance * s, int l)
{
__attribute__((unused)) struct __eCNameSpace__eC__types__ZString * __eCPointer___eCNameSpace__eC__types__ZString = (struct __eCNameSpace__eC__types__ZString *)(this ? (((char *)this) + __eCClass___eCNameSpace__eC__types__ZString->offset) : 0);

if(s && __eCPointer___eCNameSpace__eC__types__ZString->allocType != 0)
{
int addedLen = l;
int newLen = __eCPointer___eCNameSpace__eC__types__ZString->len + addedLen;

if(__eCPointer___eCNameSpace__eC__types__ZString->allocType == 2 && newLen + 1 > __eCPointer___eCNameSpace__eC__types__ZString->size)
{
int newSize = newLen + 1;

if(newSize > __eCPointer___eCNameSpace__eC__types__ZString->maxSize)
newSize = __eCPointer___eCNameSpace__eC__types__ZString->maxSize;
if(newSize > __eCPointer___eCNameSpace__eC__types__ZString->size)
{
__eCPointer___eCNameSpace__eC__types__ZString->_string = __eCNameSpace__eC__types__eSystem_Renew(__eCPointer___eCNameSpace__eC__types__ZString->_string, sizeof(char) * (newSize));
__eCPointer___eCNameSpace__eC__types__ZString->size = newSize;
}
}
if(newLen + 1 > __eCPointer___eCNameSpace__eC__types__ZString->size)
addedLen = __eCPointer___eCNameSpace__eC__types__ZString->size - 1 - __eCPointer___eCNameSpace__eC__types__ZString->len;
if(addedLen > 0)
{
memcpy(__eCPointer___eCNameSpace__eC__types__ZString->_string + __eCPointer___eCNameSpace__eC__types__ZString->len, ((struct __eCNameSpace__eC__types__ZString *)(((char *)s + __eCClass___eCNameSpace__eC__types__ZString->offset)))->_string, addedLen);
__eCPointer___eCNameSpace__eC__types__ZString->len += addedLen;
}
__eCPointer___eCNameSpace__eC__types__ZString->_string[__eCPointer___eCNameSpace__eC__types__ZString->len] = 0;
if(((struct __eCNameSpace__eC__types__ZString *)(((char *)s + __eCClass___eCNameSpace__eC__types__ZString->offset)))->allocType == 0)
(__eCNameSpace__eC__types__eInstance_DecRef(s), s = 0);
}
}

struct __eCNameSpace__eC__types__Instance * __eCProp___eCNameSpace__eC__types__ZString_Set_char__PTR_(const char *  value)
{
return __extension__ ({
struct __eCNameSpace__eC__types__Instance * __eCInstance1 = __eCNameSpace__eC__types__eInstance_New(__eCClass___eCNameSpace__eC__types__ZString);

((struct __eCNameSpace__eC__types__ZString *)(((char *)__eCInstance1 + __eCClass___eCNameSpace__eC__types__ZString->offset)))->len = value ? strlen(value) : 0, ((struct __eCNameSpace__eC__types__ZString *)(((char *)__eCInstance1 + __eCClass___eCNameSpace__eC__types__ZString->offset)))->_string = (char *)value, ((struct __eCNameSpace__eC__types__ZString *)(((char *)__eCInstance1 + __eCClass___eCNameSpace__eC__types__ZString->offset)))->allocType = 0, __eCInstance1;
});
}

struct __eCNameSpace__eC__types__Instance * __eCProp___eCNameSpace__eC__types__ZString_Set_String(const char * value)
{
return __extension__ ({
struct __eCNameSpace__eC__types__Instance * __eCInstance1 = __eCNameSpace__eC__types__eInstance_New(__eCClass___eCNameSpace__eC__types__ZString);

((struct __eCNameSpace__eC__types__ZString *)(((char *)__eCInstance1 + __eCClass___eCNameSpace__eC__types__ZString->offset)))->len = value ? strlen(value) : 0, ((struct __eCNameSpace__eC__types__ZString *)(((char *)__eCInstance1 + __eCClass___eCNameSpace__eC__types__ZString->offset)))->_string = (char *)value, ((struct __eCNameSpace__eC__types__ZString *)(((char *)__eCInstance1 + __eCClass___eCNameSpace__eC__types__ZString->offset)))->allocType = 0, __eCInstance1;
});
}

void __eCUnregisterModule_String(struct __eCNameSpace__eC__types__Instance * module)
{

__eCPropM___eCNameSpace__eC__types__ZString_string = (void *)0;
}

void __eCProp___eCNameSpace__eC__types__ZString_Set_string(struct __eCNameSpace__eC__types__Instance * this, const char *  value)
{
__attribute__((unused)) struct __eCNameSpace__eC__types__ZString * __eCPointer___eCNameSpace__eC__types__ZString = (struct __eCNameSpace__eC__types__ZString *)(this ? (((char *)this) + __eCClass___eCNameSpace__eC__types__ZString->offset) : 0);

__eCMethod___eCNameSpace__eC__types__ZString_copyString(this, value, value ? strlen(value) : 0);
__eCProp___eCNameSpace__eC__types__ZString_string && __eCProp___eCNameSpace__eC__types__ZString_string->selfWatchable ? __eCNameSpace__eC__types__eInstance_FireSelfWatchers(this, __eCProp___eCNameSpace__eC__types__ZString_string) : (void)0, __eCPropM___eCNameSpace__eC__types__ZString_string && __eCPropM___eCNameSpace__eC__types__ZString_string->selfWatchable ? __eCNameSpace__eC__types__eInstance_FireSelfWatchers(this, __eCPropM___eCNameSpace__eC__types__ZString_string) : (void)0;
}

void __eCMethod___eCNameSpace__eC__types__ZString_copy(struct __eCNameSpace__eC__types__Instance * this, struct __eCNameSpace__eC__types__Instance * s)
{
__attribute__((unused)) struct __eCNameSpace__eC__types__ZString * __eCPointer___eCNameSpace__eC__types__ZString = (struct __eCNameSpace__eC__types__ZString *)(this ? (((char *)this) + __eCClass___eCNameSpace__eC__types__ZString->offset) : 0);

__eCMethod___eCNameSpace__eC__types__ZString_copyString(this, ((struct __eCNameSpace__eC__types__ZString *)(((char *)s + __eCClass___eCNameSpace__eC__types__ZString->offset)))->_string, ((struct __eCNameSpace__eC__types__ZString *)(((char *)s + __eCClass___eCNameSpace__eC__types__ZString->offset)))->len);
}

void __eCMethod___eCNameSpace__eC__types__ZString_concatx(struct __eCNameSpace__eC__types__Instance * this, struct __eCNameSpace__eC__types__Class * class, const void * object, ...)
{
__attribute__((unused)) struct __eCNameSpace__eC__types__ZString * __eCPointer___eCNameSpace__eC__types__ZString = (struct __eCNameSpace__eC__types__ZString *)(this ? (((char *)this) + __eCClass___eCNameSpace__eC__types__ZString->offset) : 0);

if(__eCPointer___eCNameSpace__eC__types__ZString->allocType != 0)
{
char string[1025];
va_list args;

__builtin_va_start(args, object);
__eCNameSpace__eC__types__PrintStdArgsToBuffer(string, sizeof (string), class, object, args);
__eCMethod___eCNameSpace__eC__types__ZString_concat(this, __eCProp___eCNameSpace__eC__types__ZString_Set_char__PTR_(string));
__builtin_va_end(args);
}
}

void __eCRegisterModule_String(struct __eCNameSpace__eC__types__Instance * module)
{
struct __eCNameSpace__eC__types__Class __attribute__((unused)) * class;

__eCNameSpace__eC__types__eSystem_RegisterDefine("eC::types::DIR_SEP", "(__runtimePlatform == win32) ? '\\\\' : '/'", module, 4);
__eCNameSpace__eC__types__eSystem_RegisterDefine("eC::types::DIR_SEPS", "(__runtimePlatform == win32) ? \"\\\\\" : \"/\"", module, 4);
__eCNameSpace__eC__types__eSystem_RegisterDefine("eC::types::MAX_F_STRING", "1025", module, 4);
__eCNameSpace__eC__types__eSystem_RegisterDefine("eC::types::MAX_EXTENSION", "17", module, 4);
__eCNameSpace__eC__types__eSystem_RegisterDefine("eC::types::MAX_FILENAME", "274", module, 4);
__eCNameSpace__eC__types__eSystem_RegisterDefine("eC::types::MAX_DIRECTORY", "534", module, 4);
__eCNameSpace__eC__types__eSystem_RegisterDefine("eC::types::MAX_LOCATION", "797", module, 4);
__eCNameSpace__eC__types__eSystem_RegisterFunction("eC::types::GetExtension", "char * eC::types::GetExtension(const char * string, char * output)", __eCNameSpace__eC__types__GetExtension, module, 4);
__eCNameSpace__eC__types__eSystem_RegisterFunction("eC::types::StripLastDirectory", "char * eC::types::StripLastDirectory(const char * string, char * output)", __eCNameSpace__eC__types__StripLastDirectory, module, 4);
__eCNameSpace__eC__types__eSystem_RegisterFunction("eC::types::SplitDirectory", "char * eC::types::SplitDirectory(const char * string, char * part, char * rest)", __eCNameSpace__eC__types__SplitDirectory, module, 4);
__eCNameSpace__eC__types__eSystem_RegisterFunction("eC::types::GetLastDirectory", "char * eC::types::GetLastDirectory(const char * string, char * output)", __eCNameSpace__eC__types__GetLastDirectory, module, 4);
__eCNameSpace__eC__types__eSystem_RegisterFunction("eC::types::SplitArchivePath", "bool eC::types::SplitArchivePath(const char * fileName, char * archiveName, const char * * archiveFile)", __eCNameSpace__eC__types__SplitArchivePath, module, 4);
__eCNameSpace__eC__types__eSystem_RegisterFunction("eC::types::PathCatSlash", "char * eC::types::PathCatSlash(char * string, const char * addedPath)", __eCNameSpace__eC__types__PathCatSlash, module, 4);
__eCNameSpace__eC__types__eSystem_RegisterFunction("eC::types::PathCat", "char * eC::types::PathCat(char * string, const char * addedPath)", __eCNameSpace__eC__types__PathCat, module, 4);
__eCNameSpace__eC__types__eSystem_RegisterFunction("eC::types::MakePathRelative", "char * eC::types::MakePathRelative(const char * path, const char * to, char * destination)", __eCNameSpace__eC__types__MakePathRelative, module, 4);
__eCNameSpace__eC__types__eSystem_RegisterFunction("eC::types::StripExtension", "bool eC::types::StripExtension(char * string)", __eCNameSpace__eC__types__StripExtension, module, 4);
__eCNameSpace__eC__types__eSystem_RegisterFunction("eC::types::ChangeExtension", "char * eC::types::ChangeExtension(const char * string, const char * ext, char * output)", __eCNameSpace__eC__types__ChangeExtension, module, 4);
__eCNameSpace__eC__types__eSystem_RegisterFunction("eC::types::IsPathInsideOf", "bool eC::types::IsPathInsideOf(const char * path, const char * of)", __eCNameSpace__eC__types__IsPathInsideOf, module, 4);
__eCNameSpace__eC__types__eSystem_RegisterFunction("eC::types::PrintSize", "void eC::types::PrintSize(char * string, uint64 size, int prec)", __eCNameSpace__eC__types__PrintSize, module, 4);
__eCNameSpace__eC__types__eSystem_RegisterFunction("eC::types::PrintBigSize", "void eC::types::PrintBigSize(char * string, double size, int prec)", __eCNameSpace__eC__types__PrintBigSize, module, 4);
__eCNameSpace__eC__types__eSystem_RegisterFunction("eC::types::ishexdigit", "bool eC::types::ishexdigit(char x)", __eCNameSpace__eC__types__ishexdigit, module, 4);
__eCNameSpace__eC__types__eSystem_RegisterFunction("eC::types::SearchString", "char * eC::types::SearchString(const char * buffer, int start, const char * subStr, bool matchCase, bool matchWord)", __eCNameSpace__eC__types__SearchString, module, 4);
__eCNameSpace__eC__types__eSystem_RegisterFunction("eC::types::RSearchString", "char * eC::types::RSearchString(const char * buffer, const char * subStr, int maxLen, bool matchCase, bool matchWord)", __eCNameSpace__eC__types__RSearchString, module, 4);
__eCNameSpace__eC__types__eSystem_RegisterFunction("eC::types::UnescapeCString", "int eC::types::UnescapeCString(char * d, const char * s, int len)", __eCNameSpace__eC__types__UnescapeCString, module, 4);
__eCNameSpace__eC__types__eSystem_RegisterFunction("eC::types::UnescapeCStringLoose", "int eC::types::UnescapeCStringLoose(char * d, const char * s, int len)", __eCNameSpace__eC__types__UnescapeCStringLoose, module, 4);
class = __eCNameSpace__eC__types__eSystem_RegisterClass(2, "eC::types::EscapeCStringOptions", "uint", 0, 0, (void *)0, (void *)0, module, 4, 1);
if(((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application == ((struct __eCNameSpace__eC__types__Module *)(((char *)__thisModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->application && class)
__eCClass___eCNameSpace__eC__types__EscapeCStringOptions = class;
__eCNameSpace__eC__types__eClass_AddBitMember(class, "escapeSingleQuote", "bool", 1, 0, 1);
__eCNameSpace__eC__types__eClass_AddBitMember(class, "escapeDoubleQuotes", "bool", 1, 1, 1);
__eCNameSpace__eC__types__eClass_AddBitMember(class, "writeQuotes", "bool", 1, 2, 1);
__eCNameSpace__eC__types__eClass_AddBitMember(class, "multiLine", "bool", 1, 3, 1);
__eCNameSpace__eC__types__eClass_AddBitMember(class, "indent", "int", 16, 4, 1);
__eCNameSpace__eC__types__eSystem_RegisterFunction("eC::types::EscapeCString", "int eC::types::EscapeCString(String outString, int bufferLen, const String s, eC::types::EscapeCStringOptions options)", __eCNameSpace__eC__types__EscapeCString, module, 4);
class = __eCNameSpace__eC__types__eSystem_RegisterClass(4, "eC::types::BackSlashEscaping", "bool", 0, 0, (void *)0, (void *)0, module, 4, 1);
if(((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application == ((struct __eCNameSpace__eC__types__Module *)(((char *)__thisModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->application && class)
__eCClass___eCNameSpace__eC__types__BackSlashEscaping = class;
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "forArgsPassing", 2);
__eCNameSpace__eC__types__eSystem_RegisterFunction("eC::types::Tokenize", "int eC::types::Tokenize(char * string, int maxTokens, char * tokens[], eC::types::BackSlashEscaping esc)", __eCNameSpace__eC__types__Tokenize, module, 4);
__eCNameSpace__eC__types__eSystem_RegisterFunction("eC::types::TokenizeWith", "int eC::types::TokenizeWith(char * string, int maxTokens, char * tokens[], const char * tokenizers, bool escapeBackSlashes)", __eCNameSpace__eC__types__TokenizeWith, module, 4);
__eCNameSpace__eC__types__eSystem_RegisterFunction("eC::types::TrimLSpaces", "char * eC::types::TrimLSpaces(const char * string, char * output)", __eCNameSpace__eC__types__TrimLSpaces, module, 4);
__eCNameSpace__eC__types__eSystem_RegisterFunction("eC::types::TrimRSpaces", "char * eC::types::TrimRSpaces(const char * string, char * output)", __eCNameSpace__eC__types__TrimRSpaces, module, 4);
__eCNameSpace__eC__types__eSystem_RegisterFunction("eC::types::StripChars", "char * eC::types::StripChars(String string, const String chars)", __eCNameSpace__eC__types__StripChars, module, 4);
__eCNameSpace__eC__types__eSystem_RegisterFunction("eC::types::ChangeCh", "void eC::types::ChangeCh(char * string, char ch1, char ch2)", __eCNameSpace__eC__types__ChangeCh, module, 4);
__eCNameSpace__eC__types__eSystem_RegisterFunction("eC::types::ChangeChars", "void eC::types::ChangeChars(char * string, const char * chars, char alt)", __eCNameSpace__eC__types__ChangeChars, module, 4);
__eCNameSpace__eC__types__eSystem_RegisterFunction("eC::types::RepeatCh", "void eC::types::RepeatCh(char * string, int count, char ch)", __eCNameSpace__eC__types__RepeatCh, module, 4);
__eCNameSpace__eC__types__eSystem_RegisterFunction("eC::types::CopyString", "char * eC::types::CopyString(const char * string)", __eCNameSpace__eC__types__CopyString, module, 4);
__eCNameSpace__eC__types__eSystem_RegisterFunction("eC::types::GetString", "bool eC::types::GetString(const char * * buffer, char * string, int max)", __eCNameSpace__eC__types__GetString, module, 4);
__eCNameSpace__eC__types__eSystem_RegisterFunction("eC::types::GetValue", "int eC::types::GetValue(const char * * buffer)", __eCNameSpace__eC__types__GetValue, module, 4);
__eCNameSpace__eC__types__eSystem_RegisterFunction("eC::types::GetHexValue", "uint eC::types::GetHexValue(const char * * buffer)", __eCNameSpace__eC__types__GetHexValue, module, 4);
__eCNameSpace__eC__types__eSystem_RegisterFunction("eC::types::StripQuotes", "char * eC::types::StripQuotes(const char * string, char * output)", __eCNameSpace__eC__types__StripQuotes, module, 4);
__eCNameSpace__eC__types__eSystem_RegisterFunction("eC::types::FloatFromString", "double eC::types::FloatFromString(const char * string)", __eCNameSpace__eC__types__FloatFromString, module, 4);
class = __eCNameSpace__eC__types__eSystem_RegisterClass(4, "eC::types::StringAllocType", 0, 0, 0, (void *)0, (void *)0, module, 4, 1);
if(((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application == ((struct __eCNameSpace__eC__types__Module *)(((char *)__thisModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->application && class)
__eCClass___eCNameSpace__eC__types__StringAllocType = class;
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "pointer", 0);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "stack", 1);
__eCNameSpace__eC__types__eEnum_AddFixedValue(class, "heap", 2);
class = __eCNameSpace__eC__types__eSystem_RegisterClass(0, "eC::types::ZString", 0, sizeof(struct __eCNameSpace__eC__types__ZString), 0, (void *)__eCConstructor___eCNameSpace__eC__types__ZString, (void *)__eCDestructor___eCNameSpace__eC__types__ZString, module, 4, 1);
if(((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application == ((struct __eCNameSpace__eC__types__Module *)(((char *)__thisModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->application && class)
__eCClass___eCNameSpace__eC__types__ZString = class;
__eCNameSpace__eC__types__eClass_AddMethod(class, "OnGetString", 0, __eCMethod___eCNameSpace__eC__types__ZString_OnGetString, 1);
__eCNameSpace__eC__types__eClass_AddMethod(class, "OnGetDataFromString", 0, __eCMethod___eCNameSpace__eC__types__ZString_OnGetDataFromString, 1);
__eCNameSpace__eC__types__eClass_AddMethod(class, "concat", "void concat(eC::types::ZString s)", __eCMethod___eCNameSpace__eC__types__ZString_concat, 1);
__eCNameSpace__eC__types__eClass_AddMethod(class, "concatf", "void concatf(const char * format, ...)", __eCMethod___eCNameSpace__eC__types__ZString_concatf, 1);
__eCNameSpace__eC__types__eClass_AddMethod(class, "concatn", "void concatn(eC::types::ZString s, int l)", __eCMethod___eCNameSpace__eC__types__ZString_concatn, 1);
__eCNameSpace__eC__types__eClass_AddMethod(class, "concatx", "void concatx(const typed_object object, ...)", __eCMethod___eCNameSpace__eC__types__ZString_concatx, 1);
__eCNameSpace__eC__types__eClass_AddMethod(class, "copy", "void copy(eC::types::ZString s)", __eCMethod___eCNameSpace__eC__types__ZString_copy, 1);
__eCNameSpace__eC__types__eClass_AddMethod(class, "copyString", "void copyString(const char * value, int newLen)", __eCMethod___eCNameSpace__eC__types__ZString_copyString, 1);
__eCProp___eCNameSpace__eC__types__ZString_char__PTR_ = __eCNameSpace__eC__types__eClass_AddProperty(class, 0, "const char *", __eCProp___eCNameSpace__eC__types__ZString_Set_char__PTR_, __eCProp___eCNameSpace__eC__types__ZString_Get_char__PTR_, 1);
__eCProp___eCNameSpace__eC__types__ZString_String = __eCNameSpace__eC__types__eClass_AddProperty(class, 0, "const String", __eCProp___eCNameSpace__eC__types__ZString_Set_String, __eCProp___eCNameSpace__eC__types__ZString_Get_String, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "_string", "char *", sizeof(void *), 0xF000F000, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "len", "int", 4, 4, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "allocType", "eC::types::StringAllocType", 4, 4, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "size", "int", 4, 4, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "minSize", "int", 4, 4, 1);
__eCNameSpace__eC__types__eClass_AddDataMember(class, "maxSize", "int", 4, 4, 1);
__eCPropM___eCNameSpace__eC__types__ZString_string = __eCNameSpace__eC__types__eClass_AddProperty(class, "string", "const char *", __eCProp___eCNameSpace__eC__types__ZString_Set_string, __eCProp___eCNameSpace__eC__types__ZString_Get_string, 1);
if(((struct __eCNameSpace__eC__types__Module *)(((char *)module + sizeof(struct __eCNameSpace__eC__types__Instance))))->application == ((struct __eCNameSpace__eC__types__Module *)(((char *)__thisModule + sizeof(struct __eCNameSpace__eC__types__Instance))))->application)
__eCProp___eCNameSpace__eC__types__ZString_string = __eCPropM___eCNameSpace__eC__types__ZString_string, __eCPropM___eCNameSpace__eC__types__ZString_string = (void *)0;
__eCNameSpace__eC__types__eSystem_RegisterFunction("eC::types::strchrmax", "char * eC::types::strchrmax(const char * s, int c, int max)", __eCNameSpace__eC__types__strchrmax, module, 4);
__eCNameSpace__eC__types__eSystem_RegisterFunction("eC::types::StringLikePattern", "bool eC::types::StringLikePattern(const String string, const String pattern)", __eCNameSpace__eC__types__StringLikePattern, module, 4);
}

