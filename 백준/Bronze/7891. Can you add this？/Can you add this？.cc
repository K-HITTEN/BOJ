#include <iostream>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int main(void){
    fastio;
    long long x ,y, t;
    cin >> t;
    for(int i = 0; i < t; i++){
        cin>> x >> y;
        cout << x+y <<'\n';
    }
    
}