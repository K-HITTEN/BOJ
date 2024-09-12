#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

struct info{
    int S, E;
};

struct cmp1{
    bool operator()(info &a, info &b){
        return a.S < b.S;
    }
};

struct cmp2{
    bool operator()(info &a, info &b){
        return a.E > b.E;
    }
};

int main(void){
    fastio;
    int N, S, E, ret = 0;
    cin >> N;
    vector<info> v;
    for(int i = 0; i < N; i++){
        cin >> S >> E;
        v.push_back({S,E});

    }
    sort(v.begin(), v.end(), cmp1());
    priority_queue<info,vector<info>,cmp2> pq;
    int i = 0;
    while(i < N){
        int t = v[i].S, l = v[i].S, r = 0;
        while(i<N&&v[i].S==t){
            pq.push(v[i]);
            r = max(r, v[i].E);
            i++;
        }
        int len = pq.size();
        while(i<N&&!pq.empty()){
            while(!pq.empty()&&pq.top().E<t){
                pq.pop();
            }
            while(i<N&&v[i].S==t){
                pq.push(v[i]);
                r = max(r, v[i].E);
                i++;
            }
            len = max(len,(int)pq.size());
            t++;
        }
        ret += (r-l+1)*len;
    }
    cout << ret;
}