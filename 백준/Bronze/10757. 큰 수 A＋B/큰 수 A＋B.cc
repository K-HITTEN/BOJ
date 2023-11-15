#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main(void) {
	cin.tie(NULL);
	cout.tie(NULL);
	string A, B;
	cin >> A >> B;
	if (A.length() > B.length()) {
		string C = B;
		B = "";
		for (int i = 0; i < A.length() - C.length(); i++) {
			B += "0";
		}
		B += C;
	}
	else if (B.length() > A.length()) {
		string C = A;
		A = "";
		for (int i = 0; i < B.length() - C.length(); i++) {
			A += "0";
		}
		A += C;
	}
	string result = "";
	int carry = 0;
	for (int i = A.length() - 1; i >= 0; i--) {
		int c = (A[i] - '0') + (B[i] - '0');
		if (carry == 1) {
			c++;
			carry = 0;
		}
		if (c > 9) {
			carry = 1;
			c %= 10;
		}
		result += c +'0';
	}
	if (carry == 1) {
		result += '1';
	}
	for (int i = result.length() - 1; i >= 0; i--) {
		cout << result[i];
	}
}