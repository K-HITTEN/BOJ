#include<iostream>

using namespace std;

int dp[10001], arr[10001];

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++)cin >> arr[i];
    dp[1] = arr[1];
    dp[2] = arr[1]+arr[2];
    for(int i = 3; i <= n; i++)dp[i] = max(dp[i-1],max(dp[i-3]+arr[i]+arr[i-1],dp[i-2]+arr[i]));
    cout << dp[n];
}