#include<iostream>

using namespace std;

int R, C, K, dy[4] = {-1,1,0,0}, dx[4] = {0,0,-1,1}, ret = 0;
bool visited[5][5];
char c;

void dfs(int y, int x, int cnt){
    if(cnt == K){
        if(y == 0&&x == C-1)ret++;
        return;
    }
    for(int d = 0; d < 4; d++){
        int ny = y + dy[d], nx = x + dx[d];
        if(ny < 0 || nx < 0 || ny >= R || nx >= C || visited[ny][nx])continue;
        visited[ny][nx] = true;
        dfs(ny,nx,cnt+1);
        visited[ny][nx] = false;
    }
}

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    cin >> R >> C >> K;
    for(int i = 0; i < R; i++){
        for(int j = 0; j < C; j++){
            cin >> c;
            if(c=='T')visited[i][j]=true;
        }
    }
    visited[R-1][0] = true;
    dfs(R-1,0,1);
    cout << ret;
}