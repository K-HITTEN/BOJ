#include <iostream>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int main(void){
    fastio;
    int D, H, M, K;
    cin >> D >> H >> M;
    K = ((D*24*60) + (H*60) + M)-((11*24*60) + (11*60) + 11);
    if(K<0)cout << -1;
    else cout << K;
}