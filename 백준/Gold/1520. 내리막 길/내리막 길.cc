#include<iostream>

using namespace std;

int N,M, arr[501][501], dp[501][501], dy[4]={-1,1,0,0},dx[4]={0,0,-1,1};

int dfs(int y, int x){
    if(y==N-1&&x==M-1)return 1;
    if(dp[y][x] != -1)return dp[y][x];
    dp[y][x] = 0;
    for(int d = 0; d < 4; d++){
        int ny=y+dy[d], nx=x+dx[d];
        if(ny<0||nx<0||ny>=N||nx>=M||arr[ny][nx]>=arr[y][x])continue;
        dp[y][x] += dfs(ny,nx);
    }
    return dp[y][x];
}

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    cin >> N >> M;
    fill(&dp[0][0],&dp[500][501],-1);
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            cin >> arr[i][j];
        }
    }
    cout << dfs(0,0);
}