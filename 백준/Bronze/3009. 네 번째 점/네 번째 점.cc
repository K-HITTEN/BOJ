#include <iostream>

using namespace std;

int main(void) {
	cin.tie(NULL);
	int arr[3] = { 0 }, arr2[3] = {0};
	for (int i = 0; i < 3; i++) {
		cin >> arr[i] >> arr2[i];
	}
	if (arr[0] == arr[1]) {
		cout << arr[2];
	}
	else if(arr[0] == arr[2]) {
		cout << arr[1];
	}
	else {
		cout << arr[0];
	}
	cout << " ";
	if (arr2[0] == arr2[1]) {
		cout << arr2[2];
	}
	else if (arr2[0] == arr2[2]) {
		cout << arr2[1];
	}
	else {
		cout << arr2[0];
	}
}