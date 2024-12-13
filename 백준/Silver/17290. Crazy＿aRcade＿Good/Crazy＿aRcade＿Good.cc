#include<iostream>
#include<queue>
#include<tuple>

using namespace std;

int dy[4] = {-1,1,0,0}, dx[4] = {0,0,-1,1};
bool visited[10][10], check[10][10];

void make(int y, int x){
    for(int i = 0; i < 10; i++)visited[i][x] = visited[y][i] = true;
}

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    int r,c;
    char tmp;
    cin >> r >> c;
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            cin >> tmp;
            if(tmp=='o')make(i,j);
        }
    }
    queue<tuple<int,int,int>> q;
    q.push({0,r-1,c-1});
    check[r-1][c-1] = true;
    while(!q.empty()){
        tuple<int,int,int> temp = q.front();
        q.pop();
        if(!visited[get<1>(temp)][get<2>(temp)]){
            cout << get<0>(temp);
            return 0;
        }
        for(int d = 0; d < 4; d++){
            int ny = get<1>(temp)+dy[d], nx = get<2>(temp)+dx[d];
            if(ny<0||nx<0||ny>=10||nx>=10||check[ny][nx])continue;
            check[ny][nx] = true;
            q.push({get<0>(temp)+1,ny,nx});
        }
    }
}