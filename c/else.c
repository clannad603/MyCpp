#include<stdio.h>
#include<math.h>
int main(){
    double x;
    double y;
    double s;
    printf("input x and y\n");
    scanf("%lf%lf",&x,&y);
    s = sqrt(x+2*y)-exp(3*x)+fabs(x);
    printf("%f",s);
    return 0;
}
