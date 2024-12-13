#include<iostream>

using namespace std;

int N, M, l, r, cnt, parent[1000001];

int find(int x){
    if(x==parent[x])return x;
    else return parent[x] = find(parent[x]);
}

void merge(int x, int y){
    int px = find(x), py = find(y);
    if(px>py)parent[py] = px;
    else parent[px] = py;
}

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    cin >> N >> M;
    cnt = N;
    for(int i = 1; i <= N; i++)parent[i] = i;
    for(int i = 0; i < M; i++){
        cin >> l >> r;
        while(find(l) != find(r)){
            cnt--;
            int tmp = find(l) + 1;
            merge(l,r);
            l = tmp;
        }
    }
    cout << cnt;
}