#include<iostream>
#include<queue>
#include<tuple>

using namespace std;

char arr[101][101];
bool visited[101][101];

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    int N, M;
    cin >> N >> M;
    queue<pair<int,int>> q;
    queue<tuple<int,int,int>> ans;
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            cin >> arr[i][j];
            if(arr[i][j]=='*')q.push({i,j});
            else visited[i][j] = true;
        }
    }
    while(!q.empty()){
        int y = q.front().first, x = q.front().second;
        q.pop();
        int idx = 1;
        while(true){
            if(y-idx>=0&&y+idx<N&&x-idx>=0&&x+idx<M&&arr[y-idx][x]=='*'&&arr[y+idx][x]=='*'&&arr[y][x-idx]=='*'&&arr[y][x+idx]=='*'){
                visited[y-idx][x]=visited[y+idx][x]=visited[y][x-idx]=visited[y][x+idx]=visited[y][x]=true;
                ans.push({y,x,idx});
                idx++;
            }
            else break;
        }
    }
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            if(!visited[i][j]){
                cout << -1;
                return 0;
            }
        }
    }
    cout << ans.size() << "\n";
    while(!ans.empty()){
        tuple<int,int,int> tmp = ans.front();
        ans.pop();
        cout << get<0>(tmp)+1 << " " << get<1>(tmp)+1 << " " << get<2>(tmp) << "\n"; 
    }
}