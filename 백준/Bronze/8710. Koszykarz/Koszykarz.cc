#include <iostream>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int main(void){
    fastio;
    int k, w, m, count = 0;
    cin >> k >> w >> m;
    while(w>k){
        k += m;
        count++;
    }
    cout << count;
}