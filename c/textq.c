#include<stdio.h>
void swap(int* x,int*y);
int main(){
    int a=8,b=7;
    swap(&a,&b);
    printf("%d",b);
    return 0;
}
void swap(int* x,int*y){
    int temp ;
    temp= *x;
    *x=*y;
    *y=temp;
}
