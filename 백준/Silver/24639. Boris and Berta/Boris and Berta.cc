#include <cmath>
#include <iostream>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)
using namespace std;

int main(void) {
    fastio;
    int n, m, c, M = 0, C= 0;
    cin >> n >> m >> c;
    for(int i = 0; i <= (n+m-1)/m; i++){
        for(int j = (n-i*m)/c; j<=(n-i*m+c-1)/c; j++){
            if(j < 0)continue;
            if(abs(i*m+j*c-n) < abs(M*m+C*c-n)){
                M = i;
                C = j;
            }
        }
    }
    cout << M << " " << C;
}