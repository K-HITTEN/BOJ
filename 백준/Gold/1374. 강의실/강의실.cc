#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

struct info{
    int s,f;
};

struct cmp1{
    bool operator()(info &a, info &b){return a.s < b.s;}
};

struct cmp2{
    bool operator()(info &a, info &b){return a.f > b.f;}
};

int main(void){
    fastio;
    int N, tmp1, tmp2 , tmp3, res = 0;
    vector<info> v;
    cin >> N;
    for(int i = 0; i < N; i++){
        cin >> tmp1 >> tmp2 >> tmp3;
        v.push_back({tmp2, tmp3});
    }
    sort(v.begin(), v.end(), cmp1());
    priority_queue<info,vector<info>,cmp2>pq;
    for(int i = 0; i < N; i++){
       pq.push(v[i]);
       while(!pq.empty()&&pq.top().f<=v[i].s){
           pq.pop();
       }
       res = max(res,(int)pq.size());
    }
    cout << res;
}