#include<bits/stdc++.h>
using namespace std;
int x;
int tochage(int n,int x){
    int m=0;
    while (n>0)
    {
        m =x*m+n%x;
        n/=x;
    }
    return m;
}
bool isRight(int n){
    return (tochage(n,x)==n)?true:false;
}
int main(){
    int num;
    int count=0;
    cin>>x;
    cin>>num;
    while ((!isRight(num))&&count<=30)
    {   
     
       num+=tochage(num,x);
       count++;
    }
    if(count>30)
    cout<<"Impossible!"<<endl;
    else
    cout<<"STEP="<<count<<endl;
    return 0;
}
