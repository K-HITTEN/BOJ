#include <iostream>

using namespace std;

int main(void) {
	cin.tie(NULL);
	int N;
	cin >> N;
	for (int i = 2; i <= N; i++) {
		while (N % i == 0) {
			N /= i;
			cout << i << '\n';
		}
	}
}