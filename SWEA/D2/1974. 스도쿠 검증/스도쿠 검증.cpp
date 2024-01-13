#include <iostream>

using namespace std;

int main(void) {
	cin.tie(NULL);
	cout.tie(NULL);
	int arr[9][9] = { 0 };
	int T;
	cin >> T;
	for (int i = 1; i <= T; i++) {
		for (int j = 0; j < 9; j++) {
			for (int k = 0; k < 9; k++) {
				cin >> arr[j][k];
			}
		}
		int F = 0;
		for (int j = 0; j < 9; j++) {
			for (int k = 0; k < 9; k++) {
				for (int u = 0; u < 8; u++) {
					if (arr[j][k] == arr[u][k] && j != u) {
						F = 1;
						break;
					}
					if (arr[j][k] == arr[j][u] && k != u) {
						F = 1;
						break;
					}
				}
				if (F == 1) {
					break;
				}
				else {
					for (int u = j / 3 * 3; u < j / 3 * 3 + 3; u++) {
						for (int w = k / 3 * 3; w < k / 3 * 3 + 3; w++) {
							if (arr[j][k] == arr[u][w] && j != u && k != w) {
								F = 1;
								break;
							}
						}
						if (F == 1) {
							break;
						}
					}
				}
				if (F == 1) {
					break;
				}
			}
			if (F == 1) {
				break;
			}
		}
		if (F == 1) {
			cout << "#" << i << " 0\n";
		}
		else {
			cout << "#" << i << " 1\n";
		}
	}
}