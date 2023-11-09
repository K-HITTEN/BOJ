#include <iostream>

using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int a0, a1, c, n0;
	cin >> a0 >> a1 >> c >> n0;
	if (a0 * n0 + a1 <= c * n0 && a0 <= c) {
		cout << 1;
	}
	else {
		cout << 0;
	}
}