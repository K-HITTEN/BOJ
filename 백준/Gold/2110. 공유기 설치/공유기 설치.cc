#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    int N,C, ret = 0;
    vector<int> v;
    cin >> N >> C;
    v.resize(N);
    for(int i = 0; i < N; i++)cin >> v[i];
    sort(v.begin(),v.end());
    int l = 1, r = v[N-1]-v[0];
    while(l<=r){
        int mid = (l+r)/2, router = 1, tmp = v[0];
        for(int i = 1; i < N; i++){
            if(v[i] - tmp >= mid){
                router++;
                tmp = v[i];
            }
        }
        if(router >= C){
            ret = max(ret,mid);
            l = mid + 1;
        }else r = mid -1;
    }
    cout << ret;
}