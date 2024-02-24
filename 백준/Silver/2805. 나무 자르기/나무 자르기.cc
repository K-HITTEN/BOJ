#include <iostream>
#include <algorithm>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

long long arr[1000001] = {0,};
long long result;

int main(void){
    fastio;
    long long N, M;
    cin >> N >> M;
    for(int i = 1; i <= N; i++) cin >> arr[i];
    sort(arr+1,arr+N+1);
    long long left = 0, right = arr[N];
    while(left<=right){
        long long mid = (left+right)/2;
        long long tmp = 0, tmp2;
        for(int i = N; i>0; i--){
            tmp2 = arr[i]-mid;
            if(tmp2 <= 0)break;
            tmp += tmp2;
        }
        if(tmp < M){
            right = mid-1;
            continue;
        }
        result = mid;
        if(tmp == M) break;
        else left = mid+1;
    }
    cout << result;
}