#include <iostream>
#include <queue>
#include <tuple>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int K, W, H;
int map[201][201] = {0,};
int visited[201][201][31] = {false,};
priority_queue<tuple<int,int,pair<int,int>>,vector<tuple<int,int,pair<int,int>>>,greater<tuple<int,int,pair<int,int>>>> pq;

int dhy[8] = {-1,-2,-2,-1,1,2,2,1}, dhx[8] ={-2,-1,1,2,-2,-1,1,2};
int dy[4] = {-1,1,0,0}, dx[4] = {0,0,-1,1};
void horse(int y, int x, int act, int nhorse){
    for(int d = 0; d < 8; d++){
        int ny = y+dhy[d], nx = x +dhx[d], nact = act+1;
        if(ny<1 || nx <1 || ny > H ||nx > W||visited[ny][nx][nhorse+1]) continue;
        visited[ny][nx][nhorse+1] = true;
        pq.push({nact,nhorse+1,{ny,nx}});
    }
}

int main(void){
    fastio;
    cin >> K >> W >> H;
    for(int i = 1; i <= H; i++){
        for(int j = 1; j <=W; j++){
            cin >> map[i][j];
            if(map[i][j] == 1)for(int k = 0; k <= K; k++)visited[i][j][k] = true;
        }
    }
    if(W == 1 && H == 1){
        cout << 0;
        return 0;
    }
    pq.push({0,0,{1,1}});
    while(!pq.empty()){
       int act = get<0>(pq.top()), hact = get<1>(pq.top()), y = get<2>(pq.top()).first, x = get<2>(pq.top()).second;
       pq.pop();
       if(y == H && x == W){
               cout << act;
               return 0;
        }
       if(hact<K)horse(y,x,act,hact);
       for(int d = 0; d < 4; d++){
           int ny = y+dy[d], nx = x +dx[d], nact = act+1;
           if(ny<1 || nx <1 || ny > H ||nx > W||visited[ny][nx][hact]) continue;
           visited[ny][nx][hact] = true;
           pq.push({nact,hact,{ny,nx}});
       }
    }
    cout << -1;
}