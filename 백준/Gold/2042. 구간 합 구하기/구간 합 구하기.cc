#include <iostream>
#include <cmath>
#define fastio cin.tie(0)->ios::sync_with_stdio(0)

using namespace std;

long long N, M, K, from;
long long arr[10000000];
void update(long long loc, long long val) {
    long long idx = loc + from - 1;
    arr[idx] = val;
    for (long long i = idx / 2; i >= 1; i /= 2) {
        arr[i] = (arr[i*2] + arr[i*2+ 1]) ;
    }
}
long long sum(long long l, long long r, long long idx = 1, long long L = 1, long long R = from) {
    if (l > R or r < L) return 0;
    else if (l <= L and r >= R) return arr[idx];
    long long m = (L + R) / 2;
    return (sum(l, r, idx * 2, L, m) + sum(l, r, idx * 2 + 1, m + 1, R));
}
 
int main() {
    fastio;
    cin >> N >> M >> K;
    if((N&(N-1))==0)from = pow(2,(int)log2(N));
    else from =  pow(2,(int)log2(N)+1);
    for (long long i = from; i < from + N; i++) cin >> arr[i];
    for (long long i = from-1; i >= 1; --i) arr[i] = (arr[i * 2] + arr[i * 2 + 1]);
    for (long long i = 0; i < M+K; i++) {
        long long a, b, c;
        cin >> a >> b >> c;
        if (a == 1) {
            update(b, c);
        }
        else {
            cout << sum(b, c) << "\n";
        }
    }
}