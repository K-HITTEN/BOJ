#include <iostream>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int main(void){
    fastio;
    int T, S;
    cin >> T >> S;
    if(T>=12&&T<=16&&S==0)cout << 320;
    else cout << 280;
}