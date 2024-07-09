#include <iostream>
#include <vector>
#include <queue>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

vector<pair<int,int>> v[4001];
double dist1[4001][2], dist2[4001];

struct info{
    long long t, node, status;
};

struct cmp{
    bool operator() (info &a, info &b){
        return a.t > b.t;
    }
};

int main(void){
    fastio;
    int N, M, a, b, d;
    cin >> N >> M;
    for(int i = 0; i < M; i++){
        cin >> a >> b >> d;
        v[a].push_back({b,d*2});
        v[b].push_back({a,d*2});
    }
    fill(&dist1[0][0], &dist1[4000][2], 1000000000000);
    priority_queue<info,vector<info>,cmp> pq;
    pq.push({0,1,0});
    while(!pq.empty()){
        info tmp = pq.top();
        pq.pop();
        if(dist1[tmp.node][tmp.status]>tmp.t){
            dist1[tmp.node][tmp.status] = tmp.t;
            for(int i = 0; i < v[tmp.node].size(); i++){
                if(tmp.status == 0 && dist1[v[tmp.node][i].first][1]>tmp.t+v[tmp.node][i].second/2)pq.push({tmp.t+v[tmp.node][i].second/2,v[tmp.node][i].first,1});
                else if(tmp.status == 1 && dist1[v[tmp.node][i].first][0]>tmp.t+v[tmp.node][i].second*2)pq.push({tmp.t+v[tmp.node][i].second*2,v[tmp.node][i].first,0});
            }
        }
    }
    pq.push({0,1,0});
    fill(dist2, dist2+4001, 1000000000000);
    while(!pq.empty()){
        info tmp = pq.top();
        pq.pop();
        if(dist2[tmp.node]>tmp.t){
            dist2[tmp.node]= tmp.t;
            for(int i = 0; i < v[tmp.node].size(); i++){
                if(dist2[v[tmp.node][i].first]>tmp.t+v[tmp.node][i].second)pq.push({tmp.t+v[tmp.node][i].second,v[tmp.node][i].first,0});
            }
        }
    }
    int count = 0;
    for(int i = 2; i <= N; i++){
        if(min(dist1[i][0],dist1[i][1])>dist2[i])count++;
    }
    cout << count;
}