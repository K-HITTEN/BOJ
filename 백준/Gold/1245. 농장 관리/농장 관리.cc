#include<iostream>
#include<queue>
#include<tuple>

using namespace std;

struct info{
    int y,x,n;
};

int arr[101][70], dy[8] = {-1,1,0,0,-1,-1,1,1}, dx[8] = {0,0,-1,1,-1,1,-1,1}, cnt = 0;
bool checked[501], visited[101][70];

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    int N, M;
    cin >> N >> M;
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            cin >> arr[i][j];
            if(arr[i][j] == 0)visited[i][j] = true;
            if(!checked[arr[i][j]])checked[arr[i][j]] = true;
        }
    }
    for(int k = 500; k > 0; k--){
        if(checked[k]){
            for(int i = 0; i < N; i++){
                for(int j = 0; j < M; j++){
                    if(!visited[i][j]&&arr[i][j]==k){
                        queue<info> q;
                        q.push({i,j,k});
                        cnt++;
                        while(!q.empty()){
                            info tmp = q.front();
                            q.pop();
                            for(int d = 0; d < 8; d++){
                                int ny = tmp.y+dy[d], nx = tmp.x+dx[d];
                                if(ny < 0 || nx < 0 || ny >= N || nx >= M || visited[ny][nx] || arr[ny][nx]>tmp.n)continue;
                                visited[ny][nx] = true;
                                q.push({ny,nx,arr[ny][nx]});
                            }
                        }
                    }
                }
            }
        }
    }
    cout << cnt;
}