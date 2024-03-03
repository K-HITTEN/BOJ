#include <iostream>
#include <vector>
#include <queue>
#include <climits>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

struct info{
  int y,x,t;  
};

int dy[4] = {-1,1,0,0}, dx[4] = {0,0,-1,1};
int N,K, safezone = 0;
int min_time = INT_MAX;
vector<pair<int,int>> wall;
vector<pair<int,int>> virus;
vector<pair<int,int>> tgtVirus;

void bfs(){
    queue<info> q;
    bool visited[N][N];
    fill(&visited[0][0],&visited[N][N],false);
    for(int i = 0; i < wall.size(); i++){
        visited[wall[i].first][wall[i].second] = true;
    }
    for(int i = 0; i < tgtVirus.size(); i++){
        visited[tgtVirus[i].first][tgtVirus[i].second] = true;
        info tmp;
        tmp.y = tgtVirus[i].first;
        tmp.x = tgtVirus[i].second;
        tmp.t = 0;
        q.push(tmp);
    }
    int t = 0;
    int safe = safezone-K;
    while(!q.empty()){
        info tmp = q.front();
        q.pop();
        for(int d = 0; d < 4; d++){
            int ny = tmp.y + dy[d], nx = tmp.x + dx[d];
            if(ny <0 || nx <0 || ny >= N || nx >= N || visited[ny][nx])continue;
            if(tmp.t >= min_time)return;
            if(tmp.t >= min_time)return;
            t = tmp.t+1;
            safe--;
            visited[ny][nx] = true;
            info tmp2;
            tmp2.y = ny;
            tmp2.x = nx;
            tmp2.t = t;
            q.push(tmp2);
        }
    }
    if(min_time>t && safe == 0) min_time = t;
}


void comb(int srcIdx,int tgtIdx){
    if(tgtIdx == K){
        bfs();
        return;
    }
    if(srcIdx == virus.size())return;
    tgtVirus[tgtIdx] = virus[srcIdx];
    comb(srcIdx+1,tgtIdx+1);
    comb(srcIdx+1,tgtIdx);
}

int main(void){
    fastio;
    int tmp;
    cin >> N >> K;
    tgtVirus.resize(K);
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            cin >> tmp;
            if(tmp == 1){
                wall.push_back({i,j});
                continue;
            }
            if(tmp == 2)virus.push_back({i,j});
            safezone++;
        }
    }
    comb(0,0);
    if(min_time== INT_MAX)cout << -1;
    else cout << min_time;
}
