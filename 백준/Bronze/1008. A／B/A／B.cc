#include <iostream>

using namespace std;

int main(void) {
	double a, b;
	cout << fixed;
	cout.precision(9);
	cin >> a >> b;
	cout << a / b;
}