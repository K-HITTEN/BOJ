#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int N, k, x;
	vector<int> arr;
	cin >> N >> k;
	for (int i = 0; i < N; i++) {
		cin >> x;
		arr.push_back(x);
	}
	sort(arr.begin(), arr.end(),greater<>());
	cout << arr[k - 1];
}