#include <iostream>
#include <queue>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int R,C,N,tmp;
char map[101][101];
bool visited[101][101];
string s;
int dy[4] = {-1,1,0,0}, dx[4] = {0,0,-1,1};

void leftThrow(int x){
    for(int i = 0; i < C; i++){
        if(map[R-x][i] == 'x'){
            map[R-x][i] = '.';
            return;
        }
    }
}

void rightThrow(int x){
    for(int i = C-1; i >= 0; i--){
        if(map[R-x][i] == 'x'){
            map[R-x][i] = '.';
            return;
        }
    }
}

bool checkMap(){
    queue<pair<int,int>> q;
    fill(&visited[0][0],&visited[99][100],false);
    for(int k = 0; k < C; k++){
        if(map[R-1][k] == 'x' && !visited[R-1][k]){
            visited[R-1][k] = true;
            q.push({R-1,k});
            while(!q.empty()){
                pair<int,int> temp = q.front();
                q.pop();
                for(int d = 0; d <4; d++){
                    int ny = temp.first + dy[d], nx = temp.second + dx[d];
                    if(ny<0||nx<0||ny>=R||nx>=C||visited[ny][nx]||map[ny][nx] =='.')continue;
                    visited[ny][nx] = true;
                    q.push({ny,nx});
                }
            }
        }
    }
    for(int i = 0; i < R; i++){
        for(int j = 0; j < C; j++){
            if(map[i][j] == 'x' && !visited[i][j])return true;
        }
    }
    return false;
}

void gravity(){
    int ret = R-1;
    for(int i = 0; i < C; i++){
        for(int j = R-1; j >= 0; j--){
            if(map[j][i] == '.' || visited[j][i])continue;
            int h = 0;
            for(int k = j+1; k<R; k++){
                if(map[k][i] == 'x'&& visited[k][i]){
                    ret = min(ret,k-j-1);
                    break;
                }
                else if(k == R-1){
                    ret = min(ret,k-j);
                }
            }
        }
    }
    for(int i = 0; i < C; i++){
        for(int j = R-1; j >=0; j--){
            if(map[j][i] == 'x' && !visited[j][i]){
                map[j][i] = '.';
                map[j+ret][i] = 'x';
            }
        }
    }
}

int main(void){
    fastio;
    cin >> R >> C;
    for(int i = 0; i < R; i++){
        cin >> s;
        for(int j = 0; j < C; j++){
            map[i][j] = s[j];
        }
    }
    cin >> N;
    for(int i = 0; i < N; i++){
        cin >> tmp;
        if(i%2 == 0)leftThrow(tmp);
        else rightThrow(tmp);
        if(checkMap()){
            gravity();
        }
    }
    for(int i = 0; i < R; i++){
        for(int j = 0; j < C; j++){
            cout << map[i][j];
        }
        cout << "\n";
    }
}