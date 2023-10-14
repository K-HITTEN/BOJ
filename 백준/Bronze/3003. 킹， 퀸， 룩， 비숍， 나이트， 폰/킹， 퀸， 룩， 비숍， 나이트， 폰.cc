#include <iostream>

using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int arr[6] = {0};
	for (int i = 0; i < 6; i++) {
		cin >> arr[i];
	}
	cout << 1 - arr[0] << " " << 1 - arr[1] << " " << 2 - arr[2] << " " << 2 - arr[3] << " " << 2 - arr[4] << " " << 8 - arr[5];
}