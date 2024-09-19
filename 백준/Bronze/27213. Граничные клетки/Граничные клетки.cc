#include<iostream>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int main(void){
    fastio;
    int n, m;
    cin >> n >> m;
    if(n == 1||m == 1)cout << n*m;
    else cout << (n+m-2)*2;
}