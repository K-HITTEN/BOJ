#include<iostream>
#include<cmath>

using namespace std;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    cout << fixed;
    cout.precision(6);
    double a;
    cin >> a;
    cout << sqrt(a/3.14159265359)*3.14159265359*2;
}