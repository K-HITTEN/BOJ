#include <iostream>
#include <queue>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int map[100][100],N,dy[4] = {-1,1,0,0}, dx[4] = {0,0,-1,1};
bool visited[100][100], make_bridge[100][100][5000];

struct info{
    int idx;
    int y;
    int x;
    int dist;
};

int main(void){
    fastio;
    cin >> N;
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            cin >> map[i][j];
        }
    }
    int idx = 1;
    queue<pair<int,int>> q;
    queue<info> iq;
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            if(map[i][j] == 1 && !visited[i][j]){
                q.push({i,j});
                map[i][j] = idx;
                visited[i][j] = true;
                iq.push({idx,i,j,0});
                while(!q.empty()){
                    pair<int,int> tmp = q.front();
                    q.pop();
                    for(int d = 0; d < 4; d++){
                        int ny = tmp.first + dy[d], nx = tmp.second + dx[d];
                        if(ny<0||nx<0||ny>=N||nx>=N||visited[ny][nx]||map[ny][nx] == 0)continue;
                        visited[ny][nx] = true;
                        map[ny][nx] = idx;
                        q.push({ny,nx});
                        iq.push({idx,ny,nx,0});
                    }
                }
                idx++;
            }
        }
    }
    while(!iq.empty()){
        info tmp = iq.front();
        iq.pop();
        for(int d = 0; d < 4; d++){
            int ny = tmp.y+dy[d], nx = tmp.x + dx[d];
            if(ny<0||nx<0||ny>=N||nx>=N||tmp.idx == map[ny][nx]||make_bridge[ny][nx][tmp.idx]){
                continue;
            }
            make_bridge[ny][nx][tmp.idx] = true;
            if(map[ny][nx] == 0){
                iq.push({tmp.idx,ny,nx,tmp.dist+1});
                continue;
            }
            cout << tmp.dist;
            return 0;
        }
    }
}