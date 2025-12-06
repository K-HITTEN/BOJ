#include<iostream>
#define ll long long

using namespace std;

ll gcd(ll a, ll b){
    if(b == 0)return a;
    return gcd(b, a%b);
}

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    ll A, B, N;
    cin >> A >> B;
    N = gcd(A,B);
    while(N--)cout << 1;
}