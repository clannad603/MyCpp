#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int res;
    int jec;
    int j,i;
    for ( i = 0; i <n; i++)
    {
        j =i*(i+1)/2;
        if (j>=n)
        {
            break;
        }
        
    }
    int h;
    h = i*(i-1)/2;
    j = n-h;
    if (i%2!=0)
    {
        jec = j;
        res = i-j+1;
    }else{
        res = j;
        jec = i-j+1;
    }
    
    cout<<res<<"/"<<jec<<endl;
    
    return 0;
}
