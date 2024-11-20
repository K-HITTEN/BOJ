#include<iostream>

using namespace std;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    cout<<fixed;
    cout.precision(6);
    double x;
    cin >> x;
    cout << 100/((1.609344/3.785411784)*x);
}