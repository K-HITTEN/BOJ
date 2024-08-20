#include <iostream>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int dp[16], N, T, P;

int main(void){
    fastio;
    cin >> N;
    for(int i = 1; i <= N; i++){
        cin >> T >> P;
        dp[i] = max(dp[i-1],dp[i]);
        dp[i-1+T] = max(dp[i-1+T],dp[i-1]+P);
    }
    cout << dp[N];
}