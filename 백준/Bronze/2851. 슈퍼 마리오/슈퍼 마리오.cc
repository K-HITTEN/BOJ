#include<iostream>

using namespace std;

int arr[11], ret, tmp;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    for(int i = 1; i < 11; i++){
        cin >> arr[i];
        arr[i] += arr[i-1];
    }
    tmp = abs(arr[1]-100);
    ret = 1;
    for(int i = 2; i < 11; i++){
        if(abs(arr[i]-100)<=tmp){
            tmp = abs(arr[i]-100);
            ret = i;
        }
    }
    cout << arr[ret];
}