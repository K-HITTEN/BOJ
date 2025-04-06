#include<iostream>
#include<queue>

using namespace std;

int arr[1001][1001];
bool visited[1001];

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    int N, M, n, m, d;
    cin >> N >> M;
    fill(&arr[0][0], &arr[1000][1001], -1);
    for(int i = 1; i < N; i++){
        cin >> n >> m >> d;
        arr[n][m] = d;
        arr[m][n] = d;
    }
    while(M--){
        cin >> n >> m;
        fill(visited,visited+1001,false);
        queue<pair<int,int>> q;
        q.push({n,0});
        visited[n] = true;
        while(!q.empty()){
            pair<int,int> tmp = q.front();
            if(tmp.first == m){
                cout << tmp.second << "\n";
                break;
            }
            q.pop();
            for(int i = 1; i <= N; i++){
                if(arr[tmp.first][i] != -1 && !visited[i]){
                    visited[i] = true;
                    q.push({i,tmp.second+arr[tmp.first][i]});
                }
            }
        }
    }
}