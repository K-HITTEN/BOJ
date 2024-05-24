#include <iostream>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int main(void){
    fastio;
    int N, M;
    cin >> N >> M;
    if(N*100 >= M)cout << "Yes";
    else cout << "No";
}