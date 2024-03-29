#include <iostream>
#include <queue>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int map[10][10],N,M, dy[4] = {-1,1,0,0}, dx[4] = {0,0,-1,1}, parent[7];
bool visited[10][10];

struct info{
    int idx;
    int y;
    int x;
    int dist;
    int _dy;
    int _dx; 
};

int find(int x){
    if(parent[x] == x)return x;
    else return parent[x] = find(parent[x]);
}

void merge(int x,int y){
    int px = find(x),py = find(y);
    if(px > py)parent[px] = py;
    else parent[py] = px;
}

int main(void){
    fastio;
    cin >> N >> M;
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            cin >> map[i][j];
        }
    }
    int idx = 1;
    queue<pair<int,int>> q;
    queue<info> iq;
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            if(map[i][j] == 1 && !visited[i][j]){
                q.push({i,j});
                map[i][j] = idx;
                visited[i][j] = true;
                iq.push({idx,i,j,0,-1,0});
                iq.push({idx,i,j,0,1,0});
                iq.push({idx,i,j,0,0,-1});
                iq.push({idx,i,j,0,0,1});
                while(!q.empty()){
                    pair<int,int> tmp = q.front();
                    q.pop();
                    for(int d = 0; d < 4; d++){
                        int ny = tmp.first + dy[d], nx = tmp.second + dx[d];
                        if(ny<0||nx<0||ny>=N||nx>=M||visited[ny][nx]||map[ny][nx] == 0)continue;
                        visited[ny][nx] = true;
                        map[ny][nx] = idx;
                        q.push({ny,nx});
                        iq.push({idx,ny,nx,0,-1,0});
                        iq.push({idx,ny,nx,0,1,0});
                        iq.push({idx,ny,nx,0,0,-1});
                        iq.push({idx,ny,nx,0,0,1});
                    }
                }
                idx++;
            }
        }
    }
    for(int i = 1; i <= 6; i++)parent[i] = i;
    idx -=2;
    int check = 0;
    int result = 0;
    while(!iq.empty() && check!=idx){
        info tmp = iq.front();
        iq.pop();
        int ny = tmp.y+tmp._dy, nx = tmp.x + tmp._dx;
        if(ny<0||nx<0||ny>=N||nx>=M) continue;
        if(map[ny][nx] == 0){
            iq.push({tmp.idx,ny,nx,tmp.dist+1,tmp._dy,tmp._dx});
            continue;
        }
        if(tmp.dist == 1)continue;
        if(find(map[ny][nx]) == find(tmp.idx))continue;
        merge(map[ny][nx],tmp.idx);
        result += tmp.dist;
        check++;
    }
    if(check == idx)cout << result;
    else cout << -1;
}