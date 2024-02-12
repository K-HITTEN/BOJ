#include <iostream>
#include <queue>
#include <tuple>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int dx[4] = {0,0,-1,1}, dy[4] ={-1,1,0,0};

int main(void){
    fastio;
    int arr[101][101][101];
    int M, N, H, tcount = 0, day = 0;
    cin >> M >> N >> H;
    queue<pair<tuple<int,int,int>,int>> q;
    for(int k = 0; k < H; k++){
        for(int i = 0; i < N; i++){
            for(int j = 0; j< M; j++){
                cin >> arr[k][i][j];
                if(arr[k][i][j] == 0) tcount++;
                else if(arr[k][i][j] == 1) q.push({{k,i,j},0});
            }
        }
    }
    while(!q.empty()){
        int Y = get<1>(q.front().first), X = get<2>(q.front().first), Z = get<0>(q.front().first);
        day = q.front().second;
        q.pop();
        for(int i = 0; i < 4; i++){
            int y = Y+dy[i], x = X +dx[i];
            if(y<0||x<0||y>=N||x>=M||arr[Z][y][x] != 0)continue;
            else{
                arr[Z][y][x] = 1;
                tcount--;
                q.push({{Z,y,x},day+1});
            }
        }
        if(Z-1>=0&&arr[Z-1][Y][X] == 0){
            arr[Z-1][Y][X] = 1;
            tcount--;
            q.push({{Z-1,Y,X},day+1});
        }
        if(Z+1<H&&arr[Z+1][Y][X] == 0){
            arr[Z+1][Y][X] = 1;
            tcount--;
            q.push({{Z+1,Y,X},day+1});
        }
    }
    if(tcount != 0) cout << -1;
    else cout << day;
}