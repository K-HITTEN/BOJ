#include<iostream>

using namespace std;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    string s;
    cin >> s;
    int idx = 0, tmp = s.length();
    while(idx<tmp){
        cout << s[idx];
        idx += s[idx]-'A'+1;
    }
}