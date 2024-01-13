#include <iostream>

using namespace std;

int main(void) {
	cin.tie(NULL);
	cout.tie(NULL);
	int T, N;
	int arr[7][7] = {0};
	cin >> T;
	for (int i = 1; i <= T; i++) {
		cin >> N;
		for (int j = 0; j < N; j++) {
			for (int k = 0; k < N; k++) {
				cin >> arr[j][k];
			}
		}
		cout << "#" << i << "\n";
		for (int j = 0; j < N; j++) {
			for (int k = N - 1; k >= 0; k--) {
				cout << arr[k][j];
			}
			cout << " ";
			for (int k = N - 1; k >= 0; k--) {
				cout << arr[N - (j + 1)][k];
			}
			cout << " ";
			for (int k = 0; k < N; k++) {
				cout << arr[k][N - (j + 1)];
			}
			cout << "\n";
		}
	}
}