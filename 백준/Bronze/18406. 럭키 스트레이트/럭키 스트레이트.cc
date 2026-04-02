#include<iostream>

using namespace std;

string s;
int l, r;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    cin >> s;
    for(int i = 0; i < s.length()/2; i++)l+=(s[i]-'0');
    for(int i = s.length()/2; i < s.length(); i++)r+=(s[i]-'0');
    if(l==r)cout << "LUCKY";
    else cout << "READY";
}