#include <iostream>

using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int N;
	cin >> N;
	int i = 0;	
	for (int sum = 2; sum <= N; i++) {
		sum += 6 * i;
	}
	if (N == 1) {
		cout << 1;
	}
	else {
		cout << i;
	}
}