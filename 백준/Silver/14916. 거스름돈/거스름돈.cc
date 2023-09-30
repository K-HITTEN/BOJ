#include <iostream>

using namespace std;

int main(void) {
	int n;
	cin >> n;
	
	if (n % 5 % 2 == 0) {
		cout << (n / 5) + (n % 5 / 2);
	}
	else if (n>=5 && (n % 5 + 5) % 2 == 0) {
		cout << (n / 5 - 1) + ((n % 5 + 5) / 2);
	}
	else {
		cout << -1;
	}
}