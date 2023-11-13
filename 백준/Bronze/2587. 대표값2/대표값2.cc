#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void) {
	cin.tie(NULL);
	vector <int> arr;
	int N, sum = 0;
	for (int i = 0; i < 5; i++) {
		cin >> N;
		sum += N;
		arr.push_back(N);
	}
	sort(arr.begin(), arr.end());
	cout << sum / 5 << '\n' << arr[2];
}