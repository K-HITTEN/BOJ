#include <iostream>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int main(void){
    fastio;
    int N, sum = 0, tmp;
    cin >> N;
    for(int i = 0; i < N; i++){
        cin >> tmp;
        sum += tmp;
    }
    sum += 8*(N-1);
    cout << sum/24 << " " << sum%24;
}