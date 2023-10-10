#include <iostream>
#include <cstring>
#include <string>

using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string S;
	cin >> S;
	int i;
	cin >> i;
	cout << S[i-1];
}