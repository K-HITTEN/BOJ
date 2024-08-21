#include <iostream>
#include <queue>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int dy[8] = {-1,1,0,0,-1,-1,1,1},dx[8] = {0,0,-1,1,-1,1,-1,1};
char map[101][101];
bool visited[101][101];

int main(void){
    fastio;
    int N, M, cnt = 0;
    cin >> N >> M;
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            cin >> map[i][j];
        }
    }
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            if(map[i][j] == '#'&& !visited[i][j]){
                cnt++;
                queue<pair<int,int>> q;
                q.push({i,j});
                visited[i][j] = true;
                while(!q.empty()){
                    pair<int,int> tmp = q.front();
                    q.pop();
                    for(int d = 0; d < 8; d++){
                        int ny = tmp.first + dy[d], nx = tmp.second + dx[d];
                        if(ny<0||nx<0||ny>=N||nx>=M||visited[ny][nx]||map[ny][nx] != '#')continue;
                        q.push({ny,nx});
                        visited[ny][nx] = true;
                    }
                }
            }
        }
    }
    cout << cnt;
}