#include <iostream>
#include <vector>
#include <algorithm>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)
using namespace std;

int main(){
    fastio;
    int N, L, ret = 1, st = 0;
    vector<int> v;
    cin >> N >> L;
    v.resize(N);
    for(int i = 0; i < N; i++)cin >> v[i];
    sort(v.begin(), v.end());
    for(int i = 0; i < N; i++){
        if(v[i]-v[st]>=L){
            ret++;
            st = i;
        }
    }
    cout << ret;
}
