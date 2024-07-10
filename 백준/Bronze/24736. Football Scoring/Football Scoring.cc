#include <iostream>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int main(void){
	fastio;
	int A, B, C, D, E;
	for(int i = 0; i < 2; i++){
		cin >> A >> B >> C >> D >> E;
		cout << 6*A+3*B+2*C+D+2*E << " ";
	}
}