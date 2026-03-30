#include<iostream>
#include<vector>

using namespace std;

int N, M, a, b, cnt;
vector<int> arr[101][2];
bool visited[101];

void dfs(int num, int idx){
    for(int i = 0; i < arr[num][idx].size(); i++){
        if(!visited[arr[num][idx][i]]){
            visited[arr[num][idx][i]] = true;
            cnt++;
            dfs(arr[num][idx][i],idx);
        }
    }
}

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    cin >> N >> M;
    while(M--){
        cin >> a >> b;
        arr[a][1].push_back(b);
        arr[b][0].push_back(a);
    }
    for(int i = 1; i <= N; i++){
        fill(visited,visited+101,false);
        visited[i] = true;
        cnt = 1;
        dfs(i,0);
        dfs(i,1);
        cout << N-cnt << '\n';
    }
}