#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	long long a,N;
	vector<long long> arr;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> a;
		arr.push_back(a);
	}
	sort(arr.begin(), arr.end());
	cout << arr[0] << " " << arr[N - 1];
}