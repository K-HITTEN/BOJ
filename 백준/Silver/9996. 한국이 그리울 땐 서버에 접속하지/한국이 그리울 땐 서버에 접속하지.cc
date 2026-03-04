#include<iostream>

using namespace std;

int N;
string s, tmp;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    cin >> N >> s;
    while(N--){
        cin >> tmp;
        bool FLAG = true;
        if(tmp.length()<s.length()-1){
            cout << "NE\n";
            continue;
        }
        for(int i = 0; i < s.length(); i++){
            if(s[i]=='*')break;
            if(s[i]!=tmp[i])FLAG = false;
        }
        for(int i = 1; i < s.length(); i++){
            if(s[s.length()-i]=='*')break;
            if(s[s.length()-i]!=tmp[tmp.length()-i])FLAG = false;
        }
        if(FLAG)cout << "DA\n";
        else cout << "NE\n";
    }
}