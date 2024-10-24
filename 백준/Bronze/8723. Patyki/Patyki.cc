#include<iostream>
#include<algorithm>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int main(void){
    fastio;
    int a, b, c;
    cin >> a >> b >> c;
    if(a==b&&b==c)cout<<2;
    else {
        a *= a;
        b *= b;
        c *= c;
        if(max({a,b,c}) == a+b+c-max({a,b,c}))cout<< 1;
        else cout << 0;
    }
}