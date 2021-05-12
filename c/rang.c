#include<stdio.h>
#include<string.h>
void SortString(char *ptr[], int n);
int main(){
    char *pst[20];
    for(int i=0;i<8;i++){
        scanf("%s",pst[i]);
    }
    SortString(pst,8);
    for(int i=0;i<8;i++){
        printf("%s\n",pst[i]);
    }
    return 0;
}
void SortString(char *ptr[], int n)
{
    int    i, j;
    char* temp;
    for (i=0; i<n; i++)
    {
        for (j = i; j<n; j++)
        {
            if (strcmp(ptr[j],ptr[i])<0);
            {
                strcpy(temp,ptr[i]);
                strcpy(ptr[i],ptr[j]);
                strcpy(ptr[j],temp);
            }
        }
    }
}
