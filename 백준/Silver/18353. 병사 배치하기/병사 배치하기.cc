#include <iostream>
#include <vector>
#include <algorithm>

#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int main(void) {
	fastio;
	int N, n = 1, max_value = 0;
	vector <int> check,v;
	cin >> N;
	v.resize(N);
	for(int i = 0; i < N; i++)cin >> v[i];
	for (int i = N-1; i >= 0; i--) {
		if (check.size() == 0 || check.back()< v[i]) {
			check.push_back(v[i]);
			
		}
		else if (check.back() >= v[i]) {
			check[lower_bound(check.begin(), check.end(), v[i])- check.begin()] = v[i];
		}
	}
    cout << N-check.size();
}
