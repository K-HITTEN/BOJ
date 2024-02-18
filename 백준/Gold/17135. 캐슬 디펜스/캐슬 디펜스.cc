#include <iostream>
#include <vector>
#include <queue>
#include <cmath>
#include <tuple>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

struct Enemy{
    int x;
    int y;
    int idx;
    bool live;
    
    Enemy(int x, int y){
        this->x = x;
        this->y = y;
        live = true;
    }
};

int N, M, D, tgt[3] ={0,0,0},maxKill = 0;

vector<Enemy> enemy;

void comb(int combIdx, int selectIdx){
    if(selectIdx == 3){
        int counts = 0;
        vector<Enemy> copy = enemy;
        while(true){
            priority_queue<tuple<int,int,int>,vector<tuple<int,int,int>>,greater<tuple<int,int,int>>> pq1;
            priority_queue<tuple<int,int,int>,vector<tuple<int,int,int>>,greater<tuple<int,int,int>>> pq2;
            priority_queue<tuple<int,int,int>,vector<tuple<int,int,int>>,greater<tuple<int,int,int>>> pq3;
            for(int j = 0; j < copy.size(); j++){
                int d = (abs(copy[j].y-N)+abs(copy[j].x-tgt[0]));
                if(d<=D) pq1.push({d,copy[j].x,j});
                d = (abs(copy[j].y-N)+abs(copy[j].x-tgt[1]));
                if(d<=D) pq2.push({d,copy[j].x,j});
                d = (abs(copy[j].y-N)+abs(copy[j].x-tgt[2]));
                if(d<=D) pq3.push({d,copy[j].x,j});
            }
            if(copy.size() == 0)break;
            if(!pq1.empty())copy[get<2>(pq1.top())].live = false;
            if(!pq2.empty())copy[get<2>(pq2.top())].live = false;
            if(!pq3.empty())copy[get<2>(pq3.top())].live = false;
            for(int i = copy.size()-1; i >= 0; i--){
                if(!copy[i].live){
                    copy.erase(copy.begin()+i);
                    counts++;
                }else if(copy[i].y == N-1){
                    copy.erase(copy.begin()+i);
                }else{
                    copy[i].y++;
                }
            }
        }
        if (maxKill < counts) {
			maxKill = counts;
		}
        return;
    }
    if(combIdx == M) return;
        tgt[selectIdx] = combIdx;
        comb(combIdx+1,selectIdx+1);
        comb(combIdx+1,selectIdx);
}

int main(void){
    fastio;
    int tmp;
    cin >> N >> M >> D;
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            cin >> tmp;
            if(tmp == 1)enemy.push_back(Enemy(j,i));
        }
    }
    comb(0,0);
    cout << maxKill;
}

