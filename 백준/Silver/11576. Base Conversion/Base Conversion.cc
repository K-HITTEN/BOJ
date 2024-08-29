#include <iostream>
#include <stack>
#include <cmath>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)
using namespace std;

int main(void) {
    fastio;
	int a, b, m, tmp = 0;
	cin >> a >> b >> m;
    while (m--) {
		int num;
		cin >> num;
		tmp += num*pow(a, m);
	}
	stack<int> st;
	while (tmp) {
		st.push(tmp % b);
		tmp /= b;		
	}
	while (!st.empty()) {
		cout << st.top() << " ";
		st.pop();
	}
}