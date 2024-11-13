#include<iostream>

using namespace std;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    int x, y;
    cin >> x >> y;
    int ans = 0, cur = x;
    int dist = 1, arrow = 1;
    while(1) {
        while(1) {
            if(cur == y) {
                cout << ans << '\n';
                return 0;
            }
            if(cur == x + arrow * dist) break;
            ans++;
            cur += arrow;
        }
        arrow *= -1;
        dist *= 2;
    }
}