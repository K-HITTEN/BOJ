#include <iostream>

using namespace std;

int main(void) {
	int hour, minute, work;
	cin >> hour >> minute >> work;
	hour +=  (work / 60);
	minute += (work % 60);
	if (minute >= 60) {
		minute %= 60;
		hour++;
	}
	if (hour >= 24) {
		hour -= 24;
	}
	cout << hour << " " << minute;
}