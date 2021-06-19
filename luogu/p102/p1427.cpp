#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> a;
    int count =0;
    for (;;)
    {
        int x;
        cin>>x;
        if(x!=0){
            a.push_back(x);
            count++;
        }else
        {
            break;
        }
        
    }
    for (int i = count-1; i >=0; i--)
    {
        cout<<a[i]<<" ";
    }
    
}
