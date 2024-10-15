#include<iostream>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int dp[1001][32][3];

int main(void){
    fastio;
    int T, W, tmp, ret = 0;
    cin >> T >> W;
    for(int i = 1; i <= T; i++){
        cin >> tmp;
        for(int j = 1; j <= W+1; j++){
            for(int k = 1; k < 3; k++){
                dp[i][j][k] = max(dp[i-1][j][k],dp[i-1][j-1][(k%2)+1]);
                if(k == tmp)dp[i][j][k]++;
                if(i == 1 && j==1 &&k==2)dp[i][j][k] = 0;
                ret = max(ret,dp[i][j][k]);
            }
        }
    }
    cout << ret;
}