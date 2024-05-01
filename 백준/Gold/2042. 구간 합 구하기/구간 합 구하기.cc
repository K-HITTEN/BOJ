#include <iostream>
#include <vector>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

vector<long long> v, tree;
long long N, M, K, tmp1, tmp2, tmp3;

void update(long long idx, long long val){
    while(idx <= N){
        tree[idx] += val;
        idx += (idx & -idx);
    }
}

long long _sum(long long idx){
    long long answer = 0;
    while(idx > 0){
        answer += tree[idx];
        idx -= (idx & -idx);
    }
    return answer;
}

int main(void){
    fastio;
    cin >> N >> M >> K;
    v.resize(N+1);
    tree.resize(N+1);
    for(int i = 1; i <= N; i++){
        cin >> v[i];
        update(i,v[i]);
    }
    for(int i = 0; i < M + K; i++){
        cin >> tmp1 >> tmp2 >> tmp3;
        if(tmp1 == 1){
            long long tmp = tmp3 - v[tmp2];
            v[tmp2] = tmp3;
            update(tmp2,tmp);
        }
        else{
            cout << _sum(tmp3)-_sum(tmp2-1) <<"\n";
        }
    }
}