#include<iostream>
#include<vector>
#include<algorithm>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

vector<long long> v;

int main(void){
    fastio;
    long long N, ret, sum = 0;
    cin >> N;
    v.resize(N);
    for(int i = 0; i < N; i++)cin >> v[i];
    sort(v.begin(), v.end(),greater<int>());
    for(int i = 0; i < N; i++){
        if(v[i]*(i+1)>=sum){
            sum = v[i]*(i+1);
            ret = v[i];
        }
    }
    cout << sum << " " << ret;
}