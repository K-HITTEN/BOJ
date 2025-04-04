#include<iostream>

using namespace std;

int arr[1001];

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    int n, x, y, ret = 0;
    cin >> n;
    for(int i = 0; i < n; i++)cin >> arr[i];
    for(int i = 0; i < n; i++){
        cin >> x >> y;
        if(arr[i]&&y>x)ret+=(y-x);
    }
    cout << ret;
}