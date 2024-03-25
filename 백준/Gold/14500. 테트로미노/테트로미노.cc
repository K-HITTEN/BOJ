#include <iostream>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int map[500][500] = {0,};
int N, M, answer = 0;
bool visited[500][500] = {false};

int dy[4] = {-1,1,0,0}, dx[4] = {0,0,-1,1};

void dfs(int y, int x, int count, int res_cnt){
    if(count == 4){
        if(res_cnt>answer)answer=res_cnt;
        return;
    }
    for(int d = 0; d < 4; d++){
        int ny = y+dy[d], nx = x+dx[d];
        if(ny<0||nx<0||ny>=N||nx>=M||visited[ny][nx])continue;
        visited[ny][nx] = true;
        dfs(ny,nx,count+1,res_cnt+map[ny][nx]);
        visited[ny][nx] = false;
    }
}



int main(void){
    fastio;
    cin >> N >> M;
    for(int i = 0; i < N; i++){
        for(int j = 0; j <M; j++){
            cin >> map[i][j];
        }
    }
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            visited[i][j] = true;
            dfs(i,j,1,map[i][j]);
            visited[i][j] = false;
            if(i-1>=0 && j-1>=0 && i+1<N){  //ㅓ
                answer = max(answer,map[i][j] + map[i-1][j] + map[i+1][j] + map[i][j-1]);
            }
            if(i-1>=0 && j+1<M && i+1<N){  //ㅏ
                answer = max(answer,map[i][j] + map[i-1][j] + map[i+1][j] + map[i][j+1]);
            }
            if(i-1>=0 && j-1>=0 && j+1<M){  //ㅗ
                answer = max(answer,map[i][j] + map[i-1][j] + map[i][j+1] + map[i][j-1]);
            }
            if(j+1<M && j-1>=0 && i+1<N){  //ㅜ
                answer = max(answer,map[i][j] + map[i][j+1] + map[i+1][j] + map[i][j-1]);
            }
        }
    }
    cout << answer;
}