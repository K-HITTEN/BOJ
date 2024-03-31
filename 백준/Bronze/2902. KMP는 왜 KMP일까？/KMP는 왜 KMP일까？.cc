#include <iostream>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int main(void){
    fastio;
    string s, res = "";
    cin >> s;
    res += s[0];
    for(int i = 1; i < s.length(); i++){
        if(s[i] == '-'){
            res += s[i+1];
        }
    }
    cout << res;
}