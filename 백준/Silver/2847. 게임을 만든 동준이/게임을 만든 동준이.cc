#include <iostream>
#include <vector>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int main(void){
    fastio;
    int N, ans = 0, tmp;
    cin >> N;
    vector<int> v;
    v.resize(N);
    for(int i = 0; i < N; i++)cin >> v[i];
    tmp = v[N-1];
    for(int i = N-2; i>=0; i--){
        tmp = min(tmp-1,v[i]);
        ans += max(v[i]-tmp, 0);
    }
    cout << ans;
}