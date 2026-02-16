#include<iostream>

using namespace std;

int N, tmp;
string s;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    cin >> N;
    while(N--){
        cin >> s;
        tmp = s[s.length()-1]-'0';
        if(tmp%2)cout << "odd\n";
        else cout << "even\n";
    }
    
}