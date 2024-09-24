#include <iostream>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

long long dp[101][21], arr[101], val, N;

int main(void){
    fastio;
    cin >> N;
    for(int i = 0; i < N-1; i++)cin >> arr[i];
    cin >> val;
    dp[1][arr[0]] = 1;
    for(int i = 1; i < N-1; i++){
        for(int j = 0; j <= 20; j++){
            if(dp[i][j]>0){
                if(j+arr[i]<=20)dp[i+1][j+arr[i]] += dp[i][j];
                if(j-arr[i]>=0)dp[i+1][j-arr[i]] += dp[i][j];
            }
        }
    }
    cout << dp[N-1][val];
}