#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

struct info{
    int from,to;
    long long cost;
};

int N,M;
vector<info> v;
long long dist[501] = {0,};

int main(void){
    fastio;
    fill(dist,dist+501,987654321);
    cin >> N >> M;
    for(int i = 0; i < M; i++){
        info tmp;
        cin >> tmp.from >> tmp.to >> tmp.cost;
        v.push_back(tmp);
    }
    dist[1] = 0;
    for(int i = 1; i < N; i++){
        for(int j = 0; j < v.size(); j++){
            if(dist[v[j].from] >= 987654321)continue;
            if(dist[v[j].to] > dist[v[j].from] + v[j].cost) dist[v[j].to] = dist[v[j].from] + v[j].cost;
        }
    }
    for(int i = 0; i < v.size(); i++){
        if(dist[v[i].from] >= 987654321)continue;
        if(dist[v[i].to] > dist[v[i].from] + v[i].cost){
            cout << "-1\n";
            return 0;
        }
    }
    for(int i = 2; i <= N; i++){
        if(dist[i] >= 987654321)cout << -1 << "\n";
        else cout << dist[i] << "\n";
    }
}