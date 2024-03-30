#include <iostream>
#include <queue>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

struct shark{
    int idx;
    int r;
    int c;
    int s;
    int dy;
    int dx;
    int z;
    int day;
};

pair<int,int> map[101][101];
int R, C, M, result = 0;
bool shark_isDead[10001];
queue<shark> q,tmp_q;

int main(void){
    fastio;
    cin >> R >> C >> M;
    int r,c,s,d,z;
    for(int i = 1; i <= M; i++){
        cin >> r >> c >> s >> d >> z;
        int dy, dx;
        switch(d){
            case 1: dy = -1; dx = 0; break;
            case 2: dy = 1; dx = 0; break;
            case 3: dy = 0; dx = 1; break;
            case 4: dy = 0; dx = -1; break;
        }
        map[r][c] = {i,z};
        q.push({i,r,c,s,dy,dx,z,0});
    }
    for(int i = 1; i <= C; i++){
        for(int j = 1; j <= R; j++){
            if(map[j][i].first != 0){
                result += map[j][i].second;
                shark_isDead[map[j][i].first] = true;
                map[j][i] = {0,0};
                break;
            }
        }
        while(!q.empty()){
            shark tmp = q.front();
            q.pop();
            map[tmp.r][tmp.c] = {0,0};
            if(shark_isDead[tmp.idx])continue;
            int len = tmp.s;
            if(tmp.dy != 0)len %= ((R-1)*2);
            else len %= ((C-1)*2);
            for(int i = 0; i < len; i++){
                if(tmp.dy != 0){
                    if(tmp.r == 1 && tmp.dy == -1)tmp.dy = 1;
                    else if(tmp.r == R && tmp.dy == 1)tmp.dy = -1;
                }else{
                    if(tmp.c == 1 && tmp.dx == -1)tmp.dx = 1;
                    else if(tmp.c == C && tmp.dx == 1)tmp.dx = -1;
                }
                tmp.r = tmp.r+tmp.dy;
                tmp.c = tmp.c+tmp.dx;
            }
            tmp_q.push(tmp);
        }
        while(!tmp_q.empty()){
            shark tmp = tmp_q.front();
            tmp_q.pop();
            if(map[tmp.r][tmp.c].first == 0) map[tmp.r][tmp.c] = {tmp.idx,tmp.z};
            else{
                if(map[tmp.r][tmp.c].second > tmp.z){
                    shark_isDead[tmp.idx] = true;
                    continue;
                }else{
                    shark_isDead[map[tmp.r][tmp.c].first] = true;
                    map[tmp.r][tmp.c] = {tmp.idx,tmp.z};
                }
            }
            q.push(tmp);
        }
    }
    cout << result;
}