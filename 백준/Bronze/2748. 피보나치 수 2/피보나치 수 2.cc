#include <iostream>

#define fastio cin.tie(0) -> ios_base::sync_with_stdio(0)

using namespace std;

long long dp[91];

int main(void){
    fastio;
    dp[0] = 1;
    dp[1] = 1;
    for(int i = 2; i <= 90; i++) dp[i] = dp[i-1]+dp[i-2];
    int n;
    cin >> n;
    cout << dp[n-1];
}