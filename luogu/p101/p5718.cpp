#include<bits/stdc++.h>
using namespace std;
int main(){
    int x;
    cin>>x;
    vector<int> a;
    for (int i = 0; i < x; i++)
    {
       int y;
       cin>>y;
       a.push_back(y);
    }
    sort(a.begin(),a.end());
    cout<<a[0]<<endl;
    
}
