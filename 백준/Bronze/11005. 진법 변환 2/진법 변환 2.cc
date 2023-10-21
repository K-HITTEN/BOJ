#include<iostream>
#include<algorithm>
#include<string>
using namespace std;


int main() {
	int N, B; 
	cin >> N >> B;

	string result = "";

	while (N > 0)
	{
		int r = N % B;

		if (r < 10)
		{
			result += (r + '0');
		}
		else
		{
			result += (r - 10 + 'A');
		}

		N /= B;
	}

	reverse(result.begin(), result.end()); 

	cout << result << '\n';

	return 0;
}