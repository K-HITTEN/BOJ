#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main(void) {
	cin.tie(NULL);
	cout.tie(NULL);
	string S;
	while (cin.eof() == false) {
		getline(cin, S);
		cout << S << '\n';
	}
}