#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void) {
	long long N;
	cin >> N;
	vector<long long> arr;
	while (N != 0) {
		arr.push_back(N % 10);
		N /= 10;
	}
	sort(arr.begin(), arr.end(),greater<>());
	for (int i = 0; i < arr.size(); i++) {
		cout << arr[i];
	}
}