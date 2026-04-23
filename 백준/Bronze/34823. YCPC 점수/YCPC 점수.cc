#include <iostream>

using namespace std;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
	int y, c, p;
	cin >> y >> c >> p;
	cout << ((y < c / 2 ? y : c / 2) < p ? (y < c / 2 ? y : c / 2) : p);
}