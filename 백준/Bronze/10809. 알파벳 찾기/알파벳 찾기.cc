#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string S;
	cin >> S;
	for (int i = 97; i <= 122; i++) {
		for (int j = 0 ; j <S.length(); j++) {
			if (S[j] == char(i)) {
				cout << j << " ";
				break;
			}
			if (j == S.length()-1) {
				cout << -1 << " ";
			}
		}
	}
}