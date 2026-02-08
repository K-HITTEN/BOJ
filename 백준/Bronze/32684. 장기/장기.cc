#include<iostream>

using namespace std;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    double A = 0, B = 1.5, c, d, e, f, g, h;
    cin >> c >> d >> e >> f >> g >> h;
    A +=(c*13+d*7+e*5+f*3+g*3+h*2);
    cin >> c >> d >> e >> f >> g >> h;
    B +=(c*13+d*7+e*5+f*3+g*3+h*2);
    if(A>B)cout << "cocjr0208";
    else cout << "ekwoo";
}