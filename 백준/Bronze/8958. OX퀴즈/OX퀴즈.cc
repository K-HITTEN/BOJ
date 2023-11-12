#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main(void) {
	cin.tie(NULL);
	int T;
	cin >> T;
	string S;
	getline(cin, S);
	for (int i = 0; i < T; i++) {
		getline(cin, S);
		int sum = 0, score = 1;
		for (int j = 0; j < S.length(); j++) {
			if (S[j] == 'O') {
				sum += score;
				score++;
			}
			else {
				score = 1;
			}
		}
		cout << sum << '\n';
	}
}