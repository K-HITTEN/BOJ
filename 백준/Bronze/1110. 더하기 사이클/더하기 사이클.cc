#include <iostream>

using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int N,count =0;
	cin >> N;
	int M = N;
	while (true) {
		int i = (M / 10) + (M % 10);
		M = (M % 10) * 10 + (i % 10);
		count++;
		if (M == N) {
			break;
		}
	}
	cout << count;
}