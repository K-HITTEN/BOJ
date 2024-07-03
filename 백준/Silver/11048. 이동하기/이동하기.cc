#include <iostream>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int dp[1001][1001], arr[1001][1001];

int main(void){
    fastio;
    int N, M;
    cin >> N >> M;
    for(int i = 1; i <= N; i++){
        for(int j = 1; j <= M; j++){
            cin >> arr[i][j];
        }
    }
    for(int i = 1; i <= N; i++){
        for(int j = 1; j <= M; j++){
            dp[i][j] = arr[i][j] + max(dp[i-1][j],max(dp[i][j-1],dp[i-1][j-1]));
        }
    }
    cout << dp[N][M];
}