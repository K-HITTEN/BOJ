#include <iostream>
#include <vector>
#include <algorithm>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int main(void){
    fastio;
    vector<int> v;
    int N, ret = 0;
    cin >> N;
    v.resize(N);
    for(int i = 0; i < N; i++)cin >> v[i];
    sort(v.begin(), v.end());
    for(int i = 0; i < N; i++){
        int l = 0, r = N-1;
        while(l<r){
            if(v[l]+v[r] == v[i]){
                if(l!=i&&r!=i){
                    ret++;
                    break;
                }
                if(l == i)l++;
                if(r == i)r--;
            }
            else if(v[l]+v[r] < v[i])l++;
            else r--;
        }
    }
    cout << ret;
}