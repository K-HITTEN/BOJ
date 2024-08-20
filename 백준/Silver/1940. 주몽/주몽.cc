#include <iostream>
#include <vector>
#include <algorithm>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int main(void){
    fastio;
    vector<int> v;
    int N, M, cnt = 0;
    cin >> N >> M;
    int l = 0, r = N-1;
    v.resize(N);
    for(int i = 0; i < N; i++)cin >> v[i];
    sort(v.begin(),v.end());
    if(N == 1){
        cout << 0;
        return 0;
    }
    while(l != r){
        if(v[l]+v[r] == M){
            cnt++;
            l++;
        }
        else if(v[l]+v[r] < M){
            l++;
        }
        else {
            r--;
        }
    }
    cout << cnt;
}