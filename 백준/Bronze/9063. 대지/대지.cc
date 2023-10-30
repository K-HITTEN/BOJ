#include <iostream>

using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int N, X, Y, min_x = 10001, min_y = 10001, max_x = -10001, max_y = -10001;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> X >> Y;
		if (min_x > X) {
			min_x = X;
		}
		if (min_y > Y) {
			min_y = Y;
		}
		if (max_x < X) {
			max_x = X;
		}
		if (max_y < Y) {
			max_y = Y;
		}
	}
	cout << (max_x - min_x) * (max_y - min_y);
}