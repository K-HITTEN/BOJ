#include <iostream>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int main(void){
    fastio;
    int T, N, A, B;
    cin >> T;
    for(int t = 0; t < T; t++){
        cin >> N;
        for(int n = 0; n < N; n++){
            cin >> A >> B;
            cout << A+B << " " << A*B << "\n";
        }
    }
}