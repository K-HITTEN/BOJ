#include <iostream>

using namespace std;

int main(void) {
	int N, M, i, j, g;
	int arr[101] = { 0 };
	cin >> N >> M;
	for (int k = 1; k <= N; k++) {
		arr[k] = k;
	}
	for (int k = 0; k < M; k++) {
		cin >> i >> j;
		g = arr[i];
		arr[i] = arr[j];
		arr[j] = g;
	}
	for (int k = 1; k <= N; k++) {
		cout << arr[k] << " ";
	}
}