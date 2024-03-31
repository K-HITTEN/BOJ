#include <iostream>
#include <vector>
#include <algorithm>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

bool cmp(pair<int,int> a, pair<int,int> b) {
	if (a.second == b.second) {
		return a.first < b.first;
	}
	return a.second < b.second;
}

int main(void) {
    fastio;
	int N, x, y;
	cin >> N;
	vector <pair<int, int>> arr;
	for (int i = 0; i < N; i++) {
		cin >> x >> y;
		arr.push_back({ x,y });
	}
	sort(arr.begin(), arr.end(), cmp);
	for (int i = 0; i < arr.size(); i++) {
		cout << arr[i].first << " " << arr[i].second << "\n";
	}
}