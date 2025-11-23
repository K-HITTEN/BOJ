#include<iostream>
#include<vector>
#include<queue>

using namespace std;

int ret = 0, dy[4] = {-1,1,0,0}, dx[4] = {0,0,-1,1}, idx;
char map[12][6];
bool visited[12][6], FLAG = true;
vector<pair<int,int>> v;
queue<pair<int,int>> q;
queue<char> cq;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    for(int i = 0; i < 12; i++){
        for(int j = 0; j < 6; j++)cin >> map[i][j];
    }
    while(FLAG){
        FLAG = false;
        fill(&visited[0][0], &visited[11][6], false);
        for(int i = 0; i < 12; i++){
            for(int j = 0; j < 6; j++){
                if(map[i][j] != '.' && !visited[i][j]){
                    visited[i][j] = true;
                    v.clear();
                    v.push_back({i,j});
                    q.push({i,j});
                    while(!q.empty()){
                        pair<int,int> tmp = q.front();
                        q.pop();
                        for(int d = 0; d < 4; d++){
                            int ny = tmp.first + dy[d], nx = tmp.second + dx[d];
                            if(ny < 0 || nx < 0 || ny >= 12 || nx >= 6 || map[ny][nx] != map[i][j] || visited[ny][nx])continue;
                            visited[ny][nx] = true;
                            v.push_back({ny,nx});
                            q.push({ny,nx});
                        }
                    }
                    if(v.size()>=4){
                        FLAG = true;
                        for(int k = 0; k < v.size(); k++)map[v[k].first][v[k].second] = '.';
                    }
                }
            }
        }
        if(FLAG){
            ret++;
            for(int i = 0; i < 6; i++){
                for(int j = 11; j >= 0; j--)if(map[j][i] != '.'){
                    cq.push(map[j][i]);
                    map[j][i] = '.';
                }
                idx = 11;
                while(!cq.empty()){
                    map[idx][i] = cq.front();
                    cq.pop();
                    idx--;
                }
            }
        }
    }
    cout << ret;
}