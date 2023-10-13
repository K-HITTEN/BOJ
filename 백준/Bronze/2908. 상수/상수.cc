#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string S1,S2;
	int N1, N2;
	cin >> S1 >> S2;
	N1 = ((int)S1[2]-48)*100+((int)S1[1]-48)*10+(int)S1[0]-48;
	N2 = ((int)S2[2] - 48) * 100 + ((int)S2[1] - 48) * 10 + (int)S2[0] - 48;
	if (N1 > N2) {
		cout << N1;
	}
	else {
		cout << N2;
	}
}