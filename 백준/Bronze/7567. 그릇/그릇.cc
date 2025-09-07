#include<iostream>

using namespace std;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    string s;
    cin >> s;
    int ret = 10;
    for(int i = 1; i < s.length(); i++){
        if(s[i]==s[i-1])ret+=5;
        else ret+=10;
    }
    cout << ret;
}