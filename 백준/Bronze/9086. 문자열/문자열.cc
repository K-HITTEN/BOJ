#include <iostream>
#include <cstring>
#include <string>

using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int N;
	cin >> N;
	string S;
	for (int i = 0; i < N; i++) {
		cin >> S;
		cout << S[0] << S[S.length() - 1] << "\n";
	}
}