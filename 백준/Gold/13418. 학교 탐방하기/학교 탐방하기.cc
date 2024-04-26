#include <iostream>
#include <queue>
#include <cmath>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

struct info{
    int x,y,cost;
};

struct cmp1{
    bool operator()(info &a, info &b){
        return a.cost>b.cost;
    }
};

struct cmp2{
    bool operator()(info &a, info &b){
        return a.cost<b.cost;
    }
};

int parent[1001];

int find(int x){
    if(parent[x] == x)return x;
    return parent[x] = find(parent[x]);
}

void merge(int x, int y){
    int px = find(x), py = find(y);
    if(px>py)parent[px] = py;
    else parent[py] = px;
}

int main(void){
    fastio;
    int N, M, tmp1, tmp2, tmp3, result1 = 0, result2 = 0;
    cin >> N >> M;
    priority_queue<info,vector<info>,cmp1> pq1;
    priority_queue<info,vector<info>,cmp2> pq2;
    for(int i = 0; i <= M; i++){
        cin >> tmp1 >> tmp2 >> tmp3;
        if(tmp3 == 1) tmp3 = 0;
        else tmp3 = 1;
        pq1.push({tmp1,tmp2,tmp3});
        pq2.push({tmp1,tmp2,tmp3});
    }
    for(int i = 0; i <= N; i++)parent[i] = i;
    int count = 0;
    while(!pq1.empty()&&count != N){
        info tmp = pq1.top();
        pq1.pop();
        if(find(tmp.x) != find(tmp.y)){
            merge(tmp.x,tmp.y);
            result1 += tmp.cost;
            count++;
        }
    }
    for(int i = 0; i <= N; i++)parent[i] = i;
    count = 0;
    while(!pq2.empty()&&count != N){
        info tmp = pq2.top();
        pq2.pop();
        if(find(tmp.x) != find(tmp.y)){
            merge(tmp.x,tmp.y);
            result2 += tmp.cost;
            count++;
        }
    }
    cout << pow(result2,2) - pow(result1,2);
}