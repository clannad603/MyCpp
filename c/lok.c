#include<stdio.h>
int main(){
    float litres[] = { 11.5, 11.21, 12.7, 12.6, 12.4 };
    float miles[] = { 471.5, 358.72, 495.3, 453.6, 421.6 };
    int mpl[5];
    float* a = litres;
    float* b = miles;
    int* c = mpl;
    while(*a!=0){
        *c=(int)(*b / *a);
         printf("%d",*c);
         a++;
         b++;
         c++;
    }
    while(*c!=0){
        printf("%d\t",*c);
        c++;
    }
    
    return 0;
}
