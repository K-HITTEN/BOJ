#include <iostream>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int main(void){
    fastio;
    int X, L, R;
    cin >> X >> L >> R;
    if(L<=X &&  X<=R){
        cout << X;
    }
    else if(X<L)cout << L;
    else cout << R;
}