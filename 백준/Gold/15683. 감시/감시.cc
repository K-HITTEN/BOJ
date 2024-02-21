#include <iostream>
#include <vector>
#include <climits>
#include <cmath>
#include <tuple>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int N, M, min_value = INT_MAX;
int map[8][8] = {0,};
vector<tuple<int,int,int>> camera; // 카메라숫자, y, x

void inactive(int y, int x, int direction){
    if(direction == 0){
        for(int i = x-1; i>=0; i--){
            if(map[y][i] == 6) break;
            map[y][i]++;
        }
    }else if(direction == 1){
        for(int i = y-1; i>=0;  i--){
            if(map[i][x] == 6) break;
            map[i][x]++;
        }
    }else if(direction == 2){
        for(int i = x+1; i<M; i++){
            if(map[y][i] == 6) break;
            map[y][i]++;
        }
    }else {
        for(int i = y+1; i<N;  i++){
            if(map[i][x] == 6) break;
            map[i][x]++;
        }
    }
}

void active(int y, int x, int direction){
    if(direction == 0){
        for(int i = x-1; i>=0; i--){
            if(map[y][i] == 6) break;
            map[y][i]--;
        }
    }else if(direction == 1){
        for(int i = y-1; i>=0;  i--){
            if(map[i][x] == 6) break;
            map[i][x]--;
        }
    }else if(direction == 2){
        for(int i = x+1; i<M; i++){
            if(map[y][i] == 6) break;
            map[y][i]--;
        }
    }else {
        for(int i = y+1; i<N;  i++){
            if(map[i][x] == 6) break;
            map[i][x]--;
        }
    }
}

void dfs(int idx){
    if(idx == camera.size()){
        int tmp = 0;
        for(int i = 0; i < N; i++){
            for(int j = 0; j < M; j++){
                if(map[i][j] == 0) tmp++;
            }
        }
        min_value = min(min_value,tmp);
        return;
    }
    int camera_num = get<0>(camera[idx]), y = get<1>(camera[idx]), x = get<2>(camera[idx]);
    
    if(camera_num == 1){
        for(int i = 0; i < 4; i++){
            active(y,x,i);
            dfs(idx+1);
            inactive(y,x,i);
        }
    }else if(camera_num == 2){
        for(int i = 0; i < 2; i++){
            active(y,x,i);
            active(y,x,i+2);
            dfs(idx+1);
            inactive(y,x,i);
            inactive(y,x,i+2);
        }
    }else if(camera_num == 3){
        for(int i = 0; i < 4; i++){
            active(y,x,i);
            active(y,x,(i+1)%4);
            dfs(idx+1);
            inactive(y,x,i);
            inactive(y,x,(i+1)%4);
        }
    }else if(camera_num == 4){
        for(int i = 0; i < 4; i++){
            active(y,x,i);
            active(y,x,(i+1)%4);
            active(y,x,(i+2)%4);
            dfs(idx+1);
            inactive(y,x,i);
            inactive(y,x,(i+1)%4);
            inactive(y,x,(i+2)%4);
        }
    }else{
        active(y,x,0);
        active(y,x,1);
        active(y,x,2);
        active(y,x,3);
        dfs(idx+1);
        inactive(y,x,0);
        inactive(y,x,1);
        inactive(y,x,2);
        inactive(y,x,3);
    }
}

int main(void){
    fastio;
    cin >> N >> M;
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            cin >> map[i][j];
            if(map[i][j] >=1 && map[i][j] <=5){
                camera.push_back({map[i][j],i,j});
                map[i][j] = -1;
            }
        }
    }
    dfs(0);
    cout << min_value;
}