#include <iostream>
#include <cstring>
#include <string>
#include <queue>
#include <tuple>
#define fastio cin.tie(0) -> sync_with_stdio(0)

using namespace std;

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
    queue<tuple<int,int,int>> q;
    q.push({1,1,0});
    while(!q.empty()){
        int y = get<0>(q.front()), x = get<1>(q.front());
        int check = get<2>(q.front());
        q.pop();
        if(y == N && x == M){
            break;
        }
        for(int d = 0; d < 4; d++){
            int my = y+dy[d], mx = x +dx[d];
            if((my>0)&&(mx>0)&&(my<=N)&&(mx<=M)){
                if(map[my][mx] == 0){
                    if(!visited[my][mx][check]){ 
                        dist[my][mx][check] = dist[y][x][check] +1;
                        visited[my][mx][check] = true;
                        q.push({my,mx,check});
                    }
                }else{
                    if(check< K &&!visited[my][mx][check+1]){ 
                        dist[my][mx][check+1] = dist[y][x][check] +1;
                        visited[my][mx][check+1] = true;
                        q.push({my,mx,check+1});
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


