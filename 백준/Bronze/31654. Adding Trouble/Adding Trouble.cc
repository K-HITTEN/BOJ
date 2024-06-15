#include <iostream>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int main(void){
    fastio;
    long long A,B,C;
    cin >> A >> B >> C;
    if(A+B == C)cout << "correct!";
    else cout << "wrong!";
}