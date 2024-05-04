#include <iostream>
#include <algorithm>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int src[5][2],check[5],min_t = 987654321, N, HP;

void perm(int t, int hp){
    if(t>=min_t)return;
    if(hp<=0){
        min_t = min(min_t,t);
        return;
    }
    for(int i = 0; i < N; i++){
        if(check[i]<=t){
            int tmp = check[i];
            check[i] = t+src[i][0];
            perm(t+1,hp-src[i][1]);
            check[i] = tmp;
        }
    }
    perm(t+1,hp);
}

int main(void){
    fastio;
    cin >> N >> HP;
    for(int i = 0; i < N; i++){
        cin >> src[i][0] >> src[i][1];
    }
    perm(0,HP);
    cout << min_t;
}