#include <iostream>
#include <cstring>
#include <string>
#include <queue>
#include <tuple>
#define fastio cin.tie(0) -> sync_with_stdio(0)

using namespace std;

struct info{
    int y, x, check;
    bool night, waiting;
};

int map[1001][1001];
int dist[1001][1001][11];
int dx[4] = {0,0,1,-1}, dy[4] = {1,-1,0,0};
bool visited[1001][1001][11];

int main(void){
    fastio;
    int N, M, K;
    string s;
    cin >> N >> M >> K;
    memset(dist,-1,sizeof(dist));
    getline(cin,s);
    for(int i = 1; i <= N; i++){
        getline(cin,s);
        for(int j = 1; j <= M; j++){
            map[i][j] = (int)s[j-1]-48;
        }
    }
    visited[1][1][0] = true;
    dist[1][1][0] = 1;
    queue<info> q;
    info tmp;
    tmp.y = 1;
    tmp.x = 1;
    tmp.check = 0;
    tmp.night = false;
    tmp.waiting =false;
    q.push(tmp);
    while(!q.empty()){
        tmp = q.front();
        q.pop();
        // int y = get<0>(q.front()), x = get<1>(q.front());
        // int check = get<2>(q.front());
        if(tmp.y == N && tmp.x == M){
            break;
        }
        for(int d = 0; d < 4; d++){
            int my = tmp.y+dy[d], mx = tmp.x +dx[d];
            if((my>0)&&(mx>0)&&(my<=N)&&(mx<=M)){
                if(map[my][mx] == 0){
                    if(!visited[my][mx][tmp.check]){ 
                        dist[my][mx][tmp.check] = dist[tmp.y][tmp.x][tmp.check] +1;
                        visited[my][mx][tmp.check] = true;
                        info tmp2;
                        tmp2.y = my;
                        tmp2.x = mx;
                        tmp2.check = tmp.check;
                        tmp2.night = !tmp.night;
                        tmp2.waiting = false;
                        q.push(tmp2);
                    }
                }else{
                    if(tmp.check< K &&!visited[my][mx][tmp.check+1]){
                        if(tmp.night){
                            info tmp2;
                            tmp2.y = tmp.y;
                            tmp2.x = tmp.x;
                            tmp2.check = tmp.check;
                            tmp2.night = !tmp.night;
                            tmp2.waiting = true;
                            q.push(tmp2);  
                        }
                        else{
                            if(tmp.waiting)dist[my][mx][tmp.check+1] = dist[tmp.y][tmp.x][tmp.check] +2;
                            else dist[my][mx][tmp.check+1] = dist[tmp.y][tmp.x][tmp.check] +1;
                            visited[my][mx][tmp.check+1] = true;
                            info tmp2;
                            tmp2.y = my;
                            tmp2.x = mx;
                            tmp2.check = tmp.check+1;
                            tmp2.night = !tmp.night;
                            tmp2.waiting = false;
                            q.push(tmp2);
                        }
                    }
                }
            }
        }
    }
    int result = -1;
    for(int i = 0; i <= K; i++){
        if(dist[N][M][i]>0){
            if(result == -1 ||result > dist[N][M][i]) result = dist[N][M][i];
        }
    }
    cout << result;
}


