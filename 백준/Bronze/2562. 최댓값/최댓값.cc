#include <iostream>

using namespace std;

int main(void) {
	int arr[9];
	int a, maxindex;
	int max = 0;
	for (int i = 0; i < 9; i++) {
		cin >> a;
		arr[i] = a;
		if (a > max) {
			max = a;
			maxindex = i;
		}
	}
	cout << max << "\n" << maxindex+1;
}