#include <iostream>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int main(void){
    fastio;
    int n,m,a,b,c,d,q,r;
    cin >> n >> m;
    a = 100 - n;
    b = 100 - m;
    c = 100 - a - b;
    d = a*b;
    q = d/100;
    r = d%100;
    cout << a << " " << b << " " << c << " " << d << " " << q << " " << r << "\n" << c+q << " " << r;
}