#include <iostream>

using namespace std;

int main(void) {
	long long X, N, a, b;
	long long result = 0;
	cin >> X >> N;
	for (int i = 0; i < N; i++) {
		cin >> a >> b;
		result += (a * b);
	}
	if (result == X) {
		cout << "Yes";
	}
	else {
		cout << "No";
	}
}