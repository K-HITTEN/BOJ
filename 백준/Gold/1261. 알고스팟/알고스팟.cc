#include <iostream>
#include <queue>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int N, M, result = 0, map[100][100], dy[4]={-1,1,0,0}, dx[4]={0,0,-1,1};
bool visited[100][100];
queue<pair<int,int>> q;

void wall(){
    fill(&visited[0][0],&visited[99][100],false);
    visited[0][0] = true;
    q.push({0,0});
    while(!q.empty()){
        pair<int,int> tmp = q.front();
        q.pop();
        for(int d = 0; d < 4; d++){
            int ny = tmp.first + dy[d], nx = tmp.second + dx[d];
            if(ny<0||nx<0||ny>=M||nx>=N||visited[ny][nx])continue;
            visited[ny][nx] = true;
            if(map[ny][nx] == 1)map[ny][nx] = 0;
            else q.push({ny,nx});
        }
    }
}

int main(void){
    fastio;
    string s;
    cin >> N >> M;
    pair<int,int> finish = {M-1,N-1};
    for(int i = 0; i < M; i++){
        cin >> s;
        for(int j = 0; j < N; j++){
            map[i][j] = (int)s[j]-48;
        }
    }
    while(true){
        q.push({0,0});
        fill(&visited[0][0],&visited[99][100],false);
        visited[0][0] = true;
        while(!q.empty()){
            pair<int,int> tmp = q.front();
            q.pop();
            if(tmp == finish){
                cout << result;
                return 0;
            }
            for(int d = 0; d < 4; d++){
                int ny = tmp.first + dy[d], nx = tmp.second + dx[d];
                if(ny<0||nx<0||ny>=M||nx>=N||visited[ny][nx]||map[ny][nx] == 1)continue;
                visited[ny][nx] = true;
                q.push({ny,nx});
            }
        }
        wall();
        result++;
    }
}