#include <iostream>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int N, M, K, tmp1, tmp2;
int parent[30001], dp[3001], person[30001], arr[30001];

int find(int x){
    if(parent[x] == x)return x;
    return parent[x] = find(parent[x]);
}

void merge(int x, int y){
    int px = find(x), py = find(y);
    if(px>py)parent[px] = py;
    else parent[py] = px;
}

int main(void){
    fastio;
    cin >> N >> M >> K;
    for(int i = 1; i <= N; i++){
        cin >> arr[i];
        person[i] = 1;
        parent[i] = i;
    }
    for(int i = 0; i < M; i++){
        cin >> tmp1 >> tmp2;
        merge(tmp1,tmp2);
    }
    for(int i = 1; i <= N; i++){
        if(find(i) != i){
            int tmp = find(i);
            arr[tmp] += arr[i];
            person[tmp] += person[i];
        }
    }
    for(int i = 1; i <= N; i++){
        if(find(i) != i)continue;
        for(int j = K-1; j - person[i] >=0; j--){
            dp[j] = max(dp[j],dp[j-person[i]]+arr[i]);
        }
    }
    cout << dp[K-1];
}