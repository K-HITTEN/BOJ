#include <iostream>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int main(void){
    fastio;
    int T, n, m;
    cin >> T;
    while(T--){
        cin >> n >> m;
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                cout << "X";
            }
            cout << "\n";
        }
        cout << "\n";
    }
}