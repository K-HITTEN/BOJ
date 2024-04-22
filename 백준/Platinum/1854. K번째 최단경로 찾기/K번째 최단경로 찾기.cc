#include <iostream> 
#include <queue>
#include <vector>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

vector<pair<int,int>> v[1001];
priority_queue<int> dist[1001];
priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
int N, M, K, tmp1, tmp2, tmp3;

int main(void){
    fastio;
    cin >> N >> M >> K;
    dist[1].push(0);
    pq.push({0,1});
    for(int i = 0; i < M; i++){
        cin >> tmp1 >> tmp2 >> tmp3;
        v[tmp1].push_back({tmp2,tmp3});
    }
    while(!pq.empty()){
        pair<int,int> tmp = pq.top();
        pq.pop();
        for(int i = 0; i < v[tmp.second].size(); i++){
            if(dist[v[tmp.second][i].first].size() < K){
                dist[v[tmp.second][i].first].push(tmp.first+v[tmp.second][i].second);
                pq.push({tmp.first+v[tmp.second][i].second,v[tmp.second][i].first});
            }
            else{
                if(dist[v[tmp.second][i].first].top() > tmp.first+v[tmp.second][i].second){
                    dist[v[tmp.second][i].first].pop();
                    dist[v[tmp.second][i].first].push(tmp.first+v[tmp.second][i].second);
                    pq.push({tmp.first+v[tmp.second][i].second,v[tmp.second][i].first});
                }
            }
        }
    }
    for(int i = 1; i <= N; i++){
        if(dist[i].size() < K)cout << -1 << "\n";
        else cout << dist[i].top() << "\n";
    }
}