#include <iostream>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int main(void){
    fastio;
    long long n, ret;
    cin >> n;
    ret = n;
    for(long long i = 2; i * i <= n; i++){
        if(n % i == 0){
            ret -= ret / i;
            while(n % i == 0)n /= i;
        }
    }
    if(n > 1)ret -= ret / n;
    cout << ret;
}