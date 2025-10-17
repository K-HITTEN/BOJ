#include<iostream>
#define MOD 1000000009

using namespace std;

long long dp[1000001], T, N;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    dp[1] = 1;
    dp[2] = 2;
    dp[3] = 4;
    cin >> T;
    for(int i = 4; i < 1000001; i++){
        dp[i] = (dp[i-1] + dp[i-2] + dp[i-3])%MOD;
    }
    while(T--){
        cin >> N;
        cout << dp[N] << "\n";
    }
}