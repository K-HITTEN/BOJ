#include<iostream>
#include<string>

using namespace std;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    string s;
    char c;
    getline(cin,s);
    for(int i = 0; i < s.length(); i++){
        if(('a'<=s[i] && s[i]<='m')||('A'<=s[i] && s[i]<='M'))s[i]+=13;
        else if(('n'<=s[i] && s[i]<='z')||('N'<=s[i] && s[i]<='Z'))s[i]-=13;
    }
    cout << s;
}