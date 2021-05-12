#include <bits/stdc++.h>
using namespace std;
class People
{
private:
    int score;
    string name;

public:
    People(int score, string name)
    {

        this->name = name;
        this->score = score;
        cout << "this people is born" << endl;
    };
    void set(void)
    {
        cout << name << "is set" << endl;
    };
    ~People()
    {
        cout << "this people is died" << endl;
    };
};

int main()
{
    int a = 6;
    string x = "zhangsan";
    People jk = People(a, x);
    jk.set();
    return 0;
}
