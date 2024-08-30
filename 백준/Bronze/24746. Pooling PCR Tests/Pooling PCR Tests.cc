#include <iostream>
#include <cmath>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int main() {
    fastio;
    double p,P;
    cin >> p;
    int res = 1;
    double min_val = 1.0;

    for (int N = 1; N <= 16; N++) {
        P = pow(1-p,N);
        if ((P+N*(1-P))/N < min_val) {
            min_val = (P+N*(1-P))/N;
            res = N;
        }
    }
    cout << res << endl;
}