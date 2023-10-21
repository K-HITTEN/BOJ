#include <iostream>
#include <string>
#include <cstring>
#include <cmath>

using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	long long B, sum = 0;
	string N;
	cin >> N >> B;
	for (int i = 0; i < N.length(); i++) {
		if ((int)N[i] < 58) {
			sum+=((int)N[i] - 48)* pow(B, N.length() - (i+1));
		}
		else {
			sum+=((int)N[i] - 55)* pow(B, N.length() - (i+1));
		}
	}
	cout << sum;
}