#include <iostream>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int main(void){
    fastio;
    int result = 0,N,A,B,C;
    cin >> N >> A >> B >> C;
    result += min(N,A);
    result += min(N,B);
    result += min(N,C);
    cout << result;
}