#include <iostream>
#define MOD 1000000007
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

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
    long long M,a,b;
    long long answer = 0;
    cin >> M;
    for(int i = 0; i < M; i++){
        cin >> a >> b;
        answer += b*_pow(a,MOD-2)%MOD;
        answer %= MOD;
    }
    cout << answer;
}