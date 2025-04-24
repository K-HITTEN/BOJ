#include<iostream>
#include<queue>

using namespace std;

char map[101][101];
int dy[4] = {-1,1,0,0}, dx[4] = {0,0,-1,1}, cnt = 0;
bool visited[101][101];

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    int R, C;
    cin >> R >> C;
    for(int i = 0; i < R; i++){
        for(int j = 0; j < C; j++){
            cin >> map[i][j];
        }
    }
    for(int i = 0; i < R; i++){
        for(int j = 0; j < C; j++){
            if(map[i][j]=='#'&&!visited[i][j]){
                cnt++;
                visited[i][j] = true;
                queue<pair<int,int>> q;
                q.push({i,j});
                while(!q.empty()){
                    pair<int,int> tmp = q.front();
                    q.pop();
                    for(int d = 0; d < 4; d++){
                        int ny = tmp.first + dy[d], nx = tmp.second + dx[d];
                        if(ny<0||nx<0||ny>=R||nx>=C||visited[ny][nx]||map[ny][nx]=='.')continue;
                        visited[ny][nx] = true;
                        q.push({ny,nx});
                    }
                }
            }
        }
    }
    cout << cnt;
}