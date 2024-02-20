#include <iostream>
#include <vector>
#include <algorithm>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;
    
int arr[100001] = {0,};    
    
int main(void){
    fastio;
    int n, d, tmp, count = 0;
    cin >> n >> d;
    for(int i = 0; i < n; i++){
        cin>> tmp;
        arr[tmp]++;
    }
    for(int i = 0; i <= n; i++){
        while(arr[i]>d){
            count += arr[i]/d;
            arr[i] = arr[i]/d + arr[i]%d;
        }
    }
    cout << count;
}