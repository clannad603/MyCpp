#include<bits/stdc++.h>
using namespace std;
int main(){
    int x;
    vector<int> a;
    cin>>x;
    
    int i=0;
    a.push_back(x);
    while (x!=1)
    {
        int n;
        if(a[i]%2!=0){
           a.push_back(a[i]*3+1);
           n=a[i]*3+1;
        }else
        {
            a.push_back(a[i]/2);
            n = a[i]/2;
        }
        i++;
    if(n==1){
        break;
    }
    }
    if(x!=1){
           for (int j = i; j>=0; j--)
    {
       cout<<a[j]<<" ";
    }
    
    }else
    {
        cout<<1;
    }
    
 
    
    return 0;
}
