#include <iostream>
#include <vector>
#include <queue>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0);

using namespace std;

struct info{
    int _next;
    int cost;
};

struct cmp{
    bool operator()(info&a,info&b){
        return a.cost<b.cost;
    }
};

int N, M, s, e;
bool visited[100001];

vector<info> v[100001];

int main(void){
    fastio;
    int tmp1, tmp2, tmp3;
    cin >> N >> M >> s >> e;
    for(int i = 0; i < M; i++){
        cin >> tmp1 >> tmp2 >> tmp3;
        v[tmp1].push_back({tmp2,tmp3});
        v[tmp2].push_back({tmp1,tmp3});
    }
    priority_queue<info,vector<info>,cmp> pq;
    for(int i = 0; i < v[s].size(); i++){
        pq.push(v[s][i]);
    }
    visited[s] = true;
    while(!pq.empty()){
        info tmp = pq.top();
        pq.pop();
        if(tmp._next == e){
            cout << tmp.cost;
            return 0;
        }
        if(visited[tmp._next])continue;
        visited[tmp._next] = true;
        for(int i = 0; i < v[tmp._next].size(); i++){
            info temp = v[tmp._next][i];
            if(visited[temp._next])continue;
            if(temp.cost<=tmp.cost){
                pq.push(temp);
            }else{
                pq.push({temp._next,tmp.cost});
            }
        }
    }
    cout << 0;
}