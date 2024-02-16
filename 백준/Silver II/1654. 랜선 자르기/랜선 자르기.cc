#include <iostream>
#include <vector>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

long long K, N, maxL = 0;
vector<int> v;

long long bs(long long left, long long right){
    if(left > right) return right;
    long long mid = (left+right)/2;
    long long sum = 0;
    if(left == right && sum >= N) return left;
    for(int i = 0; i < K; i++) sum += (v[i]/mid);
    if(sum<N) return bs(left,mid-1);
    else return bs(mid+1,right);
}

int main(void){
    fastio;
    cin >> K >> N;
    v.resize(K);
    for(int i = 0; i < K; i++){
        cin >> v[i];
        if(maxL<v[i])maxL = v[i];
    }
    cout << bs(1,maxL);
}