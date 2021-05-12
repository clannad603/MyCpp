#include<bits/stdc++.h>
using namespace std;
struct happyDay
{
   int day;
   int happy;
};
bool toSort(happyDay a,happyDay b){
    return (a.happy>b.happy);
}
int main(){
    vector<happyDay> c;
    for (int i = 1; i < 8; i++)
    {
       happyDay x;
       x.day=i;
       c.push_back(x);
    }
    for (int i = 0; i < c.size(); i++)
    {
        int x,y;
        cin>>x>>y;
        if(x+y>8){
            c[i].happy=x+y;
        }else
        {
            c[i].happy=0;
        }
    }
    sort(c.begin(),c.end(),toSort);
    if(c[0].happy>0){
        cout<<c[0].day<<endl;
    }else
    {
        cout<<0<<endl;
    }  
    return 0;
}
