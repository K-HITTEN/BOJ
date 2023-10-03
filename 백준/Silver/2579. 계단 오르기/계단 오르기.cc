#include <iostream>

using namespace std;

long long arr[301];
long long arr2[301];

int main(void) {
	int stair;
	cin >> stair;
	for (int i = 1; i <= stair; i++) {
		cin >> arr2[i];
	}
	arr[1] = arr2[1];
	arr[2] = max(arr2[1] + arr2[2], arr2[2]);
	arr[3] = max(arr2[1] + arr2[3], arr2[2] + arr2[3]);
	for (int i = 4; i <= stair; i++) {
		arr[i] = max(arr[i - 2] + arr2[i], arr[i - 3] + arr2[i - 1] + arr2[i]);
	}
	cout << arr[stair];
}