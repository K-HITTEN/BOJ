#include<iostream>

using namespace std;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    int N;
    string s;
    cin >> N >> s;
    for(int i = 0; i < s.length(); i++){
        if(s[i]=='I')cout << 'i';
        else cout << 'L';
    }
}