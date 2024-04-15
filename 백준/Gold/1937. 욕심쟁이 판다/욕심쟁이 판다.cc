#include <iostream>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int map[500][500], N, max_move = 0, dp[500][500];
int dy[4] = {-1,1,0,0}, dx[4] = {0,0,-1,1};
bool visited[500][500];

int dfs(int y, int x, int idx, int cost){
    if(visited[y][x])return dp[y][x];
    visited[y][x] = true;
    dp[y][x] = 1;
    for(int d = 0; d < 4; d++){
        int ny = y+dy[d], nx = x+dx[d];
        if(ny<0||nx<0||ny>=N||nx>=N||cost>=map[ny][nx])continue;
        dp[y][x] = max(dp[y][x],dfs(ny,nx,idx+1,map[ny][nx])+1);
    }
    return dp[y][x];
}


int main(void){
    fastio;
    cin >> N;
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            cin >> map[i][j];
        }
    }
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            if(!visited[i][j])dfs(i,j,1,map[i][j]);
            max_move = max(max_move,dp[i][j]);
        }
    }
    cout << max_move;
}