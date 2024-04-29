#include <iostream>
#include <cmath>
#include <queue>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

struct info{
    int x, y;
    double cost;
};

struct cmp{
    bool operator()(info &a, info &b){
        return a.cost>b.cost;
    }
};

vector<pair<double,double>> v;
int parent[101];

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
    int N;
    double tmp1, tmp2;
    cin >> N;
    for(int i = 0; i < N; i++){
        parent[i] = i;
        cin >> tmp1 >> tmp2;
        v.push_back({tmp1,tmp2});
    }
    priority_queue<info,vector<info>,cmp> pq;
    for(int i = 1; i < N; i++){
        for(int j = 0; j<i; j++){
            pq.push({i,j,sqrt(pow(v[i].first-v[j].first,2)+pow(v[i].second-v[j].second,2))});
        }
    }
    int count = 0;
    double result = 0;
    while(!pq.empty() ){
        info tmp = pq.top();
        pq.pop();
        if(find(tmp.x)!=find(tmp.y)){
            merge(tmp.x,tmp.y);
            result += tmp.cost;
            count++;
        }
    }
    cout << fixed;
    cout.precision(2);
    cout << result;
}