#include<bits/stdc++.h>
using namespace std;
stack<char> S;
int main(){
    int n, br;
    cin>>n>>br;
    int temp = n;
    cout<<n<<"=";
    while (temp)
    {
        if(temp%br>=0){
            if (temp%br<=9)
            {
                S.push('0'+temp%br);
            }else
            {
                S.push('A'+(temp%br-10));
            }
            temp /=br;
            
        }else
        {
             if (-br+temp%br<=9)
            {
                S.push('0'+(temp%br-br));
            }else
            {
                S.push('A'+(temp%br-br-10));
            }
            temp =temp /br+1;
            
        }
        
            
    }
while (!S.empty())
{
    cout<<S.top();
    S.pop();
}

cout<<"(base"<<br<<")"<<endl;
    
    return  0;
}
