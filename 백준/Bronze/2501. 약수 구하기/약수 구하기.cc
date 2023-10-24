#include <iostream>

using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int N, K, count = 0;
	cin >> N >> K;
	for (int i = N; i > 0; i--) {
		if (N % i == 0) {
			count++;
		}
		if (count == K) {
			cout << N / i;
			break;
		}
	}
	if (count != K) {
		cout << 0;
	}
}