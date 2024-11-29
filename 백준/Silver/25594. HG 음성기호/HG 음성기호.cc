#include<iostream>
#include<map>

using namespace std;  

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    map<string,string> m;
    m.insert({"aespa","a"});
    m.insert({"baekjoon","b"});
    m.insert({"cau","c"});
    m.insert({"debug","d"});
    m.insert({"edge","e"});
    m.insert({"firefox","f"});
    m.insert({"golang","g"});
    m.insert({"haegang","h"});
    m.insert({"iu","i"});
    m.insert({"java","j"});
    m.insert({"kotlin","k"});
    m.insert({"lol","l"});
    m.insert({"mips","m"});
    m.insert({"null","n"});
    m.insert({"os","o"});
    m.insert({"python","p"});
    m.insert({"query","q"});
    m.insert({"roka","r"});
    m.insert({"solvedac","s"});
    m.insert({"tod","t"});
    m.insert({"unix","u"});
    m.insert({"virus","v"});
    m.insert({"whale","w"});
    m.insert({"xcode","x"});
    m.insert({"yahoo","y"});
    m.insert({"zebra","z"});
    string s, tmp="", ret="";
    cin >> s;
    for(int i = 0; i < s.length(); i++){
        tmp += s[i];
        if(m.find(tmp)!=m.end()){
            ret+=m[tmp];
            tmp = "";
        }
    }
    if(tmp=="")cout << "It's HG!\n" << ret;
    else cout << "ERROR!";
    
}