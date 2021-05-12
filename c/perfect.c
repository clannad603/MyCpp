#include<stdio.h>
#include<math.h>
int fun_perfect(int number)
{
	int i,sum=1;
	for(i=2;i*i<number;i++)
	{
		if(number%i==0)
		{
			sum+=i;
			if(i*i!=number)
			{
				sum+=number/i;
			}
		}
	}
	return sum==number;
}
int main()
{
    int i; 
    int n;
    printf(" input n\n");
    scanf("%d",&n);
	for(i=n;i>=2;i--)
	{
		if(fun_perfect(i)){
		printf("%d\n",i);
        break;}
	}
	return 0;
}

