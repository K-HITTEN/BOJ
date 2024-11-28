#include<iostream>

using namespace std;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    double A, B, C;
    cin >> A >> B >> C;
    cout << int(max(A*B/C,A/B*C));
}