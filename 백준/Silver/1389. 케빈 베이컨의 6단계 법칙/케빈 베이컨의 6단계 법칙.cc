#include <iostream>
#include <queue>
#include <vector>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

vector<int> v[101];
bool visited[101];

int main(void){
    fastio;
    int N, M, tmp1, tmp2, res = 0, min_val = 500001;
    queue<pair<int,int>> q;
    cin >> N >> M;
    for(int i = 0; i < M; i++){
        cin >> tmp1 >> tmp2;
        v[tmp1].push_back(tmp2);
        v[tmp2].push_back(tmp1);
    }
    for(int i = 1; i <= N; i++){
        fill(visited,visited+101,false);
        int count = 0;
        visited[i] = true;
        q.push({0,i});
        while(!q.empty()){
            pair<int,int> tmp = q.front();
            q.pop();
            for(int j = 0; j < v[tmp.second].size(); j++){
                if(visited[v[tmp.second][j]])continue;
                visited[v[tmp.second][j]] = true;
                count += (tmp.first+1);
                q.push({tmp.first+1,v[tmp.second][j]});
            }
        }
        if(min_val > count){
            min_val = count;
            res = i;
        }
    }
    cout << res;
}