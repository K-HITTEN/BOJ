#include <iostream>
#include <queue>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int map[20][20], N;
int dy[4] = {-1,0,0,1}, dx[4] = {0,-1,1,0};
pair<int,int> shark;
int shark_eat = 0, shark_size = 2, result = 0;

int bfs(){
    bool visited[20][20] = {false,};
    queue<pair<int,pair<int,int>>> q;
    q.push({0,shark});
    bool FLAG = false;
    pair<int,int> newshark = {20,20};
    int ret_val = 987654321;
    while(!q.empty()){
        pair<int,pair<int,int>> tmp = q.front();
        if(tmp.first>=ret_val)break;
        q.pop();
        for(int d = 0; d < 4; d++){
            int ny = tmp.second.first+dy[d], nx = tmp.second.second+dx[d];
            if(ny<0||nx<0||ny>=N||nx>=N||visited[ny][nx]||shark_size<map[ny][nx])continue;
            visited[ny][nx] = true;
            if(shark_size>map[ny][nx]&&map[ny][nx]!=0){
               FLAG = true;
               if(newshark.first>ny)newshark = {ny,nx};
               else if(newshark.first == ny && newshark.second > nx) newshark = {ny,nx};
               ret_val = tmp.first+1;
            }
            else q.push({tmp.first+1,{ny,nx}});
        }
    }
    if(FLAG){
       shark_eat++;
       shark = newshark;
       map[newshark.first][newshark.second] = 0;
       return ret_val;
    }
    return 0;
}

int main(void){
    fastio;
    cin >> N;
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            cin >> map[i][j];
            if(map[i][j] == 9){
                map[i][j] = 0;
                shark = {i,j};
            }
        }
    }
    while(true){
        int tmp = bfs();
        if(tmp == 0)break;
        result+=tmp;
        if(shark_eat == shark_size){
            shark_size++;
            shark_eat = 0;
        }
    }
    cout << result;
}