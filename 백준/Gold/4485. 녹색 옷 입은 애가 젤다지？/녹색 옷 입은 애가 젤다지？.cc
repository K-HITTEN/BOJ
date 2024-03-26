#include <iostream>
#include <vector>
#include <queue>
#include <climits>
#include <algorithm>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int map[125][125] = {0,};
int cost[125][125] = {0,};
int dy[4] = {-1,1,0,0},dx[4] = {0,0,-1,1}; 

struct info{
    int y;
    int x;
    int c;
};

struct cmp{
    bool operator()(info &a, info &b){
        return a.c>b.c;
    }
};

int main(void){
    fastio;
    int T = 1, N;
    priority_queue<info,vector<info>,cmp> pq;
    while(true){
        cin >> N;
        if(N == 0)break;
        fill(&cost[0][0],&cost[124][125],INT_MAX);
        for(int i = 0; i < N; i++){
            for(int j = 0; j < N; j++){
                cin >> map[i][j];
            }
        }
        info start;
        start.y = 0;
        start.x = 0;
        start.c = map[0][0];
        cost[0][0] = map[0][0];
        pq.push(start);
        while(!pq.empty()){
            info tmp = pq.top();
            pq.pop();
            if(cost[tmp.y][tmp.x]<tmp.c)continue;
            for(int d = 0; d < 4; d++){
                int ny = tmp.y + dy[d], nx = tmp.x + dx[d];
                if(ny<0||nx<0||ny>=N||nx>=N)continue;
                if(cost[ny][nx]>tmp.c+map[ny][nx]){
                    cost[ny][nx] = tmp.c+map[ny][nx];
                    info tmp2;
                    tmp2.y = ny;
                    tmp2.x = nx;
                    tmp2.c = cost[ny][nx];
                    pq.push(tmp2);
                }
            }
        }
        cout << "Problem " << T << ": " << cost[N-1][N-1] << "\n";
        T++;
    }
}