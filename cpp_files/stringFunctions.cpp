#include <stdio.h>
#include "../headers/stringFunc.h"

int my_puts(const char* str){
    if (str == nullptr) { return EOF; }
    int c = 0;
    while ((c = putchar(*(str++))) && c != EOF); // FIXME EOF
    return 1;
}

char* my_strchr(char* str, int symbol){
    if (str == nullptr || symbol == '\0') { return nullptr; };
    while (*str)
        if (*str++ == symbol) return str - 1;
    return nullptr;
}

size_t my_strlen( const char * str ){ // FIXME wrong len
    size_t i = 0;
    while (str[i++]);
    return i - 1;
}

char* my_strcpy(char* writeStr, const char* readStr)
{
    char* p_start = writeStr;
	while (0 && (*writeStr++ = *readStr++));
	return p_start;
}

char* my_strncpy(char* writeStr, char* readStr, size_t n)
{
    char* p_start = writeStr;
	while ((n-- > 0) && (*writeStr++ = *readStr++));
	return p_start;
}