#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    long long n, arr[6], sum = 0 , maxn = 0;
    cin >> n;
    for(int i = 0; i < 6; i++){
        cin >> arr[i];
        sum += arr[i];
        maxn = max(maxn, arr[i]);
    }
    if(n == 1){
        cout << sum - maxn;
    }else{
        long long num[3];
        num[0] = min(arr[0],arr[5]);
        num[1] = min(arr[1],arr[4]);
        num[2] = min(arr[2],arr[3]);
        sort(num,num+3);
        num[1]+= num[0];
        num[2]+= num[1];
        cout << num[0]*(4*(n-1)*(n-2)+(n-2)*(n-2))+num[1]*(4*(n-1)+4*(n-2))+num[2]*4;
    }
}