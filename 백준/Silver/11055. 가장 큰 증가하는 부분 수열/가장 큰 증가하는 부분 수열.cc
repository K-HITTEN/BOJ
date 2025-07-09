#include<iostream>

using namespace std;

int N, arr[1001], dp[1001], ret = 0;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    cin >> N;
    for(int i = 0; i < N; i++)cin >> arr[i];
    for(int i = 0; i < N; i++){
        dp[i] = arr[i];
        for(int j = 0; j < i; j++){
            if(arr[j]<arr[i]&&dp[i]<dp[j]+arr[i])dp[i] = dp[j]+arr[i];
        }
        ret = max(ret,dp[i]);
    }
    cout << ret;
}