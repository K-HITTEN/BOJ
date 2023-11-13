#include <iostream>

using namespace std;

int arr[5001] = {0};

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	arr[0] = -1, arr[1] = -1, arr[2] = -1, arr[3] = 1, arr[4] = -1, arr[5] = 1;
	for (int i = 6; i <= 5000; i++) {
		if (arr[i - 5] > 0) {
			arr[i] = arr[i - 5] + 1;
		}
		else if (arr[i - 3] > 0) {
			arr[i] = arr[i - 3] + 1;
		}
		else {
			arr[i] = -1;
		}
	}
	int N;
	cin >> N;
	cout << arr[N];
}