#include <iostream>
#include <queue>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

struct info{
    int y, x, t, f;
};

int arr[101][101], dy[4] = {-1,1,0,0}, dx[4] = {0,0,-1,1};
bool visited[101][101][2];

int main(void){
    fastio;
    int N, M, T;
    cin >> N >> M >> T;
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            cin >> arr[i][j];
        }
    }
    queue<info> q;
    if(arr[0][0] == 2){
        q.push({0,0,0,1});
        visited[0][0][1] = true;
    }
    else {
        q.push({0,0,0,0});
        visited[0][0][0] = true;
    }
    while(!q.empty()){
        info tmp = q.front();
        if(tmp.t > T)break;
        if(tmp.y == N-1 && tmp.x == M-1){
            cout << tmp.t;
            return 0;
        }
        q.pop();
        for(int d = 0; d < 4; d++){
            int ny = tmp.y + dy[d], nx = tmp.x + dx[d], nf = tmp.f;
            if(ny<0||nx<0||ny>=N||nx>=M)continue;
            if(arr[ny][nx] == 1 && nf == 0)continue;
            if(arr[ny][nx] == 2)nf = 1;
            if(visited[ny][nx][nf])continue;
            visited[ny][nx][nf] = true;
            q.push({ny,nx,tmp.t+1,nf});
        }
    }
    cout << "Fail";
}