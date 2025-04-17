#include<iostream>

using namespace std;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    int N;
    string s;
    cin >> N >> s;
    if(s[s.length()-1]=='G'){
        for(int i = 0; i < s.length()-1; i++)cout << s[i];
    }else cout << s << 'G';
}