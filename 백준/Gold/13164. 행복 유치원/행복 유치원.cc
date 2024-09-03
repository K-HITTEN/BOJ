#include<iostream>
#include<vector>
#include<algorithm>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int main(void){
    fastio;
    int N, K, res = 0;
    vector<int> v, diff;
    cin >> N >> K;
    v.resize(N);
    for(int i = 0; i < N; i++)cin >> v[i];
    sort(v.begin(),v.end());
    for(int i = 1; i < N; i++)diff.push_back(v[i]-v[i-1]);
    sort(diff.begin(),diff.end());
    for(int i = 0; i < N-K; i++)res+=diff[i];
    cout << res;
}