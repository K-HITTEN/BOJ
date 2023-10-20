#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int count = 0;
	char arr[5][16];
	for (int i = 0; i < 5; i++) {
		memset(arr[i], '\n', 16 * sizeof(char));
	}
	string S;
	for (int i = 0; i < 5; i++) {
		getline(cin, S);
		for (int j = 0; j < S.length(); j++) {
			arr[i][j] = S[j];
		}
	}
	for (int i = 0; i < 15; i++) {
		for (int j = 0; j < 5; j++ ) {
			if (arr[j][i] != '\n') {
				cout << arr[j][i];
			}
		}
	}
}