#ifndef STRINGFUNC
#define STRINGFUNC
#include <stdio.h>
int my_puts(const char* str);
char* my_strchr(char* str, int symbol);
size_t my_strlen(const char* str);
char* my_strcpy(char* writeStr, const char* readStr);
char* my_strncpy(char* writeStr, char* readStr, size_t n);

#endif
