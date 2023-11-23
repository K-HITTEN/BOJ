#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void) {
	cin.tie(NULL);
	cout.tie(NULL);
	int N, a;
	vector<int> arr;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> a;
		arr.push_back(a);
	}
	sort(arr.begin(), arr.end());
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> a;
		int left = 0, right = arr.size() - 1;
		while (true) {
			int mid = (left + right) / 2;
			if (arr[mid] == a) {
				cout << 1 << " ";
				break;
			}
			else if (arr[mid] > a) {
				right = mid - 1;
			}
			else {
				left = mid + 1;
			}
			if ((left == right && arr[left] != a )|| (left > right)) {
				cout << 0 << " ";
				break;
			}
		}
	}
}