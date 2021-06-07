#include<bits/stdc++.h>
using namespace std;
int main(){
    string a;
    cin>>a;
    vector<int> s;
    int i=0;
    while (a[i]!='\0')
    {
       if(a[i]!='-'&&a[i]!='X'){
            s.push_back(a[i]-'0');
        }
        if(a[i]=='X'){
            s.push_back(10);
        }
        i++;
    }
    int c = a[i-1]-'0';
    char cd = a[i-1];
    if(c+'0'=='X'){
        cd = 'X';
    }
    int sum=0;
    for (int i = 0; i < s.size()-1; i++)
    {

        sum+=(i+1)*s[i];
    }

    int result = sum%11;
    char results=result+'0';
    if(result==10){
        results='X';
    }

    if(cd==results){
        cout<<"Right"<<endl;
    }else{
        a[i-1] = results;
        cout<<a<<endl;
    }
    return 0;
}
