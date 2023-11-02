#include <iostream>

using namespace std;

int main(void) {
	cin.tie(NULL);
	long long n,result = 0;
	cin >> n;
	for (long long i = 1; i < n; i++) {
		result += i;
	}
	cout << result << '\n' << 2;
}