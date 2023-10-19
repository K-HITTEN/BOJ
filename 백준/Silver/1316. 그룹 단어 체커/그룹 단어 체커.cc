#include <iostream>
#include <string>
#include <cstring>
#include <vector>

using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int N;
	string S;
	cin >> N;
	int count = 0;
	for (int i = 0; i < N; i++) {
		int z = 0;
		cin >> S;
		vector<char> C;
		for (int j = 0; j < S.length(); j++) {
			if (C.size() == 0) {
				C.push_back(S[j]);
			}
			if (C[C.size() - 1] == S[j]) {
				continue;
			}
			else {
				for (int k = 0; k < C.size() - 1; k++) {
					if (C[k] == S[j]) {
						z++;
						break;
					}
				}
				if (z == 1) {
					break;
				}
				else{
					C.push_back(S[j]);
				}
			}
		}
		if (z == 0) {
			count++;
		}
	}
	cout << count;
}