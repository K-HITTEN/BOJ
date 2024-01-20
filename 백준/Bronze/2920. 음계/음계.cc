#include <iostream>

using namespace std;

int arr[8];

void check() {
	int i;
	if (arr[0] == 1) {
		for (i = 0; i < 8; i++) {
			if (arr[i] != i + 1) {
				cout << "mixed";
				return;
			}
		}
		cout << "ascending";
		return;
	}
	else if(arr[0] ==  8) {
		for (i = 0; i < 8; i++) {
			if (arr[i] != 8 - i) {
				cout << "mixed";
				return;
			}
		}
		cout << "descending";
		return;
	}
	else {
		cout << "mixed";
		return;
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	for (int i = 0; i < 8; i++) {
		cin >> arr[i];
	}
	check();
}