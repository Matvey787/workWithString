#include <stdio.h>
#include "../headers/stringFunc.h"

int main(){
    // check my_puts
    my_puts("Hello, world!");

    //check my_strchr
    char str[] = "Hello, world!";
    char* p_w = my_strchr(str, 'w');
    *p_w = 'm';
    printf("%s\n", str);

    //check my_strlen
    printf("%d\n", (int)my_strlen("Matvey"));

    //check my_strcpy
    char wr_str1[10];
    char r_str1[] = "Matvey";
    printf("%s\n", my_strcpy(wr_str1, (const char*)r_str1));

    //check my_strncpy
    char wr_str2[10];
    char r_str2[] = "Sasha";
    printf("%s\n", my_strncpy(wr_str2, r_str2, 3));
    return 0;
}