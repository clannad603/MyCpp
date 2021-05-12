#include <stdio.h>
float fun(int n);
int main()
{
    int n;
    printf("please input a number:");
    scanf("%d",&n);
    printf("%10.6f\n",fun(n));
    return 0;
}
float fun(int n)
{
    int i,j,t;
    float s=0;
    for(i=1;i<=n;i++)
    {
         t=0;
         for(j=1;j<=n;j++)
         {    
             t=t+j;
         }
         s=s+(float)1/t;
    }
    return s+1;
}
