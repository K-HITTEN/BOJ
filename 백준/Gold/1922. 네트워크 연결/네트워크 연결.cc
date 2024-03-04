#include <iostream> 
#include <queue>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int arr[1001] = {0};

struct info{
    int x,y,cost;
};

struct cmp{
    bool operator() (info &a, info&b){
        return a.cost > b.cost;
    }
};

int find(int x){
    if(arr[x] == x) return x;
    else return arr[x] = find(arr[x]);
}

void merge(int x, int y){
    int px = find(x), py = find(y);
    if(py>px)arr[py] = px;
    else arr[px] = py;
}


int main(void){
    fastio;
    int N, M, sum = 0, edge = 0;
    cin >> N >> M;
    for(int i = 1; i <= N; i++)arr[i] = i;
    priority_queue<info,vector<info>, cmp> pq;
    for(int i = 0; i < M; i++){
        info tmp;
        cin >> tmp.x >> tmp.y >> tmp.cost;
        pq.push(tmp);
    }
    while(!pq.empty() && edge != N-1){
        info tmp = pq.top();
        pq.pop();
        if(find(tmp.x) != find(tmp.y)){
            edge++;
            sum += tmp.cost;
            merge(tmp.x,tmp.y);
        }
    }
    cout << sum;
}