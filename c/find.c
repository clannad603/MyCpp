#include<stdio.h>
void max_min(float a[],int n,float* x,float* y);
void input(float a[],int n);
int main(){
    float max=1,min=1;
    int n;
    scanf("%d",&n);
    float a[n];
    input(a,n);
    max_min(a,n,&max,&min);
    printf("%.2f %.2f",max,min);
    return 0;
}
void input(float a[],int n){
    for(int i=0;i<n;i++){
        scanf("%f",&a[i]);
    }
}
void max_min(float a[],int n,float* max,float* min){
    *max=a[0];
    *min=a[0];
    for(int i=0;i<n;i++){
        if(a[i]>*max){
            *max =a[i];
        }
        if(a[i]<*min){
            *min=a[i];
        }
    }
}
