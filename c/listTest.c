#include<stdio.h>
#include<stdlib.h>
#define N 6
typedef struct list
{
    int data;
    struct list* next;
}SLIST;
SLIST* createList(int*a);
void outList(SLIST*h);
void fun(SLIST*h,int x);

int main(){
    SLIST*head;
    int x;
    int a[100];
    int i;
    printf("输入数组6个元素的值。\n");
    for(i=0;i<N;i++)
    {
        scanf("%d",&a[i]);
    }
    head = createList(a);
    printf("此链表各个结点的数据域为：");
    outList(head);
    printf("输入要插入的数据x:");
    scanf("%d",&x);
    fun(head,x);
    printf("插入后链表各个结点的数据域为：");
    outList(head);
    return 0;
}

SLIST* createList(int*a)
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
           printf("%d ",p->data);
           p = p->next;
       } while (p!=NULL);
    printf("\n");
    
}
void fun(SLIST*h,int x)
{
    SLIST*p,*q,*s;
    //*s is the element who will be inserted node
    s=(SLIST*)malloc(sizeof(SLIST));
    s->data=x;
    //*h is the head of the list
    q = h;
    //*q is the head in this loop or the before of the s
    p=h->next;
    //p is the next element who is not null
    while (p!= NULL && x>p->data)
    {
       q = q->next;
       p = p->next;
       //loop as the same time means it will to find the suitalbe area to put the inserted element
    }
    s->next = p;
    q->next=s;
}
