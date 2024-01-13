#include <iostream>
#include <cstring>

using namespace std;

int main(void) {
	cin.tie(NULL);
	cout.tie(NULL);
	int score[101] = {0};
	int T, s;
	cin >> T;
	for (int i = 1; i <= T; i++) {
		cin >> s;
		for (int j = 0; j < 1000; j++) {
			cin >> s;
			score[s]++;
		}
		int answer = 100;
		int max = score[100];
		for (int j = 99; j >= 0; j--) {
			if (score[j] > max) {
				answer = j;
				max = score[j];
			}
		}
		cout << "#" << i <<" " << answer << "\n";
		memset(score, 0, sizeof(score));
	}
}