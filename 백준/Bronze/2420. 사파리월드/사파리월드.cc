#include <iostream>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int main(void){
    fastio;
    long long N,M;
    cin >> N >> M;
    cout << abs(N-M);
}