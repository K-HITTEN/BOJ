#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int N,M;
	string S;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> M >> S;
		for (int j = 0; j < S.length(); j++) {
			for (int k = 0; k < M; k++) {
				cout << S[j];
			}
		}
		cout << '\n';
	}
}