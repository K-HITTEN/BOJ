#include <iostream>
#include <queue>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

char map[50][50] = {0,}; 
bool visited[50][50][(1<<7)] = {false,};
int dy[4]={-1,1,0,0},dx[4]={0,0,-1,1};

struct info{
    pair<int,int> now;
    int key;
    int move;  
};

int main(void){
    fastio;
    int N, M;
    cin >> N >> M;
    pair<int,int> start;
    info tmp, tmp2;
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            cin >> map[i][j];
            if(map[i][j] == '0'){
                tmp.now.first = i;
                tmp.now.second = j;
            }
        }
    }
    queue<info> q;
    tmp.key = tmp.move = 0;
    q.push(tmp);
    while(!q.empty()){
        tmp = q.front();
        q.pop();
        if(map[tmp.now.first][tmp.now.second] == '1'){
            cout << tmp.move;
            return 0;
        }
        for(int d =0; d < 4; d++){
            int ny = tmp.now.first+dy[d], nx = tmp.now.second+dx[d];
            if(ny<0||nx<0||ny>=N||nx>=M||visited[ny][nx][tmp.key]||map[ny][nx] =='#')continue;
            if(map[ny][nx] == 'A'&& (tmp.key&(1<<1))==0)continue;
            if(map[ny][nx] == 'B'&& (tmp.key&(1<<2))==0)continue;
            if(map[ny][nx] == 'C'&& (tmp.key&(1<<3))==0)continue;
            if(map[ny][nx] == 'D'&& (tmp.key&(1<<4))==0)continue;
            if(map[ny][nx] == 'E'&& (tmp.key&(1<<5))==0)continue;
            if(map[ny][nx] == 'F'&& (tmp.key&(1<<6))==0)continue;
            visited[ny][nx][tmp.key] = true;
            tmp2.now = {ny,nx};
            if(map[ny][nx] == 'a')tmp2.key = (tmp.key|(1<<1));
            else if(map[ny][nx] == 'b')tmp2.key = (tmp.key|(1<<2));
            else if(map[ny][nx] == 'c')tmp2.key = (tmp.key|(1<<3));
            else if(map[ny][nx] == 'd')tmp2.key = (tmp.key|(1<<4));
            else if(map[ny][nx] == 'e')tmp2.key = (tmp.key|(1<<5));
            else if(map[ny][nx] == 'f')tmp2.key = (tmp.key|(1<<6));
            else tmp2.key = tmp.key;
            tmp2.move = tmp.move+1;
            q.push(tmp2);
        }
    }
    cout << -1;
}