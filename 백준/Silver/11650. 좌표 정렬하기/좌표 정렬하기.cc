#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void) {
	long long N, x, y;
	vector<pair<long long, long long>> arr;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> x >> y;
		arr.push_back({ x,y });
	}
	sort(arr.begin(), arr.end());
	for (int i = 0; i < arr.size(); i++) {
		cout << arr[i].first << " " << arr[i].second << '\n';
	}
}