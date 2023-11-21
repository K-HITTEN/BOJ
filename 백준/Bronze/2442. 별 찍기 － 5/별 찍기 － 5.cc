#include <iostream>

using namespace std;

int main(void) {
	cin.tie(NULL);
	cout.tie(NULL);
	int N;
	cin >> N;
	for (int i = 1; i <= N; i++) {
		for (int j =  N - i; j > 0; j--) {
			cout << " ";
		}
		for (int k = 0; k < 2 * i - 1; k++) {
			cout << "*";
		}
		cout << '\n';
	}
}