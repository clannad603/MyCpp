#include <stdio.h>
#include <stdlib.h>
int main()
{	  		   	  	
    char func[100];
    int num1,num2,out;
    unsigned char op;
    char *tmp = func;
    scanf("%s",func);
    while(*tmp)
    {	  		   	  	
        if(*tmp>'9'||*tmp<'0')
        {	  		   	  	
            if(*tmp == '+')
                op = 1;
            else if(*tmp == '-')
                op = 2;
            else if(*tmp == '*')
                op = 3;
            else if(*tmp == '/')
                op = 4;
            else
                return 0;
            *tmp = 0;
            tmp++;
            break;
        }
        tmp++;
    }
    num1 = atoi(func);
    num2 = atoi(tmp);
    switch(op)
    {	  		   	  	
        case 1:
            out = num1 + num2;break;
        case 2:
            out = num1 - num2;break;
        case 3:
            out = num1 * num2;break;
        case 4:
            out = num1 / num2;break;
        default:
            return 0;
    }
    printf("%d",out);
    return 1;
}	  		   
