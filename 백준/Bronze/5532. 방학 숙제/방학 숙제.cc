#include <iostream>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int main(void){
    fastio;
    int L, A, B, C, D, a, b;
    cin >> L >> A >> B >> C >> D;
    a = A/C;
    b = B/D;
    if(A%C>0)a++;
    if(B%D>0)b++;
    cout << L-max(a,b);
}