#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string S;
	int N,sum = 0;
	cin >> N;
	cin >> S;
	for (int i = 0; i < N; i++) {
		sum += (int) S[i] -48;
	}
	cout << sum;
}