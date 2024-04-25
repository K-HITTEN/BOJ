#include <iostream>
#include <queue>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int map[1001][1001], dy[4] = {-1,1,0,0}, dx[4] = {0,0,-1,1};
bool visited[1001][1001];

int main(void){
    fastio;
    int N, M;
    string s;
    cin >> N >> M;
    queue<pair<int,int>> q;
    for(int i = 0; i < N; i++){
        cin >> s;
        for(int j = 0; j < M; j++){
            map[i][j] = (int)s[j] - 48;
            if(map[i][j] == 1)visited[i][j] = true;
            else if(i == 0)q.push({i,j});
        }
    }
    while(!q.empty()){
        pair<int,int> tmp = q.front();
        q.pop();
        for(int d = 0; d< 4; d++){
            int ny = tmp.first + dy[d], nx = tmp.second + dx[d];
            if(ny < 0 || nx < 0 || ny >= N || nx >= M || visited[ny][nx])continue;
            visited[ny][nx] = true;
            if(ny == N-1){
                cout << "YES";
                return 0;
            }
            q.push({ny,nx});
        }
    }
    cout << "NO";
}