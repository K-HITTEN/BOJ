#include <iostream>
#include <vector>
#include <queue>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int N, M, tmp1, tmp2, tmp3, x, y, z;
vector<pair<long long,int>> v[100001];
bool visited[100001];

long long dijkstra(int start, int finish){
    fill(visited,visited+100001,false);
    visited[start] = true;
    priority_queue<pair<long long,int>,vector<pair<long long,int>>,greater<pair<long long,int>>> pq;
    for(int i = 0; i < v[start].size(); i++){
        pq.push(v[start][i]);
    }
    while(!pq.empty()){
        pair<long long,int> tmp = pq.top();
        pq.pop();
        if(tmp.second == finish)return tmp.first;
        if(visited[tmp.second])continue;
        visited[tmp.second] = true;
        for(int i = 0; i < v[tmp.second].size(); i++){
            if(visited[v[tmp.second][i].second])continue;
            pq.push({tmp.first+v[tmp.second][i].first,v[tmp.second][i].second});
        }
    }
    return 2000000001;
}

long long dijkstra2(int start, int finish){
    fill(visited,visited+100001,false);
    visited[start] = true;
    visited[y] = true;
    priority_queue<pair<long long,int>,vector<pair<long long,int>>,greater<pair<long long,int>>> pq;
    for(int i = 0; i < v[start].size(); i++){
        pq.push(v[start][i]);
    }
    while(!pq.empty()){
        pair<long long,int> tmp = pq.top();
        pq.pop();
        if(tmp.second == finish)return tmp.first;
        if(visited[tmp.second])continue;
        visited[tmp.second] = true;
        for(int i = 0; i < v[tmp.second].size(); i++){
            if(visited[v[tmp.second][i].second])continue;
            pq.push({tmp.first+v[tmp.second][i].first,v[tmp.second][i].second});
        }
    }
    return 2000000001;
}


int main(void){
    fastio;
    cin >> N >> M;
    for(int i = 0; i < M; i++){
        cin >> tmp1 >> tmp2 >> tmp3;
        v[tmp1].push_back({tmp3,tmp2});
    }
    cin >> x >> y >> z;
    long long res1 = dijkstra(x,y)+dijkstra(y,z), res2 = dijkstra2(x,z);
    if(res1 >=2000000001)cout << -1 << " ";
    else cout << res1 << " ";
    if(res2 >=2000000001)cout << -1;
    else cout << res2;
}