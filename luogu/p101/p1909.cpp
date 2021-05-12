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
};
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
    a.get_money() > b.get_money();
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

    return 0;
}