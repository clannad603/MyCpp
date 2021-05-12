#include<bits/stdc++.h>
using namespace std;
long long  int  dp[30][30];
vector<pair<int,int>> horseCotrol;
void find (int a,int b){
    horseCotrol.push_back(pair<int ,int>(a,b));

    horseCotrol.push_back(pair<int ,int>(a-1,b-2));
    horseCotrol.push_back(pair<int ,int>(a-2,b-1));
    horseCotrol.push_back(pair<int ,int>(a-2,b+1));
    horseCotrol.push_back(pair<int ,int>(a-1,b+2));

    horseCotrol.push_back(pair<int ,int>(a+1,b-2));
    horseCotrol.push_back(pair<int ,int>(a+2,b-1));
    horseCotrol.push_back(pair<int ,int>(a+2,b+1));
    horseCotrol.push_back(pair<int ,int>(a+1,b+2));
}
bool check(int x,int y){
    for(auto i:horseCotrol){
        
        if(i.first==x && i.second==y){
            return false;
        }
    }
    return true;
}
int main(){
    int h_x,h_y,b_x,b_y;
    cin>>b_x>>b_y>>h_x>>h_y;
    find(h_x,h_y);
    dp [0][0] = 1;
    for (int i = 0; i <=b_x; ++i)
    {
        for (int j = 0; j <=b_y; ++j)
        {
        if(!check(i,j))
        {
            dp[i][j]=0;
            continue;
        }
        if(i==0&&j==0)
        {
            continue;
        }
        if(i==0)
        dp[i][j]=dp[i][j-1];
        else if(j==0)
        dp[i][j]=dp[i-1][j];
        else
        dp[i][j] = dp[i][j-1]+dp[i-1][j];
         }
    }
    cout<<dp[b_x][b_y]<<endl;
    return 0;
}
