#include<iostream>
#include<map>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int main(void){
    fastio;
    map<string,string> m;
    m.insert({"CU","see you"});
    m.insert({":-)","I’m happy"});
    m.insert({":-(","I’m unhappy"});
    m.insert({";-)","wink"});
    m.insert({":-P","stick out my tongue"});
    m.insert({"(~.~)","sleepy"});
    m.insert({"TA","totally awesome"});
    m.insert({"CCC","Canadian Computing Competition"});
    m.insert({"CUZ","because"});
    m.insert({"TY","thank-you"});
    m.insert({"YW","you’re welcome"});
    m.insert({"TTYL","talk to you later"});
    string s;
    while(true){
        cin >> s;
        if(m.find(s)!=m.end())cout << m[s] << "\n";
        else cout << s << "\n";
        if(s == "TTYL")break;
    }
}