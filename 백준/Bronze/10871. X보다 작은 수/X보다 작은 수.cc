#include <iostream>

using namespace std;

int main(void) {
	int N, X, a;
	cin >> N >> X;
	for (int i = 0; i < N; i++) {
		cin >> a;
		if (a < X) {
			cout << a << " ";
		}
	}
}