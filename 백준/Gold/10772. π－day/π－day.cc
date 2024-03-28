#include <iostream>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int dp[255][255];

int main(void){
    fastio;
    int N, K;
    cin >> N >> K;
    for(int i = 1; i <= N; i++){
        for(int j = 1; j <=i; j++){
            if(j==1||i==j)dp[i][j] = 1;
            else dp[i][j] = dp[i-1][j-1] + dp[i-j][j];
        }
    } 
    cout << dp[N][K];
}