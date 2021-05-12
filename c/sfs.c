#include  <stdio.h>
#include  <string.h>
#define   MAX_LEN 10
#define   N 150
void SortString(char *ptr[], int n);
int main()
{
    int    i, n;
    char   *pStr[N];
    printf("How many countries?\n");
    scanf("%d", &n);
    getchar();
    printf("Input their names:\n");
    for(i=0;i<n;i++){
        pStr[i]=(char*)malloc(32);
    }
    for (i = 0; i < n; i++)
    {
        gets(pStr[i]);
     }
    SortString(pStr, n);
    printf("Sorted results:\n");
    for (i = 0; i <n; i++)
     {
        puts(pStr[i]);
     }
    return 0;
}

void SortString(char *ptr[], int n)
{
    int    i, j;
    char temp[32];
    for (i = 0; i < n; i++)
    {
        for (j = i+1; j < n; j++)
        {
            if (strcmp(ptr[j],ptr[i])<0)
            {
                strcpy(temp, ptr[i]);
                strcpy(ptr[i], ptr[j]);
                strcpy(ptr[j], temp);
            }
        }
    }
}
