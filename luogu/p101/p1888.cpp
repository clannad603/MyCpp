#include<bits/stdc++.h>
using namespace std;
int gcd(int m, int n)
{


    int r=m;
    while(r!=0)
    {
            r=m%n;
            m=n;
            n=r;         
    }
    return m;

}
int main(){
    vector<int> a;
    for (int i = 0; i < 3; i++)
    {
        int x;
        cin>>x;
        a.push_back(x);
    }
    sort(a.begin(),a.end());
    int g1;
    int x = a[0];
    int y = a[2];
    g1 = gcd(x,y);

    cout<<a[0]/g1<<"/"<<a[2]/g1<<endl;
    return 0;
}
