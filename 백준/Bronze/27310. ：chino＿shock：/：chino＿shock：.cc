#include <iostream>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;


int main(void){
    fastio;
    int n = 0, k = 0;
    string s;
    cin >> s;
    for(int i = 0; i < s.length(); i++){
        if(s[i] == ':')n++;
        else if(s[i] == '_')k++;
    }
    cout << s.length()+n+5*k;
}