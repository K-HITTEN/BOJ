#include<iostream>
#include<vector>
#include<queue>

using namespace std;

int N, L, R, sum, arr[51][51], dy[4]={-1,1,0,0}, dx[4]={0,0,-1,1}, ret = 0, check[51][51];
bool visited[51][51];
vector<pair<int,int>> v;
queue<pair<int,int>> q;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    cin >> N >> L >> R;
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++)cin >> arr[i][j];
    }
    while(true){
        bool FLAG = false;
        fill(&visited[0][0],&visited[50][51],false);
        for(int i = 0; i < N; i++){
            for(int j = 0; j < N; j++){
                if(!visited[i][j]){
                    sum = arr[i][j];
                    visited[i][j] = true;
                    v.clear();
                    v.push_back({i,j});
                    q.push({i,j});
                    while(!q.empty()){
                        pair<int,int> tmp = q.front();
                        q.pop();
                        for(int d = 0; d < 4; d++){
                            int ny = tmp.first + dy[d], nx = tmp.second + dx[d];
                            if(ny<0||nx<0||ny>=N||nx>=N||visited[ny][nx]||abs(arr[tmp.first][tmp.second]-arr[ny][nx])<L||abs(arr[tmp.first][tmp.second]-arr[ny][nx])>R)continue;
                            visited[ny][nx] = true;
                            sum += arr[ny][nx];
                            v.push_back({ny,nx});
                            q.push({ny,nx});
                        }
                    }
                }
                if(v.size()>1){
                    FLAG = true;
                    for(int i = 0; i < v.size(); i++)arr[v[i].first][v[i].second] = sum/v.size();
                }
            }
        }
        if(!FLAG)break;
        ret++;
    }
    cout << ret;
}