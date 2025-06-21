#include<iostream>
#include<queue>

using namespace std;

struct info{
    int n;
    char c;
};

struct INFO{
    int r, c, d, t;
};

struct cmp{
    bool operator()(info &a, info &b){
        return a.n > b.n;
    }
};

bool apple[101][101], map[101][101];
int N, K, L, r, c, tmp_i, dy[4] = {0,1,0,-1}, dx[4] = {1,0,-1,0};
char tmp_c;
queue<pair<int,int>> snake;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    cin >> N >> K;
    while(K--){
        cin >> r >> c;
        apple[r-1][c-1] = true;
    }
    cin >> L;
    priority_queue<info,vector<info>,cmp> pq;
    while(L--){
        cin >> tmp_i >> tmp_c;
        pq.push({tmp_i,tmp_c});
    }
    queue<INFO> q;
    q.push({0,0,0,0});
    map[0][0] = true;
    snake.push({0,0});
    while(!q.empty()){
        INFO tmp = q.front();
        q.pop();
        tmp.r += dy[tmp.d];
        tmp.c += dx[tmp.d];
        tmp.t++;
        if(tmp.r<0||tmp.c<0||tmp.r>=N||tmp.c>=N||map[tmp.r][tmp.c]){
            cout << tmp.t;
            return 0;
        }
        map[tmp.r][tmp.c] = true;
        snake.push({tmp.r,tmp.c});
        if(apple[tmp.r][tmp.c])apple[tmp.r][tmp.c] = false;
        else {
            map[snake.front().first][snake.front().second] = false;
            snake.pop();
        }
        if(tmp.t==pq.top().n){
            if(pq.top().c=='D'){
                tmp.d++;
                if(tmp.d == 4)tmp.d = 0;
            }
            else {
                tmp.d--;
                if(tmp.d == -1)tmp.d = 3;
            }
            pq.pop();
        }
        q.push(tmp);
    }
}