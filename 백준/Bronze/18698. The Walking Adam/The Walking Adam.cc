#include<iostream>

using namespace std;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    int T, cnt;
    bool FLAG;
    string s;
    cin >> T;
    while(T--){
        cin >> s;
        cnt = 0;
        FLAG = false;
        for(int i = 0; i < s.length(); i++){
            if(!FLAG&&s[i]=='U')cnt++;
            else FLAG = true;
        }
        cout << cnt << '\n';
    }
}