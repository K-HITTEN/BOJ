#include<iostream>

using namespace std;

int n, m, arr[21][21];

int main() {
	cin >> n >> m;
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < m; j++) {
			cin >> arr[i][j];
		}
	}
	if(n < 8)cout << "unsatisfactory";
	else cout << "satisfactory";
}
