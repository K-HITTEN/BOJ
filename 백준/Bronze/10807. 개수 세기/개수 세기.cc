#include <iostream>

using namespace std;

int arr[201] = {0};

int main(void) {
	int N,a;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> a;
		if (a < 0) {
			a = (a * -1) + 100;
		}
		arr[a] = arr[a] + 1;
	}
	cin >> a;
	if (a < 0) {
		a = (a * -1) + 100;
	}
	cout << arr[a];

}

