#include <iostream>
#include <vector>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int main(void){
    fastio;
    int A, B, N, tmp;
    cin >> A >> B >> N;
    for(int i = 0; i < N; i++){
        cin >> tmp;
        cout << tmp << " ";
        if(tmp <= 1000)cout << tmp*A << "\n";
        else cout << 1000*A+(tmp-1000)*B << "\n";
    }
}