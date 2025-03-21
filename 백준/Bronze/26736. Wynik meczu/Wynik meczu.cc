#include<iostream>

using namespace std;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    string s;
    int a = 0, b = 0;
    cin >> s;
    for(int i = 0; i < s.length(); i++){
        if(s[i]=='A')a++;
        else b++;
    }
    cout << a << " : " << b;
}