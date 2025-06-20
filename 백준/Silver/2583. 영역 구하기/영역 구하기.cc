#include<iostream>
#include<queue>
#include<vector>
#include<algorithm>

using namespace std;

int N, M, K, x1, x2, y1, y2,dy[4] = {-1,1,0,0}, dx[4] = {0,0,-1,1};
bool visited[101][101];
vector<int> v;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    cin >> N >> M >> K;
    while(K--){
        cin >> x1 >> y1 >> x2 >> y2;
        for(int i = x1; i < x2; i++){
            for(int j = y1; j < y2; j++){
                visited[i][j] = true;
            }
        }
    }
    for(int i = 0; i < M; i++){
        for(int j = 0; j < N; j++){
            if(!visited[i][j]){
                queue<pair<int,int>> q;
                q.push({i,j});
                visited[i][j] = true;
                int cnt = 1;
                while(!q.empty()){
                    pair<int,int> tmp = q.front();
                    q.pop();
                    for(int d = 0; d < 4; d++){
                        int ny = tmp.first+dy[d], nx = tmp.second+dx[d];
                        if(ny<0||nx<0||ny>=M||nx>=N||visited[ny][nx])continue;
                        visited[ny][nx] = true;
                        cnt++;
                        q.push({ny,nx});
                    }
                }
                v.push_back(cnt);
            }
        }
    }
    sort(v.begin(),v.end());
    cout << v.size() << "\n";
    for(int i = 0; i < v.size(); i++)cout << v[i] << " ";
}