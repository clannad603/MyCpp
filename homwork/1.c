#include<stdio.h>
#include<stdlib.h>
#define N 10
typedef struct list
{
    char data;
    struct list* next;
}SLIST;
SLIST* createList(char*a);
void outList(SLIST*h);
void copyList(SLIST*h1,char* a);

int main(){
    SLIST*head;
    SLIST*head1;
    char a[10];
    char b[10];
    int i;
    printf("输入数组10个元素的值。\n");
    for(i=0;i<N;i++)
    {
        scanf("%c",&a[i]);
        getchar();
    }
    head = createList(a);
    copyList(head,b);
    head1 = createList(b);
    printf("此备份链表各个结点的数据域为：\n");
    outList(head1);
    return 0;
}

SLIST* createList(char*a)
{
    SLIST*h,*p,*q;
    int i;
    h=p=(SLIST*)malloc(sizeof(SLIST));
    for (i = 0;i < N;i++)
    {
        q=(SLIST*)malloc(sizeof(SLIST));
        q->data=a[i];
        p->next=q;
        p=q;
    }
    p->next=NULL;
    return h;
}
void outList(SLIST*h)
{
    //the head always be null
    //so the next is not null as the first element of the list
    SLIST*p;
    p=h->next;
       do
       {
           printf("%c ",p->data);
           printf("\n");
           p = p->next;
       } while (p!=NULL);
    printf("\n");
}
void copyList(SLIST*h1,char* a){
    SLIST*p;
    p=h1->next;
    int i=9;
       do
       {
           a[i]= p->data;
           p = p->next;
           i--;
       } while (p!=NULL);
}
