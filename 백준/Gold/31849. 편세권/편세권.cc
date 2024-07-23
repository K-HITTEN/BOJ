#include <iostream>
#include <queue>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

struct info{
    long long y,x,d;
};

int visited[1001][1001][2];
long long dy[4] = {-1,1,0,0}, dx[4] = {0,0,-1,1}, min_val = 9876543210000000;

int main(void){
    fastio;
    long long N, M, R, C, a,b,p;
    cin >> N >> M >> R >> C;
    queue<info> q;
    for(int i = 0; i < R; i++){
        cin>> a >> b >> p;
        visited[a][b][1] = p;
    }
    for(int i = 0; i < C; i++){
        cin >> a >> b;
        q.push({a,b,0});
        visited[a][b][0] = 1;
    }
    while(!q.empty()){
        info tmp = q.front();
        q.pop();
        for(int d = 0; d < 4; d++){
            int ny = tmp.y+dy[d], nx = tmp.x+dx[d];
            if(ny<1||nx<1||ny>N||nx>M||visited[ny][nx][0] == 1)continue;
            if(visited[ny][nx][1]>0){
                min_val = min(min_val,(tmp.d+1)*visited[ny][nx][1]);
            }
            visited[ny][nx][0] = 1;
            q.push({ny,nx,tmp.d+1});
        }
    }
    cout << min_val;
}