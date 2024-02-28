#include <iostream>
#include <queue>
#include <tuple>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int arr[100001] = {0,};

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
        priority_queue<tuple<int,int,int>,vector<tuple<int,int,int>>,greater<tuple<int,int,int>>> pq;
        for(int i = 0; i < E; i++){
            cin >> tmp1 >> tmp2 >> tmp3;
            pq.push({tmp3,tmp1,tmp2});
        }
        long count = 0, edgecount = 0;
        while(edgecount<V-1&&!pq.empty()){
            int v1 = get<1>(pq.top()), v2 = get<2>(pq.top()), edge = get<0>(pq.top());
            pq.pop();
            if(find(v1) != find(v2)){
                unions(v1,v2);
                count += edge;
                edgecount++;
            }
        }
        cout << "#" << t << " " << count << "\n";
    }
}