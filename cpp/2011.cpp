#include<bits/stdc++.h>
using namespace std;
struct cat
{
    int a;
    int b;
    int o_xl;
    int o_yl;
};
int main(){
    int n;
    cin>>n;
    cat dl[n];
    int a[n];
    int b[n];
    for (int  i = 0; i < n; i++)
    {
        cin>>dl[i].a>>dl[i].b>>dl[i].o_xl>>dl[i].o_yl;
        a[i] = dl[i].o_xl+dl[i].a;
        b[i] = dl[i].o_yl+dl[i].b;
    }
    int x = (*max_element(a,a+n));
    int y = (*max_element(b,b+n));
    int sd[x][y]={-1};
    for (int i = 0; i < n; i++)
    {
        for (int j = dl[i].a; j <= dl[i].o_xl+dl[i].a; j++)
        {
            for (int k = dl[i].b; k<= dl[i].o_yl+dl[i].b ; k++)
            {
                sd[j][k] = i+1;
            }
            
        }
        
    }
    int s_x,s_y;
    cin>>s_x>>s_y;
    if (sd[s_x][s_y]<=n)
    {
        cout<<sd[s_x][s_y]<<endl;
    }else
    {
        cout<<-1<<endl;
    }
    
    
    
    return 0;
}
