#include <iostream>
#include <queue>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int parent[500001];

int find(int x){
    if(parent[x] == x)return x;
    else return parent[x] = find(parent[x]);
}

void merge(int x, int y){
    int px = find(x), py = find(y);
    if(px>py)parent[px] = py;
    else parent[py] = px;
}

int main(void){
    fastio;
    int n,m, tmp1, tmp2,idx = 0;
    cin >> n >> m;
    for(int i = 0; i < n; i++)parent[i] = i;
    queue<pair<int,int>> q;
    for(int i = 0; i < m; i++){
        cin>> tmp1 >> tmp2;
        q.push({tmp1, tmp2});
    }
    while(!q.empty()){
        pair<int,int> tmp = q.front();
        idx++;
        q.pop();
        if(find(tmp.first) == find(tmp.second)){
            cout << idx;
            return 0;
        }else{
            merge(tmp.first,tmp.second);
        }
    }
    cout << 0;
}