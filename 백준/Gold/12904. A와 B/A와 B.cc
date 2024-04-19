#include <iostream>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

bool FLAG;

void search(string s1, string s2){
    if(FLAG)return;
    if(s1.length() == s2.length()){
        if(s1 == s2)FLAG = true;
        return;
    }
    if(s2[s2.length()-1] == 'A'){
        string tmp = "";
        for(int i = 0; i < s2.length()-1; i++){
            tmp += s2[i];
        }
        search(s1,tmp);
    }
    else{
        string tmp = "";
        for(int i = s2.length()-2; i>=0; i--){
            tmp += s2[i];
        }
        search(s1,tmp);
    }
}

int main(void){
    fastio;
    string S, T;
    cin >> S >> T;
    search(S,T);
    cout << FLAG;
}