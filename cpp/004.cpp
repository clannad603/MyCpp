#include <bits/stdc++.h>
using namespace std;
vector<int> b;
vector<int> c;
bool repeat(vector<int> &v) {
    vector<int> count(v.size(), 0);
    for (int i = 0; i < v.size(); i++) {
        if (count[v[i]] == 1) return true;
        count[v[i]] == 1;
    }
    return false;
}
int main()
{
    for (int i = 123; i < 327; i++)
    {
        int a[3][3];
        for (int j = 1; j <= 3; j++)
        {
            a[j][0] = (j * i) / 100;
            a[j][1] = ((j * i) % 100) / 10;
            a[j][2] = (j * i) % 10;    
            c.push_back(a[j][0]);
            c.push_back(a[j][1]);
            c.push_back(a[j][2]);     
        }
        
        if(repeat(c))
        {
            for (int k = 1; k <= 3; k++)
            {
                b.push_back(a[k][0] * 100 + a[k][1] * 10 + a[k][2]);
            }
        }
        c.clear();
    }
    for (int i = 0; i < b.size(); i++)
    {
        cout << b[i]<<" ";
        if ((i + 1) % 3 == 0)
        {
            cout << endl;
        }
    }

    return 0;
}
