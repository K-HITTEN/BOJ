#include <iostream>
#include <queue>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

bool transform[101], visited[101] = {false,};
int info[101] = {0,};

int main(void){
    fastio;
    int N, M, tmp, tmp2;
    cin >> N >> M;
    for(int i = 0; i < N+M; i++){
        cin >> tmp >> tmp2;
        info[tmp] = tmp2;
        transform[tmp] = true;
    }
    queue<pair<int,int>> pq;
    visited[1] = true;
    pq.push({0,1});
    while(!pq.empty()){
        pair<int,int> tmp = pq.front();
        if(tmp.second == 100){
            cout << tmp.first;
            return 0;
        }
        pq.pop();
        for(int i = 1; i <=6; i++){
            int go = tmp.second+i;
            if(go>100||visited[go])continue;
            visited[go] = true;
            if(transform[go]){
                go = info[go];
                if(visited[go])continue;
            }
            pq.push({tmp.first+1,go});
        }
    }
}