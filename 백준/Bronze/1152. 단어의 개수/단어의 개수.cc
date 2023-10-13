#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string S;
	int count = 1;
	getline(cin, S);
	for (int i = 0; i < S.length(); i++) {
		if (S[i] == ' ') {
			count++;
		}
	}
	if (S[0] == ' ') {
		count--;
	}
	if (S[S.length() - 1] == ' ') {
		count--;
	}
	cout << count;
}