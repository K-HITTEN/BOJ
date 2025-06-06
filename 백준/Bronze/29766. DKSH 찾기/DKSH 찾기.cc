#include<iostream>

using namespace std;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    string s;
    int cnt = 0;
    cin >> s;
    for(int i = 0; i < s.length()-3; i++){
        if(s[i]=='D'&&s[i+1]=='K'&&s[i+2]=='S'&&s[i+3]=='H')cnt++;
    }
    cout << cnt;
}
