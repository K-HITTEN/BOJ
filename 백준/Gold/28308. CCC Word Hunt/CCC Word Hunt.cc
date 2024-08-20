#include <iostream>
#include <stack>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int cnt = 0, N, M;
string s;
char map[101][101];

void dfs(int idx, int y, int x, int dy, int dx, bool isCurve){
    if(y<0||x<0||y>=N||x>=M||s[idx]!=map[y][x])return;
    if(idx==s.length()-1){
        cnt++;
        return;
    }
    dfs(idx+1,y+dy,x+dx,dy,dx,isCurve);
    if(!isCurve&&idx>0){
        dfs(idx+1,y-dx,x+dy,-dx,dy,true);
        dfs(idx+1,y+dx,x-dy,dx,-dy,true);
    }
}

int main(void){
    fastio;
    cin >> s >> N >> M;
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            cin >> map[i][j];
        }
    }
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            if(map[i][j]==s[0]){
                dfs(0, i, j, -1, -1,false);
				dfs(0, i, j, -1, 0,false);
				dfs(0, i, j, -1, 1,false);
				dfs(0, i, j, 0, -1,false);
				dfs(0, i, j, 0, 1,false);
				dfs(0, i, j, 1, -1,false);
				dfs(0, i, j, 1, 0,false);
				dfs(0, i, j, 1, 1,false);
            }
        }
    }
    cout << cnt;
}