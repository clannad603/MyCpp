#include  <math.h>
#include  <stdio.h>
int relop(int n);
int main()
{
    int n = 2,count = 1;
    double x;
    double sum , term;          
 
    printf("Input x: ");
    scanf("%lf", &x);     
 
    sum = x;
    term = x;                   
    do
    {
        if(n%2!=0){
            term = (double)pow(x,2*n-1)/relop(2*n-1);
            
        }else{
            term =-(double)pow(x,2*n-1)/relop(2*n-1);
           
        }
        sum = sum + term;           
        n++;
        count++;

    }while (fabs(term) >= pow(10,-5));
 
    printf("sin(x) = %lf, count = %d\n", sum, count);
    return 0;
}
int relop(int n){
    int sum = 1;
    for(int i =1; i<=n;i++){
        sum*=i;
    }
    return sum;
}
