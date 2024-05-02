#include <iostream>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int main(void){
    fastio;
    string s;
    cin >> s;
    for(int i = 0; i < s.length(); i++)s[i]-=32;
    cout << s;
}