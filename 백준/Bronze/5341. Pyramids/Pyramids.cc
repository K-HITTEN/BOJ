#include <iostream>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int main(void){
    fastio;
    int N;
    while(true){
        cin >> N;
        if(N == 0)break;
        cout << N * (N + 1) / 2 << "\n";
    }
}