#include<iostream>

using namespace std;

int N, map[100][100];
long long dp[100][100];

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    cin >> N;
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++)cin >> map[i][j];
    }
    dp[0][0] = 1;
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            if(!dp[i][j]||(i==N-1&&j==N-1))continue; 
            if(map[i][j] + i < N)dp[i+map[i][j]][j] += dp[i][j];
            if(map[i][j] + j < N)dp[i][j+map[i][j]] += dp[i][j];
        }
    }
    cout << dp[N-1][N-1];
}