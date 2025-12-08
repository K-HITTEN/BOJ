#include<iostream>
#include<queue>

using namespace std;

struct info{
    int l, r, c, n;
};

int L, R, C, dz[6] = {-1,1,0,0,0,0}, dy[6] = {0,0,-1,1,0,0}, dx[6] = {0,0,0,0,-1,1};
char map[31][31][31];
bool visited[31][31][31], FLAG;
string s;
queue<info> q;
info start;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    while(true){
        cin >> L >> R >> C;
        if(!L&&!R&&!C)break;
        fill(&visited[0][0][0], &visited[30][30][31], false);
        FLAG = false;
        while(!q.empty())q.pop();
        for(int l = 0; l < L; l++){
            for(int r = 0; r < R; r++){
                cin >> s;
                for(int c = 0; c < C; c++){
                    map[l][r][c] = s[c];
                    if(s[c] == 'S'){
                        start = {l,r,c,0};
                        visited[l][r][c] = true;
                    }else if(s[c] == '#')visited[l][r][c] = true;
                }
            }
        }
        q.push(start);
        while(!q.empty()){
            info tmp = q.front();
            q.pop();
            if(map[tmp.l][tmp.r][tmp.c] == 'E'){
                cout << "Escaped in " << tmp.n << " minute(s).\n";
                FLAG = true;
                break;
            }
            for(int d = 0; d < 6; d++){
                int nz = tmp.l + dz[d], ny = tmp.r + dy[d], nx = tmp.c + dx[d];
                if(nz < 0 || ny < 0 || nx < 0 || nz >= L || ny >= R || nx >= C || visited[nz][ny][nx])continue;
                visited[nz][ny][nx] = true;
                q.push({nz,ny,nx,tmp.n+1});
            }
        }
        if(!FLAG)cout << "Trapped!\n";
    }
}