#include <iostream>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int main(void){
    fastio;
    int A, B, C;
    cin >> A >> B >> C;
    cout << 3*(B/A)*C;
}