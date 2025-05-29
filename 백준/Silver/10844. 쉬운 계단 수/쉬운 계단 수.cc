#include<iostream>
#define MOD 1000000000

using namespace std;

int dp[101][10], N, ret = 0;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    cin >> N;
    for(int i = 1; i < 10; i++)dp[1][i]=1;
    for(int i = 2; i <= N; i++){
        for(int j = 0; j < 10; j++){
            if(j==0)dp[i][j]=dp[i-1][j+1];
            else if(j==9)dp[i][j]=dp[i-1][j-1];
            else dp[i][j]=dp[i-1][j-1]+dp[i-1][j+1];
            dp[i][j]%=MOD;
        }
    }
    for(int i = 0; i < 10; i++)ret=(ret+dp[N][i])%MOD;
    cout << ret;
}