#include <iostream>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

long long dp[91];

int main(void){
    fastio;
    int N;
    dp[1] = 1;
    dp[2] = 1;
    for(int i = 3; i <91; i++){
        dp[i] = dp[i-1] + dp[i-2];
    }
    cin >> N;
    cout << dp[N];
}