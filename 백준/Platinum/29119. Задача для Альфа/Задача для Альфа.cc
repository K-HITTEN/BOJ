#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int arr[101][101] = { 0, };

bool cmp(string a, string b) {
	string ab = a + b;
	string ba = b + a;

	if (ab > ba) return ab > ba;
	else return ba < ab;
}

int main(void) {
	fastio;
	int n;
	vector<string> s;
	cin >> n;
	s.resize(n);
	for(int i = 0; i < n; i++) {
		cin >> s[i];
	}
	sort(s.begin(), s.end(), cmp);
	for (int i = 0; i < n; i++)cout << s[i] << " ";
}