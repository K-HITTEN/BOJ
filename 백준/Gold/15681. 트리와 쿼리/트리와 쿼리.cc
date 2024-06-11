#include <iostream>
#include <vector>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

vector<int> v[100001];
int ans[100001];
bool visited[100001];

int dfs(int idx){
    if(visited[idx])return ans[idx];
    visited[idx] = true;
    int n = 1;
    for(int i = 0; i < v[idx].size(); i++){
        if(!visited[v[idx][i]]) n += dfs(v[idx][i]);
    }
    return ans[idx] = n;
}

int main(void){
    fastio;
    int N,R,Q,tmp1,tmp2;
    cin >> N >> R >> Q;
    for(int i = 1; i < N; i++){
        cin >> tmp1 >> tmp2;
        v[tmp1].push_back(tmp2);
        v[tmp2].push_back(tmp1);
    }
    ans[R] = dfs(R);
    for(int i = 0; i < Q; i++){
        cin >> tmp1;
        cout << ans[tmp1] << "\n";
    }
}