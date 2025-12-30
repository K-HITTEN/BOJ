#include<iostream>
#include<string>

using namespace std;

int T;
string s;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    cin >> T;
    getline(cin,s);
    while(T--){
        getline(cin,s);
        if(s[0]>=97)s[0]-=32;
        cout << s << '\n';
    }
}