#include <iostream>
#include <vector>
#include <algorithm>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)
#define MOD 1000000007

using namespace std;

vector<long long> v, mult;
long long tmp = 1, _plus = 0, _minus = 0,N;

int main(void){
    fastio;
    cin >> N;
    v.resize(N);
    mult.resize(N);
    for(int i = 0; i < N; i++){
        cin >> v[i];
        mult[i] = tmp - 1;
        tmp *= 2;
        tmp %= MOD;
    }
    sort(v.begin(),v.end());
    for(int i = N-1; i >= 0; i--){
        _plus += (mult[i] * v[i]);
        _minus += (mult[i] * v[N-1-i]);
        _plus %= MOD;
        _minus %= MOD;
    }
    cout << (_plus%MOD + (MOD-(_minus%MOD)))%MOD;
}