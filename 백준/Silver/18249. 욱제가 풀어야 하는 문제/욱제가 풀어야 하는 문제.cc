#include <iostream>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)
#define MOD 1000000007

using namespace std;

long long dp[191230];


int main(void){
    fastio;
    int T, tmp;
    cin >> T;
    dp[1] = 1;
    dp[2] = 2;
    for(int i = 3; i < 191230; i++){
        dp[i] = (dp[i-1] + dp[i-2])%MOD;
    }
    for(int i = 0; i < T; i++){
        cin >> tmp;
        cout << dp[tmp] << "\n";
    }
}