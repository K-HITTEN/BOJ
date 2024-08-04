#include <iostream>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int main(void){
    fastio;
    int X, Y, Z;
    cin >> X >> Y >> Z;
    if (X+Y<=Z)cout << 1;
    else cout << 0;
}