#include<iostream>

using namespace std;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    int b = 0,c = 0;
    string s;
    cin >> s;
    for(int i = 0; i < s.length(); i++){
        if(s[i]=='B')b++;
        else c++;
    }
    cout << b/2+c/2;
}