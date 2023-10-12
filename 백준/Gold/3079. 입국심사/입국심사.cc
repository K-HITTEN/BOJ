#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<long long> arr;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int N, M, T;
	cin >> N >> M;
	for (int i = 1; i <= N; i++) {
		cin >> T;
		arr.push_back(T);
	}
	sort(arr.begin(), arr.end());
	long long left = 1, right = arr[0]*M;
	long long mid, sum, answer = 0;
	while(left <= right) {
		mid = left + (right - left) / 2;
		sum = 0;
		for (int i = 0; i < N; i++) {
			sum += mid / arr[i];
		}
		if (sum >= M) {
			if (answer > mid || answer == 0) {
				answer = mid;
			}
			right = mid - 1;
		}
		else {
			left = mid + 1;
		}
	}
	cout << answer;
}