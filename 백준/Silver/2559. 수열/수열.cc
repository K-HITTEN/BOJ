#include<iostream>

using namespace std;

int N, K, arr[100001], ret = -10000001;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    cin >> N >> K;
    for(int i = 1; i <= N; i++){
        cin >> arr[i];
        arr[i] += arr[i-1];
    }
    for(int i = K; i <= N; i++)ret = max(ret,arr[i]-arr[i-K]);
    cout << ret;
}