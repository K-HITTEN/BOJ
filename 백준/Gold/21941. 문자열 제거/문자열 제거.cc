#include <iostream>
#include <vector>
#include <string>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

string s, tmp, tmp2;
long long N, dp[1001];
vector<pair<string,int>> v;

long long make_dp(int idx){
    if(dp[idx]!=-1)return dp[idx];
    if(idx>=s.length())return 0;
    long long ret = 0;
    for(int i = 0; i < v.size(); i++){
        if(s[idx]!=v[i].first[0]||idx+v[i].first.length()>s.length()||v[i].first != s.substr(idx,v[i].first.length()))continue;
        ret = max(ret,v[i].second+make_dp(idx+v[i].first.length()));
    }
    ret = max(ret,1+make_dp(idx+1));
    return dp[idx] = ret;
}

int main(void){
    fastio;
    int n;
    getline(cin,s);
    getline(cin,tmp);
    N = stoi(tmp);
    fill(dp,dp+1001,-1);
    for(int i = 0; i < N; i++){
        getline(cin, tmp, ' ');
        getline(cin, tmp2);
        v.push_back({tmp,stoi(tmp2)});
    }
    for(int i = s.length()-1; i>=0; i--){
        make_dp(i);
    }
    cout << dp[0];
}