#include<iostream>
#include<string>

using namespace std;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    int T;
    cin >> T;
    string s;
    getline(cin,s);
    while(T--){
        getline(cin,s);
        cout << s;
        if(s[s.length()-1]!='.')cout<<'.';
        cout <<"\n";
    }
}