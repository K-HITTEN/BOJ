#include <iostream>
#include <algorithm>
#include <cmath>
#define fastio cin.tie(0)->ios::sync_with_stdio(0)

using namespace std;

long long N, M, K, from;
long long min_arr[1000000], max_arr[1000000];
long long min_find(long long l, long long r, long long idx = 1, long long L = 1, long long R = from) {
    if (l > R or r < L) return 1000000001;
    else if (l <= L and r >= R) return min_arr[idx];
    long long m = (L + R) / 2;
    return min(min_find(l, r, idx * 2, L, m) , min_find(l, r, idx * 2 + 1, m + 1, R));
}

long long max_find(long long l, long long r, long long idx = 1, long long L = 1, long long R = from) {
    if (l > R or r < L) return 0;
    else if (l <= L and r >= R) return max_arr[idx];
    long long m = (L + R) / 2;
    return max(max_find(l, r, idx * 2, L, m) , max_find(l, r, idx * 2 + 1, m + 1, R));
}
 
int main() {
    fastio;
    cin >> N >> M;
    if((N&(N-1))==0)from = pow(2,(int)log2(N));
    else from =  pow(2,(int)log2(N)+1);
    for (long long i = from; i < from + N; i++){
        cin >> min_arr[i];
        max_arr[i] = min_arr[i];
    }
    for (long long i = from-1; i >= 1; --i){
        min_arr[i] = min(min_arr[i * 2],min_arr[i * 2 + 1]);
        max_arr[i] = max(max_arr[i * 2],max_arr[i * 2 + 1]);
    }
    for (long long i = 0; i < M; i++) {
        long long a, b;
        cin >> a >> b;
        cout << min_find(a, b) <<" "<< max_find(a,b) <<"\n";
    }
}

