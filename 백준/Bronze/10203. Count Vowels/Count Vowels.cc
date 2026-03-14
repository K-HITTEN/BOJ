#include<iostream>

using namespace std;

int T, cnt;
string s, c = "aeiou";

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    cin >> T;
    while(T--){
        cin >> s;
        cnt = 0;
        for(int i = 0; i < s.length(); i++){
            for(int j = 0; j < 5; j++){
                if(s[i]==c[j]){
                    cnt++;
                    break;
                }
            }
        }
        cout << "The number of vowels in " << s << " is " << cnt << ".\n";
    }
}