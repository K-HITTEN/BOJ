#include<iostream>

using namespace std;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    int h, l, a, b;
    cin >> h >> l >> a >> b;
    if((a<=l&&b<=2*h)||(b<=l&&a<=2*h))cout << "YES";
    else cout << "NO";
}