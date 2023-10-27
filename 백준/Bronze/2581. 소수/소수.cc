#include <iostream>

using namespace std;

int main(void) {
	cin.tie(NULL);
	int N, M, min = 10001,sum = 0;
	cin >> N >> M;
	for (int i = N; i <= M; i++) {
		if (i == 2) {
			sum += i;
			min = 2;
			continue;
		}
		for (int j = 2; j < i; j++) {
			if (i % j == 0) {
				break;
			}
			if (j == i - 1) {;
				sum += i;
				if (min > i) {
					min = i;
				}
			}
		}
	}
	if (sum == 0) {
		cout << -1;
	}
	else {
		cout << sum << "\n" << min;
	}
}