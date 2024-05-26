#include <iostream>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int main(void){
    fastio;
    int A = 0, B = 0, tmp;
    for(int i = 0; i < 3; i++){
        cin >> tmp;
        if(tmp == 1)A++;
        else B++;
    }
    if(A>B)cout << 1;
    else cout << 2;
}
