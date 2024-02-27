#include <iostream>
#include <climits>
#include <algorithm>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int dp[1001][3] = {0,};
int arr[1001][3] = {0,};

int main(void){
    fastio;
    int N;
    int min_value;
    cin >> N;
    for(int i = 1; i <= N; i++)cin >> arr[i][0] >> arr[i][1] >> arr[i][2];
    dp[2][0] = INT_MAX;
    dp[2][1] = arr[1][0] + arr[2][1];
    dp[2][2] = arr[1][0] + arr[2][2];
    for(int i = 3; i <= N; i++){
        dp[i][0] = min(dp[i-1][1],dp[i-1][2])+ arr[i][0];
        dp[i][1] = min(dp[i-1][0],dp[i-1][2])+ arr[i][1];
        dp[i][2] = min(dp[i-1][0],dp[i-1][1])+ arr[i][2];
    }
    min_value = min(dp[N][1],dp[N][2]);
    dp[2][0] = arr[1][1] + arr[2][0];
    dp[2][1] = INT_MAX;
    dp[2][2] = arr[1][1] + arr[2][2];
    for(int i = 3; i <= N; i++){
        dp[i][0] = min(dp[i-1][1],dp[i-1][2])+ arr[i][0];
        dp[i][1] = min(dp[i-1][0],dp[i-1][2])+ arr[i][1];
        dp[i][2] = min(dp[i-1][0],dp[i-1][1])+ arr[i][2];
    }
    min_value = min(min_value,min(dp[N][0],dp[N][2]));
    dp[2][0] = arr[1][2] + arr[2][0];
    dp[2][1] = arr[1][2] + arr[2][1];
    dp[2][2] = INT_MAX;
    for(int i = 3; i <= N; i++){
        dp[i][0] = min(dp[i-1][1],dp[i-1][2])+ arr[i][0];
        dp[i][1] = min(dp[i-1][0],dp[i-1][2])+ arr[i][1];
        dp[i][2] = min(dp[i-1][0],dp[i-1][1])+ arr[i][2];
    }
    min_value = min(min_value,min(dp[N][0],dp[N][1]));
    cout << min_value;
}