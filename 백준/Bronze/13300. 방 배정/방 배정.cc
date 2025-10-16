#include<iostream>

using namespace std;

int N, K, S, Y, arr[2][7], cnt;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    cin >> N >> K;
    while(N--){
        cin >> S >> Y;
        arr[S][Y]++;
    }
    for(int i = 0; i < 2; i++){
        for(int j = 1; j < 7; j++){
            cnt += (arr[i][j]/K);
            if(arr[i][j]%K)cnt++;
        }
    }
    cout << cnt;
}