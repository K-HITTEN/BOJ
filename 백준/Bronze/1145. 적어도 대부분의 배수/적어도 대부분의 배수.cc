#include<iostream>

using namespace std;

int arr[5], arr2[5], min_val, idx, cnt;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    for(int i = 0; i < 5; i++){
        cin >> arr[i];
        arr2[i] = arr[i];
    }
    while(true){
        min_val = arr2[0];
        idx = 0;
        for(int i = 1; i < 5; i++){
            if(min_val>arr2[i]){
                idx = i;
                min_val = arr2[i];  
            }
        }
        cnt = 0;
        for(int i = 0; i < 5; i++)if(!(min_val%arr[i]))cnt++;
        if(cnt>=3){
            cout << min_val;
            return 0;
        }else arr2[idx] = (arr2[idx]/arr[idx]+1)*arr[idx];
    }
}