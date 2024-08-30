#include <iostream>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)
using namespace std;

int main(){
    fastio;
    long long n;
    cin >> n;
    if (n & 1) cout << "SK";
    else cout << "CY";
}