#include <iostream>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

long long gcd(long long a,long long b){
    long long r;
    while(b != 0){
        r = a%b;
        a = b;
        b = r;
    }
    return a;
}

long long lcm(long long a,long long b){
    return (a*b)/gcd(a,b);
}

int main(void){
    fastio;
    long long N, M;
    cin >> N >> M;
    cout << lcm(N,M);
}