#include<stdio.h>
#include<string.h>
#define N 150
int main(){
    char s[100];
    char*p;
    p = s;
    int num;
    printf("Please enter a string:");
    gets(s);
    printf("the result of output:\n");
    while (*p)
    {
        if(*p>='0'&&*p<='9'){
            for(num = 0;*p>='0'&&*p<='9';p++){
                num = num*10+*p-'0';
            }
            printf("%10d\n" ,num);
        }else if(*p!='\0'&&*p<'0'||*p>'9'){
            p++;
        }
    }
    
    return 0 ;
}
