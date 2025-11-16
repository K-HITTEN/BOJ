#include<iostream>
#include<algorithm>
#include<queue>

using namespace std;

int N, M, R, s, e, ans[100001], idx = 1;
vector<int> v[100001];
queue<int> q;
bool visited[100001];

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    cin >> N >> M >> R;
    while(M--){
        cin >> s >> e;
        v[s].push_back(e);
        v[e].push_back(s);
    }
    for(int i = 1; i <= N; i++)sort(v[i].begin(),v[i].end());
    q.push(R);
    visited[R] = true;
    while(!q.empty()){
        int tmp = q.front();
        q.pop();
        ans[tmp] = idx++;
        for(int i = 0; i < v[tmp].size(); i++){
            if(visited[v[tmp][i]])continue;
            visited[v[tmp][i]] = true;
            q.push(v[tmp][i]);
        }
    }
    for(int i = 1; i <= N; i++)cout << ans[i] << '\n';
}