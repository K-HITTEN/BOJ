#include<iostream>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int main(void){
    fastio;
    int N;
    string s;
    char c;
    cin >> N;
    while(N--){
        cin >> s;
        c = s[0];
        cout<< c;
        for(int i = 1; i < s.length(); i++){
            if(c==s[i])continue;
            c = s[i];
            cout << c;
        }
        cout << '\n';
    }
}