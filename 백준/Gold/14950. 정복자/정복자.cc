#include <iostream>
#include <queue>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0);

using namespace std;

struct info{
    int start,finish,cost;
};

struct cmp{
    bool operator()(info &a, info &b){
        return a.cost > b.cost; 
    }
};

int parent[10001];

int find(int x){
    if(x == parent[x])return x;
    return parent[x] = find(parent[x]);
}

void merge(int x, int y){
    int px = find(x), py = find(y);
    if(px>py)parent[px] = py;
    else parent[py] = px;
}

int main(void){
    fastio;
    int N, M, T, tmp1, tmp2, tmp3, count = 0;
    cin >> N >> M >> T;
    for(int i = 1; i <= N; i++)parent[i] = i;
    priority_queue<info,vector<info>,cmp> pq;
    long long result = 0;
    for(int i = 0; i < M; i++){
        cin >> tmp1 >> tmp2 >> tmp3;
        pq.push({tmp1,tmp2,tmp3});
    }
    while(!pq.empty()&&count!=N-1){
        info tmp = pq.top();
        pq.pop();
        if(find(tmp.start) != find(tmp.finish)){
            merge(tmp.start,tmp.finish);
            result += (tmp.cost+(count*T));
            count++;
        }
    }
    cout << result;
}