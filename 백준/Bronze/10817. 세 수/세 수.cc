#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int x;
	vector <int> arr;
	for (int i = 0; i < 3; i++) {
		cin >> x;
		arr.push_back(x);
	}
	sort(arr.begin(), arr.end());
	cout << arr[1];
}