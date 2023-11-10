#include <iostream>

using namespace std;

int main(void) {
	long long arr[10] = { 0 };
	long long A, B, C, sum;
	cin >> A >> B >> C;
	sum = A * B * C;
	while (sum != 0) {
		int i = sum % 10;
		arr[i]++;
		sum /= 10;
	}
	for (int i = 0; i < 10; i++) {
		cout << arr[i] << "\n";
	}
}