#include<iostream>
#include<queue>

using namespace std;

struct info{
    int y,x,d;  
};

int N, M, r, c, d, dy[4] = {-1,0,1,0}, dx[4] = {0,1,0,-1}, arr[51][51], cnt = 0;
bool visited[51][51];

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    cin >> N >> M >> r >> c >> d;
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            cin >> arr[i][j];
            if(arr[i][j])visited[i][j] = true;
        }
    }
    queue<info> q;
    q.push({r,c,d});
    while(!q.empty()){
        info tmp = q.front();
        q.pop();
        int check1 = 0, check2 = 0;
        if(!visited[tmp.y][tmp.x]){
            cnt++;
            visited[tmp.y][tmp.x] = true;
        }
        for(int d = 0; d < 4; d++){
            int ny = tmp.y+dy[d], nx =tmp.x+dx[d];
            if(ny<0||nx<0||ny>=N||nx>=M||arr[ny][nx])continue;
            check1++;
            if(visited[ny][nx])check2++;
        }
        if(check1==check2){
            tmp.y += dy[(tmp.d+2)%4];
            tmp.x += dx[(tmp.d+2)%4];
            if(tmp.y<0||tmp.x<0||tmp.y>=N||tmp.x>=M||arr[tmp.y][tmp.x])break;
            q.push(tmp);
        }
        else{
            for(int d = 1; d <= 4; d++){
                int D = tmp.d-d;
                if(D<0)D+=4;
                int ny = tmp.y + dy[D], nx = tmp.x + dx[D];
                if(ny < 0 || nx < 0 ||ny >= N || nx >= M || visited[ny][nx])continue;
                q.push({ny,nx,D});
                break;
            }
        }
    }
    cout << cnt;
}