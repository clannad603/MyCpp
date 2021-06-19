#include<bits/stdc++.h>
using namespace std;
int main(){
    int l;
    cin>>l;
    int a[l];
    int x;
    for (int i = 0; i <=l; i++)
    {
        a[i]=1;
    }
    
    cin>>x;
    int b[x][2];
    for (int  i = 0; i < x; i++)
    {
        cin>>b[i][0]>>b[i][1];
        for (int j = b[i][0]; j <= b[i][1]; j++)
        {
            a[j]=0;
        }
    }
    int count=0;
    for (int i = 0; i <=l; i++)
    {
   
        count+=a[i];
    }
    cout<<count;
    
    return 0;
}
