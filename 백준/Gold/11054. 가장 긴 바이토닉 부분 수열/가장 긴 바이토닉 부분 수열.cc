#include <iostream>
#include <vector>
#include <algorithm>

#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int main(void) {
	fastio;
	int N, n = 1, max_value = 0;
	vector <int> check, v, num, back_num;
	cin >> N;
	v.resize(N);
	for(int i = 0; i < N; i++)cin >> v[i];
	for (int i = 0; i < N; i++) {
		if (check.size() == 0 || check.back()< v[i]) {
			check.push_back(v[i]);
			num.push_back(n);
			n++;
		}
		else if (check.back() >= v[i]) {
		    num.push_back(lower_bound(check.begin(), check.end(), v[i]) - check.begin()+1);
			check[lower_bound(check.begin(), check.end(), v[i])- check.begin()] = v[i];
		}
	}
    n = 1;
    check.clear();
    for (int i = N-1; i >= 0; i--) {
		if (check.size() == 0 || check.back()< v[i]) {
			check.push_back(v[i]);
			back_num.push_back(n);
			n++;
		}
		else if (check.back() >= v[i]) {
		    back_num.push_back(lower_bound(check.begin(), check.end(), v[i]) - check.begin()+1);
			check[lower_bound(check.begin(), check.end(), v[i])- check.begin()] = v[i];
		}
	}
	reverse(back_num.begin(),back_num.end());
	for(int i = 0; i < N; i++){
	   max_value = max(max_value,num[i]+back_num[i]-1);
	}
	cout << max_value;
}
