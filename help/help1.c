#include  <stdio.h>

void  MaxMinExchang(int *a,int n)
{
    int  maxValue = a[0], minValue = a[0], maxPos=0, minPos=0;
    int  i, temp;
    for (i=0; i<n; i++)
    {
        if (a[i] > maxValue)
        {
              maxValue = a[i];
              maxPos = i;
        }
         if (a[i]<minValue)
        {
            minValue = a[i];
            minPos = i;
        }
    }   
    temp = a[maxPos];
    a[maxPos]= a[minPos];
    a[minPos] = temp;
}
int main()
{
    int a[20], i, n;
    printf("Input n(n<=10):\n");
    scanf("%d",&n);
    printf("Input %d Numbers:\n", n);
    for (i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    MaxMinExchang(a, n);
    printf("After MaxMinExchange:\n");
    for (i = 0; i<n; i++)
    {
            printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}
