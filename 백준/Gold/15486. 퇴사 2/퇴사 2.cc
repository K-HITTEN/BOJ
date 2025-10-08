#include<iostream>

using namespace std;

int N, arr[1500001][2], dp[1500002];


int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    cin >> N;
    for(int i = 1; i <= N; i++)cin >> arr[i][0] >> arr[i][1];
    for(int i = N; i > 0; i--){
        dp[i] = dp[i+1];
        if(i+arr[i][0]-1>N)continue;
        dp[i] = max(dp[i],dp[i+arr[i][0]] + arr[i][1]);
    }
    cout << dp[1];
}