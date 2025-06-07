#include<iostream>

using namespace std;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    int T;
    string s;
    cin >> T;
    while(T--){
        cin >> s;
        cout << s[0]+s[2]-'0'-'0' << "\n";
    }
}