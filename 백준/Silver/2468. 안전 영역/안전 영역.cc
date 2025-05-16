#include<iostream>
#include<queue>

using namespace std;

int N, dy[4] = {-1,1,0,0}, dx[4] = {0,0,-1,1}, maxH = 0, arr[101][101], ret = 1;
bool visited[101][101];

void bfs(int idx){
    fill(&visited[0][0],&visited[100][101],false);
    queue<pair<int,int>> q;
    int cnt = 0;
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            if(arr[i][j]>idx&&!visited[i][j]){
                cnt++;
                q.push({i,j});
                visited[i][j] = true;
                while(!q.empty()){
                    pair<int,int> tmp = q.front();
                    q.pop();
                    for(int d = 0; d < 4; d++){
                        int ny = tmp.first + dy[d], nx = tmp.second + dx[d];
                        if(ny<0||nx<0||ny>=N||nx>=N||visited[ny][nx]||arr[ny][nx]<=idx)continue;
                        visited[ny][nx] = true;
                        q.push({ny,nx});
                    }
                }
            }
        }
    }
    ret = max(ret,cnt);
}

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    cin >> N;
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            cin >> arr[i][j];
            maxH = max(maxH,arr[i][j]);
        }
    }
    for(int i = 1; i < maxH; i++){
        bfs(i);
    }
    cout << ret;
}