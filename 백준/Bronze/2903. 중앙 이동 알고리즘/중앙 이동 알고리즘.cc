#include <iostream>

using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int a = 2, N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		a = 2 * a - 1;
	}
	cout << a * a;
}