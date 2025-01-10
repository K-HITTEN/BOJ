#include<iostream>

using namespace std;

int N, M, ret = 1;
bool visited[15][15];

void calcB(int i, int j, int r, int c, int val){
    int idx = 1; 
    while(true){
        if(r-idx<0||c-idx<0||r+idx>=N||c+idx>=M||visited[r-idx][c]||visited[r+idx][c]||visited[r][c-idx]||visited[r][c+idx])break;
        idx++;
    }
    idx--;
    ret = max(ret, val*(1+idx*4));
}

void calcA(int i, int j, int r, int c){
    int idx = 1;
    while(true){
        if(i-idx<0||j-idx<0||i+idx>=N||j+idx>=M||visited[i-idx][j]||visited[i+idx][j]||visited[i][j-idx]||visited[i][j+idx])break;
        visited[i-idx][j] = visited[i+idx][j] = visited[i][j-idx] = visited[i][j+idx] = true;
        calcB(i, j, r, c, 1+4*idx);
        idx++;
    }
    idx--;
    for(idx; idx>0; idx--){
        visited[i-idx][j] = visited[i+idx][j] = visited[i][j-idx] = visited[i][j+idx] = false;
    }
}

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    char c;
    cin >> N >> M;
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            cin >> c;
            if(c=='.')visited[i][j] = true;
        }
    }
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            if(visited[i][j])continue;
            visited[i][j] = true;
            for(int r = 0; r < N; r++){
                for(int c = 0; c < M; c++){
                    if(visited[r][c])continue;
                    visited[r][c] = true;
                    calcA(i,j,r,c);
                    visited[r][c] = false;
                }
            }
            visited[i][j] = false;
        }
    }
    cout << ret;
}