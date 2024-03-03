#include <iostream>
#include <algorithm>
#include <cmath>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int arr[100001] = {0,};

int main(void){
    fastio;
    int N;
    cin >> N;
    for(int i = 0; i < N; i++){
        cin >> arr[i];
    }
    sort(arr,arr+N);
    int i = 0, j = N-1 , sum = abs(arr[0]+ arr[N-1]), resultI = 0, resultJ = N-1;
    while(i < j){
        if(abs(arr[i]+arr[j])<=sum){
            sum = abs(arr[i]+arr[j]);
            resultI = i;
            resultJ = j;
        }
        if(arr[i]+ arr[j] == 0)break;
        else if(arr[i] + arr[j] <0) i++;
        else j--;
    }
    cout << arr[resultI] << " " << arr[resultJ]; 
}