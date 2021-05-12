#include<bits/stdc++.h>
using namespace std;
int main(){
    int x;
    cin>>x;
    int a=0,b=0,c=0,d=0;

    if(x%2==0&&(x<=12&&x>4)){
        a =1;
    }
    if(!(x<=12&&x>4)&&x%2!=0){
        d=1;
    }else
    {
        b=1;
    }
    if(((x<=12&&x>4)&&x%2!=0)||(x%2==0&&(x<=4||x>12))){
        c =1;
    }
    cout<<a<<' '<<b<<" "<<c<<" "<<d<<endl;
    return 0;
}
