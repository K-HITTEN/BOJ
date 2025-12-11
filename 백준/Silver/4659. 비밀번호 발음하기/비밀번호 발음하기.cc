#include<iostream>

using namespace std;

int cnt1, cnt2;
bool FLAG1, FLAG2, FLAG3;
string s;

bool check(char c){
    if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')return true;
    else return false;
}

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    while(true){
        cin >> s;
        FLAG1 = FLAG2 = FLAG3 = false;
        cnt1 = cnt2 = 0;
        if(s == "end")break;
        for(int i = 0; i < s.length(); i++){
            if(check(s[i])){
                FLAG1 = true;
                cnt1++;
                cnt2 = 0;
            }else{
                cnt1 = 0;
                cnt2++;
            }
            if(cnt1 > 2 || cnt2 > 2)FLAG2 = true;
            if(i != 0 && s[i] == s[i-1]){
                if(s[i] == 'e' || s[i] == 'o')continue;
                else FLAG3 = true;
            }
        }
        cout << '<' << s << '>' << " is ";
        if(FLAG1&&!FLAG2&&!FLAG3)cout << "acceptable.\n";
        else cout << "not acceptable.\n";
    }
}