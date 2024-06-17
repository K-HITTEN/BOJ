#include <iostream>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int main(void){
    fastio;
    int N;
    cin >> N;
    cout << N*78/100 << " " << N*8/10 + N*2/10*78/100;
}