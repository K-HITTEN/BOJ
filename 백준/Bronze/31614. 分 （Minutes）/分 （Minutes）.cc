#include <iostream>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int main(void){
    fastio;
    int H, M;
    cin >> H >> M;
    cout << H*60+M;
}