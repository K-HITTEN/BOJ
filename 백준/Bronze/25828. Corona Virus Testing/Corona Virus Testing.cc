#include<iostream>

using namespace std;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    int g, p, t;
    cin >> g >> p >> t;
    if(g+p*t>g*p)cout << 1;
    else if(g+p*t<g*p)cout << 2;
    else cout << 0;
}