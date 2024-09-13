#include<iostream>
#include<vector>
#include<algorithm>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

struct info{
    int t,d;
};

struct cmp{
    bool operator()(info &a, info &b){
        return a.d>b.d;
    }
};

int main(void){
    fastio;
    int N, t, d;
    cin >> N;
    vector<info> v;
    for(int i = 0; i < N; i++){
        cin >> t >> d;
        v.push_back({t,d});
    }
    sort(v.begin(),v.end(), cmp());
    d = v[0].d;
    for(int i = 0; i < N; i++){
        d = min(d,v[i].d);
        d -= v[i].t;
    }
    cout << d;
}