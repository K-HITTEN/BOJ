#include <iostream>
#include <cmath>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

long long _gcd(long long a,long long b){
    long long r;
    while(b != 0){
        r = a%b;
        a = b;
        b = r;
    }
    return a;
}

int main(void){
    fastio;
    long long gcd, lcm, ra, rb;
    cin >> gcd >> lcm;
    long long divide = lcm/gcd;
    for(int i = 1; i <= sqrt(divide); i++){
        if(divide % i == 0){
            long long a = i, b = divide/i;
            if(_gcd(a,b) == 1){
                ra = a;
                rb = b;
            }
        }
    }
    cout << ra*gcd << " " << rb *gcd;
}