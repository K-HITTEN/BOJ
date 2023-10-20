#include <iostream>

using namespace std;

int arr[101][101] = {0};

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int N;
	int  k, w;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> k >> w;
		for (int j = k; j < k + 10; j++) {
			for (int u = w; u < w + 10; u++) {
				arr[j][u] = 1;
			}
		}
	}
	int result = 0;
	for (int i = 0; i < 101; i++) {
		for (int j = 0; j < 101; j++) {
			if (arr[i][j] == 1) {
				result++;
			}
		}
	}
	cout << result;
}