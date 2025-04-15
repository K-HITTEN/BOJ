#include<iostream>

using namespace std;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    string s;
    cin >> s;
    int cnt = 0;
    for(int i = 0; i < s.length(); i++){
        if(s[i]=='0')cnt++;
    }
    for(int i = s.length()-1; i>=0; i--){
        if(s[i]=='0')cnt--;
        else break;
    }
    cout << cnt;
}