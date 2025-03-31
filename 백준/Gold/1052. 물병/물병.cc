#include<iostream>

using namespace std;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    int N, K, t = 0, cnt = 0;
    cin >> N >> K;
    while(N>K){
        int temp = 0, n = N;
        while(n>1){
            if(n%2){
                temp++;
                n--;
            }
            n/=2;
        }
        if(temp+n<=K){
            cout << cnt;
            return 0;
        }
        if(N%2){
            cnt+=(1<<t);
            N++;
        }
        N/=2;
        t++;
    }
    cout << cnt;
}