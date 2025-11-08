#include<iostream>
#include<queue>

using namespace std;

int N, M, K, r, c, val, ret = 1, dy[4] = {-1,1,0,0}, dx[4] = {0,0,-1,1};
bool visited[101][101], arr[101][101];
queue<pair<int,int>> q;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    cin >> N >> M >> K;
    while(K--){
        cin >> r >> c;
        arr[r][c] = true;
    }
    for(int i = 1; i <= N; i++){
        for(int j = 1; j <= M; j++){
            if(arr[i][j]&&!visited[i][j]){
                q.push({i,j});
                visited[i][j] = true;
                val = 1;
                while(!q.empty()){
                    pair<int,int> tmp = q.front();
                    q.pop();
                    for(int d = 0; d < 4; d++){
                        int ny = tmp.first+dy[d], nx = tmp.second+dx[d];
                        if(ny<=0||nx<=0||ny>N||nx>M||!arr[ny][nx]||visited[ny][nx])continue;
                        val++;
                        visited[ny][nx] = true;
                        q.push({ny,nx});
                    }
                }
                ret = max(ret,val);
            }
        }
    }
    cout << ret;
}