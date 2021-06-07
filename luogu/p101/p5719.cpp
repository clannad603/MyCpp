#include<bits/stdc++.h>
using namespace std;
int main(){
    int x;
    cin>>x;
    int k;
    cin>>k;
    vector<int> a;
    vector<int> b;
    for (int i = 1; i <= x; i++)
    {
        if(i%k==0){
            a.push_back(i);
        }else
        {
            b.push_back(i);
        }
        
    }
    double sumValue_a = accumulate(a.begin(),a.end(),0.0);
    double sumValue_b = accumulate(b.begin(),b.end(),0.0);
    double meanValue_a = sumValue_a/a.size();
    double meanValue_b = sumValue_b/b.size();
    cout<<fixed<<setprecision(1)<<meanValue_a<<" "<<meanValue_b<<endl;
    return 0;
}
