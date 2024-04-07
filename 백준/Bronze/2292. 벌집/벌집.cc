#include <iostream>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int main(void) {
	fastio;
	int N, i = 0;
	cin >> N;
	for (int sum = 2; sum <= N; i++) {
		sum += 6 * i;
	}
	if (N == 1)cout << 1;
	else cout << i;
}