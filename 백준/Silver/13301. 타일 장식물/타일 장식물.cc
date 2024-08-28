#include <iostream>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

long long dp[81];

int main(void) {
    fastio;
    int N;
    cin >> N;
    dp[0] = dp[1] = 1;
    for(int i = 2; i <= N; i++){
        dp[i] = dp[i-1]+dp[i-2];
    }
    cout << dp[N]*2 + dp[N-1]*2;
}