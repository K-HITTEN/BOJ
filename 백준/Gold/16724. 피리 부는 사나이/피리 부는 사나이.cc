#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int parent[1000001];
bool visited[1000][1000];
int map[1000][1000];
char _map[1000][1000];

int find(int x){
    if(parent[x] == x)return x;
    else return parent[x] = find(parent[x]);
}

void merge(int y, int x){
    int py = find(y), px = find(x);
    if(py>px)parent[py] = px;
    else parent[px] = py;
}


int main(void){
    fastio;
    int N, M, idx = 1;
    cin >> N >> M;
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            cin >> _map[i][j];
        }
    }
    queue<pair<int,int>> q;
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            if(!visited[i][j]){
                parent[idx] = idx;
                q.push({i,j});
                while(!q.empty()){
                    pair<int,int> tmp = q.front();
                    q.pop();
                    if(visited[tmp.first][tmp.second]){
                        merge(map[tmp.first][tmp.second],idx);
                    }
                    else{
                        map[tmp.first][tmp.second] = idx;
                        visited[tmp.first][tmp.second] = true;
                        char c = _map[tmp.first][tmp.second];
                        if(c == 'D')q.push({tmp.first+1,tmp.second});
                        else if(c == 'U')q.push({tmp.first-1,tmp.second});
                        else if(c == 'L')q.push({tmp.first,tmp.second-1});
                        else q.push({tmp.first,tmp.second+1});
                    }
                }
                idx++;
            }
        }
    }
    vector<int> v;
    for(int i = 1; i< idx; i++){
        v.push_back(find(parent[i]));
    }
    sort(v.begin(),v.end());
    v.erase(unique(v.begin(),v.end()),v.end());
    cout << v.size();
}