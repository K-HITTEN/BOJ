#include<iostream>
#include<string>
#include<sstream>

using namespace std;

string s;
double T, ret;
char c;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    cout << fixed;
    cout.precision(2);
    cin >> T;
    cin.ignore();
    while(T--){
        getline(cin, s);
        stringstream ss(s);
        ss >> ret;
        while(ss >> c){
            if(c == '@')ret*=3;
            else if(c == '%')ret+=5;
            else ret-=7;
        }
        cout << ret << '\n';
    }
}