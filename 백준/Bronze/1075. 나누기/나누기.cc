#include <iostream>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int main(void){
    fastio;
    int N, F;
    cin >> N >> F;
    N /= 100;
    N *= 100;
    for(int i = 0; i < 100; i++){
        int tmp = N + i;
        if(tmp%F == 0){
            if(i<10)cout << 0;
            cout << i;
            return 0;
        }
    }
}