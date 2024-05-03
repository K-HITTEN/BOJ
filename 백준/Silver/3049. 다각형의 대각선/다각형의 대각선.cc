#include <iostream>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int main(void){
    int N ,tmp = 1,mod = 24;
    cin >> N;
    if(N == 3){
        cout << 0;
        return 0;
    }
    for(int i = 0; i < 4; i++){
        tmp *= (N-i);
    }
    cout << tmp/mod;
}