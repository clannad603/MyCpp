#include<stdio.h>
typedef struct student{
    int schoolcode;
    char name[10];
    int grade;
}STUDENT;
int main(){
    STUDENT stus[4];
    int i,j;
    for(i=0;i<4;i++){
        printf("输入第%d个学生的信息：学号、姓名、成绩\n",i+1);
        scanf("%d %s %d",&stus[i].schoolcode,&stus[i].name,&stus[i].grade);
    }
    for(i=0;i<4;i++){
        for(j=i;j<4;j++){
            if(stus[i].grade<stus[j].grade){
                STUDENT temp=stus[i];
                stus[i]=stus[j];
                stus[j]=temp;
            }
        }
    }
    printf("排序后学生的信息为:\n");
    for(i=0;i<4;i++){
        printf("%d %s %d\n",stus[i].schoolcode,stus[i].name,stus[i].grade);
    }
}
