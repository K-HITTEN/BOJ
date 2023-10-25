#include <iostream>

using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int N, i = 1;
	cin >> N;
	for (; 0 < N; N--) {
		i *= N;
	}
	cout << i;
}