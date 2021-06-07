#include<bits/stdc++.h>
using namespace std;
struct Time
{
    int hour;
    int mins;
};

int main(){
    Time start;
    Time ends;
    Time resut;
    cin>>start.hour>>start.mins>>ends.hour>>ends.mins;
    resut.hour = ends.hour-start.hour;
    resut.mins = ends.mins-start.mins;
    if (resut.mins<0)
    {
        resut.hour--;
        resut.mins = 60+resut.mins;
    }
    cout<<resut.hour<<' '<<resut.mins<<endl;

    return 0;
}

