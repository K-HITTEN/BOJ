#include <iostream>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)
#define MOD 1000000000

using namespace std;

long long dp[101][1<<10][10] = {0,};

int main(void){
    fastio;
    int N;
    cin >> N;
    for(int i = 1; i<10; i++){
        dp[1][1<<i][i] = 1;
    }
    for(int i = 2; i <= N; i++){
        for(int j = 0; j<10; j++){
            for(int k = 0; k <(1<<10); k++){
                if(j == 0)dp[i][(k|(1<<0))][0] = (dp[i][(k|(1<<0))][0]+dp[i-1][k][1])%MOD;
                else if(j == 9)dp[i][(k|(1<<9))][9] = (dp[i][(k|(1<<9))][9]+dp[i-1][k][8])%MOD;
                else{
                    dp[i][(k|(1<<j))][j] = (dp[i][(k|(1<<j))][j]+dp[i-1][k][j-1]+dp[i-1][k][j+1])%MOD;
                }
            }
        }
    }
    long long result = 0;
    for(int i = 0; i <10; i++){
        result = (result+dp[N][(1<<10)-1][i])%MOD;
    }
    cout << result;
}