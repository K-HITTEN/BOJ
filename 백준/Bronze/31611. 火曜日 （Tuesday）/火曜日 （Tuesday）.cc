#include <iostream>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int main(void){
    fastio;
    int X;
    cin >> X;
    X %= 7;
    if(X == 2)cout << 1;
    else cout << 0;
}