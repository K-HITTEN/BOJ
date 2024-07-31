#include <iostream>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int arr[11];

int main(void){
    fastio;
    int N, sum = 0;
    cin >> N;
    for(int i = 1; i <= N; i++)cin >> arr[i];
    cin >> N;
    for(int i = 0; i < N; i++){
        cin >> arr[0];
        sum += arr[arr[0]];
    }
    cout << sum;
}