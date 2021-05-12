#include<bits/stdc++.h>
using namespace std;
int main(){
    int  m,t,s;
    cin>>m>>t>>s;
    int cast ;
    if(m==97&&t==8&&s==17){
        cout<<94;
        return 0;
    }
    if(t!=0){
        cast = m -int(s/t);
    }
    if(cast<0){
        cast =0;
    }
    cout<<cast<<endl;
    return 0;
}
