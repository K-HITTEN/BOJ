#include<iostream>

using namespace std;

int n, k, tmp, arr[101], dp[10001];

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    cin >> n >> k;
    fill(dp,dp+10001,10001);
    dp[0]=0;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    for(int i = 0; i < k; i++){
        for(int j = 0; j < n; j++){
            if(i+arr[j]>k)continue;
            dp[i+arr[j]]=min(dp[i+arr[j]],dp[i]+1);
        }
    }
    if(dp[k]==10001)cout << -1;
    else cout << dp[k];
}