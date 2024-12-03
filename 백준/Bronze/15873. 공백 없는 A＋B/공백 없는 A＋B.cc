#include<iostream>

using namespace std;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    string s;
    cin >> s;
    if(s.length()==2)cout<<(int)(s[0]-'0')+(int)(s[1]-'0');
    else if(s.length()==4)cout << 20;
    else if(s[1]=='0')cout << 10+(int)(s[2]-'0');
    else cout << 10+(int)(s[0]-'0');
}