#include <iostream>
#include <cmath>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int main(void){
    fastio;
    double D, H, W;
    cin >> D >> H >> W;
    double k;
    k = double(D*D) / double(H*H + W*W);
    cout << (int)floor(sqrt(k)*H) << " " << (int)floor(sqrt(k)*W);
}
