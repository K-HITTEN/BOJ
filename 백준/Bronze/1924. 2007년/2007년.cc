#include <iostream>

using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int month, day, count = 0, c = 1;
	cin >> month >> day;
	while (c != month) {
		if (c == 2) {
			count += 28;
		}
		else if ((c <= 7 && c % 2 == 1) || (c >= 8 && c % 2 == 0)) {
			count += 31;
		}
		else {
			count += 30;
		}
		c++;
	}
	count += day;

	if (count % 7 == 0) {
		cout << "SUN";
	}
	else if (count % 7 == 1) {
		cout << "MON";
	}
	else if (count % 7 == 2) {
		cout << "TUE";
	}
	else if (count % 7 == 3) {
		cout << "WED";
	}
	else if (count % 7 == 4) {
		cout << "THU";
	}
	else if (count % 7 == 5) {
		cout << "FRI";
	}
	else if (count % 7 == 6) {
		cout << "SAT";
	}
}