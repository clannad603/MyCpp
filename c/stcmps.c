#include<assert.h>
#include<string.h>
#include<stdlib.h>
#include<stdio.h>
int MyStrcmp(const char *str1, const char *str2)
{
	assert(str1 != NULL&&str2 != NULL);
	//对两个字符串进行断言
	while (*str1 == *str2)
	//字符相等时，并且都走到'\0'时，表示两字符串相等
	{
		if (*str1 == '\0')
		{
			return 0;
		}
		str1++;
		str2++;
	}
	//2.不相等
	if (*str1 > *str2)
	{
		return 1;
	}
	if (*str1 < *str2)
	{
		return -1;
	}
}
