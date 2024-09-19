#include<iostream>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int arr[5], x, y, r;

int main(void){
    fastio;
    for(int i = 1; i <= 4; i++)cin >> arr[i];
    cin >> x >> y >> r;
    for(int i = 1; i <= 4; i++){
        if(arr[i] == x){
            cout << i;
            return 0;
        }
    }
    cout << 0;
}