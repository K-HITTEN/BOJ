#include <iostream>

using namespace std;

int main(void) {
	int hour, minute;
	cin >> hour >> minute;
	if (minute >= 45) {
		cout << hour << " " << minute-45;
	}
	else {
		if (hour == 0) {
			cout << 23 << " " << 60 - (45 - minute);
		}
		else {
			cout << hour-1 << " " << 60 - (45 - minute);
		}
	}
}