#include<iostream>

using namespace std;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    double a;
    cin >> a;
    cout << fixed;
    cout.precision(3);
    cout << 100/a << '\n' << 100/(100-a);
}