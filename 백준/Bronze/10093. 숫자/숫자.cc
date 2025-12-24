#include<iostream>
#define ll long long

using namespace std;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    ll a, b;
    cin >> a >> b;
    if(a>b)swap(a,b);
    if(a==b)cout << 0 << '\n';
    else cout << b - a - 1 << '\n';
    for(ll i = a+1; i < b; i++)cout << i << ' ';
}