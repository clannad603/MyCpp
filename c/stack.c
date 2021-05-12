#include<stdio.h>
#include<malloc.h>
#define N 5
typedef struct node
{
    int date;
    struct node* nodeNext;
}NODE;
void inStack(NODE*L,int x);
int outStack(NODE*L,int*x);
int main()
{
    int n;
    NODE* L;
    L=(NODE*)malloc(sizeof(NODE));
    L->nodeNext=NULL;
    int i;
    for(i= 0;i<5;i++)
    {
        printf("请输入要压栈的整数：\n");
        scanf("%d",&n);
        printf("Push %dth Data:%d\n",i,n);
        inStack(L,n);
    }
    for(i = 0;i<5;i++)
    {
       outStack(L,&n);
       printf("Pop %dth Data:%d\n",i,n);
    }
    return 0;
}
void inStack(NODE*L,int x)
{
    NODE*p=(NODE*)malloc(sizeof(NODE));
    p->nodeNext=NULL;
    p->date=x;
    p->nodeNext=L->nodeNext;
    L->nodeNext=p;
}
int outStack(NODE*L,int*x)
{
    NODE*p;
    if(L->nodeNext==NULL)
    {
        return 0;

    }
        p = L->nodeNext;
        *x = p->date;
        L->nodeNext = p->nodeNext;
        free(p);
    return 1;
}

