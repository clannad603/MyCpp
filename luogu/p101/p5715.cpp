#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> c;
    int a,b,d;
    cin>>a>>b>>d;
    c.push_back(a);
    c.push_back(b);
    c.push_back(d);
    sort(c.begin(),c.end());

       cout<<c[0]<<" "<<c[1]<<" "<<c[2]<<endl;

    
    return 0;
}
