#include <iostream>
#include <vector>
#define fastio cin.tie(0)->ios_base::sync_with_stdio

using namespace std;

long dp[1000001] = {0,};

int main(void){
    fastio;
    int N;
    cin >> N;
    dp[1] = 2;
    dp[2] = 7;
    dp[3] = 22;
    int zigzag = 1;
    for(int i = 4; i <= N; i++){
        zigzag = (zigzag+ dp[i-3])%1000000007;
        dp[i] = (3*dp[i-2] + 2*(zigzag+dp[i-1]))%1000000007;
    }
    cout << dp[N]%1000000007;
}
