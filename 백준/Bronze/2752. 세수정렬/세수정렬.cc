#include <iostream>
#include <algorithm>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int arr[3];

int main(void){
    fastio;
    cin >> arr[0] >> arr[1] >> arr[2];
    sort(arr,arr+3);
    cout << arr[0] <<" "<< arr[1] <<" "<< arr[2];
}
