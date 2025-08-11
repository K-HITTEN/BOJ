#include<iostream>

using namespace std;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    int N, cnt = 0;
    cin >> N;
    string s;
    while(N--){
        cin >> s;
        for(int i = 0; i < s.length()-1; i++){
            if((s[i]=='0'&&s[i+1]=='1')||(s[i]=='O'&&s[i+1]=='I')){
                cnt++;
                break;
            }
        }
    }
    cout << cnt;
}