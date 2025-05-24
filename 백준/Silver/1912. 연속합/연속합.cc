#include<iostream>

using namespace std;

int N, arr[100001],dp[100001], ret;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    cin >> N;
    for(int i = 0; i < N; i++)cin >> arr[i];
    dp[0] = ret = arr[0];
    for(int i = 1; i < N; i++){
        dp[i] = max(arr[i],arr[i]+dp[i-1]);
        ret = max(ret, dp[i]);
    }
    cout << ret;
}