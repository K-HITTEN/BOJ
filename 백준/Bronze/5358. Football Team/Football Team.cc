#include <iostream>
#include <string>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int main(void){
    fastio;
    string s;
    while(true){
        getline(cin,s);
        if (s.empty()) break;
        for(int i = 0; i < s.length(); i++){
            if(s[i] == 'i')cout << 'e';
            else if(s[i] == 'e')cout << 'i';
            else if(s[i] == 'I')cout << 'E';
            else if(s[i] == 'E')cout << 'I';
            else cout << s[i];
        }
        cout << "\n";
    }
}