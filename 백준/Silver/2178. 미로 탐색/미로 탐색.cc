#include <iostream>
#include <queue>
#include <tuple>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int N, M;
int dy[4] = {-1,1,0,0}, dx[4] = {0,0,-1,1};
bool visited[101][101] = {false,};

int main(void){
    fastio;
    cin >> N >> M;
    string s;
    for(int i = 1; i <= N; i++){
        cin >> s;
        for(int j = 1; j <= M; j++){
            if(s[j-1] == '0')visited[i][j] = true;
        }
    }
    queue<tuple<int,int,int>> q;
    visited[1][1] = true;
    q.push({1,1,1});
    while(!q.empty()){
        tuple<int,int,int> tmp = q.front();
        q.pop();
        if(get<0>(tmp) == N && get<1>(tmp) == M){
            cout << get<2>(tmp);
            return 0;
        }
        for(int d = 0; d < 4; d++){
            int ny = get<0>(tmp)+dy[d], nx = get<1>(tmp)+dx[d];
            if(ny < 1 || nx < 1 || ny > N || nx > M || visited[ny][nx])continue;
            visited[ny][nx] = true;
            q.push({ny,nx,get<2>(tmp)+1});
        }
    }
}