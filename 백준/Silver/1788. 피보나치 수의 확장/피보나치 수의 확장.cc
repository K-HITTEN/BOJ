#include <iostream>
#include <cmath>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int dp[1000001] = {0,};

int main(void){
    fastio;
    int N;
    bool minus = false;
    cin >> N;
    if(N == 0){
        cout << 0 <<"\n" << 0;
        return 0;
    }
    if(N < 0) minus = true;
    N = abs(N);
    dp[0] = 0;
    dp[1] = 1;
    for(int i = 2; i <= N; i++){
        dp[i] = (dp[i-1] + dp[i-2])%1000000000;
    }
    if(minus && N%2==0)cout<< -1;
    else cout << 1;
    cout <<"\n" << dp[N];
}