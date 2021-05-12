#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    char name[100];
    char* p ;
    int i;
    p=name;
    printf("请输入你的姓名：");
    scanf("%s",name);
    for(i = strlen(name);i>0;i--){
        *(p+2*i)=*(p+i);
        *(p+2*i-1) = ' ' ;
    }
    puts(name);
}
