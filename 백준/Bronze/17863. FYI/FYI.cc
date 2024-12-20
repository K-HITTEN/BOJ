#include<iostream>

using namespace std;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    string s;
    cin >> s;
    if(s[0]=='5'&&s[1]=='5'&&s[2]=='5')cout << "YES";
    else cout << "NO";
}