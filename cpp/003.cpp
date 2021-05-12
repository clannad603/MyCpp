#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[10];
    for (int i = 123; i <=329; i++)
    {
        for (int j = 0; j <10; j++)
            a[j]=0;
            ++a[i/100];
            ++a[i%100/10];
            ++a[i%10];
            ++a[2*i/100];
            ++a[2*i%100/10];
            ++a[2*i%10];
            ++a[3*i/100];
            ++a[3*i%100/10];
            ++a[3*i%10];
         if (a[1]*a[2]*a[3]*a[4]*a[5]*a[6]*a[7]*a[8]*a[9]==1)
        {
            cout<<i<<" "<<2*i<<" "<<3*i<<endl;
        }
        
    }
    return 0;
}
