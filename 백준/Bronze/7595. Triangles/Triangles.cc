#include <iostream>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int main(void){
    fastio;
    int n;
    while(true){
        cin >> n;
        if(n == 0)break;
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <=i; j++){
                cout << "*";
            }
            cout << "\n";
        }
    }
}