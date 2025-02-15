#include<iostream>

using namespace std;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    double a, b;
    cin >> a >> b;
    b/=100;
    if(a-a*b<100)cout << 1;
    else cout << 0;
}