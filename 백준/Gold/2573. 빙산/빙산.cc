#include<iostream>
#include<queue>

using namespace std;

int arr[301][301], N, M, cnt, day = 0, dy[4] = {-1,1,0,0}, dx[4] = {0,0,-1,1};
bool visited[301][301], ice[301][301];
queue<pair<int,int>> melt, q;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    cin >> N >> M;
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            cin >> arr[i][j];
            if(arr[i][j])ice[i][j] = true;
        }
    }
    while(true){
        day++;
        for(int i = 0; i < N; i++){
            for(int j = 0; j < M; j++){
                if(ice[i][j]){
                    if(i-1>=0&&!ice[i-1][j])arr[i][j]--;
                    if(i+1<N&&!ice[i+1][j])arr[i][j]--;
                    if(j-1>=0&&!ice[i][j-1])arr[i][j]--;
                    if(j+1<M&&!ice[i][j+1])arr[i][j]--;
                    arr[i][j] = max(0,arr[i][j]);
                    if(!arr[i][j]){
                        melt.push({i,j});
                    }
                }
            }
        }
        while(!melt.empty()){
            pair<int,int> tmp = melt.front();
            melt.pop();
            ice[tmp.first][tmp.second] = false;
        }
        cnt = 0;
        fill(&visited[0][0], &visited[300][301], false);
        for(int i = 0; i < N; i++){
            for(int j = 0; j < M; j++){
                if(arr[i][j]&&!visited[i][j]){
                    cnt++;
                    if(cnt>1){
                        cout << day;
                        return 0;
                    }
                    visited[i][j] = true;
                    q.push({i,j});
                    while(!q.empty()){
                        pair<int,int> tmp = q.front();
                        q.pop();
                        for(int d = 0; d < 4; d++){
                            int ny = tmp.first+dy[d], nx = tmp.second + dx[d];
                            if(ny<0||nx<0||ny>=N||nx>=M||visited[ny][nx]||!arr[ny][nx])continue;
                            visited[ny][nx] = true;
                            q.push({ny,nx});
                        }
                    }
                }
            }
        }
        if(!cnt){
            cout << 0;
            return 0;
        }
    }
}