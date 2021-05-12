#include<bits/stdc++.h>
using namespace std;
class ZhangSan
{
private:
    string name;
    int money;
    int house;
    string girlFreind;
public:
    friend class Lihua;
    ZhangSan(string name,int money,int house,string girlFriend){
        this->name = name;
        this->money = money;
        this->house = 1;
        this->girlFreind =girlFreind;
    };
    ZhangSan(const ZhangSan &obj){
        cout<<name<<" lose his"<<girlFreind<<endl;
    };
    ~ZhangSan(void){
        cout<<name<<" is died"<<endl;
    };
    void findGirlFriend(void){
        cout<<name<<" get a girlfriend"<<endl;
    };
};
class Lihua
{
public :
    void Print(ZhangSan &ZhangSan)
    {
        // BigBox是Box的友元类，它可以直接访问Box类的任何成员
        ZhangSan.findGirlFriend();
       
    }
};
int main(){
    ZhangSan san= ZhangSan("zhangsan",250,2,"lili");
    Lihua lihua;
    lihua.Print(san);
    return 0;
}
