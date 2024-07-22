#include <iostream>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int main(void){
    fastio;
    int A, B, K, X, left, right;
    cin >> A >> B >> K >> X;
    left = K - X;
    right = K + X;
    if(right < A || left > B)cout << "IMPOSSIBLE";
    else{
        if(right>B)right = B;
        if(left<A)left = A;
        cout << right-left+1;
    }
}