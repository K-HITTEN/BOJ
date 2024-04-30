#include <iostream>
#include <algorithm>
#include <vector>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

vector<int> v;
int parent[4000001];

int find(int x){
    if(parent[x] == x)return x;
    return parent[x] = find(parent[x]);
}

void merge(int x, int y){
    int px = find(x), py = find(y);
    if(px>py)parent[py] = px;
    else parent[px] = py;
}

int main(void){
    fastio;
    int N, M, K, tmp;
    cin >> N >> M >> K;
    v.resize(M);
    for(int i = 0; i < M; i++)cin >> v[i];
    sort(v.begin(),v.end());
    for(int i = 0; i < M; i++)parent[i] = i;
    for(int i = 0; i < K; i++){
        cin >> tmp;
        int idx = lower_bound(v.begin(),v.end(),tmp+1) - v.begin();
        cout << v[find(parent[idx])] <<"\n";
        merge(find(parent[idx]),find(parent[idx])+1);
    }
}