#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main(void) {
	cin.tie(NULL);
	cout.tie(NULL);
	string S;
	getline(cin, S);
	for (int i = 0; i < S.length(); i++) {
		cout << S[i];
		if (i % 10 == 9) {
			cout << '\n';
		}
	}
}