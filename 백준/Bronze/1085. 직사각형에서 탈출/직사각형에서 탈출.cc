#include <iostream>

using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int x, y, w, h;
	cin >> x >> y >> w >> h;
	cout << min(x, min(y, min(w-x, h-y)));
}