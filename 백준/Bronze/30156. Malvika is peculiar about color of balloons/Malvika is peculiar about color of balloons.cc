#include<iostream>

using namespace std;

int T, a, b;
string s;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    cin >> T;
    while(T--){
        cin >> s;
        a = b = 0;
        for(int i = 0; i < s.length(); i++){
            if(s[i]=='a')a++;
            else b++;
        }
        cout << min(a,b) << '\n';
    }
}