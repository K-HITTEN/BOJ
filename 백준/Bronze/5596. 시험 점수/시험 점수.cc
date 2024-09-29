#include <iostream>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int main(void){
    fastio;
    int A = 0, B = 0, tmp;
    for(int i = 0; i < 4; i++){
        cin >> tmp;
        A += tmp;
    }
    for(int i = 0; i < 4; i++){
        cin >> tmp;
        B += tmp;
    }
    if(A < B)cout << B;
    else cout << A;
}