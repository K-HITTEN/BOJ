#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#include <algorithm>

using namespace std;

int main(void) {
	cin.tie(NULL);
	cout.tie(NULL);
	int T;
	string S;
	vector<pair<int, string>> arr;
	cin >> T;
	for (int i = 0; i < T; i++) {
		cin >> S;
		arr.push_back({ S.length(),S });
	}
	sort(arr.begin(), arr.end());
	for (int i = 0; i < arr.size(); i++) {
		if ((i != 0 && arr[i - 1].second != arr[i].second) || i == 0) {
			cout << arr[i].second << '\n';
		}
	}
}