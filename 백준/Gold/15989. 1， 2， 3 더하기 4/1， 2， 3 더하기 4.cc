#include <iostream>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int dp[10001][4];

int main(void){
    fastio;
    int N, tmp;
    cin >> N;
    dp[1][1] = dp[2][1] = dp[2][2] = dp[3][1] = dp[3][2] = dp[3][3] = 1;
    for(int i = 4; i <=10000; i++){
        dp[i][1] = dp[i-1][1];
        dp[i][2] = dp[i-2][1]+dp[i-2][2];
        dp[i][3] = dp[i-3][1]+dp[i-3][2]+dp[i-3][3];
    }
    for(int i = 0; i < N; i++){
        cin >> tmp;
        cout << dp[tmp][1] + dp[tmp][2] + dp[tmp][3] << "\n";
    }
}