#include <iostream>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int main(void){
    fastio;
    int H,I,A,R,C;
    cin >> H >> I >> A >> R >> C;
    cout << H*I-A*R*C;
}