#include <iostream>

using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	long long A, B, C;
	cin >> A >> B >> C;
	if (B >= C) {
		cout << -1;
	}
	else {
		cout  << A/(C - B)+1;
	}
}