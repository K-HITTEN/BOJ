#include <iostream>
#include <algorithm>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int arr[1000000] = {0,};

int main(void){
    fastio;
    int N;
    cin >> N;
    for(int i = 0; i < N; i++)cin >> arr[i];
    sort(arr,arr+N);
    for(int i = 0; i < N; i++)cout << arr[i] << "\n";
}