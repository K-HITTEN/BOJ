#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int N, L, a, b, idx, cnt;
vector<pair<int,int>> v;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    cin >> N >> L;
    while(N--){
        cin >> a >> b;
        v.push_back({a,b});
    }
    sort(v.begin(),v.end());
    for(int i = 0; i < v.size(); i++){
        idx = max(idx,v[i].first);
        while(idx<v[i].second){
            cnt++;
            idx+=L;
        }
    }
    cout << cnt;
}