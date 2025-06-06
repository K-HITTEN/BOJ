#include<iostream>
#include<queue>

using namespace std;

int arr[51][51], w, h, cnt, dy[8] = {-1,1,0,0,-1,-1,1,1}, dx[8] = {0,0,-1,1,-1,1,-1,1};
bool visited[51][51];

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    while(true){
        cin >> w >> h;
        if(!w&&!h)break;
        fill(&visited[0][0],&visited[50][51],false);
        cnt = 0;
        for(int i = 0; i < h; i++){
            for(int j = 0; j < w; j++){
                cin >> arr[i][j];
            }
        }
        queue<pair<int,int>> q;
        for(int i = 0; i < h; i++){
            for(int j = 0; j < w; j++){
                if(arr[i][j]&&!visited[i][j]){
                    cnt++;
                    visited[i][j] = true;
                    q.push({i,j});
                    while(!q.empty()){
                        pair<int,int> tmp = q.front();
                        q.pop();
                        for(int d = 0; d < 8; d++){
                            int ny = tmp.first+dy[d], nx = tmp.second+dx[d];
                            if(ny<0||nx<0||ny>=h||nx>=w||!arr[ny][nx]||visited[ny][nx])continue;
                            visited[ny][nx] = true;
                            q.push({ny,nx});
                        }
                    }
                }
            }
        }
        cout << cnt << "\n";
    }
}