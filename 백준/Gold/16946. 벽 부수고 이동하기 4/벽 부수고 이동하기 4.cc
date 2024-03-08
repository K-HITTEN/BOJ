#include <iostream>
#include <algorithm>
#include <set>
#include <queue>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int map[1001][1001]= {0,},result[500001] = {0};
int N, M, num = 1;
int dy[4] = {-1,1,0,0}, dx[4] = {0,0,-1,1};

void bfs(pair<int,int> idx){
    int count = 1;
    map[idx.first][idx.second] = num;
    queue<pair<int,int>> q;
    q.push(idx);
    while(!q.empty()){
        pair<int,int> tmp = q.front();
        q.pop();
        for(int d = 0; d<4; d++){
            int ny = tmp.first+dy[d], nx = tmp.second+dx[d];
            if(ny <0 || nx <0 || ny >=N || nx >= M || map[ny][nx] != 0)continue;
            map[ny][nx] = num;
            count++;
            q.push({ny,nx});
        }
    }
    result[num] = count;
    num++;
}


int main(void){
    fastio;
    cin >> N >> M;
    string s;
    for(int i = 0; i < N; i++){
        cin >> s;
        for(int j = 0; j < M; j++){
            map[i][j] = s[j]-48;
            if(map[i][j] == 1)map[i][j] = -1;
        }
    }
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            if(map[i][j] == 0) bfs({i,j});
        }
    }
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            if(map[i][j] != -1)cout << 0;
            else {
                set<int> s;
                int sum = 1;
                for(int d = 0; d<4; d++){
                    int ny = i+dy[d], nx = j+dx[d];
                    if(ny <0 || nx <0 || ny >=N || nx >= M || map[ny][nx] == -1)continue;
                    s.insert(map[ny][nx]);
                }
                for(auto iter = s.begin(); iter != s.end(); iter++){
                    sum += result[*iter];
                }
                cout << sum%10;
            }
        }
        cout << "\n";
    }
}