#include<iostream>
#include<queue>

using namespace std;

int arr[5][4][5][5], ret = -1, tgt[5], src[5], dy[6] = {-1,1,0,0,0,0}, dx[6] = {0,0,-1,1,0,0}, dz[6] = {0,0,0,0,-1,1};
bool visited[5], map[5][5][5];

struct info{
    int z,y,x,cnt;
};

void calc2(int idx){
    if(idx == 5){
        for(int i = 0; i < 5; i++){
            for(int r = 0; r < 5; r++){
                for(int c = 0; c < 5; c++){
                    if(arr[src[i]][tgt[src[i]]][r][c]==1)map[i][r][c]=false;
                    else map[i][r][c] = true;
                }
            }
        }
        if(map[0][0][0]||map[4][4][4])return;
        queue<info> q;
        q.push({0,0,0,0});
        map[0][0][0] = true;
        while(!q.empty()){
            info tmp = q.front();
            q.pop();
            if(tmp.z == 4 && tmp.y == 4 && tmp.x == 4){
                if(ret == -1)ret = tmp.cnt;
                else ret = min(ret,tmp.cnt);
                return;
            }
            for(int d = 0; d < 6; d++){
                int nz = tmp.z + dz[d], ny = tmp.y + dy[d], nx = tmp.x + dx[d];
                if(nz<0||ny<0||nx<0||nz>4||ny>4||nx>4||map[nz][ny][nx])continue;
                map[nz][ny][nx] = true;
                q.push({nz,ny,nx,tmp.cnt+1});
            }
        }
        return;
    }
    for(int i = 0; i < 5; i++){
        if(!visited[i]){
            visited[i] = true;
            src[idx] = i;
            calc2(idx+1);
            visited[i] = false;
        }
    }
}

void calc(int idx){
    if(idx == 5){
        calc2(0);
        return;
    }
    for(int i = 0; i < 4; i++){ // 어떤 면을 사용할지
        tgt[idx] = i;
        calc(idx+1);
    }
}

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    for(int i = 0; i < 5; i++){ // 판개수
        for(int r = 0; r < 5; r++){
            for(int c = 0; c < 5; c++){
                cin >> arr[i][0][r][c];
            }
        }
        for(int r = 0; r < 5; r++){
            for(int c = 0; c < 5; c++){
                arr[i][1][r][c] = arr[i][0][c][4-r];
                arr[i][2][r][c] = arr[i][0][4-r][4-c];
                arr[i][3][r][c] = arr[i][0][4-c][r];
            }
        }
    }
    calc(0);
    cout << ret;
}