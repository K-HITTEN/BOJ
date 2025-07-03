#include<iostream>

using namespace std;

int arr[2][1001], N, cnt = 0;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    cin >> N;
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < N; j++){
            cin >> arr[i][j];
        }
    }
    for(int i = 0; i < N; i++){
        if(arr[0][i]<=arr[1][i])cnt++;
    }
    cout << cnt;
}