#include <iostream>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int dp[1001], arr[1001];

int main(void){
    fastio;
    int N;
    cin >> N;
    for(int i = 1; i <= N; i++){
        cin >> arr[i];
    }
    dp[1] = arr[1];
    for(int i = 2; i <= N; i++){
        dp[i] = arr[i];
        for(int j = 1; j < i; j++){
            dp[i] = min(dp[i], dp[i-j]+arr[j]);
        }
    }
    cout << dp[N];
}