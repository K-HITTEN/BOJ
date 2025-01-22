#include<iostream>
#include<queue>
#include<map>

using namespace std;

struct info{
    int r, c, cnt;
};

int N, M, ret = 0, idx = 1, ans[501][501];
bool visited[501][501];
char maps[501][501];
map<int,bool> m;

void check(int r, int c){
    ans[r][c] = idx;
    fill(&visited[0][0],&visited[500][501], false);
    visited[r][c] = true;
    queue<info> q;
    q.push({r,c,1});
    while(!q.empty()){
        info tmp = q.front();
        q.pop();
        if(maps[tmp.r][tmp.c]=='U')tmp.r-=1;
        else if(maps[tmp.r][tmp.c]=='R')tmp.c+=1;
        else if(maps[tmp.r][tmp.c]=='D')tmp.r+=1;
        else tmp.c -=1;
        if(tmp.r<0||tmp.r>=N||tmp.c<0||tmp.c>=M){
            ret += tmp.cnt;
            m.insert({idx,true});
            return;
        }
        if(visited[tmp.r][tmp.c]){
            m.insert({idx,false});
            return;
        }
        visited[tmp.r][tmp.c] = true;
        if(ans[tmp.r][tmp.c]==0){
            ans[tmp.r][tmp.c] = idx;
            tmp.cnt++;
            q.push(tmp);
        }
        else{
            if(m[ans[tmp.r][tmp.c]]){
                ret += tmp.cnt;
                m.insert({idx,true});
                return;
            }
            else{
                m.insert({idx,false});
                return;
            }
        }
    }
}

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    cin >> N >> M;
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            cin >> maps[i][j];
        }
    }
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            if(ans[i][j] == 0){
                check(i,j);
                idx++;
            }
        }
    }
    cout << ret;
}