#include<iostream>

using namespace std;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    string s;
    int T;
    cin >> T;
    while(T--){
        cin >> s;
        cout << s.length() << "\n";
    }
}