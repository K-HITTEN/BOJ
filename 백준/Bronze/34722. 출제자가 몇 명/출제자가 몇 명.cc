#include <iostream>

using namespace std;

int N, cnt, s, c, a, r;

int main() {
    cin.tie(0)->ios::sync_with_stdio(0);
    cin >> N;
    while (N--) {
        cin >> s >> c >> a >> r;
        if (s >= 1000 || c >= 1600 || a >= 1500 || (r <= 30 && r != -1)) cnt++;
    }
    cout << cnt;
}