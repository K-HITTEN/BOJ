#include<iostream>
#include<queue>

using namespace std;

struct info{
    int y,x,n;
};

bool visited[301][301];
int T, l, y, x, r, c, dy[8] = {-1,-2,-2,-1,1,2,2,1}, dx[8] = {-2,-1,1,2,2,1,-1,-2};

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    cin >> T;
    while(T--){
        fill(&visited[0][0],&visited[300][301],false);
        cin >> l >> y >> x >> r >> c;
        visited[y][x] = true;
        queue<info> q;
        q.push({y,x,0});
        while(!q.empty()){
            info tmp = q.front();
            q.pop();
            if(tmp.y==r&&tmp.x==c){
                cout << tmp.n << "\n";
                break;
            }
            for(int d = 0; d < 8; d++){
                int ny = tmp.y+dy[d], nx = tmp.x+dx[d];
                if(ny<0||nx<0||ny>=l||nx>=l||visited[ny][nx])continue;
                visited[ny][nx] = true;
                q.push({ny,nx,tmp.n+1});
            }
        }
    }
}