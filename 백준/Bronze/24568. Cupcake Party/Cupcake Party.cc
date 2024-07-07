#include <iostream>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int main(void){
    fastio;
    int R,S;
    cin >> R >> S;
    cout << R*8+S*3-28;
}