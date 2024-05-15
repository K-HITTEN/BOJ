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
	string tmp;
	vector<string> s;
	while (cin >> tmp) {
		s.push_back(tmp);
	}
	sort(s.begin(), s.end(), cmp);
	for (int i = 0; i < s.size(); i++)cout << s[i];
}