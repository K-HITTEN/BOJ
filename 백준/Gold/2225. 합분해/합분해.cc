#include<iostream>

using namespace std;

int dp[201][201];

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    int N, K;
    cin >> N >> K;
    for(int i = 0; i <= N; i++)dp[i][1] = 1;
    for(int i = 2; i <= K; i++){
        for(int j = 0; j <= N; j++){
            for(int k = 0; k <= N; k++){
                if(j-k<0)continue;
                dp[j][i] += dp[j-k][i-1];
                dp[j][i] %= 1000000000;
            }
        }
    }
    cout << dp[N][K];
}