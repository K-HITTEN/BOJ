#include <iostream>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int parent[1000001], N, M, tmp1, tmp2, tmp3;

int find(int a){
    if(parent[a] == a)return a;
    else return parent[a] = find(parent[a]); 
}

void merge(int a, int b){
    int pa = find(a), pb = find(b);
    if(pa<pb)parent[pb] = pa;
    else parent[pa] = pb;
}

int main(void){
    fastio;
    cin >> N >> M;
    for(int i = 0; i <= N; i++)parent[i] = i;
    for(int i = 0; i < M; i++){
        cin >> tmp1 >> tmp2 >> tmp3;
        if(tmp1 == 0){
            merge(tmp2, tmp3);
        }else{
            if(find(tmp2)==find(tmp3))cout << "YES\n";
            else cout << "NO\n";
        }
    }
}