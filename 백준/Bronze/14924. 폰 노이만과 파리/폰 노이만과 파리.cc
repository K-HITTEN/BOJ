#include<iostream>

using namespace std;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    int S, T, D;
    cin >> S >> T >> D;
    cout << (D /  (2 * S)) * T;
}