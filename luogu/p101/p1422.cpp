#include<bits/stdc++.h>
using namespace std;
int main(){
    int x;
    cin>>x;
    if(x<=150){
        cout<<fixed<<setprecision(1)<<x*0.4463<<endl;
    }else if(x<=400){
        cout<<fixed<<setprecision(1)<<150*0.4463+(x-150)*0.4663<<endl;
    }else{
        cout<<fixed<<setprecision(1)<<150*0.4463+250*0.4663+(x-400)*0.5663<<endl;
    }
    return 0;
}
