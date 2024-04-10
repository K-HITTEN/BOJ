#include <iostream>
#include <algorithm>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

bool check[2502][2502];
int dp[2502];

int main(void){
    fastio;
    string s;
    cin >> s;
    s = ' '+ s;
    for(int i = 1; i < s.length(); i++)check[i][i] = true;
    for(int i = 1; i < s.length()-1; i++)if(s[i] == s[i+1])check[i][i+1] = true;
    for (int i = s.length()-3; i > 0; i--) {
		for (int j = i+2; j < s.length(); j++) {
			if (s[i] == s[j] && check[i + 1][j - 1]) check[i][j] = true;
		}
	}
    for(int i = 1; i < s.length(); i++){
        dp[i] = 2501;
        for(int j = 1; j <= i; j++){
            if(check[j][i])dp[i] = min(dp[i],dp[j-1]+1);
        }
    }
    cout << dp[s.length()-1];
}