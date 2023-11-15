#include <iostream>

using namespace std;

int main(void) {
	cin.tie(NULL);
	cout.tie(NULL);
	int T;
	cin >> T;
	for (int i = 0; i < T; i++) {
		int H, W, N;
		cin >> H >> W >> N;
		if (N % H != 0) {
			cout << N % H;
			int c = N / H + 1;
			if (c < 10) {
				cout << 0 << c;
			}
			else {
				cout << c;
			}
		}
		else {
			cout << H;
			int c = N / H;
			if (c < 10) {
				cout << 0 << c;
			}
			else {
				cout << c;
			}
		}
		cout << "\n";
	}
}