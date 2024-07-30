#include <iostream>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int main(void){
    fastio;
    int M, K;
    cin >> M >> K;
    if(M%K == 0)cout << "Yes";
    else cout << "No";
}