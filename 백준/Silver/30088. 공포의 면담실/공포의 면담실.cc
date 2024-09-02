#include<iostream>
#include<vector>
#include<algorithm>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int main(void){
    fastio;
    vector<long long> v;
    long long N, K, tmp, res = 0;
    cin >> N;
    for(int i = 0; i < N; i++){
        long long sum = 0;
        cin >> K;
        for(int j = 0; j < K; j++){
            cin >> tmp;
            sum += tmp;
        }
        v.push_back(sum);
    }
    sort(v.begin(),v.end());
    for(int i = 0; i < v.size(); i++){
        res += v[i]*N;
        N--;
    }
    cout << res;
}