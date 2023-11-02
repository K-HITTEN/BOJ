#include <iostream>

using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int A, B, C;
	cin >> A >> B >> C;
	if (A + B + C != 180) {
		cout << "Error";
	}
	else if (A == B && A == 60) {
		cout << "Equilateral";
	}
	else if (A == B || B == C || A == C) {
		cout << "Isosceles";
	}
	else {
		cout << "Scalene";
	}
}