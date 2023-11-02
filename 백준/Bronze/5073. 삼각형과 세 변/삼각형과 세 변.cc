#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void) {
	cin.tie(NULL);
	vector <int> arr = { 0,0,0 };
	while (true) {
		cin >> arr[0] >> arr[1] >> arr[2];
		if (arr[0] == 0 && arr[1] == 0 && arr[2] == 0) {
			break;
		}
		sort(arr.begin(), arr.end());
		if (arr[2] >= arr[0] + arr[1]) {
			cout << "Invalid\n";
		}
		else if (arr[0] == arr[1] && arr[1] == arr[2]) {
			cout << "Equilateral\n";
		}
		else if (arr[0] == arr[1] || arr[1] == arr[2] || arr[0] == arr[2]) {
			cout << "Isosceles\n";
		}
		else {
			cout << "Scalene\n";
		}
	}
}