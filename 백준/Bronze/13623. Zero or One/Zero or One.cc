#include <iostream>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int main(void){
    fastio;
    int A,B,C;
    cin >> A >> B >> C;
    if(B == C && A != C) cout << "A";
    else if(A == C && A != B) cout << "B";
    else if(A == B && B != C) cout << "C";
    else cout << "*";
}
