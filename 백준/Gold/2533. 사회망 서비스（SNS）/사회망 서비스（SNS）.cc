#include <iostream>
#include <vector>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

vector <int> v[1000001];
int dp[1000001][2];
bool visited[1000001];

void dfs(int x){
    visited[x] = true;
    dp[x][0] = 1;
    for(int i = 0; i <v[x].size(); i++){
        if(visited[v[x][i]])continue;
        dfs(v[x][i]);
        dp[x][1]+=dp[v[x][i]][0];
        dp[x][0]+=min(dp[v[x][i]][0],dp[v[x][i]][1]);
    }
}

int main(void){
    fastio;
    int N, tmp1, tmp2;
    cin >> N;
    for(int i = 1; i < N; i++){
        cin >> tmp1 >> tmp2;
        v[tmp1].push_back(tmp2);
        v[tmp2].push_back(tmp1);
    }
    dfs(1);
    cout << min(dp[1][0],dp[1][1]);
}