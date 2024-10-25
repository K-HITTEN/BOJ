#include<iostream>
#include<queue>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int arr[51][51], dy[8] = {-1,1,0,0,-1,-1,1,1}, dx[8] = {0,0,-1,1,-1,1,-1,1};
bool visited[51][51];

struct info{
    int y,x,num;
};

int main(void){
    fastio;
    int N, M, max_val = 0;
    cin >> N >> M;
    queue<info> q;
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            cin >> arr[i][j];
            if(arr[i][j]==1){
                q.push({i,j,0});
                visited[i][j] = true;
            }
        }
    }
    while(!q.empty()){
        info tmp = q.front();
        q.pop();
        max_val = max(max_val,tmp.num);
        for(int d = 0; d < 8; d++){
            int ny = tmp.y + dy[d], nx = tmp.x + dx[d];
            if(ny<0||nx<0||ny>=N||nx>=M||visited[ny][nx])continue;
            visited[ny][nx] = true;
            q.push({ny,nx,tmp.num+1});
        }
    }
    cout<< max_val;
}