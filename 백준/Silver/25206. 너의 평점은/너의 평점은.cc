#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout << fixed;
	cout.precision(4);
	string S, g;
	double grade = 0, total = 0, subject = 0;
	for (int i = 0; i < 20; i++) {
		cin >> S >> grade >> g;
		if (g[0] == 'A') {
			total += 4.0 * grade;
			subject += grade;
		}
		else if (g[0] == 'B') {
			total += 3.0 * grade;
			subject += grade;
		}
		else if (g[0] == 'C') {
			total += 2.0 * grade;
			subject += grade;
		}
		else if (g[0] == 'D') {
			total += 1.0 * grade;
			subject += grade;
		}
		else if (g[0] == 'F') {
			total += 0.0 * grade;
			subject += grade;
		}
		if (g.size() == 2 && g[1] == '+') {
			total += 0.5 * grade;
		}
	}
	cout << total / subject;
}