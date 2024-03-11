#include <iostream>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int main(void){
    fastio;
    int N, S;
    while(cin >> N >> S){
        cout << S/(N+1) << "\n";
    }
}