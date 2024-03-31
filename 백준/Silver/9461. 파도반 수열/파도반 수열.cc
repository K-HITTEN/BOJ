#include <iostream>
#define fastio cin.tie(0) -> sync_with_stdio(0)

using namespace std;

long dp[101] = {0,};

int main(void){
   fastio;
   dp[1] = dp[2] = dp[3] = 1;
   for(int i = 4; i < 101; i++){
       dp[i] = dp[i-3] + dp[i-2];
   }
   int T, n;
   cin >> T;
   for(int i = 0; i < T; i++){
       cin >> n;
       cout << dp[n] << '\n';
   }
}