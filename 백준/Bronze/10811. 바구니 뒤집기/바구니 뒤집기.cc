#include <iostream>

using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int arr[101] = { 0 };
	int arr2[101] = { 0 };
	int N, M, i, j, g;
	cin >> N >> M;
	for (int k = 1; k <= N; k++) {
		arr[k] = k;
	}
	for (int k = 0; k < M; k++) {
		cin >> i >> j;
		for (int q = i; q <= j; q++) {
			arr2[q] = arr[q];
		}
		for (int q = i; q <= j; q++) {
			arr[q] = arr2[i + (j - q)];
		}
	}
	for (int k = 1; k <= N; k++) {
		cout << arr[k] << " ";
	}
}