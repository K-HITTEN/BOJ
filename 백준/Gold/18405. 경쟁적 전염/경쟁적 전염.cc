#include <iostream>
#include <queue>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int map[201][201];
int dy[4] = {-1,1,0,0}, dx[4] = {0,0,-1,1};
bool visited[201][201];

struct info{
    int day,r,c;
};

int main(void){
    fastio;
    int N, K, S, X, Y;
    cin >> N >> K;
    queue<info> q;
    for(int i = 1; i <= N; i++){
        for(int j = 1; j <= N; j++){
            cin >> map[i][j];
            if(map[i][j] > 0)visited[i][j] = true;
            if(map[i][j] == 1) q.push({0,i,j}); 
        }
    }
    cin >> S >> X >> Y;
    for(int k = 2; k <= K; k++){
        for(int i = 1; i <= N; i++){
            for(int j = 1; j <= N; j++){
                if(map[i][j] == k){
                    q.push({0,i,j});
                }
            }
        }
    }
    while(!q.empty()){
        info tmp = q.front();
        q.pop();
        if(tmp.day==S)break;
        for(int d = 0; d < 4; d++){
            int ny = tmp.r+dy[d], nx = tmp.c+dx[d];
            if(ny < 1 || nx < 1 || ny > N || nx > N || visited[ny][nx])continue;
            visited[ny][nx] = true;
            map[ny][nx] = map[tmp.r][tmp.c];
            q.push({tmp.day+1,ny,nx});
        }
    }
    cout << map[X][Y];
}

