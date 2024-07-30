#include <iostream>
#include <string>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int main(void){
    fastio;
    string s;
    while(true){
        getline(cin,s);
        if(s=="#")break;
        int tmp = 0;
        for(int i = 0; i < s.length(); i++){
            if(s[i] == ' '){
                for(int j = i-1; j>=tmp; j--){
                    cout << s[j];
                }
                cout << " ";
                tmp = i+1;
            }
        }
        for(int j = s.length()-1; j>=tmp; j--)cout<<s[j];
        cout << '\n';
    }
}