#include<stdio.h>
#include<string.h>
int Judger( char a[ ]);
int main(){
    char a[100];
    gets(a);
    if (Judger(a))
    {
        puts(a);
    }else{
        printf("No!");
    }
    
    return 0;
}
int Judger( char a[ ]){
    char b[100];
    int count=0;
    int i;
    char*p;
    p=a;
    char*s;
    s=b;
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
    if (strcmp(a,b)==0)
    {
        return 1;
    }else{
        return 0;
    }
    
}
