#include <iostream>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

char map[51][51];
bool visited[51][51], FLAG;
int N, M, dy[4] = {-1,1,0,0}, dx[4] = {0,0,-1,1};

void dfs(int y, int x, int by, int bx, int l){
    visited[y][x] = true;
    for(int d = 0; d < 4; d++){
        int ny = y+dy[d], nx = x+dx[d];
        if(ny<0||nx<0||ny>=N||nx>=M||(by==ny&&bx==nx)||map[y][x]!=map[ny][nx])continue;
        if(visited[ny][nx]&&l>=3){
            FLAG = true;
            return;
        }
        else if(!visited[ny][nx]){
            dfs(ny,nx,y,x,l+1);
        }
    }
}


int main(void){
    fastio;
    cin >> N >> M;
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            cin >> map[i][j];
        }
    }
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            if(!visited[i][j]){
                dfs(i,j,i,j,0);
                if(FLAG){
                    cout << "Yes";
                    return 0;
                }
            }
        }
    }
    cout << "No";
}