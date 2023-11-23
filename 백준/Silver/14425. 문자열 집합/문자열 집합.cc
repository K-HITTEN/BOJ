#include <iostream>
#include <string>
#include <cstring>
#include <map>

using namespace std;

int main(void) {
	cin.tie(NULL);
	cout.tie(NULL);
	int N,M;
	cin >> N >> M;
	map<string, int> arr;
	string S;
	getline(cin, S);
	for (int i = 0; i < N; i++) {
		getline(cin, S);
		arr.insert({S,i});
	}
	int count = 0;
	for (int i = 0; i < M; i++) {
		getline(cin, S);
		if (arr.find(S) != arr.end()) {
			count++;
		}
	}
	cout << count;
}