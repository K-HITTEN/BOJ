#include <iostream>

using namespace std;

int main(void) {
	cin.tie(NULL);
	int a, b;
	while (true) {
		cin >> a >> b;
		if (a == 0 && b == 0) {
			break;
		}
		else if (b % a == 0) {
			cout << "factor\n";
		}
		else if (a % b == 0) {
			cout << "multiple\n";
		}
		else {
			cout << "neither\n";
		}
	}
}