#include<bits/stdc++.h>
using namespace std;
int main(){
    char a[100];
    int i=0;
    int count = 0;
    for (;;)
    {
        char x;
        cin>>x;
        if(x=='E'){
            break;
        }else
        {
            a[i]=x;
            count++;
        }
        i++;
    }
    string b;
    b =a;
    vector<string> st;
    int j=0;
    for (int i = 0,cs=10; i < count; i+=10,cs+=10)
    {
        string x;
        x = b.substr(i,cs);
        st.push_back(x);
        j++;
    }
    cout<<j<<endl;
    for (int i = 0; i < j; i++)
    {
        cout<<st[i]<<endl;
    }
    
    
    return 0;
}
