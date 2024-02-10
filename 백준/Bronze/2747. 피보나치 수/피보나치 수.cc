#include <iostream>
#define fastio cin.tie(0)->ios_base::sync_with_stdio

using namespace std;

int main(void){
    fastio;
    int N;
    int dp[46];
    dp[1] = 1;
    cin >> N;
    for(int i = 2; i <=N; i++){
        dp[i] = dp[i-1] + dp[i-2];
    }
    cout << dp[N];
}