#include <iostream>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

string s;

void s1(){
    for(int i = 1; i <= s.length(); i++){
        if(i%3==0)cout << ".*..";
        else cout << ".#..";
    }
}

void s2(){
    cout << "\n.";
    for(int i = 1; i<= s.length(); i++){
        if(i%3==0)cout << "*.*.";
        else cout << "#.#.";
    }
}

int main(void){
    fastio;
    cin >> s;
    cout << '.';
    s1();
    s2();
    cout << "\n#";
    for(int i = 1; i <= s.length(); i++){
        cout << '.' << s[i-1] << '.';
        if(((i+1)%3==0&&i+1<=s.length())||i%3==0)cout <<'*';
        else cout <<'#';
    }
    s2();
    cout << "\n.";
    s1();
}