#include<iostream>

using namespace std;

int arr[5],ret = 0,N;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    cin >> N;
    for(int i = 0; i < N; i++)cin >> arr[i];
    if(arr[0]>arr[2]){
        ret += (arr[0]-arr[2])*508;
    }else{
        ret += (arr[2]-arr[0])*108;
    }
    if(arr[1]>arr[3]){
        ret += (arr[1]-arr[3])*212;
    }else{
        ret += (arr[3]-arr[1])*305;
    }
    if(arr[4])ret += arr[4]*707;
    ret *= 4763;
    cout << ret;
}