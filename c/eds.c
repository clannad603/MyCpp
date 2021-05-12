#include <stdio.h>
void  Squeeze(char *s, char c);
int main()
{
    char a[80];
    char c;
    char *s;
    s=a;
    scanf("%s\n",a);
    scanf("%c",&c);
    Squeeze(s,c);
    printf("%s\n",s);
}
void  Squeeze(char *s, char c)
{
    int i,j;
    for (i=j=0; *(s+i) !='\0'; i++)
    {
        if (*(s+i) == c)
        {
         continue;
        }else{
            *(s+j) = *(s+i); 
            j++;
        }
        
    }
      *(s+j) = '\0';
}
