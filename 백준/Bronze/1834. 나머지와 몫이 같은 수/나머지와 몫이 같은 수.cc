#include <iostream>
#define ll long long
using namespace std;
 
ll N, ret;

int main() {
    cin.tie(0)->ios_base::sync_with_stdio(0);
    cin >> N;
    for (ll i = 1; i < N; i++)ret += (N + 1) * i;
    cout << ret;
}