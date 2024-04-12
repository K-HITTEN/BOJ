#include <iostream>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int dp[31][2];

int main(void){
    fastio;
    int D, K;
    cin >> D >> K;
    dp[1][0] = dp[2][1] = 1;
    for(int i = 3; i < 31; i++){
        dp[i][0] = dp[i-1][0] + dp[i-2][0];
        dp[i][1] = dp[i-1][1] + dp[i-2][1];
    }
    for(int i = 1; i < 100000; i++){
        for(int j = 1; j < 100000; j++){
            if(i*dp[D][0] + j*dp[D][1] == K){
                cout << i << "\n" << j;
                return 0;
            }
            if(i*dp[D][0] + j*dp[D][1] > K)break;
        }
    }
}