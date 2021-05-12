#include <bits/stdc++.h>
using namespace std;
int findCount(int n);
int main()
{
    int t;
    cin >> t;
    vector<int> a;
    vector<int> b;
    for (int i = 0; i < t; i++)
    {
        int x;
        cin >> x;
        a.push_back(x);
    }
   for (int i = 0; i < t; i++)
    {
        int x = findCount(a[i]);
        b.push_back(x);
    }
    for (int i = 0; i < b.size(); i++)
    {
        cout<<b[i]<<endl;
    }
    
    return 0;
}
int findCount(int n)
{
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        vector<int> c;
        int n = i;
        bool flag = true;
        while (n)
        {
            int s = n%10;
            c.push_back(s);
            n /= 10;
        }
        for (int j = 0; j <c.size()-1; j++)
        {
            if(c[j]!=c[j+1]){
                flag=false;
                break;
            }
        }
        if(c.size()==1){
            flag=true;
        }
        if (flag)
        {
            count++;
        }
    }
    return count;
}
