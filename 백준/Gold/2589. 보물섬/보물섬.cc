#include<iostream>
#include<queue>

using namespace std;

struct info{
    int y,x,n;
};

int y, x, dy[4] = {-1,1,0,0}, dx[4] = {0,0,-1,1}, ret = 0;
char map[51][51];
bool visited[51][51];

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    cin >> y >> x;
    for(int i = 0; i < y; i++){
        for(int j = 0; j < x; j++){
            cin >> map[i][j];
        }
    }
    
    for(int i = 0; i < y; i++){
        for(int j = 0; j < x; j++){
            if(map[i][j]=='L'){
                fill(&visited[0][0],&visited[50][51],false);
                info point = {i,j,0};
                queue<info> q;
                q.push(point);
                visited[i][j] = true;
                while(!q.empty()){
                    info tmp = q.front();
                    if(tmp.n>point.n)point.n = tmp.n;
                    q.pop();
                    for(int d = 0; d < 4; d++){
                        int ny = tmp.y + dy[d], nx = tmp.x + dx[d];
                        if(ny<0||nx<0||ny>=y||nx>=x||visited[ny][nx]||map[ny][nx]=='W')continue;
                        visited[ny][nx] = true;
                        q.push({ny,nx,tmp.n+1});
                    }
                }
                fill(&visited[0][0],&visited[50][51],false);
                visited[point.y][point.x] = true;
                q.push({point.y,point.x,0});
                int cnt = 0;
                while(!q.empty()){
                    info tmp = q.front();
                    q.pop();
                    cnt = max(cnt,tmp.n);
                    for(int d = 0; d < 4; d++){
                        int ny = tmp.y+dy[d], nx = tmp.x+dx[d];
                        if(ny<0||nx<0||ny>=y||nx>=x||visited[ny][nx]||map[ny][nx]=='W')continue;
                        visited[ny][nx] = true;
                        q.push({ny,nx,tmp.n+1});
                    }
                }
                ret = max(ret,cnt);
            }
        }
    }
    cout << ret;
}