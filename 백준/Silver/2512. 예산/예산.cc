#include<iostream>

using namespace std;
    
int arr[10001], N, M, max_val = 0, ret = 0;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    cin >> N;
    for(int i = 0; i < N; i++){
        cin >> arr[i];
        max_val = max(max_val, arr[i]);
    }
    cin >> M;
    int l = 0, r = max_val;
    while(l<=r){
        int mid = (l+r)/2, sum = 0;
        for(int i = 0; i < N; i++){
            if(arr[i]>mid)sum += mid;
            else sum += arr[i];
        }
        if(sum>M)r = mid-1;
        else{
            ret = mid;
            l = mid+1;
        }
    }
    cout << ret;
}