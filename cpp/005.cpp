#include <bits/stdc++.h>
using namespace std;
int findMax(float *a, int n)
{
    int i, j, k;
    j = a[0];
    for (i = 0; i < n; i++)
    {
        if (a[i] > j)
        {
            j = a[i];
            k = i;
        }
    }
    return k ;
}
int main()
{
    int n, t;
    cin >> n >> t;
    float a[n];
    float b[n];
    float c[n];
    for (int i = 0; i < n; i++)
    {
        float c, d;
        cin >> c >> d;
        a[i] = c;
        b[i] = d;
    }
    for (int i = 0; i < n; i++)
    {
        c[i] = (float)(b[i] / a[i]);
    }
    int dex = 0;
    float count = 0;
    while (dex < t)
    {
        int maxPosition = findMax(c,n);
        if (a[maxPosition] > (t - dex))
        {
            count += (t-dex) * c[maxPosition];
            dex = t;
        }
        else
        {
            dex += a[maxPosition];
            count += a[maxPosition] * c[maxPosition];
        }
        c[maxPosition]=0;
    }
    cout<<setiosflags(ios::fixed)<<setprecision(2)<<count<<endl;
    return 0;
}
