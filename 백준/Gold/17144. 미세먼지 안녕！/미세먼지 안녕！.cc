#include <iostream>
#include <queue>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int map[50][50];
int dy[4] = {-1,1,0,0},dx[4] = {0,0,-1,1};
int tcy[4] = {0,-1,0,1},tcx[4] = {1,0,-1,0};
int dcy[4] = {0,1,0,-1},dcx[4] = {1,0,-1,0};

struct info{
    int y;
    int x;
    int cost;
};

int main(void){
    fastio;
    int R,C,T;
    cin >> R >> C >> T;
    queue<info> q;
    queue<int> AC_q;
    pair<int,int> AC;
    for(int i = 0; i < R; i++){
        for(int j = 0; j < C; j++){
            cin >> map[i][j];
            if(map[i][j] == -1) AC = {i,j};
        }
    }
    for(int t = 0; t < T; t++){
        for(int i = 0; i < R; i++){
            for(int j = 0; j < C; j++){
                if(map[i][j]>0){
                    q.push({i,j,map[i][j]});
                    map[i][j] = 0;
                }
            }
        }
        while(!q.empty()){
            info tmp = q.front();
            q.pop();
            int flow = tmp.cost/5;
            for(int d = 0; d<4; d++){
                int ny = tmp.y + dy[d], nx = tmp.x + dx[d];
                if(ny<0||nx<0||ny>=R||nx>=C||map[ny][nx] == -1)continue;
                map[ny][nx] += flow;
                tmp.cost -= flow;
            }
            map[tmp.y][tmp.x] += tmp.cost;
        }
        while(!AC_q.empty())AC_q.pop();
        AC_q.push(0);
        int d = 0, ny = AC.first-1+tcy[d], nx = AC.second+tcx[d];
        while(ny!=AC.first-1||nx!=AC.second){
            AC_q.push(map[ny][nx]);
            map[ny][nx] = AC_q.front();
            AC_q.pop();
            ny += tcy[d];
            nx += tcx[d];
            if(ny<0||nx<0||ny>=R||nx>=C){
                ny -= tcy[d];
                nx -= tcx[d];
                d++;
                ny += tcy[d];
                nx += tcx[d];
            }
        }
        while(!AC_q.empty())AC_q.pop();
        AC_q.push(0);
        d = 0;
        ny = AC.first+dcy[d];
        nx = AC.second+dcx[d];
        while(ny!=AC.first||nx!=AC.second){
            AC_q.push(map[ny][nx]);
            map[ny][nx] = AC_q.front();
            AC_q.pop();
            ny += dcy[d];
            nx += dcx[d];
            if(ny<0||nx<0||ny>=R||nx>=C){
                ny -= dcy[d];
                nx -= dcx[d];
                d++;
                ny += dcy[d];
                nx += dcx[d];
            }
        }
    }
    int sum = 0;
    for(int i = 0; i < R; i++){
        for(int j = 0; j < C; j++){
            if(map[i][j]>0)sum+=map[i][j];
        }
    }
    cout << sum;
}