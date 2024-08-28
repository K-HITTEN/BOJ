#include <iostream>
#include <queue>
#include <cmath>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

char map[100][100], c;
int dy[4] = {-1,1,0,0}, dx[4] = {0,0,-1,1}, N, M, B = 0, W = 0, cnt;
bool visited[100][100];

int main(void) {
    fastio;
    cin >> N >> M;
    for(int i = 0; i < M; i++){
        for(int j = 0; j < N; j++){
            cin >> map[i][j];
        }
    }
    queue<pair<int, int>> q;
    for(int i = 0; i < M; i++){
        for(int j = 0; j < N; j++){
            if(!visited[i][j]){
                c = map[i][j];
                q.push({i,j});
                visited[i][j] = true;
                cnt = 1;
                while(!q.empty()){
                    pair<int,int> tmp = q.front();
                    q.pop();
                    for(int d = 0; d < 4; d++){
                        int ny = tmp.first+dy[d], nx = tmp.second+dx[d];
                        if(ny<0||nx<0||ny>=M||nx>=N||visited[ny][nx]||map[ny][nx]!=c)continue;
                        visited[ny][nx] = true;
                        cnt++;
                        q.push({ny,nx});
                    }
                }
                if(c == 'W')W+=pow(cnt,2);
                else B+=pow(cnt,2);
            }
        }
    }
    cout << W << " " << B;
}