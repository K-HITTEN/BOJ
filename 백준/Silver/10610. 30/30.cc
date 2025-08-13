#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    int sum = 0;
    string s;
    cin >> s;
    sort(s.begin(),s.end(),greater<>());
    for(int i = 0; i < s.length(); i++)sum+=(s[i]-'0');
    if(s[s.length()-1] != '0' || sum%3 != 0)cout << -1;
    else cout << s;
}