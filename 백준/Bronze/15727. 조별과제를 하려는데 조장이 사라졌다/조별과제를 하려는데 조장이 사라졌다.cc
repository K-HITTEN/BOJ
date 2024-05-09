#include <iostream>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int main(void){
    fastio;
    int t;
    cin >> t;
    if(t%5==0)cout << t/5;
    else cout << t/5+1;
}