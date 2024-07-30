#include <iostream>
#include <queue>
#include <string>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

char map[21][21];
bool visited[21][21];
int dy[4] = {-1,1,0,0}, dx[4] = {0,0,-1,1};

int main(void){
    fastio;
    int N , M, count = 0;
    string s;
    while(true){
        cin >> N >> M;
        if(N==0&&M==0)break;
        fill(&visited[0][0],&visited[20][21], false);
        count = 1;
        queue<pair<int,int>> q;
        getline(cin,s);
        for(int i = 0; i < M; i++){
            getline(cin,s);
            for(int j = 0; j < N; j++){
                map[i][j] = s[j];
                if(s[j] == '@'){
                    q.push({i,j});
                    visited [i][j] = true;
                }
            }
        }
        while(!q.empty()){
            pair<int,int> tmp = q.front();
            q.pop();
            for(int d = 0; d < 4; d++){
                int ny = tmp.first + dy[d], nx = tmp.second + dx[d];
                if(ny < 0 || nx < 0 || ny >= M || nx >= N || visited[ny][nx] || map[ny][nx] == '#')continue;
                visited[ny][nx] = true;
                count++;
                q.push({ny,nx});
            }
        }
        cout << count << "\n";
    }
}