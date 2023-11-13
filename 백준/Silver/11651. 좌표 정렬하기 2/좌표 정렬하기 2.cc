#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(pair<long long, long long> a, pair<long long, long long> b) {
	if (a.second == b.second) {
		return a.first < b.first;
	}
	return a.second < b.second;
}

int main(void) {
	long long N, x, y;
	cin >> N;
	vector <pair<long long, long long>> arr;
	for (long long i = 0; i < N; i++) {
		cin >> x >> y;
		arr.push_back({ x,y });
	}
	sort(arr.begin(), arr.end(), compare);
	for (long long i = 0; i < arr.size(); i++) {
		cout << arr[i].first << " " << arr[i].second << "\n";
	}
}