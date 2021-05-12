#include <bits/stdc++.h>
using namespace std;
struct date
{
    int year;
    int month;
};

int main()
{
    date x;
    cin >> x.year >> x.month;
    int s = x.year;
    bool flag = false;
    int result;
    if ((s % 4 == 0 && s % 100 != 0) || s % 400 == 0)
    {
        flag = true;
    }
    switch (x.month)
    {
    case 1:
        result = 31;
        break;
    case 2:
        result = (flag) ? 29 : 28;
        break;
    case 3:
        result = 31;
        break;
    case 4:
        result = 30;
        break;
    case 5:
        result = 31;
        break;
    case 6:
        result = 30;
        break;
    case 7:
        result = 31;
        break;
    case 8:
        result = 31;
        break;
    case 9:
        result = 30;
        break;
    case 10:
        result = 31;
        break;
    case 11:
        result = 30;
        break;
    case 12:
        result = 31;
        break;
    default:
        break;
    }
    cout<<result<<endl;
    return 0;
}
