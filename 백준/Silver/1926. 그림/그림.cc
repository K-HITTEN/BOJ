#include <iostream>
#include <queue>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)
using namespace std;

int dy[4] = {-1,1,0,0}, dx[4] = {0,0,-1,1}, map[500][500], n, m, cnt = 0, max_val = 0;;
bool visited[500][500];

struct info{
    int y,x,cnt;
};

int main(){
    fastio;
    cin >> n >> m;
    queue<info> q;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> map[i][j];
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(map[i][j] == 1 && !visited[i][j]){
                cnt++;
                visited[i][j] = true;
                q.push({i,j,1});
                int cnt2 = 0;
                while(!q.empty()){
                    info tmp = q.front();
                    q.pop();
                    cnt2++;
                    for(int d = 0; d < 4; d++){
                        int ny = tmp.y+dy[d], nx = tmp.x+dx[d];
                        if(ny<0||nx<0||ny>=n||nx>=m||map[ny][nx]==0||visited[ny][nx])continue;
                        visited[ny][nx] = true;
                        q.push({ny,nx,tmp.cnt+1});\
                    }
                }
                max_val = max(max_val,cnt2);
            }
        }
    }
    cout << cnt << "\n" << max_val;
}
