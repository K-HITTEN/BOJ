#include <iostream>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int main(void){
    fastio;
    int A, B, C, D, tmp;
    cin >> A >> B >> C >> D;
    C += D;
    tmp = C/60;
    C %= 60;
    B += tmp;
    tmp = B/60;
    B %= 60;
    A += tmp;
    while(A>=24)A-=24;
    cout << A <<" "<< B <<" "<< C;
}
