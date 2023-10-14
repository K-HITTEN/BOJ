#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string S;
	while (cin.eof() == false) {
		getline(cin, S);
		cout << S << "\n";
	}
}