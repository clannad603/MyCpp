#include<bits/stdc++.h>
using namespace std;
int main() {
    int T;
    cin >> T;
    if (T == 1) {
        // 粘贴问题 1 的主函数代码，除了 return 0
        cout << "I love Luogu!";
    } else if (T == 2) {
        // 粘贴问题 2 的主函数代码，除了 return 0
        cout << 2 + 4 << " " << 10 - 2 - 4;
    } else if (T == 3) {
        cout<<14/4<<endl<<14-(14%4)<<endl<<(14%4)<<endl;
    } else if (T == 4) {
        cout<<setprecision(6)<<500/3<<endl;
    } else if (T == 5) {
       cout<<15<<endl;
    } else if (T == 6) {
        cout<<sqrt(36+81)<<endl;
    } else if (T == 7) {
        cout<<100+10<<endl<<100+10-20<<endl<<0<<endl;
    } else if (T == 8) {
        float pi =3.141593;
        cout<<10*pi<<endl<<pi*25<<endl<<4*pi*125/3<<endl;
    } else if (T == 9) {
        int x=1;
        for (int i = 0; i < 3; i++)
        {
            x = 2*(x+1);
        }
        cout<<x<<endl;
    } else if (T == 10) {
        cout<<26<<endl;
    } else if (T == 11) {
       cout<<100/3<<endl;
    } else if (T == 12) {
        cout<<'M'-'A'<<endl;
        cout<<'A'+17<<endl;

    } else if (T == 13) {
       float pi =3.141593;
       float s = 4*pi*16/3;
       float m = 4*pi*100/3;
       float sum = s+m;
       cout<<int(pow(sum,1/3))<<endl;

    } else if (T == 14) {
        cout<<40<<endl;
    }
    return 0;
}
