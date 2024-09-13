#include<iostream>
#include<queue>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int parent[100001];

struct info{
    int a, b, c;
};

struct cmp{
    bool operator()(info &a, info &b){
        return a.c>b.c;
    }
};


int find(int x){
    if(parent[x] == x)return x;
    else return parent[x] = find(parent[x]);
}

void merge(int x, int y){
    int px = find(x), py = find(y);
    if(px<py)parent[py] = px;
    else parent[px] = py;
}

int main(void){
    fastio;
    int N, M, t1, t2, cost;
    long long ret = 0, sum = 0;
    cin >> N >> M;
    priority_queue<info,vector<info>,cmp> pq;
    for(int i = 1; i <= N; i++)parent[i]=i;
    for(int i = 0; i < M; i++){
        cin >> t1 >> t2 >> cost;
        sum += cost;
        pq.push({t1,t2,cost});
    }
    while(!pq.empty()){
        info tmp = pq.top();
        pq.pop();
        if(find(tmp.a) != find(tmp.b)){
            ret += tmp.c;
            merge(tmp.a,tmp.b);
        }
    }
    for(int i = 2; i <= N; i++){
        if(parent[find(1)]!=parent[find(i)]){
            cout << -1;
            return 0;
        }
    }
    cout << sum - ret;
}