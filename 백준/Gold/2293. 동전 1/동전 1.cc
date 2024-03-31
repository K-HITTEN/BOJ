#include <iostream>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int dp[10000], coin[100],n,k;

int main(void){
    fastio;
    cin >> n >> k;
    for(int i = 0; i < n; i++)cin>>coin[i];
    dp[0] = 1;
    for(int i = 0; i < n; i++)for(int j = coin[i]; j <= k; j++)dp[j] +=dp[j-coin[i]];
    cout << dp[k];
}