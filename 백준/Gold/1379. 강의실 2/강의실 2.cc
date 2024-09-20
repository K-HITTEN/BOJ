#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

struct info{
    int n,s,f,c;
};

struct cmp1{
    bool operator()(info &a, info &b){return a.s < b.s;}
};

struct cmp2{
    bool operator()(info &a, info &b){return a.f > b.f;}
};

struct cmp3{
    bool operator()(info &a, info &b){return a.n < b.n;}
};

int main(void){
    fastio;
    int N, tmp1, tmp2 , tmp3, res = 0, cnt = 1;
    vector<info> v;
    cin >> N;
    for(int i = 0; i < N; i++){
        cin >> tmp1 >> tmp2 >> tmp3;
        v.push_back({tmp1,tmp2, tmp3,0});
    }
    sort(v.begin(), v.end(), cmp1());
    priority_queue<info,vector<info>,cmp2>pq;
    queue<int> q;
    for(int i = 0; i < N; i++){
        while(!pq.empty()&&pq.top().f<=v[i].s){
            q.push(pq.top().c);
            pq.pop();
        }
        if(q.empty()){
            v[i].c = cnt;
            cnt++;
        }else{
            v[i].c = q.front();
            q.pop();
        }
        pq.push(v[i]);
       res = max(res,(int)pq.size());
    }
    cout << res << "\n";
    sort(v.begin(), v.end(), cmp3());
    for(int i = 0; i < N; i++){
        cout << v[i].c << "\n";
    }
}