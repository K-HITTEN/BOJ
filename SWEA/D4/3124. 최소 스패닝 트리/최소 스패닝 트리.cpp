#include <iostream>
#include <queue>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int arr[100001] = {0,};

struct info{
    int x, y, cost;
};

struct cmp{
    bool operator() (info &a, info &b){
        return a.cost > b.cost;
    }
};

int find(int idx){
    if (arr[idx] == idx) return idx;
    else return arr[idx] = find(arr[idx]);
}

void unions(int x, int y){
    int nx = find(x), ny = find(y);
    if(nx>ny) arr[nx] = ny;
    else arr[ny] = nx;
}

int main(void){
    fastio;
    int T;
    cin >> T;
    for(int t = 1; t <= T; t++){
        int V,E,tmp1,tmp2,tmp3;
        cin >> V >> E;
        for(int i = 1; i <= V; i++) arr[i] = i;
        priority_queue<info,vector<info>,cmp> pq;
        for(int i = 0; i < E; i++){
            cin >> tmp1 >> tmp2 >> tmp3;
            info tmp;
            tmp.x = tmp1;
            tmp.y = tmp2;
            tmp.cost = tmp3;
            pq.push(tmp);
        }
        long count = 0, edgecount = 0;
        while(edgecount<V-1&&!pq.empty()){
            info now = pq.top(); 
            pq.pop();
            if(find(now.x) != find(now.y)){
                unions(now.x,now.y);
                count += now.cost;
                edgecount++;
            }
        }
        cout << "#" << t << " " << count << "\n";
    }
}