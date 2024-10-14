#include<iostream>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int main(void){
    fastio;
    int N, a, b;
    cin >> N;
    for(int i = 1; i <= N; i++){
        cin >> a >> b;
        cout << "Case " << i << ": " << a+b << "\n";
    }
}