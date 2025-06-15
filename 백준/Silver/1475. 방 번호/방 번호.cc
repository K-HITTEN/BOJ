#include<iostream>

using namespace std;

int arr[9];

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    int N, cnt = 0;
    cin >> N;
    while(N>0){
        if(N%10==9)arr[6]++;
        else arr[N%10]++;
        N/=10;
    }
    for(int i = 0; i < 9; i++){
        if(i == 6){
            if(arr[i]%2)arr[i]++;
            cnt = max(cnt,arr[i]/2);
        }
        else cnt = max(cnt, arr[i]);
    }
    cout << cnt;
}