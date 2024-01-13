#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void) {
	cin.tie(NULL);
	cout.tie(NULL);
	int T, N, M, a;
	cin >> T;
	for (int i = 1; i <= T; i++) {
		cin >> N >> M;
		vector <int> arr_1, arr_2, result;
		if (N > M) {
			for (int j = 0; j < N; j++) {
				cin >> a;
				arr_2.push_back(a);
			}
			for (int j = 0; j < M; j++) {
				cin >> a;
				arr_1.push_back(a);
			}
		}
		else {
			for (int j = 0; j < N; j++) {
				cin >> a;
				arr_1.push_back(a);
			}
			for (int j = 0; j < M; j++) {
				cin >> a;
				arr_2.push_back(a);
			}
		}
		for (int j = 0; j <= (arr_2.size()-arr_1.size()); j++) {
			int sum = 0;
			for (int k = 0; k < arr_1.size(); k++) {
				sum += (arr_1[k] * arr_2[k + j]);
			}
			result.push_back(sum);
		}
		sort(result.begin(), result.end());
		cout << "#" << i << " " << result[result.size() - 1] << "\n";
	}
}