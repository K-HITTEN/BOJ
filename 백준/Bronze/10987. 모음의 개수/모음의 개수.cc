#include<iostream>

using namespace std;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    int cnt = 0;
    string s;
    cin >> s;
    for(int i = 0; i < s.length(); i++)if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')cnt++;
    cout << cnt;
}