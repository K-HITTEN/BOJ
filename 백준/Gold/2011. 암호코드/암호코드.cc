#include<iostream>

using namespace std;

string s;
bool check[5001];
int dp[5001];

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    cin >> s;
    for(int i = 0; i < s.length(); i++){
        if(s[i]=='0'){
            if(i==0||s[i-1]=='0'||s[i-1]>'2'){
                cout << 0;
                return 0;
            }
        }
    }
    for(int i = 2; i <= s.length(); i++){
        if(s[i-2]=='1'||(s[i-2]=='2'&&s[i-1]<'7')){
            if(i==s.length())check[i] = true;
            else if(s[i]!='0')check[i] = true;
        }
    }
    dp[0] = dp[1] = 1;
    for(int i = 2; i <= s.length(); i++){
        if(s[i-1]!='0')dp[i] = dp[i-1];
        if(check[i])dp[i] += dp[i-2];
        dp[i] %= 1000000;
    }
    cout << dp[s.length()];
}