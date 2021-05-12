#include<bits/stdc++.h>
using namespace std;
int main(){
    float m,h;
    cin>>m>>h;
    float result;
    result = m/pow(h,2);
    if(result<18.5){
        cout<<"Underweight"<<endl;
    }else if(result<24)
    {
        cout<<"Normal"<<endl;
    }else
    {
        cout<<result<<endl;
        cout<<"Overweight"<<endl;
    }
    
    
    return 0;
}
