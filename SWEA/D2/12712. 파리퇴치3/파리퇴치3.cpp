#include <iostream>

using namespace std;

int main(void) {
	cin.tie(NULL);
	cout.tie(NULL);
	int T, N, M;
	int arr[15][15] = {0};
	cin >> T;
	for (int i = 1; i <= T; i++) {
		cin >> N >> M;
		for (int j = 0; j < N; j++) {
			for (int k = 0; k < N; k++) {
				cin >> arr[j][k];
			}
		}
		int max = -1;
		for (int j = 0; j < N; j++) {
			for (int k = 0; k < N; k++) {
				int sum_1 = arr[j][k], sum_2 = arr[j][k];
				for (int w = 1; w < M; w++) {
					if (j - w >= 0) {
						sum_1 += arr[j - w][k];
					}
					if (k - w >= 0) {
						sum_1 += arr[j][k - w];
					}
					if (j + w < N) {
						sum_1 += arr[j + w][k];
					}
					if (k + w < N) {
						sum_1 += arr[j][k + w];
					}
					if (j - w >= 0 && k - w >= 0) {
						sum_2 += arr[j - w][k - w];
					}
					if (j - w >= 0 && k + w < N) {
						sum_2 += arr[j - w][k + w];
					}
					if (j + w < N && k - w >= 0) {
						sum_2 += arr[j + w][k - w];
					}
					if (j + w < N && k + w < N) {
						sum_2 += arr[j + w][k + w];
					}
				}
				if (sum_1 > max) {
					max = sum_1;
				}
				if (sum_2 > max) {
					max = sum_2;
				}
			}
		}
		cout << "#" << i << " " << max << "\n";
	}
}