#include<iostream>

using namespace std;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    int A, T, P;
    cin >> A >> T;
    P = 10 + 2*(25-A+T);
    P = max(P,0);
    cout << P;
}