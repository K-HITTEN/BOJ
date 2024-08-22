#include <iostream>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int parent[1000001];

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
    int T, N, K, M, tmp1, tmp2;
    cin >> T;
    for(int t = 1; t <= T; t++){
        cout << "Scenario " << t << ":\n";
        cin >> N >> K;
        for(int i = 0; i < N; i++)parent[i] = i;
        for(int i = 0; i < K; i++){
            cin >> tmp1 >> tmp2;
            merge(tmp1, tmp2);
        }
        cin >> M;
        for(int i = 0; i < M; i++){
            cin >> tmp1 >> tmp2;
            if(find(tmp1) == find(tmp2))cout << 1 << "\n";
            else cout << 0 << "\n";
        }
        cout << "\n";
    }
}