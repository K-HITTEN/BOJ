#include <iostream>
#include <stack>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int dp[1000002] = { 0 };

int main(void) {
	fastio;
	int N;
	cin >> N;
	for (int i = N; i > 0; i--) {
		if (i % 3 == 0 && (dp[i / 3] == 0 || dp[i / 3] > dp[i] + 1)) {
			dp[i / 3] = dp[i] + 1;
		}
		if (i % 2 == 0 && (dp[i / 2] == 0 || dp[i / 2] > dp[i] + 1)) {
			dp[i / 2] = dp[i] + 1;
		}
		if (i - 1 >= 1 && (dp[i - 1] == 0 || dp[i - 1] > dp[i] + 1)) {
			dp[i - 1] = dp[i] + 1;
		}
	}
	cout << dp[1] <<"\n";
	stack<int> s;
	for(int i = 1; i <N;){
	    s.push(i);
	    if(i*3<=N &&dp[i*3] == dp[i]-1) i *= 3;
	    else if(i *2<=N&&dp[i*2] == dp[i]-1) i *=2;
	    else i+=1;
	}
	s.push(N);
	while(!s.empty()){
	    cout << s.top() << " ";
	    s.pop();
	}
}