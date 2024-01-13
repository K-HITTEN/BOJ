#include<iostream>
#include<cstring>
#include<queue>
#include<tuple>

using namespace std;

int map[15][15] = { 0 }, path[15][15] = { 0 }, go_x[4] = { 0,0,1,-1 }, go_y[4] = { 1,-1,0,0 };
int T, N, start_x, start_y, goal_x, goal_y;

int BFS() {
	queue<tuple<int, int, int>> q;
	q.push({ start_y,start_x,0 });
	while (q.empty() == false) {
		int y = get<0>(q.front()), x = get<1>(q.front()), time = get<2>(q.front());
		q.pop();
		if ((map[y][x] == 2) && (time % 3 != 0)) {
			q.push({ y,x,time + 1 });
		}
		else {
			if (path[y][x] == 0) {
				path[y][x] = time;
				for (int i = 0; i < 4; i++) {
					if ((x + go_x[i] < 0) || (x + go_x[i] >= N) || (y + go_y[i] < 0) || (y + go_y[i] >= N)) {
						continue;
					}
					else {
						if ((y + go_y[i] == goal_y) && (x + go_x[i] == goal_x)) {
							return time + 1;
						}
						else if ((y + go_y[i] == start_y) && (x + go_x[i] == start_x)) {
							continue;
						}
						else if (map[y + go_y[i]][x + go_x[i]] == 1) {
							path[y + go_y[i]][x + go_x[i]] = -1;
						}
						else {
							q.push({ y + go_y[i],x + go_x[i],time + 1 });
						}
					}
				}
			}
		}
	}
	return -1;
}

int main(void) {
	cin >> T;
	for (int t = 1; t <= T; t++) {
		cin >> N;
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < N; j++) {
				cin >> map[i][j];
			}
		}
		cin >> start_y >> start_x >> goal_y >> goal_x;
		cout << "#" << t << " " << BFS() << "\n";
		memset(map, 0, sizeof(map));
		memset(path, 0, sizeof(path));
	}
}