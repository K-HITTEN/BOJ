#include <iostream>
#include<vector>
using namespace std;

int solution(vector<vector<int>> board)
{
    int ret = 0, n = board.size(), m = board[0].size();
    vector<vector<int>> dp(n, vector<int>(m, 0));
    
    for(int i = 0; i < n; i++){
        dp[i][0] = board[i][0];
        ret = max(ret,dp[i][0]);
    }
    for(int i = 0; i < m; i++){
        dp[0][i] = board[0][i];
        ret = max(ret, dp[0][i]);
    }
    for(int i = 1; i < n; i++){
        for(int j = 1; j < m; j++){
            if(board[i][j])dp[i][j] = min(dp[i-1][j-1],min(dp[i-1][j],dp[i][j-1]))+1;
            ret = max(ret, dp[i][j]);
        }
    }
    return ret*ret;
}