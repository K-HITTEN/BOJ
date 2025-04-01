#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>

using namespace std;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    int N, M, L;
    vector<int> v;
    cin >> N >> M >> L;
    v.resize(N);
    for(int i = 0; i < N; i++)cin>>v[i];
    v.push_back(0);
    v.push_back(L);
    sort(v.begin(), v.end());
    int l = 1, r = L;
    while(l <= r){
        int mid = (l+r)/2;
        int tmp = 0;
        for(int i = 1; i < v.size(); i++){
            if((v[i]-v[i-1])%mid == 0)tmp+=(v[i]-v[i-1]-1)/mid;
            else tmp+=(v[i]-v[i-1])/mid;
        }
        if(tmp>M)l = mid+1;
        else r = mid-1;
    }
    cout << l;
}