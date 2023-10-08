#include <iostream>

using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int arr[101] = { 0 };
	int N, M, i, j, k;
	cin >> N >> M;
	for (int a = 0; a < M; a++) {
		cin >> i >> j >> k;
		for (int b = i; b <= j; b++) {
			arr[b] = k;
		}
	}
	for (int a = 1; a <= N; a++) {
		cout << arr[a] << " ";
	}
}