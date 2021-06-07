#include <bits/stdc++.h>
using namespace std;
class Pencil
{
private:
    int num;
    int money;

public:
    Pencil(int num, int money);
    int get_money();
    int get_num();
};
int Pencil::get_num(){
    return this->num;
}
int Pencil::get_money()
{
    return this->money;
}
Pencil::Pencil(int num, int money)
{
    this->money = money;
    this->num = num;
}
bool sortedBy(Pencil a, Pencil b)
{
    (a.get_num())/a.get_money() > (b.get_num())/(a.get_money());
}
int main()
{
    vector<Pencil> s;
    int need;
    int x, y, z, n, m, p;
    cin >> need;
    cin >> x >> y;
    cin >> z >> n;
    cin >> m >> p;
    Pencil a = Pencil(x, y);
    Pencil b = Pencil(z, n);
    Pencil c = Pencil(m, p);
    s.push_back(a);
    s.push_back(b);
    s.push_back(c);
    sort(s.begin(),s.end(),sortedBy);
    int i=1;
    while (s[0].get_num()*i<need)
    {
        i++;
    }
    int j=1;
       while (s[1].get_num()*j<need)
    {
        j++;
    }

    int k=1;
    while (s[2].get_num()*k<need)
    {
        k++;
    }
    int result1 = i*s[0].get_money();
    int result2 = j*s[1].get_money();
    int result3 = k*s[2].get_money();
    vector<int> d;
    d.push_back(result1);
    d.push_back(result2);
    d.push_back(result3);
    sort(d.begin(),d.end());
    cout<<d[0]<<endl;
    return 0;
}
