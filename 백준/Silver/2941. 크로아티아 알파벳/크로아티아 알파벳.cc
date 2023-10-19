#include <iostream>

using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string S;
	cin >> S;
	int count = 0;
	for (int i = 0; i < S.length(); i++) {
		if (S[i] == 'c') {
			if (i + 1 < S.length() && (S[i + 1] == '=' || S[i + 1] == '-')) {
				i++;
			}
		}
		else if (S[i] == 'd') {
			if (i + 2 < S.length() && (S[i + 1] == 'z' && S[i + 2] == '=')) {
				i = i + 2;
			}
			else if (i + 1 < S.length() && S[i + 1] == '-') {
				i++;
			}
		}
		else if (S[i] == 'l') {
			if (i + 1 < S.length() && S[i + 1] == 'j') {
				i++;
			}
		}
		else if (S[i] == 'n') {
			if (i + 1 < S.length() && S[i + 1] == 'j') {
				i++;
			}
		}
		else if (S[i] == 's') {
			if (i + 1 < S.length() && S[i + 1] == '=') {
				i++;
			}
		}
		else if (S[i] == 'z') {
			if (i + 1 < S.length() && S[i + 1] == '=') {
				i++;
			}
		}
		count++;
	}
	cout << count;
}