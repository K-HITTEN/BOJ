#include <iostream>
#include <string>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int main(void){
    fastio;
    string s;
    char c1, c2;
    int n, count = 1;
    while(true){
        cin >> c1 >> c2;
        if(c1 == '#' && c2 == '#')break;
        cin >> n;
        cout << "Case " << count << "\n";
        getline(cin,s);
        for(int i = 0; i < n; i++){
            getline(cin,s);
            for(int j = 0; j < s.length(); j++){
                if(s[j]==c1 || s[j]==(char)((int)c1-32) || s[j]==c2 || s[j]==(char)((int)c2-32))cout << '_';
                else cout << s[j];
            }
            cout << "\n";
        }
        cout << "\n";
        count++;
    }
}