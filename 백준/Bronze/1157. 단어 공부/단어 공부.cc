#include <iostream>
#include <vector>

using namespace std;

int main(void) {
	int arr[30] = {0};
	string S;
	cin >> S;
	int max = 0;
	for (int i = 0; i < S.length(); i++) {
		if ((int)S[i] - 96 > 0) {
			arr[(int)S[i] - 96]++;
			if (arr[(int)S[i] - 96] > max) {
				max = arr[(int)S[i] - 96];
			}
		}
		else {
			arr[(int)S[i] - 64]++;
			if (arr[(int)S[i] - 64] > max) {
				max = arr[(int)S[i] - 64];
			}
		}
		
	}
	vector<int> arr2;
	for (int i = 1; i <= 26; i++) {
		if (arr[i] == max) {
			arr2.push_back(i);
		}
	}
	if (arr2.size() > 1) {
		cout << "?";
	}
	else {
		cout << (char)(arr2[0]+64);
	}
}