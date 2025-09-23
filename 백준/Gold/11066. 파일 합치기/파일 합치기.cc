#include<iostream>
#include<climits>

using namespace std;

int T, K, tmp;
int sum[501], dp[501][501];

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    cin >> T;
    while(T--){
        cin >> K;
        for(int i = 1; i <= K; i++){
            cin >> tmp;
            sum[i] = sum[i-1]+tmp;
        }
        for(int j = 1; j <= K; j++){
            for(int i = 1; i <= K-j; i++){
                dp[i][i+j] = INT_MAX;
                for(int mid = i; mid <i+j; mid++){
                    dp[i][i+j] = min(dp[i][i+j], dp[i][mid] + dp[mid+1][i+j] + sum[i+j] - sum[i-1]);
                }
            }
        }
        cout << dp[1][K] << '\n';
    }
}