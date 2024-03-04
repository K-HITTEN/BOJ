#include <iostream> 
#include <queue>
#include <algorithm>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int N,E;
int arr[801][801] = {0,};

long long dijkstra(int x, int y){
    int dist[801];
    fill(dist,dist+801,987654321);
    dist[x] = 0;
    bool visited[801] = {false,};
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
    pq.push({0,x});
    while(!pq.empty()){
        pair<int,int> tmp = pq.top();
        pq.pop();
        if(tmp.second == y)return dist[y];
        if(visited[tmp.second]) continue;
        visited[tmp.second] = true;
        for(int i = 1; i <= N; i++){
            if(visited[i])continue;
            if(arr[tmp.second][i]+tmp.first<dist[i]){
                pq.push({arr[tmp.second][i]+tmp.first,i});
                dist[i] = arr[tmp.second][i]+tmp.first;
            }
        }
    }
    return 987654321;
}

int main(void){
    fastio;
    int tmp1, tmp2, tmp3, v1, v2;
    cin >> N >> E;
    fill(&arr[0][0],&arr[800][800],987654321);
    for(int i = 1; i <= N; i++)arr[i][i] = 0;
    for(int i = 0; i < E; i++){
        cin >> tmp1 >> tmp2 >> tmp3;
        arr[tmp1][tmp2] = tmp3;
        arr[tmp2][tmp1] = tmp3;
    }
    cin >> v1 >> v2;
    long long result1 = dijkstra(1,v1)+dijkstra(v1,v2)+dijkstra(v2,N);
    long long result2 = dijkstra(1,v2)+dijkstra(v2,v1)+dijkstra(v1,N);
    long long result = min(result1,result2);

    if(result >= 987654321) cout << -1;
    else cout << result;
}