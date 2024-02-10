#include <iostream>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;


int main(void){
    fastio;
    string s;
    cin >> s;
    for(int i = 0; i < s.length(); i++){
        if(s[i]<97) cout << (char)(s[i]+32);
        else cout << (char)(s[i]-32);
    }
}