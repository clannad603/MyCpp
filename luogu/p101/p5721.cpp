#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int sum=0;
    for (int i = 1; i <= n; i++)
    {
        for (int j= 0; j <= n-i; j++)
        {
            sum++;
            printf("%02d",sum);
        }
        printf("\n");
        
    }
    
    return 0;
}
