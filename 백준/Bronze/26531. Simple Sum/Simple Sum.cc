#include <iostream>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int main(void){
    fastio;
    int a,b,c;
    char t;
    cin >> a >> t >> b >> t >> c;
    if(a+b == c)cout << "YES";
    else cout << "NO";
}