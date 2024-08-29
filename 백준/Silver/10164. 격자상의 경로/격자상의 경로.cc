#include <iostream>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

long long dp[16][16];

int main(void){
    fastio;
	long long N, M, K, tmp, x, y;
	cin >> N >> M >> K;
	dp[1][1]=1;
	for(int i=1; i<=N; i++){
		for(int j=1; j<=M; j++){
			dp[i][j] += dp[i-1][j]+dp[i][j-1];
	        if((i-1)*M+j == K){
	            tmp = dp[i][j];
	            y = i;
	            x = j;
	        }
	    }
	}
	if(K == 0)cout << dp[N][M];
	else{
	    fill(&dp[0][0],&dp[15][16],0);
	    dp[y][x] = 1;
	    for(int i = y; i <=N; i++){
	        for(int j = x; j <= M; j++){
	            dp[i][j]  += dp[i-1][j]+dp[i][j-1];
	        }
	    }
	    cout << tmp * dp[N][M];
	}
}