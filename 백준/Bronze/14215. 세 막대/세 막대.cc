#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	vector <int> arr = { 0,0,0 };
	cin >> arr[0] >> arr[1] >> arr[2];
	sort(arr.begin(), arr.end());
	if (arr[0] + arr[1] > arr[2]) {
		cout << arr[0] + arr[1] + arr[2];
	}
	else {
		cout << (arr[0] + arr[1]) * 2 - 1;
	}
}