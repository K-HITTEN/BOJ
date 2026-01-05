#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>

using namespace std;

int N, M, R, a, b, idx = 1, arr[100001];
vector<int> v[100001];
queue<int> q;
bool visited[100001];

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    cin >> N >> M >> R;
    for(int i = 0; i < M; i++){
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    for(int i = 1; i <= N; i++)sort(v[i].begin(),v[i].end(),greater<int>());
    q.push(R);
    visited[R] = true;
    while(!q.empty()){
        int tmp = q.front();
        q.pop();
        arr[tmp] = idx++;
        for(int d = 0; d < v[tmp].size(); d++){
            if(!visited[v[tmp][d]]){
                visited[v[tmp][d]] = true;
                q.push(v[tmp][d]);
            }
        }
    }
    for(int i = 1; i <= N; i++)cout << arr[i] << '\n';
}