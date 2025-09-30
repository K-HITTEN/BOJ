#include<iostream>
#include<algorithm>

using namespace std;

int T;
int arr[10];

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    cin >> T;
    while(T--){
        for(int i = 0; i < 10; i++)cin >> arr[i];
        sort(arr,arr+10);
        cout << arr[7] << '\n';
    }
}