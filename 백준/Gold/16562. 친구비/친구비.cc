#include <iostream>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int parent[10001],cost[10001], visited[10001];

int find(int x){
    if(parent[x] == x)return x;
    else return parent[x] = find(parent[x]);
}

void merge(int x, int y){
    int px = find(x), py = find(y);
    if(px>py)parent[px] = py;
    else parent[py] = px;
}

int main(void){
    fastio;
    int N, M, K, tmp1, tmp2, sum = 0;
    cin >> N >> M >> K;
    for(int i = 1; i <= N; i++){
        cin >> cost[i];
        parent[i] = i;
    }
    for(int i = 0; i < M; i++){
        cin >> tmp1 >> tmp2;
        merge(tmp1, tmp2);
    }
    for(int i = 1; i <= N; i++){
        find(i);
        if(visited[parent[i]] == 0){
            visited[parent[i]] = cost[i];
            sum += cost[i];
        }else if(visited[parent[i]] > cost[i]){
            sum -= (visited[parent[i]]-cost[i]);
            visited[parent[i]] = cost[i];
        }
    }
    if(sum > K)cout << "Oh no";
    else cout << sum;
}