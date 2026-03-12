#include<iostream>

using namespace std;

long long N, cnt, idx;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    cin >> N;
    while(N){
        cnt++;
        idx++;
        if(idx>N)idx=1;
        N-=idx;
    }
    cout << cnt;
}