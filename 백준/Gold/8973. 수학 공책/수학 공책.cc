#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>

using namespace std;

long long arr[2001][2001] = { 0 };
long long arr2[2][2001] = { 0 };

int main(void) {
	long long num;
	cin >> num;
	long long a, b;
	for (long long i = 0; i < num; i++) {
		cin >> a;
		arr2[0][i] = a;
	}
	for (long long i = 0; i < num; i++) {
		cin >> b;
		arr2[1][i] = b;
	}
	
	long long maxresult;
	long long maxB;
	long long maxE;

	for (long long i = 0; i < num; i++) {
		for (long long j = 0; j < num; j++) {
			if (i + j >= num) {
				break;
			}
			if (i == 0 && j == 0) {
				for (long long w = 0; w < num; w++) {
					arr[0][0] = arr[0][0] + (arr2[0][w] * arr2[1][num - 1 - w]);
				}
				maxresult = arr[0][0];
				maxB = 0;
				maxE = 0;
			}
			else if (i > 0 && j> 0) {
				arr[i][j] = arr[i - 1][j - 1] - (arr2[0][i - 1] * arr2[1][num - j] + arr2[0][num - j] * arr2[1][i - 1]);
			}
			else {
				if (i == 0) {
					for (long long w = 0; w < num - j; w++) {
						arr[i][j] = arr[i][j] + (arr2[0][w] * arr2[1][num - 1 - j - w]);
					}
				}
				else {
					for (long long w = 0; w < num - i; w++) {
						arr[i][j] = arr[i][j] + (arr2[0][w + i] * arr2[1][num - 1 - w]);
					}
				}
			}
			if (maxresult < arr[i][j]) {
				maxresult = arr[i][j];
				maxB = i;
				maxE = j;
			}
		}
	}
	cout << maxB << " " << maxE << endl;
	cout << maxresult;
}