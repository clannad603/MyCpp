#include<bits/stdc++.h>
using namespace std;
int main(){
    int d;
    cin>>d;
    int n;
    cin>>n;
    int sum=0;
    for (int i = 0; i <n; i++)
    {
        if(d!=6 &&d!=7){
            sum+=250;
        }
        if(d==7) d=1;
        else d++;
        
        
    }
    cout<<sum<<endl;
    return 0;
}
