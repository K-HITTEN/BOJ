#include <iostream>
#include <algorithm>
#include <cstring>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)
 
using namespace std;
 
int dp[101][101][101] = {0,};
 
int main(void){
    fastio;
    string s1, s2, s3;
    cin >> s1 >> s2 >> s3;
    for(int i = 1; i<= s1.length(); i++){
        for(int j = 1; j <= s2.length(); j++){
            for(int k = 1; k <= s3.length(); k++){
                if(s1[i-1] == s2[j-1] &&s2[j-1] == s3[k-1]) dp[i][j][k] = dp[i-1][j-1][k-1] + 1;
                else dp[i][j][k] = max(dp[i-1][j][k],max(dp[i][j-1][k],dp[i][j][k-1]));
            }
        }
    }
    cout << dp[s1.length()][s2.length()][s3.length()];
}