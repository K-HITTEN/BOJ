#include <iostream>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int main(void){
    fastio;
    double W, H;
    cin >> W >> H;
    cout << fixed;
    cout.precision(1);
    cout << W*H*0.5; 
}