#include <iostream>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int main(void){
    fastio;
    int N, a, b, cnt = 0;
    cin >> N >> a >> b;
    while(a!=b){
        a = (a/2)+(a%2);
        b = (b/2)+(b%2);
        cnt++;
    }
    cout << cnt;
}