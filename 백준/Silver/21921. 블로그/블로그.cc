#include<iostream>

using namespace std;

int X, N, cnt;
long long arr[250001], ret, sum;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    cin >> N >> X;
    for(int i = 1; i <= N; i++)cin >> arr[i];
    for(int i = 1; i <= X; i++)sum += arr[i];
    ret = sum;
    cnt++;
    for(int i = X+1; i <= N; i++){
        sum -= arr[i-X];
        sum += arr[i];
        if(sum>ret){
            ret = sum;
            cnt = 1;
        }else if(sum == ret)cnt++;
    }
    if(ret == 0)cout << "SAD";
    else cout << ret << '\n' << cnt;
}