#include<iostream>

using namespace std;

int arr[101], N, tmp;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    cin >> N;
    for(int i = 0; i < N; i++)cin >> arr[i];
    tmp = arr[1]-arr[0];
    cout << arr[N-1]+tmp;
}