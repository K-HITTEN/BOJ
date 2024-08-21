#include <iostream>
#include <vector>
#include <algorithm>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int main(void){
    fastio;
    int N, K, src = 0;
    cin >> N >> K;
    vector<int> v;
    v.resize(N);
    for(int i = 0; i < N; i++)cin >> v[i];
    while(N!=0){
        N--;
        int max_val = v[N], idx = 0;
        for(int i = 0; i < N; i++){
            if(v[i]>max_val){
                max_val = v[i];
                idx = i;
            }
        }
        if(max_val != v[N]){
            swap(v[idx],v[N]);
            src++;
        }
        if(src == K){
            for(int i = 0; i < v.size(); i++)cout << v[i] << " ";
            return 0;
        }
    }
    cout << -1;
}