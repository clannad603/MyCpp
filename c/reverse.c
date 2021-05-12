#include<string.h>
#include<stdio.h>
int main(){
    char word[100];
    char another[100];
    int count=0;
    int i;
    char*p;
    p=word;
    char*s;
    s=another;
    printf("请输入一个字符串：");
    scanf("%s",word);
    for(i=0;;i++){
        if(*(p+i)!='\0'){
            count++;
        }else{
            break;
        }
    }
    for ( i = 0; i <=count; i++)
    {
        *(s+i-1)=*(p+count-i);
    }
    *(s+count)='\0';
    printf("该字符串逆反后为%s！\n",another);
    return 0;
}
