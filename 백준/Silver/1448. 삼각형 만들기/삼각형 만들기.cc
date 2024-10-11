#include<iostream>
#include<vector>
#include<algorithm>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int main(void){
    fastio;
    vector<int> v;
    int N;
    cin >> N;
    v.resize(N);
    for(int i = 0; i < N; i++)cin >> v[i];
    sort(v.begin(), v.end(), greater<int>());
    for(int i = 0; i < N-2; i++){
        if(v[i]<v[i+1]+v[i+2]){
            cout << v[i]+v[i+1]+v[i+2];
            return 0;
        }
    }
    cout << -1;
}