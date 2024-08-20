#include <iostream>
#include <vector>
#include <algorithm>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

vector<int> v[100001];
int visited[100001];
int cnt = 1;

void dfs(int idx){
    visited[idx] = cnt;
    cnt++;
    for(int i = 0; i < v[idx].size(); i++){
        if(visited[v[idx][i]]==0)dfs(v[idx][i]);
    }
}

int main(void){
    fastio;
    int N, M, R, tmp1, tmp2;
    cin >> N >> M >> R;
    for(int i = 0; i < M; i++){
        cin >> tmp1 >> tmp2;
        v[tmp1].push_back(tmp2);
        v[tmp2].push_back(tmp1);
    }
    for(int i = 1; i <= N; i++)sort(v[i].begin(),v[i].end());
    dfs(R);
    for(int i = 1; i <= N; i++)cout << visited[i] << '\n';
}