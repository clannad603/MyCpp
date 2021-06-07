#include<bits/stdc++.h>
using namespace std;
int getCount(int n,int c);
int main(){
    int x;
    int z;
    cin>>x>>z;
    int sum=0;
    for(int i=0;i<=x; i++)
    {
        sum+=getCount(i,z);
    }
    cout<<sum<<endl;
    return 0;
}
int getCount(int n,int c){
    vector<int> a;
    int count=0;
    while (n)
    {
        int b;
        b=n%10;
        a.push_back(b);
        n/=10;
    }
    for (int i = 0; i <a.size(); i++)
    {
        if(a[i]==c){
            count++;
        }
    }
    return count;
}
