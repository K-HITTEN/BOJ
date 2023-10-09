#include <iostream>
#include <cstring>

using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int arr[10];
	memset(arr, -1, sizeof(arr));
	int k, q , count = 0;
	for (int i = 0; i < 10; i++) {
		cin >> k;
		q = k % 42;
		for (int j = 0; j < 10; j++) {
			if (arr[j] == -1) {
				arr[j] = q;
				count++;
				break;
			}
			else if (arr[j] == q) {
				break;
			}
			else {
				continue;
			}
		}
	}
	cout << count;
}