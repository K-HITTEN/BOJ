#include <iostream>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int main(void){
    fastio;
    int N, M, ret;
    cin >> N >> M;
    if(N < 24&&N>19)ret=(24-N+M);
    else ret=(M-N);
    cout << ret;
}