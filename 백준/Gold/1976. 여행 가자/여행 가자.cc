#include<iostream>
#include<vector>

using namespace std;

int parent[201],N, M, tmp;
vector<int> v;

int find(int x){
    if(parent[x] == x)return x;
    else return parent[x] = find(parent[x]);
}

void merge(int x, int y){
    int nx = find(x), ny = find(y);
    if(nx>ny)parent[nx] = ny;
    else parent[ny] = nx;
}

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    cin >> N >> M;
    for(int i = 1; i <= N; i++)parent[i] = i;
    for(int i = 1; i <= N; i++){
        for(int j = 1; j <= N; j++){
            cin >> tmp;
            if(tmp){
                merge(i,j);
            }
        }
    }
    for(int i = 0; i < M; i++){
        cin >> tmp;
        v.push_back(tmp);
    }
    tmp = find(v[0]);
    for(int i = 1; i < M; i++){
        if(find(v[i])!=tmp){
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
}