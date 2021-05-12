#include <bits/stdc++.h>
using namespace std;
double a, b, c, d;
double check(double x)
{
    return a * x * x * x + b * x * x + c * x + d;
}
double look(double left, double right)
{

    if (right - left < 1e-3)
    {
        return left;
    }
    else
    {
        double mid = (right + left) / 2;
        bool flag = check(left) > 0 ? true : false;
        if (flag)
        {
            if (check(mid)>0)
            {
                left = mid;
            }else
            {
                right = mid;
            }
        }else
        {
            if (check(mid)<0)
            {
                left =mid;
            }else
            {
                right =mid;
            }
            
            
        }
        return look(left ,right);
    }
            
}
int main()
{
    double x1, x2;
    cin >> a >> b >> c >> d;
    double del;
    del = sqrt(4 * b * b - 12 * a * c);
    x1 = (-2 * b + del) / 6 * a;
    x2 = (-2 * b - del) / 6 * a;
    if (x1 > x2)
    {
        swap(x1, x2);
    }
    cout << fixed << setprecision(2)
         << look(-100, x1) << " "
         << look(x1, x2) << " "
         << look(x2, 100) << endl;
    return 0;
}
