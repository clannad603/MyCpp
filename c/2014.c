#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef struct student{
    char name[20];
    int core;
    int grade;
}STUDENT;
typedef struct link{
    STUDENT std;
    struct link* next;
}Link;
int Search(STUDENT a[],int n,char ne[]);
void SortByName(STUDENT a[],int n);
void SortByGrade(STUDENT a[],int n,int j);
int main(){
    Link* head,*p1,*p2;
    head = (Link*)malloc(sizeof(Link*));
    p1 = p2 = (Link*)malloc(sizeof(Link*));
    head ->next=p1;
    p1->std.core=10;

    p1->next=p2;
    p2->next =NULL;
    return 0;
}
int Search(STUDENT a[],int n,char ne[]){
    for(int i=0;i<n;i++){
        if(strcasecmp(a[i].name,ne)==0){
            return i;
        }else{
            continue;
        }
    }
}
void SortByName(STUDENT a[],int n){
    STUDENT std;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            if(strcasecmp(a[j].name,a[j+1].name)){
                std = a[j];
                a[j] = a[j+1];
                a[j+1] = std;
            }
        }
    }
}
