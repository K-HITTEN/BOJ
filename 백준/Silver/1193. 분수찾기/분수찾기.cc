#include <iostream>

using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int N, sum = 0, i = 0;
	cin >> N;
	for (; sum < N;) {
		i++;
		sum += i;
	}
	int k = 1;
	int u = i;
	while (sum != N) {
		k++;
		i--;
		sum--;
	}
	if (u % 2 == 0) {
		cout << i << "/" << k;
	}
	else {
		cout << k << "/" << i;
	}
}