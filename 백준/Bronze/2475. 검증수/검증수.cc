#include <iostream>

using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int N, sum = 0;
	for (int i = 0; i < 5; i++) {
		cin >> N;
		sum += (N * N);
	}
	cout << sum % 10;
}