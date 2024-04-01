#include <iostream>
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
    int n,m, tmp1, tmp2;
    bool FLAG = false;
    cin >> n >> m;
    for(int i = 0; i < n; i++)parent[i] = i;
    for(int i = 1; i <= m; i++){
        cin>> tmp1 >> tmp2;
        if(FLAG)continue;
        if(find(tmp1) == find(tmp2)){
            cout << i;
            FLAG = true;
        }else{
            merge(tmp1,tmp2);
        }
    }
    if(!FLAG)cout << 0;
}