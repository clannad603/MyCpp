#include<bits/stdc++.h>
using namespace std;
class Base
{
private:
    
public:
    Base();
    ~Base();
    void eat(){
        cout<<"I am eating"<<endl;
    }
};

class After:public Base
{
private:
    
public:
    After();
    ~After();
};

int main(){
    After after;
    after.eat();
    return 0;
}
