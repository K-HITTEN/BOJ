#include <iostream>
#include <cstring>
#include <queue>

using namespace std;

int main(void) {
	cin.tie(NULL);
	cout.tie(NULL);
	int T, N, M;
	int team[101] = { 0 };
	cin >> T;
	for (int t = 1; t <= T; t++) {
		int teamcount = 0, teamnumber = 0, tmp_1, tmp_2;
		cin >> N >> M;
		for (int i = 0; i < M; i++) {
			cin >> tmp_1 >> tmp_2;
			if (team[tmp_1] == 0 && team[tmp_2] == 0) {
				teamcount++;
				teamnumber++;
				team[tmp_1] = teamnumber;
				team[tmp_2] = teamnumber;
			}
			else if (team[tmp_1] == 0) {
				team[tmp_1] = team[tmp_2];
			}
			else if (team[tmp_2] == 0) {
				team[tmp_2] = team[tmp_1];
			}
			else if (team[tmp_1] == team[tmp_2]) {
				continue;
			}
			else {
				int tmp_3 = team[tmp_2];
				for (int j = 1; j <= N; j++) {
					if (team[j] == tmp_3) {
						team[j] = team[tmp_1];
					}
				}
				teamcount--;
			}
		}
		for (int i = 1; i <= N; i++) {
			if (team[i] == 0) {
				teamcount++;
			}
		}
		cout << "#" << t << " " << teamcount << "\n";
		memset(team, 0, sizeof(team));
	}
}