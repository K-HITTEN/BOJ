#include<iostream>

using namespace std;

int arr[51];

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    int N, S, idx = 0;
    cin >> N;
    for(int i = 0; i < N; i++)cin >> arr[i];
    cin >> S;
    while(idx<N&&S>0){
        int max_val = idx;
        for(int i = idx; i <= min(N-1,idx+S); i++){
            if(arr[i]>arr[max_val])max_val=i;
        }
        for(int i = max_val; i > idx; i--){
            swap(arr[i], arr[i-1]);
            S--;
        }
        idx++;
    }
    for(int i = 0; i < N; i++)cout << arr[i] << " ";
}