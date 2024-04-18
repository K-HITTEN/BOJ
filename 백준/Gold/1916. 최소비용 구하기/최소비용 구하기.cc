#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int N, M, tmp1, tmp2, tmp3, start, finish, dist[1001];
vector<pair<int,int>> v[1001];

int main(void){
    fastio;
    cin >> N >> M;
    for(int i = 0; i < M; i++){
        cin >> tmp1 >> tmp2 >> tmp3;
        v[tmp1].push_back({tmp2,tmp3});
    }
    cin >> start >> finish;
    fill(dist,dist+1001,987654321);
    dist[start] = 0;
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
    pq.push({0,start});
    while(!pq.empty()){
        pair<int,int> tmp = pq.top();
        pq.pop();
        if(tmp.second == finish){
            cout << dist[finish] << "\n";
            break;
        }
        for(int i = 0; i < v[tmp.second].size(); i++){
            int next = v[tmp.second][i].first;
            int cost = v[tmp.second][i].second;
            if(dist[next]>tmp.first+cost){
                dist[next] = tmp.first + cost;
                pq.push({dist[next],next});
            }
        }
    }
}