#include <iostream>
#include <set>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

char map[5][5];
int dy[4] = {-1,1,0,0}, dx[4] = {0,0,-1,1};
set<string> s;

void dfs(int y, int x ,int idx, string str){
    if(idx == 6){
        if(s.find(str) == s.end())s.insert(str);
        return;
    }
    for(int d = 0; d < 4; d++){
        int ny = y+dy[d], nx = x+dx[d];
        if(ny<0||nx<0||ny>=5||nx>=5)continue;
        dfs(ny,nx,idx+1,str+map[ny][nx]);
    }
}

int main(void) {
    fastio;
    char c;
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            cin >> map[i][j];
        }
    }
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            dfs(i,j,0,"");
        }
    }
    cout << s.size();
}