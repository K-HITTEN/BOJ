#include <iostream>
#include <string>
#include <cstring>
#include <cmath>
#include <algorithm>

using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	long long N, B;
	string sum= "";
	cin >> N >> B;
	while (N > 0){
		long long i = N % B;
		if (i > 9) {
			sum += (i - 10 + 'A');
		}
		else {
			sum += (i + '0');
		}
		N /= B;
	}
	reverse(sum.begin(), sum.end());
	cout << sum;
}
