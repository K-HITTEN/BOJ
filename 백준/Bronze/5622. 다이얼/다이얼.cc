#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string S;
	cin >> S;
	int sum = 0;
	for (int i = 0; i < S.length(); i++) {
		if (S[i] == 'A' || S[i] == 'B' || S[i] == 'C') {
			sum += 3;
		}
		else if (S[i] == 'D' || S[i] == 'E' || S[i] == 'F') {
			sum += 4;
		}
		else if (S[i] == 'G' || S[i] == 'H' || S[i] == 'I') {
			sum += 5;
		}
		else if (S[i] == 'J' || S[i] == 'K' || S[i] == 'L') {
			sum += 6;
		}
		else if (S[i] == 'M' || S[i] == 'N' || S[i] == 'O') {
			sum += 7;
		}
		else if (S[i] == 'P' || S[i] == 'Q' || S[i] == 'R' || S[i] == 'S') {
			sum += 8;
		}
		else if (S[i] == 'T' || S[i] == 'U' || S[i] == 'V') {
			sum += 9;
		}
		else {
			sum += 10;
		}
	}
	cout << sum;
}