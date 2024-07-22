#include <iostream>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int main(void){
    fastio;
    int A, B;
    cin >> A >> B;
    if(A-1 == B)cout << A + B;
    else if(A-1> B)cout << 2*B+1;
    else cout << 2*A-1;
}