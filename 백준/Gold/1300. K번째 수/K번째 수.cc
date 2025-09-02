#include<iostream>

using namespace std;

int N, k;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    cin >> N >> k;
    int l = 1, r = k;
    while(l<=r){
        int mid = (l+r)/2, cnt = 0;
        for(int i = 1; i <= N; i++)cnt += min(N, mid/i);
        if(cnt < k)l = mid+1;
        else r = mid-1;
    }
    cout << l;
}