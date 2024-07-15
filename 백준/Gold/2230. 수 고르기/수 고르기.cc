#include <iostream>
#include <vector>
#include <algorithm>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int main(void){
    fastio;
    int N, M, min_val = 2000000000, left = 0, right = 0;
    vector<int> v;
    cin >> N >> M;
    v.resize(N);
    for(int i = 0; i < N; i++)cin >> v[i];
    sort(v.begin(),v.end());
    while(right<N){
        if(left == right||v[right]-v[left] < M)right++;
        else{
            min_val = min(min_val,v[right]-v[left]);
            left++;
        }
    }
    cout << min_val;
}