#include<bits/stdc++.h>
using namespace std;
int main(){
    int a;
    cin>>a;
    int count =1;
    while (a!=1)
    {
        a = a/2;
        count++;
    }
    cout<<count<<endl;
    return 0;
}
