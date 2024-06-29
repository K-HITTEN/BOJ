#include <iostream>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int main(void){
    fastio;
    string s;
    int M = 0, O = 0, B = 0, I = 0, S = 0;
    cin >> s;
    for(int i = 0; i < s.length(); i++){
        if(s[i] == 'M')M++;
        else if(s[i] == 'O')O++;
        else if(s[i] == 'B')B++;
        else if(s[i] == 'I')I++;
        else if(s[i] == 'S')S++;
    }
    if(M != 0 && O != 0 && B != 0 && I != 0 && S != 0)cout << "YES";
    else cout << "NO";
}