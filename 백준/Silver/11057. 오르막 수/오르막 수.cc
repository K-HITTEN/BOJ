#include<iostream>

using namespace std;

int dp[1001][10], N, sum = 0;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    cin >> N;
    for(int i = 0; i < 10; i++)dp[1][i] = 1;
    for(int i = 2; i <= N; i++){
        for(int j = 0; j < 10; j++){
            if(j==0)dp[i][0]=1;
            else{
                dp[i][j] = dp[i-1][j]+dp[i][j-1];
                dp[i][j]%=10007;
            }
        }
    }
    for(int i = 0; i < 10; i++){
        sum += dp[N][i];
        sum %= 10007;
    }
    cout << sum;
}