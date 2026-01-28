#include<iostream>

using namespace std;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    string s;
    cin >> s;
    for(int i = 0; i < s.length(); i++){
        if(s[i]=='A')cout << 'X';
        else if(s[i]=='B')cout << 'Y';
        else if(s[i]=='C')cout << 'Z';
        else cout << (char)(s[i]-3);
    }
}