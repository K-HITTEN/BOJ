#include<iostream>

using namespace std;

int N, idx, ret = 0, arr[1001];

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    cin >> N;
    for(int i = 0; i < N; i++){
        cin >> arr[i];
        if(i !=0 && arr[i]>arr[i-1])ret = max(ret, arr[i]-arr[idx]);
        else idx = i;
    }
    cout << ret;
}