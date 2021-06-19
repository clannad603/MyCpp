#include<stdio.h>
#include<stdlib.h>

typedef struct student
{
    int id;
    int score;
    struct student* next;
}NODE;
NODE* create(int*a,int *b);
void outList(NODE*h);
void fun(NODE*h, int x);
int sd_s;
int main(){
    NODE*head;
    int x;
    int a[100];
    int b[100];
    int i;
    printf("输入班级人数。\n");
    int sd;
    scanf("%d",&sd);
    sd_s=sd;
    for(i=0;i<sd;i++)
    {
        printf("请输入第%d个同学的信息\n",i);
        scanf("%d %d",&b[i],&a[i]);
    }
    head = create(a,b);
    printf("此链表各个结点的数据域为：");
    outList(head);
    printf("输入要删除的数据x: ");
    scanf("%d",&x);
    fun(head,x);
    printf("删除后链表各个结点的数据域为：");
    outList(head);
    return 0;
}

NODE* create(int*a,int *b)
{
    NODE*h,*p,*q;
    int i;
    h=p=(NODE*)malloc(sizeof(NODE));
    for (i = 0;i < sd_s;i++)
    {
        q=(NODE*)malloc(sizeof(NODE));
        q->id=b[i];
        q->score=a[i];
        p->next=q;
        p=q;
    }
    p->next=NULL;
    return h;
}
void outList(NODE*h)
{
    //the head always be null
    //so the next is not null as the first element of the student
    NODE*p;
    p=h->next;
    do
    {
        printf("%d %d\n",p->id,p->score);
        p = p->next;
    } while (p!=NULL);
    printf("\n");

}
void fun(NODE*h, int x)
{
    int flag=1;
    NODE*p,*q;
    q = h;
    p=h->next;
    while (p!= NULL )
    {
        if (p->id==x){
            q->next = p->next;
            free(p);
            flag =0;
            break;
        } else{
            q = q->next;
            p = p->next;
        }

    }
    if(flag==1){
        printf("can't find\n");
    }else{
        printf("succeed in delete\n");
    }

}
