#include<iostream>
#include<vector>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int N, L, R, X, res = 0;
vector<int> v;

void backtracking(int idx, int sum, int easy, int difficult){
    if(idx == N){
        if(sum == 0||sum<L||sum>R||(difficult-easy)<X)return;
        res++;
        return;
    }
    backtracking(idx+1,sum+v[idx],min(easy,v[idx]),max(difficult,v[idx]));
    backtracking(idx+1,sum,easy,difficult);
}

int main(void){
    fastio;
    cin >> N >> L >> R >> X;
    v.resize(N);
    for(int i = 0; i < N; i++)cin >> v[i];
    backtracking(0,0,100000000,0);
    cout << res;
}