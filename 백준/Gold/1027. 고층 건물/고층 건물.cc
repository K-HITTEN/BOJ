#include<iostream>

using namespace std;

double arr[51];
int ret = 0, N;

void check(int idx){
    int cnt = 0;
    if(idx > 0)cnt++;
    for(int i = idx-2; i >= 0; i--){
        double a = (arr[idx]-arr[i])/(idx-i);
        bool FLAG = false;
        for(int j = idx-1; j > i; j--){
            if(arr[j]>=a*(j-idx)+arr[idx]){
                FLAG = true;
                break;
            }
        }
        if(!FLAG)cnt++;
    }
    if(idx<N-1)cnt++;
    for(int i = idx+2; i < N; i++){
        double a = (arr[idx]-arr[i])/(idx-i);
        bool FLAG = false;
        for(int j = idx+1; j < i; j++){
            if(arr[j]>=a*(j-idx)+arr[idx]){
                FLAG = true;
                break;
            }
        }
        if(!FLAG)cnt++;
    }
    ret = max(ret, cnt);
}

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    cin >> N;
    for(int i = 0; i < N; i++)cin >> arr[i];
    for(int i = 0; i < N; i++){
        check(i);
    }
    cout << ret;
}