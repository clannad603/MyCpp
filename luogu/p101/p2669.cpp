#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x;//tianshu
    cin >> x;
    int c = 0;//jingb1
    int n=0;//dangqiantian
    int i=0;
    while (n<x)
    {
        i++;
        for (int j=1;j<=i;j++)
        {
            c=c+i;
            if(n<x)n++;
            else c=c-i;
        }
        
    }
    
    cout << c<< endl;
    return 0;
}
