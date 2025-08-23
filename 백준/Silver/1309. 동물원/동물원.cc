#include<iostream>

using namespace std;

int N, dp[100001];

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    cin >> N;
    dp[0]=1;
    dp[1]=3;
    for(int i = 2; i <= N; i++){
        dp[i] = (dp[i-1]*2+dp[i-2])%9901;
    }
    cout << dp[N];
}