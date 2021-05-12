#include <stdio.h>
#include <stdlib.h>
#define SIZE sizeof(struct node)
struct node
{
    long num;
    float score;
    struct node *next;
};
int main()
{
    int n = 0;
    struct node *head = NULL, *p1, *p2,*p;
    p1 = p2 = (struct node*)malloc(SIZE);
    printf("Input %d node data:\n", n + 1);
    scanf("%ld%f", &p1->num, &p1->score);
    while (p1->num != 0)
    {   n++;
        if (n == 1){
            head = p1;
            }
        else{
            p2->next = p1;
               }
        p2 = p1;
        p1 = (struct node*)malloc(SIZE);
        printf("Input %d node data:\n", n + 1);
        scanf("%ld%f", &p1->num, &p1->score);
    }
    free(p1);
    p2->next=NULL;
    p = (struct node*)malloc(SIZE);
    printf("Prit list:\n");
    p = head;
    if (head != NULL)
    {  
        do
        {   
            printf("num:%ld\tscore:%.2f\n", p->num, p->score);
            p = p->next;
        } while (p != NULL);
    }
    return 0;
}
