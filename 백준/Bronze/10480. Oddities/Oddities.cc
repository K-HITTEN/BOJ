#include <iostream>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int main(void){
    fastio;
    int n, x;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> x;
        if(x%2==0)cout << x << " is even\n";
        else cout << x << " is odd\n";
    }
}