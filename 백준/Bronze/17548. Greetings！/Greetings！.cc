#include <iostream>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int main(void){
    fastio;
    int cnt = 0;
    string s; 
    cin >> s;
    for(int i = 0; i < s.length(); i++){
        if(s[i]=='e')cnt++;
    }
    cout << 'h';
    for(int i = 0; i < cnt*2; i++){
        cout << 'e';
    }
    cout << 'y';
}