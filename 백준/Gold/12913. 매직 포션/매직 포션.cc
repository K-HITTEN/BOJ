#include <iostream>
#include <queue>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int map[51][51] = {0,};
bool visited[51][51] = {false,};

struct info{
    int city;
    int drink;
    double t;
};

struct cmp{
    bool operator() (info &a, info &b){
        return a.t > b.t;
    }
};

int main(void){
    fastio;
    fill(&map[0][0],&map[50][50],0);
    fill(&visited[0][0],&visited[50][50],false);
    int N, K;
    string s;
    cin >> N >> K;
    for(int i = 0; i < N; i++){
        cin >> s;
        for(int j = 0; j < N; j++){
            map[i][j] = s[j]-48;
        }
    }
    priority_queue<info,vector<info>,cmp> pq;
    for(int i = 1; i < N; i++){ //0번 에서 갈수있는 도시 pq에 넣기
        info tmp;
        tmp.city = i;
        tmp.drink = 0;
        tmp.t = map[0][i];
        pq.push(tmp);
        if(K>0){//포션을 먹을 수 있는 경우
            tmp.drink =1;
            tmp.t = map[0][i]/2.0000000000;
            pq.push(tmp);
        }
    }
    while(!pq.empty()){
        info tmp = pq.top();
        pq.pop();
        if(tmp.city == 1){
            cout.precision(12);
            cout << fixed << tmp.t;
            return 0;
        }
        if(visited[tmp.city][tmp.drink])continue;
        visited[tmp.city][tmp.drink] = true;
        for(int i = 0; i < N; i++){
            if(i == tmp.city) continue;
            info tmp2;
            tmp2.city = i;
            if(!visited[i][tmp.drink]){ // 포션을 먹지 않았을때
                tmp2.drink = tmp.drink;
                tmp2.t = tmp.t + map[tmp.city][i];
                pq.push(tmp2);
            }
            if(tmp.drink < K && !visited[i][tmp.drink+1]){ // 포션을 먹을 수 있는 경우
                tmp2.drink = tmp.drink+1;
                tmp2.t = tmp.t + (map[tmp.city][i]/2.0000000000);
                pq.push(tmp2);
            }
        }
    }
}