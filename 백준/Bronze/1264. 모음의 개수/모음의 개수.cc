#include <iostream>
#include <string>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int main(void){
    fastio;
    string s;
    while(true){
        getline(cin,s);
        if(s == "#")break;
        int count = 0;
        for(int i = 0; i < s.length(); i++){
            if(s[i] == 'a'|| s[i] == 'e'||s[i] == 'i'||s[i] == 'o'||s[i] == 'u'||s[i] == 'A'|| s[i] == 'E'||s[i] == 'I'||s[i] == 'O'||s[i] == 'U')count++;
        }
        cout << count << "\n";
    }
}