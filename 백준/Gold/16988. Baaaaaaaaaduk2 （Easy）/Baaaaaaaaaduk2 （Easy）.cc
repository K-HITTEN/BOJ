#include<iostream>
#include<vector>
#include<queue>

using namespace std;

int N, M, map[21][21], dy[4] = {-1,1,0,0}, dx[4] = {0,0,-1,1}, ret = 0;
vector<pair<int,int>> v, src;
pair<int,int> tgt[2];
bool visited[21][21];

void calc(int tgtIdx, int srcIdx){
    if(tgtIdx==2){
        bool visited[21][21];
        map[tgt[0].first][tgt[0].second] = map[tgt[1].first][tgt[1].second] = 1;
        int cnt = 0;
        for(int i = 0; i < N; i++){
            for(int j = 0; j < M; j++){
                if(map[i][j] == 2||map[i][j] == 0)visited[i][j] = false;
                else visited[i][j] = true;
            }
        }
        for(int i = 0; i < N; i++){
            for(int j = 0; j < M; j++){
                if(map[i][j] == 2&&!visited[i][j]){
                    int count = 1;
                    visited[i][j] = true;
                    bool FLAG = false;
                    queue<pair<int,int>> q;
                    q.push({i,j});
                    while(!q.empty()){
                        pair<int,int> tmp = q.front();
                        q.pop();
                        for(int d = 0; d < 4; d++){
                            int ny = dy[d]+tmp.first, nx = dx[d]+tmp.second;
                            if(ny<0||nx<0||ny>=N||nx>=M||visited[ny][nx])continue;
                            if(map[ny][nx]==0)FLAG = true;
                            else{
                                visited[ny][nx] = true;
                                count++;
                                q.push({ny,nx});
                            }
                        }
                    }
                    if(!FLAG){
                        cnt+=count;
                    }
                }
            }
        }
        map[tgt[0].first][tgt[0].second] = map[tgt[1].first][tgt[1].second] = 0;
        ret = max(ret,cnt);
        return;
    }
    if(srcIdx>=src.size())return;
    tgt[tgtIdx] = src[srcIdx];
    calc(tgtIdx+1, srcIdx+1);
    calc(tgtIdx, srcIdx+1);
}


int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    cin >> N >> M;
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            cin >> map[i][j];
            if(map[i][j] == 0)src.push_back({i,j});
            else if(map[i][j] == 1)v.push_back({i,j});
        }
    }
    calc(0,0);
    cout << ret;
}