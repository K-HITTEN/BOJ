#include <iostream>

using namespace std;

int main(void) {
	long long N, result = 0;
	cin >> N;
	for (long long i = 1; i < N; i++) {
		int j = i;
		long long sum = 0;
		while (j != 0) {
			sum += (j % 10);
			j /= 10;
		}
		if (N == sum + i) {
			result = i;
			break;
		}
	}
	cout << result;
}