#include<iostream>

using namespace std;

long long N, M, tmp, arr[10001], cnt = 0;


int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    cin >> N >> M;
    for(int i = 1; i <= N; i++){
        cin >> tmp;
        arr[i] = arr[i-1]+tmp;
    }
    int l = 0, r = 1;
    while(l<=r&&r<=N){
        if(arr[r]-arr[l]>M)l++;
        else if(arr[r]-arr[l]<M)r++;
        else{
            cnt++;
            r++;
        }
    }
    cout << cnt;
}