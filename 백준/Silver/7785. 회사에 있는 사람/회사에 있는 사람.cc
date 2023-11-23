#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

int main(void) {
	cin.tie(NULL);
	cout.tie(NULL);
	int N;
	string name, S;
	map<string, int>arr;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> name >> S;
		if (S == "enter") {
			if (arr.find(name) == arr.end()) {
				arr.insert({ name,i });
			}
		}
		else {
			if (arr.find(name) != arr.end()) {
				arr.erase(name);
			}
		}
	}
	vector<string> arr2;
	for (auto i = arr.begin(); i != arr.end(); i++) {
		arr2.push_back(i->first);
	}
	sort(arr2.begin(), arr2.end(), greater<>());
	
	for (int i = 0; i < arr2.size(); i++) {
		cout << arr2[i] << '\n';
	}
}