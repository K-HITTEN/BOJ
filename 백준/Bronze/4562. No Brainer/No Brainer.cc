#include <iostream>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int main(void){
    fastio;
    int N, x, y;
    cin >> N;
    for(int i = 0; i < N; i++){
        cin >> x >> y;
        if(x<y)cout <<"NO BRAINS\n";
        else cout << "MMM BRAINS\n";
    }
}