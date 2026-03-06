#include<iostream>
#include<queue>

using namespace std;

char map[251][251];
bool visited[251][251];
int R, C, O, V, o, v, dy[4] = {-1,1,0,0}, dx[4] = {0,0,-1,1};
queue<pair<int,int>> q;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    cin >> R >> C;
    for(int i = 0; i < R; i++){
        for(int j = 0; j < C; j++){
            cin >> map[i][j];
            if(map[i][j]=='#')visited[i][j] = true;
        }
    }
    for(int i = 0; i < R; i++){
        for(int j = 0; j < C; j++){
            if(!visited[i][j]){
                q.push({i,j});
                visited[i][j] = true;
                o = v = 0;
                while(!q.empty()){
                    pair<int,int> tmp = q.front();
                    q.pop();
                    if(map[tmp.first][tmp.second]=='o')o++;
                    else if(map[tmp.first][tmp.second]=='v')v++;
                    for(int d = 0; d < 4; d++){
                        int ny = tmp.first + dy[d], nx = tmp.second + dx[d];
                        if(ny < 0 || nx < 0 || ny >= R || nx >= C || visited[ny][nx])continue;
                        visited[ny][nx] = true;
                        q.push({ny,nx});
                    }
                }
                if(v<o)O+=o;
                else V+=v;
            }
        }
    }
    cout << O << ' ' << V;
}