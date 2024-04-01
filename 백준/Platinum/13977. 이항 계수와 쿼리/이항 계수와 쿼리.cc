#include <iostream>
#include <cmath>
#define MOD 1000000007
#define fastio cin.tie(0)->ios_base::sync_with_stdio;

using namespace std;

long long dp[4000001];

long long _pow(long long d, long long expr){
    if(expr == 0)return 1;
	else if(expr == 1)return d;
	long num = 1;
	while(expr > 0) {
		if(expr % 2 == 1) {
			num *= d;
			num %= MOD;
		}
		d = (d*d)%MOD;
		expr /=2;
	}
	return num;
}

int main(void){
    fastio;
    int T, N, R;
    dp[0] = 1;
    for(int i = 1; i <= 4000000; i++){
        dp[i] = (dp[i-1]*i)%MOD;
    }
    cin >> T;
    for(int t = 0; t < T; t++){
        cin >> N >> R;
        long long top = dp[N];
        long long down =  _pow((dp[N-R]*dp[R])%MOD,MOD-2);
        cout << (top*down)%MOD << "\n";
    }
}