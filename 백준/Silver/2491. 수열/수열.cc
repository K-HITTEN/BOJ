#include <iostream>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int dp[100001][2], arr[100001], max_val = 1;

int main(void){
    fastio;
    int N;
    cin >> N >> arr[0];
    dp[0][1] = dp[0][0] = 1;
    for(int i = 1; i < N; i++){
        cin >> arr[i];
        if(arr[i-1] == arr[i]){
            dp[i][0] = dp[i-1][0]+1;
            dp[i][1] = dp[i-1][1]+1;
        }else if(arr[i-1] < arr[i]){
            dp[i][0] = dp[i-1][0]+1;
            dp[i][1] = 1; 
        }else{
            dp[i][0] = 1;
            dp[i][1] = dp[i-1][1]+1;
        }
        max_val = max(max_val,max(dp[i][0],dp[i][1]));
    }
    cout << max_val;
}