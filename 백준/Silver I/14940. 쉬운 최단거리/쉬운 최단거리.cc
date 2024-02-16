#include <iostream>
#include <queue>
#include <tuple>
#include <cstring>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int n,m, sy, sx;
int dy[4] = {-1,1,0,0}, dx[4] = {0,0,-1,1};

int main(void){
    fastio;
    cin >> n >> m;
    int map[n][m], answer[n][m];
    memset(map,0,sizeof(map));
    memset(answer,0,sizeof(answer));
    bool visited[n][m];
    fill(&visited[0][0],&visited[n][m],false);
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> map[i][j];
            if(map[i][j] == 2){
                sy = i;
                sx = j;
            }
        }
    }
    queue<tuple<int,int,int>> q;
    q.push({sy,sx,0});
    visited[sy][sx] = true;
    while(!q.empty()){
        int y = get<0>(q.front()), x = get<1>(q.front()), count = get<2>(q.front());
        q.pop();
        for(int i = 0; i <4; i++){
            int ny = y+dy[i], nx = x+dx[i];
            if(ny<0||nx<0||ny>=n||nx>=m||visited[ny][nx])continue;
            visited[ny][nx] = true;
            if(map[ny][nx] == 0)continue;
            answer[ny][nx] = count+1;
            q.push({ny,nx,count+1});
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(!visited[i][j] && map[i][j] == 1)answer[i][j] = -1;
        }
    }
    for(int i = 0; i <n; i++){
        for(int j = 0; j < m; j++){
            cout << answer[i][j] <<" ";
        }
        cout << "\n";
    }
}