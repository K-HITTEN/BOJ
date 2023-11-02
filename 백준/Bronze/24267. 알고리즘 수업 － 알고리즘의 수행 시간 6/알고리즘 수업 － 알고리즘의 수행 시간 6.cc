#include <iostream>

using namespace std;

int main(void) {
	long long n, result = 0 ,j = 1;
	cin >> n;
	for (int i = n - 2; i >= 1; i--) {
		result += i *j;
		j++;
	}
	cout << result << '\n' << 3;
}