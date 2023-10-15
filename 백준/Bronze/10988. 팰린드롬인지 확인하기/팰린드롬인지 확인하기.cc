#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string S1;
	cin >> S1;
	for (int i = 0; i < S1.length(); i++) {
		if (S1[i] != S1[S1.length() - 1 - i]) {
			cout << 0;
			return 0;
		}
	}
	cout << 1;
}
