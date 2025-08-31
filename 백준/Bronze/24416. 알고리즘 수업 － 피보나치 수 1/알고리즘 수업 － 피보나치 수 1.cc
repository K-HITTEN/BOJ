#include<iostream>

using namespace std;


int N, cnt1 = 0, cnt2 = 0, dp[41];

int fib(int n){
    if(n == 1 || n == 2){
        cnt1++;
        return 1;
    }
    else return fib(n-1)+fib(n-2);
}

int fibonacci(int n){
    dp[1] = dp[2] = 1;
    for(int i = 3; i <= N; i++){
        dp[i] = dp[i-1] + dp[i-2];
        cnt2++;
    }
    return dp[n];
}

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    cin >> N;
    fib(N);
    fibonacci(N);
    cout << cnt1 << " " << cnt2;
}