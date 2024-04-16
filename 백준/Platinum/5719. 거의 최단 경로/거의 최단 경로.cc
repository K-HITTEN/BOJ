#include <iostream>
#include <vector>
#include <queue>
#include <tuple>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int N, M, tmp1, tmp2, tmp3, start, finish, dist[501];
vector<int>route[501];
vector<tuple<int,int,bool>> v[501];
bool visited[501];

void erase_dijstra(int idx){
    if(visited[idx])return;
    visited[idx] = true;
    for(int i = 0; i < route[idx].size(); i++){
        int tmp = route[idx][i];
        for(int j = 0; j < v[tmp].size(); j++){
            if(get<0>(v[tmp][j]) == idx){
                get<2>(v[tmp][j]) = false;
                erase_dijstra(tmp);
                break;
            }
        }
    }
}

void dijstra(){
    fill(dist,dist+501,987654321);
    dist[start] = 0;
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
    pq.push({0,start});
    while(!pq.empty()){
        pair<int,int> tmp = pq.top();
        pq.pop();
        if(tmp.first>dist[tmp.second])continue;
        for(int i = 0; i < v[tmp.second].size(); i++){
            if(!get<2>(v[tmp.second][i]))continue;
            int next = get<0>(v[tmp.second][i]);
            int cost = get<1>(v[tmp.second][i]);
            if(dist[next]>tmp.first+cost){
                dist[next] = tmp.first + cost;
                pq.push({dist[next],next});
                route[next] = {tmp.second};
            }
            else if(dist[next]==tmp.first+cost){
                route[next].push_back(tmp.second);
            }
        }
    }
}

int main(void){
    fastio;
    while(true){
        cin >> N >> M;
        if(N == 0 && M == 0)return 0;
        cin >> start >> finish;
        for(int i = 0; i <= N; i++){
            v[i].clear();
            route[i].clear();
        }
        for(int i = 0; i < M; i++){
            cin >> tmp1 >> tmp2 >> tmp3;
            v[tmp1].push_back({tmp2,tmp3,true});
        }
        dijstra();
        fill(visited,visited+501,false);
        erase_dijstra(finish);
        dijstra();
        if(dist[finish] == 987654321)cout << -1 <<"\n";
        else cout << dist[finish]<<"\n";
    }
    
}