#include<bits/stdc++.h>
using namespace std;
int main(){
    int x;
    cin>>x;
    bool flag=0;
    if(x%400==0||x%4==0&&x%100!=0){
        flag =1;
    }
    cout<<flag<<endl;
    return 0;
}
