#include <iostream>
#include <vector>
#include <queue>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int dy[4] = {-1,1,0,0}, dx[4] = {0,0,-1,1};
int main(void){
    fastio;
    int T, arr[50][50] = {0}, M, N, K, X, Y, count;
    cin >> T;
    vector<pair<int,int>> nc;
    queue<pair<int,int>> q;
    for(int t = 0 ; t<T; t++){
        cin >> M >> N >> K;
        nc.clear();
        for(int i = 0; i < K; i++){
            cin >> X >> Y;
            arr[Y][X] = 1;
            nc.push_back({Y,X});
        }
        count = 0;
        for(int i =0; i < nc.size(); i++){
            if(arr[nc[i].first][nc[i].second] != 1)continue;
            count++;
            arr[nc[i].first][nc[i].second]++;
            q.push({nc[i].first,nc[i].second});
            while(!q.empty()){
                int y = q.front().first, x = q.front().second;
                q.pop();
                for(int j = 0; j < 4; j++){
                    int ny = y+dy[j], nx = x + dx[j];
                    if(ny<0||nx<0||ny>=N||nx>=M||arr[ny][nx]!= 1)continue;
                    q.push({ny,nx});
                    arr[ny][nx]++;
                }
            }
        }
        cout << count <<"\n";
    }
}