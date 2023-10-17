#include <iostream>

using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int arr[9][9] = { 0 };
	int	max = -1, cols, rows;
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			cin >> arr[i][j];
			if (arr[i][j] > max) {
				max = arr[i][j];
				cols = i;
				rows = j;
			}
		}
	}
	cout << max << "\n" << cols + 1 << " " << rows + 1;
}