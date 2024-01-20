#include <iostream>
#include <cstring>
#include <vector>
#include <queue>

using namespace std;

int x[8] = { -1,0,1,0,1,1,-1,-1 }, y[8] = { 0,-1,0,1,1,-1,1,-1 };
int T, N, arr[301][301] = { 0 }, arr2[301][301] = { 0 };

bool check(int i, int j) {
	for(int k = 0; k < 8; k++){
		if ((i + y[k] >= 0) && (j + x[k] >= 0) && (i + y[k] < N) && (j + x[k] < N)) {
			if (arr[i + y[k]][j + x[k]] == -1) {
				return false;
			}
		}
	}
	return true;
}


int main(void) {
    cin.tie(NULL);
    cout.tie(NULL);
	char c;
	cin >> T;
	for (int t = 1; t <= T; t++) {
		cin >> N;
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < N; j++) {
				cin >> c;
				if (c == '*') {
					arr[i][j] = -1;
					arr2[i][j] = -1;
				}
			}
		}
		int count = 0;
		queue<pair<int, int>> q;
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < N; j++) {
				if (arr2[i][j] == 0) {
					if (check(i, j)) {
						q.push({ i,j });
						count++;
					}
					while (q.empty() == false) {
						int qy = q.front().first, qx = q.front().second;
						q.pop();
						arr2[qy][qx] = 1;
						for (int k = 0; k < 8; k++) {
							if ((qy + y[k] >= 0) && (qx + x[k] >= 0) && (qy + y[k] < N) && (qx + x[k] < N) && (arr2[qy + y[k]][qx + x[k]] == 0)) {
								arr2[qy + y[k]][qx + x[k]] = 1;
								if (check( qy + y[k],qx + x[k] )) {
									q.push({ qy + y[k],qx + x[k] });
								}
							}
						}
					}
				}
			}
		}
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < N; j++) {
				if (arr2[i][j] == 0) {
					count++;
				}
			}
		}
		cout << "#" << t << " " << count << "\n";
		memset(arr, 0, sizeof(arr));
		memset(arr2, 0, sizeof(arr));
	}
}