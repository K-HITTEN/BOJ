#include <iostream>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;


int main(void){
    fastio;
    int A, B;
    cin >> A >> B;
    A /= 2;
    if(A<B)cout << A;
    else cout << B;
}
