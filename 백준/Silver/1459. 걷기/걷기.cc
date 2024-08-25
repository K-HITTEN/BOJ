#include <iostream>
#include <cmath>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int main(void){
    fastio;
    long long X, Y, W, S;
    cin >> X >> Y >> W >> S;
    if(W>S)cout << min(abs(X),abs(Y))*S+((max(abs(X),abs(Y))-min(abs(X),abs(Y)))/2)*2*S+((max(abs(X),abs(Y))-min(abs(X),abs(Y)))%2)*W;
    else if(2*W<S)cout << W*(X+Y);
    else cout << min(abs(X),abs(Y))*S+(max(abs(X),abs(Y))-min(abs(X),abs(Y)))*W;
}