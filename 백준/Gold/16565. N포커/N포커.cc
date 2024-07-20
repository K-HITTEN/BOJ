#include <iostream>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int dp[53][53];

int main(void){
    fastio;
    int N, ret = 0;
    cin >> N;
    for(int i = 0; i < 53; i++){
        dp[i][0] = 1;
        dp[i][i] = 1;
        for(int j = 1; j < i; j++){
            dp[i][j] = dp[i-1][j-1] + dp[i-1][j];
            dp[i][j] %= 10007;
        }
    }
    for(int i = 4; i <= N; i+=4){
        if((i/4)%2==1)ret += dp[13][i/4]*dp[52-i][N-i];
        else ret -= dp[13][i/4]*dp[52-i][N-i];
        ret %= 10007;
    }
    if(ret<0)cout << ret+10007;
    else cout<<ret;
}