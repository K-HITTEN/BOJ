#include <iostream>
#include <vector>

using namespace std;

int main(void) {
	cin.tie(NULL);
	while (true) {
		int N, sum = 0;
		vector<int> V;
		cin >> N;
		if (N == -1) {
			break;
		}
		for (int i = 1; i < N; i++) {
			if (N % i == 0) {	
				sum += i;
				V.push_back(i);
			}
		}
		if (sum == N) {
			cout << N <<" = ";
			for (int i = 0; i < V.size() - 1; i++) {
				cout << V[i] << " + ";
			}
			cout << V[V.size()-1] << "\n";
		}
		else {
			cout << N << " is NOT perfect.\n";
		}
	}
}