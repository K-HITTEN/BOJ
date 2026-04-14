#include <bits/stdc++.h> 

using namespace std;

double S, T, D;

int main() {
    cin.tie(0)->ios_base::sync_with_stdio(0);
    cin >> S >> D >> T;
    if (S * 5280.0 / 3600.0 * T >= D)cout << "MADE IT";
    else cout << "FAILED TEST";
}