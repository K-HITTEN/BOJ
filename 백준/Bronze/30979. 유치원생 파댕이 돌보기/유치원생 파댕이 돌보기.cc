#include <iostream>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int main(void){
    fastio;
    int T, N, F, sum = 0;
    cin >> T >> N;
    for(int i = 0; i < N; i++){
        cin >> F;
        sum += F;
    }
    if(sum<T)cout << "Padaeng_i Cry";
    else cout << "Padaeng_i Happy";
}