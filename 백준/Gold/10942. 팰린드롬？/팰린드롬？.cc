#include <iostream>

using namespace std;

int arr[2001] = { 0 }, dp[2001][2001] = { 0 };

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int N, M, S, E;
	cin >> N;
	for (int i = 1; i <= N; i++) {
		cin >> arr[i];
		dp[i][i] = 1;
	}
	for (int i = 1; i < N; i++) {
		if(arr[i] == arr[i+1])dp[i][i + 1] = 1;
	}
	for (int i = N-2; i > 0; i--) {
		for (int j = i+2; j <= N; j++) {
			if (arr[i] == arr[j] && dp[i + 1][j - 1]) {
				dp[i][j] = 1;
			}
		}
	}
	cin >> M;
	for (int i = 0; i < M; i++) {
		cin >> S >> E;
		cout << dp[S][E] << "\n";
	}
}