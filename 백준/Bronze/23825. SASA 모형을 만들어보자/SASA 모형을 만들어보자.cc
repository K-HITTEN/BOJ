#include <iostream>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int main(void){
    fastio;
    int N , M;
    cin >> N >> M;
    cout << min(N/2,M/2);
}