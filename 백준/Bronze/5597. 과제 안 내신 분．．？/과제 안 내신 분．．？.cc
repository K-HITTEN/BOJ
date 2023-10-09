#include <iostream>

using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int arr[31] = {0};
	int k,count = 0;
	for (int i = 1; i < 29; i++) {
		cin >> k;
		arr[k] = 1;
	}
	for (int i = 1; i < 31; i++) {
		if (arr[i] == 0) {
			cout << i << "\n";
			count++;
			if (count == 2) {
				break;
			}
		}
	}
}