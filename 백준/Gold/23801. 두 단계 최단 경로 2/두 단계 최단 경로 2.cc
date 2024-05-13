#include <iostream>
#include <vector>
#include <queue>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

long long N, M, tmp1, tmp2, tmp3, x, y, z, p;
vector<pair<long long,long long>> v[100001];
long long dist[2][100001];

void dijkstra(long long start, int x){
    priority_queue<pair<long long,long long>,vector<pair<long long,long long>>,greater<pair<long long,long long>>> pq;
    dist[x][start] = 0;
    for(int i = 0; i < v[start].size(); i++){
        pq.push(v[start][i]);
    }
    while(!pq.empty()){
        pair<long long,long long> tmp = pq.top();
        pq.pop();
        if(dist[x][tmp.second] <= tmp.first)continue;
        dist[x][tmp.second] = tmp.first;
        for(int i = 0; i < v[tmp.second].size(); i++){
            if(dist[x][v[tmp.second][i].second] <= tmp.first+v[tmp.second][i].first)continue;
            pq.push({tmp.first+v[tmp.second][i].first,v[tmp.second][i].second});
        }
    }
}

int main(void){
    fastio;
    cin >> N >> M;
    for(int i = 0; i < M; i++){
        cin >> tmp1 >> tmp2 >> tmp3;
        v[tmp1].push_back({tmp3,tmp2});
        v[tmp2].push_back({tmp3,tmp1});
    }
    cin >> x >> z >> p;
    long long res = 300000000001;
    fill(&dist[0][0],&dist[1][100002],300000000001);
    dijkstra(x,0);
    dijkstra(z,1);
    for(int i = 0; i < p; i++){
        cin >> y;
        res = min(res,dist[0][y]+dist[1][y]);
    }
    if(res>=300000000001)cout << -1;
    else cout << res;
}