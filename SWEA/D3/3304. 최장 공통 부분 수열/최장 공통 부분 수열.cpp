#include <iostream>
#include <algorithm>
#include <cstring>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int dp[1001][1001] = {0,};

int main(void){
    fastio;
    int T;
    string s1, s2;
    cin >> T;
    for(int t = 1; t <= T; t++){
        cin >> s1 >> s2;
        memset(dp,0,sizeof(dp));
        for(int i = 1; i<= s1.length(); i++){
            for(int j = 1; j <= s2.length(); j++){
                if(s1[i-1] == s2[j-1]) dp[i][j] = dp[i-1][j-1] + 1;
                else dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
            }
        }
        cout <<"#" << t << " " << dp[s1.length()][s2.length()] << "\n";
    }
}