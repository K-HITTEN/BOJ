#include <iostream>
#include <set>
#include <string>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int main(void){
    fastio;
    set<string> s;
    s.insert("Never gonna give you up");
    s.insert("Never gonna let you down");
    s.insert("Never gonna run around and desert you");
    s.insert("Never gonna make you cry");
    s.insert("Never gonna say goodbye");
    s.insert("Never gonna tell a lie and hurt you");
    s.insert("Never gonna stop");
    string tmp;
    int N;
    cin >> N;
    bool FLAG = false;
    getline(cin,tmp);
    for(int i = 0; i < N; i++){
        getline(cin,tmp);
        if(s.find(tmp) == s.end())FLAG = true;
    }
    if(FLAG)cout << "Yes";
    else cout << "No";
}