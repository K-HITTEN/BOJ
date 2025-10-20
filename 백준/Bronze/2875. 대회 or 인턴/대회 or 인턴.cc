#include<iostream>

using namespace std;

int N, M, K, team;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    cin >> N >> M >> K;
    if(N/2<M)team = N/2;
    else team = M;
    K -= (N-(team*2));
    K -= (M-team);
    K = max(K,0);
    while(K){
        K = max(K-3,0);
        team--;
    }
    cout << team;
}