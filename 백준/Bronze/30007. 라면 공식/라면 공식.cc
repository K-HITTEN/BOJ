#include <iostream>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int main(void){
    fastio;
    int N, A, B, X;
    cin >> N;
    for(int i = 0; i < N; i++){
        cin >> A >> B >> X;
        cout << A*(X-1)+B <<"\n";
    }
}