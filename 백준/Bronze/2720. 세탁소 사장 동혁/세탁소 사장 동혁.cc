#include <iostream>

using namespace std;

int main(void) {
	cin.tie(NULL);
	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		int change;
		cin >> change;
		cout << change / 25 << " ";
		change %= 25;
		cout << change / 10 << " ";
		change %= 10;
		cout << change / 5 << " " << change % 5 << "\n";
	}
}