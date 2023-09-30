#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#include <algorithm>

using namespace std;

long long arr[5001] = { 0 };
long long arr2[5001] = { 0 };

int main(void) {
	long long num;
	cin >> num;
	long long a;
	for (long long i = 1; i <= num; i++) {
		cin >> a;
		arr2[i] = a;
	}
	arr[2] = 1 + abs(arr2[2] - arr2[1]);
	
	for (long long i = 3; i <= num; i++) {
		long long minpower = INT32_MAX;
		for (long long j = 1; j < i; j++) {
			long long power = (i - j) * (1 + abs(arr2[i] - arr2[j]));
			power = max(power, arr[j]);
			if (minpower > power) {
				minpower = power;
			}
		}
		arr[i] = minpower;
	}
	cout << arr[num];
}