#include <iostream>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int main(void){
    fastio;
    string s;
    cin >> s;
    int K = 0,D = 0,A = 0;
    int i = 0;
    for(; i < s.length(); i++){
        if(s[i] == '/')break;
        K*=10;
        K+=s[i]-'0';
    }
    i++;
    for(; i < s.length(); i++){
        if(s[i] == '/')break;
        D*=10;
        D+=s[i]-'0';
    }
    i++;
    for(; i < s.length(); i++){
        A*=10;
        A+=s[i]-'0';
    }
    if(K+A<D||D==0)cout <<"hasu";
    else cout <<"gosu";
}