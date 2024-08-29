#include <iostream>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)
using namespace std;

int main(void) {
    fastio;
    int w, h,p,q,t;
	cin >> w >> h >> p >> q >> t;
	bool pb = true, qb = true;
	int pt = t % (2 * w);
	int qt = t % (2 * h);

	while (pt--) {
		if (p == w) {
			pb = false;
		}
		else if(p==0) {
			pb = true;
		}
		if (pb)
			p++;
		else
			p--;
	}
	while (qt--) {
		if (q == h) {
			qb = false;
		}
		else if (q == 0) {
			qb = true;
		}
		if (qb)
			q++;
		else
			q--;
	}
	cout << p << " " << q;
}