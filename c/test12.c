#include <stdio.h>

int main() {
    int sum=0;
    int x;
    int q=1;
    scanf("%d",&x);
    for(int i=1;i<=x;i++){
        q *=i;
        sum+=q;
    }
    printf("%d",sum);
    return 0;
}
