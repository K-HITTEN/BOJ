#include <iostream>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int main(void){
    fastio;
    int A,B;
    cin >> A >> B;
    if(A < B) cout << -1;
    else if(A == B) cout << 0;
    else cout << 1;
}