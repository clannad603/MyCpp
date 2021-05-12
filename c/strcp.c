#include<stdio.h>
#include<string.h>
#include<assert.h>

char* my_strcpy(char* str1, char* str2)
{
    assert(str2);//判断源地址是否为空；
    char* cur = str1;
    while (*str2 != '\0')
    {
        *str1 = *str2;
        str1++;
        str2++;
    }
    *str1 = '\0';
    return cur;
}
