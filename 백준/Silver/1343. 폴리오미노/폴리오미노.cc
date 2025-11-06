#include<iostream>

using namespace std;

string s;
bool FLAG;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    cin >> s;
    for(int i = 0; i < s.length(); i++){
        if(s[i]=='.')continue;
        if(i+1 == s.length() || s[i+1] == '.')FLAG = true;
        else if(i+2 != s.length() && s[i+2] == 'X'){
            if(i+3 == s.length() || s[i+3] == '.')FLAG = true;
            else {
                s[i] = s[i+1] = s[i+2] = s[i+3] = 'A';
                i += 3;
            }
        }
        else {
            s[i] = s[i+1] = 'B';
            i++;
        }
        
        if(FLAG)break;
    }
    if(FLAG)cout << -1;
    else cout << s;
}