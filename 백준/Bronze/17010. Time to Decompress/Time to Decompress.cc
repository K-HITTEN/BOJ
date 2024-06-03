#include <iostream>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int main(void){
    fastio;
    int N, t;
    char c;
    cin >> N;
    for(int i = 0; i < N; i++){
        cin >> t >> c;
        for(int j = 0; j < t; j++)cout<< c;
        cout << "\n";
    }
}