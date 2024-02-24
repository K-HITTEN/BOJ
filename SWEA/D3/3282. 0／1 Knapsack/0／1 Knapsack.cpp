#include <iostream>
#include <algorithm>
#include <cstring>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int dp[101][1001] = {0,};
int arr[101][2] = {0,};

int main(void){
    fastio;
    int T;
    cin >> T;
    for(int t = 1; t <= T; t++){
        memset(dp,0,sizeof(dp));
        memset(arr,0,sizeof(arr));
        int N, K;
        cin >> N >> K;
        for(int i = 1; i <= N; i++){
            cin >> arr[i][0] >> arr[i][1];
        }
        for(int i = 1; i <= N; i++){
            for(int j = 1; j <= K; j++){
                if(arr[i][0] <= j){
                    dp[i][j] = max(dp[i-1][j], dp[i-1][j-arr[i][0]]+arr[i][1]);
                }else{
                    dp[i][j] = dp[i-1][j];
                }
            }
        }
        cout << "#" << t <<" " << dp[N][K] <<'\n';
    }
}