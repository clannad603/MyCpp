#include<bits/stdc++.h>
using namespace std;
template <int N>
struct Factorial {
	enum {result = N*Factorial<N-1>::result};
};
 
template<>
struct Factorial<1> {
	enum {result = 1};
};
int main(){
    auto s = Factorial<3>::result;
    cout<<s;
    return 0;
}
